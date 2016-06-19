/*
 * Copyright 2010 Inalogic® Inc.
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License, as
 * published by the  Free Software Foundation; either version 2.1 or 3.0
 * of the License.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranties of
 * MERCHANTABILITY, SATISFACTORY QUALITY or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the applicable version of the GNU Lesser General Public
 * License for more details.
 *
 * You should have received a copy of both the GNU Lesser General Public
 * License along with this program. If not, see <http://www.gnu.org/licenses/>
 *
 * Authored by: Jay Taoko <jaytaoko@inalogic.com>
 *
 */


#include "Nux.h"

#include "EditTextBox.h"
#include "Layout.h"
#include "HLayout.h"
#include "VLayout.h"
#include "Validator.h"

namespace nux
{
  EditTextBox::EditTextBox(const char *Caption, NUX_FILE_LINE_DECL)
    :   View(NUX_FILE_LINE_PARAM)
  {
    m_Validator             = NULL;
    BlinkCursor             = false;
    m_ScrollTimerHandler    = 0;
    m_BlinkTimerFunctor     = 0;
    m_WriteAlpha            = true;
    m_Prefix                = "";
    m_Suffix                = "";

    key_nav_mode_           = false;
    text_input_mode_        = false;

    SetGeometry(Geometry(0, 0, 3 * DEFAULT_WIDGET_WIDTH, DEFAULT_WIDGET_HEIGHT));
    SetMinimumSize(DEFAULT_WIDGET_WIDTH, PRACTICAL_WIDGET_HEIGHT);
    SetGeometry(Geometry(0, 0, 3 * DEFAULT_WIDGET_WIDTH, DEFAULT_WIDGET_HEIGHT));
    mouse_down.connect(sigc::mem_fun(this, &EditTextBox::RecvMouseDown));
    mouse_drag.connect(sigc::mem_fun(this, &EditTextBox::RecvMouseDrag));
    mouse_up.connect(sigc::mem_fun(this, &EditTextBox::RecvMouseUp));
    mouse_double_click.connect(sigc::mem_fun(this, &EditTextBox::RecvMouseDoubleClick));

    key_down.connect(sigc::mem_fun(this, &EditTextBox::RecvKeyEvent));

    begin_key_focus.connect(sigc::mem_fun(this, &EditTextBox::RecvStartKeyFocus));
    end_key_focus.connect(sigc::mem_fun(this, &EditTextBox::RecvEndKeyFocus));

    SetText(Caption);
    SetTextColor(color::White);
    m_BackgroundColor = Color(0xFF343434); //COLOR_TEXTEDIT_BACKGROUNG;
    m_SelectedTextColor = Color(0xFFFAFAFA);
    m_SelectedTextBackgroundColor = Color(0xFF777777);
    m_TextBlinkColor = Color(0xFF003D0A);
    m_CursorColor = Color(0xFFDDDDDD);


    hlayout = new HLayout(NUX_TRACKER_LOCATION);
    SetLayout(hlayout);

    m_BlinkTimerFunctor = new TimerFunctor();
    m_BlinkTimerFunctor->tick.connect(sigc::mem_fun(this, &EditTextBox::BlinkCursorTimerInterrupt));

    m_ScrollTimerFunctor = new TimerFunctor();
    m_ScrollTimerFunctor->tick.connect(sigc::mem_fun(this, &EditTextBox::ScrollTimerInterrupt));

    SetAcceptKeyboardEvent(true);
    EnableDoubleClick(true);
  }

  EditTextBox::~EditTextBox()
  {
    delete m_BlinkTimerFunctor;
    delete m_ScrollTimerFunctor;
    delete m_Validator;

    if (m_BlinkTimerHandler.IsValid())
      GetTimer().RemoveTimerHandler(m_BlinkTimerHandler);

    m_BlinkTimerHandler = 0;
  }

  void EditTextBox::ScrollTimerInterrupt(void * /* v */)
  {
    Geometry base = GetGeometry();
    const Event& event = GetGraphicsDisplay()->GetCurrentEvent();

    int X = event.x;
    m_KeyboardHandler.CaretAutoScroll(event.x, event.y, base);

    if (((X < base.x) && (m_KeyboardHandler.GetCursorPosition() > 0)) ||
         ((X > base.x + base.GetWidth()) && (m_KeyboardHandler.GetCursorPosition() < m_KeyboardHandler.GetLength())))
    {
      m_ScrollTimerHandler = GetTimer().AddOneShotTimer(50, m_ScrollTimerFunctor, this);
    }
    else
    {
      GetTimer().RemoveTimerHandler(m_BlinkTimerHandler);
      m_ScrollTimerHandler = 0;
    }

    // While the mouse is selecting the text, no blinking of cursor
    StopBlinkCursor(false);
    StartBlinkCursor(false);

    QueueDraw();
  }

  void EditTextBox::BlinkCursorTimerInterrupt(void * /* v */)
  {
    GetTimer().RemoveTimerHandler(m_BlinkTimerHandler);
    m_BlinkTimerHandler = GetTimer().AddOneShotTimer(500, m_BlinkTimerFunctor, this);
    BlinkCursor = !BlinkCursor;
    QueueDraw();
  }

  void EditTextBox::StopBlinkCursor(bool BlinkState)
  {
    GetTimer().RemoveTimerHandler(m_BlinkTimerHandler);
    m_BlinkTimerHandler = 0;
    BlinkCursor = BlinkState;
    QueueDraw();
  }

  void EditTextBox::StartBlinkCursor(bool BlinkState)
  {
    m_BlinkTimerHandler = GetTimer().AddOneShotTimer(500, m_BlinkTimerFunctor, this);
    BlinkCursor = BlinkState;
    QueueDraw();
  }

  void EditTextBox::SetValidator(const Validator *validator)
  {
    nuxAssert(validator != 0);
    delete m_Validator;
    m_Validator = validator->Clone();
  }

  void EditTextBox::Draw(GraphicsEngine &graphics_engine, bool /* force_draw */)
  {
    Geometry base = GetGeometry();

    {
      graphics_engine.PushClippingRectangle(base);

      GetPainter().Paint2DQuadColor(graphics_engine, base, Color(m_BackgroundColor));

      if (HasKeyboardFocus())
      {

        GetPainter().PaintColorTextLineEdit(graphics_engine, GetGeometry(),
                                         m_KeyboardHandler.GetTextLine(),
                                         GetTextColor(),
                                         m_WriteAlpha,
                                         m_SelectedTextColor,
                                         m_SelectedTextBackgroundColor,
                                         m_TextBlinkColor,
                                         m_CursorColor,
                                         !BlinkCursor,
                                         m_KeyboardHandler.GetCursorPosition(),
                                         m_KeyboardHandler.GetPositionX(),
                                         m_KeyboardHandler.GetTextSelectionStart(),
                                         m_KeyboardHandler.GetTextSelectionEnd()
                                        );
      }
      else
      {
        GetPainter().PaintTextLineStatic(graphics_engine, GetFont(), GetGeometry(),
                                      m_KeyboardHandler.GetTextLine(),
                                      GetTextColor());
      }
    }
    graphics_engine.PopClippingRectangle();
  }

  void EditTextBox::DrawContent(GraphicsEngine & /* graphics_engine */, bool /* force_draw */)
  {

  }

  void EditTextBox::SetText(const char *Caption)
  {
    std::string s(Caption);
    SetText(s);
  }

  void EditTextBox::SetText(const std::string &Caption)
  {
    std::string s(Caption);
    size_t pos = s.find(m_Prefix, 0);
    if (pos == 0)
    {
      s.erase(0, m_Prefix.size());
    }
    pos = s.rfind(m_Suffix);
    if (pos != std::string::npos && pos == s.size() - m_Suffix.size())
    {
      s.erase(pos);
    }

    if (ValidateKeyboardEntry(s.c_str()))
    {
      m_Text = (m_Prefix + s) + m_Suffix;
      m_KeyboardHandler.SetText(m_Text);
      m_temporary_caption = m_Text;
      sigSetText.emit(this);
    }

    QueueDraw();
  }


  const char *EditTextBox::GetText() const
  {
    return m_Text.c_str();
  }

//! Return a caption string striping out the prefix and the suffix
  std::string EditTextBox::GetCleanText() const
  {
    std::string CleanText(m_Text);
    size_t pos = CleanText.find(m_Prefix, 0);
    if (pos == 0)
    {
      CleanText.erase(0, m_Prefix.size());
    }
    pos = CleanText.rfind(m_Suffix);
    if (pos != std::string::npos && pos == CleanText.size() - m_Suffix.size())
    {
      CleanText.erase(pos);
    }
    return CleanText;
  }

  void EditTextBox::RecvMouseDoubleClick(int /* x */, int /* y */, unsigned long /* button_flags */, unsigned long /* key_flags */)
  {
    m_KeyboardHandler.SelectAllText();
    QueueDraw();
  }

  void EditTextBox::RecvMouseUp(int x, int y, unsigned long /* button_flags */, unsigned long /* key_flags */)
  {
    m_KeyboardHandler.MouseUp(x, y);

    if (m_ScrollTimerHandler.IsValid())
    {
      GetTimer().RemoveTimerHandler(m_ScrollTimerHandler);
      m_ScrollTimerHandler = 0;
    }

    QueueDraw();
  }

  void EditTextBox::RecvMouseDown(int x, int y, unsigned long /* button_flags */, unsigned long /* key_flags */)
  {
    if (HasKeyboardFocus() == false)
    {
      // First mouse down
      m_KeyboardHandler.EnterFocus();
    }
    else
    {
      // Second mouse down and more
      m_KeyboardHandler.UnselectAllText();
      m_KeyboardHandler.MouseDown(x, y);

      // Always make the cursor visible when a mouse down happens.
      StopBlinkCursor(false);
      StartBlinkCursor(false);
    }

    QueueDraw();
  }

  void EditTextBox::RecvMouseDrag(int x, int y, int /* dx */, int /* dy */, unsigned long /* button_flags */, unsigned long /* key_flags */)
  {
    Geometry base = GetGeometry();

    int X = x + base.x;

    if ((!m_ScrollTimerHandler.IsValid()) && ((X < base.x) || (X > base.x + base.GetWidth())))
    {
      m_ScrollTimerHandler = GetTimer().AddOneShotTimer(25, m_ScrollTimerFunctor, this);
    }
    else if ((X >= base.x) && (X < base.x + base.GetWidth()))
    {
      m_KeyboardHandler.MouseDrag(x, y);

      // While the mouse is selecting the text, no blinking of cursor
      StopBlinkCursor(false);
      StartBlinkCursor(false);
    }

    QueueDraw();
  }

  long EditTextBox::PostLayoutManagement(long LayoutResult)
  {
    long ret = View::PostLayoutManagement(LayoutResult);

    m_KeyboardHandler.SetClipRegion(GetGeometry());
    return ret;
  }


  void EditTextBox::RecvKeyEvent(
    unsigned long   eventType  , /*event type*/
    unsigned long   keysym     , /*event keysym*/
    unsigned long   state      , /*event state*/
    const char*     character  , /*character*/
    unsigned short  /* keyCount */     /*key repeat count*/)
  {
    
    if (eventType == NUX_KEYDOWN)
      text_input_mode_ = true;

    m_KeyboardHandler.ProcessKey(eventType, keysym, state, character[0], GetGeometry());


    // When a key event happens, show the cursor.
    StopBlinkCursor(false);
    // Start a new blink cycle with the cursor originally visible.
    StartBlinkCursor(false);

    if (character)
    {
      sigCharacter.emit(this, character[0]);
      sigEditChange.emit(this);
    }

    if (keysym == NUX_VK_ENTER || keysym == NUX_KP_ENTER)
    {
      std::string str(m_KeyboardHandler.GetTextLine());
      size_t pos = str.rfind(m_Suffix);
      if (pos != std::string::npos && pos == str.size() - m_Suffix.size())
      {
        str.erase(pos);
      }

      if (ValidateKeyboardEntry(str.c_str()))
      {
        m_Text = m_KeyboardHandler.GetTextLine();
        m_temporary_caption = m_Text;
        sigValidateKeyboardEntry.emit(this, m_Text);
        sigValidateEntry.emit(this);
        m_KeyboardHandler.SelectAllText();
      }
      else
      {
        m_Text = m_temporary_caption;
        m_KeyboardHandler.SetText(m_Text);
        m_KeyboardHandler.SelectAllText();
      }
    }

    if (keysym == NUX_VK_ESCAPE)
    {
      text_input_mode_ = false;
    }

    QueueDraw();
  }

  bool EditTextBox::ValidateKeyboardEntry(const char *text) const
  {
    if (m_Validator)
    {
      if (m_Validator->Validate(text) == Validator::Acceptable)
      {
        return true;
      }
      else
      {
        return false;
      }
    }

    return true;
  }

  void EditTextBox::EscapeKeyboardFocus()
  {
    // todo(jaytaoko): SetKeyboardFocus(false);
    // Revert back the caption text
    m_Text = m_temporary_caption;
    sigEscapeKeyboardFocus.emit(this);
    QueueDraw();
  }

  void EditTextBox::EnteringKeyboardFocus()
  {
    m_KeyboardHandler.SetText(m_Text);
    m_KeyboardHandler.SelectAllText();
    // Preserve the current caption text. If ESC is pressed while we have keyboard focus then
    // the previous caption text is restored
    m_temporary_caption = m_Text;
    sigStartKeyboardFocus.emit(this);
    QueueDraw();
  }

  void EditTextBox::QuitingKeyboardFocus()
  {
    std::string CleanText(m_KeyboardHandler.GetTextLine());
    size_t pos = CleanText.find(m_Prefix, 0);
    if (pos == 0)
    {
      CleanText.erase(0, m_Prefix.size());
    }
    pos = CleanText.rfind(m_Suffix);
    if (pos != std::string::npos && pos == CleanText.size() - m_Suffix.size())
    {
      CleanText.erase(pos);
    }

    if (ValidateKeyboardEntry(CleanText.c_str()))
    {
      CleanText = m_Prefix + CleanText;
      CleanText = CleanText + m_Suffix;

      m_Text = CleanText; //m_KeyboardHandler.GetTextLine();
      m_KeyboardHandler.SetText(CleanText);
      m_temporary_caption = m_Text;
      sigValidateKeyboardEntry.emit(this, m_Text);
      sigValidateEntry.emit(this);
    }
    else
    {
      m_Text = m_temporary_caption;
      m_KeyboardHandler.SetText(m_Text);
      m_KeyboardHandler.SelectAllText();
    }

    QueueDraw();
  }

  void EditTextBox::RecvStartKeyFocus()
  {
    key_nav_mode_     = true;
    text_input_mode_  = false;
    
    EnteringKeyboardFocus();
    m_BlinkTimerHandler = GetTimer().AddOneShotTimer(500, m_BlinkTimerFunctor, this);
  }

  void EditTextBox::RecvEndKeyFocus()
  {
    key_nav_mode_     = false;
    text_input_mode_  = false;

    QuitingKeyboardFocus();
    GetTimer().RemoveTimerHandler(m_BlinkTimerHandler);
    m_BlinkTimerHandler = 0;
    BlinkCursor = false;
  }

  void EditTextBox::SetDoubleValue(double d)
  {
    SetText(std::to_string((long double)d));
  }

  void EditTextBox::SetIntegerValue(int i)
  {
    SetText(std::to_string((long long)i));
  }

  void EditTextBox::SetTextBackgroundColor(const Color &color)
  {
    m_BackgroundColor = color;
    QueueDraw();
  }

  Color EditTextBox::GetTextBackgroundColor() const
  {
    return m_BackgroundColor;
  }

  bool EditTextBox::IsEmpty()
  {
    if (m_Text == "")
    {
      return true;
    }

    return false;
  }

  bool EditTextBox::InspectKeyEvent(unsigned int eventType,
    unsigned int keysym,
    const char* /* character */)
  {
    if ((eventType == NUX_KEYDOWN) && (key_nav_mode_ == true) && (text_input_mode_ == false))
    {
      if (keysym == NUX_VK_ENTER ||
        keysym == NUX_KP_ENTER ||
        keysym == NUX_VK_UP ||
        keysym == NUX_VK_DOWN ||
        keysym == NUX_VK_LEFT ||
        keysym == NUX_VK_RIGHT ||
        keysym == NUX_VK_LEFT_TAB ||
        keysym == NUX_VK_TAB)
      {
        return false;
      }
    }

    if ((eventType == NUX_KEYDOWN) && (key_nav_mode_ == false) && (text_input_mode_ == false))
    {
      return false;
    }

    return true;
  }
}
