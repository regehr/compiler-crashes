/****************************************************************************
**
** Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtQml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qv4mathobject_p.h"
#include "qv4objectproto_p.h"

#include <cmath>
#include <qmath.h>
#include <qnumeric.h>

#include <QtCore/qdatetime.h>
#include <QtCore/qthreadstorage.h>

using namespace QV4;

static const double qt_PI = 2.0 * ::asin(1.0);

MathObject::MathObject(ExecutionEngine *engine)
    : Object(engine)
{
    type = Type_MathObject;

    Scope scope(engine);
    ScopedObject protectThis(scope, this);

    defineReadonlyProperty(QStringLiteral("E"), Primitive::fromDouble(::exp(1.0)));
    defineReadonlyProperty(QStringLiteral("LN2"), Primitive::fromDouble(::log(2.0)));
    defineReadonlyProperty(QStringLiteral("LN10"), Primitive::fromDouble(::log(10.0)));
    defineReadonlyProperty(QStringLiteral("LOG2E"), Primitive::fromDouble(1.0/::log(2.0)));
    defineReadonlyProperty(QStringLiteral("LOG10E"), Primitive::fromDouble(1.0/::log(10.0)));
    defineReadonlyProperty(QStringLiteral("PI"), Primitive::fromDouble(qt_PI));
    defineReadonlyProperty(QStringLiteral("SQRT1_2"), Primitive::fromDouble(::sqrt(0.5)));
    defineReadonlyProperty(QStringLiteral("SQRT2"), Primitive::fromDouble(::sqrt(2.0)));

    defineDefaultProperty(QStringLiteral("abs"), method_abs, 1);
    defineDefaultProperty(QStringLiteral("acos"), method_acos, 1);
    defineDefaultProperty(QStringLiteral("asin"), method_asin, 0);
    defineDefaultProperty(QStringLiteral("atan"), method_atan, 1);
    defineDefaultProperty(QStringLiteral("atan2"), method_atan2, 2);
    defineDefaultProperty(QStringLiteral("ceil"), method_ceil, 1);
    defineDefaultProperty(QStringLiteral("cos"), method_cos, 1);
    defineDefaultProperty(QStringLiteral("exp"), method_exp, 1);
    defineDefaultProperty(QStringLiteral("floor"), method_floor, 1);
    defineDefaultProperty(QStringLiteral("log"), method_log, 1);
    defineDefaultProperty(QStringLiteral("max"), method_max, 2);
    defineDefaultProperty(QStringLiteral("min"), method_min, 2);
    defineDefaultProperty(QStringLiteral("pow"), method_pow, 2);
    defineDefaultProperty(QStringLiteral("random"), method_random, 0);
    defineDefaultProperty(QStringLiteral("round"), method_round, 1);
    defineDefaultProperty(QStringLiteral("sin"), method_sin, 1);
    defineDefaultProperty(QStringLiteral("sqrt"), method_sqrt, 1);
    defineDefaultProperty(QStringLiteral("tan"), method_tan, 1);
}

/* copies the sign from y to x and returns the result */
static double copySign(double x, double y)
{
    uchar *xch = (uchar *)&x;
    uchar *ych = (uchar *)&y;
    if (QSysInfo::ByteOrder == QSysInfo::BigEndian)
        xch[0] = (xch[0] & 0x7f) | (ych[0] & 0x80);
    else
        xch[7] = (xch[7] & 0x7f) | (ych[7] & 0x80);
    return x;
}

ReturnedValue MathObject::method_abs(CallContext *context)
{
    if (!context->callData->argc)
        return Encode(qSNaN());

    if (context->callData->args[0].isInteger()) {
        int i = context->callData->args[0].integerValue();
        return Encode(i < 0 ? - i : i);
    }

    double v = context->callData->args[0].toNumber();
    if (v == 0) // 0 | -0
        return Encode(0);

    return Encode(v < 0 ? -v : v);
}

ReturnedValue MathObject::method_acos(CallContext *context)
{
    double v = context->callData->argc ? context->callData->args[0].toNumber() : 2;
    if (v > 1)
        return Encode(qSNaN());

    return Encode(::acos(v));
}

ReturnedValue MathObject::method_asin(CallContext *context)
{
    double v = context->callData->argc ? context->callData->args[0].toNumber() : 2;
    if (v > 1)
        return Encode(qSNaN());
    else
        return Encode(::asin(v));
}

ReturnedValue MathObject::method_atan(CallContext *context)
{
    double v = context->callData->argc ? context->callData->args[0].toNumber() : qSNaN();
    if (v == 0.0)
        return Encode(v);
    else
        return Encode(::atan(v));
}

ReturnedValue MathObject::method_atan2(CallContext *context)
{
    double v1 = context->callData->argc ? context->callData->args[0].toNumber() : qSNaN();
    double v2 = context->callData->argc > 1 ? context->callData->args[1].toNumber() : qSNaN();

    if ((v1 < 0) && qIsFinite(v1) && qIsInf(v2) && (copySign(1.0, v2) == 1.0))
        return Encode(copySign(0, -1.0));

    if ((v1 == 0.0) && (v2 == 0.0)) {
        if ((copySign(1.0, v1) == 1.0) && (copySign(1.0, v2) == -1.0)) {
            return Encode(qt_PI);
        } else if ((copySign(1.0, v1) == -1.0) && (copySign(1.0, v2) == -1.0)) {
            return Encode(-qt_PI);
        }
    }
    return Encode(::atan2(v1, v2));
}

ReturnedValue MathObject::method_ceil(CallContext *context)
{
    double v = context->callData->argc ? context->callData->args[0].toNumber() : qSNaN();
    if (v < 0.0 && v > -1.0)
        return Encode(copySign(0, -1.0));
    else
        return Encode(::ceil(v));
}

ReturnedValue MathObject::method_cos(CallContext *context)
{
    double v = context->callData->argc ? context->callData->args[0].toNumber() : qSNaN();
    return Encode(::cos(v));
}

ReturnedValue MathObject::method_exp(CallContext *context)
{
    double v = context->callData->argc ? context->callData->args[0].toNumber() : qSNaN();
    if (qIsInf(v)) {
        if (copySign(1.0, v) == -1.0)
            return Encode(0);
        else
            return Encode(qInf());
    } else {
        return Encode(::exp(v));
    }
}

ReturnedValue MathObject::method_floor(CallContext *context)
{
    double v = context->callData->argc ? context->callData->args[0].toNumber() : qSNaN();
    return Encode(::floor(v));
}

ReturnedValue MathObject::method_log(CallContext *context)
{
    double v = context->callData->argc ? context->callData->args[0].toNumber() : qSNaN();
    if (v < 0)
        return Encode(qSNaN());
    else
        return Encode(::log(v));
}

ReturnedValue MathObject::method_max(CallContext *context)
{
    double mx = -qInf();
    for (int i = 0; i < context->callData->argc; ++i) {
        double x = context->callData->args[i].toNumber();
        if (x > mx || std::isnan(x))
            mx = x;
    }
    return Encode(mx);
}

ReturnedValue MathObject::method_min(CallContext *context)
{
    double mx = qInf();
    for (int i = 0; i < context->callData->argc; ++i) {
        double x = context->callData->args[i].toNumber();
        if ((x == 0 && mx == x && copySign(1.0, x) == -1.0)
                || (x < mx) || std::isnan(x)) {
            mx = x;
        }
    }
    return Encode(mx);
}

ReturnedValue MathObject::method_pow(CallContext *context)
{
    double x = context->callData->argc > 0 ? context->callData->args[0].toNumber() : qSNaN();
    double y = context->callData->argc > 1 ? context->callData->args[1].toNumber() : qSNaN();

    if (std::isnan(y))
        return Encode(qSNaN());

    if (y == 0) {
        return Encode(1);
    } else if (((x == 1) || (x == -1)) && std::isinf(y)) {
        return Encode(qSNaN());
    } else if (((x == 0) && copySign(1.0, x) == 1.0) && (y < 0)) {
        return Encode(qInf());
    } else if ((x == 0) && copySign(1.0, x) == -1.0) {
        if (y < 0) {
            if (::fmod(-y, 2.0) == 1.0)
                return Encode(-qInf());
            else
                return Encode(qInf());
        } else if (y > 0) {
            if (::fmod(y, 2.0) == 1.0)
                return Encode(copySign(0, -1.0));
            else
                return Encode(0);
        }
    }

#ifdef Q_OS_AIX
    else if (qIsInf(x) && copySign(1.0, x) == -1.0) {
        if (y > 0) {
            if (::fmod(y, 2.0) == 1.0)
                return Encode(-qInf());
            else
                return Encode(qInf());
        } else if (y < 0) {
            if (::fmod(-y, 2.0) == 1.0)
                return Encode(copySign(0, -1.0));
            else
                return Encode(0);
        }
    }
#endif
    else {
        return Encode(::pow(x, y));
    }
    // ###
    return Encode(qSNaN());
}

Q_GLOBAL_STATIC(QThreadStorage<bool *>, seedCreatedStorage);

ReturnedValue MathObject::method_random(CallContext *context)
{
    if (!seedCreatedStorage()->hasLocalData()) {
        qsrand(QTime(0,0,0).msecsTo(QTime::currentTime()) ^ reinterpret_cast<quintptr>(context));
        seedCreatedStorage()->setLocalData(new bool(true));
    }
    return Encode(qrand() / (double) RAND_MAX);
}

ReturnedValue MathObject::method_round(CallContext *context)
{
    double v = context->callData->argc ? context->callData->args[0].toNumber() : qSNaN();
    v = copySign(::floor(v + 0.5), v);
    return Encode(v);
}

ReturnedValue MathObject::method_sin(CallContext *context)
{
    double v = context->callData->argc ? context->callData->args[0].toNumber() : qSNaN();
    return Encode(::sin(v));
}

ReturnedValue MathObject::method_sqrt(CallContext *context)
{
    double v = context->callData->argc ? context->callData->args[0].toNumber() : qSNaN();
    return Encode(::sqrt(v));
}

ReturnedValue MathObject::method_tan(CallContext *context)
{
    double v = context->callData->argc ? context->callData->args[0].toNumber() : qSNaN();
    if (v == 0.0)
        return Encode(v);
    else
        return Encode(::tan(v));
}

