# 1 "fldset.cpp"
# 1 "fldset.cpp" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 138 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "fldset.cpp" 2







# 1 "./fldset.h" 1
# 10 "./fldset.h"
# 1 "../../common/unicode/utypes.h" 1
# 36 "../../common/unicode/utypes.h"
# 1 "../../common/unicode/umachine.h" 1
# 44 "../../common/unicode/umachine.h"
# 1 "../../common/unicode/ptypes.h" 1
# 41 "../../common/unicode/ptypes.h"
# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 1 3 4
# 29 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 3 4
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;


typedef __typeof__(sizeof(int)) size_t;
# 42 "../../common/unicode/ptypes.h" 2








# 1 "../../common/unicode/platform.h" 1
# 22 "../../common/unicode/platform.h"
# 1 "../../common/unicode/uconfig.h" 1
# 23 "../../common/unicode/platform.h" 2
# 1 "../../common/unicode/uvernum.h" 1
# 24 "../../common/unicode/platform.h" 2
# 51 "../../common/unicode/ptypes.h" 2
# 66 "../../common/unicode/ptypes.h"
# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stdint.h" 1 3 4
# 33 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 25 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 352 "/usr/include/features.h" 3 4
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 353 "/usr/include/features.h" 2 3 4
# 374 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 385 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 386 "/usr/include/sys/cdefs.h" 2 3 4
# 375 "/usr/include/features.h" 2 3 4
# 398 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 3 4
# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/gnu/stubs.h" 2 3 4
# 399 "/usr/include/features.h" 2 3 4
# 26 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wchar.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4








typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
# 65 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 90 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 103 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 119 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 134 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 34 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stdint.h" 2 3 4
# 67 "../../common/unicode/ptypes.h" 2
# 45 "../../common/unicode/umachine.h" 2





# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 1 3 4
# 51 "../../common/unicode/umachine.h" 2
# 200 "../../common/unicode/umachine.h"
typedef int8_t UBool;
# 276 "../../common/unicode/umachine.h"
    typedef unsigned short UChar;
# 298 "../../common/unicode/umachine.h"
typedef int32_t UChar32;
# 320 "../../common/unicode/umachine.h"
# 1 "../../common/unicode/urename.h" 1
# 321 "../../common/unicode/umachine.h" 2
# 37 "../../common/unicode/utypes.h" 2
# 1 "../../common/unicode/uversion.h" 1
# 57 "../../common/unicode/uversion.h"
typedef uint8_t UVersionInfo[4];
# 113 "../../common/unicode/uversion.h"
        namespace icu_52 { }
        namespace icu = icu_52;
# 126 "../../common/unicode/uversion.h"
        using namespace icu_52;
# 150 "../../common/unicode/uversion.h"
extern "C" __attribute__((visibility("default"))) void
u_versionFromString_52(UVersionInfo versionArray, const char *versionString);
# 164 "../../common/unicode/uversion.h"
extern "C" __attribute__((visibility("default"))) void
u_versionFromUString_52(UVersionInfo versionArray, const UChar *versionString);
# 180 "../../common/unicode/uversion.h"
extern "C" __attribute__((visibility("default"))) void
u_versionToString_52(const UVersionInfo versionArray, char *versionString);
# 191 "../../common/unicode/uversion.h"
extern "C" __attribute__((visibility("default"))) void
u_getVersion_52(UVersionInfo versionArray);
# 38 "../../common/unicode/utypes.h" 2

# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/float.h" 1 3 4
# 40 "../../common/unicode/utypes.h" 2


# 1 "../../common/unicode/utf.h" 1
# 215 "../../common/unicode/utf.h"
# 1 "../../common/unicode/utf8.h" 1
# 58 "../../common/unicode/utf8.h"
extern "C" const uint8_t

utf8_countTrailBytes_52[256];
# 117 "../../common/unicode/utf8.h"
extern "C" __attribute__((visibility("default"))) UChar32
utf8_nextCharSafeBody_52(const uint8_t *s, int32_t *pi, int32_t length, UChar32 c, UBool strict);
# 129 "../../common/unicode/utf8.h"
extern "C" __attribute__((visibility("default"))) int32_t
utf8_appendCharSafeBody_52(uint8_t *s, int32_t i, int32_t length, UChar32 c, UBool *pIsError);
# 141 "../../common/unicode/utf8.h"
extern "C" __attribute__((visibility("default"))) UChar32
utf8_prevCharSafeBody_52(const uint8_t *s, int32_t start, int32_t *pi, UChar32 c, UBool strict);
# 153 "../../common/unicode/utf8.h"
extern "C" __attribute__((visibility("default"))) int32_t
utf8_back1SafeBody_52(const uint8_t *s, int32_t start, int32_t i);
# 216 "../../common/unicode/utf.h" 2
# 1 "../../common/unicode/utf16.h" 1
# 217 "../../common/unicode/utf.h" 2


# 1 "../../common/unicode/utf_old.h" 1
# 148 "../../common/unicode/utf_old.h"
# 1 "../../common/unicode/utf.h" 1
# 149 "../../common/unicode/utf_old.h" 2
# 220 "../../common/unicode/utf.h" 2
# 43 "../../common/unicode/utypes.h" 2
# 201 "../../common/unicode/utypes.h"
typedef double UDate;
# 476 "../../common/unicode/utypes.h"
typedef enum UErrorCode {





    U_USING_FALLBACK_WARNING = -128,

    U_ERROR_WARNING_START = -128,

    U_USING_DEFAULT_WARNING = -127,

    U_SAFECLONE_ALLOCATED_WARNING = -126,

    U_STATE_OLD_WARNING = -125,

    U_STRING_NOT_TERMINATED_WARNING = -124,

    U_SORT_KEY_TOO_SHORT_WARNING = -123,

    U_AMBIGUOUS_ALIAS_WARNING = -122,

    U_DIFFERENT_UCA_VERSION = -121,

    U_PLUGIN_CHANGED_LEVEL_WARNING = -120,

    U_ERROR_WARNING_LIMIT,


    U_ZERO_ERROR = 0,

    U_ILLEGAL_ARGUMENT_ERROR = 1,
    U_MISSING_RESOURCE_ERROR = 2,
    U_INVALID_FORMAT_ERROR = 3,
    U_FILE_ACCESS_ERROR = 4,
    U_INTERNAL_PROGRAM_ERROR = 5,
    U_MESSAGE_PARSE_ERROR = 6,
    U_MEMORY_ALLOCATION_ERROR = 7,
    U_INDEX_OUTOFBOUNDS_ERROR = 8,
    U_PARSE_ERROR = 9,
    U_INVALID_CHAR_FOUND = 10,
    U_TRUNCATED_CHAR_FOUND = 11,
    U_ILLEGAL_CHAR_FOUND = 12,
    U_INVALID_TABLE_FORMAT = 13,
    U_INVALID_TABLE_FILE = 14,
    U_BUFFER_OVERFLOW_ERROR = 15,
    U_UNSUPPORTED_ERROR = 16,
    U_RESOURCE_TYPE_MISMATCH = 17,
    U_ILLEGAL_ESCAPE_SEQUENCE = 18,
    U_UNSUPPORTED_ESCAPE_SEQUENCE = 19,
    U_NO_SPACE_AVAILABLE = 20,
    U_CE_NOT_FOUND_ERROR = 21,
    U_PRIMARY_TOO_LONG_ERROR = 22,
    U_STATE_TOO_OLD_ERROR = 23,
    U_TOO_MANY_ALIASES_ERROR = 24,

    U_ENUM_OUT_OF_SYNC_ERROR = 25,
    U_INVARIANT_CONVERSION_ERROR = 26,
    U_INVALID_STATE_ERROR = 27,
    U_COLLATOR_VERSION_MISMATCH = 28,
    U_USELESS_COLLATOR_ERROR = 29,
    U_NO_WRITE_PERMISSION = 30,

    U_STANDARD_ERROR_LIMIT,



    U_BAD_VARIABLE_DEFINITION=0x10000,
    U_PARSE_ERROR_START = 0x10000,
    U_MALFORMED_RULE,
    U_MALFORMED_SET,
    U_MALFORMED_SYMBOL_REFERENCE,
    U_MALFORMED_UNICODE_ESCAPE,
    U_MALFORMED_VARIABLE_DEFINITION,
    U_MALFORMED_VARIABLE_REFERENCE,
    U_MISMATCHED_SEGMENT_DELIMITERS,
    U_MISPLACED_ANCHOR_START,
    U_MISPLACED_CURSOR_OFFSET,
    U_MISPLACED_QUANTIFIER,
    U_MISSING_OPERATOR,
    U_MISSING_SEGMENT_CLOSE,
    U_MULTIPLE_ANTE_CONTEXTS,
    U_MULTIPLE_CURSORS,
    U_MULTIPLE_POST_CONTEXTS,
    U_TRAILING_BACKSLASH,
    U_UNDEFINED_SEGMENT_REFERENCE,
    U_UNDEFINED_VARIABLE,
    U_UNQUOTED_SPECIAL,
    U_UNTERMINATED_QUOTE,
    U_RULE_MASK_ERROR,
    U_MISPLACED_COMPOUND_FILTER,
    U_MULTIPLE_COMPOUND_FILTERS,
    U_INVALID_RBT_SYNTAX,
    U_INVALID_PROPERTY_PATTERN,
    U_MALFORMED_PRAGMA,
    U_UNCLOSED_SEGMENT,
    U_ILLEGAL_CHAR_IN_SEGMENT,
    U_VARIABLE_RANGE_EXHAUSTED,
    U_VARIABLE_RANGE_OVERLAP,
    U_ILLEGAL_CHARACTER,
    U_INTERNAL_TRANSLITERATOR_ERROR,
    U_INVALID_ID,
    U_INVALID_FUNCTION,
    U_PARSE_ERROR_LIMIT,




    U_UNEXPECTED_TOKEN=0x10100,
    U_FMT_PARSE_ERROR_START=0x10100,
    U_MULTIPLE_DECIMAL_SEPARATORS,
    U_MULTIPLE_DECIMAL_SEPERATORS = U_MULTIPLE_DECIMAL_SEPARATORS,
    U_MULTIPLE_EXPONENTIAL_SYMBOLS,
    U_MALFORMED_EXPONENTIAL_PATTERN,
    U_MULTIPLE_PERCENT_SYMBOLS,
    U_MULTIPLE_PERMILL_SYMBOLS,
    U_MULTIPLE_PAD_SPECIFIERS,
    U_PATTERN_SYNTAX_ERROR,
    U_ILLEGAL_PAD_POSITION,
    U_UNMATCHED_BRACES,
    U_UNSUPPORTED_PROPERTY,
    U_UNSUPPORTED_ATTRIBUTE,
    U_ARGUMENT_TYPE_MISMATCH,
    U_DUPLICATE_KEYWORD,
    U_UNDEFINED_KEYWORD,
    U_DEFAULT_KEYWORD_MISSING,
    U_DECIMAL_NUMBER_SYNTAX_ERROR,
    U_FORMAT_INEXACT_ERROR,
    U_FMT_PARSE_ERROR_LIMIT,




    U_BRK_INTERNAL_ERROR=0x10200,
    U_BRK_ERROR_START=0x10200,
    U_BRK_HEX_DIGITS_EXPECTED,
    U_BRK_SEMICOLON_EXPECTED,
    U_BRK_RULE_SYNTAX,
    U_BRK_UNCLOSED_SET,
    U_BRK_ASSIGN_ERROR,
    U_BRK_VARIABLE_REDFINITION,
    U_BRK_MISMATCHED_PAREN,
    U_BRK_NEW_LINE_IN_QUOTED_STRING,
    U_BRK_UNDEFINED_VARIABLE,
    U_BRK_INIT_ERROR,
    U_BRK_RULE_EMPTY_SET,
    U_BRK_UNRECOGNIZED_OPTION,
    U_BRK_MALFORMED_RULE_TAG,
    U_BRK_ERROR_LIMIT,




    U_REGEX_INTERNAL_ERROR=0x10300,
    U_REGEX_ERROR_START=0x10300,
    U_REGEX_RULE_SYNTAX,
    U_REGEX_INVALID_STATE,
    U_REGEX_BAD_ESCAPE_SEQUENCE,
    U_REGEX_PROPERTY_SYNTAX,
    U_REGEX_UNIMPLEMENTED,
    U_REGEX_MISMATCHED_PAREN,
    U_REGEX_NUMBER_TOO_BIG,
    U_REGEX_BAD_INTERVAL,
    U_REGEX_MAX_LT_MIN,
    U_REGEX_INVALID_BACK_REF,
    U_REGEX_INVALID_FLAG,
    U_REGEX_LOOK_BEHIND_LIMIT,
    U_REGEX_SET_CONTAINS_STRING,
    U_REGEX_OCTAL_TOO_BIG,
    U_REGEX_MISSING_CLOSE_BRACKET,
    U_REGEX_INVALID_RANGE,
    U_REGEX_STACK_OVERFLOW,
    U_REGEX_TIME_OUT,
    U_REGEX_STOPPED_BY_CALLER,
    U_REGEX_ERROR_LIMIT,




    U_IDNA_PROHIBITED_ERROR=0x10400,
    U_IDNA_ERROR_START=0x10400,
    U_IDNA_UNASSIGNED_ERROR,
    U_IDNA_CHECK_BIDI_ERROR,
    U_IDNA_STD3_ASCII_RULES_ERROR,
    U_IDNA_ACE_PREFIX_ERROR,
    U_IDNA_VERIFICATION_ERROR,
    U_IDNA_LABEL_TOO_LONG_ERROR,
    U_IDNA_ZERO_LENGTH_LABEL_ERROR,
    U_IDNA_DOMAIN_NAME_TOO_LONG_ERROR,
    U_IDNA_ERROR_LIMIT,



    U_STRINGPREP_PROHIBITED_ERROR = U_IDNA_PROHIBITED_ERROR,
    U_STRINGPREP_UNASSIGNED_ERROR = U_IDNA_UNASSIGNED_ERROR,
    U_STRINGPREP_CHECK_BIDI_ERROR = U_IDNA_CHECK_BIDI_ERROR,




    U_PLUGIN_ERROR_START=0x10500,
    U_PLUGIN_TOO_HIGH=0x10500,
    U_PLUGIN_DIDNT_SET_LEVEL,
    U_PLUGIN_ERROR_LIMIT,

    U_ERROR_LIMIT=U_PLUGIN_ERROR_LIMIT
} UErrorCode;
# 692 "../../common/unicode/utypes.h"
    static
    inline UBool U_SUCCESS(UErrorCode code) { return (UBool)(code<=U_ZERO_ERROR); }




    static
    inline UBool U_FAILURE(UErrorCode code) { return (UBool)(code>U_ZERO_ERROR); }
# 719 "../../common/unicode/utypes.h"
extern "C" __attribute__((visibility("default"))) const char *
u_errorName_52(UErrorCode code);
# 11 "./fldset.h" 2


# 1 "../../i18n/unicode/calendar.h" 1
# 36 "../../i18n/unicode/calendar.h"
# 1 "../../common/unicode/uobject.h" 1
# 91 "../../common/unicode/uobject.h"
typedef void* UClassID;

extern "C++" { namespace icu_52 {
# 110 "../../common/unicode/uobject.h"
class UMemory {
public:
# 129 "../../common/unicode/uobject.h"
    static void * operator new(size_t size) throw();






    static void * operator new[](size_t size) throw();
# 146 "../../common/unicode/uobject.h"
    static void operator delete(void *p) throw();






    static void operator delete[](void *p) throw();







    static inline void * operator new(size_t, void *ptr) throw() { return ptr; }






    static inline void operator delete(void *, void *) throw() {}
# 200 "../../common/unicode/uobject.h"
};
# 221 "../../common/unicode/uobject.h"
class UObject : public UMemory {
public:





    virtual ~UObject();
# 239 "../../common/unicode/uobject.h"
    virtual UClassID getDynamicClassID() const;

protected:
# 283 "../../common/unicode/uobject.h"
};
# 318 "../../common/unicode/uobject.h"
} }
# 37 "../../i18n/unicode/calendar.h" 2
# 1 "../../common/unicode/locid.h" 1
# 34 "../../common/unicode/locid.h"
# 1 "../../common/unicode/unistr.h" 1
# 30 "../../common/unicode/unistr.h"
# 1 "../../common/unicode/rep.h" 1
# 24 "../../common/unicode/rep.h"
extern "C++" { namespace icu_52 {

class UnicodeString;
# 71 "../../common/unicode/rep.h"
class Replaceable : public UObject {

public:




    virtual ~Replaceable();






    inline int32_t length() const;
# 94 "../../common/unicode/rep.h"
    inline UChar charAt(int32_t offset) const;
# 108 "../../common/unicode/rep.h"
    inline UChar32 char32At(int32_t offset) const;
# 120 "../../common/unicode/rep.h"
    virtual void extractBetween(int32_t start,
                                int32_t limit,
                                UnicodeString& target) const = 0;
# 144 "../../common/unicode/rep.h"
    virtual void handleReplaceBetween(int32_t start,
                                      int32_t limit,
                                      const UnicodeString& text) = 0;
# 172 "../../common/unicode/rep.h"
    virtual void copy(int32_t start, int32_t limit, int32_t dest) = 0;
# 183 "../../common/unicode/rep.h"
    virtual UBool hasMetaData() const;
# 200 "../../common/unicode/rep.h"
    virtual Replaceable *clone() const;

protected:





    inline Replaceable();
# 225 "../../common/unicode/rep.h"
    virtual int32_t getLength() const = 0;





    virtual UChar getCharAt(int32_t offset) const = 0;





    virtual UChar32 getChar32At(int32_t offset) const = 0;
};

inline Replaceable::Replaceable() {}

inline int32_t
Replaceable::length() const {
    return getLength();
}

inline UChar
Replaceable::charAt(int32_t offset) const {
    return getCharAt(offset);
}

inline UChar32
Replaceable::char32At(int32_t offset) const {
    return getChar32At(offset);
}



} }
# 31 "../../common/unicode/unistr.h" 2
# 1 "../../common/unicode/std_string.h" 1
# 30 "../../common/unicode/std_string.h"
# 1 "/usr/include/c++/4.4/string" 1 3
# 37 "/usr/include/c++/4.4/string" 3
# 37 "/usr/include/c++/4.4/string" 3


# 1 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++config.h" 1 3
# 243 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++config.h" 3
# 1 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/os_defines.h" 1 3
# 244 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++config.h" 2 3


# 1 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/cpu_defines.h" 1 3
# 247 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++config.h" 2 3
# 40 "/usr/include/c++/4.4/string" 2 3
# 1 "/usr/include/c++/4.4/bits/stringfwd.h" 1 3
# 37 "/usr/include/c++/4.4/bits/stringfwd.h" 3
# 37 "/usr/include/c++/4.4/bits/stringfwd.h" 3




namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _Alloc>
    class allocator;

  template<class _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
           typename _Alloc = allocator<_CharT> >
    class basic_string;

  template<> struct char_traits<char>;

  typedef basic_string<char> string;


  template<> struct char_traits<wchar_t>;

  typedef basic_string<wchar_t> wstring;





  template<> struct char_traits<char16_t>;
  template<> struct char_traits<char32_t>;

  typedef basic_string<char16_t> u16string;
  typedef basic_string<char32_t> u32string;



}
# 41 "/usr/include/c++/4.4/string" 2 3
# 1 "/usr/include/c++/4.4/bits/char_traits.h" 1 3
# 38 "/usr/include/c++/4.4/bits/char_traits.h" 3
# 38 "/usr/include/c++/4.4/bits/char_traits.h" 3


# 1 "/usr/include/c++/4.4/bits/stl_algobase.h" 1 3
# 61 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 40 "/usr/include/c++/4.4/cstddef" 3
# 40 "/usr/include/c++/4.4/cstddef" 3



# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 1 3 4
# 44 "/usr/include/c++/4.4/cstddef" 2 3




namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::ptrdiff_t;
  using ::size_t;

}
# 62 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.4/bits/functexcept.h" 1 3
# 37 "/usr/include/c++/4.4/bits/functexcept.h" 3
# 1 "/usr/include/c++/4.4/exception_defines.h" 1 3
# 38 "/usr/include/c++/4.4/bits/functexcept.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {


  void
  __throw_bad_exception(void) __attribute__((__noreturn__));


  void
  __throw_bad_alloc(void) __attribute__((__noreturn__));


  void
  __throw_bad_cast(void) __attribute__((__noreturn__));

  void
  __throw_bad_typeid(void) __attribute__((__noreturn__));


  void
  __throw_logic_error(const char*) __attribute__((__noreturn__));

  void
  __throw_domain_error(const char*) __attribute__((__noreturn__));

  void
  __throw_invalid_argument(const char*) __attribute__((__noreturn__));

  void
  __throw_length_error(const char*) __attribute__((__noreturn__));

  void
  __throw_out_of_range(const char*) __attribute__((__noreturn__));

  void
  __throw_runtime_error(const char*) __attribute__((__noreturn__));

  void
  __throw_range_error(const char*) __attribute__((__noreturn__));

  void
  __throw_overflow_error(const char*) __attribute__((__noreturn__));

  void
  __throw_underflow_error(const char*) __attribute__((__noreturn__));


  void
  __throw_ios_failure(const char*) __attribute__((__noreturn__));

  void
  __throw_system_error(int) __attribute__((__noreturn__));

}
# 63 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 1 3
# 35 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
# 35 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
# 68 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {

  template<typename _Iterator, typename _Container>
    class __normal_iterator;

}

namespace std __attribute__ ((__visibility__ ("default"))) {

  struct __true_type { };
  struct __false_type { };

  template<bool>
    struct __truth_type
    { typedef __false_type __type; };

  template<>
    struct __truth_type<true>
    { typedef __true_type __type; };



  template<class _Sp, class _Tp>
    struct __traitor
    {
      enum { __value = bool(_Sp::__value) || bool(_Tp::__value) };
      typedef typename __truth_type<__value>::__type __type;
    };


  template<typename, typename>
    struct __are_same
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __are_same<_Tp, _Tp>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_void
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_void<void>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_integer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };




  template<>
    struct __is_integer<bool>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_integer<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };



  template<>
    struct __is_integer<char16_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<char32_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_integer<short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_floating
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };


  template<>
    struct __is_floating<float>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<long double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_pointer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __is_pointer<_Tp*>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_normal_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Iterator, typename _Container>
    struct __is_normal_iterator< __gnu_cxx::__normal_iterator<_Iterator,
             _Container> >
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_arithmetic
    : public __traitor<__is_integer<_Tp>, __is_floating<_Tp> >
    { };




  template<typename _Tp>
    struct __is_fundamental
    : public __traitor<__is_void<_Tp>, __is_arithmetic<_Tp> >
    { };




  template<typename _Tp>
    struct __is_scalar
    : public __traitor<__is_arithmetic<_Tp>, __is_pointer<_Tp> >
    { };




  template<typename _Tp>
    struct __is_char
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_char<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_char<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_byte
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_byte<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_move_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };


  template<typename _Iterator>
    class move_iterator;

  template<typename _Iterator>
    struct __is_move_iterator< move_iterator<_Iterator> >
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


}
# 64 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.4/ext/type_traits.h" 1 3
# 31 "/usr/include/c++/4.4/ext/type_traits.h" 3
# 31 "/usr/include/c++/4.4/ext/type_traits.h" 3





namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {


  template<bool, typename>
    struct __enable_if
    { };

  template<typename _Tp>
    struct __enable_if<true, _Tp>
    { typedef _Tp __type; };



  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct __conditional_type
    { typedef _Iftrue __type; };

  template<typename _Iftrue, typename _Iffalse>
    struct __conditional_type<false, _Iftrue, _Iffalse>
    { typedef _Iffalse __type; };



  template<typename _Tp>
    struct __add_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __add_unsigned<char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<signed char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<short>
    { typedef unsigned short __type; };

  template<>
    struct __add_unsigned<int>
    { typedef unsigned int __type; };

  template<>
    struct __add_unsigned<long>
    { typedef unsigned long __type; };

  template<>
    struct __add_unsigned<long long>
    { typedef unsigned long long __type; };


  template<>
    struct __add_unsigned<bool>;

  template<>
    struct __add_unsigned<wchar_t>;



  template<typename _Tp>
    struct __remove_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __remove_unsigned<char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned short>
    { typedef short __type; };

  template<>
    struct __remove_unsigned<unsigned int>
    { typedef int __type; };

  template<>
    struct __remove_unsigned<unsigned long>
    { typedef long __type; };

  template<>
    struct __remove_unsigned<unsigned long long>
    { typedef long long __type; };


  template<>
    struct __remove_unsigned<bool>;

  template<>
    struct __remove_unsigned<wchar_t>;



  template<typename _Type>
    inline bool
    __is_null_pointer(_Type* __ptr)
    { return __ptr == 0; }

  template<typename _Type>
    inline bool
    __is_null_pointer(_Type)
    { return false; }



  template<typename _Tp, bool = std::__is_integer<_Tp>::__value>
    struct __promote
    { typedef double __type; };

  template<typename _Tp>
    struct __promote<_Tp, false>
    { typedef _Tp __type; };

  template<typename _Tp, typename _Up>
    struct __promote_2
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;

    public:
      typedef __typeof__(__type1() + __type2()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp>
    struct __promote_3
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
      typedef typename __promote<_Vp>::__type __type3;

    public:
      typedef __typeof__(__type1() + __type2() + __type3()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp, typename _Wp>
    struct __promote_4
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
      typedef typename __promote<_Vp>::__type __type3;
      typedef typename __promote<_Wp>::__type __type4;

    public:
      typedef __typeof__(__type1() + __type2() + __type3() + __type4()) __type;
    };

}
# 65 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.4/ext/numeric_traits.h" 1 3
# 31 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
# 31 "/usr/include/c++/4.4/ext/numeric_traits.h" 3





namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
# 51 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_integer
    {

      static const _Value __min = (((_Value)(-1) < 0) ? (_Value)1 << (sizeof(_Value) * 8 - ((_Value)(-1) < 0)) : (_Value)0);
      static const _Value __max = (((_Value)(-1) < 0) ? (((((_Value)1 << ((sizeof(_Value) * 8 - ((_Value)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(_Value)0);



      static const bool __is_signed = ((_Value)(-1) < 0);
      static const int __digits = (sizeof(_Value) * 8 - ((_Value)(-1) < 0));
    };

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__min;

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__max;

  template<typename _Value>
    const bool __numeric_traits_integer<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_integer<_Value>::__digits;
# 96 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_floating
    {

      static const int __max_digits10 = (2 + (std::__are_same<_Value, float>::__value ? 24 : std::__are_same<_Value, double>::__value ? 53 : 64) * 3010 / 10000);


      static const bool __is_signed = true;
      static const int __digits10 = (std::__are_same<_Value, float>::__value ? 6 : std::__are_same<_Value, double>::__value ? 15 : 18);
      static const int __max_exponent10 = (std::__are_same<_Value, float>::__value ? 38 : std::__are_same<_Value, double>::__value ? 308 : 4932);
    };

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_digits10;

  template<typename _Value>
    const bool __numeric_traits_floating<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__digits10;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_exponent10;

  template<typename _Value>
    struct __numeric_traits
    : public __conditional_type<std::__is_integer<_Value>::__value,
    __numeric_traits_integer<_Value>,
    __numeric_traits_floating<_Value> >::__type
    { };

}
# 66 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.4/bits/stl_pair.h" 1 3
# 60 "/usr/include/c++/4.4/bits/stl_pair.h" 3
# 1 "/usr/include/c++/4.4/bits/move.h" 1 3
# 34 "/usr/include/c++/4.4/bits/move.h" 3
# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 40 "/usr/include/c++/4.4/cstddef" 3
# 40 "/usr/include/c++/4.4/cstddef" 3



# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 1 3 4
# 44 "/usr/include/c++/4.4/cstddef" 2 3
# 35 "/usr/include/c++/4.4/bits/move.h" 2 3
# 1 "/usr/include/c++/4.4/bits/concept_check.h" 1 3
# 32 "/usr/include/c++/4.4/bits/concept_check.h" 3
# 32 "/usr/include/c++/4.4/bits/concept_check.h" 3
# 36 "/usr/include/c++/4.4/bits/move.h" 2 3


# 1 "/usr/include/c++/4.4/type_traits" 1 3
# 31 "/usr/include/c++/4.4/type_traits" 3
# 31 "/usr/include/c++/4.4/type_traits" 3
# 41 "/usr/include/c++/4.4/type_traits" 3
# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 40 "/usr/include/c++/4.4/cstddef" 3
# 40 "/usr/include/c++/4.4/cstddef" 3



# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 1 3 4
# 44 "/usr/include/c++/4.4/cstddef" 2 3
# 42 "/usr/include/c++/4.4/type_traits" 2 3








# 1 "/usr/include/c++/4.4/tr1_impl/type_traits" 1 3
# 30 "/usr/include/c++/4.4/tr1_impl/type_traits" 3
namespace std
{
# 43 "/usr/include/c++/4.4/tr1_impl/type_traits" 3
  struct __sfinae_types
  {
    typedef char __one;
    typedef struct { char __arr[2]; } __two;
  };
# 66 "/usr/include/c++/4.4/tr1_impl/type_traits" 3
  template<typename _Tp, _Tp __v>
    struct integral_constant
    {
      static const _Tp value = __v;
      typedef _Tp value_type;
      typedef integral_constant<_Tp, __v> type;
    };


  typedef integral_constant<bool, true> true_type;


  typedef integral_constant<bool, false> false_type;

  template<typename _Tp, _Tp __v>
    const _Tp integral_constant<_Tp, __v>::value;


  template<typename>
    struct remove_cv;

  template<typename>
    struct __is_void_helper
    : public false_type { };
  template<> struct __is_void_helper<void> : public integral_constant<bool, true> { };




  template<typename _Tp>
    struct is_void
    : public integral_constant<bool, (__is_void_helper<typename
          remove_cv<_Tp>::type>::value)>
    { };

  template<typename>
    struct __is_integral_helper
    : public false_type { };
  template<> struct __is_integral_helper<bool> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<char> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<signed char> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<unsigned char> : public integral_constant<bool, true> { };

  template<> struct __is_integral_helper<wchar_t> : public integral_constant<bool, true> { };


  template<> struct __is_integral_helper<char16_t> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<char32_t> : public integral_constant<bool, true> { };

  template<> struct __is_integral_helper<short> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<unsigned short> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<int> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<unsigned int> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<long> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<unsigned long> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<long long> : public integral_constant<bool, true> { };
  template<> struct __is_integral_helper<unsigned long long> : public integral_constant<bool, true> { };


  template<typename _Tp>
    struct is_integral
    : public integral_constant<bool, (__is_integral_helper<typename
          remove_cv<_Tp>::type>::value)>
    { };

  template<typename>
    struct __is_floating_point_helper
    : public false_type { };
  template<> struct __is_floating_point_helper<float> : public integral_constant<bool, true> { };
  template<> struct __is_floating_point_helper<double> : public integral_constant<bool, true> { };
  template<> struct __is_floating_point_helper<long double> : public integral_constant<bool, true> { };


  template<typename _Tp>
    struct is_floating_point
    : public integral_constant<bool, (__is_floating_point_helper<typename
          remove_cv<_Tp>::type>::value)>
    { };


  template<typename>
    struct is_array
    : public false_type { };

  template<typename _Tp, std::size_t _Size>
    struct is_array<_Tp[_Size]>
    : public true_type { };

  template<typename _Tp>
    struct is_array<_Tp[]>
    : public true_type { };

  template<typename>
    struct __is_pointer_helper
    : public false_type { };
  template<typename _Tp> struct __is_pointer_helper<_Tp*> : public integral_constant<bool, true> { };


  template<typename _Tp>
    struct is_pointer
    : public integral_constant<bool, (__is_pointer_helper<typename
          remove_cv<_Tp>::type>::value)>
    { };


  template<typename _Tp>
    struct is_reference;


  template<typename _Tp>
    struct is_function;

  template<typename>
    struct __is_member_object_pointer_helper
    : public false_type { };
  template<typename _Tp, typename _Cp> struct __is_member_object_pointer_helper<_Tp _Cp::*> : public integral_constant<bool, !is_function<_Tp>::value> { };



  template<typename _Tp>
    struct is_member_object_pointer
    : public integral_constant<bool, (__is_member_object_pointer_helper<
          typename remove_cv<_Tp>::type>::value)>
    { };

  template<typename>
    struct __is_member_function_pointer_helper
    : public false_type { };
  template<typename _Tp, typename _Cp> struct __is_member_function_pointer_helper<_Tp _Cp::*> : public integral_constant<bool, is_function<_Tp>::value> { };



  template<typename _Tp>
    struct is_member_function_pointer
    : public integral_constant<bool, (__is_member_function_pointer_helper<
          typename remove_cv<_Tp>::type>::value)>
    { };


  template<typename _Tp>
    struct is_enum
    : public integral_constant<bool, __is_enum(_Tp)>
    { };


  template<typename _Tp>
    struct is_union
    : public integral_constant<bool, __is_union(_Tp)>
    { };


  template<typename _Tp>
    struct is_class
    : public integral_constant<bool, __is_class(_Tp)>
    { };


  template<typename>
    struct is_function
    : public false_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...)>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......)>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) const>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) const>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) volatile>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) volatile>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) const volatile>
    : public true_type { };
  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) const volatile>
    : public true_type { };




  template<typename _Tp>
    struct is_arithmetic
    : public integral_constant<bool, (is_integral<_Tp>::value
          || is_floating_point<_Tp>::value)>
    { };


  template<typename _Tp>
    struct is_fundamental
    : public integral_constant<bool, (is_arithmetic<_Tp>::value
          || is_void<_Tp>::value)>
    { };


  template<typename _Tp>
    struct is_object
    : public integral_constant<bool, !(is_function<_Tp>::value
           || is_reference<_Tp>::value
           || is_void<_Tp>::value)>
    { };


  template<typename _Tp>
    struct is_member_pointer;


  template<typename _Tp>
    struct is_scalar
    : public integral_constant<bool, (is_arithmetic<_Tp>::value
          || is_enum<_Tp>::value
          || is_pointer<_Tp>::value
          || is_member_pointer<_Tp>::value)>
    { };


  template<typename _Tp>
    struct is_compound
    : public integral_constant<bool, !is_fundamental<_Tp>::value> { };


  template<typename _Tp>
    struct __is_member_pointer_helper
    : public false_type { };
  template<typename _Tp, typename _Cp> struct __is_member_pointer_helper<_Tp _Cp::*> : public integral_constant<bool, true> { };

  template<typename _Tp>
  struct is_member_pointer
    : public integral_constant<bool, (__is_member_pointer_helper<
          typename remove_cv<_Tp>::type>::value)>
    { };



  template<typename>
    struct is_const
    : public false_type { };

  template<typename _Tp>
    struct is_const<_Tp const>
    : public true_type { };


  template<typename>
    struct is_volatile
    : public false_type { };

  template<typename _Tp>
    struct is_volatile<_Tp volatile>
    : public true_type { };


  template<typename _Tp>
    struct is_empty
    : public integral_constant<bool, __is_empty(_Tp)>
    { };


  template<typename _Tp>
    struct is_polymorphic
    : public integral_constant<bool, __is_polymorphic(_Tp)>
    { };


  template<typename _Tp>
    struct is_abstract
    : public integral_constant<bool, __is_abstract(_Tp)>
    { };


  template<typename _Tp>
    struct has_virtual_destructor
    : public integral_constant<bool, __has_virtual_destructor(_Tp)>
    { };


  template<typename _Tp>
    struct alignment_of
    : public integral_constant<std::size_t, __alignof__(_Tp)> { };


  template<typename>
    struct rank
    : public integral_constant<std::size_t, 0> { };

  template<typename _Tp, std::size_t _Size>
    struct rank<_Tp[_Size]>
    : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };

  template<typename _Tp>
    struct rank<_Tp[]>
    : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };


  template<typename, unsigned _Uint = 0>
    struct extent
    : public integral_constant<std::size_t, 0> { };

  template<typename _Tp, unsigned _Uint, std::size_t _Size>
    struct extent<_Tp[_Size], _Uint>
    : public integral_constant<std::size_t,
          _Uint == 0 ? _Size : extent<_Tp,
          _Uint - 1>::value>
    { };

  template<typename _Tp, unsigned _Uint>
    struct extent<_Tp[], _Uint>
    : public integral_constant<std::size_t,
          _Uint == 0 ? 0 : extent<_Tp,
             _Uint - 1>::value>
    { };




  template<typename, typename>
    struct is_same
    : public false_type { };

  template<typename _Tp>
    struct is_same<_Tp, _Tp>
    : public true_type { };




  template<typename _Tp>
    struct remove_const
    { typedef _Tp type; };

  template<typename _Tp>
    struct remove_const<_Tp const>
    { typedef _Tp type; };


  template<typename _Tp>
    struct remove_volatile
    { typedef _Tp type; };

  template<typename _Tp>
    struct remove_volatile<_Tp volatile>
    { typedef _Tp type; };


  template<typename _Tp>
    struct remove_cv
    {
      typedef typename
      remove_const<typename remove_volatile<_Tp>::type>::type type;
    };


  template<typename _Tp>
    struct add_const
    { typedef _Tp const type; };


  template<typename _Tp>
    struct add_volatile
    { typedef _Tp volatile type; };


  template<typename _Tp>
    struct add_cv
    {
      typedef typename
      add_const<typename add_volatile<_Tp>::type>::type type;
    };




  template<typename _Tp>
    struct remove_extent
    { typedef _Tp type; };

  template<typename _Tp, std::size_t _Size>
    struct remove_extent<_Tp[_Size]>
    { typedef _Tp type; };

  template<typename _Tp>
    struct remove_extent<_Tp[]>
    { typedef _Tp type; };


  template<typename _Tp>
    struct remove_all_extents
    { typedef _Tp type; };

  template<typename _Tp, std::size_t _Size>
    struct remove_all_extents<_Tp[_Size]>
    { typedef typename remove_all_extents<_Tp>::type type; };

  template<typename _Tp>
    struct remove_all_extents<_Tp[]>
    { typedef typename remove_all_extents<_Tp>::type type; };



  template<typename _Tp, typename>
    struct __remove_pointer_helper
    { typedef _Tp type; };

  template<typename _Tp, typename _Up>
    struct __remove_pointer_helper<_Tp, _Up*>
    { typedef _Up type; };


  template<typename _Tp>
    struct remove_pointer
    : public __remove_pointer_helper<_Tp, typename remove_cv<_Tp>::type>
    { };

  template<typename>
    struct remove_reference;


  template<typename _Tp>
    struct add_pointer
    { typedef typename remove_reference<_Tp>::type* type; };
# 501 "/usr/include/c++/4.4/tr1_impl/type_traits" 3
}
# 51 "/usr/include/c++/4.4/type_traits" 2 3






namespace std
{







  template<typename>
    struct is_lvalue_reference
    : public false_type { };

  template<typename _Tp>
    struct is_lvalue_reference<_Tp&>
    : public true_type { };


  template<typename>
    struct is_rvalue_reference
    : public false_type { };

  template<typename _Tp>
    struct is_rvalue_reference<_Tp&&>
    : public true_type { };




  template<typename _Tp>
    struct is_reference
    : public integral_constant<bool, (is_lvalue_reference<_Tp>::value
          || is_rvalue_reference<_Tp>::value)>
    { };




  template<typename _Tp>
    struct remove_reference
    { typedef _Tp type; };

  template<typename _Tp>
    struct remove_reference<_Tp&>
    { typedef _Tp type; };

  template<typename _Tp>
    struct remove_reference<_Tp&&>
    { typedef _Tp type; };

  template<typename _Tp,
    bool = !is_reference<_Tp>::value && !is_void<_Tp>::value,
    bool = is_rvalue_reference<_Tp>::value>
    struct __add_lvalue_reference_helper
    { typedef _Tp type; };

  template<typename _Tp>
    struct __add_lvalue_reference_helper<_Tp, true, false>
    { typedef _Tp& type; };

  template<typename _Tp>
    struct __add_lvalue_reference_helper<_Tp, false, true>
    { typedef typename remove_reference<_Tp>::type& type; };


  template<typename _Tp>
    struct add_lvalue_reference
    : public __add_lvalue_reference_helper<_Tp>
    { };

  template<typename _Tp,
    bool = !is_reference<_Tp>::value && !is_void<_Tp>::value>
    struct __add_rvalue_reference_helper
    { typedef _Tp type; };

  template<typename _Tp>
    struct __add_rvalue_reference_helper<_Tp, true>
    { typedef _Tp&& type; };


  template<typename _Tp>
    struct add_rvalue_reference
    : public __add_rvalue_reference_helper<_Tp>
    { };



  template<typename _Tp,
    bool = is_integral<_Tp>::value,
    bool = is_floating_point<_Tp>::value>
    struct __is_signed_helper
    : public false_type { };

  template<typename _Tp>
    struct __is_signed_helper<_Tp, false, true>
    : public true_type { };

  template<typename _Tp>
    struct __is_signed_helper<_Tp, true, false>
    : public integral_constant<bool, _Tp(-1) < _Tp(0)>
    { };


  template<typename _Tp>
    struct is_signed
    : public integral_constant<bool, __is_signed_helper<_Tp>::value>
    { };


  template<typename _Tp>
    struct is_unsigned
    : public integral_constant<bool, (is_arithmetic<_Tp>::value
          && !is_signed<_Tp>::value)>
    { };




  template<typename _Tp>
    struct is_pod
    : public integral_constant<bool, __is_pod(_Tp)>
    { };


  template<typename _Tp>
    struct has_trivial_default_constructor
    : public integral_constant<bool, __has_trivial_constructor(_Tp)>
    { };


  template<typename _Tp>
    struct has_trivial_copy_constructor
    : public integral_constant<bool, __has_trivial_copy(_Tp)>
    { };


  template<typename _Tp>
    struct has_trivial_assign
    : public integral_constant<bool, __has_trivial_assign(_Tp)>
    { };


  template<typename _Tp>
    struct has_trivial_destructor
    : public integral_constant<bool, __has_trivial_destructor(_Tp)>
    { };


  template<typename _Tp>
    struct has_nothrow_default_constructor
    : public integral_constant<bool, __has_nothrow_constructor(_Tp)>
    { };


  template<typename _Tp>
    struct has_nothrow_copy_constructor
    : public integral_constant<bool, __has_nothrow_copy(_Tp)>
    { };


  template<typename _Tp>
    struct has_nothrow_assign
    : public integral_constant<bool, __has_nothrow_assign(_Tp)>
    { };


  template<typename _Base, typename _Derived>
    struct is_base_of
    : public integral_constant<bool, __is_base_of(_Base, _Derived)>
    { };


  template<typename _From, typename _To>
    struct __is_convertible_simple
    : public __sfinae_types
    {
    private:
      static __one __test(_To);
      static __two __test(...);
      static _From __makeFrom();

    public:
      static const bool __value = sizeof(__test(__makeFrom())) == 1;
    };

  template<typename _Tp>
    struct __is_int_or_cref
    {
      typedef typename remove_reference<_Tp>::type __rr_Tp;
      static const bool __value = (is_integral<_Tp>::value
       || (is_integral<__rr_Tp>::value
           && is_const<__rr_Tp>::value
           && !is_volatile<__rr_Tp>::value));
    };

  template<typename _From, typename _To,
    bool = (is_void<_From>::value || is_void<_To>::value
     || is_function<_To>::value || is_array<_To>::value

     || (is_floating_point<typename
         remove_reference<_From>::type>::value
         && __is_int_or_cref<_To>::__value))>
    struct __is_convertible_helper
    {

      static const bool __value = (__is_convertible_simple<typename
       add_lvalue_reference<_From>::type,
       _To>::__value);
    };

  template<typename _From, typename _To>
    struct __is_convertible_helper<_From, _To, true>
    { static const bool __value = (is_void<_To>::value
       || (__is_int_or_cref<_To>::__value
           && !is_void<_From>::value)); };




  template<typename _From, typename _To>
    struct is_convertible
    : public integral_constant<bool,
          __is_convertible_helper<_From, _To>::__value>
    { };

  template<std::size_t _Len>
    struct __aligned_storage_msa
    {
      union __type
      {
 unsigned char __data[_Len];
 struct __attribute__((__aligned__)) { } __align;
      };
    };
# 302 "/usr/include/c++/4.4/type_traits" 3
  template<std::size_t _Len, std::size_t _Align =
    __alignof__(typename __aligned_storage_msa<_Len>::__type)>
    struct aligned_storage
    {
      union type
      {
 unsigned char __data[_Len];
 struct __attribute__((__aligned__((_Align)))) { } __align;
      };
    };





  template<bool, typename _Tp = void>
    struct enable_if
    { };


  template<typename _Tp>
    struct enable_if<true, _Tp>
    { typedef _Tp type; };





  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct conditional
    { typedef _Iftrue type; };


  template<typename _Iftrue, typename _Iffalse>
    struct conditional<false, _Iftrue, _Iffalse>
    { typedef _Iffalse type; };




  template<typename _Up,
    bool _IsArray = is_array<_Up>::value,
    bool _IsFunction = is_function<_Up>::value>
    struct __decay_selector;


  template<typename _Up>
    struct __decay_selector<_Up, false, false>
    { typedef typename remove_cv<_Up>::type __type; };

  template<typename _Up>
    struct __decay_selector<_Up, true, false>
    { typedef typename remove_extent<_Up>::type* __type; };

  template<typename _Up>
    struct __decay_selector<_Up, false, true>
    { typedef typename add_pointer<_Up>::type __type; };


  template<typename _Tp>
    struct decay
    {
    private:
      typedef typename remove_reference<_Tp>::type __remove_type;

    public:
      typedef typename __decay_selector<__remove_type>::__type type;
    };



  template<typename _Unqualified, bool _IsConst, bool _IsVol>
    struct __cv_selector;

  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, false, false>
    { typedef _Unqualified __type; };

  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, false, true>
    { typedef volatile _Unqualified __type; };

  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, true, false>
    { typedef const _Unqualified __type; };

  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, true, true>
    { typedef const volatile _Unqualified __type; };

  template<typename _Qualified, typename _Unqualified,
    bool _IsConst = is_const<_Qualified>::value,
    bool _IsVol = is_volatile<_Qualified>::value>
    struct __match_cv_qualifiers
    {
    private:
      typedef __cv_selector<_Unqualified, _IsConst, _IsVol> __match;

    public:
      typedef typename __match::__type __type;
    };



  template<typename _Tp>
    struct __make_unsigned
    { typedef _Tp __type; };

  template<>
    struct __make_unsigned<char>
    { typedef unsigned char __type; };

  template<>
    struct __make_unsigned<signed char>
    { typedef unsigned char __type; };

  template<>
    struct __make_unsigned<short>
    { typedef unsigned short __type; };

  template<>
    struct __make_unsigned<int>
    { typedef unsigned int __type; };

  template<>
    struct __make_unsigned<long>
    { typedef unsigned long __type; };

  template<>
    struct __make_unsigned<long long>
    { typedef unsigned long long __type; };



  template<typename _Tp,
    bool _IsInt = is_integral<_Tp>::value,
    bool _IsEnum = is_enum<_Tp>::value>
    struct __make_unsigned_selector;

  template<typename _Tp>
    struct __make_unsigned_selector<_Tp, true, false>
    {
    private:
      typedef __make_unsigned<typename remove_cv<_Tp>::type> __unsignedt;
      typedef typename __unsignedt::__type __unsigned_type;
      typedef __match_cv_qualifiers<_Tp, __unsigned_type> __cv_unsigned;

    public:
      typedef typename __cv_unsigned::__type __type;
    };

  template<typename _Tp>
    struct __make_unsigned_selector<_Tp, false, true>
    {
    private:

      typedef unsigned char __smallest;
      static const bool __b0 = sizeof(_Tp) <= sizeof(__smallest);
      static const bool __b1 = sizeof(_Tp) <= sizeof(unsigned short);
      static const bool __b2 = sizeof(_Tp) <= sizeof(unsigned int);
      typedef conditional<__b2, unsigned int, unsigned long> __cond2;
      typedef typename __cond2::type __cond2_type;
      typedef conditional<__b1, unsigned short, __cond2_type> __cond1;
      typedef typename __cond1::type __cond1_type;

    public:
      typedef typename conditional<__b0, __smallest, __cond1_type>::type __type;
    };





  template<typename _Tp>
    struct make_unsigned
    { typedef typename __make_unsigned_selector<_Tp>::__type type; };


  template<>
    struct make_unsigned<bool>;



  template<typename _Tp>
    struct __make_signed
    { typedef _Tp __type; };

  template<>
    struct __make_signed<char>
    { typedef signed char __type; };

  template<>
    struct __make_signed<unsigned char>
    { typedef signed char __type; };

  template<>
    struct __make_signed<unsigned short>
    { typedef signed short __type; };

  template<>
    struct __make_signed<unsigned int>
    { typedef signed int __type; };

  template<>
    struct __make_signed<unsigned long>
    { typedef signed long __type; };

  template<>
    struct __make_signed<unsigned long long>
    { typedef signed long long __type; };



  template<typename _Tp,
    bool _IsInt = is_integral<_Tp>::value,
    bool _IsEnum = is_enum<_Tp>::value>
    struct __make_signed_selector;

  template<typename _Tp>
    struct __make_signed_selector<_Tp, true, false>
    {
    private:
      typedef __make_signed<typename remove_cv<_Tp>::type> __signedt;
      typedef typename __signedt::__type __signed_type;
      typedef __match_cv_qualifiers<_Tp, __signed_type> __cv_signed;

    public:
      typedef typename __cv_signed::__type __type;
    };

  template<typename _Tp>
    struct __make_signed_selector<_Tp, false, true>
    {
    private:

      typedef signed char __smallest;
      static const bool __b0 = sizeof(_Tp) <= sizeof(__smallest);
      static const bool __b1 = sizeof(_Tp) <= sizeof(signed short);
      static const bool __b2 = sizeof(_Tp) <= sizeof(signed int);
      typedef conditional<__b2, signed int, signed long> __cond2;
      typedef typename __cond2::type __cond2_type;
      typedef conditional<__b1, signed short, __cond2_type> __cond1;
      typedef typename __cond1::type __cond1_type;

    public:
      typedef typename conditional<__b0, __smallest, __cond1_type>::type __type;
    };





  template<typename _Tp>
    struct make_signed
    { typedef typename __make_signed_selector<_Tp>::__type type; };


  template<>
    struct make_signed<bool>;


  template<typename... _Tp>
    struct common_type;

  template<typename _Tp>
    struct common_type<_Tp>
    {
      static_assert(sizeof(_Tp) > 0, "must be complete type");
      typedef _Tp type;
    };

  template<typename _Tp, typename _Up>
    class common_type<_Tp, _Up>
    {
      static_assert(sizeof(_Tp) > 0, "must be complete type");
      static_assert(sizeof(_Up) > 0, "must be complete type");

      static _Tp&& __t();
      static _Up&& __u();




      static bool __true_or_false();

    public:
      typedef decltype(__true_or_false() ? __t() : __u()) type;
    };

  template<typename _Tp, typename _Up, typename... _Vp>
    struct common_type<_Tp, _Up, _Vp...>
    {
      typedef typename
        common_type<typename common_type<_Tp, _Up>::type, _Vp...>::type type;
    };


}
# 39 "/usr/include/c++/4.4/bits/move.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {


  template<typename _Tp>
    struct identity
    {
      typedef _Tp type;
    };

  template<typename _Tp>
    inline _Tp&&
    forward(typename std::identity<_Tp>::type&& __t)
    { return __t; }

  template<typename _Tp>
    inline typename std::remove_reference<_Tp>::type&&
    move(_Tp&& __t)
    { return __t; }

}






namespace std __attribute__ ((__visibility__ ("default"))) {







  template<typename _Tp>
    inline void
    swap(_Tp& __a, _Tp& __b)
    {



      _Tp __tmp = std::move(__a);
      __a = std::move(__b);
      __b = std::move(__tmp);
    }



  template<typename _Tp, size_t _Nm>
    inline void
    swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
    {
      for (size_t __n = 0; __n < _Nm; ++__n)
 swap(__a[__n], __b[__n]);
    }

}
# 61 "/usr/include/c++/4.4/bits/stl_pair.h" 2 3


namespace std __attribute__ ((__visibility__ ("default"))) {


  template<class _T1, class _T2>
    struct pair
    {
      typedef _T1 first_type;
      typedef _T2 second_type;

      _T1 first;
      _T2 second;





      pair()
      : first(), second() { }


      pair(const _T1& __a, const _T2& __b)
      : first(__a), second(__b) { }


      template<class _U1, class _U2>
        pair(_U1&& __x, _U2&& __y)
 : first(std::forward<_U1>(__x)),
   second(std::forward<_U2>(__y)) { }

      pair(pair&& __p)
      : first(std::move(__p.first)),
 second(std::move(__p.second)) { }



      template<class _U1, class _U2>
        pair(const pair<_U1, _U2>& __p)
 : first(__p.first),
   second(__p.second) { }


      template<class _U1, class _U2>
        pair(pair<_U1, _U2>&& __p)
 : first(std::move(__p.first)),
   second(std::move(__p.second)) { }


      template<class _U1, class _Arg0, class... _Args>
        pair(_U1&& __x, _Arg0&& __arg0, _Args&&... __args)
 : first(std::forward<_U1>(__x)),
   second(std::forward<_Arg0>(__arg0),
   std::forward<_Args>(__args)...) { }

      pair&
      operator=(pair&& __p)
      {
 first = std::move(__p.first);
 second = std::move(__p.second);
 return *this;
      }

      template<class _U1, class _U2>
        pair&
        operator=(pair<_U1, _U2>&& __p)
 {
   first = std::move(__p.first);
   second = std::move(__p.second);
   return *this;
 }

      void
      swap(pair&& __p)
      {
 using std::swap;
 swap(first, __p.first);
 swap(second, __p.second);
      }

    };


  template<class _T1, class _T2>
    inline bool
    operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first == __y.first && __x.second == __y.second; }


  template<class _T1, class _T2>
    inline bool
    operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first < __y.first
      || (!(__y.first < __x.first) && __x.second < __y.second); }


  template<class _T1, class _T2>
    inline bool
    operator!=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x == __y); }


  template<class _T1, class _T2>
    inline bool
    operator>(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __y < __x; }


  template<class _T1, class _T2>
    inline bool
    operator<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__y < __x); }


  template<class _T1, class _T2>
    inline bool
    operator>=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x < __y); }





  template<class _T1, class _T2>
    inline void
    swap(pair<_T1, _T2>& __x, pair<_T1, _T2>& __y)
    { __x.swap(__y); }

  template<class _T1, class _T2>
    inline void
    swap(pair<_T1, _T2>&& __x, pair<_T1, _T2>& __y)
    { __x.swap(__y); }

  template<class _T1, class _T2>
    inline void
    swap(pair<_T1, _T2>& __x, pair<_T1, _T2>&& __y)
    { __x.swap(__y); }
# 218 "/usr/include/c++/4.4/bits/stl_pair.h" 3
  template<typename _Tp>
    class reference_wrapper;


  template<typename _Tp>
    struct __strip_reference_wrapper
    {
      typedef _Tp __type;
    };

  template<typename _Tp>
    struct __strip_reference_wrapper<reference_wrapper<_Tp> >
    {
      typedef _Tp& __type;
    };

  template<typename _Tp>
    struct __strip_reference_wrapper<const reference_wrapper<_Tp> >
    {
      typedef _Tp& __type;
    };

  template<typename _Tp>
    struct __decay_and_strip
    {
      typedef typename __strip_reference_wrapper<
 typename decay<_Tp>::type>::__type __type;
    };


  template<class _T1, class _T2>
    inline pair<typename __decay_and_strip<_T1>::__type,
  typename __decay_and_strip<_T2>::__type>
    make_pair(_T1&& __x, _T2&& __y)
    {
      return pair<typename __decay_and_strip<_T1>::__type,
           typename __decay_and_strip<_T2>::__type>
 (std::forward<_T1>(__x), std::forward<_T2>(__y));
    }


}
# 67 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 1 3
# 62 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
# 62 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3



# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 40 "/usr/include/c++/4.4/cstddef" 3
# 40 "/usr/include/c++/4.4/cstddef" 3



# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 1 3 4
# 44 "/usr/include/c++/4.4/cstddef" 2 3
# 66 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {
# 78 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
  struct input_iterator_tag { };

  struct output_iterator_tag { };

  struct forward_iterator_tag : public input_iterator_tag { };


  struct bidirectional_iterator_tag : public forward_iterator_tag { };


  struct random_access_iterator_tag : public bidirectional_iterator_tag { };
# 101 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
  template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
           typename _Pointer = _Tp*, typename _Reference = _Tp&>
    struct iterator
    {

      typedef _Category iterator_category;

      typedef _Tp value_type;

      typedef _Distance difference_type;

      typedef _Pointer pointer;

      typedef _Reference reference;
    };







  template<typename _Iterator>
    struct iterator_traits
    {
      typedef typename _Iterator::iterator_category iterator_category;
      typedef typename _Iterator::value_type value_type;
      typedef typename _Iterator::difference_type difference_type;
      typedef typename _Iterator::pointer pointer;
      typedef typename _Iterator::reference reference;
    };

  template<typename _Tp>
    struct iterator_traits<_Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef _Tp& reference;
    };

  template<typename _Tp>
    struct iterator_traits<const _Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef const _Tp* pointer;
      typedef const _Tp& reference;
    };





  template<typename _Iter>
    inline typename iterator_traits<_Iter>::iterator_category
    __iterator_category(const _Iter&)
    { return typename iterator_traits<_Iter>::iterator_category(); }



}
# 68 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 1 3
# 62 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
# 62 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3



namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    __distance(_InputIterator __first, _InputIterator __last,
               input_iterator_tag)
    {



      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      while (__first != __last)
 {
   ++__first;
   ++__n;
 }
      return __n;
    }

  template<typename _RandomAccessIterator>
    inline typename iterator_traits<_RandomAccessIterator>::difference_type
    __distance(_RandomAccessIterator __first, _RandomAccessIterator __last,
               random_access_iterator_tag)
    {



      return __last - __first;
    }
# 107 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    distance(_InputIterator __first, _InputIterator __last)
    {

      return std::__distance(__first, __last,
        std::__iterator_category(__first));
    }

  template<typename _InputIterator, typename _Distance>
    inline void
    __advance(_InputIterator& __i, _Distance __n, input_iterator_tag)
    {


      while (__n--)
 ++__i;
    }

  template<typename _BidirectionalIterator, typename _Distance>
    inline void
    __advance(_BidirectionalIterator& __i, _Distance __n,
       bidirectional_iterator_tag)
    {



      if (__n > 0)
        while (__n--)
   ++__i;
      else
        while (__n++)
   --__i;
    }

  template<typename _RandomAccessIterator, typename _Distance>
    inline void
    __advance(_RandomAccessIterator& __i, _Distance __n,
              random_access_iterator_tag)
    {



      __i += __n;
    }
# 165 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator, typename _Distance>
    inline void
    advance(_InputIterator& __i, _Distance __n)
    {

      typename iterator_traits<_InputIterator>::difference_type __d = __n;
      std::__advance(__i, __d, std::__iterator_category(__i));
    }


  template<typename _InputIterator>
    inline _InputIterator
    next(_InputIterator __x, typename
  iterator_traits<_InputIterator>::difference_type __n = 1)
    {
      std::advance(__x, __n);
      return __x;
    }

  template<typename _BidirectionalIterator>
    inline _BidirectionalIterator
    prev(_BidirectionalIterator __x, typename
  iterator_traits<_BidirectionalIterator>::difference_type __n = 1)
    {
      std::advance(__x, -__n);
      return __x;
    }


}
# 69 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.4/bits/stl_iterator.h" 1 3
# 68 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {
# 89 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _Iterator>
    class reverse_iterator
    : public iterator<typename iterator_traits<_Iterator>::iterator_category,
        typename iterator_traits<_Iterator>::value_type,
        typename iterator_traits<_Iterator>::difference_type,
        typename iterator_traits<_Iterator>::pointer,
                      typename iterator_traits<_Iterator>::reference>
    {
    protected:
      _Iterator current;

    public:
      typedef _Iterator iterator_type;
      typedef typename iterator_traits<_Iterator>::difference_type
              difference_type;
      typedef typename iterator_traits<_Iterator>::reference reference;
      typedef typename iterator_traits<_Iterator>::pointer pointer;

    public:






      reverse_iterator() : current() { }




      explicit
      reverse_iterator(iterator_type __x) : current(__x) { }




      reverse_iterator(const reverse_iterator& __x)
      : current(__x.current) { }





      template<typename _Iter>
        reverse_iterator(const reverse_iterator<_Iter>& __x)
 : current(__x.base()) { }




      iterator_type
      base() const
      { return current; }






      reference
      operator*() const
      {
 _Iterator __tmp = current;
 return *--__tmp;
      }






      pointer
      operator->() const
      { return &(operator*()); }






      reverse_iterator&
      operator++()
      {
 --current;
 return *this;
      }






      reverse_iterator
      operator++(int)
      {
 reverse_iterator __tmp = *this;
 --current;
 return __tmp;
      }






      reverse_iterator&
      operator--()
      {
 ++current;
 return *this;
      }






      reverse_iterator
      operator--(int)
      {
 reverse_iterator __tmp = *this;
 ++current;
 return __tmp;
      }






      reverse_iterator
      operator+(difference_type __n) const
      { return reverse_iterator(current - __n); }






      reverse_iterator&
      operator+=(difference_type __n)
      {
 current -= __n;
 return *this;
      }






      reverse_iterator
      operator-(difference_type __n) const
      { return reverse_iterator(current + __n); }






      reverse_iterator&
      operator-=(difference_type __n)
      {
 current += __n;
 return *this;
      }






      reference
      operator[](difference_type __n) const
      { return *(*this + __n); }
    };
# 276 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _Iterator>
    inline bool
    operator==(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return __x.base() == __y.base(); }

  template<typename _Iterator>
    inline bool
    operator<(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() < __x.base(); }

  template<typename _Iterator>
    inline bool
    operator!=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x == __y); }

  template<typename _Iterator>
    inline bool
    operator>(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y < __x; }

  template<typename _Iterator>
    inline bool
    operator<=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__y < __x); }

  template<typename _Iterator>
    inline bool
    operator>=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x < __y); }

  template<typename _Iterator>
    inline typename reverse_iterator<_Iterator>::difference_type
    operator-(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() - __x.base(); }

  template<typename _Iterator>
    inline reverse_iterator<_Iterator>
    operator+(typename reverse_iterator<_Iterator>::difference_type __n,
       const reverse_iterator<_Iterator>& __x)
    { return reverse_iterator<_Iterator>(__x.base() - __n); }



  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator==(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return __x.base() == __y.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y.base() < __x.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator!=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x == __y); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y < __x; }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__y < __x); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x < __y); }

  template<typename _IteratorL, typename _IteratorR>


    inline auto
    operator-(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    -> decltype(__y.base() - __x.base())





    { return __y.base() - __x.base(); }
# 388 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _Container>
    class back_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit
      back_insert_iterator(_Container& __x) : container(&__x) { }
# 414 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
      back_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_back(__value);
 return *this;
      }


      back_insert_iterator&
      operator=(typename _Container::value_type&& __value)
      {
 container->push_back(std::move(__value));
 return *this;
      }



      back_insert_iterator&
      operator*()
      { return *this; }


      back_insert_iterator&
      operator++()
      { return *this; }


      back_insert_iterator
      operator++(int)
      { return *this; }
    };
# 457 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _Container>
    inline back_insert_iterator<_Container>
    back_inserter(_Container& __x)
    { return back_insert_iterator<_Container>(__x); }
# 472 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _Container>
    class front_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit front_insert_iterator(_Container& __x) : container(&__x) { }
# 497 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
      front_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_front(__value);
 return *this;
      }


      front_insert_iterator&
      operator=(typename _Container::value_type&& __value)
      {
 container->push_front(std::move(__value));
 return *this;
      }



      front_insert_iterator&
      operator*()
      { return *this; }


      front_insert_iterator&
      operator++()
      { return *this; }


      front_insert_iterator
      operator++(int)
      { return *this; }
    };
# 540 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _Container>
    inline front_insert_iterator<_Container>
    front_inserter(_Container& __x)
    { return front_insert_iterator<_Container>(__x); }
# 559 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _Container>
    class insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;
      typename _Container::iterator iter;

    public:

      typedef _Container container_type;





      insert_iterator(_Container& __x, typename _Container::iterator __i)
      : container(&__x), iter(__i) {}
# 601 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
      insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 iter = container->insert(iter, __value);
 ++iter;
 return *this;
      }


      insert_iterator&
      operator=(typename _Container::value_type&& __value)
      {
 iter = container->insert(iter, std::move(__value));
 ++iter;
 return *this;
      }



      insert_iterator&
      operator*()
      { return *this; }


      insert_iterator&
      operator++()
      { return *this; }


      insert_iterator&
      operator++(int)
      { return *this; }
    };
# 646 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _Container, typename _Iterator>
    inline insert_iterator<_Container>
    inserter(_Container& __x, _Iterator __i)
    {
      return insert_iterator<_Container>(__x,
      typename _Container::iterator(__i));
    }

}

namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
# 665 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  using std::iterator_traits;
  using std::iterator;
  template<typename _Iterator, typename _Container>
    class __normal_iterator
    {
    protected:
      _Iterator _M_current;

    public:
      typedef _Iterator iterator_type;
      typedef typename iterator_traits<_Iterator>::iterator_category
                                                             iterator_category;
      typedef typename iterator_traits<_Iterator>::value_type value_type;
      typedef typename iterator_traits<_Iterator>::difference_type
                                                             difference_type;
      typedef typename iterator_traits<_Iterator>::reference reference;
      typedef typename iterator_traits<_Iterator>::pointer pointer;

      __normal_iterator() : _M_current(_Iterator()) { }

      explicit
      __normal_iterator(const _Iterator& __i) : _M_current(__i) { }


      template<typename _Iter>
        __normal_iterator(const __normal_iterator<_Iter,
     typename __enable_if<
              (std::__are_same<_Iter, typename _Container::pointer>::__value),
        _Container>::__type>& __i)
        : _M_current(__i.base()) { }


      reference
      operator*() const
      { return *_M_current; }

      pointer
      operator->() const
      { return _M_current; }

      __normal_iterator&
      operator++()
      {
 ++_M_current;
 return *this;
      }

      __normal_iterator
      operator++(int)
      { return __normal_iterator(_M_current++); }


      __normal_iterator&
      operator--()
      {
 --_M_current;
 return *this;
      }

      __normal_iterator
      operator--(int)
      { return __normal_iterator(_M_current--); }


      reference
      operator[](const difference_type& __n) const
      { return _M_current[__n]; }

      __normal_iterator&
      operator+=(const difference_type& __n)
      { _M_current += __n; return *this; }

      __normal_iterator
      operator+(const difference_type& __n) const
      { return __normal_iterator(_M_current + __n); }

      __normal_iterator&
      operator-=(const difference_type& __n)
      { _M_current -= __n; return *this; }

      __normal_iterator
      operator-(const difference_type& __n) const
      { return __normal_iterator(_M_current - __n); }

      const _Iterator&
      base() const
      { return _M_current; }
    };
# 763 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator==(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator==(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }


  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }





  template<typename _IteratorL, typename _IteratorR, typename _Container>


    inline auto
    operator-(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    -> decltype(__lhs.base() - __rhs.base())





    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline typename __normal_iterator<_Iterator, _Container>::difference_type
    operator-(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline __normal_iterator<_Iterator, _Container>
    operator+(typename __normal_iterator<_Iterator, _Container>::difference_type
       __n, const __normal_iterator<_Iterator, _Container>& __i)
    { return __normal_iterator<_Iterator, _Container>(__i.base() + __n); }

}



namespace std __attribute__ ((__visibility__ ("default"))) {
# 881 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
  template<typename _Iterator>
    class move_iterator
    {
    protected:
      _Iterator _M_current;

    public:
      typedef _Iterator iterator_type;
      typedef typename iterator_traits<_Iterator>::difference_type
                                                               difference_type;

      typedef _Iterator pointer;
      typedef typename iterator_traits<_Iterator>::value_type value_type;
      typedef typename iterator_traits<_Iterator>::iterator_category
                                                               iterator_category;
      typedef value_type&& reference;

    public:
      move_iterator()
      : _M_current() { }

      explicit
      move_iterator(iterator_type __i)
      : _M_current(__i) { }

      template<typename _Iter>
 move_iterator(const move_iterator<_Iter>& __i)
 : _M_current(__i.base()) { }

      iterator_type
      base() const
      { return _M_current; }

      reference
      operator*() const
      { return *_M_current; }

      pointer
      operator->() const
      { return _M_current; }

      move_iterator&
      operator++()
      {
 ++_M_current;
 return *this;
      }

      move_iterator
      operator++(int)
      {
 move_iterator __tmp = *this;
 ++_M_current;
 return __tmp;
      }

      move_iterator&
      operator--()
      {
 --_M_current;
 return *this;
      }

      move_iterator
      operator--(int)
      {
 move_iterator __tmp = *this;
 --_M_current;
 return __tmp;
      }

      move_iterator
      operator+(difference_type __n) const
      { return move_iterator(_M_current + __n); }

      move_iterator&
      operator+=(difference_type __n)
      {
 _M_current += __n;
 return *this;
      }

      move_iterator
      operator-(difference_type __n) const
      { return move_iterator(_M_current - __n); }

      move_iterator&
      operator-=(difference_type __n)
      {
 _M_current -= __n;
 return *this;
      }

      reference
      operator[](difference_type __n) const
      { return _M_current[__n]; }
    };

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator==(const move_iterator<_IteratorL>& __x,
        const move_iterator<_IteratorR>& __y)
    { return __x.base() == __y.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator!=(const move_iterator<_IteratorL>& __x,
        const move_iterator<_IteratorR>& __y)
    { return !(__x == __y); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<(const move_iterator<_IteratorL>& __x,
       const move_iterator<_IteratorR>& __y)
    { return __x.base() < __y.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<=(const move_iterator<_IteratorL>& __x,
        const move_iterator<_IteratorR>& __y)
    { return !(__y < __x); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>(const move_iterator<_IteratorL>& __x,
       const move_iterator<_IteratorR>& __y)
    { return __y < __x; }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>=(const move_iterator<_IteratorL>& __x,
        const move_iterator<_IteratorR>& __y)
    { return !(__x < __y); }


  template<typename _IteratorL, typename _IteratorR>
    inline auto
    operator-(const move_iterator<_IteratorL>& __x,
       const move_iterator<_IteratorR>& __y)
    -> decltype(__x.base() - __y.base())
    { return __x.base() - __y.base(); }

  template<typename _Iterator>
    inline move_iterator<_Iterator>
    operator+(typename move_iterator<_Iterator>::difference_type __n,
       const move_iterator<_Iterator>& __x)
    { return __x + __n; }

  template<typename _Iterator>
    inline move_iterator<_Iterator>
    make_move_iterator(const _Iterator& __i)
    { return move_iterator<_Iterator>(__i); }

}
# 70 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3

# 1 "/usr/include/c++/4.4/debug/debug.h" 1 3
# 47 "/usr/include/c++/4.4/debug/debug.h" 3
namespace std
{
  namespace __debug { }
}




namespace __gnu_debug
{
  using namespace std::__debug;
}
# 72 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3


namespace std __attribute__ ((__visibility__ ("default"))) {




  template<bool _BoolType>
    struct __iter_swap
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          typedef typename iterator_traits<_ForwardIterator1>::value_type
            _ValueType1;
          _ValueType1 __tmp = std::move(*__a);
          *__a = std::move(*__b);
          *__b = std::move(__tmp);
 }
    };

  template<>
    struct __iter_swap<true>
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          swap(*__a, *__b);
        }
    };
# 115 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    inline void
    iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
    {
      typedef typename iterator_traits<_ForwardIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_ForwardIterator2>::value_type
 _ValueType2;
# 134 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
      typedef typename iterator_traits<_ForwardIterator1>::reference
 _ReferenceType1;
      typedef typename iterator_traits<_ForwardIterator2>::reference
 _ReferenceType2;
      std::__iter_swap<__are_same<_ValueType1, _ValueType2>::__value
 && __are_same<_ValueType1&, _ReferenceType1>::__value
 && __are_same<_ValueType2&, _ReferenceType2>::__value>::
 iter_swap(__a, __b);
    }
# 156 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    _ForwardIterator2
    swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
  _ForwardIterator2 __first2)
    {





                                                       ;

      for (; __first1 != __last1; ++__first1, ++__first2)
 std::iter_swap(__first1, __first2);
      return __first2;
    }
# 184 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _Tp>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b)
    {



      if (__b < __a)
 return __b;
      return __a;
    }
# 207 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _Tp>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b)
    {



      if (__a < __b)
 return __b;
      return __a;
    }
# 230 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__b, __a))
 return __b;
      return __a;
    }
# 251 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__a, __b))
 return __b;
      return __a;
    }




  template<typename _Iterator,
    bool _IsNormal = __is_normal_iterator<_Iterator>::__value>
    struct __niter_base
    {
      static _Iterator
      __b(_Iterator __it)
      { return __it; }
    };

  template<typename _Iterator>
    struct __niter_base<_Iterator, true>
    {
      static typename _Iterator::iterator_type
      __b(_Iterator __it)
      { return __it.base(); }
    };


  template<typename _Iterator,
    bool _IsMove = __is_move_iterator<_Iterator>::__value>
    struct __miter_base
    {
      static _Iterator
      __b(_Iterator __it)
      { return __it; }
    };

  template<typename _Iterator>
    struct __miter_base<_Iterator, true>
    {
      static typename _Iterator::iterator_type
      __b(_Iterator __it)
      { return __it.base(); }
    };







  template<bool, bool, typename>
    struct __copy_move
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   for (; __first != __last; ++__result, ++__first)
     *__result = *__first;
   return __result;
 }
    };


  template<typename _Category>
    struct __copy_move<true, false, _Category>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   for (; __first != __last; ++__result, ++__first)
     *__result = std::move(*__first);
   return __result;
 }
    };


  template<>
    struct __copy_move<false, false, random_access_iterator_tag>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   typedef typename iterator_traits<_II>::difference_type _Distance;
   for(_Distance __n = __last - __first; __n > 0; --__n)
     {
       *__result = *__first;
       ++__first;
       ++__result;
     }
   return __result;
 }
    };


  template<>
    struct __copy_move<true, false, random_access_iterator_tag>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   typedef typename iterator_traits<_II>::difference_type _Distance;
   for(_Distance __n = __last - __first; __n > 0; --__n)
     {
       *__result = std::move(*__first);
       ++__first;
       ++__result;
     }
   return __result;
 }
    };


  template<bool _IsMove>
    struct __copy_move<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_m(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {
   __builtin_memmove(__result, __first,
       sizeof(_Tp) * (__last - __first));
   return __result + (__last - __first);
 }
    };

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a(_II __first, _II __last, _OI __result)
    {
      typedef typename iterator_traits<_II>::value_type _ValueTypeI;
      typedef typename iterator_traits<_OI>::value_type _ValueTypeO;
      typedef typename iterator_traits<_II>::iterator_category _Category;
      const bool __simple = (__is_pod(_ValueTypeI)
                      && __is_pointer<_II>::__value
                      && __is_pointer<_OI>::__value
        && __are_same<_ValueTypeI, _ValueTypeO>::__value);

      return std::__copy_move<_IsMove, __simple,
                       _Category>::__copy_m(__first, __last, __result);
    }



  template<typename _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits>
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator;

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(_CharT*, _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(const _CharT*, const _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT, char_traits<_CharT> >,
     istreambuf_iterator<_CharT, char_traits<_CharT> >, _CharT*);

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a2(_II __first, _II __last, _OI __result)
    {
      return _OI(std::__copy_move_a<_IsMove>
   (std::__niter_base<_II>::__b(__first),
    std::__niter_base<_II>::__b(__last),
    std::__niter_base<_OI>::__b(__result)));
    }
# 456 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _II, typename _OI>
    inline _OI
    copy(_II __first, _II __last, _OI __result)
    {




                                                     ;

      return (std::__copy_move_a2<__is_move_iterator<_II>::__value>
       (std::__miter_base<_II>::__b(__first),
        std::__miter_base<_II>::__b(__last), __result));
    }
# 489 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _II, typename _OI>
    inline _OI
    move(_II __first, _II __last, _OI __result)
    {




                                                     ;

      return (std::__copy_move_a2<true>
       (std::__miter_base<_II>::__b(__first),
        std::__miter_base<_II>::__b(__last), __result));
    }






  template<bool, bool, typename>
    struct __copy_move_backward
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   while (__first != __last)
     *--__result = *--__last;
   return __result;
 }
    };


  template<typename _Category>
    struct __copy_move_backward<true, false, _Category>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   while (__first != __last)
     *--__result = std::move(*--__last);
   return __result;
 }
    };


  template<>
    struct __copy_move_backward<false, false, random_access_iterator_tag>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   typename iterator_traits<_BI1>::difference_type __n;
   for (__n = __last - __first; __n > 0; --__n)
     *--__result = *--__last;
   return __result;
 }
    };


  template<>
    struct __copy_move_backward<true, false, random_access_iterator_tag>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   typename iterator_traits<_BI1>::difference_type __n;
   for (__n = __last - __first; __n > 0; --__n)
     *--__result = std::move(*--__last);
   return __result;
 }
    };


  template<bool _IsMove>
    struct __copy_move_backward<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_move_b(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {
   const ptrdiff_t _Num = __last - __first;
   __builtin_memmove(__result - _Num, __first, sizeof(_Tp) * _Num);
   return __result - _Num;
 }
    };

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      typedef typename iterator_traits<_BI1>::value_type _ValueType1;
      typedef typename iterator_traits<_BI2>::value_type _ValueType2;
      typedef typename iterator_traits<_BI1>::iterator_category _Category;
      const bool __simple = (__is_pod(_ValueType1)
                      && __is_pointer<_BI1>::__value
                      && __is_pointer<_BI2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__copy_move_backward<_IsMove, __simple,
                                _Category>::__copy_move_b(__first,
         __last,
         __result);
    }

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      return _BI2(std::__copy_move_backward_a<_IsMove>
    (std::__niter_base<_BI1>::__b(__first),
     std::__niter_base<_BI1>::__b(__last),
     std::__niter_base<_BI2>::__b(__result)));
    }
# 626 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _BI1, typename _BI2>
    inline _BI2
    copy_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {






                                                     ;

      return (std::__copy_move_backward_a2<__is_move_iterator<_BI1>::__value>
       (std::__miter_base<_BI1>::__b(__first),
        std::__miter_base<_BI1>::__b(__last), __result));
    }
# 662 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _BI1, typename _BI2>
    inline _BI2
    move_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {






                                                     ;

      return (std::__copy_move_backward_a2<true>
       (std::__miter_base<_BI1>::__b(__first),
        std::__miter_base<_BI1>::__b(__last), __result));
    }






  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
       const _Tp& __value)
    {
      for (; __first != __last; ++__first)
 *__first = __value;
    }

  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
      const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __first != __last; ++__first)
 *__first = __tmp;
    }


  template<typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, void>::__type
    __fill_a(_Tp* __first, _Tp* __last, const _Tp& __c)
    {
      const _Tp __tmp = __c;
      __builtin_memset(__first, static_cast<unsigned char>(__tmp),
         __last - __first);
    }
# 728 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline void
    fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value)
    {



                                                     ;

      std::__fill_a(std::__niter_base<_ForwardIterator>::__b(__first),
      std::__niter_base<_ForwardIterator>::__b(__last), __value);
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      for (; __n > 0; --__n, ++__first)
 *__first = __value;
      return __first;
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __n > 0; --__n, ++__first)
 *__first = __tmp;
      return __first;
    }

  template<typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, _Tp*>::__type
    __fill_n_a(_Tp* __first, _Size __n, const _Tp& __c)
    {
      std::__fill_a(__first, __first + __n, __c);
      return __first + __n;
    }
# 783 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _OI, typename _Size, typename _Tp>
    inline _OI
    fill_n(_OI __first, _Size __n, const _Tp& __value)
    {



      return _OI(std::__fill_n_a(std::__niter_base<_OI>::__b(__first),
     __n, __value));
    }

  template<bool _BoolType>
    struct __equal
    {
      template<typename _II1, typename _II2>
        static bool
        equal(_II1 __first1, _II1 __last1, _II2 __first2)
        {
   for (; __first1 != __last1; ++__first1, ++__first2)
     if (!(*__first1 == *__first2))
       return false;
   return true;
 }
    };

  template<>
    struct __equal<true>
    {
      template<typename _Tp>
        static bool
        equal(const _Tp* __first1, const _Tp* __last1, const _Tp* __first2)
        {
   return !__builtin_memcmp(__first1, __first2, sizeof(_Tp)
       * (__last1 - __first1));
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __equal_aux(_II1 __first1, _II1 __last1, _II2 __first2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple = (__is_integer<_ValueType1>::__value
                      && __is_pointer<_II1>::__value
                      && __is_pointer<_II2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__equal<__simple>::equal(__first1, __last1, __first2);
    }


  template<typename, typename>
    struct __lc_rai
    {
      template<typename _II1, typename _II2>
        static _II1
        __newlast1(_II1, _II1 __last1, _II2, _II2)
        { return __last1; }

      template<typename _II>
        static bool
        __cnd2(_II __first, _II __last)
        { return __first != __last; }
    };

  template<>
    struct __lc_rai<random_access_iterator_tag, random_access_iterator_tag>
    {
      template<typename _RAI1, typename _RAI2>
        static _RAI1
        __newlast1(_RAI1 __first1, _RAI1 __last1,
     _RAI2 __first2, _RAI2 __last2)
        {
   const typename iterator_traits<_RAI1>::difference_type
     __diff1 = __last1 - __first1;
   const typename iterator_traits<_RAI2>::difference_type
     __diff2 = __last2 - __first2;
   return __diff2 < __diff1 ? __first1 + __diff2 : __last1;
 }

      template<typename _RAI>
        static bool
        __cnd2(_RAI, _RAI)
        { return true; }
    };

  template<bool _BoolType>
    struct __lexicographical_compare
    {
      template<typename _II1, typename _II2>
        static bool __lc(_II1, _II1, _II2, _II2);
    };

  template<bool _BoolType>
    template<typename _II1, typename _II2>
      bool
      __lexicographical_compare<_BoolType>::
      __lc(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
      {
 typedef typename iterator_traits<_II1>::iterator_category _Category1;
 typedef typename iterator_traits<_II2>::iterator_category _Category2;
 typedef std::__lc_rai<_Category1, _Category2> __rai_type;

 __last1 = __rai_type::__newlast1(__first1, __last1,
      __first2, __last2);
 for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
      ++__first1, ++__first2)
   {
     if (*__first1 < *__first2)
       return true;
     if (*__first2 < *__first1)
       return false;
   }
 return __first1 == __last1 && __first2 != __last2;
      }

  template<>
    struct __lexicographical_compare<true>
    {
      template<typename _Tp, typename _Up>
        static bool
        __lc(const _Tp* __first1, const _Tp* __last1,
      const _Up* __first2, const _Up* __last2)
 {
   const size_t __len1 = __last1 - __first1;
   const size_t __len2 = __last2 - __first2;
   const int __result = __builtin_memcmp(__first1, __first2,
      std::min(__len1, __len2));
   return __result != 0 ? __result < 0 : __len1 < __len2;
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __lexicographical_compare_aux(_II1 __first1, _II1 __last1,
      _II2 __first2, _II2 __last2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple =
 (__is_byte<_ValueType1>::__value && __is_byte<_ValueType2>::__value
  && !__gnu_cxx::__numeric_traits<_ValueType1>::__is_signed
  && !__gnu_cxx::__numeric_traits<_ValueType2>::__is_signed
  && __is_pointer<_II1>::__value
  && __is_pointer<_II2>::__value);

      return std::__lexicographical_compare<__simple>::__lc(__first1, __last1,
           __first2, __last2);
    }

}

namespace std __attribute__ ((__visibility__ ("default"))) {
# 950 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    equal(_II1 __first1, _II1 __last1, _II2 __first2)
    {






                                                       ;

      return std::__equal_aux(std::__niter_base<_II1>::__b(__first1),
         std::__niter_base<_II1>::__b(__last1),
         std::__niter_base<_II2>::__b(__first2));
    }
# 982 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _IIter1, typename _IIter2, typename _BinaryPredicate>
    inline bool
    equal(_IIter1 __first1, _IIter1 __last1,
   _IIter2 __first2, _BinaryPredicate __binary_pred)
    {



                                                       ;

      for (; __first1 != __last1; ++__first1, ++__first2)
 if (!bool(__binary_pred(*__first1, *__first2)))
   return false;
      return true;
    }
# 1013 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2)
    {

      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;




                                                       ;
                                                       ;

      return std::__lexicographical_compare_aux
 (std::__niter_base<_II1>::__b(__first1),
  std::__niter_base<_II1>::__b(__last1),
  std::__niter_base<_II2>::__b(__first2),
  std::__niter_base<_II2>::__b(__last2));
    }
# 1048 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2, typename _Compare>
    bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2, _Compare __comp)
    {
      typedef typename iterator_traits<_II1>::iterator_category _Category1;
      typedef typename iterator_traits<_II2>::iterator_category _Category2;
      typedef std::__lc_rai<_Category1, _Category2> __rai_type;




                                                       ;
                                                       ;

      __last1 = __rai_type::__newlast1(__first1, __last1, __first2, __last2);
      for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
    ++__first1, ++__first2)
 {
   if (__comp(*__first1, *__first2))
     return true;
   if (__comp(*__first2, *__first1))
     return false;
 }
      return __first1 == __last1 && __first2 != __last2;
    }
# 1088 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2)
    {






                                                       ;

      while (__first1 != __last1 && *__first1 == *__first2)
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }
# 1125 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _BinaryPredicate __binary_pred)
    {



                                                       ;

      while (__first1 != __last1 && bool(__binary_pred(*__first1, *__first2)))
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }

}
# 41 "/usr/include/c++/4.4/bits/char_traits.h" 2 3
# 1 "/usr/include/c++/4.4/bits/postypes.h" 1 3
# 39 "/usr/include/c++/4.4/bits/postypes.h" 3
# 39 "/usr/include/c++/4.4/bits/postypes.h" 3


# 1 "/usr/include/c++/4.4/cwchar" 1 3
# 40 "/usr/include/c++/4.4/cwchar" 3
# 40 "/usr/include/c++/4.4/cwchar" 3



# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 40 "/usr/include/c++/4.4/cstddef" 3
# 40 "/usr/include/c++/4.4/cstddef" 3



# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 1 3 4
# 44 "/usr/include/c++/4.4/cstddef" 2 3
# 44 "/usr/include/c++/4.4/cwchar" 2 3


# 1 "/usr/include/wchar.h" 1 3 4
# 36 "/usr/include/wchar.h" 3 4
# 1 "/usr/include/stdio.h" 1 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;
# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 37 "/usr/include/wchar.h" 2 3 4


# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stdarg.h" 1 3 4
# 30 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stdarg.h" 3 4
typedef __builtin_va_list va_list;
# 48 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 40 "/usr/include/wchar.h" 2 3 4
# 51 "/usr/include/wchar.h" 3 4
# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 1 3 4
# 58 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 3 4
typedef int wint_t;
# 52 "/usr/include/wchar.h" 2 3 4
# 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 106 "/usr/include/wchar.h" 3 4
typedef __mbstate_t mbstate_t;
# 132 "/usr/include/wchar.h" 3 4
extern "C" {




struct tm;
# 147 "/usr/include/wchar.h" 3 4
extern wchar_t *wcscpy (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src) throw ();

extern wchar_t *wcsncpy (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     throw ();


extern wchar_t *wcscat (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src) throw ();

extern wchar_t *wcsncat (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     throw ();


extern int wcscmp (const wchar_t *__s1, const wchar_t *__s2)
     throw () __attribute__ ((__pure__));

extern int wcsncmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
     throw () __attribute__ ((__pure__));




extern int wcscasecmp (const wchar_t *__s1, const wchar_t *__s2) throw ();


extern int wcsncasecmp (const wchar_t *__s1, const wchar_t *__s2,
   size_t __n) throw ();




# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 181 "/usr/include/wchar.h" 2 3 4

extern int wcscasecmp_l (const wchar_t *__s1, const wchar_t *__s2,
    __locale_t __loc) throw ();

extern int wcsncasecmp_l (const wchar_t *__s1, const wchar_t *__s2,
     size_t __n, __locale_t __loc) throw ();





extern int wcscoll (const wchar_t *__s1, const wchar_t *__s2) throw ();



extern size_t wcsxfrm (wchar_t *__restrict __s1,
         const wchar_t *__restrict __s2, size_t __n) throw ();
# 206 "/usr/include/wchar.h" 3 4
extern int wcscoll_l (const wchar_t *__s1, const wchar_t *__s2,
        __locale_t __loc) throw ();




extern size_t wcsxfrm_l (wchar_t *__s1, const wchar_t *__s2,
    size_t __n, __locale_t __loc) throw ();


extern wchar_t *wcsdup (const wchar_t *__s) throw () __attribute__ ((__malloc__));
# 227 "/usr/include/wchar.h" 3 4
extern wchar_t *wcschr (const wchar_t *__wcs, wchar_t __wc)
     throw () __attribute__ ((__pure__));
# 237 "/usr/include/wchar.h" 3 4
extern wchar_t *wcsrchr (const wchar_t *__wcs, wchar_t __wc)
     throw () __attribute__ ((__pure__));






extern wchar_t *wcschrnul (const wchar_t *__s, wchar_t __wc)
     throw () __attribute__ ((__pure__));





extern size_t wcscspn (const wchar_t *__wcs, const wchar_t *__reject)
     throw () __attribute__ ((__pure__));


extern size_t wcsspn (const wchar_t *__wcs, const wchar_t *__accept)
     throw () __attribute__ ((__pure__));
# 266 "/usr/include/wchar.h" 3 4
extern wchar_t *wcspbrk (const wchar_t *__wcs, const wchar_t *__accept)
     throw () __attribute__ ((__pure__));
# 277 "/usr/include/wchar.h" 3 4
extern wchar_t *wcsstr (const wchar_t *__haystack, const wchar_t *__needle)
     throw () __attribute__ ((__pure__));



extern wchar_t *wcstok (wchar_t *__restrict __s,
   const wchar_t *__restrict __delim,
   wchar_t **__restrict __ptr) throw ();


extern size_t wcslen (const wchar_t *__s) throw () __attribute__ ((__pure__));
# 299 "/usr/include/wchar.h" 3 4
extern wchar_t *wcswcs (const wchar_t *__haystack, const wchar_t *__needle)
     throw () __attribute__ ((__pure__));





extern size_t wcsnlen (const wchar_t *__s, size_t __maxlen)
     throw () __attribute__ ((__pure__));
# 320 "/usr/include/wchar.h" 3 4
extern wchar_t *wmemchr (const wchar_t *__s, wchar_t __c, size_t __n)
     throw () __attribute__ ((__pure__));



extern int wmemcmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
     throw () __attribute__ ((__pure__));


extern wchar_t *wmemcpy (wchar_t *__restrict __s1,
    const wchar_t *__restrict __s2, size_t __n) throw ();



extern wchar_t *wmemmove (wchar_t *__s1, const wchar_t *__s2, size_t __n)
     throw ();


extern wchar_t *wmemset (wchar_t *__s, wchar_t __c, size_t __n) throw ();





extern wchar_t *wmempcpy (wchar_t *__restrict __s1,
     const wchar_t *__restrict __s2, size_t __n)
     throw ();






extern wint_t btowc (int __c) throw ();



extern int wctob (wint_t __c) throw ();



extern int mbsinit (const mbstate_t *__ps) throw () __attribute__ ((__pure__));



extern size_t mbrtowc (wchar_t *__restrict __pwc,
         const char *__restrict __s, size_t __n,
         mbstate_t *__restrict __p) throw ();


extern size_t wcrtomb (char *__restrict __s, wchar_t __wc,
         mbstate_t *__restrict __ps) throw ();


extern size_t __mbrlen (const char *__restrict __s, size_t __n,
   mbstate_t *__restrict __ps) throw ();
extern size_t mbrlen (const char *__restrict __s, size_t __n,
        mbstate_t *__restrict __ps) throw ();
# 386 "/usr/include/wchar.h" 3 4
extern wint_t __btowc_alias (int __c) __asm ("btowc");
extern __inline __attribute__ ((__gnu_inline__)) wint_t
btowc (int __c) throw ()
{ return (__builtin_constant_p (__c) && __c >= '\0' && __c <= '\x7f'
   ? (wint_t) __c : __btowc_alias (__c)); }

extern int __wctob_alias (wint_t __c) __asm ("wctob");
extern __inline __attribute__ ((__gnu_inline__)) int
wctob (wint_t __wc) throw ()
{ return (__builtin_constant_p (__wc) && __wc >= L'\0' && __wc <= L'\x7f'
   ? (int) __wc : __wctob_alias (__wc)); }

extern __inline __attribute__ ((__gnu_inline__)) size_t
mbrlen (const char *__restrict __s, size_t __n, mbstate_t *__restrict __ps) throw ()

{ return (__ps != __null
   ? mbrtowc (__null, __s, __n, __ps) : __mbrlen (__s, __n, __null)); }





extern size_t mbsrtowcs (wchar_t *__restrict __dst,
    const char **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) throw ();



extern size_t wcsrtombs (char *__restrict __dst,
    const wchar_t **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) throw ();






extern size_t mbsnrtowcs (wchar_t *__restrict __dst,
     const char **__restrict __src, size_t __nmc,
     size_t __len, mbstate_t *__restrict __ps) throw ();



extern size_t wcsnrtombs (char *__restrict __dst,
     const wchar_t **__restrict __src,
     size_t __nwc, size_t __len,
     mbstate_t *__restrict __ps) throw ();






extern int wcwidth (wchar_t __c) throw ();



extern int wcswidth (const wchar_t *__s, size_t __n) throw ();






extern double wcstod (const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr) throw ();





extern float wcstof (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) throw ();
extern long double wcstold (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) throw ();







extern long int wcstol (const wchar_t *__restrict __nptr,
   wchar_t **__restrict __endptr, int __base) throw ();



extern unsigned long int wcstoul (const wchar_t *__restrict __nptr,
      wchar_t **__restrict __endptr, int __base)
     throw ();






__extension__
extern long long int wcstoll (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr, int __base)
     throw ();



__extension__
extern unsigned long long int wcstoull (const wchar_t *__restrict __nptr,
     wchar_t **__restrict __endptr,
     int __base) throw ();






__extension__
extern long long int wcstoq (const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr, int __base)
     throw ();



__extension__
extern unsigned long long int wcstouq (const wchar_t *__restrict __nptr,
           wchar_t **__restrict __endptr,
           int __base) throw ();
# 530 "/usr/include/wchar.h" 3 4
extern long int wcstol_l (const wchar_t *__restrict __nptr,
     wchar_t **__restrict __endptr, int __base,
     __locale_t __loc) throw ();

extern unsigned long int wcstoul_l (const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr,
        int __base, __locale_t __loc) throw ();

__extension__
extern long long int wcstoll_l (const wchar_t *__restrict __nptr,
    wchar_t **__restrict __endptr,
    int __base, __locale_t __loc) throw ();

__extension__
extern unsigned long long int wcstoull_l (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr,
       int __base, __locale_t __loc)
     throw ();

extern double wcstod_l (const wchar_t *__restrict __nptr,
   wchar_t **__restrict __endptr, __locale_t __loc)
     throw ();

extern float wcstof_l (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr, __locale_t __loc)
     throw ();

extern long double wcstold_l (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr,
         __locale_t __loc) throw ();






extern wchar_t *wcpcpy (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src) throw ();



extern wchar_t *wcpncpy (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     throw ();






extern __FILE *open_wmemstream (wchar_t **__bufloc, size_t *__sizeloc) throw ();






extern int fwide (__FILE *__fp, int __mode) throw ();






extern int fwprintf (__FILE *__restrict __stream,
       const wchar_t *__restrict __format, ...)
                                                           ;




extern int wprintf (const wchar_t *__restrict __format, ...)
                                                           ;

extern int swprintf (wchar_t *__restrict __s, size_t __n,
       const wchar_t *__restrict __format, ...)
     throw () ;





extern int vfwprintf (__FILE *__restrict __s,
        const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
                                                           ;




extern int vwprintf (const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                           ;


extern int vswprintf (wchar_t *__restrict __s, size_t __n,
        const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
     throw () ;






extern int fwscanf (__FILE *__restrict __stream,
      const wchar_t *__restrict __format, ...)
                                                          ;




extern int wscanf (const wchar_t *__restrict __format, ...)
                                                          ;

extern int swscanf (const wchar_t *__restrict __s,
      const wchar_t *__restrict __format, ...)
     throw () ;
# 689 "/usr/include/wchar.h" 3 4
extern int vfwscanf (__FILE *__restrict __s,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                          ;




extern int vwscanf (const wchar_t *__restrict __format,
      __gnuc_va_list __arg)
                                                          ;

extern int vswscanf (const wchar_t *__restrict __s,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
     throw () ;
# 745 "/usr/include/wchar.h" 3 4
extern wint_t fgetwc (__FILE *__stream);
extern wint_t getwc (__FILE *__stream);





extern wint_t getwchar (void);






extern wint_t fputwc (wchar_t __wc, __FILE *__stream);
extern wint_t putwc (wchar_t __wc, __FILE *__stream);





extern wint_t putwchar (wchar_t __wc);







extern wchar_t *fgetws (wchar_t *__restrict __ws, int __n,
   __FILE *__restrict __stream);





extern int fputws (const wchar_t *__restrict __ws,
     __FILE *__restrict __stream);






extern wint_t ungetwc (wint_t __wc, __FILE *__stream);
# 801 "/usr/include/wchar.h" 3 4
extern wint_t getwc_unlocked (__FILE *__stream);
extern wint_t getwchar_unlocked (void);







extern wint_t fgetwc_unlocked (__FILE *__stream);







extern wint_t fputwc_unlocked (wchar_t __wc, __FILE *__stream);
# 827 "/usr/include/wchar.h" 3 4
extern wint_t putwc_unlocked (wchar_t __wc, __FILE *__stream);
extern wint_t putwchar_unlocked (wchar_t __wc);
# 837 "/usr/include/wchar.h" 3 4
extern wchar_t *fgetws_unlocked (wchar_t *__restrict __ws, int __n,
     __FILE *__restrict __stream);







extern int fputws_unlocked (const wchar_t *__restrict __ws,
       __FILE *__restrict __stream);







extern size_t wcsftime (wchar_t *__restrict __s, size_t __maxsize,
   const wchar_t *__restrict __format,
   const struct tm *__restrict __tp) throw ();







extern size_t wcsftime_l (wchar_t *__restrict __s, size_t __maxsize,
     const wchar_t *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) throw ();
# 884 "/usr/include/wchar.h" 3 4
# 1 "/usr/include/bits/wchar2.h" 1 3 4
# 24 "/usr/include/bits/wchar2.h" 3 4
extern wchar_t *__wmemcpy_chk (wchar_t *__restrict __s1,
          const wchar_t *__restrict __s2, size_t __n,
          size_t __ns1) throw ();
extern wchar_t *__wmemcpy_alias (wchar_t *__restrict __s1, const wchar_t *__restrict __s2, size_t __n) throw () __asm__ ("" "wmemcpy");



extern wchar_t *__wmemcpy_chk_warn (wchar_t *__restrict __s1, const wchar_t *__restrict __s2, size_t __n, size_t __ns1) throw () __asm__ ("" "__wmemcpy_chk")




            ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) wchar_t *
wmemcpy (wchar_t *__restrict __s1, const wchar_t *__restrict __s2, size_t __n) throw ()

{
  if (__builtin_object_size (__s1, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n))
 return __wmemcpy_chk (__s1, __s2, __n,
         __builtin_object_size (__s1, 0) / sizeof (wchar_t));

      if (__n > __builtin_object_size (__s1, 0) / sizeof (wchar_t))
 return __wmemcpy_chk_warn (__s1, __s2, __n,
       __builtin_object_size (__s1, 0) / sizeof (wchar_t));
    }
  return __wmemcpy_alias (__s1, __s2, __n);
}


extern wchar_t *__wmemmove_chk (wchar_t *__s1, const wchar_t *__s2,
    size_t __n, size_t __ns1) throw ();
extern wchar_t *__wmemmove_alias (wchar_t *__s1, const wchar_t *__s2, size_t __n) throw () __asm__ ("" "wmemmove");


extern wchar_t *__wmemmove_chk_warn (wchar_t *__s1, const wchar_t *__s2, size_t __n, size_t __ns1) throw () __asm__ ("" "__wmemmove_chk")



            ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) wchar_t *
wmemmove (wchar_t *__s1, const wchar_t *__s2, size_t __n) throw ()
{
  if (__builtin_object_size (__s1, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n))
 return __wmemmove_chk (__s1, __s2, __n,
          __builtin_object_size (__s1, 0) / sizeof (wchar_t));

      if (__n > __builtin_object_size (__s1, 0) / sizeof (wchar_t))
 return __wmemmove_chk_warn (__s1, __s2, __n,
        __builtin_object_size (__s1, 0) / sizeof (wchar_t));
    }
  return __wmemmove_alias (__s1, __s2, __n);
}



extern wchar_t *__wmempcpy_chk (wchar_t *__restrict __s1,
    const wchar_t *__restrict __s2, size_t __n,
    size_t __ns1) throw ();
extern wchar_t *__wmempcpy_alias (wchar_t *__restrict __s1, const wchar_t *__restrict __s2, size_t __n) throw () __asm__ ("" "wmempcpy");



extern wchar_t *__wmempcpy_chk_warn (wchar_t *__restrict __s1, const wchar_t *__restrict __s2, size_t __n, size_t __ns1) throw () __asm__ ("" "__wmempcpy_chk")




            ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) wchar_t *
wmempcpy (wchar_t *__restrict __s1, const wchar_t *__restrict __s2, size_t __n) throw ()

{
  if (__builtin_object_size (__s1, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n))
 return __wmempcpy_chk (__s1, __s2, __n,
          __builtin_object_size (__s1, 0) / sizeof (wchar_t));

      if (__n > __builtin_object_size (__s1, 0) / sizeof (wchar_t))
 return __wmempcpy_chk_warn (__s1, __s2, __n,
        __builtin_object_size (__s1, 0) / sizeof (wchar_t));
    }
  return __wmempcpy_alias (__s1, __s2, __n);
}



extern wchar_t *__wmemset_chk (wchar_t *__s, wchar_t __c, size_t __n,
          size_t __ns) throw ();
extern wchar_t *__wmemset_alias (wchar_t *__s, wchar_t __c, size_t __n) throw () __asm__ ("" "wmemset");

extern wchar_t *__wmemset_chk_warn (wchar_t *__s, wchar_t __c, size_t __n, size_t __ns) throw () __asm__ ("" "__wmemset_chk")



            ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) wchar_t *
wmemset (wchar_t *__s, wchar_t __c, size_t __n) throw ()
{
  if (__builtin_object_size (__s, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n))
 return __wmemset_chk (__s, __c, __n, __builtin_object_size (__s, 0) / sizeof (wchar_t));

      if (__n > __builtin_object_size (__s, 0) / sizeof (wchar_t))
 return __wmemset_chk_warn (__s, __c, __n,
       __builtin_object_size (__s, 0) / sizeof (wchar_t));
    }
  return __wmemset_alias (__s, __c, __n);
}


extern wchar_t *__wcscpy_chk (wchar_t *__restrict __dest,
         const wchar_t *__restrict __src,
         size_t __n) throw ();
extern wchar_t *__wcscpy_alias (wchar_t *__restrict __dest, const wchar_t *__restrict __src) throw () __asm__ ("" "wcscpy");



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) wchar_t *
wcscpy (wchar_t *__restrict __dest, const wchar_t *__restrict __src) throw ()
{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1)
    return __wcscpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t));
  return __wcscpy_alias (__dest, __src);
}


extern wchar_t *__wcpcpy_chk (wchar_t *__restrict __dest,
         const wchar_t *__restrict __src,
         size_t __destlen) throw ();
extern wchar_t *__wcpcpy_alias (wchar_t *__restrict __dest, const wchar_t *__restrict __src) throw () __asm__ ("" "wcpcpy");



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) wchar_t *
wcpcpy (wchar_t *__restrict __dest, const wchar_t *__restrict __src) throw ()
{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1)
    return __wcpcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t));
  return __wcpcpy_alias (__dest, __src);
}


extern wchar_t *__wcsncpy_chk (wchar_t *__restrict __dest,
          const wchar_t *__restrict __src, size_t __n,
          size_t __destlen) throw ();
extern wchar_t *__wcsncpy_alias (wchar_t *__restrict __dest, const wchar_t *__restrict __src, size_t __n) throw () __asm__ ("" "wcsncpy");



extern wchar_t *__wcsncpy_chk_warn (wchar_t *__restrict __dest, const wchar_t *__restrict __src, size_t __n, size_t __destlen) throw () __asm__ ("" "__wcsncpy_chk")




            ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) wchar_t *
wcsncpy (wchar_t *__restrict __dest, const wchar_t *__restrict __src, size_t __n) throw ()

{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n))
 return __wcsncpy_chk (__dest, __src, __n,
         __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t));
      if (__n > __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t))
 return __wcsncpy_chk_warn (__dest, __src, __n,
       __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t));
    }
  return __wcsncpy_alias (__dest, __src, __n);
}


extern wchar_t *__wcpncpy_chk (wchar_t *__restrict __dest,
          const wchar_t *__restrict __src, size_t __n,
          size_t __destlen) throw ();
extern wchar_t *__wcpncpy_alias (wchar_t *__restrict __dest, const wchar_t *__restrict __src, size_t __n) throw () __asm__ ("" "wcpncpy");



extern wchar_t *__wcpncpy_chk_warn (wchar_t *__restrict __dest, const wchar_t *__restrict __src, size_t __n, size_t __destlen) throw () __asm__ ("" "__wcpncpy_chk")




            ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) wchar_t *
wcpncpy (wchar_t *__restrict __dest, const wchar_t *__restrict __src, size_t __n) throw ()

{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n))
 return __wcpncpy_chk (__dest, __src, __n,
         __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t));
      if (__n > __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t))
 return __wcpncpy_chk_warn (__dest, __src, __n,
       __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t));
    }
  return __wcpncpy_alias (__dest, __src, __n);
}


extern wchar_t *__wcscat_chk (wchar_t *__restrict __dest,
         const wchar_t *__restrict __src,
         size_t __destlen) throw ();
extern wchar_t *__wcscat_alias (wchar_t *__restrict __dest, const wchar_t *__restrict __src) throw () __asm__ ("" "wcscat");



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) wchar_t *
wcscat (wchar_t *__restrict __dest, const wchar_t *__restrict __src) throw ()
{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1)
    return __wcscat_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t));
  return __wcscat_alias (__dest, __src);
}


extern wchar_t *__wcsncat_chk (wchar_t *__restrict __dest,
          const wchar_t *__restrict __src,
          size_t __n, size_t __destlen) throw ();
extern wchar_t *__wcsncat_alias (wchar_t *__restrict __dest, const wchar_t *__restrict __src, size_t __n) throw () __asm__ ("" "wcsncat");




extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) wchar_t *
wcsncat (wchar_t *__restrict __dest, const wchar_t *__restrict __src, size_t __n) throw ()

{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1)
    return __wcsncat_chk (__dest, __src, __n,
     __builtin_object_size (__dest, 2 > 1) / sizeof (wchar_t));
  return __wcsncat_alias (__dest, __src, __n);
}


extern int __swprintf_chk (wchar_t *__restrict __s, size_t __n,
      int __flag, size_t __s_len,
      const wchar_t *__restrict __format, ...)
     throw () ;

extern int __swprintf_alias (wchar_t *__restrict __s, size_t __n, const wchar_t *__restrict __fmt, ...) throw () __asm__ ("" "swprintf");
# 303 "/usr/include/bits/wchar2.h" 3 4
extern int __vswprintf_chk (wchar_t *__restrict __s, size_t __n,
       int __flag, size_t __s_len,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
     throw () ;

extern int __vswprintf_alias (wchar_t *__restrict __s, size_t __n, const wchar_t *__restrict __fmt, __gnuc_va_list __ap) throw () __asm__ ("" "vswprintf");




extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
vswprintf (wchar_t *__restrict __s, size_t __n, const wchar_t *__restrict __fmt, __gnuc_va_list __ap) throw ()

{
  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1 || 2 > 1)
    return __vswprintf_chk (__s, __n, 2 - 1,
       __builtin_object_size (__s, 2 > 1) / sizeof (wchar_t), __fmt, __ap);
  return __vswprintf_alias (__s, __n, __fmt, __ap);
}




extern int __fwprintf_chk (__FILE *__restrict __stream, int __flag,
      const wchar_t *__restrict __format, ...);
extern int __wprintf_chk (int __flag, const wchar_t *__restrict __format,
     ...);
extern int __vfwprintf_chk (__FILE *__restrict __stream, int __flag,
       const wchar_t *__restrict __format,
       __gnuc_va_list __ap);
extern int __vwprintf_chk (int __flag, const wchar_t *__restrict __format,
      __gnuc_va_list __ap);
# 357 "/usr/include/bits/wchar2.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
vwprintf (const wchar_t *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vwprintf_chk (2 - 1, __fmt, __ap);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
vfwprintf (__FILE *__restrict __stream,
    const wchar_t *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vfwprintf_chk (__stream, 2 - 1, __fmt, __ap);
}



extern wchar_t *__fgetws_chk (wchar_t *__restrict __s, size_t __size, int __n,
         __FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern wchar_t *__fgetws_alias (wchar_t *__restrict __s, int __n, __FILE *__restrict __stream) __asm__ ("" "fgetws") __attribute__ ((__warn_unused_result__));


extern wchar_t *__fgetws_chk_warn (wchar_t *__restrict __s, size_t __size, int __n, __FILE *__restrict __stream) __asm__ ("" "__fgetws_chk")


     __attribute__ ((__warn_unused_result__)) ;


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__warn_unused_result__)) wchar_t *
fgetws (wchar_t *__restrict __s, int __n, __FILE *__restrict __stream)
{
  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n) || __n <= 0)
 return __fgetws_chk (__s, __builtin_object_size (__s, 2 > 1) / sizeof (wchar_t),
        __n, __stream);

      if ((size_t) __n > __builtin_object_size (__s, 2 > 1) / sizeof (wchar_t))
 return __fgetws_chk_warn (__s, __builtin_object_size (__s, 2 > 1) / sizeof (wchar_t),
      __n, __stream);
    }
  return __fgetws_alias (__s, __n, __stream);
}


extern wchar_t *__fgetws_unlocked_chk (wchar_t *__restrict __s, size_t __size,
           int __n, __FILE *__restrict __stream)
  __attribute__ ((__warn_unused_result__));
extern wchar_t *__fgetws_unlocked_alias (wchar_t *__restrict __s, int __n, __FILE *__restrict __stream) __asm__ ("" "fgetws_unlocked")


  __attribute__ ((__warn_unused_result__));
extern wchar_t *__fgetws_unlocked_chk_warn (wchar_t *__restrict __s, size_t __size, int __n, __FILE *__restrict __stream) __asm__ ("" "__fgetws_unlocked_chk")



     __attribute__ ((__warn_unused_result__)) ;


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__warn_unused_result__)) wchar_t *
fgetws_unlocked (wchar_t *__restrict __s, int __n, __FILE *__restrict __stream)
{
  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n) || __n <= 0)
 return __fgetws_unlocked_chk (__s, __builtin_object_size (__s, 2 > 1) / sizeof (wchar_t),
          __n, __stream);

      if ((size_t) __n > __builtin_object_size (__s, 2 > 1) / sizeof (wchar_t))
 return __fgetws_unlocked_chk_warn (__s, __builtin_object_size (__s, 2 > 1) / sizeof (wchar_t),
        __n, __stream);
    }
  return __fgetws_unlocked_alias (__s, __n, __stream);
}



extern size_t __wcrtomb_chk (char *__restrict __s, wchar_t __wchar,
        mbstate_t *__restrict __p,
        size_t __buflen) throw () __attribute__ ((__warn_unused_result__));
extern size_t __wcrtomb_alias (char *__restrict __s, wchar_t __wchar, mbstate_t *__restrict __ps) throw () __asm__ ("" "wcrtomb") __attribute__ ((__warn_unused_result__));



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__warn_unused_result__)) size_t
wcrtomb (char *__restrict __s, wchar_t __wchar, mbstate_t *__restrict __ps) throw ()

{







  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1 && 16 > __builtin_object_size (__s, 2 > 1))
    return __wcrtomb_chk (__s, __wchar, __ps, __builtin_object_size (__s, 2 > 1));
  return __wcrtomb_alias (__s, __wchar, __ps);
}


extern size_t __mbsrtowcs_chk (wchar_t *__restrict __dst,
          const char **__restrict __src,
          size_t __len, mbstate_t *__restrict __ps,
          size_t __dstlen) throw ();
extern size_t __mbsrtowcs_alias (wchar_t *__restrict __dst, const char **__restrict __src, size_t __len, mbstate_t *__restrict __ps) throw () __asm__ ("" "mbsrtowcs");




extern size_t __mbsrtowcs_chk_warn (wchar_t *__restrict __dst, const char **__restrict __src, size_t __len, mbstate_t *__restrict __ps, size_t __dstlen) throw () __asm__ ("" "__mbsrtowcs_chk")





                        ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) size_t
mbsrtowcs (wchar_t *__restrict __dst, const char **__restrict __src, size_t __len, mbstate_t *__restrict __ps) throw ()

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __mbsrtowcs_chk (__dst, __src, __len, __ps,
    __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));

      if (__len > __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t))
 return __mbsrtowcs_chk_warn (__dst, __src, __len, __ps,
         __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));
    }
  return __mbsrtowcs_alias (__dst, __src, __len, __ps);
}


extern size_t __wcsrtombs_chk (char *__restrict __dst,
          const wchar_t **__restrict __src,
          size_t __len, mbstate_t *__restrict __ps,
          size_t __dstlen) throw ();
extern size_t __wcsrtombs_alias (char *__restrict __dst, const wchar_t **__restrict __src, size_t __len, mbstate_t *__restrict __ps) throw () __asm__ ("" "wcsrtombs");




extern size_t __wcsrtombs_chk_warn (char *__restrict __dst, const wchar_t **__restrict __src, size_t __len, mbstate_t *__restrict __ps, size_t __dstlen) throw () __asm__ ("" "__wcsrtombs_chk")




                                                                    ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) size_t
wcsrtombs (char *__restrict __dst, const wchar_t **__restrict __src, size_t __len, mbstate_t *__restrict __ps) throw ()

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __wcsrtombs_chk (__dst, __src, __len, __ps, __builtin_object_size (__dst, 2 > 1));

      if (__len > __builtin_object_size (__dst, 2 > 1))
 return __wcsrtombs_chk_warn (__dst, __src, __len, __ps, __builtin_object_size (__dst, 2 > 1));
    }
  return __wcsrtombs_alias (__dst, __src, __len, __ps);
}



extern size_t __mbsnrtowcs_chk (wchar_t *__restrict __dst,
    const char **__restrict __src, size_t __nmc,
    size_t __len, mbstate_t *__restrict __ps,
    size_t __dstlen) throw ();
extern size_t __mbsnrtowcs_alias (wchar_t *__restrict __dst, const char **__restrict __src, size_t __nmc, size_t __len, mbstate_t *__restrict __ps) throw () __asm__ ("" "mbsnrtowcs");




extern size_t __mbsnrtowcs_chk_warn (wchar_t *__restrict __dst, const char **__restrict __src, size_t __nmc, size_t __len, mbstate_t *__restrict __ps, size_t __dstlen) throw () __asm__ ("" "__mbsnrtowcs_chk")





                        ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) size_t
mbsnrtowcs (wchar_t *__restrict __dst, const char **__restrict __src, size_t __nmc, size_t __len, mbstate_t *__restrict __ps) throw ()

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __mbsnrtowcs_chk (__dst, __src, __nmc, __len, __ps,
     __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));

      if (__len > __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t))
 return __mbsnrtowcs_chk_warn (__dst, __src, __nmc, __len, __ps,
          __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));
    }
  return __mbsnrtowcs_alias (__dst, __src, __nmc, __len, __ps);
}


extern size_t __wcsnrtombs_chk (char *__restrict __dst,
    const wchar_t **__restrict __src,
    size_t __nwc, size_t __len,
    mbstate_t *__restrict __ps, size_t __dstlen)
     throw ();
extern size_t __wcsnrtombs_alias (char *__restrict __dst, const wchar_t **__restrict __src, size_t __nwc, size_t __len, mbstate_t *__restrict __ps) throw () __asm__ ("" "wcsnrtombs");




extern size_t __wcsnrtombs_chk_warn (char *__restrict __dst, const wchar_t **__restrict __src, size_t __nwc, size_t __len, mbstate_t *__restrict __ps, size_t __dstlen) throw () __asm__ ("" "__wcsnrtombs_chk")





                                                                      ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) size_t
wcsnrtombs (char *__restrict __dst, const wchar_t **__restrict __src, size_t __nwc, size_t __len, mbstate_t *__restrict __ps) throw ()

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __wcsnrtombs_chk (__dst, __src, __nwc, __len, __ps,
     __builtin_object_size (__dst, 2 > 1));

      if (__len > __builtin_object_size (__dst, 2 > 1))
 return __wcsnrtombs_chk_warn (__dst, __src, __nwc, __len, __ps,
          __builtin_object_size (__dst, 2 > 1));
    }
  return __wcsnrtombs_alias (__dst, __src, __nwc, __len, __ps);
}
# 885 "/usr/include/wchar.h" 2 3 4






}
# 47 "/usr/include/c++/4.4/cwchar" 2 3
# 64 "/usr/include/c++/4.4/cwchar" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::mbstate_t;

}
# 138 "/usr/include/c++/4.4/cwchar" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::wint_t;

  using ::btowc;
  using ::fgetwc;
  using ::fgetws;
  using ::fputwc;
  using ::fputws;
  using ::fwide;
  using ::fwprintf;
  using ::fwscanf;
  using ::getwc;
  using ::getwchar;
  using ::mbrlen;
  using ::mbrtowc;
  using ::mbsinit;
  using ::mbsrtowcs;
  using ::putwc;
  using ::putwchar;

  using ::swprintf;

  using ::swscanf;
  using ::ungetwc;
  using ::vfwprintf;

  using ::vfwscanf;


  using ::vswprintf;


  using ::vswscanf;

  using ::vwprintf;

  using ::vwscanf;

  using ::wcrtomb;
  using ::wcscat;
  using ::wcscmp;
  using ::wcscoll;
  using ::wcscpy;
  using ::wcscspn;
  using ::wcsftime;
  using ::wcslen;
  using ::wcsncat;
  using ::wcsncmp;
  using ::wcsncpy;
  using ::wcsrtombs;
  using ::wcsspn;
  using ::wcstod;

  using ::wcstof;

  using ::wcstok;
  using ::wcstol;
  using ::wcstoul;
  using ::wcsxfrm;
  using ::wctob;
  using ::wmemcmp;
  using ::wmemcpy;
  using ::wmemmove;
  using ::wmemset;
  using ::wprintf;
  using ::wscanf;
  using ::wcschr;
  using ::wcspbrk;
  using ::wcsrchr;
  using ::wcsstr;
  using ::wmemchr;


  inline wchar_t*
  wcschr(wchar_t* __p, wchar_t __c)
  { return wcschr(const_cast<const wchar_t*>(__p), __c); }

  inline wchar_t*
  wcspbrk(wchar_t* __s1, const wchar_t* __s2)
  { return wcspbrk(const_cast<const wchar_t*>(__s1), __s2); }

  inline wchar_t*
  wcsrchr(wchar_t* __p, wchar_t __c)
  { return wcsrchr(const_cast<const wchar_t*>(__p), __c); }

  inline wchar_t*
  wcsstr(wchar_t* __s1, const wchar_t* __s2)
  { return wcsstr(const_cast<const wchar_t*>(__s1), __s2); }

  inline wchar_t*
  wmemchr(wchar_t* __p, wchar_t __c, size_t __n)
  { return wmemchr(const_cast<const wchar_t*>(__p), __c, __n); }


}







namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {






  using ::wcstold;
# 257 "/usr/include/c++/4.4/cwchar" 3
  using ::wcstoll;
  using ::wcstoull;


}

namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::__gnu_cxx::wcstold;
  using ::__gnu_cxx::wcstoll;
  using ::__gnu_cxx::wcstoull;

}
# 286 "/usr/include/c++/4.4/cwchar" 3
# 1 "/usr/include/c++/4.4/tr1_impl/cwchar" 1 3
# 32 "/usr/include/c++/4.4/tr1_impl/cwchar" 3
namespace std
{



  using std::wcstof;


  using std::vfwscanf;


  using std::vswscanf;


  using std::vwscanf;



  using std::wcstold;
  using std::wcstoll;
  using std::wcstoull;



}
# 287 "/usr/include/c++/4.4/cwchar" 2 3
# 42 "/usr/include/c++/4.4/bits/postypes.h" 2 3
# 69 "/usr/include/c++/4.4/bits/postypes.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {
# 87 "/usr/include/c++/4.4/bits/postypes.h" 3
  typedef long streamoff;
# 97 "/usr/include/c++/4.4/bits/postypes.h" 3
  typedef ptrdiff_t streamsize;
# 110 "/usr/include/c++/4.4/bits/postypes.h" 3
  template<typename _StateT>
    class fpos
    {
    private:
      streamoff _M_off;
      _StateT _M_state;

    public:




      fpos()
      : _M_off(0), _M_state() { }
# 132 "/usr/include/c++/4.4/bits/postypes.h" 3
      fpos(streamoff __off)
      : _M_off(__off), _M_state() { }


      operator streamoff() const { return _M_off; }


      void
      state(_StateT __st)
      { _M_state = __st; }


      _StateT
      state() const
      { return _M_state; }





      fpos&
      operator+=(streamoff __off)
      {
 _M_off += __off;
 return *this;
      }





      fpos&
      operator-=(streamoff __off)
      {
 _M_off -= __off;
 return *this;
      }







      fpos
      operator+(streamoff __off) const
      {
 fpos __pos(*this);
 __pos += __off;
 return __pos;
      }







      fpos
      operator-(streamoff __off) const
      {
 fpos __pos(*this);
 __pos -= __off;
 return __pos;
      }






      streamoff
      operator-(const fpos& __other) const
      { return _M_off - __other._M_off; }
    };






  template<typename _StateT>
    inline bool
    operator==(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) == streamoff(__rhs); }

  template<typename _StateT>
    inline bool
    operator!=(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) != streamoff(__rhs); }





  typedef fpos<mbstate_t> streampos;

  typedef fpos<mbstate_t> wstreampos;



  typedef fpos<mbstate_t> u16streampos;

  typedef fpos<mbstate_t> u32streampos;


}
# 42 "/usr/include/c++/4.4/bits/char_traits.h" 2 3
# 1 "/usr/include/c++/4.4/cwchar" 1 3
# 40 "/usr/include/c++/4.4/cwchar" 3
# 40 "/usr/include/c++/4.4/cwchar" 3



# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 40 "/usr/include/c++/4.4/cstddef" 3
# 40 "/usr/include/c++/4.4/cstddef" 3



# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 1 3 4
# 44 "/usr/include/c++/4.4/cstddef" 2 3
# 44 "/usr/include/c++/4.4/cwchar" 2 3


# 1 "/usr/include/wchar.h" 1 3 4
# 47 "/usr/include/c++/4.4/cwchar" 2 3
# 43 "/usr/include/c++/4.4/bits/char_traits.h" 2 3








namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
# 63 "/usr/include/c++/4.4/bits/char_traits.h" 3
  template<typename _CharT>
    struct _Char_types
    {
      typedef unsigned long int_type;
      typedef std::streampos pos_type;
      typedef std::streamoff off_type;
      typedef std::mbstate_t state_type;
    };
# 88 "/usr/include/c++/4.4/bits/char_traits.h" 3
  template<typename _CharT>
    struct char_traits
    {
      typedef _CharT char_type;
      typedef typename _Char_types<_CharT>::int_type int_type;
      typedef typename _Char_types<_CharT>::pos_type pos_type;
      typedef typename _Char_types<_CharT>::off_type off_type;
      typedef typename _Char_types<_CharT>::state_type state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, std::size_t __n);

      static std::size_t
      length(const char_type* __s);

      static const char_type*
      find(const char_type* __s, std::size_t __n, const char_type& __a);

      static char_type*
      move(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      copy(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      assign(char_type* __s, std::size_t __n, char_type __a);

      static char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }

      static int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((-1)); }

      static int_type
      not_eof(const int_type& __c)
      { return !eq_int_type(__c, eof()) ? __c : to_int_type(char_type()); }
    };

  template<typename _CharT>
    int
    char_traits<_CharT>::
    compare(const char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
 if (lt(__s1[__i], __s2[__i]))
   return -1;
 else if (lt(__s2[__i], __s1[__i]))
   return 1;
      return 0;
    }

  template<typename _CharT>
    std::size_t
    char_traits<_CharT>::
    length(const char_type* __p)
    {
      std::size_t __i = 0;
      while (!eq(__p[__i], char_type()))
        ++__i;
      return __i;
    }

  template<typename _CharT>
    const typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    find(const char_type* __s, std::size_t __n, const char_type& __a)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
        if (eq(__s[__i], __a))
          return __s + __i;
      return 0;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    move(char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      return static_cast<_CharT*>(__builtin_memmove(__s1, __s2,
          __n * sizeof(char_type)));
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    copy(char_type* __s1, const char_type* __s2, std::size_t __n)
    {

      std::copy(__s2, __s2 + __n, __s1);
      return __s1;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    assign(char_type* __s, std::size_t __n, char_type __a)
    {

      std::fill_n(__s, __n, __a);
      return __s;
    }

}

namespace std __attribute__ ((__visibility__ ("default"))) {
# 229 "/usr/include/c++/4.4/bits/char_traits.h" 3
  template<class _CharT>
    struct char_traits : public __gnu_cxx::char_traits<_CharT>
    { };



  template<>
    struct char_traits<char>
    {
      typedef char char_type;
      typedef int int_type;
      typedef streampos pos_type;
      typedef streamoff off_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      { return __builtin_memcmp(__s1, __s2, __n); }

      static size_t
      length(const char_type* __s)
      { return __builtin_strlen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      { return static_cast<const char_type*>(__builtin_memchr(__s, __a, __n)); }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      { return static_cast<char_type*>(__builtin_memmove(__s1, __s2, __n)); }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      { return static_cast<char_type*>(__builtin_memcpy(__s1, __s2, __n)); }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      { return static_cast<char_type*>(__builtin_memset(__s, __a, __n)); }

      static char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }



      static int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(static_cast<unsigned char>(__c)); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((-1)); }

      static int_type
      not_eof(const int_type& __c)
      { return (__c == eof()) ? 0 : __c; }
  };




  template<>
    struct char_traits<wchar_t>
    {
      typedef wchar_t char_type;
      typedef wint_t int_type;
      typedef streamoff off_type;
      typedef wstreampos pos_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemcmp(__s1, __s2, __n); }

      static size_t
      length(const char_type* __s)
      { return wcslen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      { return wmemchr(__s, __a, __n); }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemmove(__s1, __s2, __n); }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemcpy(__s1, __s2, __n); }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      { return wmemset(__s, __a, __n); }

      static char_type
      to_char_type(const int_type& __c)
      { return char_type(__c); }

      static int_type
      to_int_type(const char_type& __c)
      { return int_type(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((0xffffffffu)); }

      static int_type
      not_eof(const int_type& __c)
      { return eq_int_type(__c, eof()) ? 0 : __c; }
  };


}





# 1 "/usr/include/c++/4.4/cstdint" 1 3
# 31 "/usr/include/c++/4.4/cstdint" 3
# 31 "/usr/include/c++/4.4/cstdint" 3
# 71 "/usr/include/c++/4.4/cstdint" 3
# 1 "/usr/include/c++/4.4/tr1_impl/cstdint" 1 3
# 32 "/usr/include/c++/4.4/tr1_impl/cstdint" 3
namespace std
{


  using ::int8_t;
  using ::int16_t;
  using ::int32_t;
  using ::int64_t;

  using ::int_fast8_t;
  using ::int_fast16_t;
  using ::int_fast32_t;
  using ::int_fast64_t;

  using ::int_least8_t;
  using ::int_least16_t;
  using ::int_least32_t;
  using ::int_least64_t;

  using ::intmax_t;
  using ::intptr_t;

  using ::uint8_t;
  using ::uint16_t;
  using ::uint32_t;
  using ::uint64_t;

  using ::uint_fast8_t;
  using ::uint_fast16_t;
  using ::uint_fast32_t;
  using ::uint_fast64_t;

  using ::uint_least8_t;
  using ::uint_least16_t;
  using ::uint_least32_t;
  using ::uint_least64_t;

  using ::uintmax_t;
  using ::uintptr_t;


}
# 72 "/usr/include/c++/4.4/cstdint" 2 3
# 379 "/usr/include/c++/4.4/bits/char_traits.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {

  template<>
    struct char_traits<char16_t>
    {
      typedef char16_t char_type;
      typedef uint_least16_t int_type;
      typedef streamoff off_type;
      typedef u16streampos pos_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      {
 for (size_t __i = 0; __i < __n; ++__i)
   if (lt(__s1[__i], __s2[__i]))
     return -1;
   else if (lt(__s2[__i], __s1[__i]))
     return 1;
 return 0;
      }

      static size_t
      length(const char_type* __s)
      {
 size_t __i = 0;
 while (!eq(__s[__i], char_type()))
   ++__i;
 return __i;
      }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      {
 for (size_t __i = 0; __i < __n; ++__i)
   if (eq(__s[__i], __a))
     return __s + __i;
 return 0;
      }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      {
 return (static_cast<char_type*>
  (__builtin_memmove(__s1, __s2, __n * sizeof(char_type))));
      }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      {
 return (static_cast<char_type*>
  (__builtin_memcpy(__s1, __s2, __n * sizeof(char_type))));
      }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      {
 for (size_t __i = 0; __i < __n; ++__i)
   assign(__s[__i], __a);
 return __s;
      }

      static char_type
      to_char_type(const int_type& __c)
      { return char_type(__c); }

      static int_type
      to_int_type(const char_type& __c)
      { return int_type(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>(-1); }

      static int_type
      not_eof(const int_type& __c)
      { return eq_int_type(__c, eof()) ? 0 : __c; }
    };

  template<>
    struct char_traits<char32_t>
    {
      typedef char32_t char_type;
      typedef uint_least32_t int_type;
      typedef streamoff off_type;
      typedef u32streampos pos_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      {
 for (size_t __i = 0; __i < __n; ++__i)
   if (lt(__s1[__i], __s2[__i]))
     return -1;
   else if (lt(__s2[__i], __s1[__i]))
     return 1;
 return 0;
      }

      static size_t
      length(const char_type* __s)
      {
 size_t __i = 0;
 while (!eq(__s[__i], char_type()))
   ++__i;
 return __i;
      }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      {
 for (size_t __i = 0; __i < __n; ++__i)
   if (eq(__s[__i], __a))
     return __s + __i;
 return 0;
      }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      {
 return (static_cast<char_type*>
  (__builtin_memmove(__s1, __s2, __n * sizeof(char_type))));
      }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      {
 return (static_cast<char_type*>
  (__builtin_memcpy(__s1, __s2, __n * sizeof(char_type))));
      }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      {
 for (size_t __i = 0; __i < __n; ++__i)
   assign(__s[__i], __a);
 return __s;
      }

      static char_type
      to_char_type(const int_type& __c)
      { return char_type(__c); }

      static int_type
      to_int_type(const char_type& __c)
      { return int_type(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>(-1); }

      static int_type
      not_eof(const int_type& __c)
      { return eq_int_type(__c, eof()) ? 0 : __c; }
    };

}
# 42 "/usr/include/c++/4.4/string" 2 3
# 1 "/usr/include/c++/4.4/bits/allocator.h" 1 3
# 48 "/usr/include/c++/4.4/bits/allocator.h" 3
# 1 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++allocator.h" 1 3
# 34 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++allocator.h" 3
# 1 "/usr/include/c++/4.4/ext/new_allocator.h" 1 3
# 33 "/usr/include/c++/4.4/ext/new_allocator.h" 3
# 1 "/usr/include/c++/4.4/new" 1 3
# 39 "/usr/include/c++/4.4/new" 3
# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 40 "/usr/include/c++/4.4/cstddef" 3
# 40 "/usr/include/c++/4.4/cstddef" 3



# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 1 3 4
# 44 "/usr/include/c++/4.4/cstddef" 2 3
# 40 "/usr/include/c++/4.4/new" 2 3
# 1 "/usr/include/c++/4.4/exception" 1 3
# 35 "/usr/include/c++/4.4/exception" 3
#pragma GCC visibility push(default)



extern "C++" {

namespace std
{
# 59 "/usr/include/c++/4.4/exception" 3
  class exception
  {
  public:
    exception() throw() { }
    virtual ~exception() throw();



    virtual const char* what() const throw();
  };



  class bad_exception : public exception
  {
  public:
    bad_exception() throw() { }



    virtual ~bad_exception() throw();


    virtual const char* what() const throw();
  };


  typedef void (*terminate_handler) ();


  typedef void (*unexpected_handler) ();


  terminate_handler set_terminate(terminate_handler) throw();



  void terminate() __attribute__ ((__noreturn__));


  unexpected_handler set_unexpected(unexpected_handler) throw();



  void unexpected() __attribute__ ((__noreturn__));
# 115 "/usr/include/c++/4.4/exception" 3
  bool uncaught_exception() throw();


}

namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
# 138 "/usr/include/c++/4.4/exception" 3
  void __verbose_terminate_handler();

}

}

#pragma GCC visibility pop



# 1 "/usr/include/c++/4.4/exception_ptr.h" 1 3
# 34 "/usr/include/c++/4.4/exception_ptr.h" 3
#pragma GCC visibility push(default)








extern "C++" {

namespace std
{






  namespace __exception_ptr
  {



    class exception_ptr;
  }

  using __exception_ptr::exception_ptr;





  exception_ptr current_exception() throw();


  void rethrow_exception(exception_ptr) __attribute__ ((__noreturn__));


  template<typename _Ex>
    exception_ptr
    copy_exception(_Ex __ex) throw();

  namespace __exception_ptr
  {
    bool
    operator==(const exception_ptr&, const exception_ptr&) throw();

    bool
    operator!=(const exception_ptr&, const exception_ptr&) throw();

    class exception_ptr
    {
      void* _M_exception_object;

      explicit exception_ptr(void* __e) throw();

      void _M_addref() throw();
      void _M_release() throw();

      void *_M_get() const throw();

      void _M_safe_bool_dummy();

      friend exception_ptr std::current_exception() throw();
      friend void std::rethrow_exception(exception_ptr);

    public:
      exception_ptr() throw();

      typedef void (exception_ptr::*__safe_bool)();


      exception_ptr(__safe_bool) throw();

      exception_ptr(const exception_ptr&) throw();


      exception_ptr(exception_ptr&& __o) throw()
      : _M_exception_object(__o._M_exception_object)
      { __o._M_exception_object = 0; }


      exception_ptr&
      operator=(const exception_ptr&) throw();


      exception_ptr&
      operator=(exception_ptr&& __o) throw()
      {
        exception_ptr(static_cast<exception_ptr&&>(__o)).swap(*this);
        return *this;
      }


      ~exception_ptr() throw();

      void
      swap(exception_ptr&) throw();







      friend bool
      operator==(const exception_ptr&, const exception_ptr&) throw();

      const type_info*
      __cxa_exception_type() const throw();
    };

  }


  template<typename _Ex>
    exception_ptr
    copy_exception(_Ex __ex) throw()
    {
      try
 {
   throw __ex;
 }
      catch(...)
 {
   return current_exception ();
 }
    }


}

}

#pragma GCC visibility pop
# 149 "/usr/include/c++/4.4/exception" 2 3
# 41 "/usr/include/c++/4.4/new" 2 3

#pragma GCC visibility push(default)

extern "C++" {

namespace std
{






  class bad_alloc : public exception
  {
  public:
    bad_alloc() throw() { }



    virtual ~bad_alloc() throw();


    virtual const char* what() const throw();
  };

  struct nothrow_t { };

  extern const nothrow_t nothrow;



  typedef void (*new_handler)();



  new_handler set_new_handler(new_handler) throw();
}
# 91 "/usr/include/c++/4.4/new" 3
void* operator new(std::size_t) throw (std::bad_alloc);
void* operator new[](std::size_t) throw (std::bad_alloc);
void operator delete(void*) throw();
void operator delete[](void*) throw();
void* operator new(std::size_t, const std::nothrow_t&) throw();
void* operator new[](std::size_t, const std::nothrow_t&) throw();
void operator delete(void*, const std::nothrow_t&) throw();
void operator delete[](void*, const std::nothrow_t&) throw();


inline void* operator new(std::size_t, void* __p) throw() { return __p; }
inline void* operator new[](std::size_t, void* __p) throw() { return __p; }


inline void operator delete (void*, void*) throw() { }
inline void operator delete[](void*, void*) throw() { }

}

#pragma GCC visibility pop
# 34 "/usr/include/c++/4.4/ext/new_allocator.h" 2 3



namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {

  using std::size_t;
  using std::ptrdiff_t;
# 50 "/usr/include/c++/4.4/ext/new_allocator.h" 3
  template<typename _Tp>
    class new_allocator
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef new_allocator<_Tp1> other; };

      new_allocator() throw() { }

      new_allocator(const new_allocator&) throw() { }

      template<typename _Tp1>
        new_allocator(const new_allocator<_Tp1>&) throw() { }

      ~new_allocator() throw() { }

      pointer
      address(reference __x) const { return &__x; }

      const_pointer
      address(const_reference __x) const { return &__x; }



      pointer
      allocate(size_type __n, const void* = 0)
      {
 if (__builtin_expect(__n > this->max_size(), false))
   std::__throw_bad_alloc();

 return static_cast<_Tp*>(::operator new(__n * sizeof(_Tp)));
      }


      void
      deallocate(pointer __p, size_type)
      { ::operator delete(__p); }

      size_type
      max_size() const throw()
      { return size_t(-1) / sizeof(_Tp); }



      void
      construct(pointer __p, const _Tp& __val)
      { ::new((void *)__p) _Tp(__val); }


      template<typename... _Args>
        void
        construct(pointer __p, _Args&&... __args)
 { ::new((void *)__p) _Tp(std::forward<_Args>(__args)...); }


      void
      destroy(pointer __p) { __p->~_Tp(); }
    };

  template<typename _Tp>
    inline bool
    operator==(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return true; }

  template<typename _Tp>
    inline bool
    operator!=(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return false; }

}
# 35 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++allocator.h" 2 3
# 49 "/usr/include/c++/4.4/bits/allocator.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {
# 59 "/usr/include/c++/4.4/bits/allocator.h" 3
  template<typename _Tp>
    class allocator;


  template<>
    class allocator<void>
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef void* pointer;
      typedef const void* const_pointer;
      typedef void value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };
    };
# 85 "/usr/include/c++/4.4/bits/allocator.h" 3
  template<typename _Tp>
    class allocator: public __gnu_cxx::new_allocator<_Tp>
    {
   public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };

      allocator() throw() { }

      allocator(const allocator& __a) throw()
      : __gnu_cxx::new_allocator<_Tp>(__a) { }

      template<typename _Tp1>
        allocator(const allocator<_Tp1>&) throw() { }

      ~allocator() throw() { }


    };

  template<typename _T1, typename _T2>
    inline bool
    operator==(const allocator<_T1>&, const allocator<_T2>&)
    { return true; }

  template<typename _Tp>
    inline bool
    operator==(const allocator<_Tp>&, const allocator<_Tp>&)
    { return true; }

  template<typename _T1, typename _T2>
    inline bool
    operator!=(const allocator<_T1>&, const allocator<_T2>&)
    { return false; }

  template<typename _Tp>
    inline bool
    operator!=(const allocator<_Tp>&, const allocator<_Tp>&)
    { return false; }





  extern template class allocator<char>;
  extern template class allocator<wchar_t>;






  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_swap
    { static void _S_do_it(_Alloc&, _Alloc&) { } };

  template<typename _Alloc>
    struct __alloc_swap<_Alloc, false>
    {
      static void
      _S_do_it(_Alloc& __one, _Alloc& __two)
      {

 if (__one != __two)
   swap(__one, __two);
      }
    };


  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_neq
    {
      static bool
      _S_do_it(const _Alloc&, const _Alloc&)
      { return false; }
    };

  template<typename _Alloc>
    struct __alloc_neq<_Alloc, false>
    {
      static bool
      _S_do_it(const _Alloc& __one, const _Alloc& __two)
      { return __one != __two; }
    };

}
# 43 "/usr/include/c++/4.4/string" 2 3

# 1 "/usr/include/c++/4.4/bits/localefwd.h" 1 3
# 38 "/usr/include/c++/4.4/bits/localefwd.h" 3
# 38 "/usr/include/c++/4.4/bits/localefwd.h" 3



# 1 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++locale.h" 1 3
# 39 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++locale.h" 3
# 39 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++locale.h" 3


# 1 "/usr/include/c++/4.4/clocale" 1 3
# 40 "/usr/include/c++/4.4/clocale" 3
# 40 "/usr/include/c++/4.4/clocale" 3



# 1 "/usr/include/locale.h" 1 3 4
# 28 "/usr/include/locale.h" 3 4
# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 1 3 4
# 29 "/usr/include/locale.h" 2 3 4
# 1 "/usr/include/bits/locale.h" 1 3 4
# 30 "/usr/include/locale.h" 2 3 4

extern "C" {
# 53 "/usr/include/locale.h" 3 4
struct lconv
{


  char *decimal_point;
  char *thousands_sep;





  char *grouping;





  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;

  char p_cs_precedes;

  char p_sep_by_space;

  char n_cs_precedes;

  char n_sep_by_space;






  char p_sign_posn;
  char n_sign_posn;


  char int_p_cs_precedes;

  char int_p_sep_by_space;

  char int_n_cs_precedes;

  char int_n_sep_by_space;






  char int_p_sign_posn;
  char int_n_sign_posn;
# 120 "/usr/include/locale.h" 3 4
};



extern char *setlocale (int __category, const char *__locale) throw ();


extern struct lconv *localeconv (void) throw ();
# 151 "/usr/include/locale.h" 3 4
extern __locale_t newlocale (int __category_mask, const char *__locale,
        __locale_t __base) throw ();
# 186 "/usr/include/locale.h" 3 4
extern __locale_t duplocale (__locale_t __dataset) throw ();



extern void freelocale (__locale_t __dataset) throw ();






extern __locale_t uselocale (__locale_t __dataset) throw ();







}
# 44 "/usr/include/c++/4.4/clocale" 2 3








namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::lconv;
  using ::setlocale;
  using ::localeconv;

}
# 42 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++locale.h" 2 3
# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 40 "/usr/include/c++/4.4/cstddef" 3
# 40 "/usr/include/c++/4.4/cstddef" 3



# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 1 3 4
# 44 "/usr/include/c++/4.4/cstddef" 2 3
# 43 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++locale.h" 2 3






namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {

  extern "C" __typeof(uselocale) __uselocale;

}


namespace std __attribute__ ((__visibility__ ("default"))) {

  typedef __locale_t __c_locale;





  inline int
  __convert_from_v(const __c_locale& __cloc __attribute__ ((__unused__)),
     char* __out,
     const int __size __attribute__ ((__unused__)),
     const char* __fmt, ...)
  {

    __c_locale __old = __gnu_cxx::__uselocale(__cloc);
# 84 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++locale.h" 3
    __builtin_va_list __args;
    __builtin_va_start(__args, __fmt);


    const int __ret = __builtin_vsnprintf(__out, __size, __fmt, __args);




    __builtin_va_end(__args);


    __gnu_cxx::__uselocale(__old);







    return __ret;
  }

}
# 42 "/usr/include/c++/4.4/bits/localefwd.h" 2 3
# 1 "/usr/include/c++/4.4/iosfwd" 1 3
# 37 "/usr/include/c++/4.4/iosfwd" 3
# 37 "/usr/include/c++/4.4/iosfwd" 3






namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ios;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_streambuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_istream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_iostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
     typename _Alloc = allocator<_CharT> >
    class basic_stringbuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_istringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_ostringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_stringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_filebuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ifstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ofstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_fstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class ostreambuf_iterator;



  class ios_base;
# 126 "/usr/include/c++/4.4/iosfwd" 3
  typedef basic_ios<char> ios;
  typedef basic_streambuf<char> streambuf;
  typedef basic_istream<char> istream;
  typedef basic_ostream<char> ostream;
  typedef basic_iostream<char> iostream;
  typedef basic_stringbuf<char> stringbuf;
  typedef basic_istringstream<char> istringstream;
  typedef basic_ostringstream<char> ostringstream;
  typedef basic_stringstream<char> stringstream;
  typedef basic_filebuf<char> filebuf;
  typedef basic_ifstream<char> ifstream;
  typedef basic_ofstream<char> ofstream;
  typedef basic_fstream<char> fstream;


  typedef basic_ios<wchar_t> wios;
  typedef basic_streambuf<wchar_t> wstreambuf;
  typedef basic_istream<wchar_t> wistream;
  typedef basic_ostream<wchar_t> wostream;
  typedef basic_iostream<wchar_t> wiostream;
  typedef basic_stringbuf<wchar_t> wstringbuf;
  typedef basic_istringstream<wchar_t> wistringstream;
  typedef basic_ostringstream<wchar_t> wostringstream;
  typedef basic_stringstream<wchar_t> wstringstream;
  typedef basic_filebuf<wchar_t> wfilebuf;
  typedef basic_ifstream<wchar_t> wifstream;
  typedef basic_ofstream<wchar_t> wofstream;
  typedef basic_fstream<wchar_t> wfstream;



}
# 43 "/usr/include/c++/4.4/bits/localefwd.h" 2 3
# 1 "/usr/include/c++/4.4/cctype" 1 3
# 40 "/usr/include/c++/4.4/cctype" 3
# 40 "/usr/include/c++/4.4/cctype" 3



# 1 "/usr/include/ctype.h" 1 3 4
# 26 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/bits/types.h" 1 3 4
# 27 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 121 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 122 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 27 "/usr/include/ctype.h" 2 3 4

extern "C" {
# 39 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 28 "/usr/include/bits/byteswap.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/byteswap.h" 2 3 4






# 1 "/usr/include/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/bits/byteswap.h" 2 3 4
# 61 "/usr/include/endian.h" 2 3 4
# 40 "/usr/include/ctype.h" 2 3 4






enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 79 "/usr/include/ctype.h" 3 4
extern const unsigned short int **__ctype_b_loc (void)
     throw () __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     throw () __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     throw () __attribute__ ((__const__));
# 110 "/usr/include/ctype.h" 3 4
extern int isalnum (int) throw ();
extern int isalpha (int) throw ();
extern int iscntrl (int) throw ();
extern int isdigit (int) throw ();
extern int islower (int) throw ();
extern int isgraph (int) throw ();
extern int isprint (int) throw ();
extern int ispunct (int) throw ();
extern int isspace (int) throw ();
extern int isupper (int) throw ();
extern int isxdigit (int) throw ();



extern int tolower (int __c) throw ();


extern int toupper (int __c) throw ();
# 136 "/usr/include/ctype.h" 3 4
extern int isblank (int) throw ();






extern int isctype (int __c, int __mask) throw ();






extern int isascii (int __c) throw ();



extern int toascii (int __c) throw ();



extern int _toupper (int) throw ();
extern int _tolower (int) throw ();
# 271 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) throw ();
extern int isalpha_l (int, __locale_t) throw ();
extern int iscntrl_l (int, __locale_t) throw ();
extern int isdigit_l (int, __locale_t) throw ();
extern int islower_l (int, __locale_t) throw ();
extern int isgraph_l (int, __locale_t) throw ();
extern int isprint_l (int, __locale_t) throw ();
extern int ispunct_l (int, __locale_t) throw ();
extern int isspace_l (int, __locale_t) throw ();
extern int isupper_l (int, __locale_t) throw ();
extern int isxdigit_l (int, __locale_t) throw ();

extern int isblank_l (int, __locale_t) throw ();



extern int __tolower_l (int __c, __locale_t __l) throw ();
extern int tolower_l (int __c, __locale_t __l) throw ();


extern int __toupper_l (int __c, __locale_t __l) throw ();
extern int toupper_l (int __c, __locale_t __l) throw ();
# 347 "/usr/include/ctype.h" 3 4
}
# 44 "/usr/include/c++/4.4/cctype" 2 3
# 63 "/usr/include/c++/4.4/cctype" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::isalnum;
  using ::isalpha;
  using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  using ::islower;
  using ::isprint;
  using ::ispunct;
  using ::isspace;
  using ::isupper;
  using ::isxdigit;
  using ::tolower;
  using ::toupper;

}
# 92 "/usr/include/c++/4.4/cctype" 3
# 1 "/usr/include/c++/4.4/tr1_impl/cctype" 1 3
# 34 "/usr/include/c++/4.4/tr1_impl/cctype" 3
namespace std
{


  using ::isblank;


}
# 93 "/usr/include/c++/4.4/cctype" 2 3
# 44 "/usr/include/c++/4.4/bits/localefwd.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {


  class locale;

  template<typename _Facet>
    bool
    has_facet(const locale&) throw();

  template<typename _Facet>
    const _Facet&
    use_facet(const locale&);


  template<typename _CharT>
    bool
    isspace(_CharT, const locale&);

  template<typename _CharT>
    bool
    isprint(_CharT, const locale&);

  template<typename _CharT>
    bool
    iscntrl(_CharT, const locale&);

  template<typename _CharT>
    bool
    isupper(_CharT, const locale&);

  template<typename _CharT>
    bool
    islower(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalpha(_CharT, const locale&);

  template<typename _CharT>
    bool
    isdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    ispunct(_CharT, const locale&);

  template<typename _CharT>
    bool
    isxdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalnum(_CharT, const locale&);

  template<typename _CharT>
    bool
    isgraph(_CharT, const locale&);

  template<typename _CharT>
    _CharT
    toupper(_CharT, const locale&);

  template<typename _CharT>
    _CharT
    tolower(_CharT, const locale&);


  class ctype_base;
  template<typename _CharT>
    class ctype;
  template<> class ctype<char>;

  template<> class ctype<wchar_t>;

  template<typename _CharT>
    class ctype_byname;


  class codecvt_base;
  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt;
  template<> class codecvt<char, char, mbstate_t>;

  template<> class codecvt<wchar_t, char, mbstate_t>;

  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt_byname;



  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class num_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class num_put;

  template<typename _CharT> class numpunct;
  template<typename _CharT> class numpunct_byname;


  template<typename _CharT>
    class collate;
  template<typename _CharT> class
    collate_byname;


  class time_base;
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get;
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get_byname;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put_byname;


  class money_base;

  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class money_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class money_put;

  template<typename _CharT, bool _Intl = false>
    class moneypunct;
  template<typename _CharT, bool _Intl = false>
    class moneypunct_byname;


  class messages_base;
  template<typename _CharT>
    class messages;
  template<typename _CharT>
    class messages_byname;

}
# 45 "/usr/include/c++/4.4/string" 2 3
# 1 "/usr/include/c++/4.4/bits/ostream_insert.h" 1 3
# 32 "/usr/include/c++/4.4/bits/ostream_insert.h" 3
# 32 "/usr/include/c++/4.4/bits/ostream_insert.h" 3



# 1 "/usr/include/c++/4.4/cxxabi-forced.h" 1 3
# 29 "/usr/include/c++/4.4/cxxabi-forced.h" 3
#pragma GCC visibility push(default)


namespace __cxxabiv1
{







  class __forced_unwind
  {
    virtual ~__forced_unwind() throw();
    virtual void __pure_dummy() = 0;
  };
}


#pragma GCC visibility pop
# 36 "/usr/include/c++/4.4/bits/ostream_insert.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits>
    inline void
    __ostream_write(basic_ostream<_CharT, _Traits>& __out,
      const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      const streamsize __put = __out.rdbuf()->sputn(__s, __n);
      if (__put != __n)
 __out.setstate(__ios_base::badbit);
    }

  template<typename _CharT, typename _Traits>
    inline void
    __ostream_fill(basic_ostream<_CharT, _Traits>& __out, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      const _CharT __c = __out.fill();
      for (; __n > 0; --__n)
 {
   const typename _Traits::int_type __put = __out.rdbuf()->sputc(__c);
   if (_Traits::eq_int_type(__put, _Traits::eof()))
     {
       __out.setstate(__ios_base::badbit);
       break;
     }
 }
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    __ostream_insert(basic_ostream<_CharT, _Traits>& __out,
       const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      typename __ostream_type::sentry __cerb(__out);
      if (__cerb)
 {
   try
     {
       const streamsize __w = __out.width();
       if (__w > __n)
  {
    const bool __left = ((__out.flags()
     & __ios_base::adjustfield)
           == __ios_base::left);
    if (!__left)
      __ostream_fill(__out, __w - __n);
    if (__out.good())
      __ostream_write(__out, __s, __n);
    if (__left && __out.good())
      __ostream_fill(__out, __w - __n);
  }
       else
  __ostream_write(__out, __s, __n);
       __out.width(0);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __out._M_setstate(__ios_base::badbit);
       throw;
     }
   catch(...)
     { __out._M_setstate(__ios_base::badbit); }
 }
      return __out;
    }





  extern template ostream& __ostream_insert(ostream&, const char*, streamsize);


  extern template wostream& __ostream_insert(wostream&, const wchar_t*,
          streamsize);



}
# 46 "/usr/include/c++/4.4/string" 2 3



# 1 "/usr/include/c++/4.4/bits/stl_function.h" 1 3
# 60 "/usr/include/c++/4.4/bits/stl_function.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {
# 99 "/usr/include/c++/4.4/bits/stl_function.h" 3
  template<typename _Arg, typename _Result>
    struct unary_function
    {
      typedef _Arg argument_type;


      typedef _Result result_type;
    };




  template<typename _Arg1, typename _Arg2, typename _Result>
    struct binary_function
    {
      typedef _Arg1 first_argument_type;


      typedef _Arg2 second_argument_type;
      typedef _Result result_type;
    };
# 134 "/usr/include/c++/4.4/bits/stl_function.h" 3
  template<typename _Tp>
    struct plus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x + __y; }
    };


  template<typename _Tp>
    struct minus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x - __y; }
    };


  template<typename _Tp>
    struct multiplies : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x * __y; }
    };


  template<typename _Tp>
    struct divides : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x / __y; }
    };


  template<typename _Tp>
    struct modulus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x % __y; }
    };


  template<typename _Tp>
    struct negate : public unary_function<_Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x) const
      { return -__x; }
    };
# 198 "/usr/include/c++/4.4/bits/stl_function.h" 3
  template<typename _Tp>
    struct equal_to : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x == __y; }
    };


  template<typename _Tp>
    struct not_equal_to : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x != __y; }
    };


  template<typename _Tp>
    struct greater : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x > __y; }
    };


  template<typename _Tp>
    struct less : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x < __y; }
    };


  template<typename _Tp>
    struct greater_equal : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x >= __y; }
    };


  template<typename _Tp>
    struct less_equal : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x <= __y; }
    };
# 262 "/usr/include/c++/4.4/bits/stl_function.h" 3
  template<typename _Tp>
    struct logical_and : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x && __y; }
    };


  template<typename _Tp>
    struct logical_or : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x || __y; }
    };


  template<typename _Tp>
    struct logical_not : public unary_function<_Tp, bool>
    {
      bool
      operator()(const _Tp& __x) const
      { return !__x; }
    };




  template<typename _Tp>
    struct bit_and : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x & __y; }
    };

  template<typename _Tp>
    struct bit_or : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x | __y; }
    };

  template<typename _Tp>
    struct bit_xor : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x ^ __y; }
    };
# 345 "/usr/include/c++/4.4/bits/stl_function.h" 3
  template<typename _Predicate>
    class unary_negate
    : public unary_function<typename _Predicate::argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
      explicit
      unary_negate(const _Predicate& __x) : _M_pred(__x) { }

      bool
      operator()(const typename _Predicate::argument_type& __x) const
      { return !_M_pred(__x); }
    };


  template<typename _Predicate>
    inline unary_negate<_Predicate>
    not1(const _Predicate& __pred)
    { return unary_negate<_Predicate>(__pred); }


  template<typename _Predicate>
    class binary_negate
    : public binary_function<typename _Predicate::first_argument_type,
        typename _Predicate::second_argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
      explicit
      binary_negate(const _Predicate& __x) : _M_pred(__x) { }

      bool
      operator()(const typename _Predicate::first_argument_type& __x,
   const typename _Predicate::second_argument_type& __y) const
      { return !_M_pred(__x, __y); }
    };


  template<typename _Predicate>
    inline binary_negate<_Predicate>
    not2(const _Predicate& __pred)
    { return binary_negate<_Predicate>(__pred); }
# 416 "/usr/include/c++/4.4/bits/stl_function.h" 3
  template<typename _Arg, typename _Result>
    class pointer_to_unary_function : public unary_function<_Arg, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg);

    public:
      pointer_to_unary_function() { }

      explicit
      pointer_to_unary_function(_Result (*__x)(_Arg))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg __x) const
      { return _M_ptr(__x); }
    };


  template<typename _Arg, typename _Result>
    inline pointer_to_unary_function<_Arg, _Result>
    ptr_fun(_Result (*__x)(_Arg))
    { return pointer_to_unary_function<_Arg, _Result>(__x); }


  template<typename _Arg1, typename _Arg2, typename _Result>
    class pointer_to_binary_function
    : public binary_function<_Arg1, _Arg2, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg1, _Arg2);

    public:
      pointer_to_binary_function() { }

      explicit
      pointer_to_binary_function(_Result (*__x)(_Arg1, _Arg2))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg1 __x, _Arg2 __y) const
      { return _M_ptr(__x, __y); }
    };


  template<typename _Arg1, typename _Arg2, typename _Result>
    inline pointer_to_binary_function<_Arg1, _Arg2, _Result>
    ptr_fun(_Result (*__x)(_Arg1, _Arg2))
    { return pointer_to_binary_function<_Arg1, _Arg2, _Result>(__x); }


  template<typename _Tp>
    struct _Identity : public unary_function<_Tp,_Tp>
    {
      _Tp&
      operator()(_Tp& __x) const
      { return __x; }

      const _Tp&
      operator()(const _Tp& __x) const
      { return __x; }
    };

  template<typename _Pair>
    struct _Select1st : public unary_function<_Pair,
           typename _Pair::first_type>
    {
      typename _Pair::first_type&
      operator()(_Pair& __x) const
      { return __x.first; }

      const typename _Pair::first_type&
      operator()(const _Pair& __x) const
      { return __x.first; }
    };

  template<typename _Pair>
    struct _Select2nd : public unary_function<_Pair,
           typename _Pair::second_type>
    {
      typename _Pair::second_type&
      operator()(_Pair& __x) const
      { return __x.second; }

      const typename _Pair::second_type&
      operator()(const _Pair& __x) const
      { return __x.second; }
    };
# 523 "/usr/include/c++/4.4/bits/stl_function.h" 3
  template<typename _Ret, typename _Tp>
    class mem_fun_t : public unary_function<_Tp*, _Ret>
    {
    public:
      explicit
      mem_fun_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
    };



  template<typename _Ret, typename _Tp>
    class const_mem_fun_t : public unary_function<const _Tp*, _Ret>
    {
    public:
      explicit
      const_mem_fun_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };



  template<typename _Ret, typename _Tp>
    class mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      mem_fun_ref_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
  };



  template<typename _Ret, typename _Tp>
    class const_mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      const_mem_fun_ref_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_t : public binary_function<_Tp*, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_t : public binary_function<const _Tp*, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };



  template<typename _Ret, typename _Tp>
    inline mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)())
    { return mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)())
    { return mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }



}



# 1 "/usr/include/c++/4.4/backward/binders.h" 1 3
# 60 "/usr/include/c++/4.4/backward/binders.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {
# 96 "/usr/include/c++/4.4/backward/binders.h" 3
  template<typename _Operation>
    class binder1st
    : public unary_function<typename _Operation::second_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::first_argument_type value;

    public:
      binder1st(const _Operation& __x,
  const typename _Operation::first_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }



      typename _Operation::result_type
      operator()(typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }
    } __attribute__ ((__deprecated__));


  template<typename _Operation, typename _Tp>
    inline binder1st<_Operation>
    bind1st(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::first_argument_type _Arg1_type;
      return binder1st<_Operation>(__fn, _Arg1_type(__x));
    }


  template<typename _Operation>
    class binder2nd
    : public unary_function<typename _Operation::first_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::second_argument_type value;

    public:
      binder2nd(const _Operation& __x,
  const typename _Operation::second_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }



      typename _Operation::result_type
      operator()(typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }
    } __attribute__ ((__deprecated__));


  template<typename _Operation, typename _Tp>
    inline binder2nd<_Operation>
    bind2nd(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::second_argument_type _Arg2_type;
      return binder2nd<_Operation>(__fn, _Arg2_type(__x));
    }


}
# 713 "/usr/include/c++/4.4/bits/stl_function.h" 2 3
# 50 "/usr/include/c++/4.4/string" 2 3


# 1 "/usr/include/c++/4.4/bits/basic_string.h" 1 3
# 38 "/usr/include/c++/4.4/bits/basic_string.h" 3
# 38 "/usr/include/c++/4.4/bits/basic_string.h" 3


# 1 "/usr/include/c++/4.4/ext/atomicity.h" 1 3
# 34 "/usr/include/c++/4.4/ext/atomicity.h" 3
# 1 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/gthr.h" 1 3
# 30 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/gthr.h" 3
#pragma GCC visibility push(default)
# 162 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/gthr.h" 3
# 1 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/gthr-default.h" 1 3
# 41 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/gthr-default.h" 3
# 1 "/usr/include/pthread.h" 1 3 4
# 23 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/sched.h" 1 3 4
# 28 "/usr/include/sched.h" 3 4
# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 1 3 4
# 29 "/usr/include/sched.h" 2 3 4



# 1 "/usr/include/time.h" 1 3 4
# 75 "/usr/include/time.h" 3 4
typedef __time_t time_t;
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 33 "/usr/include/sched.h" 2 3 4


typedef __pid_t pid_t;






# 1 "/usr/include/bits/sched.h" 1 3 4
# 72 "/usr/include/bits/sched.h" 3 4
struct sched_param
  {
    int __sched_priority;
  };

extern "C" {



extern int clone (int (*__fn) (void *__arg), void *__child_stack,
    int __flags, void *__arg, ...) throw ();


extern int unshare (int __flags) throw ();


extern int sched_getcpu (void) throw ();


extern int setns (int __fd, int __nstype) throw ();



}







struct __sched_param
  {
    int __sched_priority;
  };
# 118 "/usr/include/bits/sched.h" 3 4
typedef unsigned long int __cpu_mask;






typedef struct
{
  __cpu_mask __bits[1024 / (8 * sizeof (__cpu_mask))];
} cpu_set_t;
# 201 "/usr/include/bits/sched.h" 3 4
extern "C" {

extern int __sched_cpucount (size_t __setsize, const cpu_set_t *__setp)
  throw ();
extern cpu_set_t *__sched_cpualloc (size_t __count) throw () __attribute__ ((__warn_unused_result__));
extern void __sched_cpufree (cpu_set_t *__set) throw ();

}
# 42 "/usr/include/sched.h" 2 3 4




extern "C" {


extern int sched_setparam (__pid_t __pid, const struct sched_param *__param)
     throw ();


extern int sched_getparam (__pid_t __pid, struct sched_param *__param) throw ();


extern int sched_setscheduler (__pid_t __pid, int __policy,
          const struct sched_param *__param) throw ();


extern int sched_getscheduler (__pid_t __pid) throw ();


extern int sched_yield (void) throw ();


extern int sched_get_priority_max (int __algorithm) throw ();


extern int sched_get_priority_min (int __algorithm) throw ();


extern int sched_rr_get_interval (__pid_t __pid, struct timespec *__t) throw ();
# 116 "/usr/include/sched.h" 3 4
extern int sched_setaffinity (__pid_t __pid, size_t __cpusetsize,
         const cpu_set_t *__cpuset) throw ();


extern int sched_getaffinity (__pid_t __pid, size_t __cpusetsize,
         cpu_set_t *__cpuset) throw ();


}
# 24 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4
extern "C" {








# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 1 3 4
# 38 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/bits/time.h" 1 3 4
# 30 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 86 "/usr/include/bits/time.h" 3 4
# 1 "/usr/include/bits/timex.h" 1 3 4
# 25 "/usr/include/bits/timex.h" 3 4
struct timex
{
  unsigned int modes;
  __syscall_slong_t offset;
  __syscall_slong_t freq;
  __syscall_slong_t maxerror;
  __syscall_slong_t esterror;
  int status;
  __syscall_slong_t constant;
  __syscall_slong_t precision;
  __syscall_slong_t tolerance;
  struct timeval time;
  __syscall_slong_t tick;
  __syscall_slong_t ppsfreq;
  __syscall_slong_t jitter;
  int shift;
  __syscall_slong_t stabil;
  __syscall_slong_t jitcnt;
  __syscall_slong_t calcnt;
  __syscall_slong_t errcnt;
  __syscall_slong_t stbcnt;

  int tai;


  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32;
};
# 87 "/usr/include/bits/time.h" 2 3 4

extern "C" {


extern int clock_adjtime (__clockid_t __clock_id, struct timex *__utx) throw ();

}
# 42 "/usr/include/time.h" 2 3 4
# 59 "/usr/include/time.h" 3 4
typedef __clock_t clock_t;
# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/time.h" 3 4
struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};
# 161 "/usr/include/time.h" 3 4
struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;
# 189 "/usr/include/time.h" 3 4
extern clock_t clock (void) throw ();


extern time_t time (time_t *__timer) throw ();


extern double difftime (time_t __time1, time_t __time0)
     throw () __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) throw ();





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) throw ();





extern char *strptime (const char *__restrict __s,
         const char *__restrict __fmt, struct tm *__tp)
     throw ();







extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) throw ();



extern char *strptime_l (const char *__restrict __s,
    const char *__restrict __fmt, struct tm *__tp,
    __locale_t __loc) throw ();






extern struct tm *gmtime (const time_t *__timer) throw ();



extern struct tm *localtime (const time_t *__timer) throw ();





extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) throw ();



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) throw ();





extern char *asctime (const struct tm *__tp) throw ();


extern char *ctime (const time_t *__timer) throw ();







extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) throw ();


extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) throw ();




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) throw ();



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) throw ();
# 319 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) throw ();


extern time_t timelocal (struct tm *__tp) throw ();


extern int dysize (int __year) throw () __attribute__ ((__const__));
# 334 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) throw ();


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) throw ();


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     throw ();






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) throw ();




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) throw ();


extern int timer_delete (timer_t __timerid) throw ();


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) throw ();


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     throw ();


extern int timer_getoverrun (timer_t __timerid) throw ();





extern int timespec_get (struct timespec *__ts, int __base)
     throw () __attribute__ ((__nonnull__ (1)));
# 403 "/usr/include/time.h" 3 4
extern int getdate_err;
# 412 "/usr/include/time.h" 3 4
extern struct tm *getdate (const char *__string);
# 426 "/usr/include/time.h" 3 4
extern int getdate_r (const char *__restrict __string,
        struct tm *__restrict __resbufp);


}
# 25 "/usr/include/pthread.h" 2 3 4

# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 22 "/usr/include/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
# 124 "/usr/include/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 211 "/usr/include/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 27 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/bits/setjmp.h" 1 3 4
# 26 "/usr/include/bits/setjmp.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 27 "/usr/include/bits/setjmp.h" 2 3 4




typedef long int __jmp_buf[8];
# 28 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/pthread.h" 2 3 4



enum
{
  PTHREAD_CREATE_JOINABLE,

  PTHREAD_CREATE_DETACHED

};



enum
{
  PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_ADAPTIVE_NP

  ,
  PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL



  , PTHREAD_MUTEX_FAST_NP = PTHREAD_MUTEX_TIMED_NP

};




enum
{
  PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_STALLED_NP = PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_ROBUST,
  PTHREAD_MUTEX_ROBUST_NP = PTHREAD_MUTEX_ROBUST
};





enum
{
  PTHREAD_PRIO_NONE,
  PTHREAD_PRIO_INHERIT,
  PTHREAD_PRIO_PROTECT
};
# 125 "/usr/include/pthread.h" 3 4
enum
{
  PTHREAD_RWLOCK_PREFER_READER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
  PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP
};
# 166 "/usr/include/pthread.h" 3 4
enum
{
  PTHREAD_INHERIT_SCHED,

  PTHREAD_EXPLICIT_SCHED

};



enum
{
  PTHREAD_SCOPE_SYSTEM,

  PTHREAD_SCOPE_PROCESS

};



enum
{
  PTHREAD_PROCESS_PRIVATE,

  PTHREAD_PROCESS_SHARED

};
# 201 "/usr/include/pthread.h" 3 4
struct _pthread_cleanup_buffer
{
  void (*__routine) (void *);
  void *__arg;
  int __canceltype;
  struct _pthread_cleanup_buffer *__prev;
};


enum
{
  PTHREAD_CANCEL_ENABLE,

  PTHREAD_CANCEL_DISABLE

};
enum
{
  PTHREAD_CANCEL_DEFERRED,

  PTHREAD_CANCEL_ASYNCHRONOUS

};
# 239 "/usr/include/pthread.h" 3 4
extern "C" {




extern int pthread_create (pthread_t *__restrict __newthread,
      const pthread_attr_t *__restrict __attr,
      void *(*__start_routine) (void *),
      void *__restrict __arg) throw () __attribute__ ((__nonnull__ (1, 3)));





extern void pthread_exit (void *__retval) __attribute__ ((__noreturn__));







extern int pthread_join (pthread_t __th, void **__thread_return);




extern int pthread_tryjoin_np (pthread_t __th, void **__thread_return) throw ();







extern int pthread_timedjoin_np (pthread_t __th, void **__thread_return,
     const struct timespec *__abstime);






extern int pthread_detach (pthread_t __th) throw ();



extern pthread_t pthread_self (void) throw () __attribute__ ((__const__));


extern int pthread_equal (pthread_t __thread1, pthread_t __thread2)
  throw () __attribute__ ((__const__));







extern int pthread_attr_init (pthread_attr_t *__attr) throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_destroy (pthread_attr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getdetachstate (const pthread_attr_t *__attr,
     int *__detachstate)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setdetachstate (pthread_attr_t *__attr,
     int __detachstate)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getguardsize (const pthread_attr_t *__attr,
          size_t *__guardsize)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setguardsize (pthread_attr_t *__attr,
          size_t __guardsize)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getschedparam (const pthread_attr_t *__restrict __attr,
           struct sched_param *__restrict __param)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedparam (pthread_attr_t *__restrict __attr,
           const struct sched_param *__restrict
           __param) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_getschedpolicy (const pthread_attr_t *__restrict
     __attr, int *__restrict __policy)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedpolicy (pthread_attr_t *__attr, int __policy)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getinheritsched (const pthread_attr_t *__restrict
      __attr, int *__restrict __inherit)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setinheritsched (pthread_attr_t *__attr,
      int __inherit)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getscope (const pthread_attr_t *__restrict __attr,
      int *__restrict __scope)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setscope (pthread_attr_t *__attr, int __scope)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getstackaddr (const pthread_attr_t *__restrict
          __attr, void **__restrict __stackaddr)
     throw () __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__deprecated__));





extern int pthread_attr_setstackaddr (pthread_attr_t *__attr,
          void *__stackaddr)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__));


extern int pthread_attr_getstacksize (const pthread_attr_t *__restrict
          __attr, size_t *__restrict __stacksize)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_attr_setstacksize (pthread_attr_t *__attr,
          size_t __stacksize)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getstack (const pthread_attr_t *__restrict __attr,
      void **__restrict __stackaddr,
      size_t *__restrict __stacksize)
     throw () __attribute__ ((__nonnull__ (1, 2, 3)));




extern int pthread_attr_setstack (pthread_attr_t *__attr, void *__stackaddr,
      size_t __stacksize) throw () __attribute__ ((__nonnull__ (1)));





extern int pthread_attr_setaffinity_np (pthread_attr_t *__attr,
     size_t __cpusetsize,
     const cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (1, 3)));



extern int pthread_attr_getaffinity_np (const pthread_attr_t *__attr,
     size_t __cpusetsize,
     cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (1, 3)));


extern int pthread_getattr_default_np (pthread_attr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_setattr_default_np (const pthread_attr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));




extern int pthread_getattr_np (pthread_t __th, pthread_attr_t *__attr)
     throw () __attribute__ ((__nonnull__ (2)));







extern int pthread_setschedparam (pthread_t __target_thread, int __policy,
      const struct sched_param *__param)
     throw () __attribute__ ((__nonnull__ (3)));


extern int pthread_getschedparam (pthread_t __target_thread,
      int *__restrict __policy,
      struct sched_param *__restrict __param)
     throw () __attribute__ ((__nonnull__ (2, 3)));


extern int pthread_setschedprio (pthread_t __target_thread, int __prio)
     throw ();




extern int pthread_getname_np (pthread_t __target_thread, char *__buf,
          size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));


extern int pthread_setname_np (pthread_t __target_thread, const char *__name)
     throw () __attribute__ ((__nonnull__ (2)));





extern int pthread_getconcurrency (void) throw ();


extern int pthread_setconcurrency (int __level) throw ();







extern int pthread_yield (void) throw ();




extern int pthread_setaffinity_np (pthread_t __th, size_t __cpusetsize,
       const cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (3)));


extern int pthread_getaffinity_np (pthread_t __th, size_t __cpusetsize,
       cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (3)));
# 505 "/usr/include/pthread.h" 3 4
extern int pthread_once (pthread_once_t *__once_control,
    void (*__init_routine) (void)) __attribute__ ((__nonnull__ (1, 2)));
# 517 "/usr/include/pthread.h" 3 4
extern int pthread_setcancelstate (int __state, int *__oldstate);



extern int pthread_setcanceltype (int __type, int *__oldtype);


extern int pthread_cancel (pthread_t __th);




extern void pthread_testcancel (void);




typedef struct
{
  struct
  {
    __jmp_buf __cancel_jmp_buf;
    int __mask_was_saved;
  } __cancel_jmp_buf[1];
  void *__pad[4];
} __pthread_unwind_buf_t __attribute__ ((__aligned__));
# 551 "/usr/include/pthread.h" 3 4
struct __pthread_cleanup_frame
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;
};




class __pthread_cleanup_class
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;

 public:
  __pthread_cleanup_class (void (*__fct) (void *), void *__arg)
    : __cancel_routine (__fct), __cancel_arg (__arg), __do_it (1) { }
  ~__pthread_cleanup_class () { if (__do_it) __cancel_routine (__cancel_arg); }
  void __setdoit (int __newval) { __do_it = __newval; }
  void __defer () { pthread_setcanceltype (PTHREAD_CANCEL_DEFERRED,
        &__cancel_type); }
  void __restore () const { pthread_setcanceltype (__cancel_type, 0); }
};
# 753 "/usr/include/pthread.h" 3 4
struct __jmp_buf_tag;
extern int __sigsetjmp (struct __jmp_buf_tag *__env, int __savemask) throw ();





extern int pthread_mutex_init (pthread_mutex_t *__mutex,
          const pthread_mutexattr_t *__mutexattr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_destroy (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_trylock (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_lock (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutex_timedlock (pthread_mutex_t *__restrict __mutex,
        const struct timespec *__restrict
        __abstime) throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_unlock (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutex_getprioceiling (const pthread_mutex_t *
      __restrict __mutex,
      int *__restrict __prioceiling)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_setprioceiling (pthread_mutex_t *__restrict __mutex,
      int __prioceiling,
      int *__restrict __old_ceiling)
     throw () __attribute__ ((__nonnull__ (1, 3)));




extern int pthread_mutex_consistent (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));

extern int pthread_mutex_consistent_np (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));
# 817 "/usr/include/pthread.h" 3 4
extern int pthread_mutexattr_init (pthread_mutexattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_destroy (pthread_mutexattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getpshared (const pthread_mutexattr_t *
      __restrict __attr,
      int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setpshared (pthread_mutexattr_t *__attr,
      int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_gettype (const pthread_mutexattr_t *__restrict
          __attr, int *__restrict __kind)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_mutexattr_settype (pthread_mutexattr_t *__attr, int __kind)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_getprotocol (const pthread_mutexattr_t *
       __restrict __attr,
       int *__restrict __protocol)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutexattr_setprotocol (pthread_mutexattr_t *__attr,
       int __protocol)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getprioceiling (const pthread_mutexattr_t *
          __restrict __attr,
          int *__restrict __prioceiling)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setprioceiling (pthread_mutexattr_t *__attr,
          int __prioceiling)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_getrobust (const pthread_mutexattr_t *__attr,
     int *__robustness)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern int pthread_mutexattr_getrobust_np (const pthread_mutexattr_t *__attr,
        int *__robustness)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutexattr_setrobust (pthread_mutexattr_t *__attr,
     int __robustness)
     throw () __attribute__ ((__nonnull__ (1)));

extern int pthread_mutexattr_setrobust_np (pthread_mutexattr_t *__attr,
        int __robustness)
     throw () __attribute__ ((__nonnull__ (1)));
# 899 "/usr/include/pthread.h" 3 4
extern int pthread_rwlock_init (pthread_rwlock_t *__restrict __rwlock,
    const pthread_rwlockattr_t *__restrict
    __attr) throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_destroy (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_rdlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_tryrdlock (pthread_rwlock_t *__rwlock)
  throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_rwlock_timedrdlock (pthread_rwlock_t *__restrict __rwlock,
           const struct timespec *__restrict
           __abstime) throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_rwlock_wrlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_trywrlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_rwlock_timedwrlock (pthread_rwlock_t *__restrict __rwlock,
           const struct timespec *__restrict
           __abstime) throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_rwlock_unlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));





extern int pthread_rwlockattr_init (pthread_rwlockattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_destroy (pthread_rwlockattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getpshared (const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setpshared (pthread_rwlockattr_t *__attr,
       int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getkind_np (const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pref)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setkind_np (pthread_rwlockattr_t *__attr,
       int __pref) throw () __attribute__ ((__nonnull__ (1)));







extern int pthread_cond_init (pthread_cond_t *__restrict __cond,
         const pthread_condattr_t *__restrict __cond_attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_destroy (pthread_cond_t *__cond)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_signal (pthread_cond_t *__cond)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_broadcast (pthread_cond_t *__cond)
     throw () __attribute__ ((__nonnull__ (1)));






extern int pthread_cond_wait (pthread_cond_t *__restrict __cond,
         pthread_mutex_t *__restrict __mutex)
     __attribute__ ((__nonnull__ (1, 2)));
# 1011 "/usr/include/pthread.h" 3 4
extern int pthread_cond_timedwait (pthread_cond_t *__restrict __cond,
       pthread_mutex_t *__restrict __mutex,
       const struct timespec *__restrict __abstime)
     __attribute__ ((__nonnull__ (1, 2, 3)));




extern int pthread_condattr_init (pthread_condattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_destroy (pthread_condattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_getpshared (const pthread_condattr_t *
     __restrict __attr,
     int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setpshared (pthread_condattr_t *__attr,
     int __pshared) throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_condattr_getclock (const pthread_condattr_t *
          __restrict __attr,
          __clockid_t *__restrict __clock_id)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setclock (pthread_condattr_t *__attr,
          __clockid_t __clock_id)
     throw () __attribute__ ((__nonnull__ (1)));
# 1055 "/usr/include/pthread.h" 3 4
extern int pthread_spin_init (pthread_spinlock_t *__lock, int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_destroy (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_lock (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_trylock (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_unlock (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));






extern int pthread_barrier_init (pthread_barrier_t *__restrict __barrier,
     const pthread_barrierattr_t *__restrict
     __attr, unsigned int __count)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_destroy (pthread_barrier_t *__barrier)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_wait (pthread_barrier_t *__barrier)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_barrierattr_init (pthread_barrierattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_destroy (pthread_barrierattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_getpshared (const pthread_barrierattr_t *
        __restrict __attr,
        int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_barrierattr_setpshared (pthread_barrierattr_t *__attr,
        int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));
# 1122 "/usr/include/pthread.h" 3 4
extern int pthread_key_create (pthread_key_t *__key,
          void (*__destr_function) (void *))
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_key_delete (pthread_key_t __key) throw ();


extern void *pthread_getspecific (pthread_key_t __key) throw ();


extern int pthread_setspecific (pthread_key_t __key,
    const void *__pointer) throw () ;




extern int pthread_getcpuclockid (pthread_t __thread_id,
      __clockid_t *__clock_id)
     throw () __attribute__ ((__nonnull__ (2)));
# 1156 "/usr/include/pthread.h" 3 4
extern int pthread_atfork (void (*__prepare) (void),
      void (*__parent) (void),
      void (*__child) (void)) throw ();




extern __inline __attribute__ ((__gnu_inline__)) int
pthread_equal (pthread_t __thread1, pthread_t __thread2) throw ()
{
  return __thread1 == __thread2;
}


}
# 42 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/gthr-default.h" 2 3
# 1 "/usr/include/unistd.h" 1 3 4
# 27 "/usr/include/unistd.h" 3 4
extern "C" {
# 202 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/posix_opt.h" 1 3 4
# 203 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/bits/environments.h" 1 3 4
# 22 "/usr/include/bits/environments.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 23 "/usr/include/bits/environments.h" 2 3 4
# 207 "/usr/include/unistd.h" 2 3 4
# 220 "/usr/include/unistd.h" 3 4
typedef __ssize_t ssize_t;






# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 1 3 4
# 227 "/usr/include/unistd.h" 2 3 4





typedef __gid_t gid_t;




typedef __uid_t uid_t;





typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __useconds_t useconds_t;
# 274 "/usr/include/unistd.h" 3 4
typedef __socklen_t socklen_t;
# 287 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) throw () __attribute__ ((__nonnull__ (1)));




extern int euidaccess (const char *__name, int __type)
     throw () __attribute__ ((__nonnull__ (1)));


extern int eaccess (const char *__name, int __type)
     throw () __attribute__ ((__nonnull__ (1)));






extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));
# 334 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) throw ();
# 345 "/usr/include/unistd.h" 3 4
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     throw ();






extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) __attribute__ ((__warn_unused_result__));





extern ssize_t write (int __fd, const void *__buf, size_t __n) __attribute__ ((__warn_unused_result__));
# 376 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) __attribute__ ((__warn_unused_result__));






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) __attribute__ ((__warn_unused_result__));
# 404 "/usr/include/unistd.h" 3 4
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) __attribute__ ((__warn_unused_result__));


extern ssize_t pwrite64 (int __fd, const void *__buf, size_t __n,
    __off64_t __offset) __attribute__ ((__warn_unused_result__));







extern int pipe (int __pipedes[2]) throw () __attribute__ ((__warn_unused_result__));




extern int pipe2 (int __pipedes[2], int __flags) throw () __attribute__ ((__warn_unused_result__));
# 432 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) throw ();
# 444 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     throw ();






extern int usleep (__useconds_t __useconds);
# 469 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) throw () __attribute__ ((__warn_unused_result__));




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));



extern int chdir (const char *__path) throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern int fchdir (int __fd) throw () __attribute__ ((__warn_unused_result__));
# 511 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) throw () __attribute__ ((__warn_unused_result__));





extern char *get_current_dir_name (void) throw ();







extern char *getwd (char *__buf)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) __attribute__ ((__warn_unused_result__));




extern int dup (int __fd) throw () __attribute__ ((__warn_unused_result__));


extern int dup2 (int __fd, int __fd2) throw ();




extern int dup3 (int __fd, int __fd2, int __flags) throw ();



extern char **__environ;

extern char **environ;





extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) throw () __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     throw () __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int execvpe (const char *__file, char *const __argv[],
      char *const __envp[])
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern int nice (int __inc) throw () __attribute__ ((__warn_unused_result__));




extern void _exit (int __status) __attribute__ ((__noreturn__));






# 1 "/usr/include/bits/confname.h" 1 3 4
# 24 "/usr/include/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 610 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (const char *__path, int __name)
     throw () __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) throw ();


extern long int sysconf (int __name) throw ();



extern size_t confstr (int __name, char *__buf, size_t __len) throw ();




extern __pid_t getpid (void) throw ();


extern __pid_t getppid (void) throw ();


extern __pid_t getpgrp (void) throw ();


extern __pid_t __getpgid (__pid_t __pid) throw ();

extern __pid_t getpgid (__pid_t __pid) throw ();






extern int setpgid (__pid_t __pid, __pid_t __pgid) throw ();
# 660 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) throw ();






extern __pid_t setsid (void) throw ();



extern __pid_t getsid (__pid_t __pid) throw ();



extern __uid_t getuid (void) throw ();


extern __uid_t geteuid (void) throw ();


extern __gid_t getgid (void) throw ();


extern __gid_t getegid (void) throw ();




extern int getgroups (int __size, __gid_t __list[]) throw () __attribute__ ((__warn_unused_result__));



extern int group_member (__gid_t __gid) throw ();






extern int setuid (__uid_t __uid) throw () __attribute__ ((__warn_unused_result__));




extern int setreuid (__uid_t __ruid, __uid_t __euid) throw () __attribute__ ((__warn_unused_result__));




extern int seteuid (__uid_t __uid) throw () __attribute__ ((__warn_unused_result__));






extern int setgid (__gid_t __gid) throw () __attribute__ ((__warn_unused_result__));




extern int setregid (__gid_t __rgid, __gid_t __egid) throw () __attribute__ ((__warn_unused_result__));




extern int setegid (__gid_t __gid) throw () __attribute__ ((__warn_unused_result__));





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     throw ();



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     throw ();



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     throw () __attribute__ ((__warn_unused_result__));



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     throw () __attribute__ ((__warn_unused_result__));






extern __pid_t fork (void) throw ();







extern __pid_t vfork (void) throw ();





extern char *ttyname (int __fd) throw ();



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));



extern int isatty (int __fd) throw ();





extern int ttyslot (void) throw ();




extern int link (const char *__from, const char *__to)
     throw () __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     throw () __attribute__ ((__nonnull__ (2, 4))) __attribute__ ((__warn_unused_result__));




extern int symlink (const char *__from, const char *__to)
     throw () __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) throw () __attribute__ ((__nonnull__ (1, 3))) __attribute__ ((__warn_unused_result__));


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__));



extern int unlink (const char *__name) throw () __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     throw () __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) throw () __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) throw ();


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) throw ();






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) throw () __attribute__ ((__nonnull__ (1)));
# 871 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 48 "/usr/include/getopt.h" 3 4
extern "C" {
# 57 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 71 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 150 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       throw ();
# 185 "/usr/include/getopt.h" 3 4
}
# 872 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) throw () __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern int sethostid (long int __id) throw () __attribute__ ((__warn_unused_result__));





extern int getdomainname (char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int setdomainname (const char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern int vhangup (void) throw ();


extern int revoke (const char *__file) throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     throw () __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) throw ();



extern char *getusershell (void) throw ();
extern void endusershell (void) throw ();
extern void setusershell (void) throw ();





extern int daemon (int __nochdir, int __noclose) throw () __attribute__ ((__warn_unused_result__));






extern int chroot (const char *__path) throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);





extern int syncfs (int __fd) throw ();






extern long int gethostid (void);


extern void sync (void) throw ();





extern int getpagesize (void) throw () __attribute__ ((__const__));




extern int getdtablesize (void) throw ();
# 993 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 1005 "/usr/include/unistd.h" 3 4
extern int truncate64 (const char *__file, __off64_t __length)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 1016 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) throw () __attribute__ ((__warn_unused_result__));
# 1026 "/usr/include/unistd.h" 3 4
extern int ftruncate64 (int __fd, __off64_t __length) throw () __attribute__ ((__warn_unused_result__));
# 1037 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) throw () __attribute__ ((__warn_unused_result__));





extern void *sbrk (intptr_t __delta) throw ();
# 1058 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) throw ();
# 1081 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) __attribute__ ((__warn_unused_result__));
# 1091 "/usr/include/unistd.h" 3 4
extern int lockf64 (int __fd, int __cmd, __off64_t __len) __attribute__ ((__warn_unused_result__));
# 1112 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);







extern char *crypt (const char *__key, const char *__salt)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern void encrypt (char *__glibc_block, int __edflag)
     throw () __attribute__ ((__nonnull__ (1)));






extern void swab (const void *__restrict __from, void *__restrict __to,
    ssize_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));
# 1148 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/unistd.h" 1 3 4
# 23 "/usr/include/bits/unistd.h" 3 4
extern ssize_t __read_chk (int __fd, void *__buf, size_t __nbytes,
      size_t __buflen) __attribute__ ((__warn_unused_result__));
extern ssize_t __read_alias (int __fd, void *__buf, size_t __nbytes) __asm__ ("" "read") __attribute__ ((__warn_unused_result__));

extern ssize_t __read_chk_warn (int __fd, void *__buf, size_t __nbytes, size_t __buflen) __asm__ ("" "__read_chk")


     __attribute__ ((__warn_unused_result__)) ;


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__warn_unused_result__)) ssize_t
read (int __fd, void *__buf, size_t __nbytes)
{
  if (__builtin_object_size (__buf, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__nbytes))
 return __read_chk (__fd, __buf, __nbytes, __builtin_object_size (__buf, 0));

      if (__nbytes > __builtin_object_size (__buf, 0))
 return __read_chk_warn (__fd, __buf, __nbytes, __builtin_object_size (__buf, 0));
    }
  return __read_alias (__fd, __buf, __nbytes);
}


extern ssize_t __pread_chk (int __fd, void *__buf, size_t __nbytes,
       __off_t __offset, size_t __bufsize) __attribute__ ((__warn_unused_result__));
extern ssize_t __pread64_chk (int __fd, void *__buf, size_t __nbytes,
         __off64_t __offset, size_t __bufsize) __attribute__ ((__warn_unused_result__));
extern ssize_t __pread_alias (int __fd, void *__buf, size_t __nbytes, __off_t __offset) __asm__ ("" "pread") __attribute__ ((__warn_unused_result__));


extern ssize_t __pread64_alias (int __fd, void *__buf, size_t __nbytes, __off64_t __offset) __asm__ ("" "pread64") __attribute__ ((__warn_unused_result__));


extern ssize_t __pread_chk_warn (int __fd, void *__buf, size_t __nbytes, __off_t __offset, size_t __bufsize) __asm__ ("" "__pread_chk")


     __attribute__ ((__warn_unused_result__)) ;

extern ssize_t __pread64_chk_warn (int __fd, void *__buf, size_t __nbytes, __off64_t __offset, size_t __bufsize) __asm__ ("" "__pread64_chk")



     __attribute__ ((__warn_unused_result__)) ;



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__warn_unused_result__)) ssize_t
pread (int __fd, void *__buf, size_t __nbytes, __off_t __offset)
{
  if (__builtin_object_size (__buf, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__nbytes))
 return __pread_chk (__fd, __buf, __nbytes, __offset, __builtin_object_size (__buf, 0));

      if ( __nbytes > __builtin_object_size (__buf, 0))
 return __pread_chk_warn (__fd, __buf, __nbytes, __offset,
     __builtin_object_size (__buf, 0));
    }
  return __pread_alias (__fd, __buf, __nbytes, __offset);
}
# 104 "/usr/include/bits/unistd.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__warn_unused_result__)) ssize_t
pread64 (int __fd, void *__buf, size_t __nbytes, __off64_t __offset)
{
  if (__builtin_object_size (__buf, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__nbytes))
 return __pread64_chk (__fd, __buf, __nbytes, __offset, __builtin_object_size (__buf, 0));

      if ( __nbytes > __builtin_object_size (__buf, 0))
 return __pread64_chk_warn (__fd, __buf, __nbytes, __offset,
       __builtin_object_size (__buf, 0));
    }

  return __pread64_alias (__fd, __buf, __nbytes, __offset);
}




extern ssize_t __readlink_chk (const char *__restrict __path,
          char *__restrict __buf, size_t __len,
          size_t __buflen)
     throw () __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));
extern ssize_t __readlink_alias (const char *__restrict __path, char *__restrict __buf, size_t __len) throw () __asm__ ("" "readlink")


     __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__));
extern ssize_t __readlink_chk_warn (const char *__restrict __path, char *__restrict __buf, size_t __len, size_t __buflen) throw () __asm__ ("" "__readlink_chk")



     __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__)) ;


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__warn_unused_result__)) ssize_t
readlink (const char *__restrict __path, char *__restrict __buf, size_t __len) throw ()

{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __readlink_chk (__path, __buf, __len, __builtin_object_size (__buf, 2 > 1));

      if ( __len > __builtin_object_size (__buf, 2 > 1))
 return __readlink_chk_warn (__path, __buf, __len, __builtin_object_size (__buf, 2 > 1));
    }
  return __readlink_alias (__path, __buf, __len);
}



extern ssize_t __readlinkat_chk (int __fd, const char *__restrict __path,
     char *__restrict __buf, size_t __len,
     size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__));
extern ssize_t __readlinkat_alias (int __fd, const char *__restrict __path, char *__restrict __buf, size_t __len) throw () __asm__ ("" "readlinkat")



     __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__));
extern ssize_t __readlinkat_chk_warn (int __fd, const char *__restrict __path, char *__restrict __buf, size_t __len, size_t __buflen) throw () __asm__ ("" "__readlinkat_chk")



     __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__)) ;



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__nonnull__ (2, 3))) __attribute__ ((__warn_unused_result__)) ssize_t
readlinkat (int __fd, const char *__restrict __path, char *__restrict __buf, size_t __len) throw ()

{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __readlinkat_chk (__fd, __path, __buf, __len, __builtin_object_size (__buf, 2 > 1));

      if (__len > __builtin_object_size (__buf, 2 > 1))
 return __readlinkat_chk_warn (__fd, __path, __buf, __len,
          __builtin_object_size (__buf, 2 > 1));
    }
  return __readlinkat_alias (__fd, __path, __buf, __len);
}


extern char *__getcwd_chk (char *__buf, size_t __size, size_t __buflen)
     throw () __attribute__ ((__warn_unused_result__));
extern char *__getcwd_alias (char *__buf, size_t __size) throw () __asm__ ("" "getcwd") __attribute__ ((__warn_unused_result__));

extern char *__getcwd_chk_warn (char *__buf, size_t __size, size_t __buflen) throw () __asm__ ("" "__getcwd_chk")


     __attribute__ ((__warn_unused_result__)) ;


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__warn_unused_result__)) char *
getcwd (char *__buf, size_t __size) throw ()
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size))
 return __getcwd_chk (__buf, __size, __builtin_object_size (__buf, 2 > 1));

      if (__size > __builtin_object_size (__buf, 2 > 1))
 return __getcwd_chk_warn (__buf, __size, __builtin_object_size (__buf, 2 > 1));
    }
  return __getcwd_alias (__buf, __size);
}


extern char *__getwd_chk (char *__buf, size_t buflen)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern char *__getwd_warn (char *__buf) throw () __asm__ ("" "getwd")
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__)) ;


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) __attribute__ ((__warn_unused_result__)) char *
getwd (char *__buf) throw ()
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    return __getwd_chk (__buf, __builtin_object_size (__buf, 2 > 1));
  return __getwd_warn (__buf);
}


extern size_t __confstr_chk (int __name, char *__buf, size_t __len,
        size_t __buflen) throw ();
extern size_t __confstr_alias (int __name, char *__buf, size_t __len) throw () __asm__ ("" "confstr");

extern size_t __confstr_chk_warn (int __name, char *__buf, size_t __len, size_t __buflen) throw () __asm__ ("" "__confstr_chk")



            ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) size_t
confstr (int __name, char *__buf, size_t __len) throw ()
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __confstr_chk (__name, __buf, __len, __builtin_object_size (__buf, 2 > 1));

      if (__builtin_object_size (__buf, 2 > 1) < __len)
 return __confstr_chk_warn (__name, __buf, __len, __builtin_object_size (__buf, 2 > 1));
    }
  return __confstr_alias (__name, __buf, __len);
}


extern int __getgroups_chk (int __size, __gid_t __list[], size_t __listlen)
     throw () __attribute__ ((__warn_unused_result__));
extern int __getgroups_alias (int __size, __gid_t __list[]) throw () __asm__ ("" "getgroups") __attribute__ ((__warn_unused_result__));

extern int __getgroups_chk_warn (int __size, __gid_t __list[], size_t __listlen) throw () __asm__ ("" "__getgroups_chk")


     __attribute__ ((__warn_unused_result__)) ;


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
getgroups (int __size, __gid_t __list[]) throw ()
{
  if (__builtin_object_size (__list, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size) || __size < 0)
 return __getgroups_chk (__size, __list, __builtin_object_size (__list, 2 > 1));

      if (__size * sizeof (__gid_t) > __builtin_object_size (__list, 2 > 1))
 return __getgroups_chk_warn (__size, __list, __builtin_object_size (__list, 2 > 1));
    }
  return __getgroups_alias (__size, __list);
}


extern int __ttyname_r_chk (int __fd, char *__buf, size_t __buflen,
       size_t __nreal) throw () __attribute__ ((__nonnull__ (2)));
extern int __ttyname_r_alias (int __fd, char *__buf, size_t __buflen) throw () __asm__ ("" "ttyname_r")

     __attribute__ ((__nonnull__ (2)));
extern int __ttyname_r_chk_warn (int __fd, char *__buf, size_t __buflen, size_t __nreal) throw () __asm__ ("" "__ttyname_r_chk")


     __attribute__ ((__nonnull__ (2))) ;


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
ttyname_r (int __fd, char *__buf, size_t __buflen) throw ()
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __ttyname_r_chk (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));

      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __ttyname_r_chk_warn (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __ttyname_r_alias (__fd, __buf, __buflen);
}



extern int __getlogin_r_chk (char *__buf, size_t __buflen, size_t __nreal)
     __attribute__ ((__nonnull__ (1)));
extern int __getlogin_r_alias (char *__buf, size_t __buflen) __asm__ ("" "getlogin_r") __attribute__ ((__nonnull__ (1)));

extern int __getlogin_r_chk_warn (char *__buf, size_t __buflen, size_t __nreal) __asm__ ("" "__getlogin_r_chk")


     __attribute__ ((__nonnull__ (1))) ;


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
getlogin_r (char *__buf, size_t __buflen)
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __getlogin_r_chk (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));

      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __getlogin_r_chk_warn (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __getlogin_r_alias (__buf, __buflen);
}




extern int __gethostname_chk (char *__buf, size_t __buflen, size_t __nreal)
     throw () __attribute__ ((__nonnull__ (1)));
extern int __gethostname_alias (char *__buf, size_t __buflen) throw () __asm__ ("" "gethostname") __attribute__ ((__nonnull__ (1)));

extern int __gethostname_chk_warn (char *__buf, size_t __buflen, size_t __nreal) throw () __asm__ ("" "__gethostname_chk")


     __attribute__ ((__nonnull__ (1))) ;


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
gethostname (char *__buf, size_t __buflen) throw ()
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __gethostname_chk (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));

      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __gethostname_chk_warn (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __gethostname_alias (__buf, __buflen);
}




extern int __getdomainname_chk (char *__buf, size_t __buflen, size_t __nreal)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
extern int __getdomainname_alias (char *__buf, size_t __buflen) throw () __asm__ ("" "getdomainname") __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));


extern int __getdomainname_chk_warn (char *__buf, size_t __buflen, size_t __nreal) throw () __asm__ ("" "__getdomainname_chk")


     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__)) ;



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
getdomainname (char *__buf, size_t __buflen) throw ()
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __getdomainname_chk (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));

      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __getdomainname_chk_warn (__buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __getdomainname_alias (__buf, __buflen);
}
# 1149 "/usr/include/unistd.h" 2 3 4


}
# 43 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/gthr-default.h" 2 3

typedef pthread_t __gthread_t;
typedef pthread_key_t __gthread_key_t;
typedef pthread_once_t __gthread_once_t;
typedef pthread_mutex_t __gthread_mutex_t;
typedef pthread_mutex_t __gthread_recursive_mutex_t;
typedef pthread_cond_t __gthread_cond_t;
typedef struct timespec __gthread_time_t;
# 118 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/gthr-default.h" 3
static __typeof(pthread_once) __gthrw_pthread_once __attribute__ ((__weakref__("pthread_once")));
static __typeof(pthread_getspecific) __gthrw_pthread_getspecific __attribute__ ((__weakref__("pthread_getspecific")));
static __typeof(pthread_setspecific) __gthrw_pthread_setspecific __attribute__ ((__weakref__("pthread_setspecific")));

static __typeof(pthread_create) __gthrw_pthread_create __attribute__ ((__weakref__("pthread_create")));
static __typeof(pthread_join) __gthrw_pthread_join __attribute__ ((__weakref__("pthread_join")));
static __typeof(pthread_equal) __gthrw_pthread_equal __attribute__ ((__weakref__("pthread_equal")));
static __typeof(pthread_self) __gthrw_pthread_self __attribute__ ((__weakref__("pthread_self")));
static __typeof(pthread_detach) __gthrw_pthread_detach __attribute__ ((__weakref__("pthread_detach")));
static __typeof(pthread_cancel) __gthrw_pthread_cancel __attribute__ ((__weakref__("pthread_cancel")));
static __typeof(sched_yield) __gthrw_sched_yield __attribute__ ((__weakref__("sched_yield")));

static __typeof(pthread_mutex_lock) __gthrw_pthread_mutex_lock __attribute__ ((__weakref__("pthread_mutex_lock")));
static __typeof(pthread_mutex_trylock) __gthrw_pthread_mutex_trylock __attribute__ ((__weakref__("pthread_mutex_trylock")));


static __typeof(pthread_mutex_timedlock) __gthrw_pthread_mutex_timedlock __attribute__ ((__weakref__("pthread_mutex_timedlock")));


static __typeof(pthread_mutex_unlock) __gthrw_pthread_mutex_unlock __attribute__ ((__weakref__("pthread_mutex_unlock")));
static __typeof(pthread_mutex_init) __gthrw_pthread_mutex_init __attribute__ ((__weakref__("pthread_mutex_init")));
static __typeof(pthread_mutex_destroy) __gthrw_pthread_mutex_destroy __attribute__ ((__weakref__("pthread_mutex_destroy")));

static __typeof(pthread_cond_broadcast) __gthrw_pthread_cond_broadcast __attribute__ ((__weakref__("pthread_cond_broadcast")));
static __typeof(pthread_cond_signal) __gthrw_pthread_cond_signal __attribute__ ((__weakref__("pthread_cond_signal")));
static __typeof(pthread_cond_wait) __gthrw_pthread_cond_wait __attribute__ ((__weakref__("pthread_cond_wait")));
static __typeof(pthread_cond_timedwait) __gthrw_pthread_cond_timedwait __attribute__ ((__weakref__("pthread_cond_timedwait")));
static __typeof(pthread_cond_destroy) __gthrw_pthread_cond_destroy __attribute__ ((__weakref__("pthread_cond_destroy")));


static __typeof(pthread_key_create) __gthrw_pthread_key_create __attribute__ ((__weakref__("pthread_key_create")));
static __typeof(pthread_key_delete) __gthrw_pthread_key_delete __attribute__ ((__weakref__("pthread_key_delete")));
static __typeof(pthread_mutexattr_init) __gthrw_pthread_mutexattr_init __attribute__ ((__weakref__("pthread_mutexattr_init")));
static __typeof(pthread_mutexattr_settype) __gthrw_pthread_mutexattr_settype __attribute__ ((__weakref__("pthread_mutexattr_settype")));
static __typeof(pthread_mutexattr_destroy) __gthrw_pthread_mutexattr_destroy __attribute__ ((__weakref__("pthread_mutexattr_destroy")));
# 237 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/gthr-default.h" 3
static inline int
__gthread_active_p (void)
{
  static void *const __gthread_active_ptr
    = __extension__ (void *) &__gthrw_pthread_cancel;
  return __gthread_active_ptr != 0;
}
# 648 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/gthr-default.h" 3
static inline int
__gthread_create (__gthread_t *__threadid, void *(*__func) (void*),
    void *__args)
{
  return __gthrw_pthread_create (__threadid, __null, __func, __args);
}

static inline int
__gthread_join (__gthread_t __threadid, void **__value_ptr)
{
  return __gthrw_pthread_join (__threadid, __value_ptr);
}

static inline int
__gthread_detach (__gthread_t __threadid)
{
  return __gthrw_pthread_detach (__threadid);
}

static inline int
__gthread_equal (__gthread_t __t1, __gthread_t __t2)
{
  return __gthrw_pthread_equal (__t1, __t2);
}

static inline __gthread_t
__gthread_self (void)
{
  return __gthrw_pthread_self ();
}

static inline int
__gthread_yield (void)
{
  return __gthrw_sched_yield ();
}

static inline int
__gthread_once (__gthread_once_t *__once, void (*__func) (void))
{
  if (__gthread_active_p ())
    return __gthrw_pthread_once (__once, __func);
  else
    return -1;
}

static inline int
__gthread_key_create (__gthread_key_t *__key, void (*__dtor) (void *))
{
  return __gthrw_pthread_key_create (__key, __dtor);
}

static inline int
__gthread_key_delete (__gthread_key_t __key)
{
  return __gthrw_pthread_key_delete (__key);
}

static inline void *
__gthread_getspecific (__gthread_key_t __key)
{
  return __gthrw_pthread_getspecific (__key);
}

static inline int
__gthread_setspecific (__gthread_key_t __key, const void *__ptr)
{
  return __gthrw_pthread_setspecific (__key, __ptr);
}

static inline int
__gthread_mutex_destroy (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_destroy (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_lock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_lock (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_trylock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_trylock (__mutex);
  else
    return 0;
}



static inline int
__gthread_mutex_timedlock (__gthread_mutex_t *__mutex,
      const __gthread_time_t *__abs_timeout)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_timedlock (__mutex, __abs_timeout);
  else
    return 0;
}



static inline int
__gthread_mutex_unlock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_unlock (__mutex);
  else
    return 0;
}
# 791 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/gthr-default.h" 3
static inline int
__gthread_recursive_mutex_lock (__gthread_recursive_mutex_t *__mutex)
{
  return __gthread_mutex_lock (__mutex);
}

static inline int
__gthread_recursive_mutex_trylock (__gthread_recursive_mutex_t *__mutex)
{
  return __gthread_mutex_trylock (__mutex);
}



static inline int
__gthread_recursive_mutex_timedlock (__gthread_recursive_mutex_t *__mutex,
         const __gthread_time_t *__abs_timeout)
{
  return __gthread_mutex_timedlock (__mutex, __abs_timeout);
}



static inline int
__gthread_recursive_mutex_unlock (__gthread_recursive_mutex_t *__mutex)
{
  return __gthread_mutex_unlock (__mutex);
}

static inline int
__gthread_cond_broadcast (__gthread_cond_t *__cond)
{
  return __gthrw_pthread_cond_broadcast (__cond);
}

static inline int
__gthread_cond_signal (__gthread_cond_t *__cond)
{
  return __gthrw_pthread_cond_signal (__cond);
}

static inline int
__gthread_cond_wait (__gthread_cond_t *__cond, __gthread_mutex_t *__mutex)
{
  return __gthrw_pthread_cond_wait (__cond, __mutex);
}

static inline int
__gthread_cond_timedwait (__gthread_cond_t *__cond, __gthread_mutex_t *__mutex,
     const __gthread_time_t *__abs_timeout)
{
  return __gthrw_pthread_cond_timedwait (__cond, __mutex, __abs_timeout);
}

static inline int
__gthread_cond_wait_recursive (__gthread_cond_t *__cond,
          __gthread_recursive_mutex_t *__mutex)
{
  return __gthread_cond_wait (__cond, __mutex);
}

static inline int
__gthread_cond_timedwait_recursive (__gthread_cond_t *__cond,
        __gthread_recursive_mutex_t *__mutex,
        const __gthread_time_t *__abs_timeout)
{
  return __gthread_cond_timedwait (__cond, __mutex, __abs_timeout);
}

static inline int
__gthread_cond_destroy (__gthread_cond_t* __cond)
{
  return __gthrw_pthread_cond_destroy (__cond);
}
# 163 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/gthr.h" 2 3







#pragma GCC visibility pop
# 35 "/usr/include/c++/4.4/ext/atomicity.h" 2 3
# 1 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/atomic_word.h" 1 3
# 32 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/atomic_word.h" 3
typedef int _Atomic_word;
# 36 "/usr/include/c++/4.4/ext/atomicity.h" 2 3

namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {






  static inline _Atomic_word
  __exchange_and_add(volatile _Atomic_word* __mem, int __val)
  { return __sync_fetch_and_add(__mem, __val); }

  static inline void
  __atomic_add(volatile _Atomic_word* __mem, int __val)
  { __sync_fetch_and_add(__mem, __val); }
# 61 "/usr/include/c++/4.4/ext/atomicity.h" 3
  static inline _Atomic_word
  __exchange_and_add_single(_Atomic_word* __mem, int __val)
  {
    _Atomic_word __result = *__mem;
    *__mem += __val;
    return __result;
  }

  static inline void
  __atomic_add_single(_Atomic_word* __mem, int __val)
  { *__mem += __val; }

  static inline _Atomic_word
  __attribute__ ((__unused__))
  __exchange_and_add_dispatch(_Atomic_word* __mem, int __val)
  {

    if (__gthread_active_p())
      return __exchange_and_add(__mem, __val);
    else
      return __exchange_and_add_single(__mem, __val);



  }

  static inline void
  __attribute__ ((__unused__))
  __atomic_add_dispatch(_Atomic_word* __mem, int __val)
  {

    if (__gthread_active_p())
      __atomic_add(__mem, __val);
    else
      __atomic_add_single(__mem, __val);



  }

}
# 41 "/usr/include/c++/4.4/bits/basic_string.h" 2 3

# 1 "/usr/include/c++/4.4/initializer_list" 1 3
# 35 "/usr/include/c++/4.4/initializer_list" 3
#pragma GCC visibility push(default)

# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 40 "/usr/include/c++/4.4/cstddef" 3
# 40 "/usr/include/c++/4.4/cstddef" 3



# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 1 3 4
# 44 "/usr/include/c++/4.4/cstddef" 2 3
# 38 "/usr/include/c++/4.4/initializer_list" 2 3

namespace std
{

  template<class _E>
    class initializer_list
    {
      const _E* __array;
      size_t __len;


      initializer_list(const _E* __a, size_t __l)
      : __array(__a), __len(__l) { }

    public:
      initializer_list()
      : __array(__null), __len(0) { }


      size_t size() const
      { return __len; }


      const _E* begin() const
      { return __array; }


      const _E* end() const
      { return begin() + size(); }
  };
}

#pragma GCC visibility pop
# 43 "/usr/include/c++/4.4/bits/basic_string.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {
# 102 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    class basic_string
    {
      typedef typename _Alloc::template rebind<_CharT>::other _CharT_alloc_type;


    public:
      typedef _Traits traits_type;
      typedef typename _Traits::char_type value_type;
      typedef _Alloc allocator_type;
      typedef typename _CharT_alloc_type::size_type size_type;
      typedef typename _CharT_alloc_type::difference_type difference_type;
      typedef typename _CharT_alloc_type::reference reference;
      typedef typename _CharT_alloc_type::const_reference const_reference;
      typedef typename _CharT_alloc_type::pointer pointer;
      typedef typename _CharT_alloc_type::const_pointer const_pointer;
      typedef __gnu_cxx::__normal_iterator<pointer, basic_string> iterator;
      typedef __gnu_cxx::__normal_iterator<const_pointer, basic_string>
                                                            const_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
      typedef std::reverse_iterator<iterator> reverse_iterator;

    private:
# 139 "/usr/include/c++/4.4/bits/basic_string.h" 3
      struct _Rep_base
      {
 size_type _M_length;
 size_type _M_capacity;
 _Atomic_word _M_refcount;
      };

      struct _Rep : _Rep_base
      {

 typedef typename _Alloc::template rebind<char>::other _Raw_bytes_alloc;
# 164 "/usr/include/c++/4.4/bits/basic_string.h" 3
 static const size_type _S_max_size;
 static const _CharT _S_terminal;



        static size_type _S_empty_rep_storage[];

        static _Rep&
        _S_empty_rep()
        {



   void* __p = reinterpret_cast<void*>(&_S_empty_rep_storage);
   return *reinterpret_cast<_Rep*>(__p);
 }

        bool
 _M_is_leaked() const
        { return this->_M_refcount < 0; }

        bool
 _M_is_shared() const
        { return this->_M_refcount > 0; }

        void
 _M_set_leaked()
        { this->_M_refcount = -1; }

        void
 _M_set_sharable()
        { this->_M_refcount = 0; }

 void
 _M_set_length_and_sharable(size_type __n)
 {

   if (__builtin_expect(this != &_S_empty_rep(), false))

     {
       this->_M_set_sharable();
       this->_M_length = __n;
       traits_type::assign(this->_M_refdata()[__n], _S_terminal);


     }
 }

 _CharT*
 _M_refdata() throw()
 { return reinterpret_cast<_CharT*>(this + 1); }

 _CharT*
 _M_grab(const _Alloc& __alloc1, const _Alloc& __alloc2)
 {
   return (!_M_is_leaked() && __alloc1 == __alloc2)
           ? _M_refcopy() : _M_clone(__alloc1);
 }


 static _Rep*
 _S_create(size_type, size_type, const _Alloc&);

 void
 _M_dispose(const _Alloc& __a)
 {

   if (__builtin_expect(this != &_S_empty_rep(), false))

     if (__gnu_cxx::__exchange_and_add_dispatch(&this->_M_refcount,
             -1) <= 0)
       _M_destroy(__a);
 }

 void
 _M_destroy(const _Alloc&) throw();

 _CharT*
 _M_refcopy() throw()
 {

   if (__builtin_expect(this != &_S_empty_rep(), false))

            __gnu_cxx::__atomic_add_dispatch(&this->_M_refcount, 1);
   return _M_refdata();
 }

 _CharT*
 _M_clone(const _Alloc&, size_type __res = 0);
      };


      struct _Alloc_hider : _Alloc
      {
 _Alloc_hider(_CharT* __dat, const _Alloc& __a)
 : _Alloc(__a), _M_p(__dat) { }

 _CharT* _M_p;
      };

    public:




      static const size_type npos = static_cast<size_type>(-1);

    private:

      mutable _Alloc_hider _M_dataplus;

      _CharT*
      _M_data() const
      { return _M_dataplus._M_p; }

      _CharT*
      _M_data(_CharT* __p)
      { return (_M_dataplus._M_p = __p); }

      _Rep*
      _M_rep() const
      { return &((reinterpret_cast<_Rep*> (_M_data()))[-1]); }



      iterator
      _M_ibegin() const
      { return iterator(_M_data()); }

      iterator
      _M_iend() const
      { return iterator(_M_data() + this->size()); }

      void
      _M_leak()
      {
 if (!_M_rep()->_M_is_leaked())
   _M_leak_hard();
      }

      size_type
      _M_check(size_type __pos, const char* __s) const
      {
 if (__pos > this->size())
   __throw_out_of_range((__s));
 return __pos;
      }

      void
      _M_check_length(size_type __n1, size_type __n2, const char* __s) const
      {
 if (this->max_size() - (this->size() - __n1) < __n2)
   __throw_length_error((__s));
      }


      size_type
      _M_limit(size_type __pos, size_type __off) const
      {
 const bool __testoff = __off < this->size() - __pos;
 return __testoff ? __off : this->size() - __pos;
      }


      bool
      _M_disjunct(const _CharT* __s) const
      {
 return (less<const _CharT*>()(__s, _M_data())
  || less<const _CharT*>()(_M_data() + this->size(), __s));
      }



      static void
      _M_copy(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::copy(__d, __s, __n);
      }

      static void
      _M_move(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::move(__d, __s, __n);
      }

      static void
      _M_assign(_CharT* __d, size_type __n, _CharT __c)
      {
 if (__n == 1)
   traits_type::assign(*__d, __c);
 else
   traits_type::assign(__d, __n, __c);
      }



      template<class _Iterator>
        static void
        _S_copy_chars(_CharT* __p, _Iterator __k1, _Iterator __k2)
        {
   for (; __k1 != __k2; ++__k1, ++__p)
     traits_type::assign(*__p, *__k1);
 }

      static void
      _S_copy_chars(_CharT* __p, iterator __k1, iterator __k2)
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, const_iterator __k1, const_iterator __k2)
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, _CharT* __k1, _CharT* __k2)
      { _M_copy(__p, __k1, __k2 - __k1); }

      static void
      _S_copy_chars(_CharT* __p, const _CharT* __k1, const _CharT* __k2)
      { _M_copy(__p, __k1, __k2 - __k1); }

      static int
      _S_compare(size_type __n1, size_type __n2)
      {
 const difference_type __d = difference_type(__n1 - __n2);

 if (__d > __gnu_cxx::__numeric_traits<int>::__max)
   return __gnu_cxx::__numeric_traits<int>::__max;
 else if (__d < __gnu_cxx::__numeric_traits<int>::__min)
   return __gnu_cxx::__numeric_traits<int>::__min;
 else
   return int(__d);
      }

      void
      _M_mutate(size_type __pos, size_type __len1, size_type __len2);

      void
      _M_leak_hard();

      static _Rep&
      _S_empty_rep()
      { return _Rep::_S_empty_rep(); }

    public:







      inline
      basic_string();




      explicit
      basic_string(const _Alloc& __a);






      basic_string(const basic_string& __str);






      basic_string(const basic_string& __str, size_type __pos,
     size_type __n = npos);







      basic_string(const basic_string& __str, size_type __pos,
     size_type __n, const _Alloc& __a);
# 463 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string(const _CharT* __s, size_type __n,
     const _Alloc& __a = _Alloc());





      basic_string(const _CharT* __s, const _Alloc& __a = _Alloc());






      basic_string(size_type __n, _CharT __c, const _Alloc& __a = _Alloc());







      basic_string(initializer_list<_CharT> __l, const _Alloc& __a = _Alloc());
# 494 "/usr/include/c++/4.4/bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string(_InputIterator __beg, _InputIterator __end,
       const _Alloc& __a = _Alloc());




      ~basic_string()
      { _M_rep()->_M_dispose(this->get_allocator()); }





      basic_string&
      operator=(const basic_string& __str)
      { return this->assign(__str); }





      basic_string&
      operator=(const _CharT* __s)
      { return this->assign(__s); }
# 527 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      operator=(_CharT __c)
      {
 this->assign(1, __c);
 return *this;
      }






      basic_string&
      operator=(initializer_list<_CharT> __l)
      {
 this->assign (__l.begin(), __l.end());
 return *this;
      }







      iterator
      begin()
      {
 _M_leak();
 return iterator(_M_data());
      }





      const_iterator
      begin() const
      { return const_iterator(_M_data()); }





      iterator
      end()
      {
 _M_leak();
 return iterator(_M_data() + this->size());
      }





      const_iterator
      end() const
      { return const_iterator(_M_data() + this->size()); }






      reverse_iterator
      rbegin()
      { return reverse_iterator(this->end()); }






      const_reverse_iterator
      rbegin() const
      { return const_reverse_iterator(this->end()); }






      reverse_iterator
      rend()
      { return reverse_iterator(this->begin()); }






      const_reverse_iterator
      rend() const
      { return const_reverse_iterator(this->begin()); }

    public:



      size_type
      size() const
      { return _M_rep()->_M_length; }



      size_type
      length() const
      { return _M_rep()->_M_length; }


      size_type
      max_size() const
      { return _Rep::_S_max_size; }
# 651 "/usr/include/c++/4.4/bits/basic_string.h" 3
      void
      resize(size_type __n, _CharT __c);
# 664 "/usr/include/c++/4.4/bits/basic_string.h" 3
      void
      resize(size_type __n)
      { this->resize(__n, _CharT()); }





      size_type
      capacity() const
      { return _M_rep()->_M_capacity; }
# 693 "/usr/include/c++/4.4/bits/basic_string.h" 3
      void
      reserve(size_type __res_arg = 0);




      void
      clear()
      { _M_mutate(0, this->size(), 0); }




      bool
      empty() const
      { return this->size() == 0; }
# 721 "/usr/include/c++/4.4/bits/basic_string.h" 3
      const_reference
      operator[] (size_type __pos) const
      {
                                       ;
 return _M_data()[__pos];
      }
# 738 "/usr/include/c++/4.4/bits/basic_string.h" 3
      reference
      operator[](size_type __pos)
      {

                                       ;

                                         ;
 _M_leak();
 return _M_data()[__pos];
      }
# 759 "/usr/include/c++/4.4/bits/basic_string.h" 3
      const_reference
      at(size_type __n) const
      {
 if (__n >= this->size())
   __throw_out_of_range(("basic_string::at"));
 return _M_data()[__n];
      }
# 778 "/usr/include/c++/4.4/bits/basic_string.h" 3
      reference
      at(size_type __n)
      {
 if (__n >= size())
   __throw_out_of_range(("basic_string::at"));
 _M_leak();
 return _M_data()[__n];
      }







      basic_string&
      operator+=(const basic_string& __str)
      { return this->append(__str); }






      basic_string&
      operator+=(const _CharT* __s)
      { return this->append(__s); }






      basic_string&
      operator+=(_CharT __c)
      {
 this->push_back(__c);
 return *this;
      }







      basic_string&
      operator+=(initializer_list<_CharT> __l)
      { return this->append(__l.begin(), __l.end()); }







      basic_string&
      append(const basic_string& __str);
# 849 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      append(const basic_string& __str, size_type __pos, size_type __n);







      basic_string&
      append(const _CharT* __s, size_type __n);






      basic_string&
      append(const _CharT* __s)
      {
                               ;
 return this->append(__s, traits_type::length(__s));
      }
# 881 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      append(size_type __n, _CharT __c);







      basic_string&
      append(initializer_list<_CharT> __l)
      { return this->append(__l.begin(), __l.end()); }
# 903 "/usr/include/c++/4.4/bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string&
        append(_InputIterator __first, _InputIterator __last)
        { return this->replace(_M_iend(), _M_iend(), __first, __last); }





      void
      push_back(_CharT __c)
      {
 const size_type __len = 1 + this->size();
 if (__len > this->capacity() || _M_rep()->_M_is_shared())
   this->reserve(__len);
 traits_type::assign(_M_data()[this->size()], __c);
 _M_rep()->_M_set_length_and_sharable(__len);
      }






      basic_string&
      assign(const basic_string& __str);
# 942 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      assign(const basic_string& __str, size_type __pos, size_type __n)
      { return this->assign(__str._M_data()
       + __str._M_check(__pos, "basic_string::assign"),
       __str._M_limit(__pos, __n)); }
# 958 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      assign(const _CharT* __s, size_type __n);
# 970 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      assign(const _CharT* __s)
      {
                               ;
 return this->assign(__s, traits_type::length(__s));
      }
# 986 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      assign(size_type __n, _CharT __c)
      { return _M_replace_aux(size_type(0), this->size(), __n, __c); }
# 998 "/usr/include/c++/4.4/bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string&
        assign(_InputIterator __first, _InputIterator __last)
        { return this->replace(_M_ibegin(), _M_iend(), __first, __last); }







      basic_string&
      assign(initializer_list<_CharT> __l)
      { return this->assign(__l.begin(), __l.end()); }
# 1026 "/usr/include/c++/4.4/bits/basic_string.h" 3
      void
      insert(iterator __p, size_type __n, _CharT __c)
      { this->replace(__p, __p, __n, __c); }
# 1041 "/usr/include/c++/4.4/bits/basic_string.h" 3
      template<class _InputIterator>
        void
        insert(iterator __p, _InputIterator __beg, _InputIterator __end)
        { this->replace(__p, __p, __beg, __end); }
# 1053 "/usr/include/c++/4.4/bits/basic_string.h" 3
      void
      insert(iterator __p, initializer_list<_CharT> __l)
      { this->insert(__p, __l.begin(), __l.end()); }
# 1069 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos1, const basic_string& __str)
      { return this->insert(__pos1, __str, size_type(0), __str.size()); }
# 1091 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos1, const basic_string& __str,
      size_type __pos2, size_type __n)
      { return this->insert(__pos1, __str._M_data()
       + __str._M_check(__pos2, "basic_string::insert"),
       __str._M_limit(__pos2, __n)); }
# 1114 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, const _CharT* __s, size_type __n);
# 1132 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, const _CharT* __s)
      {
                               ;
 return this->insert(__pos, __s, traits_type::length(__s));
      }
# 1155 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, size_type __n, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::insert"),
         size_type(0), __n, __c); }
# 1172 "/usr/include/c++/4.4/bits/basic_string.h" 3
      iterator
      insert(iterator __p, _CharT __c)
      {
                                                                 ;
 const size_type __pos = __p - _M_ibegin();
 _M_replace_aux(__pos, size_type(0), size_type(1), __c);
 _M_rep()->_M_set_leaked();
 return iterator(_M_data() + __pos);
      }
# 1196 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      erase(size_type __pos = 0, size_type __n = npos)
      {
 _M_mutate(_M_check(__pos, "basic_string::erase"),
    _M_limit(__pos, __n), size_type(0));
 return *this;
      }
# 1212 "/usr/include/c++/4.4/bits/basic_string.h" 3
      iterator
      erase(iterator __position)
      {

                               ;
 const size_type __pos = __position - _M_ibegin();
 _M_mutate(__pos, size_type(1), size_type(0));
 _M_rep()->_M_set_leaked();
 return iterator(_M_data() + __pos);
      }
# 1232 "/usr/include/c++/4.4/bits/basic_string.h" 3
      iterator
      erase(iterator __first, iterator __last);
# 1251 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n, const basic_string& __str)
      { return this->replace(__pos, __n, __str._M_data(), __str.size()); }
# 1273 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2)
      { return this->replace(__pos1, __n1, __str._M_data()
        + __str._M_check(__pos2, "basic_string::replace"),
        __str._M_limit(__pos2, __n2)); }
# 1297 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2);
# 1316 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s)
      {
                               ;
 return this->replace(__pos, __n1, __s, traits_type::length(__s));
      }
# 1339 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, size_type __n2, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::replace"),
         _M_limit(__pos, __n1), __n2, __c); }
# 1357 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const basic_string& __str)
      { return this->replace(__i1, __i2, __str._M_data(), __str.size()); }
# 1375 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const _CharT* __s, size_type __n)
      {

                          ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1, __s, __n);
      }
# 1396 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const _CharT* __s)
      {
                               ;
 return this->replace(__i1, __i2, __s, traits_type::length(__s));
      }
# 1417 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, size_type __n, _CharT __c)
      {

                          ;
 return _M_replace_aux(__i1 - _M_ibegin(), __i2 - __i1, __n, __c);
      }
# 1439 "/usr/include/c++/4.4/bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string&
        replace(iterator __i1, iterator __i2,
  _InputIterator __k1, _InputIterator __k2)
        {

                            ;
                                             ;
   typedef typename std::__is_integer<_InputIterator>::__type _Integral;
   return _M_replace_dispatch(__i1, __i2, __k1, __k2, _Integral());
 }



      basic_string&
      replace(iterator __i1, iterator __i2, _CharT* __k1, _CharT* __k2)
      {

                          ;
                                           ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2,
       const _CharT* __k1, const _CharT* __k2)
      {

                          ;
                                           ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2, iterator __k1, iterator __k2)
      {

                          ;
                                           ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2,
       const_iterator __k1, const_iterator __k2)
      {

                          ;
                                           ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }
# 1509 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string& replace(iterator __i1, iterator __i2,
       initializer_list<_CharT> __l)
      { return this->replace(__i1, __i2, __l.begin(), __l.end()); }


    private:
      template<class _Integer>
 basic_string&
 _M_replace_dispatch(iterator __i1, iterator __i2, _Integer __n,
       _Integer __val, __true_type)
        { return _M_replace_aux(__i1 - _M_ibegin(), __i2 - __i1, __n, __val); }

      template<class _InputIterator>
 basic_string&
 _M_replace_dispatch(iterator __i1, iterator __i2, _InputIterator __k1,
       _InputIterator __k2, __false_type);

      basic_string&
      _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
       _CharT __c);

      basic_string&
      _M_replace_safe(size_type __pos1, size_type __n1, const _CharT* __s,
        size_type __n2);



      template<class _InIterator>
        static _CharT*
        _S_construct_aux(_InIterator __beg, _InIterator __end,
    const _Alloc& __a, __false_type)
 {
          typedef typename iterator_traits<_InIterator>::iterator_category _Tag;
          return _S_construct(__beg, __end, __a, _Tag());
 }



      template<class _Integer>
        static _CharT*
        _S_construct_aux(_Integer __beg, _Integer __end,
    const _Alloc& __a, __true_type)
        { return _S_construct(static_cast<size_type>(__beg), __end, __a); }

      template<class _InIterator>
        static _CharT*
        _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a)
 {
   typedef typename std::__is_integer<_InIterator>::__type _Integral;
   return _S_construct_aux(__beg, __end, __a, _Integral());
        }


      template<class _InIterator>
        static _CharT*
         _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
        input_iterator_tag);



      template<class _FwdIterator>
        static _CharT*
        _S_construct(_FwdIterator __beg, _FwdIterator __end, const _Alloc& __a,
       forward_iterator_tag);

      static _CharT*
      _S_construct(size_type __req, _CharT __c, const _Alloc& __a);

    public:
# 1590 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      copy(_CharT* __s, size_type __n, size_type __pos = 0) const;
# 1600 "/usr/include/c++/4.4/bits/basic_string.h" 3
      void
      swap(basic_string& __s);
# 1610 "/usr/include/c++/4.4/bits/basic_string.h" 3
      const _CharT*
      c_str() const
      { return _M_data(); }







      const _CharT*
      data() const
      { return _M_data(); }




      allocator_type
      get_allocator() const
      { return _M_dataplus; }
# 1642 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find(const _CharT* __s, size_type __pos, size_type __n) const;
# 1655 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find(const basic_string& __str, size_type __pos = 0) const
      { return this->find(__str.data(), __pos, __str.size()); }
# 1669 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find(const _CharT* __s, size_type __pos = 0) const
      {
                               ;
 return this->find(__s, __pos, traits_type::length(__s));
      }
# 1686 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find(_CharT __c, size_type __pos = 0) const;
# 1699 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      rfind(const basic_string& __str, size_type __pos = npos) const
      { return this->rfind(__str.data(), __pos, __str.size()); }
# 1714 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      rfind(const _CharT* __s, size_type __pos, size_type __n) const;
# 1727 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      rfind(const _CharT* __s, size_type __pos = npos) const
      {
                               ;
 return this->rfind(__s, __pos, traits_type::length(__s));
      }
# 1744 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      rfind(_CharT __c, size_type __pos = npos) const;
# 1757 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_first_of(const basic_string& __str, size_type __pos = 0) const
      { return this->find_first_of(__str.data(), __pos, __str.size()); }
# 1772 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_first_of(const _CharT* __s, size_type __pos, size_type __n) const;
# 1785 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_first_of(const _CharT* __s, size_type __pos = 0) const
      {
                               ;
 return this->find_first_of(__s, __pos, traits_type::length(__s));
      }
# 1804 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_first_of(_CharT __c, size_type __pos = 0) const
      { return this->find(__c, __pos); }
# 1818 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_last_of(const basic_string& __str, size_type __pos = npos) const
      { return this->find_last_of(__str.data(), __pos, __str.size()); }
# 1833 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_last_of(const _CharT* __s, size_type __pos, size_type __n) const;
# 1846 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_last_of(const _CharT* __s, size_type __pos = npos) const
      {
                               ;
 return this->find_last_of(__s, __pos, traits_type::length(__s));
      }
# 1865 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_last_of(_CharT __c, size_type __pos = npos) const
      { return this->rfind(__c, __pos); }
# 1879 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_first_not_of(const basic_string& __str, size_type __pos = 0) const
      { return this->find_first_not_of(__str.data(), __pos, __str.size()); }
# 1894 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos,
   size_type __n) const;
# 1908 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos = 0) const
      {
                               ;
 return this->find_first_not_of(__s, __pos, traits_type::length(__s));
      }
# 1925 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_first_not_of(_CharT __c, size_type __pos = 0) const;
# 1938 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_last_not_of(const basic_string& __str, size_type __pos = npos) const
      { return this->find_last_not_of(__str.data(), __pos, __str.size()); }
# 1954 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos,
         size_type __n) const;
# 1967 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos = npos) const
      {
                               ;
 return this->find_last_not_of(__s, __pos, traits_type::length(__s));
      }
# 1984 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_last_not_of(_CharT __c, size_type __pos = npos) const;
# 1999 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string
      substr(size_type __pos = 0, size_type __n = npos) const
      { return basic_string(*this,
       _M_check(__pos, "basic_string::substr"), __n); }
# 2017 "/usr/include/c++/4.4/bits/basic_string.h" 3
      int
      compare(const basic_string& __str) const
      {
 const size_type __size = this->size();
 const size_type __osize = __str.size();
 const size_type __len = std::min(__size, __osize);

 int __r = traits_type::compare(_M_data(), __str.data(), __len);
 if (!__r)
   __r = _S_compare(__size, __osize);
 return __r;
      }
# 2047 "/usr/include/c++/4.4/bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n, const basic_string& __str) const;
# 2071 "/usr/include/c++/4.4/bits/basic_string.h" 3
      int
      compare(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2) const;
# 2089 "/usr/include/c++/4.4/bits/basic_string.h" 3
      int
      compare(const _CharT* __s) const;
# 2112 "/usr/include/c++/4.4/bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s) const;
# 2137 "/usr/include/c++/4.4/bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2) const;
  };

  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>::
    basic_string()

    : _M_dataplus(_S_empty_rep()._M_refdata(), _Alloc()) { }
# 2158 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }







  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT,_Traits,_Alloc>& __rhs);







  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT,_Traits,_Alloc>& __rhs);







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
      const _CharT* __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs, _CharT __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str(__lhs);
      __str.append(__size_type(1), __rhs);
      return __str;
    }
# 2229 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) == 0; }

  template<typename _CharT>
    inline
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value, bool>::__type
    operator==(const basic_string<_CharT>& __lhs,
        const basic_string<_CharT>& __rhs)
    { return (__lhs.size() == __rhs.size()
       && !std::char_traits<_CharT>::compare(__lhs.data(), __rhs.data(),
          __lhs.size())); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) == 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) == 0; }
# 2275 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return !(__lhs == __rhs); }
# 2312 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) < 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) < 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) > 0; }
# 2349 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) > 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) > 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) < 0; }
# 2386 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) <= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) <= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) >= 0; }
# 2423 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) >= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) >= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const _CharT* __lhs,
      const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) <= 0; }
# 2460 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline void
    swap(basic_string<_CharT, _Traits, _Alloc>& __lhs,
  basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { __lhs.swap(__rhs); }
# 2477 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __is,
        basic_string<_CharT, _Traits, _Alloc>& __str);

  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __is, basic_string<char>& __str);
# 2495 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __os,
        const basic_string<_CharT, _Traits, _Alloc>& __str)
    {


      return __ostream_insert(__os, __str.data(), __str.size());
    }
# 2518 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim);
# 2535 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str)
    { return getline(__is, __str, __is.widen('\n')); }

  template<>
    basic_istream<char>&
    getline(basic_istream<char>& __in, basic_string<char>& __str,
     char __delim);


  template<>
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>& __in, basic_string<wchar_t>& __str,
     wchar_t __delim);


}





# 1 "/usr/include/c++/4.4/ext/string_conversions.h" 1 3
# 27 "/usr/include/c++/4.4/ext/string_conversions.h" 3
# 27 "/usr/include/c++/4.4/ext/string_conversions.h" 3




# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 40 "/usr/include/c++/4.4/cstddef" 3
# 40 "/usr/include/c++/4.4/cstddef" 3



# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 1 3 4
# 44 "/usr/include/c++/4.4/cstddef" 2 3
# 32 "/usr/include/c++/4.4/ext/string_conversions.h" 2 3
# 1 "/usr/include/c++/4.4/cstdlib" 1 3
# 40 "/usr/include/c++/4.4/cstdlib" 3
# 40 "/usr/include/c++/4.4/cstdlib" 3



# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 40 "/usr/include/c++/4.4/cstddef" 3
# 40 "/usr/include/c++/4.4/cstddef" 3



# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 1 3 4
# 44 "/usr/include/c++/4.4/cstddef" 2 3
# 44 "/usr/include/c++/4.4/cstdlib" 2 3
# 67 "/usr/include/c++/4.4/cstdlib" 3
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 1 3 4
# 33 "/usr/include/stdlib.h" 2 3 4

extern "C" {







# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 50 "/usr/include/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 66 "/usr/include/bits/waitstatus.h" 3 4
union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 43 "/usr/include/stdlib.h" 2 3 4
# 97 "/usr/include/stdlib.h" 3 4
typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) throw () __attribute__ ((__warn_unused_result__));




extern double atof (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern int atoi (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern long int atol (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





__extension__ extern long long int atoll (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) throw () __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));
# 239 "/usr/include/stdlib.h" 3 4
extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) throw () __attribute__ ((__nonnull__ (1, 4)));

extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));

extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));

extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));





extern __inline __attribute__ ((__gnu_inline__)) int
atoi (const char *__nptr) throw ()
{
  return (int) strtol (__nptr, (char **) __null, 10);
}
extern __inline __attribute__ ((__gnu_inline__)) long int
atol (const char *__nptr) throw ()
{
  return strtol (__nptr, (char **) __null, 10);
}




__extension__ extern __inline __attribute__ ((__gnu_inline__)) long long int
atoll (const char *__nptr) throw ()
{
  return strtoll (__nptr, (char **) __null, 10);
}
# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) throw () __attribute__ ((__warn_unused_result__));


extern long int a64l (const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





# 1 "/usr/include/sys/types.h" 1 3 4
# 27 "/usr/include/sys/types.h" 3 4
extern "C" {





typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;
# 70 "/usr/include/sys/types.h" 3 4
typedef __mode_t mode_t;




typedef __nlink_t nlink_t;
# 104 "/usr/include/sys/types.h" 3 4
typedef __id_t id_t;
# 115 "/usr/include/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 140 "/usr/include/sys/types.h" 3 4
typedef __suseconds_t suseconds_t;






# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 1 3 4
# 147 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 200 "/usr/include/sys/types.h" 3 4
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 219 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 30 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 22 "/usr/include/bits/select.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 23 "/usr/include/bits/select.h" 2 3 4
# 31 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 22 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;








# 1 "/usr/include/bits/time.h" 1 3 4
# 46 "/usr/include/sys/select.h" 2 3 4








typedef long int __fd_mask;
# 64 "/usr/include/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 96 "/usr/include/sys/select.h" 3 4
extern "C" {
# 106 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);






# 1 "/usr/include/bits/select2.h" 1 3 4
# 24 "/usr/include/bits/select2.h" 3 4
extern long int __fdelt_chk (long int __d);
extern long int __fdelt_warn (long int __d)
                                               ;
# 129 "/usr/include/sys/select.h" 2 3 4


}
# 220 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 24 "/usr/include/sys/sysmacros.h" 3 4
extern "C" {

__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     throw () __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     throw () __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     throw () __attribute__ ((__const__));


__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned int
gnu_dev_major (unsigned long long int __dev) throw ()
{
  return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned int
gnu_dev_minor (unsigned long long int __dev) throw ()
{
  return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned long long int
gnu_dev_makedev (unsigned int __major, unsigned int __minor) throw ()
{
  return ((__minor & 0xff) | ((__major & 0xfff) << 8)
   | (((unsigned long long int) (__minor & ~0xff)) << 12)
   | (((unsigned long long int) (__major & ~0xfff)) << 32));
}

}
# 223 "/usr/include/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 262 "/usr/include/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;
# 273 "/usr/include/sys/types.h" 3 4
}
# 315 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) throw ();


extern void srandom (unsigned int __seed) throw ();





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) throw () __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) throw () __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     throw () __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) throw ();

extern void srand (unsigned int __seed) throw ();




extern int rand_r (unsigned int *__seed) throw ();







extern double drand48 (void) throw ();
extern double erand48 (unsigned short int __xsubi[3]) throw () __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) throw ();
extern long int nrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) throw ();
extern long int jrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) throw ();
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     throw () __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) throw () __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (1, 2)));
# 466 "/usr/include/stdlib.h" 3 4
extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));

extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));
# 480 "/usr/include/stdlib.h" 3 4
extern void *realloc (void *__ptr, size_t __size)
     throw () __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) throw ();




extern void cfree (void *__ptr) throw ();




# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4

extern "C" {





extern void *alloca (size_t __size) throw ();





}
# 493 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));




extern void *aligned_alloc (size_t __alignment, size_t __size)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));




extern void abort (void) throw () __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) throw () __attribute__ ((__nonnull__ (1)));




extern "C++" int at_quick_exit (void (*__func) (void))
     throw () __asm ("at_quick_exit") __attribute__ ((__nonnull__ (1)));
# 535 "/usr/include/stdlib.h" 3 4
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     throw () __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) throw () __attribute__ ((__noreturn__));





extern void quick_exit (int __status) throw () __attribute__ ((__noreturn__));







extern void _Exit (int __status) throw () __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));





extern char *secure_getenv (const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));






extern int putenv (char *__string) throw () __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     throw () __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) throw () __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) throw ();
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) throw () __attribute__ ((__nonnull__ (1)));
# 620 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 630 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 642 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 652 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 674 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 684 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 694 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 706 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 717 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) __attribute__ ((__warn_unused_result__));






extern char *canonicalize_file_name (const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) throw () __attribute__ ((__warn_unused_result__));






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);





extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) __attribute__ ((__warn_unused_result__));



# 1 "/usr/include/bits/stdlib-bsearch.h" 1 3 4
# 19 "/usr/include/bits/stdlib-bsearch.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) void *
bsearch (const void *__key, const void *__base, size_t __nmemb, size_t __size,
  __compar_fn_t __compar)
{
  size_t __l, __u, __idx;
  const void *__p;
  int __comparison;

  __l = 0;
  __u = __nmemb;
  while (__l < __u)
    {
      __idx = (__l + __u) / 2;
      __p = (void *) (((const char *) __base) + (__idx * __size));
      __comparison = (*__compar) (__key, __p);
      if (__comparison < 0)
 __u = __idx;
      else if (__comparison > 0)
 __l = __idx + 1;
      else
 return (void *) __p;
    }

  return __null;
}
# 761 "/usr/include/stdlib.h" 2 3 4




extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




extern int abs (int __x) throw () __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
extern long int labs (long int __x) throw () __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));



__extension__ extern long long int llabs (long long int __x)
     throw () __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));







extern div_t div (int __numer, int __denom)
     throw () __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
extern ldiv_t ldiv (long int __numer, long int __denom)
     throw () __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     throw () __attribute__ ((__const__)) __attribute__ ((__warn_unused_result__));
# 812 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));




extern char *gcvt (double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) __attribute__ ((__warn_unused_result__));




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) __attribute__ ((__warn_unused_result__));
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) __attribute__ ((__warn_unused_result__));




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) throw ();


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) throw ();


extern int wctomb (char *__s, wchar_t __wchar) throw ();



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) throw ();

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     throw ();
# 888 "/usr/include/stdlib.h" 3 4
extern int rpmatch (const char *__response) throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));
# 899 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     throw () __attribute__ ((__nonnull__ (1, 2, 3))) __attribute__ ((__warn_unused_result__));





extern void setkey (const char *__key) throw () __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) __attribute__ ((__warn_unused_result__));







extern int grantpt (int __fd) throw ();



extern int unlockpt (int __fd) throw ();




extern char *ptsname (int __fd) throw () __attribute__ ((__warn_unused_result__));






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     throw () __attribute__ ((__nonnull__ (1)));



# 1 "/usr/include/bits/stdlib-float.h" 1 3 4
# 25 "/usr/include/bits/stdlib-float.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) double
atof (const char *__nptr) throw ()
{
  return strtod (__nptr, (char **) __null);
}
# 956 "/usr/include/stdlib.h" 2 3 4



# 1 "/usr/include/bits/stdlib.h" 1 3 4
# 23 "/usr/include/bits/stdlib.h" 3 4
extern char *__realpath_chk (const char *__restrict __name,
        char *__restrict __resolved,
        size_t __resolvedlen) throw () __attribute__ ((__warn_unused_result__));
extern char *__realpath_alias (const char *__restrict __name, char *__restrict __resolved) throw () __asm__ ("" "realpath") __attribute__ ((__warn_unused_result__));


extern char *__realpath_chk_warn (const char *__restrict __name, char *__restrict __resolved, size_t __resolvedlen) throw () __asm__ ("" "__realpath_chk") __attribute__ ((__warn_unused_result__))




                                      ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__warn_unused_result__)) char *
realpath (const char *__restrict __name, char *__restrict __resolved) throw ()
{
  if (__builtin_object_size (__resolved, 2 > 1) != (size_t) -1)
    {




      return __realpath_chk (__name, __resolved, __builtin_object_size (__resolved, 2 > 1));
    }

  return __realpath_alias (__name, __resolved);
}


extern int __ptsname_r_chk (int __fd, char *__buf, size_t __buflen,
       size_t __nreal) throw () __attribute__ ((__nonnull__ (2)));
extern int __ptsname_r_alias (int __fd, char *__buf, size_t __buflen) throw () __asm__ ("" "ptsname_r")

     __attribute__ ((__nonnull__ (2)));
extern int __ptsname_r_chk_warn (int __fd, char *__buf, size_t __buflen, size_t __nreal) throw () __asm__ ("" "__ptsname_r_chk")


     __attribute__ ((__nonnull__ (2))) ;


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
ptsname_r (int __fd, char *__buf, size_t __buflen) throw ()
{
  if (__builtin_object_size (__buf, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__buflen))
 return __ptsname_r_chk (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));
      if (__buflen > __builtin_object_size (__buf, 2 > 1))
 return __ptsname_r_chk_warn (__fd, __buf, __buflen, __builtin_object_size (__buf, 2 > 1));
    }
  return __ptsname_r_alias (__fd, __buf, __buflen);
}


extern int __wctomb_chk (char *__s, wchar_t __wchar, size_t __buflen)
  throw () __attribute__ ((__warn_unused_result__));
extern int __wctomb_alias (char *__s, wchar_t __wchar) throw () __asm__ ("" "wctomb") __attribute__ ((__warn_unused_result__));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__warn_unused_result__)) int
wctomb (char *__s, wchar_t __wchar) throw ()
{







  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1 && 16 > __builtin_object_size (__s, 2 > 1))
    return __wctomb_chk (__s, __wchar, __builtin_object_size (__s, 2 > 1));
  return __wctomb_alias (__s, __wchar);
}


extern size_t __mbstowcs_chk (wchar_t *__restrict __dst,
         const char *__restrict __src,
         size_t __len, size_t __dstlen) throw ();
extern size_t __mbstowcs_alias (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len) throw () __asm__ ("" "mbstowcs");



extern size_t __mbstowcs_chk_warn (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len, size_t __dstlen) throw () __asm__ ("" "__mbstowcs_chk")




                        ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) size_t
mbstowcs (wchar_t *__restrict __dst, const char *__restrict __src, size_t __len) throw ()

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __mbstowcs_chk (__dst, __src, __len,
          __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));

      if (__len > __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t))
 return __mbstowcs_chk_warn (__dst, __src, __len,
         __builtin_object_size (__dst, 2 > 1) / sizeof (wchar_t));
    }
  return __mbstowcs_alias (__dst, __src, __len);
}


extern size_t __wcstombs_chk (char *__restrict __dst,
         const wchar_t *__restrict __src,
         size_t __len, size_t __dstlen) throw ();
extern size_t __wcstombs_alias (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len) throw () __asm__ ("" "wcstombs");



extern size_t __wcstombs_chk_warn (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len, size_t __dstlen) throw () __asm__ ("" "__wcstombs_chk")



                                                                    ;

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) size_t
wcstombs (char *__restrict __dst, const wchar_t *__restrict __src, size_t __len) throw ()

{
  if (__builtin_object_size (__dst, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__len))
 return __wcstombs_chk (__dst, __src, __len, __builtin_object_size (__dst, 2 > 1));
      if (__len > __builtin_object_size (__dst, 2 > 1))
 return __wcstombs_chk_warn (__dst, __src, __len, __builtin_object_size (__dst, 2 > 1));
    }
  return __wcstombs_alias (__dst, __src, __len);
}
# 960 "/usr/include/stdlib.h" 2 3 4








}
# 68 "/usr/include/c++/4.4/cstdlib" 2 3
# 99 "/usr/include/c++/4.4/cstdlib" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::div_t;
  using ::ldiv_t;

  using ::abort;
  using ::abs;
  using ::atexit;
  using ::atof;
  using ::atoi;
  using ::atol;
  using ::bsearch;
  using ::calloc;
  using ::div;
  using ::exit;
  using ::free;
  using ::getenv;
  using ::labs;
  using ::ldiv;
  using ::malloc;

  using ::mblen;
  using ::mbstowcs;
  using ::mbtowc;

  using ::qsort;
  using ::rand;
  using ::realloc;
  using ::srand;
  using ::strtod;
  using ::strtol;
  using ::strtoul;
  using ::system;

  using ::wcstombs;
  using ::wctomb;


  inline long
  abs(long __i) { return labs(__i); }

  inline ldiv_t
  div(long __i, long __j) { return ldiv(__i, __j); }

}
# 156 "/usr/include/c++/4.4/cstdlib" 3
namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {


  using ::lldiv_t;





  using ::_Exit;


  inline long long
  abs(long long __x) { return __x >= 0 ? __x : -__x; }


  using ::llabs;

  inline lldiv_t
  div(long long __n, long long __d)
  { lldiv_t __q; __q.quot = __n / __d; __q.rem = __n % __d; return __q; }

  using ::lldiv;
# 189 "/usr/include/c++/4.4/cstdlib" 3
  using ::atoll;
  using ::strtoll;
  using ::strtoull;

  using ::strtof;
  using ::strtold;

}

namespace std __attribute__ ((__visibility__ ("default"))) {


  using ::__gnu_cxx::lldiv_t;

  using ::__gnu_cxx::_Exit;
  using ::__gnu_cxx::abs;

  using ::__gnu_cxx::llabs;
  using ::__gnu_cxx::div;
  using ::__gnu_cxx::lldiv;

  using ::__gnu_cxx::atoll;
  using ::__gnu_cxx::strtof;
  using ::__gnu_cxx::strtoll;
  using ::__gnu_cxx::strtoull;
  using ::__gnu_cxx::strtold;

}
# 231 "/usr/include/c++/4.4/cstdlib" 3
# 1 "/usr/include/c++/4.4/tr1_impl/cstdlib" 1 3
# 32 "/usr/include/c++/4.4/tr1_impl/cstdlib" 3
namespace std
{






  using std::lldiv_t;


  using std::llabs;
  using std::lldiv;


  using std::atoll;
  using std::strtoll;
  using std::strtoull;

  using std::strtof;
  using std::strtold;


  using std::abs;

  using std::div;





}
# 232 "/usr/include/c++/4.4/cstdlib" 2 3
# 33 "/usr/include/c++/4.4/ext/string_conversions.h" 2 3
# 1 "/usr/include/c++/4.4/cwchar" 1 3
# 40 "/usr/include/c++/4.4/cwchar" 3
# 40 "/usr/include/c++/4.4/cwchar" 3



# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 40 "/usr/include/c++/4.4/cstddef" 3
# 40 "/usr/include/c++/4.4/cstddef" 3



# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 1 3 4
# 44 "/usr/include/c++/4.4/cstddef" 2 3
# 44 "/usr/include/c++/4.4/cwchar" 2 3


# 1 "/usr/include/wchar.h" 1 3 4
# 47 "/usr/include/c++/4.4/cwchar" 2 3
# 34 "/usr/include/c++/4.4/ext/string_conversions.h" 2 3
# 1 "/usr/include/c++/4.4/cstdio" 1 3
# 40 "/usr/include/c++/4.4/cstdio" 3
# 40 "/usr/include/c++/4.4/cstdio" 3



# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 40 "/usr/include/c++/4.4/cstddef" 3
# 40 "/usr/include/c++/4.4/cstddef" 3



# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 1 3 4
# 44 "/usr/include/c++/4.4/cstddef" 2 3
# 44 "/usr/include/c++/4.4/cstdio" 2 3
# 1 "/usr/include/stdio.h" 1 3 4
# 29 "/usr/include/stdio.h" 3 4
extern "C" {




# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/home/regehr/z/compiler-install/llvm-r120788-install/bin/../lib/clang/2.9/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 32 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 154 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 177 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 245 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 293 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 302 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};





struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 338 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);




extern "C" {


extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 434 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) throw ();
extern int _IO_ferror (_IO_FILE *__fp) throw ();

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) throw ();
extern void _IO_funlockfile (_IO_FILE *) throw ();
extern int _IO_ftrylockfile (_IO_FILE *) throw ();
# 464 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) throw ();
# 526 "/usr/include/libio.h" 3 4
}
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 110 "/usr/include/stdio.h" 3 4
typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;
# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) throw ();

extern int rename (const char *__old, const char *__new) throw ();




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) throw ();
# 195 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void) __attribute__ ((__warn_unused_result__));
# 205 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) __attribute__ ((__warn_unused_result__));



extern char *tmpnam (char *__s) throw () __attribute__ ((__warn_unused_result__));





extern char *tmpnam_r (char *__s) throw () __attribute__ ((__warn_unused_result__));
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));
# 237 "/usr/include/stdio.h" 3 4
extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 262 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);
# 272 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) __attribute__ ((__warn_unused_result__));




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
# 297 "/usr/include/stdio.h" 3 4
extern FILE *fopen64 (const char *__restrict __filename,
        const char *__restrict __modes) __attribute__ ((__warn_unused_result__));
extern FILE *freopen64 (const char *__restrict __filename,
   const char *__restrict __modes,
   FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));




extern FILE *fdopen (int __fd, const char *__modes) throw () __attribute__ ((__warn_unused_result__));





extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) throw () __attribute__ ((__warn_unused_result__));




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  throw () __attribute__ ((__warn_unused_result__));




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) throw () __attribute__ ((__warn_unused_result__));






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) throw ();



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) throw ();





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) throw ();


extern void setlinebuf (FILE *__stream) throw ();
# 356 "/usr/include/stdio.h" 3 4
extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) throw ();





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) throw ();





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));






extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 2, 0))) __attribute__ ((__warn_unused_result__));
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) __attribute__ ((__warn_unused_result__));
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) __attribute__ ((__warn_unused_result__));




extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
# 425 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) __attribute__ ((__warn_unused_result__));




extern int scanf (const char *__restrict __format, ...) __attribute__ ((__warn_unused_result__));

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) throw ();
# 471 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) __attribute__ ((__warn_unused_result__));





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) __attribute__ ((__warn_unused_result__));


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));
# 531 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);
# 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 573 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);
# 622 "/usr/include/stdio.h" 3 4
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     __attribute__ ((__warn_unused_result__));
# 638 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__warn_unused_result__)) __attribute__ ((__deprecated__));
# 649 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
# 689 "/usr/include/stdio.h" 3 4
extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 726 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (const char *__restrict __s,
      FILE *__restrict __stream);
# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);
# 749 "/usr/include/stdio.h" 3 4
extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) __attribute__ ((__warn_unused_result__));




extern void rewind (FILE *__stream);
# 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) __attribute__ ((__warn_unused_result__));
# 798 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 818 "/usr/include/stdio.h" 3 4
extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) __attribute__ ((__warn_unused_result__));
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);




extern void clearerr (FILE *__stream) throw ();

extern int feof (FILE *__stream) throw () __attribute__ ((__warn_unused_result__));

extern int ferror (FILE *__stream) throw () __attribute__ ((__warn_unused_result__));




extern void clearerr_unlocked (FILE *__stream) throw ();
extern int feof_unlocked (FILE *__stream) throw () __attribute__ ((__warn_unused_result__));
extern int ferror_unlocked (FILE *__stream) throw () __attribute__ ((__warn_unused_result__));
# 846 "/usr/include/stdio.h" 3 4
extern void perror (const char *__s);







# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];


extern int _sys_nerr;
extern const char *const _sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) throw () __attribute__ ((__warn_unused_result__));




extern int fileno_unlocked (FILE *__stream) throw () __attribute__ ((__warn_unused_result__));
# 873 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) __attribute__ ((__warn_unused_result__));





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) throw ();





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       const char *__restrict __format,
       __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) throw ();



extern int ftrylockfile (FILE *__stream) throw () __attribute__ ((__warn_unused_result__));


extern void funlockfile (FILE *__stream) throw ();
# 934 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio.h" 1 3 4
# 43 "/usr/include/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
getchar (void)
{
  return _IO_getc (stdin);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}





extern __inline __attribute__ ((__gnu_inline__)) int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}


extern __inline __attribute__ ((__gnu_inline__)) int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}




extern __inline __attribute__ ((__gnu_inline__)) int
putchar (int __c)
{
  return _IO_putc (__c, stdout);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}


extern __inline __attribute__ ((__gnu_inline__)) int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) __ssize_t
getline (char **__lineptr, size_t *__n, FILE *__stream)
{
  return __getdelim (__lineptr, __n, '\n', __stream);
}





extern __inline __attribute__ ((__gnu_inline__)) int
feof_unlocked (FILE *__stream) throw ()
{
  return (((__stream)->_flags & 0x10) != 0);
}


extern __inline __attribute__ ((__gnu_inline__)) int
ferror_unlocked (FILE *__stream) throw ()
{
  return (((__stream)->_flags & 0x20) != 0);
}
# 935 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/bits/stdio2.h" 1 3 4
# 23 "/usr/include/bits/stdio2.h" 3 4
extern int __sprintf_chk (char *__restrict __s, int __flag, size_t __slen,
     const char *__restrict __format, ...) throw ();
extern int __vsprintf_chk (char *__restrict __s, int __flag, size_t __slen,
      const char *__restrict __format,
      __gnuc_va_list __ap) throw ();
# 42 "/usr/include/bits/stdio2.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
vsprintf (char *__restrict __s, const char *__restrict __fmt, __gnuc_va_list __ap) throw ()

{
  return __builtin___vsprintf_chk (__s, 2 - 1,
       __builtin_object_size (__s, 2 > 1), __fmt, __ap);
}



extern int __snprintf_chk (char *__restrict __s, size_t __n, int __flag,
      size_t __slen, const char *__restrict __format,
      ...) throw ();
extern int __vsnprintf_chk (char *__restrict __s, size_t __n, int __flag,
       size_t __slen, const char *__restrict __format,
       __gnuc_va_list __ap) throw ();
# 73 "/usr/include/bits/stdio2.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
vsnprintf (char *__restrict __s, size_t __n, const char *__restrict __fmt, __gnuc_va_list __ap) throw ()

{
  return __builtin___vsnprintf_chk (__s, __n, 2 - 1,
        __builtin_object_size (__s, 2 > 1), __fmt, __ap);
}





extern int __fprintf_chk (FILE *__restrict __stream, int __flag,
     const char *__restrict __format, ...);
extern int __printf_chk (int __flag, const char *__restrict __format, ...);
extern int __vfprintf_chk (FILE *__restrict __stream, int __flag,
      const char *__restrict __format, __gnuc_va_list __ap);
extern int __vprintf_chk (int __flag, const char *__restrict __format,
     __gnuc_va_list __ap);
# 113 "/usr/include/bits/stdio2.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
vprintf (const char *__restrict __fmt, __gnuc_va_list __ap)
{

  return __vfprintf_chk (stdout, 2 - 1, __fmt, __ap);



}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
vfprintf (FILE *__restrict __stream,
   const char *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vfprintf_chk (__stream, 2 - 1, __fmt, __ap);
}


extern int __dprintf_chk (int __fd, int __flag, const char *__restrict __fmt,
     ...) __attribute__ ((__format__ (__printf__, 3, 4)));
extern int __vdprintf_chk (int __fd, int __flag,
      const char *__restrict __fmt, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 3, 0)));
# 149 "/usr/include/bits/stdio2.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
vdprintf (int __fd, const char *__restrict __fmt, __gnuc_va_list __ap)
{
  return __vdprintf_chk (__fd, 2 - 1, __fmt, __ap);
}




extern int __asprintf_chk (char **__restrict __ptr, int __flag,
      const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4))) __attribute__ ((__warn_unused_result__));
extern int __vasprintf_chk (char **__restrict __ptr, int __flag,
       const char *__restrict __fmt, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0))) __attribute__ ((__warn_unused_result__));
extern int __obstack_printf_chk (struct obstack *__restrict __obstack,
     int __flag, const char *__restrict __format,
     ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));
extern int __obstack_vprintf_chk (struct obstack *__restrict __obstack,
      int __flag,
      const char *__restrict __format,
      __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));
# 206 "/usr/include/bits/stdio2.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
vasprintf (char **__restrict __ptr, const char *__restrict __fmt, __gnuc_va_list __ap) throw ()

{
  return __vasprintf_chk (__ptr, 2 - 1, __fmt, __ap);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
obstack_vprintf (struct obstack *__restrict __obstack, const char *__restrict __fmt, __gnuc_va_list __ap) throw ()

{
  return __obstack_vprintf_chk (__obstack, 2 - 1, __fmt,
    __ap);
}
# 241 "/usr/include/bits/stdio2.h" 3 4
extern char *__fgets_chk (char *__restrict __s, size_t __size, int __n,
     FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern char *__fgets_alias (char *__restrict __s, int __n, FILE *__restrict __stream) __asm__ ("" "fgets") __attribute__ ((__warn_unused_result__));


extern char *__fgets_chk_warn (char *__restrict __s, size_t __size, int __n, FILE *__restrict __stream) __asm__ ("" "__fgets_chk")


     __attribute__ ((__warn_unused_result__)) ;


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__warn_unused_result__)) char *
fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
{
  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n) || __n <= 0)
 return __fgets_chk (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);

      if ((size_t) __n > __builtin_object_size (__s, 2 > 1))
 return __fgets_chk_warn (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);
    }
  return __fgets_alias (__s, __n, __stream);
}

extern size_t __fread_chk (void *__restrict __ptr, size_t __ptrlen,
      size_t __size, size_t __n,
      FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t __fread_alias (void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "fread") __attribute__ ((__warn_unused_result__));



extern size_t __fread_chk_warn (void *__restrict __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "__fread_chk")




     __attribute__ ((__warn_unused_result__)) ;


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__warn_unused_result__)) size_t
fread (void *__restrict __ptr, size_t __size, size_t __n,
       FILE *__restrict __stream)
{
  if (__builtin_object_size (__ptr, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size)
   || !__builtin_constant_p (__n)
   || (__size | __n) >= (((size_t) 1) << (8 * sizeof (size_t) / 2)))
 return __fread_chk (__ptr, __builtin_object_size (__ptr, 0), __size, __n, __stream);

      if (__size * __n > __builtin_object_size (__ptr, 0))
 return __fread_chk_warn (__ptr, __builtin_object_size (__ptr, 0), __size, __n, __stream);
    }
  return __fread_alias (__ptr, __size, __n, __stream);
}


extern char *__fgets_unlocked_chk (char *__restrict __s, size_t __size,
       int __n, FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern char *__fgets_unlocked_alias (char *__restrict __s, int __n, FILE *__restrict __stream) __asm__ ("" "fgets_unlocked") __attribute__ ((__warn_unused_result__));


extern char *__fgets_unlocked_chk_warn (char *__restrict __s, size_t __size, int __n, FILE *__restrict __stream) __asm__ ("" "__fgets_unlocked_chk")


     __attribute__ ((__warn_unused_result__)) ;


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__warn_unused_result__)) char *
fgets_unlocked (char *__restrict __s, int __n, FILE *__restrict __stream)
{
  if (__builtin_object_size (__s, 2 > 1) != (size_t) -1)
    {
      if (!__builtin_constant_p (__n) || __n <= 0)
 return __fgets_unlocked_chk (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);

      if ((size_t) __n > __builtin_object_size (__s, 2 > 1))
 return __fgets_unlocked_chk_warn (__s, __builtin_object_size (__s, 2 > 1), __n, __stream);
    }
  return __fgets_unlocked_alias (__s, __n, __stream);
}




extern size_t __fread_unlocked_chk (void *__restrict __ptr, size_t __ptrlen,
        size_t __size, size_t __n,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
extern size_t __fread_unlocked_alias (void *__restrict __ptr, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "fread_unlocked") __attribute__ ((__warn_unused_result__));



extern size_t __fread_unlocked_chk_warn (void *__restrict __ptr, size_t __ptrlen, size_t __size, size_t __n, FILE *__restrict __stream) __asm__ ("" "__fread_unlocked_chk")




     __attribute__ ((__warn_unused_result__)) ;


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__warn_unused_result__)) size_t
fread_unlocked (void *__restrict __ptr, size_t __size, size_t __n,
  FILE *__restrict __stream)
{
  if (__builtin_object_size (__ptr, 0) != (size_t) -1)
    {
      if (!__builtin_constant_p (__size)
   || !__builtin_constant_p (__n)
   || (__size | __n) >= (((size_t) 1) << (8 * sizeof (size_t) / 2)))
 return __fread_unlocked_chk (__ptr, __builtin_object_size (__ptr, 0), __size, __n,
         __stream);

      if (__size * __n > __builtin_object_size (__ptr, 0))
 return __fread_unlocked_chk_warn (__ptr, __builtin_object_size (__ptr, 0), __size, __n,
       __stream);
    }


  if (__builtin_constant_p (__size)
      && __builtin_constant_p (__n)
      && (__size | __n) < (((size_t) 1) << (8 * sizeof (size_t) / 2))
      && __size * __n <= 8)
    {
      size_t __cnt = __size * __n;
      char *__cptr = (char *) __ptr;
      if (__cnt == 0)
 return 0;

      for (; __cnt > 0; --__cnt)
 {
   int __c = (__builtin_expect (((__stream)->_IO_read_ptr >= (__stream)->_IO_read_end), 0) ? __uflow (__stream) : *(unsigned char *) (__stream)->_IO_read_ptr++);
   if (__c == (-1))
     break;
   *__cptr++ = __c;
 }
      return (__cptr - (char *) __ptr) / __size;
    }

  return __fread_unlocked_alias (__ptr, __size, __n, __stream);
}
# 938 "/usr/include/stdio.h" 2 3 4





}
# 45 "/usr/include/c++/4.4/cstdio" 2 3
# 92 "/usr/include/c++/4.4/cstdio" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::FILE;
  using ::fpos_t;

  using ::clearerr;
  using ::fclose;
  using ::feof;
  using ::ferror;
  using ::fflush;
  using ::fgetc;
  using ::fgetpos;
  using ::fgets;
  using ::fopen;
  using ::fprintf;
  using ::fputc;
  using ::fputs;
  using ::fread;
  using ::freopen;
  using ::fscanf;
  using ::fseek;
  using ::fsetpos;
  using ::ftell;
  using ::fwrite;
  using ::getc;
  using ::getchar;
  using ::gets;
  using ::perror;
  using ::printf;
  using ::putc;
  using ::putchar;
  using ::puts;
  using ::remove;
  using ::rename;
  using ::rewind;
  using ::scanf;
  using ::setbuf;
  using ::setvbuf;
  using ::sprintf;
  using ::sscanf;
  using ::tmpfile;
  using ::tmpnam;
  using ::ungetc;
  using ::vfprintf;
  using ::vprintf;
  using ::vsprintf;

}
# 149 "/usr/include/c++/4.4/cstdio" 3
namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
# 164 "/usr/include/c++/4.4/cstdio" 3
  using ::snprintf;
  using ::vfscanf;
  using ::vscanf;
  using ::vsnprintf;
  using ::vsscanf;


}

namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::__gnu_cxx::snprintf;
  using ::__gnu_cxx::vfscanf;
  using ::__gnu_cxx::vscanf;
  using ::__gnu_cxx::vsnprintf;
  using ::__gnu_cxx::vsscanf;

}
# 196 "/usr/include/c++/4.4/cstdio" 3
# 1 "/usr/include/c++/4.4/tr1_impl/cstdio" 1 3
# 30 "/usr/include/c++/4.4/tr1_impl/cstdio" 3
namespace std
{



  using std::snprintf;
  using std::vsnprintf;

  using std::vfscanf;
  using std::vscanf;
  using std::vsscanf;



}
# 197 "/usr/include/c++/4.4/cstdio" 2 3
# 35 "/usr/include/c++/4.4/ext/string_conversions.h" 2 3
# 1 "/usr/include/c++/4.4/cerrno" 1 3
# 40 "/usr/include/c++/4.4/cerrno" 3
# 40 "/usr/include/c++/4.4/cerrno" 3


# 1 "/usr/include/errno.h" 1 3 4
# 31 "/usr/include/errno.h" 3 4
extern "C" {




# 1 "/usr/include/bits/errno.h" 1 3 4
# 24 "/usr/include/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 5 "/usr/include/asm-generic/errno.h" 2 3 4
# 2 "/usr/include/asm/errno.h" 2 3 4
# 2 "/usr/include/linux/errno.h" 2 3 4
# 25 "/usr/include/bits/errno.h" 2 3 4
# 50 "/usr/include/bits/errno.h" 3 4
extern int *__errno_location (void) throw () __attribute__ ((__const__));
# 36 "/usr/include/errno.h" 2 3 4
# 54 "/usr/include/errno.h" 3 4
extern char *program_invocation_name, *program_invocation_short_name;



}
# 68 "/usr/include/errno.h" 3 4
typedef int error_t;
# 43 "/usr/include/c++/4.4/cerrno" 2 3
# 36 "/usr/include/c++/4.4/ext/string_conversions.h" 2 3

namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {


  template<typename _TRet, typename _Ret = _TRet, typename _CharT,
    typename... _Base>
    _Ret
    __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
    const char* __name, const _CharT* __str, std::size_t* __idx,
    _Base... __base)
    {
      _Ret __ret;

      _CharT* __endptr;
      (*__errno_location ()) = 0;
      const _TRet __tmp = __convf(__str, &__endptr, __base...);

      if (__endptr == __str)
 std::__throw_invalid_argument(__name);
      else if ((*__errno_location ()) == 34
        || (std::__are_same<_Ret, int>::__value
     && (__tmp < __numeric_traits<int>::__min
         || __tmp > __numeric_traits<int>::__max)))
 std::__throw_out_of_range(__name);
      else
 __ret = __tmp;

      if (__idx)
 *__idx = __endptr - __str;

      return __ret;
    }


  template<typename _String, typename _CharT = typename _String::value_type>
    _String
    __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     __builtin_va_list), std::size_t __n,
   const _CharT* __fmt, ...)
    {


      _CharT* __s = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
         * __n));

      __builtin_va_list __args;
      __builtin_va_start(__args, __fmt);

      const int __len = __convf(__s, __n, __fmt, __args);

      __builtin_va_end(__args);

      return _String(__s, __s + __len);
    }

}
# 2559 "/usr/include/c++/4.4/bits/basic_string.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {


  inline int
  stoi(const string& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa<long, int>(&std::strtol, "stoi", __str.c_str(),
     __idx, __base); }

  inline long
  stol(const string& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::strtol, "stol", __str.c_str(),
        __idx, __base); }

  inline unsigned long
  stoul(const string& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::strtoul, "stoul", __str.c_str(),
        __idx, __base); }

  inline long long
  stoll(const string& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::strtoll, "stoll", __str.c_str(),
        __idx, __base); }

  inline unsigned long long
  stoull(const string& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::strtoull, "stoull", __str.c_str(),
        __idx, __base); }


  inline float
  stof(const string& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::strtof, "stof", __str.c_str(), __idx); }

  inline double
  stod(const string& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::strtod, "stod", __str.c_str(), __idx); }

  inline long double
  stold(const string& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::strtold, "stold", __str.c_str(), __idx); }


  inline string
  to_string(long long __val)
  { return __gnu_cxx::__to_xstring<string>(&std::vsnprintf,
        4 * sizeof(long long),
        "%lld", __val); }

  inline string
  to_string(unsigned long long __val)
  { return __gnu_cxx::__to_xstring<string>(&std::vsnprintf,
        4 * sizeof(unsigned long long),
        "%llu", __val); }

  inline string
  to_string(long double __val)
  {
    const int __n =
      __gnu_cxx::__numeric_traits<long double>::__max_exponent10 + 20;
    return __gnu_cxx::__to_xstring<string>(&std::vsnprintf, __n,
        "%Lf", __val);
  }


  inline int
  stoi(const wstring& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa<long, int>(&std::wcstol, "stoi", __str.c_str(),
     __idx, __base); }

  inline long
  stol(const wstring& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::wcstol, "stol", __str.c_str(),
        __idx, __base); }

  inline unsigned long
  stoul(const wstring& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::wcstoul, "stoul", __str.c_str(),
        __idx, __base); }

  inline long long
  stoll(const wstring& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::wcstoll, "stoll", __str.c_str(),
        __idx, __base); }

  inline unsigned long long
  stoull(const wstring& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::wcstoull, "stoull", __str.c_str(),
        __idx, __base); }


  inline float
  stof(const wstring& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::wcstof, "stof", __str.c_str(), __idx); }

  inline double
  stod(const wstring& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::wcstod, "stod", __str.c_str(), __idx); }

  inline long double
  stold(const wstring& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::wcstold, "stold", __str.c_str(), __idx); }

  inline wstring
  to_wstring(long long __val)
  { return __gnu_cxx::__to_xstring<wstring>(&std::vswprintf,
         4 * sizeof(long long),
         L"%lld", __val); }

  inline wstring
  to_wstring(unsigned long long __val)
  { return __gnu_cxx::__to_xstring<wstring>(&std::vswprintf,
         4 * sizeof(unsigned long long),
         L"%llu", __val); }

  inline wstring
  to_wstring(long double __val)
  {
    const int __n =
      __gnu_cxx::__numeric_traits<long double>::__max_exponent10 + 20;
    return __gnu_cxx::__to_xstring<wstring>(&std::vswprintf, __n,
         L"%Lf", __val);
  }


}
# 53 "/usr/include/c++/4.4/string" 2 3


# 1 "/usr/include/c++/4.4/bits/basic_string.tcc" 1 3
# 41 "/usr/include/c++/4.4/bits/basic_string.tcc" 3
# 41 "/usr/include/c++/4.4/bits/basic_string.tcc" 3




namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    _Rep::_S_max_size = (((npos - sizeof(_Rep_base))/sizeof(_CharT)) - 1) / 4;

  template<typename _CharT, typename _Traits, typename _Alloc>
    const _CharT
    basic_string<_CharT, _Traits, _Alloc>::
    _Rep::_S_terminal = _CharT();

  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::npos;



  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::_Rep::_S_empty_rep_storage[
    (sizeof(_Rep_base) + sizeof(_CharT) + sizeof(size_type) - 1) /
      sizeof(size_type)];





  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InIterator>
      _CharT*
      basic_string<_CharT, _Traits, _Alloc>::
      _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
     input_iterator_tag)
      {

 if (__beg == __end && __a == _Alloc())
   return _S_empty_rep()._M_refdata();


 _CharT __buf[128];
 size_type __len = 0;
 while (__beg != __end && __len < sizeof(__buf) / sizeof(_CharT))
   {
     __buf[__len++] = *__beg;
     ++__beg;
   }
 _Rep* __r = _Rep::_S_create(__len, size_type(0), __a);
 _M_copy(__r->_M_refdata(), __buf, __len);
 try
   {
     while (__beg != __end)
       {
  if (__len == __r->_M_capacity)
    {

      _Rep* __another = _Rep::_S_create(__len + 1, __len, __a);
      _M_copy(__another->_M_refdata(), __r->_M_refdata(), __len);
      __r->_M_destroy(__a);
      __r = __another;
    }
  __r->_M_refdata()[__len++] = *__beg;
  ++__beg;
       }
   }
 catch(...)
   {
     __r->_M_destroy(__a);
     throw;
   }
 __r->_M_set_length_and_sharable(__len);
 return __r->_M_refdata();
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template <typename _InIterator>
      _CharT*
      basic_string<_CharT, _Traits, _Alloc>::
      _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
     forward_iterator_tag)
      {

 if (__beg == __end && __a == _Alloc())
   return _S_empty_rep()._M_refdata();


 if (__builtin_expect(__gnu_cxx::__is_null_pointer(__beg)
        && __beg != __end, 0))
   __throw_logic_error(("basic_string::_S_construct NULL not valid"));

 const size_type __dnew = static_cast<size_type>(std::distance(__beg,
              __end));

 _Rep* __r = _Rep::_S_create(__dnew, size_type(0), __a);
 try
   { _S_copy_chars(__r->_M_refdata(), __beg, __end); }
 catch(...)
   {
     __r->_M_destroy(__a);
     throw;
   }
 __r->_M_set_length_and_sharable(__dnew);
 return __r->_M_refdata();
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    _CharT*
    basic_string<_CharT, _Traits, _Alloc>::
    _S_construct(size_type __n, _CharT __c, const _Alloc& __a)
    {

      if (__n == 0 && __a == _Alloc())
 return _S_empty_rep()._M_refdata();


      _Rep* __r = _Rep::_S_create(__n, size_type(0), __a);
      if (__n)
 _M_assign(__r->_M_refdata(), __n, __c);

      __r->_M_set_length_and_sharable(__n);
      return __r->_M_refdata();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str)
    : _M_dataplus(__str._M_rep()->_M_grab(_Alloc(__str.get_allocator()),
       __str.get_allocator()),
    __str.get_allocator())
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _Alloc& __a)
    : _M_dataplus(_S_construct(size_type(), _CharT(), __a), __a)
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str, size_type __pos, size_type __n)
    : _M_dataplus(_S_construct(__str._M_data()
          + __str._M_check(__pos,
      "basic_string::basic_string"),
          __str._M_data() + __str._M_limit(__pos, __n)
          + __pos, _Alloc()), _Alloc())
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str, size_type __pos,
   size_type __n, const _Alloc& __a)
    : _M_dataplus(_S_construct(__str._M_data()
          + __str._M_check(__pos,
      "basic_string::basic_string"),
          __str._M_data() + __str._M_limit(__pos, __n)
          + __pos, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _CharT* __s, size_type __n, const _Alloc& __a)
    : _M_dataplus(_S_construct(__s, __s + __n, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _CharT* __s, const _Alloc& __a)
    : _M_dataplus(_S_construct(__s, __s ? __s + traits_type::length(__s) :
          __s + npos, __a), __a)
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(size_type __n, _CharT __c, const _Alloc& __a)
    : _M_dataplus(_S_construct(__n, __c, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(_InputIterator __beg, _InputIterator __end, const _Alloc& __a)
    : _M_dataplus(_S_construct(__beg, __end, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(initializer_list<_CharT> __l, const _Alloc& __a)
    : _M_dataplus(_S_construct(__l.begin(), __l.end(), __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    assign(const basic_string& __str)
    {
      if (_M_rep() != __str._M_rep())
 {

   const allocator_type __a = this->get_allocator();
   _CharT* __tmp = __str._M_rep()->_M_grab(__a, __str.get_allocator());
   _M_rep()->_M_dispose(__a);
   _M_data(__tmp);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    assign(const _CharT* __s, size_type __n)
    {
                                             ;
      _M_check_length(this->size(), __n, "basic_string::assign");
      if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
 return _M_replace_safe(size_type(0), this->size(), __s, __n);
      else
 {

   const size_type __pos = __s - _M_data();
   if (__pos >= __n)
     _M_copy(_M_data(), __s, __n);
   else if (__pos)
     _M_move(_M_data(), __s, __n);
   _M_rep()->_M_set_length_and_sharable(__n);
   return *this;
 }
     }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(size_type __n, _CharT __c)
    {
      if (__n)
 {
   _M_check_length(size_type(0), __n, "basic_string::append");
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_assign(_M_data() + this->size(), __n, __c);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const _CharT* __s, size_type __n)
    {
                                             ;
      if (__n)
 {
   _M_check_length(size_type(0), __n, "basic_string::append");
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     {
       if (_M_disjunct(__s))
  this->reserve(__len);
       else
  {
    const size_type __off = __s - _M_data();
    this->reserve(__len);
    __s = _M_data() + __off;
  }
     }
   _M_copy(_M_data() + this->size(), __s, __n);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const basic_string& __str)
    {
      const size_type __size = __str.size();
      if (__size)
 {
   const size_type __len = __size + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_copy(_M_data() + this->size(), __str._M_data(), __size);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const basic_string& __str, size_type __pos, size_type __n)
    {
      __str._M_check(__pos, "basic_string::append");
      __n = __str._M_limit(__pos, __n);
      if (__n)
 {
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_copy(_M_data() + this->size(), __str._M_data() + __pos, __n);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

   template<typename _CharT, typename _Traits, typename _Alloc>
     basic_string<_CharT, _Traits, _Alloc>&
     basic_string<_CharT, _Traits, _Alloc>::
     insert(size_type __pos, const _CharT* __s, size_type __n)
     {
                                              ;
       _M_check(__pos, "basic_string::insert");
       _M_check_length(size_type(0), __n, "basic_string::insert");
       if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
         return _M_replace_safe(__pos, size_type(0), __s, __n);
       else
         {

           const size_type __off = __s - _M_data();
           _M_mutate(__pos, 0, __n);
           __s = _M_data() + __off;
           _CharT* __p = _M_data() + __pos;
           if (__s + __n <= __p)
             _M_copy(__p, __s, __n);
           else if (__s >= __p)
             _M_copy(__p, __s + __n, __n);
           else
             {
        const size_type __nleft = __p - __s;
               _M_copy(__p, __s, __nleft);
               _M_copy(__p + __nleft, __p + __n, __n - __nleft);
             }
           return *this;
         }
     }

   template<typename _CharT, typename _Traits, typename _Alloc>
     typename basic_string<_CharT, _Traits, _Alloc>::iterator
     basic_string<_CharT, _Traits, _Alloc>::
     erase(iterator __first, iterator __last)
     {

                           ;




       const size_type __size = __last - __first;
       if (__size)
  {
    const size_type __pos = __first - _M_ibegin();
    _M_mutate(__pos, __size, size_type(0));
    _M_rep()->_M_set_leaked();
    return iterator(_M_data() + __pos);
  }
       else
  return __first;
     }

   template<typename _CharT, typename _Traits, typename _Alloc>
     basic_string<_CharT, _Traits, _Alloc>&
     basic_string<_CharT, _Traits, _Alloc>::
     replace(size_type __pos, size_type __n1, const _CharT* __s,
      size_type __n2)
     {
                                               ;
       _M_check(__pos, "basic_string::replace");
       __n1 = _M_limit(__pos, __n1);
       _M_check_length(__n1, __n2, "basic_string::replace");
       bool __left;
       if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
         return _M_replace_safe(__pos, __n1, __s, __n2);
       else if ((__left = __s + __n2 <= _M_data() + __pos)
  || _M_data() + __pos + __n1 <= __s)
  {

    size_type __off = __s - _M_data();
    __left ? __off : (__off += __n2 - __n1);
    _M_mutate(__pos, __n1, __n2);
    _M_copy(_M_data() + __pos, _M_data() + __off, __n2);
    return *this;
  }
       else
  {

    const basic_string __tmp(__s, __n2);
    return _M_replace_safe(__pos, __n1, __tmp._M_data(), __n2);
  }
     }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _M_destroy(const _Alloc& __a) throw ()
    {
      const size_type __size = sizeof(_Rep_base) +
                        (this->_M_capacity + 1) * sizeof(_CharT);
      _Raw_bytes_alloc(__a).deallocate(reinterpret_cast<char*>(this), __size);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_leak_hard()
    {

      if (_M_rep() == &_S_empty_rep())
 return;

      if (_M_rep()->_M_is_shared())
 _M_mutate(0, 0, 0);
      _M_rep()->_M_set_leaked();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_mutate(size_type __pos, size_type __len1, size_type __len2)
    {
      const size_type __old_size = this->size();
      const size_type __new_size = __old_size + __len2 - __len1;
      const size_type __how_much = __old_size - __pos - __len1;

      if (__new_size > this->capacity() || _M_rep()->_M_is_shared())
 {

   const allocator_type __a = get_allocator();
   _Rep* __r = _Rep::_S_create(__new_size, this->capacity(), __a);

   if (__pos)
     _M_copy(__r->_M_refdata(), _M_data(), __pos);
   if (__how_much)
     _M_copy(__r->_M_refdata() + __pos + __len2,
      _M_data() + __pos + __len1, __how_much);

   _M_rep()->_M_dispose(__a);
   _M_data(__r->_M_refdata());
 }
      else if (__how_much && __len1 != __len2)
 {

   _M_move(_M_data() + __pos + __len2,
    _M_data() + __pos + __len1, __how_much);
 }
      _M_rep()->_M_set_length_and_sharable(__new_size);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    reserve(size_type __res)
    {
      if (__res != this->capacity() || _M_rep()->_M_is_shared())
        {

   if (__res < this->size())
     __res = this->size();
   const allocator_type __a = get_allocator();
   _CharT* __tmp = _M_rep()->_M_clone(__a, __res - this->size());
   _M_rep()->_M_dispose(__a);
   _M_data(__tmp);
        }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    swap(basic_string& __s)
    {
      if (_M_rep()->_M_is_leaked())
 _M_rep()->_M_set_sharable();
      if (__s._M_rep()->_M_is_leaked())
 __s._M_rep()->_M_set_sharable();
      if (this->get_allocator() == __s.get_allocator())
 {
   _CharT* __tmp = _M_data();
   _M_data(__s._M_data());
   __s._M_data(__tmp);
 }

      else
 {
   const basic_string __tmp1(_M_ibegin(), _M_iend(),
        __s.get_allocator());
   const basic_string __tmp2(__s._M_ibegin(), __s._M_iend(),
        this->get_allocator());
   *this = __tmp2;
   __s = __tmp1;
 }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::_Rep*
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _S_create(size_type __capacity, size_type __old_capacity,
       const _Alloc& __alloc)
    {


      if (__capacity > _S_max_size)
 __throw_length_error(("basic_string::_S_create"));
# 577 "/usr/include/c++/4.4/bits/basic_string.tcc" 3
      const size_type __pagesize = 4096;
      const size_type __malloc_header_size = 4 * sizeof(void*);







      if (__capacity > __old_capacity && __capacity < 2 * __old_capacity)
 __capacity = 2 * __old_capacity;




      size_type __size = (__capacity + 1) * sizeof(_CharT) + sizeof(_Rep);

      const size_type __adj_size = __size + __malloc_header_size;
      if (__adj_size > __pagesize && __capacity > __old_capacity)
 {
   const size_type __extra = __pagesize - __adj_size % __pagesize;
   __capacity += __extra / sizeof(_CharT);

   if (__capacity > _S_max_size)
     __capacity = _S_max_size;
   __size = (__capacity + 1) * sizeof(_CharT) + sizeof(_Rep);
 }



      void* __place = _Raw_bytes_alloc(__alloc).allocate(__size);
      _Rep *__p = new (__place) _Rep;
      __p->_M_capacity = __capacity;







      __p->_M_set_sharable();
      return __p;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    _CharT*
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _M_clone(const _Alloc& __alloc, size_type __res)
    {

      const size_type __requested_cap = this->_M_length + __res;
      _Rep* __r = _Rep::_S_create(__requested_cap, this->_M_capacity,
      __alloc);
      if (this->_M_length)
 _M_copy(__r->_M_refdata(), _M_refdata(), this->_M_length);

      __r->_M_set_length_and_sharable(this->_M_length);
      return __r->_M_refdata();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    resize(size_type __n, _CharT __c)
    {
      const size_type __size = this->size();
      _M_check_length(__size, __n, "basic_string::resize");
      if (__size < __n)
 this->append(__n - __size, __c);
      else if (__n < __size)
 this->erase(__n);

    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
      basic_string<_CharT, _Traits, _Alloc>&
      basic_string<_CharT, _Traits, _Alloc>::
      _M_replace_dispatch(iterator __i1, iterator __i2, _InputIterator __k1,
     _InputIterator __k2, __false_type)
      {
 const basic_string __s(__k1, __k2);
 const size_type __n1 = __i2 - __i1;
 _M_check_length(__n1, __s.size(), "basic_string::_M_replace_dispatch");
 return _M_replace_safe(__i1 - _M_ibegin(), __n1, __s._M_data(),
          __s.size());
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
     _CharT __c)
    {
      _M_check_length(__n1, __n2, "basic_string::_M_replace_aux");
      _M_mutate(__pos1, __n1, __n2);
      if (__n2)
 _M_assign(_M_data() + __pos1, __n2, __c);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace_safe(size_type __pos1, size_type __n1, const _CharT* __s,
      size_type __n2)
    {
      _M_mutate(__pos1, __n1, __n2);
      if (__n2)
 _M_copy(_M_data() + __pos1, __s, __n2);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
                                      ;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      const __size_type __len = _Traits::length(__lhs);
      __string_type __str;
      __str.reserve(__len + __rhs.size());
      __str.append(__lhs, __len);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str;
      const __size_type __len = __rhs.size();
      __str.reserve(__len + 1);
      __str.append(__size_type(1), __lhs);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    copy(_CharT* __s, size_type __n, size_type __pos) const
    {
      _M_check(__pos, "basic_string::copy");
      __n = _M_limit(__pos, __n);
                                             ;
      if (__n)
 _M_copy(__s, _M_data() + __pos, __n);

      return __n;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      const size_type __size = this->size();
      const _CharT* __data = _M_data();

      if (__n == 0)
 return __pos <= __size ? __pos : npos;

      if (__n <= __size)
 {
   for (; __pos <= __size - __n; ++__pos)
     if (traits_type::eq(__data[__pos], __s[0])
  && traits_type::compare(__data + __pos + 1,
     __s + 1, __n - 1) == 0)
       return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(_CharT __c, size_type __pos) const
    {
      size_type __ret = npos;
      const size_type __size = this->size();
      if (__pos < __size)
 {
   const _CharT* __data = _M_data();
   const size_type __n = __size - __pos;
   const _CharT* __p = traits_type::find(__data + __pos, __n, __c);
   if (__p)
     __ret = __p - __data;
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      const size_type __size = this->size();
      if (__n <= __size)
 {
   __pos = std::min(size_type(__size - __n), __pos);
   const _CharT* __data = _M_data();
   do
     {
       if (traits_type::compare(__data + __pos, __s, __n) == 0)
  return __pos;
     }
   while (__pos-- > 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(_CharT __c, size_type __pos) const
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   for (++__size; __size-- > 0; )
     if (traits_type::eq(_M_data()[__size], __c))
       return __size;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      for (; __n && __pos < this->size(); ++__pos)
 {
   const _CharT* __p = traits_type::find(__s, __n, _M_data()[__pos]);
   if (__p)
     return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      size_type __size = this->size();
      if (__size && __n)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size-- != 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::find(__s, __n, _M_data()[__pos]))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(_CharT __c, size_type __pos) const
    {
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::eq(_M_data()[__pos], __c))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(_CharT __c, size_type __pos) const
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::eq(_M_data()[__size], __c))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n, const basic_string& __str) const
    {
      _M_check(__pos, "basic_string::compare");
      __n = _M_limit(__pos, __n);
      const size_type __osize = __str.size();
      const size_type __len = std::min(__n, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __str.data(), __len);
      if (!__r)
 __r = _S_compare(__n, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos1, size_type __n1, const basic_string& __str,
     size_type __pos2, size_type __n2) const
    {
      _M_check(__pos1, "basic_string::compare");
      __str._M_check(__pos2, "basic_string::compare");
      __n1 = _M_limit(__pos1, __n1);
      __n2 = __str._M_limit(__pos2, __n2);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos1,
         __str.data() + __pos2, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(const _CharT* __s) const
    {
                                    ;
      const size_type __size = this->size();
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__size, __osize);
      int __r = traits_type::compare(_M_data(), __s, __len);
      if (!__r)
 __r = _S_compare(__size, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s) const
    {
                                    ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__n1, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s,
     size_type __n2) const
    {
                                              ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in,
        basic_string<_CharT, _Traits, _Alloc>& __str)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;
      typedef ctype<_CharT> __ctype_type;
      typedef typename __ctype_type::ctype_base __ctype_base;

      __size_type __extracted = 0;
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   try
     {

       __str.erase();
       _CharT __buf[128];
       __size_type __len = 0;
       const streamsize __w = __in.width();
       const __size_type __n = __w > 0 ? static_cast<__size_type>(__w)
                                : __str.max_size();
       const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !__ct.is(__ctype_base::space,
     _Traits::to_char_type(__c)))
  {
    if (__len == sizeof(__buf) / sizeof(_CharT))
      {
        __str.append(__buf, sizeof(__buf) / sizeof(_CharT));
        __len = 0;
      }
    __buf[__len++] = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }
       __str.append(__buf, __len);

       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       __in.width(0);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __in._M_setstate(__ios_base::badbit);
       throw;
     }
   catch(...)
     {



       __in._M_setstate(__ios_base::badbit);
     }
 }

      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __in,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;

      __size_type __extracted = 0;
      const __size_type __n = __str.max_size();
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, true);
      if (__cerb)
 {
   try
     {
       __str.erase();
       const __int_type __idelim = _Traits::to_int_type(__delim);
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !_Traits::eq_int_type(__c, __idelim))
  {
    __str += _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }

       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       else if (_Traits::eq_int_type(__c, __idelim))
  {
    ++__extracted;
    __in.rdbuf()->sbumpc();
  }
       else
  __err |= __ios_base::failbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __in._M_setstate(__ios_base::badbit);
       throw;
     }
   catch(...)
     {



       __in._M_setstate(__ios_base::badbit);
     }
 }
      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }





  extern template class basic_string<char>;
  extern template
    basic_istream<char>&
    operator>>(basic_istream<char>&, string&);
  extern template
    basic_ostream<char>&
    operator<<(basic_ostream<char>&, const string&);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&, char);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&);


  extern template class basic_string<wchar_t>;
  extern template
    basic_istream<wchar_t>&
    operator>>(basic_istream<wchar_t>&, wstring&);
  extern template
    basic_ostream<wchar_t>&
    operator<<(basic_ostream<wchar_t>&, const wstring&);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&, wchar_t);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&);



}
# 56 "/usr/include/c++/4.4/string" 2 3
# 31 "../../common/unicode/std_string.h" 2
# 32 "../../common/unicode/unistr.h" 2
# 1 "../../common/unicode/stringpiece.h" 1
# 34 "../../common/unicode/stringpiece.h"
extern "C++" { namespace icu_52 {
# 52 "../../common/unicode/stringpiece.h"
class StringPiece : public UMemory {
 private:
  const char* ptr_;
  int32_t length_;

 public:




  StringPiece() : ptr_(__null), length_(0) { }





  StringPiece(const char* str);





  StringPiece(const std::string& str)
    : ptr_(str.data()), length_(static_cast<int32_t>(str.size())) { }







  StringPiece(const char* offset, int32_t len) : ptr_(offset), length_(len) { }






  StringPiece(const StringPiece& x, int32_t pos);
# 99 "../../common/unicode/stringpiece.h"
  StringPiece(const StringPiece& x, int32_t pos, int32_t len);
# 111 "../../common/unicode/stringpiece.h"
  const char* data() const { return ptr_; }





  int32_t size() const { return length_; }





  int32_t length() const { return length_; }





  UBool empty() const { return length_ == 0; }





  void clear() { ptr_ = __null; length_ = 0; }







  void set(const char* xdata, int32_t len) { ptr_ = xdata; length_ = len; }






  void set(const char* str);






  void remove_prefix(int32_t n) {
    if (n >= 0) {
      if (n > length_) {
        n = length_;
      }
      ptr_ += n;
      length_ -= n;
    }
  }






  void remove_suffix(int32_t n) {
    if (n >= 0) {
      if (n <= length_) {
        length_ -= n;
      } else {
        length_ = 0;
      }
    }
  }





  static const int32_t npos;
# 196 "../../common/unicode/stringpiece.h"
  StringPiece substr(int32_t pos, int32_t len = npos) const {
    return StringPiece(*this, pos, len);
  }
};
# 208 "../../common/unicode/stringpiece.h"
__attribute__((visibility("default"))) UBool
operator==(const StringPiece& x, const StringPiece& y);
# 218 "../../common/unicode/stringpiece.h"
inline UBool operator!=(const StringPiece& x, const StringPiece& y) {
  return !(x == y);
}

} }
# 33 "../../common/unicode/unistr.h" 2
# 1 "../../common/unicode/bytestream.h" 1
# 42 "../../common/unicode/bytestream.h"
extern "C++" { namespace icu_52 {





class ByteSink : public UMemory {
public:




  ByteSink() { }




  virtual ~ByteSink();







  virtual void Append(const char* bytes, int32_t n) = 0;
# 111 "../../common/unicode/bytestream.h"
  virtual char* GetAppendBuffer(int32_t min_capacity,
                                int32_t desired_capacity_hint,
                                char* scratch, int32_t scratch_capacity,
                                int32_t* result_capacity);
# 124 "../../common/unicode/bytestream.h"
  virtual void Flush();

private:
  ByteSink(const ByteSink &);
  ByteSink &operator=(const ByteSink &);
};
# 143 "../../common/unicode/bytestream.h"
class CheckedArrayByteSink : public ByteSink {
public:






  CheckedArrayByteSink(char* outbuf, int32_t capacity);




  virtual ~CheckedArrayByteSink();
# 165 "../../common/unicode/bytestream.h"
  virtual CheckedArrayByteSink& Reset();






  virtual void Append(const char* bytes, int32_t n);
# 187 "../../common/unicode/bytestream.h"
  virtual char* GetAppendBuffer(int32_t min_capacity,
                                int32_t desired_capacity_hint,
                                char* scratch, int32_t scratch_capacity,
                                int32_t* result_capacity);





  int32_t NumberOfBytesWritten() const { return size_; }






  UBool Overflowed() const { return overflowed_; }







  int32_t NumberOfBytesAppended() const { return appended_; }
private:
  char* outbuf_;
  const int32_t capacity_;
  int32_t size_;
  int32_t appended_;
  UBool overflowed_;
  CheckedArrayByteSink();
  CheckedArrayByteSink(const CheckedArrayByteSink &);
  CheckedArrayByteSink &operator=(const CheckedArrayByteSink &);
};
# 230 "../../common/unicode/bytestream.h"
template<typename StringClass>
class StringByteSink : public ByteSink {
 public:





  StringByteSink(StringClass* dest) : dest_(dest) { }






  virtual void Append(const char* data, int32_t n) { dest_->append(data, n); }
 private:
  StringClass* dest_;
  StringByteSink();
  StringByteSink(const StringByteSink &);
  StringByteSink &operator=(const StringByteSink &);
};



} }
# 34 "../../common/unicode/unistr.h" 2
# 1 "../../common/unicode/ucasemap.h" 1
# 23 "../../common/unicode/ucasemap.h"
# 1 "../../common/unicode/ustring.h" 1
# 20 "../../common/unicode/ustring.h"
# 1 "../../common/unicode/putil.h" 1
# 67 "../../common/unicode/putil.h"
extern "C" __attribute__((visibility("default"))) const char* u_getDataDirectory_52(void);
# 88 "../../common/unicode/putil.h"
extern "C" __attribute__((visibility("default"))) void u_setDataDirectory_52(const char *directory);
# 139 "../../common/unicode/putil.h"
extern "C" __attribute__((visibility("default"))) void
u_charsToUChars_52(const char *cs, UChar *us, int32_t length);
# 161 "../../common/unicode/putil.h"
extern "C" __attribute__((visibility("default"))) void
u_UCharsToChars_52(const UChar *us, char *cs, int32_t length);
# 21 "../../common/unicode/ustring.h" 2
# 1 "../../common/unicode/uiter.h" 1
# 30 "../../common/unicode/uiter.h"
    extern "C++" { namespace icu_52 {

    class CharacterIterator;
    class Replaceable;

    } }


extern "C" {

struct UCharIterator;
typedef struct UCharIterator UCharIterator;







typedef enum UCharIteratorOrigin {
    UITER_START, UITER_CURRENT, UITER_LIMIT, UITER_ZERO, UITER_LENGTH
} UCharIteratorOrigin;


enum {
# 69 "../../common/unicode/uiter.h"
    UITER_UNKNOWN_INDEX=-2
};
# 104 "../../common/unicode/uiter.h"
typedef int32_t
UCharIteratorGetIndex(UCharIterator *iter, UCharIteratorOrigin origin);
# 141 "../../common/unicode/uiter.h"
typedef int32_t
UCharIteratorMove(UCharIterator *iter, int32_t delta, UCharIteratorOrigin origin);
# 156 "../../common/unicode/uiter.h"
typedef UBool
UCharIteratorHasNext(UCharIterator *iter);
# 170 "../../common/unicode/uiter.h"
typedef UBool
UCharIteratorHasPrevious(UCharIterator *iter);
# 185 "../../common/unicode/uiter.h"
typedef UChar32
UCharIteratorCurrent(UCharIterator *iter);
# 201 "../../common/unicode/uiter.h"
typedef UChar32
UCharIteratorNext(UCharIterator *iter);
# 217 "../../common/unicode/uiter.h"
typedef UChar32
UCharIteratorPrevious(UCharIterator *iter);
# 231 "../../common/unicode/uiter.h"
typedef int32_t
UCharIteratorReserved(UCharIterator *iter, int32_t something);
# 278 "../../common/unicode/uiter.h"
typedef uint32_t
UCharIteratorGetState(const UCharIterator *iter);
# 306 "../../common/unicode/uiter.h"
typedef void
UCharIteratorSetState(UCharIterator *iter, uint32_t state, UErrorCode *pErrorCode);
# 339 "../../common/unicode/uiter.h"
struct UCharIterator {





    const void *context;






    int32_t length;






    int32_t start;






    int32_t index;






    int32_t limit;





    int32_t reservedField;
# 388 "../../common/unicode/uiter.h"
    UCharIteratorGetIndex *getIndex;
# 399 "../../common/unicode/uiter.h"
    UCharIteratorMove *move;
# 408 "../../common/unicode/uiter.h"
    UCharIteratorHasNext *hasNext;







    UCharIteratorHasPrevious *hasPrevious;
# 425 "../../common/unicode/uiter.h"
    UCharIteratorCurrent *current;
# 435 "../../common/unicode/uiter.h"
    UCharIteratorNext *next;
# 445 "../../common/unicode/uiter.h"
    UCharIteratorPrevious *previous;







    UCharIteratorReserved *reservedFn;
# 462 "../../common/unicode/uiter.h"
    UCharIteratorGetState *getState;
# 472 "../../common/unicode/uiter.h"
    UCharIteratorSetState *setState;
};
# 493 "../../common/unicode/uiter.h"
extern "C" __attribute__((visibility("default"))) UChar32
uiter_current32_52(UCharIterator *iter);
# 510 "../../common/unicode/uiter.h"
extern "C" __attribute__((visibility("default"))) UChar32
uiter_next32_52(UCharIterator *iter);
# 527 "../../common/unicode/uiter.h"
extern "C" __attribute__((visibility("default"))) UChar32
uiter_previous32_52(UCharIterator *iter);
# 548 "../../common/unicode/uiter.h"
extern "C" __attribute__((visibility("default"))) uint32_t
uiter_getState_52(const UCharIterator *iter);
# 566 "../../common/unicode/uiter.h"
extern "C" __attribute__((visibility("default"))) void
uiter_setState_52(UCharIterator *iter, uint32_t state, UErrorCode *pErrorCode);
# 591 "../../common/unicode/uiter.h"
extern "C" __attribute__((visibility("default"))) void
uiter_setString_52(UCharIterator *iter, const UChar *s, int32_t length);
# 614 "../../common/unicode/uiter.h"
extern "C" __attribute__((visibility("default"))) void
uiter_setUTF16BE_52(UCharIterator *iter, const char *s, int32_t length);
# 650 "../../common/unicode/uiter.h"
extern "C" __attribute__((visibility("default"))) void
uiter_setUTF8_52(UCharIterator *iter, const char *s, int32_t length);
# 675 "../../common/unicode/uiter.h"
extern "C" __attribute__((visibility("default"))) void
uiter_setCharacterIterator_52(UCharIterator *iter, icu::CharacterIterator *charIter);
# 700 "../../common/unicode/uiter.h"
extern "C" __attribute__((visibility("default"))) void
uiter_setReplaceable_52(UCharIterator *iter, const icu::Replaceable *rep);



}
# 22 "../../common/unicode/ustring.h" 2
# 31 "../../common/unicode/ustring.h"
    typedef struct UBreakIterator UBreakIterator;
# 90 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_strlen_52(const UChar *s);
# 107 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_countChar32_52(const UChar *s, int32_t length);
# 128 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UBool
u_strHasMoreChar32Than_52(const UChar *s, int32_t length, int32_t number);
# 141 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar*
u_strcat_52(UChar *dst,
    const UChar *src);
# 159 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar*
u_strncat_52(UChar *dst,
     const UChar *src,
     int32_t n);
# 184 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar *
u_strstr_52(const UChar *s, const UChar *substring);
# 208 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar *
u_strFindFirst_52(const UChar *s, int32_t length, const UChar *substring, int32_t subLength);
# 228 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar *
u_strchr_52(const UChar *s, UChar c);
# 248 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar *
u_strchr32_52(const UChar *s, UChar32 c);
# 271 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar *
u_strrstr_52(const UChar *s, const UChar *substring);
# 295 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar *
u_strFindLast_52(const UChar *s, int32_t length, const UChar *substring, int32_t subLength);
# 315 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar *
u_strrchr_52(const UChar *s, UChar c);
# 335 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar *
u_strrchr32_52(const UChar *s, UChar32 c);
# 350 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar *
u_strpbrk_52(const UChar *string, const UChar *matchSet);
# 366 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_strcspn_52(const UChar *string, const UChar *matchSet);
# 382 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_strspn_52(const UChar *string, const UChar *matchSet);
# 410 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar *
u_strtok_r_52(UChar *src,
     const UChar *delim,
           UChar **saveState);
# 425 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_strcmp_52(const UChar *s1,
         const UChar *s2);
# 440 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_strcmpCodePointOrder_52(const UChar *s1, const UChar *s2);
# 470 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_strCompare_52(const UChar *s1, int32_t length1,
             const UChar *s2, int32_t length2,
             UBool codePointOrder);
# 495 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_strCompareIter_52(UCharIterator *iter1, UCharIterator *iter2, UBool codePointOrder);
# 548 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_strCaseCompare_52(const UChar *s1, int32_t length1,
                 const UChar *s2, int32_t length2,
                 uint32_t options,
                 UErrorCode *pErrorCode);
# 566 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_strncmp_52(const UChar *ucs1,
     const UChar *ucs2,
     int32_t n);
# 584 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_strncmpCodePointOrder_52(const UChar *s1, const UChar *s2, int32_t n);
# 606 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_strcasecmp_52(const UChar *s1, const UChar *s2, uint32_t options);
# 630 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_strncasecmp_52(const UChar *s1, const UChar *s2, int32_t n, uint32_t options);
# 654 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_memcasecmp_52(const UChar *s1, const UChar *s2, int32_t length, uint32_t options);
# 665 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar*
u_strcpy_52(UChar *dst,
    const UChar *src);
# 680 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar*
u_strncpy_52(UChar *dst,
     const UChar *src,
     int32_t n);
# 697 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar* u_uastrcpy_52(UChar *dst,
               const char *src );
# 712 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar* u_uastrncpy_52(UChar *dst,
            const char *src,
            int32_t n);
# 726 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) char* u_austrcpy_52(char *dst,
            const UChar *src );
# 741 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) char* u_austrncpy_52(char *dst,
            const UChar *src,
            int32_t n );
# 755 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar*
u_memcpy_52(UChar *dest, const UChar *src, int32_t count);
# 766 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar*
u_memmove_52(UChar *dest, const UChar *src, int32_t count);
# 778 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar*
u_memset_52(UChar *dest, UChar c, int32_t count);
# 792 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_memcmp_52(const UChar *buf1, const UChar *buf2, int32_t count);
# 808 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_memcmpCodePointOrder_52(const UChar *s1, const UChar *s2, int32_t count);
# 828 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar*
u_memchr_52(const UChar *s, UChar c, int32_t count);
# 848 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar*
u_memchr32_52(const UChar *s, UChar32 c, int32_t count);
# 868 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar*
u_memrchr_52(const UChar *s, UChar c, int32_t count);
# 888 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar*
u_memrchr32_52(const UChar *s, UChar32 c, int32_t count);
# 1006 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_unescape_52(const char *src,
           UChar *dest, int32_t destCapacity);

extern "C" {
# 1023 "../../common/unicode/ustring.h"
typedef UChar ( *UNESCAPE_CHAR_AT)(int32_t offset, void *context);
}
# 1054 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar32
u_unescapeAt_52(UNESCAPE_CHAR_AT charAt,
             int32_t *offset,
             int32_t length,
             void *context);
# 1080 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_strToUpper_52(UChar *dest, int32_t destCapacity,
             const UChar *src, int32_t srcLength,
             const char *locale,
             UErrorCode *pErrorCode);
# 1106 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_strToLower_52(UChar *dest, int32_t destCapacity,
             const UChar *src, int32_t srcLength,
             const char *locale,
             UErrorCode *pErrorCode);
# 1152 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_strToTitle_52(UChar *dest, int32_t destCapacity,
             const UChar *src, int32_t srcLength,
             UBreakIterator *titleIter,
             const char *locale,
             UErrorCode *pErrorCode);
# 1185 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_strFoldCase_52(UChar *dest, int32_t destCapacity,
              const UChar *src, int32_t srcLength,
              uint32_t options,
              UErrorCode *pErrorCode);
# 1214 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) wchar_t*
u_strToWCS_52(wchar_t *dest,
           int32_t destCapacity,
           int32_t *pDestLength,
           const UChar *src,
           int32_t srcLength,
           UErrorCode *pErrorCode);
# 1243 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar*
u_strFromWCS_52(UChar *dest,
             int32_t destCapacity,
             int32_t *pDestLength,
             const wchar_t *src,
             int32_t srcLength,
             UErrorCode *pErrorCode);
# 1274 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) char*
u_strToUTF8_52(char *dest,
            int32_t destCapacity,
            int32_t *pDestLength,
            const UChar *src,
            int32_t srcLength,
            UErrorCode *pErrorCode);
# 1304 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar*
u_strFromUTF8_52(UChar *dest,
              int32_t destCapacity,
              int32_t *pDestLength,
              const char *src,
              int32_t srcLength,
              UErrorCode *pErrorCode);
# 1348 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) char*
u_strToUTF8WithSub_52(char *dest,
            int32_t destCapacity,
            int32_t *pDestLength,
            const UChar *src,
            int32_t srcLength,
            UChar32 subchar, int32_t *pNumSubstitutions,
            UErrorCode *pErrorCode);
# 1394 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar*
u_strFromUTF8WithSub_52(UChar *dest,
              int32_t destCapacity,
              int32_t *pDestLength,
              const char *src,
              int32_t srcLength,
              UChar32 subchar, int32_t *pNumSubstitutions,
              UErrorCode *pErrorCode);
# 1454 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar *
u_strFromUTF8Lenient_52(UChar *dest,
                     int32_t destCapacity,
                     int32_t *pDestLength,
                     const char *src,
                     int32_t srcLength,
                     UErrorCode *pErrorCode);
# 1484 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar32*
u_strToUTF32_52(UChar32 *dest,
             int32_t destCapacity,
             int32_t *pDestLength,
             const UChar *src,
             int32_t srcLength,
             UErrorCode *pErrorCode);
# 1514 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar*
u_strFromUTF32_52(UChar *dest,
               int32_t destCapacity,
               int32_t *pDestLength,
               const UChar32 *src,
               int32_t srcLength,
               UErrorCode *pErrorCode);
# 1558 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar32*
u_strToUTF32WithSub_52(UChar32 *dest,
             int32_t destCapacity,
             int32_t *pDestLength,
             const UChar *src,
             int32_t srcLength,
             UChar32 subchar, int32_t *pNumSubstitutions,
             UErrorCode *pErrorCode);
# 1603 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar*
u_strFromUTF32WithSub_52(UChar *dest,
               int32_t destCapacity,
               int32_t *pDestLength,
               const UChar32 *src,
               int32_t srcLength,
               UChar32 subchar, int32_t *pNumSubstitutions,
               UErrorCode *pErrorCode);
# 1644 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) char*
u_strToJavaModifiedUTF8_52(
        char *dest,
        int32_t destCapacity,
        int32_t *pDestLength,
        const UChar *src,
        int32_t srcLength,
        UErrorCode *pErrorCode);
# 1693 "../../common/unicode/ustring.h"
extern "C" __attribute__((visibility("default"))) UChar*
u_strFromJavaModifiedUTF8WithSub_52(
        UChar *dest,
        int32_t destCapacity,
        int32_t *pDestLength,
        const char *src,
        int32_t srcLength,
        UChar32 subchar, int32_t *pNumSubstitutions,
        UErrorCode *pErrorCode);
# 24 "../../common/unicode/ucasemap.h" 2
# 1 "../../common/unicode/localpointer.h" 1
# 43 "../../common/unicode/localpointer.h"
extern "C++" { namespace icu_52 {
# 63 "../../common/unicode/localpointer.h"
template<typename T>
class LocalPointerBase {
public:





    explicit LocalPointerBase(T *p=__null) : ptr(p) {}





    ~LocalPointerBase() { }





    UBool isNull() const { return ptr==__null; }





    UBool isValid() const { return ptr!=__null; }







    bool operator==(const T *other) const { return ptr==other; }







    bool operator!=(const T *other) const { return ptr!=other; }





    T *getAlias() const { return ptr; }





    T &operator*() const { return *ptr; }





    T *operator->() const { return ptr; }






    T *orphan() {
        T *p=ptr;
        ptr=__null;
        return p;
    }







    void adoptInstead(T *p) {

        ptr=p;
    }
protected:




    T *ptr;
private:

    bool operator==(const LocalPointerBase &other);
    bool operator!=(const LocalPointerBase &other);

    LocalPointerBase(const LocalPointerBase &other);
    void operator=(const LocalPointerBase &other);

    static void * operator new(size_t size);
    static void * operator new[](size_t size);

    static void * operator new(size_t, void *ptr);

};
# 185 "../../common/unicode/localpointer.h"
template<typename T>
class LocalPointer : public LocalPointerBase<T> {
public:





    explicit LocalPointer(T *p=__null) : LocalPointerBase<T>(p) {}




    ~LocalPointer() {
        delete LocalPointerBase<T>::ptr;
    }






    void adoptInstead(T *p) {
        delete LocalPointerBase<T>::ptr;
        LocalPointerBase<T>::ptr=p;
    }
};
# 231 "../../common/unicode/localpointer.h"
template<typename T>
class LocalArray : public LocalPointerBase<T> {
public:





    explicit LocalArray(T *p=__null) : LocalPointerBase<T>(p) {}




    ~LocalArray() {
        delete[] LocalPointerBase<T>::ptr;
    }






    void adoptInstead(T *p) {
        delete[] LocalPointerBase<T>::ptr;
        LocalPointerBase<T>::ptr=p;
    }







    T &operator[](ptrdiff_t i) const { return LocalPointerBase<T>::ptr[i]; }
};
# 301 "../../common/unicode/localpointer.h"
} }
# 25 "../../common/unicode/ucasemap.h" 2
# 44 "../../common/unicode/ucasemap.h"
struct UCaseMap;
typedef struct UCaseMap UCaseMap;
# 69 "../../common/unicode/ucasemap.h"
extern "C" __attribute__((visibility("default"))) UCaseMap *
ucasemap_open_52(const char *locale, uint32_t options, UErrorCode *pErrorCode);






extern "C" __attribute__((visibility("default"))) void
ucasemap_close_52(UCaseMap *csm);



extern "C++" { namespace icu_52 {
# 93 "../../common/unicode/ucasemap.h"
class LocalUCaseMapPointer : public LocalPointerBase<UCaseMap> { public: explicit LocalUCaseMapPointer(UCaseMap *p=__null) : LocalPointerBase<UCaseMap>(p) {} ~LocalUCaseMapPointer() { ucasemap_close_52(ptr); } void adoptInstead(UCaseMap *p) { ucasemap_close_52(ptr); ptr=p; } };

} }
# 105 "../../common/unicode/ucasemap.h"
extern "C" __attribute__((visibility("default"))) const char *
ucasemap_getLocale_52(const UCaseMap *csm);







extern "C" __attribute__((visibility("default"))) uint32_t
ucasemap_getOptions_52(const UCaseMap *csm);
# 128 "../../common/unicode/ucasemap.h"
extern "C" __attribute__((visibility("default"))) void
ucasemap_setLocale_52(UCaseMap *csm, const char *locale, UErrorCode *pErrorCode);
# 142 "../../common/unicode/ucasemap.h"
extern "C" __attribute__((visibility("default"))) void
ucasemap_setOptions_52(UCaseMap *csm, uint32_t options, UErrorCode *pErrorCode);
# 195 "../../common/unicode/ucasemap.h"
extern "C" __attribute__((visibility("default"))) const UBreakIterator *
ucasemap_getBreakIterator_52(const UCaseMap *csm);
# 218 "../../common/unicode/ucasemap.h"
extern "C" __attribute__((visibility("default"))) void
ucasemap_setBreakIterator_52(UCaseMap *csm, UBreakIterator *iterToAdopt, UErrorCode *pErrorCode);
# 267 "../../common/unicode/ucasemap.h"
extern "C" __attribute__((visibility("default"))) int32_t
ucasemap_toTitle_52(UCaseMap *csm,
                 UChar *dest, int32_t destCapacity,
                 const UChar *src, int32_t srcLength,
                 UErrorCode *pErrorCode);
# 298 "../../common/unicode/ucasemap.h"
extern "C" __attribute__((visibility("default"))) int32_t
ucasemap_utf8ToLower_52(const UCaseMap *csm,
                     char *dest, int32_t destCapacity,
                     const char *src, int32_t srcLength,
                     UErrorCode *pErrorCode);
# 327 "../../common/unicode/ucasemap.h"
extern "C" __attribute__((visibility("default"))) int32_t
ucasemap_utf8ToUpper_52(const UCaseMap *csm,
                     char *dest, int32_t destCapacity,
                     const char *src, int32_t srcLength,
                     UErrorCode *pErrorCode);
# 379 "../../common/unicode/ucasemap.h"
extern "C" __attribute__((visibility("default"))) int32_t
ucasemap_utf8ToTitle_52(UCaseMap *csm,
                    char *dest, int32_t destCapacity,
                    const char *src, int32_t srcLength,
                    UErrorCode *pErrorCode);
# 417 "../../common/unicode/ucasemap.h"
extern "C" __attribute__((visibility("default"))) int32_t
ucasemap_utf8FoldCase_52(const UCaseMap *csm,
                      char *dest, int32_t destCapacity,
                      const char *src, int32_t srcLength,
                      UErrorCode *pErrorCode);
# 35 "../../common/unicode/unistr.h" 2

struct UConverter;
class StringThreadTest;
# 68 "../../common/unicode/unistr.h"
typedef int32_t
UStringCaseMapper(const UCaseMap *csm,
                  UChar *dest, int32_t destCapacity,
                  const UChar *src, int32_t srcLength,
                  UErrorCode *pErrorCode);



extern "C++" { namespace icu_52 {

class BreakIterator;
class Locale;
class StringCharacterIterator;
class UnicodeStringAppendable;
# 245 "../../common/unicode/unistr.h"
class UnicodeString : public Replaceable
{
public:
# 257 "../../common/unicode/unistr.h"
  enum EInvariant {




    kInvariant
  };
# 278 "../../common/unicode/unistr.h"
  inline UBool operator== (const UnicodeString& text) const;
# 287 "../../common/unicode/unistr.h"
  inline UBool operator!= (const UnicodeString& text) const;
# 296 "../../common/unicode/unistr.h"
  inline UBool operator> (const UnicodeString& text) const;
# 305 "../../common/unicode/unistr.h"
  inline UBool operator< (const UnicodeString& text) const;
# 314 "../../common/unicode/unistr.h"
  inline UBool operator>= (const UnicodeString& text) const;
# 323 "../../common/unicode/unistr.h"
  inline UBool operator<= (const UnicodeString& text) const;
# 336 "../../common/unicode/unistr.h"
  inline int8_t compare(const UnicodeString& text) const;
# 353 "../../common/unicode/unistr.h"
  inline int8_t compare(int32_t start,
         int32_t length,
         const UnicodeString& text) const;
# 374 "../../common/unicode/unistr.h"
   inline int8_t compare(int32_t start,
         int32_t length,
         const UnicodeString& srcText,
         int32_t srcStart,
         int32_t srcLength) const;
# 392 "../../common/unicode/unistr.h"
  inline int8_t compare(const UChar *srcChars,
         int32_t srcLength) const;
# 409 "../../common/unicode/unistr.h"
  inline int8_t compare(int32_t start,
         int32_t length,
         const UChar *srcChars) const;
# 430 "../../common/unicode/unistr.h"
  inline int8_t compare(int32_t start,
         int32_t length,
         const UChar *srcChars,
         int32_t srcStart,
         int32_t srcLength) const;
# 453 "../../common/unicode/unistr.h"
  inline int8_t compareBetween(int32_t start,
            int32_t limit,
            const UnicodeString& srcText,
            int32_t srcStart,
            int32_t srcLimit) const;
# 476 "../../common/unicode/unistr.h"
  inline int8_t compareCodePointOrder(const UnicodeString& text) const;
# 497 "../../common/unicode/unistr.h"
  inline int8_t compareCodePointOrder(int32_t start,
                                      int32_t length,
                                      const UnicodeString& srcText) const;
# 522 "../../common/unicode/unistr.h"
   inline int8_t compareCodePointOrder(int32_t start,
                                       int32_t length,
                                       const UnicodeString& srcText,
                                       int32_t srcStart,
                                       int32_t srcLength) const;
# 546 "../../common/unicode/unistr.h"
  inline int8_t compareCodePointOrder(const UChar *srcChars,
                                      int32_t srcLength) const;
# 568 "../../common/unicode/unistr.h"
  inline int8_t compareCodePointOrder(int32_t start,
                                      int32_t length,
                                      const UChar *srcChars) const;
# 593 "../../common/unicode/unistr.h"
  inline int8_t compareCodePointOrder(int32_t start,
                                      int32_t length,
                                      const UChar *srcChars,
                                      int32_t srcStart,
                                      int32_t srcLength) const;
# 620 "../../common/unicode/unistr.h"
  inline int8_t compareCodePointOrderBetween(int32_t start,
                                             int32_t limit,
                                             const UnicodeString& srcText,
                                             int32_t srcStart,
                                             int32_t srcLimit) const;
# 644 "../../common/unicode/unistr.h"
  inline int8_t caseCompare(const UnicodeString& text, uint32_t options) const;
# 666 "../../common/unicode/unistr.h"
  inline int8_t caseCompare(int32_t start,
         int32_t length,
         const UnicodeString& srcText,
         uint32_t options) const;
# 693 "../../common/unicode/unistr.h"
  inline int8_t caseCompare(int32_t start,
         int32_t length,
         const UnicodeString& srcText,
         int32_t srcStart,
         int32_t srcLength,
         uint32_t options) const;
# 719 "../../common/unicode/unistr.h"
  inline int8_t caseCompare(const UChar *srcChars,
         int32_t srcLength,
         uint32_t options) const;
# 743 "../../common/unicode/unistr.h"
  inline int8_t caseCompare(int32_t start,
         int32_t length,
         const UChar *srcChars,
         uint32_t options) const;
# 770 "../../common/unicode/unistr.h"
  inline int8_t caseCompare(int32_t start,
         int32_t length,
         const UChar *srcChars,
         int32_t srcStart,
         int32_t srcLength,
         uint32_t options) const;
# 799 "../../common/unicode/unistr.h"
  inline int8_t caseCompareBetween(int32_t start,
            int32_t limit,
            const UnicodeString& srcText,
            int32_t srcStart,
            int32_t srcLimit,
            uint32_t options) const;
# 813 "../../common/unicode/unistr.h"
  inline UBool startsWith(const UnicodeString& text) const;
# 825 "../../common/unicode/unistr.h"
  inline UBool startsWith(const UnicodeString& srcText,
            int32_t srcStart,
            int32_t srcLength) const;
# 837 "../../common/unicode/unistr.h"
  inline UBool startsWith(const UChar *srcChars,
            int32_t srcLength) const;
# 849 "../../common/unicode/unistr.h"
  inline UBool startsWith(const UChar *srcChars,
            int32_t srcStart,
            int32_t srcLength) const;
# 860 "../../common/unicode/unistr.h"
  inline UBool endsWith(const UnicodeString& text) const;
# 872 "../../common/unicode/unistr.h"
  inline UBool endsWith(const UnicodeString& srcText,
          int32_t srcStart,
          int32_t srcLength) const;
# 884 "../../common/unicode/unistr.h"
  inline UBool endsWith(const UChar *srcChars,
          int32_t srcLength) const;
# 897 "../../common/unicode/unistr.h"
  inline UBool endsWith(const UChar *srcChars,
          int32_t srcStart,
          int32_t srcLength) const;
# 912 "../../common/unicode/unistr.h"
  inline int32_t indexOf(const UnicodeString& text) const;
# 923 "../../common/unicode/unistr.h"
  inline int32_t indexOf(const UnicodeString& text,
              int32_t start) const;
# 937 "../../common/unicode/unistr.h"
  inline int32_t indexOf(const UnicodeString& text,
              int32_t start,
              int32_t length) const;
# 957 "../../common/unicode/unistr.h"
  inline int32_t indexOf(const UnicodeString& srcText,
              int32_t srcStart,
              int32_t srcLength,
              int32_t start,
              int32_t length) const;
# 974 "../../common/unicode/unistr.h"
  inline int32_t indexOf(const UChar *srcChars,
              int32_t srcLength,
              int32_t start) const;
# 990 "../../common/unicode/unistr.h"
  inline int32_t indexOf(const UChar *srcChars,
              int32_t srcLength,
              int32_t start,
              int32_t length) const;
# 1011 "../../common/unicode/unistr.h"
  int32_t indexOf(const UChar *srcChars,
              int32_t srcStart,
              int32_t srcLength,
              int32_t start,
              int32_t length) const;
# 1024 "../../common/unicode/unistr.h"
  inline int32_t indexOf(UChar c) const;
# 1034 "../../common/unicode/unistr.h"
  inline int32_t indexOf(UChar32 c) const;
# 1044 "../../common/unicode/unistr.h"
  inline int32_t indexOf(UChar c,
              int32_t start) const;
# 1056 "../../common/unicode/unistr.h"
  inline int32_t indexOf(UChar32 c,
              int32_t start) const;
# 1069 "../../common/unicode/unistr.h"
  inline int32_t indexOf(UChar c,
              int32_t start,
              int32_t length) const;
# 1084 "../../common/unicode/unistr.h"
  inline int32_t indexOf(UChar32 c,
              int32_t start,
              int32_t length) const;
# 1096 "../../common/unicode/unistr.h"
  inline int32_t lastIndexOf(const UnicodeString& text) const;
# 1107 "../../common/unicode/unistr.h"
  inline int32_t lastIndexOf(const UnicodeString& text,
              int32_t start) const;
# 1121 "../../common/unicode/unistr.h"
  inline int32_t lastIndexOf(const UnicodeString& text,
              int32_t start,
              int32_t length) const;
# 1141 "../../common/unicode/unistr.h"
  inline int32_t lastIndexOf(const UnicodeString& srcText,
              int32_t srcStart,
              int32_t srcLength,
              int32_t start,
              int32_t length) const;
# 1157 "../../common/unicode/unistr.h"
  inline int32_t lastIndexOf(const UChar *srcChars,
              int32_t srcLength,
              int32_t start) const;
# 1173 "../../common/unicode/unistr.h"
  inline int32_t lastIndexOf(const UChar *srcChars,
              int32_t srcLength,
              int32_t start,
              int32_t length) const;
# 1194 "../../common/unicode/unistr.h"
  int32_t lastIndexOf(const UChar *srcChars,
              int32_t srcStart,
              int32_t srcLength,
              int32_t start,
              int32_t length) const;
# 1207 "../../common/unicode/unistr.h"
  inline int32_t lastIndexOf(UChar c) const;
# 1217 "../../common/unicode/unistr.h"
  inline int32_t lastIndexOf(UChar32 c) const;
# 1227 "../../common/unicode/unistr.h"
  inline int32_t lastIndexOf(UChar c,
              int32_t start) const;
# 1239 "../../common/unicode/unistr.h"
  inline int32_t lastIndexOf(UChar32 c,
              int32_t start) const;
# 1252 "../../common/unicode/unistr.h"
  inline int32_t lastIndexOf(UChar c,
              int32_t start,
              int32_t length) const;
# 1267 "../../common/unicode/unistr.h"
  inline int32_t lastIndexOf(UChar32 c,
              int32_t start,
              int32_t length) const;
# 1282 "../../common/unicode/unistr.h"
  inline UChar charAt(int32_t offset) const;
# 1291 "../../common/unicode/unistr.h"
  inline UChar operator[] (int32_t offset) const;
# 1304 "../../common/unicode/unistr.h"
  UChar32 char32At(int32_t offset) const;
# 1321 "../../common/unicode/unistr.h"
  int32_t getChar32Start(int32_t offset) const;
# 1339 "../../common/unicode/unistr.h"
  int32_t getChar32Limit(int32_t offset) const;
# 1391 "../../common/unicode/unistr.h"
  int32_t moveIndex32(int32_t index, int32_t delta) const;
# 1410 "../../common/unicode/unistr.h"
  inline void extract(int32_t start,
           int32_t length,
           UChar *dst,
           int32_t dstStart = 0) const;
# 1436 "../../common/unicode/unistr.h"
  int32_t
  extract(UChar *dest, int32_t destCapacity,
          UErrorCode &errorCode) const;
# 1450 "../../common/unicode/unistr.h"
  inline void extract(int32_t start,
           int32_t length,
           UnicodeString& target) const;
# 1465 "../../common/unicode/unistr.h"
  inline void extractBetween(int32_t start,
              int32_t limit,
              UChar *dst,
              int32_t dstStart = 0) const;
# 1479 "../../common/unicode/unistr.h"
  virtual void extractBetween(int32_t start,
              int32_t limit,
              UnicodeString& target) const;
# 1504 "../../common/unicode/unistr.h"
  int32_t extract(int32_t start,
           int32_t startLength,
           char *target,
           int32_t targetCapacity,
           enum EInvariant inv) const;
# 1531 "../../common/unicode/unistr.h"
  int32_t extract(int32_t start,
           int32_t startLength,
           char *target,
           uint32_t targetLength) const;
# 1565 "../../common/unicode/unistr.h"
  inline int32_t extract(int32_t start,
                 int32_t startLength,
                 char *target,
                 const char *codepage = 0) const;
# 1599 "../../common/unicode/unistr.h"
  int32_t extract(int32_t start,
           int32_t startLength,
           char *target,
           uint32_t targetLength,
           const char *codepage) const;
# 1622 "../../common/unicode/unistr.h"
  int32_t extract(char *dest, int32_t destCapacity,
                  UConverter *cnv,
                  UErrorCode &errorCode) const;
# 1641 "../../common/unicode/unistr.h"
  UnicodeString tempSubString(int32_t start=0, int32_t length=(2147483647)) const;
# 1653 "../../common/unicode/unistr.h"
  inline UnicodeString tempSubStringBetween(int32_t start, int32_t limit=(2147483647)) const;
# 1666 "../../common/unicode/unistr.h"
  void toUTF8(ByteSink &sink) const;
# 1682 "../../common/unicode/unistr.h"
  template<typename StringClass>
  StringClass &toUTF8String(StringClass &result) const {
    StringByteSink<StringClass> sbs(&result);
    toUTF8(sbs);
    return result;
  }
# 1706 "../../common/unicode/unistr.h"
  int32_t toUTF32(UChar32 *utf32, int32_t capacity, UErrorCode &errorCode) const;
# 1718 "../../common/unicode/unistr.h"
  inline int32_t length(void) const;
# 1733 "../../common/unicode/unistr.h"
  int32_t
  countChar32(int32_t start=0, int32_t length=(2147483647)) const;
# 1759 "../../common/unicode/unistr.h"
  UBool
  hasMoreChar32Than(int32_t start, int32_t length, int32_t number) const;






  inline UBool isEmpty(void) const;
# 1778 "../../common/unicode/unistr.h"
  inline int32_t getCapacity(void) const;
# 1787 "../../common/unicode/unistr.h"
  inline int32_t hashCode(void) const;
# 1801 "../../common/unicode/unistr.h"
  inline UBool isBogus(void) const;
# 1817 "../../common/unicode/unistr.h"
  UnicodeString &operator=(const UnicodeString &srcText);
# 1841 "../../common/unicode/unistr.h"
  UnicodeString &fastCopyFrom(const UnicodeString &src);
# 1850 "../../common/unicode/unistr.h"
  inline UnicodeString& operator= (UChar ch);
# 1859 "../../common/unicode/unistr.h"
  inline UnicodeString& operator= (UChar32 ch);
# 1872 "../../common/unicode/unistr.h"
  inline UnicodeString& setTo(const UnicodeString& srcText,
               int32_t srcStart);
# 1888 "../../common/unicode/unistr.h"
  inline UnicodeString& setTo(const UnicodeString& srcText,
               int32_t srcStart,
               int32_t srcLength);
# 1900 "../../common/unicode/unistr.h"
  inline UnicodeString& setTo(const UnicodeString& srcText);
# 1910 "../../common/unicode/unistr.h"
  inline UnicodeString& setTo(const UChar *srcChars,
               int32_t srcLength);
# 1921 "../../common/unicode/unistr.h"
  UnicodeString& setTo(UChar srcChar);
# 1931 "../../common/unicode/unistr.h"
  UnicodeString& setTo(UChar32 srcChar);
# 1956 "../../common/unicode/unistr.h"
  UnicodeString &setTo(UBool isTerminated,
                       const UChar *text,
                       int32_t textLength);
# 1979 "../../common/unicode/unistr.h"
  UnicodeString &setTo(UChar *buffer,
                       int32_t buffLength,
                       int32_t buffCapacity);
# 2023 "../../common/unicode/unistr.h"
  void setToBogus();
# 2032 "../../common/unicode/unistr.h"
  UnicodeString& setCharAt(int32_t offset,
               UChar ch);
# 2045 "../../common/unicode/unistr.h"
 inline UnicodeString& operator+= (UChar ch);
# 2054 "../../common/unicode/unistr.h"
 inline UnicodeString& operator+= (UChar32 ch);
# 2063 "../../common/unicode/unistr.h"
  inline UnicodeString& operator+= (const UnicodeString& srcText);
# 2079 "../../common/unicode/unistr.h"
  inline UnicodeString& append(const UnicodeString& srcText,
            int32_t srcStart,
            int32_t srcLength);
# 2090 "../../common/unicode/unistr.h"
  inline UnicodeString& append(const UnicodeString& srcText);
# 2105 "../../common/unicode/unistr.h"
  inline UnicodeString& append(const UChar *srcChars,
            int32_t srcStart,
            int32_t srcLength);
# 2118 "../../common/unicode/unistr.h"
  inline UnicodeString& append(const UChar *srcChars,
            int32_t srcLength);







  inline UnicodeString& append(UChar srcChar);







  UnicodeString& append(UChar32 srcChar);
# 2153 "../../common/unicode/unistr.h"
  inline UnicodeString& insert(int32_t start,
            const UnicodeString& srcText,
            int32_t srcStart,
            int32_t srcLength);
# 2166 "../../common/unicode/unistr.h"
  inline UnicodeString& insert(int32_t start,
            const UnicodeString& srcText);
# 2182 "../../common/unicode/unistr.h"
  inline UnicodeString& insert(int32_t start,
            const UChar *srcChars,
            int32_t srcStart,
            int32_t srcLength);
# 2196 "../../common/unicode/unistr.h"
  inline UnicodeString& insert(int32_t start,
            const UChar *srcChars,
            int32_t srcLength);
# 2208 "../../common/unicode/unistr.h"
  inline UnicodeString& insert(int32_t start,
            UChar srcChar);
# 2219 "../../common/unicode/unistr.h"
  inline UnicodeString& insert(int32_t start,
            UChar32 srcChar);
# 2242 "../../common/unicode/unistr.h"
  UnicodeString& replace(int32_t start,
             int32_t length,
             const UnicodeString& srcText,
             int32_t srcStart,
             int32_t srcLength);
# 2260 "../../common/unicode/unistr.h"
  UnicodeString& replace(int32_t start,
             int32_t length,
             const UnicodeString& srcText);
# 2281 "../../common/unicode/unistr.h"
  UnicodeString& replace(int32_t start,
             int32_t length,
             const UChar *srcChars,
             int32_t srcStart,
             int32_t srcLength);
# 2299 "../../common/unicode/unistr.h"
  inline UnicodeString& replace(int32_t start,
             int32_t length,
             const UChar *srcChars,
             int32_t srcLength);
# 2315 "../../common/unicode/unistr.h"
  inline UnicodeString& replace(int32_t start,
             int32_t length,
             UChar srcChar);
# 2330 "../../common/unicode/unistr.h"
  UnicodeString& replace(int32_t start, int32_t length, UChar32 srcChar);
# 2341 "../../common/unicode/unistr.h"
  inline UnicodeString& replaceBetween(int32_t start,
                int32_t limit,
                const UnicodeString& srcText);
# 2359 "../../common/unicode/unistr.h"
  inline UnicodeString& replaceBetween(int32_t start,
                int32_t limit,
                const UnicodeString& srcText,
                int32_t srcStart,
                int32_t srcLimit);
# 2375 "../../common/unicode/unistr.h"
  virtual void handleReplaceBetween(int32_t start,
                                    int32_t limit,
                                    const UnicodeString& text);






  virtual UBool hasMetaData() const;
# 2401 "../../common/unicode/unistr.h"
  virtual void copy(int32_t start, int32_t limit, int32_t dest);
# 2413 "../../common/unicode/unistr.h"
  inline UnicodeString& findAndReplace(const UnicodeString& oldText,
                const UnicodeString& newText);
# 2427 "../../common/unicode/unistr.h"
  inline UnicodeString& findAndReplace(int32_t start,
                int32_t length,
                const UnicodeString& oldText,
                const UnicodeString& newText);
# 2449 "../../common/unicode/unistr.h"
  UnicodeString& findAndReplace(int32_t start,
                int32_t length,
                const UnicodeString& oldText,
                int32_t oldStart,
                int32_t oldLength,
                const UnicodeString& newText,
                int32_t newStart,
                int32_t newLength);
# 2466 "../../common/unicode/unistr.h"
  inline UnicodeString& remove(void);
# 2476 "../../common/unicode/unistr.h"
  inline UnicodeString& remove(int32_t start,
                               int32_t length = (int32_t)(2147483647));
# 2487 "../../common/unicode/unistr.h"
  inline UnicodeString& removeBetween(int32_t start,
                                      int32_t limit = (int32_t)(2147483647));
# 2499 "../../common/unicode/unistr.h"
  inline UnicodeString &retainBetween(int32_t start, int32_t limit = (2147483647));
# 2514 "../../common/unicode/unistr.h"
  UBool padLeading(int32_t targetLength,
                    UChar padChar = 0x0020);
# 2528 "../../common/unicode/unistr.h"
  UBool padTrailing(int32_t targetLength,
                     UChar padChar = 0x0020);







  inline UBool truncate(int32_t targetLength);






  UnicodeString& trim(void);
# 2554 "../../common/unicode/unistr.h"
  inline UnicodeString& reverse(void);
# 2564 "../../common/unicode/unistr.h"
  inline UnicodeString& reverse(int32_t start,
             int32_t length);







  UnicodeString& toUpper(void);
# 2582 "../../common/unicode/unistr.h"
  UnicodeString& toUpper(const Locale& locale);







  UnicodeString& toLower(void);
# 2599 "../../common/unicode/unistr.h"
  UnicodeString& toLower(const Locale& locale);
# 2629 "../../common/unicode/unistr.h"
  UnicodeString &toTitle(BreakIterator *titleIter);
# 2658 "../../common/unicode/unistr.h"
  UnicodeString &toTitle(BreakIterator *titleIter, const Locale &locale);
# 2691 "../../common/unicode/unistr.h"
  UnicodeString &toTitle(BreakIterator *titleIter, const Locale &locale, uint32_t options);
# 2708 "../../common/unicode/unistr.h"
  UnicodeString &foldCase(uint32_t options=0 );
# 2757 "../../common/unicode/unistr.h"
  UChar *getBuffer(int32_t minCapacity);
# 2779 "../../common/unicode/unistr.h"
  void releaseBuffer(int32_t newLength=-1);
# 2811 "../../common/unicode/unistr.h"
  inline const UChar *getBuffer() const;
# 2846 "../../common/unicode/unistr.h"
  const UChar *getTerminatedBuffer();
# 2855 "../../common/unicode/unistr.h"
  inline UnicodeString();
# 2868 "../../common/unicode/unistr.h"
  UnicodeString(int32_t capacity, UChar32 c, int32_t count);
# 2879 "../../common/unicode/unistr.h"
                            UnicodeString(UChar ch);
# 2890 "../../common/unicode/unistr.h"
                            UnicodeString(UChar32 ch);
# 2902 "../../common/unicode/unistr.h"
                              UnicodeString(const UChar *text);
# 2911 "../../common/unicode/unistr.h"
  UnicodeString(const UChar *text,
        int32_t textLength);
# 2936 "../../common/unicode/unistr.h"
  UnicodeString(UBool isTerminated,
                const UChar *text,
                int32_t textLength);
# 2958 "../../common/unicode/unistr.h"
  UnicodeString(UChar *buffer, int32_t buffLength, int32_t buffCapacity);
# 2981 "../../common/unicode/unistr.h"
                              UnicodeString(const char *codepageData);
# 2991 "../../common/unicode/unistr.h"
  UnicodeString(const char *codepageData, int32_t dataLength);
# 3014 "../../common/unicode/unistr.h"
  UnicodeString(const char *codepageData, const char *codepage);
# 3033 "../../common/unicode/unistr.h"
  UnicodeString(const char *codepageData, int32_t dataLength, const char *codepage);
# 3056 "../../common/unicode/unistr.h"
  UnicodeString(
        const char *src, int32_t srcLength,
        UConverter *cnv,
        UErrorCode &errorCode);
# 3087 "../../common/unicode/unistr.h"
  UnicodeString(const char *src, int32_t length, enum EInvariant inv);







  UnicodeString(const UnicodeString& that);







  UnicodeString(const UnicodeString& src, int32_t srcStart);
# 3112 "../../common/unicode/unistr.h"
  UnicodeString(const UnicodeString& src, int32_t srcStart, int32_t srcLength);
# 3130 "../../common/unicode/unistr.h"
  virtual Replaceable *clone() const;




  virtual ~UnicodeString();
# 3150 "../../common/unicode/unistr.h"
  static UnicodeString fromUTF8(const StringPiece &utf8);
# 3163 "../../common/unicode/unistr.h"
  static UnicodeString fromUTF32(const UChar32 *utf32, int32_t length);
# 3201 "../../common/unicode/unistr.h"
  UnicodeString unescape() const;
# 3222 "../../common/unicode/unistr.h"
  UChar32 unescapeAt(int32_t &offset) const;






  static UClassID getStaticClassID();






  virtual UClassID getDynamicClassID() const;





protected:




  virtual int32_t getLength() const;






  virtual UChar getCharAt(int32_t offset) const;






  virtual UChar32 getChar32At(int32_t offset) const;

private:

  UnicodeString &setToUTF8(const StringPiece &utf8);





  int32_t
  toUTF8(int32_t start, int32_t len,
         char *target, int32_t capacity) const;





  UBool doEquals(const UnicodeString &text, int32_t len) const;

  inline int8_t
  doCompare(int32_t start,
           int32_t length,
           const UnicodeString& srcText,
           int32_t srcStart,
           int32_t srcLength) const;

  int8_t doCompare(int32_t start,
           int32_t length,
           const UChar *srcChars,
           int32_t srcStart,
           int32_t srcLength) const;

  inline int8_t
  doCompareCodePointOrder(int32_t start,
                          int32_t length,
                          const UnicodeString& srcText,
                          int32_t srcStart,
                          int32_t srcLength) const;

  int8_t doCompareCodePointOrder(int32_t start,
                                 int32_t length,
                                 const UChar *srcChars,
                                 int32_t srcStart,
                                 int32_t srcLength) const;

  inline int8_t
  doCaseCompare(int32_t start,
                int32_t length,
                const UnicodeString &srcText,
                int32_t srcStart,
                int32_t srcLength,
                uint32_t options) const;

  int8_t
  doCaseCompare(int32_t start,
                int32_t length,
                const UChar *srcChars,
                int32_t srcStart,
                int32_t srcLength,
                uint32_t options) const;

  int32_t doIndexOf(UChar c,
            int32_t start,
            int32_t length) const;

  int32_t doIndexOf(UChar32 c,
                        int32_t start,
                        int32_t length) const;

  int32_t doLastIndexOf(UChar c,
                int32_t start,
                int32_t length) const;

  int32_t doLastIndexOf(UChar32 c,
                            int32_t start,
                            int32_t length) const;

  void doExtract(int32_t start,
         int32_t length,
         UChar *dst,
         int32_t dstStart) const;

  inline void doExtract(int32_t start,
         int32_t length,
         UnicodeString& target) const;

  inline UChar doCharAt(int32_t offset) const;

  UnicodeString& doReplace(int32_t start,
               int32_t length,
               const UnicodeString& srcText,
               int32_t srcStart,
               int32_t srcLength);

  UnicodeString& doReplace(int32_t start,
               int32_t length,
               const UChar *srcChars,
               int32_t srcStart,
               int32_t srcLength);

  UnicodeString& doReverse(int32_t start,
               int32_t length);


  int32_t doHashCode(void) const;



  inline UChar* getArrayStart(void);
  inline const UChar* getArrayStart(void) const;



  inline UBool isWritable() const;


  inline UBool isBufferWritable() const;


  inline void setLength(int32_t len);
  inline void setToEmpty();
  inline void setArray(UChar *array, int32_t len, int32_t capacity);





  UBool allocate(int32_t capacity);


  void releaseArray(void);


  void unBogus();


  UnicodeString &copyFrom(const UnicodeString &src, UBool fastCopy=0);


  inline void pinIndex(int32_t& start) const;
  inline void pinIndices(int32_t& start,
                         int32_t& length) const;




  int32_t doExtract(int32_t start, int32_t length,
                    char *dest, int32_t destCapacity,
                    UConverter *cnv,
                    UErrorCode &errorCode) const;
# 3423 "../../common/unicode/unistr.h"
  void doCodepageCreate(const char *codepageData,
                        int32_t dataLength,
                        const char *codepage);





  void
  doCodepageCreate(const char *codepageData,
                   int32_t dataLength,
                   UConverter *converter,
                   UErrorCode &status);
# 3450 "../../common/unicode/unistr.h"
  UBool cloneArrayIfNeeded(int32_t newCapacity = -1,
                            int32_t growCapacity = -1,
                            UBool doCopyArray = 1,
                            int32_t **pBufferToDelete = 0,
                            UBool forceClone = 0);






  UnicodeString &
  caseMap(const UCaseMap *csm, UStringCaseMapper *stringCaseMapper);


  void addRef(void);
  int32_t removeRef(void);
  int32_t refCount(void) const;


  enum {


    US_STACKBUF_SIZE= sizeof(void *)==4 ? 13 : 15,
    kInvalidUChar=0xffff,
    kGrowSize=128,
    kInvalidHashCode=0,
    kEmptyHashCode=1,


    kIsBogus=1,
    kUsingStackBuffer=2,
    kRefCounted=4,
    kBufferIsReadonly=8,
    kOpenGetBuffer=16,



    kShortString=kUsingStackBuffer,
    kLongString=kRefCounted,
    kReadonlyAlias=kBufferIsReadonly,
    kWritableAlias=0
  };

  friend class StringThreadTest;
  friend class UnicodeStringAppendable;

  union StackBufferOrFields;
  friend union StackBufferOrFields;
# 3535 "../../common/unicode/unistr.h"
  union StackBufferOrFields {


    UChar fStackBuffer[8];
    struct {
      UChar *fArray;
      int32_t fCapacity;
      int32_t fLength;
    } fFields;
  } fUnion;
  UChar fRestOfStackBuffer[US_STACKBUF_SIZE-8];
  int8_t fShortLength;
  uint8_t fFlags;
};
# 3558 "../../common/unicode/unistr.h"
             UnicodeString
operator+ (const UnicodeString &s1, const UnicodeString &s2);
# 3569 "../../common/unicode/unistr.h"
inline void
UnicodeString::pinIndex(int32_t& start) const
{

  if(start < 0) {
    start = 0;
  } else if(start > length()) {
    start = length();
  }
}

inline void
UnicodeString::pinIndices(int32_t& start,
                          int32_t& _length) const
{

  int32_t len = length();
  if(start < 0) {
    start = 0;
  } else if(start > len) {
    start = len;
  }
  if(_length < 0) {
    _length = 0;
  } else if(_length > (len - start)) {
    _length = (len - start);
  }
}

inline UChar*
UnicodeString::getArrayStart()
{ return (fFlags&kUsingStackBuffer) ? fUnion.fStackBuffer : fUnion.fFields.fArray; }

inline const UChar*
UnicodeString::getArrayStart() const
{ return (fFlags&kUsingStackBuffer) ? fUnion.fStackBuffer : fUnion.fFields.fArray; }





inline
UnicodeString::UnicodeString()
  : fShortLength(0),
    fFlags(kShortString)
{}




inline int32_t
UnicodeString::length() const
{ return fShortLength>=0 ? fShortLength : fUnion.fFields.fLength; }

inline int32_t
UnicodeString::getCapacity() const
{ return (fFlags&kUsingStackBuffer) ? US_STACKBUF_SIZE : fUnion.fFields.fCapacity; }

inline int32_t
UnicodeString::hashCode() const
{ return doHashCode(); }

inline UBool
UnicodeString::isBogus() const
{ return (UBool)(fFlags & kIsBogus); }

inline UBool
UnicodeString::isWritable() const
{ return (UBool)!(fFlags&(kOpenGetBuffer|kIsBogus)); }

inline UBool
UnicodeString::isBufferWritable() const
{
  return (UBool)(
      !(fFlags&(kOpenGetBuffer|kIsBogus|kBufferIsReadonly)) &&
      (!(fFlags&kRefCounted) || refCount()==1));
}

inline const UChar *
UnicodeString::getBuffer() const {
  if(fFlags&(kIsBogus|kOpenGetBuffer)) {
    return 0;
  } else if(fFlags&kUsingStackBuffer) {
    return fUnion.fStackBuffer;
  } else {
    return fUnion.fFields.fArray;
  }
}




inline int8_t
UnicodeString::doCompare(int32_t start,
              int32_t thisLength,
              const UnicodeString& srcText,
              int32_t srcStart,
              int32_t srcLength) const
{
  if(srcText.isBogus()) {
    return (int8_t)!isBogus();
  } else {
    srcText.pinIndices(srcStart, srcLength);
    return doCompare(start, thisLength, srcText.getArrayStart(), srcStart, srcLength);
  }
}

inline UBool
UnicodeString::operator== (const UnicodeString& text) const
{
  if(isBogus()) {
    return text.isBogus();
  } else {
    int32_t len = length(), textLength = text.length();
    return !text.isBogus() && len == textLength && doEquals(text, len);
  }
}

inline UBool
UnicodeString::operator!= (const UnicodeString& text) const
{ return (! operator==(text)); }

inline UBool
UnicodeString::operator> (const UnicodeString& text) const
{ return doCompare(0, length(), text, 0, text.length()) == 1; }

inline UBool
UnicodeString::operator< (const UnicodeString& text) const
{ return doCompare(0, length(), text, 0, text.length()) == -1; }

inline UBool
UnicodeString::operator>= (const UnicodeString& text) const
{ return doCompare(0, length(), text, 0, text.length()) != -1; }

inline UBool
UnicodeString::operator<= (const UnicodeString& text) const
{ return doCompare(0, length(), text, 0, text.length()) != 1; }

inline int8_t
UnicodeString::compare(const UnicodeString& text) const
{ return doCompare(0, length(), text, 0, text.length()); }

inline int8_t
UnicodeString::compare(int32_t start,
               int32_t _length,
               const UnicodeString& srcText) const
{ return doCompare(start, _length, srcText, 0, srcText.length()); }

inline int8_t
UnicodeString::compare(const UChar *srcChars,
               int32_t srcLength) const
{ return doCompare(0, length(), srcChars, 0, srcLength); }

inline int8_t
UnicodeString::compare(int32_t start,
               int32_t _length,
               const UnicodeString& srcText,
               int32_t srcStart,
               int32_t srcLength) const
{ return doCompare(start, _length, srcText, srcStart, srcLength); }

inline int8_t
UnicodeString::compare(int32_t start,
               int32_t _length,
               const UChar *srcChars) const
{ return doCompare(start, _length, srcChars, 0, _length); }

inline int8_t
UnicodeString::compare(int32_t start,
               int32_t _length,
               const UChar *srcChars,
               int32_t srcStart,
               int32_t srcLength) const
{ return doCompare(start, _length, srcChars, srcStart, srcLength); }

inline int8_t
UnicodeString::compareBetween(int32_t start,
                  int32_t limit,
                  const UnicodeString& srcText,
                  int32_t srcStart,
                  int32_t srcLimit) const
{ return doCompare(start, limit - start,
           srcText, srcStart, srcLimit - srcStart); }

inline int8_t
UnicodeString::doCompareCodePointOrder(int32_t start,
                                       int32_t thisLength,
                                       const UnicodeString& srcText,
                                       int32_t srcStart,
                                       int32_t srcLength) const
{
  if(srcText.isBogus()) {
    return (int8_t)!isBogus();
  } else {
    srcText.pinIndices(srcStart, srcLength);
    return doCompareCodePointOrder(start, thisLength, srcText.getArrayStart(), srcStart, srcLength);
  }
}

inline int8_t
UnicodeString::compareCodePointOrder(const UnicodeString& text) const
{ return doCompareCodePointOrder(0, length(), text, 0, text.length()); }

inline int8_t
UnicodeString::compareCodePointOrder(int32_t start,
                                     int32_t _length,
                                     const UnicodeString& srcText) const
{ return doCompareCodePointOrder(start, _length, srcText, 0, srcText.length()); }

inline int8_t
UnicodeString::compareCodePointOrder(const UChar *srcChars,
                                     int32_t srcLength) const
{ return doCompareCodePointOrder(0, length(), srcChars, 0, srcLength); }

inline int8_t
UnicodeString::compareCodePointOrder(int32_t start,
                                     int32_t _length,
                                     const UnicodeString& srcText,
                                     int32_t srcStart,
                                     int32_t srcLength) const
{ return doCompareCodePointOrder(start, _length, srcText, srcStart, srcLength); }

inline int8_t
UnicodeString::compareCodePointOrder(int32_t start,
                                     int32_t _length,
                                     const UChar *srcChars) const
{ return doCompareCodePointOrder(start, _length, srcChars, 0, _length); }

inline int8_t
UnicodeString::compareCodePointOrder(int32_t start,
                                     int32_t _length,
                                     const UChar *srcChars,
                                     int32_t srcStart,
                                     int32_t srcLength) const
{ return doCompareCodePointOrder(start, _length, srcChars, srcStart, srcLength); }

inline int8_t
UnicodeString::compareCodePointOrderBetween(int32_t start,
                                            int32_t limit,
                                            const UnicodeString& srcText,
                                            int32_t srcStart,
                                            int32_t srcLimit) const
{ return doCompareCodePointOrder(start, limit - start,
           srcText, srcStart, srcLimit - srcStart); }

inline int8_t
UnicodeString::doCaseCompare(int32_t start,
                             int32_t thisLength,
                             const UnicodeString &srcText,
                             int32_t srcStart,
                             int32_t srcLength,
                             uint32_t options) const
{
  if(srcText.isBogus()) {
    return (int8_t)!isBogus();
  } else {
    srcText.pinIndices(srcStart, srcLength);
    return doCaseCompare(start, thisLength, srcText.getArrayStart(), srcStart, srcLength, options);
  }
}

inline int8_t
UnicodeString::caseCompare(const UnicodeString &text, uint32_t options) const {
  return doCaseCompare(0, length(), text, 0, text.length(), options);
}

inline int8_t
UnicodeString::caseCompare(int32_t start,
                           int32_t _length,
                           const UnicodeString &srcText,
                           uint32_t options) const {
  return doCaseCompare(start, _length, srcText, 0, srcText.length(), options);
}

inline int8_t
UnicodeString::caseCompare(const UChar *srcChars,
                           int32_t srcLength,
                           uint32_t options) const {
  return doCaseCompare(0, length(), srcChars, 0, srcLength, options);
}

inline int8_t
UnicodeString::caseCompare(int32_t start,
                           int32_t _length,
                           const UnicodeString &srcText,
                           int32_t srcStart,
                           int32_t srcLength,
                           uint32_t options) const {
  return doCaseCompare(start, _length, srcText, srcStart, srcLength, options);
}

inline int8_t
UnicodeString::caseCompare(int32_t start,
                           int32_t _length,
                           const UChar *srcChars,
                           uint32_t options) const {
  return doCaseCompare(start, _length, srcChars, 0, _length, options);
}

inline int8_t
UnicodeString::caseCompare(int32_t start,
                           int32_t _length,
                           const UChar *srcChars,
                           int32_t srcStart,
                           int32_t srcLength,
                           uint32_t options) const {
  return doCaseCompare(start, _length, srcChars, srcStart, srcLength, options);
}

inline int8_t
UnicodeString::caseCompareBetween(int32_t start,
                                  int32_t limit,
                                  const UnicodeString &srcText,
                                  int32_t srcStart,
                                  int32_t srcLimit,
                                  uint32_t options) const {
  return doCaseCompare(start, limit - start, srcText, srcStart, srcLimit - srcStart, options);
}

inline int32_t
UnicodeString::indexOf(const UnicodeString& srcText,
               int32_t srcStart,
               int32_t srcLength,
               int32_t start,
               int32_t _length) const
{
  if(!srcText.isBogus()) {
    srcText.pinIndices(srcStart, srcLength);
    if(srcLength > 0) {
      return indexOf(srcText.getArrayStart(), srcStart, srcLength, start, _length);
    }
  }
  return -1;
}

inline int32_t
UnicodeString::indexOf(const UnicodeString& text) const
{ return indexOf(text, 0, text.length(), 0, length()); }

inline int32_t
UnicodeString::indexOf(const UnicodeString& text,
               int32_t start) const {
  pinIndex(start);
  return indexOf(text, 0, text.length(), start, length() - start);
}

inline int32_t
UnicodeString::indexOf(const UnicodeString& text,
               int32_t start,
               int32_t _length) const
{ return indexOf(text, 0, text.length(), start, _length); }

inline int32_t
UnicodeString::indexOf(const UChar *srcChars,
               int32_t srcLength,
               int32_t start) const {
  pinIndex(start);
  return indexOf(srcChars, 0, srcLength, start, length() - start);
}

inline int32_t
UnicodeString::indexOf(const UChar *srcChars,
               int32_t srcLength,
               int32_t start,
               int32_t _length) const
{ return indexOf(srcChars, 0, srcLength, start, _length); }

inline int32_t
UnicodeString::indexOf(UChar c,
               int32_t start,
               int32_t _length) const
{ return doIndexOf(c, start, _length); }

inline int32_t
UnicodeString::indexOf(UChar32 c,
               int32_t start,
               int32_t _length) const
{ return doIndexOf(c, start, _length); }

inline int32_t
UnicodeString::indexOf(UChar c) const
{ return doIndexOf(c, 0, length()); }

inline int32_t
UnicodeString::indexOf(UChar32 c) const
{ return indexOf(c, 0, length()); }

inline int32_t
UnicodeString::indexOf(UChar c,
               int32_t start) const {
  pinIndex(start);
  return doIndexOf(c, start, length() - start);
}

inline int32_t
UnicodeString::indexOf(UChar32 c,
               int32_t start) const {
  pinIndex(start);
  return indexOf(c, start, length() - start);
}

inline int32_t
UnicodeString::lastIndexOf(const UChar *srcChars,
               int32_t srcLength,
               int32_t start,
               int32_t _length) const
{ return lastIndexOf(srcChars, 0, srcLength, start, _length); }

inline int32_t
UnicodeString::lastIndexOf(const UChar *srcChars,
               int32_t srcLength,
               int32_t start) const {
  pinIndex(start);
  return lastIndexOf(srcChars, 0, srcLength, start, length() - start);
}

inline int32_t
UnicodeString::lastIndexOf(const UnicodeString& srcText,
               int32_t srcStart,
               int32_t srcLength,
               int32_t start,
               int32_t _length) const
{
  if(!srcText.isBogus()) {
    srcText.pinIndices(srcStart, srcLength);
    if(srcLength > 0) {
      return lastIndexOf(srcText.getArrayStart(), srcStart, srcLength, start, _length);
    }
  }
  return -1;
}

inline int32_t
UnicodeString::lastIndexOf(const UnicodeString& text,
               int32_t start,
               int32_t _length) const
{ return lastIndexOf(text, 0, text.length(), start, _length); }

inline int32_t
UnicodeString::lastIndexOf(const UnicodeString& text,
               int32_t start) const {
  pinIndex(start);
  return lastIndexOf(text, 0, text.length(), start, length() - start);
}

inline int32_t
UnicodeString::lastIndexOf(const UnicodeString& text) const
{ return lastIndexOf(text, 0, text.length(), 0, length()); }

inline int32_t
UnicodeString::lastIndexOf(UChar c,
               int32_t start,
               int32_t _length) const
{ return doLastIndexOf(c, start, _length); }

inline int32_t
UnicodeString::lastIndexOf(UChar32 c,
               int32_t start,
               int32_t _length) const {
  return doLastIndexOf(c, start, _length);
}

inline int32_t
UnicodeString::lastIndexOf(UChar c) const
{ return doLastIndexOf(c, 0, length()); }

inline int32_t
UnicodeString::lastIndexOf(UChar32 c) const {
  return lastIndexOf(c, 0, length());
}

inline int32_t
UnicodeString::lastIndexOf(UChar c,
               int32_t start) const {
  pinIndex(start);
  return doLastIndexOf(c, start, length() - start);
}

inline int32_t
UnicodeString::lastIndexOf(UChar32 c,
               int32_t start) const {
  pinIndex(start);
  return lastIndexOf(c, start, length() - start);
}

inline UBool
UnicodeString::startsWith(const UnicodeString& text) const
{ return compare(0, text.length(), text, 0, text.length()) == 0; }

inline UBool
UnicodeString::startsWith(const UnicodeString& srcText,
              int32_t srcStart,
              int32_t srcLength) const
{ return doCompare(0, srcLength, srcText, srcStart, srcLength) == 0; }

inline UBool
UnicodeString::startsWith(const UChar *srcChars, int32_t srcLength) const {
  if(srcLength < 0) {
    srcLength = u_strlen_52(srcChars);
  }
  return doCompare(0, srcLength, srcChars, 0, srcLength) == 0;
}

inline UBool
UnicodeString::startsWith(const UChar *srcChars, int32_t srcStart, int32_t srcLength) const {
  if(srcLength < 0) {
    srcLength = u_strlen_52(srcChars);
  }
  return doCompare(0, srcLength, srcChars, srcStart, srcLength) == 0;
}

inline UBool
UnicodeString::endsWith(const UnicodeString& text) const
{ return doCompare(length() - text.length(), text.length(),
           text, 0, text.length()) == 0; }

inline UBool
UnicodeString::endsWith(const UnicodeString& srcText,
            int32_t srcStart,
            int32_t srcLength) const {
  srcText.pinIndices(srcStart, srcLength);
  return doCompare(length() - srcLength, srcLength,
                   srcText, srcStart, srcLength) == 0;
}

inline UBool
UnicodeString::endsWith(const UChar *srcChars,
            int32_t srcLength) const {
  if(srcLength < 0) {
    srcLength = u_strlen_52(srcChars);
  }
  return doCompare(length() - srcLength, srcLength,
                   srcChars, 0, srcLength) == 0;
}

inline UBool
UnicodeString::endsWith(const UChar *srcChars,
            int32_t srcStart,
            int32_t srcLength) const {
  if(srcLength < 0) {
    srcLength = u_strlen_52(srcChars + srcStart);
  }
  return doCompare(length() - srcLength, srcLength,
                   srcChars, srcStart, srcLength) == 0;
}




inline UnicodeString&
UnicodeString::replace(int32_t start,
               int32_t _length,
               const UnicodeString& srcText)
{ return doReplace(start, _length, srcText, 0, srcText.length()); }

inline UnicodeString&
UnicodeString::replace(int32_t start,
               int32_t _length,
               const UnicodeString& srcText,
               int32_t srcStart,
               int32_t srcLength)
{ return doReplace(start, _length, srcText, srcStart, srcLength); }

inline UnicodeString&
UnicodeString::replace(int32_t start,
               int32_t _length,
               const UChar *srcChars,
               int32_t srcLength)
{ return doReplace(start, _length, srcChars, 0, srcLength); }

inline UnicodeString&
UnicodeString::replace(int32_t start,
               int32_t _length,
               const UChar *srcChars,
               int32_t srcStart,
               int32_t srcLength)
{ return doReplace(start, _length, srcChars, srcStart, srcLength); }

inline UnicodeString&
UnicodeString::replace(int32_t start,
               int32_t _length,
               UChar srcChar)
{ return doReplace(start, _length, &srcChar, 0, 1); }

inline UnicodeString&
UnicodeString::replaceBetween(int32_t start,
                  int32_t limit,
                  const UnicodeString& srcText)
{ return doReplace(start, limit - start, srcText, 0, srcText.length()); }

inline UnicodeString&
UnicodeString::replaceBetween(int32_t start,
                  int32_t limit,
                  const UnicodeString& srcText,
                  int32_t srcStart,
                  int32_t srcLimit)
{ return doReplace(start, limit - start, srcText, srcStart, srcLimit - srcStart); }

inline UnicodeString&
UnicodeString::findAndReplace(const UnicodeString& oldText,
                  const UnicodeString& newText)
{ return findAndReplace(0, length(), oldText, 0, oldText.length(),
            newText, 0, newText.length()); }

inline UnicodeString&
UnicodeString::findAndReplace(int32_t start,
                  int32_t _length,
                  const UnicodeString& oldText,
                  const UnicodeString& newText)
{ return findAndReplace(start, _length, oldText, 0, oldText.length(),
            newText, 0, newText.length()); }




inline void
UnicodeString::doExtract(int32_t start,
             int32_t _length,
             UnicodeString& target) const
{ target.replace(0, target.length(), *this, start, _length); }

inline void
UnicodeString::extract(int32_t start,
               int32_t _length,
               UChar *target,
               int32_t targetStart) const
{ doExtract(start, _length, target, targetStart); }

inline void
UnicodeString::extract(int32_t start,
               int32_t _length,
               UnicodeString& target) const
{ doExtract(start, _length, target); }



inline int32_t
UnicodeString::extract(int32_t start,
               int32_t _length,
               char *dst,
               const char *codepage) const

{

  return extract(start, _length, dst, dst!=0 ? 0xffffffff : 0, codepage);
}



inline void
UnicodeString::extractBetween(int32_t start,
                  int32_t limit,
                  UChar *dst,
                  int32_t dstStart) const {
  pinIndex(start);
  pinIndex(limit);
  doExtract(start, limit - start, dst, dstStart);
}

inline UnicodeString
UnicodeString::tempSubStringBetween(int32_t start, int32_t limit) const {
    return tempSubString(start, limit - start);
}

inline UChar
UnicodeString::doCharAt(int32_t offset) const
{
  if((uint32_t)offset < (uint32_t)length()) {
    return getArrayStart()[offset];
  } else {
    return kInvalidUChar;
  }
}

inline UChar
UnicodeString::charAt(int32_t offset) const
{ return doCharAt(offset); }

inline UChar
UnicodeString::operator[] (int32_t offset) const
{ return doCharAt(offset); }

inline UBool
UnicodeString::isEmpty() const {
  return fShortLength == 0;
}




inline void
UnicodeString::setLength(int32_t len) {
  if(len <= 127) {
    fShortLength = (int8_t)len;
  } else {
    fShortLength = (int8_t)-1;
    fUnion.fFields.fLength = len;
  }
}

inline void
UnicodeString::setToEmpty() {
  fShortLength = 0;
  fFlags = kShortString;
}

inline void
UnicodeString::setArray(UChar *array, int32_t len, int32_t capacity) {
  setLength(len);
  fUnion.fFields.fArray = array;
  fUnion.fFields.fCapacity = capacity;
}

inline UnicodeString&
UnicodeString::operator= (UChar ch)
{ return doReplace(0, length(), &ch, 0, 1); }

inline UnicodeString&
UnicodeString::operator= (UChar32 ch)
{ return replace(0, length(), ch); }

inline UnicodeString&
UnicodeString::setTo(const UnicodeString& srcText,
             int32_t srcStart,
             int32_t srcLength)
{
  unBogus();
  return doReplace(0, length(), srcText, srcStart, srcLength);
}

inline UnicodeString&
UnicodeString::setTo(const UnicodeString& srcText,
             int32_t srcStart)
{
  unBogus();
  srcText.pinIndex(srcStart);
  return doReplace(0, length(), srcText, srcStart, srcText.length() - srcStart);
}

inline UnicodeString&
UnicodeString::setTo(const UnicodeString& srcText)
{
  return copyFrom(srcText);
}

inline UnicodeString&
UnicodeString::setTo(const UChar *srcChars,
             int32_t srcLength)
{
  unBogus();
  return doReplace(0, length(), srcChars, 0, srcLength);
}

inline UnicodeString&
UnicodeString::setTo(UChar srcChar)
{
  unBogus();
  return doReplace(0, length(), &srcChar, 0, 1);
}

inline UnicodeString&
UnicodeString::setTo(UChar32 srcChar)
{
  unBogus();
  return replace(0, length(), srcChar);
}

inline UnicodeString&
UnicodeString::append(const UnicodeString& srcText,
              int32_t srcStart,
              int32_t srcLength)
{ return doReplace(length(), 0, srcText, srcStart, srcLength); }

inline UnicodeString&
UnicodeString::append(const UnicodeString& srcText)
{ return doReplace(length(), 0, srcText, 0, srcText.length()); }

inline UnicodeString&
UnicodeString::append(const UChar *srcChars,
              int32_t srcStart,
              int32_t srcLength)
{ return doReplace(length(), 0, srcChars, srcStart, srcLength); }

inline UnicodeString&
UnicodeString::append(const UChar *srcChars,
              int32_t srcLength)
{ return doReplace(length(), 0, srcChars, 0, srcLength); }

inline UnicodeString&
UnicodeString::append(UChar srcChar)
{ return doReplace(length(), 0, &srcChar, 0, 1); }

inline UnicodeString&
UnicodeString::operator+= (UChar ch)
{ return doReplace(length(), 0, &ch, 0, 1); }

inline UnicodeString&
UnicodeString::operator+= (UChar32 ch) {
  return append(ch);
}

inline UnicodeString&
UnicodeString::operator+= (const UnicodeString& srcText)
{ return doReplace(length(), 0, srcText, 0, srcText.length()); }

inline UnicodeString&
UnicodeString::insert(int32_t start,
              const UnicodeString& srcText,
              int32_t srcStart,
              int32_t srcLength)
{ return doReplace(start, 0, srcText, srcStart, srcLength); }

inline UnicodeString&
UnicodeString::insert(int32_t start,
              const UnicodeString& srcText)
{ return doReplace(start, 0, srcText, 0, srcText.length()); }

inline UnicodeString&
UnicodeString::insert(int32_t start,
              const UChar *srcChars,
              int32_t srcStart,
              int32_t srcLength)
{ return doReplace(start, 0, srcChars, srcStart, srcLength); }

inline UnicodeString&
UnicodeString::insert(int32_t start,
              const UChar *srcChars,
              int32_t srcLength)
{ return doReplace(start, 0, srcChars, 0, srcLength); }

inline UnicodeString&
UnicodeString::insert(int32_t start,
              UChar srcChar)
{ return doReplace(start, 0, &srcChar, 0, 1); }

inline UnicodeString&
UnicodeString::insert(int32_t start,
              UChar32 srcChar)
{ return replace(start, 0, srcChar); }


inline UnicodeString&
UnicodeString::remove()
{

  if(isBogus()) {
    setToEmpty();
  } else {
    fShortLength = 0;
  }
  return *this;
}

inline UnicodeString&
UnicodeString::remove(int32_t start,
             int32_t _length)
{
    if(start <= 0 && _length == (2147483647)) {

        return remove();
    }
    return doReplace(start, _length, __null, 0, 0);
}

inline UnicodeString&
UnicodeString::removeBetween(int32_t start,
                int32_t limit)
{ return doReplace(start, limit - start, __null, 0, 0); }

inline UnicodeString &
UnicodeString::retainBetween(int32_t start, int32_t limit) {
  truncate(limit);
  return doReplace(0, start, __null, 0, 0);
}

inline UBool
UnicodeString::truncate(int32_t targetLength)
{
  if(isBogus() && targetLength == 0) {

    unBogus();
    return 0;
  } else if((uint32_t)targetLength < (uint32_t)length()) {
    setLength(targetLength);
    return 1;
  } else {
    return 0;
  }
}

inline UnicodeString&
UnicodeString::reverse()
{ return doReverse(0, length()); }

inline UnicodeString&
UnicodeString::reverse(int32_t start,
               int32_t _length)
{ return doReverse(start, _length); }

} }
# 35 "../../common/unicode/locid.h" 2

# 1 "../../common/unicode/uloc.h" 1
# 25 "../../common/unicode/uloc.h"
# 1 "../../common/unicode/uenum.h" 1
# 24 "../../common/unicode/uenum.h"
# 1 "../../common/unicode/strenum.h" 1
# 21 "../../common/unicode/strenum.h"
extern "C++" { namespace icu_52 {
# 55 "../../common/unicode/strenum.h"
class StringEnumeration : public UObject {
public:




    virtual ~StringEnumeration();
# 78 "../../common/unicode/strenum.h"
    virtual StringEnumeration *clone() const;
# 97 "../../common/unicode/strenum.h"
    virtual int32_t count(UErrorCode& status) const = 0;
# 129 "../../common/unicode/strenum.h"
    virtual const char* next(int32_t *resultLength, UErrorCode& status);
# 154 "../../common/unicode/strenum.h"
    virtual const UChar* unext(int32_t *resultLength, UErrorCode& status);
# 176 "../../common/unicode/strenum.h"
    virtual const UnicodeString* snext(UErrorCode& status);
# 190 "../../common/unicode/strenum.h"
    virtual void reset(UErrorCode& status) = 0;
# 199 "../../common/unicode/strenum.h"
    virtual UBool operator==(const StringEnumeration& that)const;







    virtual UBool operator!=(const StringEnumeration& that)const;

protected:




    UnicodeString unistr;




    char charsBuffer[32];





    char *chars;




    int32_t charsCapacity;





    StringEnumeration();
# 246 "../../common/unicode/strenum.h"
    void ensureCharsCapacity(int32_t capacity, UErrorCode &status);
# 270 "../../common/unicode/strenum.h"
    UnicodeString *setChars(const char *s, int32_t length, UErrorCode &status);
};

} }
# 25 "../../common/unicode/uenum.h" 2
# 37 "../../common/unicode/uenum.h"
struct UEnumeration;

typedef struct UEnumeration UEnumeration;
# 48 "../../common/unicode/uenum.h"
extern "C" __attribute__((visibility("default"))) void
uenum_close_52(UEnumeration* en);



extern "C++" { namespace icu_52 {
# 64 "../../common/unicode/uenum.h"
class LocalUEnumerationPointer : public LocalPointerBase<UEnumeration> { public: explicit LocalUEnumerationPointer(UEnumeration *p=__null) : LocalPointerBase<UEnumeration>(p) {} ~LocalUEnumerationPointer() { uenum_close_52(ptr); } void adoptInstead(UEnumeration *p) { uenum_close_52(ptr); ptr=p; } };

} }
# 84 "../../common/unicode/uenum.h"
extern "C" __attribute__((visibility("default"))) int32_t
uenum_count_52(UEnumeration* en, UErrorCode* status);
# 108 "../../common/unicode/uenum.h"
extern "C" __attribute__((visibility("default"))) const UChar*
uenum_unext_52(UEnumeration* en,
            int32_t* resultLength,
            UErrorCode* status);
# 141 "../../common/unicode/uenum.h"
extern "C" __attribute__((visibility("default"))) const char*
uenum_next_52(UEnumeration* en,
           int32_t* resultLength,
           UErrorCode* status);
# 155 "../../common/unicode/uenum.h"
extern "C" __attribute__((visibility("default"))) void
uenum_reset_52(UEnumeration* en, UErrorCode* status);
# 169 "../../common/unicode/uenum.h"
extern "C" __attribute__((visibility("default"))) UEnumeration*
uenum_openFromStringEnumeration_52(icu::StringEnumeration* adopted, UErrorCode* ec);
# 185 "../../common/unicode/uenum.h"
extern "C" __attribute__((visibility("default"))) UEnumeration*
uenum_openUCharStringsEnumeration_52(const UChar* const strings[], int32_t count,
                                 UErrorCode* ec);
# 202 "../../common/unicode/uenum.h"
extern "C" __attribute__((visibility("default"))) UEnumeration*
uenum_openCharStringsEnumeration_52(const char* const strings[], int32_t count,
                                 UErrorCode* ec);
# 26 "../../common/unicode/uloc.h" 2
# 336 "../../common/unicode/uloc.h"
typedef enum {



  ULOC_ACTUAL_LOCALE = 0,



  ULOC_VALID_LOCALE = 1,





  ULOC_REQUESTED_LOCALE = 2,


  ULOC_DATA_LOCALE_TYPE_LIMIT = 3
} ULocDataLocaleType ;
# 368 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) const char*
uloc_getDefault_52(void);
# 388 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) void
uloc_setDefault_52(const char* localeID,
        UErrorCode* status);
# 405 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) int32_t
uloc_getLanguage_52(const char* localeID,
         char* language,
         int32_t languageCapacity,
         UErrorCode* err);
# 423 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) int32_t
uloc_getScript_52(const char* localeID,
         char* script,
         int32_t scriptCapacity,
         UErrorCode* err);
# 441 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) int32_t
uloc_getCountry_52(const char* localeID,
        char* country,
        int32_t countryCapacity,
        UErrorCode* err);
# 459 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) int32_t
uloc_getVariant_52(const char* localeID,
        char* variant,
        int32_t variantCapacity,
        UErrorCode* err);
# 482 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) int32_t
uloc_getName_52(const char* localeID,
         char* name,
         int32_t nameCapacity,
         UErrorCode* err);
# 505 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) int32_t
uloc_canonicalize_52(const char* localeID,
         char* name,
         int32_t nameCapacity,
         UErrorCode* err);
# 518 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) const char*
uloc_getISO3Language_52(const char* localeID);
# 529 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) const char*
uloc_getISO3Country_52(const char* localeID);
# 540 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) uint32_t
uloc_getLCID_52(const char* localeID);
# 559 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) int32_t
uloc_getDisplayLanguage_52(const char* locale,
            const char* displayLocale,
            UChar* language,
            int32_t languageCapacity,
            UErrorCode* status);
# 582 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) int32_t
uloc_getDisplayScript_52(const char* locale,
            const char* displayLocale,
            UChar* script,
            int32_t scriptCapacity,
            UErrorCode* status);
# 605 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) int32_t
uloc_getDisplayCountry_52(const char* locale,
                       const char* displayLocale,
                       UChar* country,
                       int32_t countryCapacity,
                       UErrorCode* status);
# 629 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) int32_t
uloc_getDisplayVariant_52(const char* locale,
                       const char* displayLocale,
                       UChar* variant,
                       int32_t variantCapacity,
                       UErrorCode* status);
# 676 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) int32_t
uloc_getDisplayKeyword_52(const char* keyword,
                       const char* displayLocale,
                       UChar* dest,
                       int32_t destCapacity,
                       UErrorCode* status);
# 702 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) int32_t
uloc_getDisplayKeywordValue_52( const char* locale,
                               const char* keyword,
                               const char* displayLocale,
                               UChar* dest,
                               int32_t destCapacity,
                               UErrorCode* status);
# 725 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) int32_t
uloc_getDisplayName_52(const char* localeID,
            const char* inLocaleID,
            UChar* result,
            int32_t maxResultSize,
            UErrorCode* err);
# 743 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) const char*
uloc_getAvailable_52(int32_t n);







extern "C" __attribute__((visibility("default"))) int32_t uloc_countAvailable_52(void);
# 765 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) const char* const*
uloc_getISOLanguages_52(void);
# 777 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) const char* const*
uloc_getISOCountries_52(void);
# 793 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) int32_t
uloc_getParent_52(const char* localeID,
                 char* parent,
                 int32_t parentCapacity,
                 UErrorCode* err);
# 824 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) int32_t
uloc_getBaseName_52(const char* localeID,
         char* name,
         int32_t nameCapacity,
         UErrorCode* err);
# 839 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) UEnumeration*
uloc_openKeywords_52(const char* localeID,
                        UErrorCode* status);
# 854 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) int32_t
uloc_getKeywordValue_52(const char* localeID,
                     const char* keywordName,
                     char* buffer, int32_t bufferCapacity,
                     UErrorCode* status);
# 883 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) int32_t
uloc_setKeywordValue_52(const char* keywordName,
                     const char* keywordValue,
                     char* buffer, int32_t bufferCapacity,
                     UErrorCode* status);






typedef enum {
  ULOC_LAYOUT_LTR = 0,
  ULOC_LAYOUT_RTL = 1,
  ULOC_LAYOUT_TTB = 2,
  ULOC_LAYOUT_BTT = 3,
  ULOC_LAYOUT_UNKNOWN
} ULayoutType;
# 910 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) ULayoutType
uloc_getCharacterOrientation_52(const char* localeId,
                             UErrorCode *status);
# 922 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) ULayoutType
uloc_getLineOrientation_52(const char* localeId,
                        UErrorCode *status);







typedef enum {
  ULOC_ACCEPT_FAILED = 0,
  ULOC_ACCEPT_VALID = 1,
  ULOC_ACCEPT_FALLBACK = 2


} UAcceptResult;
# 953 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) int32_t
uloc_acceptLanguageFromHTTP_52(char *result, int32_t resultAvailable,
                            UAcceptResult *outResult,
                            const char *httpAcceptLanguage,
                            UEnumeration* availableLocales,
                            UErrorCode *status);
# 973 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) int32_t
uloc_acceptLanguage_52(char *result, int32_t resultAvailable,
                    UAcceptResult *outResult, const char **acceptList,
                    int32_t acceptListCount,
                    UEnumeration* availableLocales,
                    UErrorCode *status);
# 993 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) int32_t
uloc_getLocaleForLCID_52(uint32_t hostID, char *locale, int32_t localeCapacity,
                    UErrorCode *status);
# 1031 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) int32_t
uloc_addLikelySubtags_52(const char* localeID,
         char* maximizedLocaleID,
         int32_t maximizedLocaleIDCapacity,
         UErrorCode* err);
# 1071 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) int32_t
uloc_minimizeSubtags_52(const char* localeID,
         char* minimizedLocaleID,
         int32_t minimizedLocaleIDCapacity,
         UErrorCode* err);
# 1100 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) int32_t
uloc_forLanguageTag_52(const char* langtag,
                    char* localeID,
                    int32_t localeIDCapacity,
                    int32_t* parsedLength,
                    UErrorCode* err);
# 1128 "../../common/unicode/uloc.h"
extern "C" __attribute__((visibility("default"))) int32_t
uloc_toLanguageTag_52(const char* localeID,
                   char* langtag,
                   int32_t langtagCapacity,
                   UBool strict,
                   UErrorCode* err);
# 37 "../../common/unicode/locid.h" 2







extern "C++" { namespace icu_52 {


void locale_available_init();
# 185 "../../common/unicode/locid.h"
class Locale : public UObject {
public:

    static const Locale & getRoot(void);

    static const Locale & getEnglish(void);

    static const Locale & getFrench(void);

    static const Locale & getGerman(void);

    static const Locale & getItalian(void);

    static const Locale & getJapanese(void);

    static const Locale & getKorean(void);

    static const Locale & getChinese(void);

    static const Locale & getSimplifiedChinese(void);

    static const Locale & getTraditionalChinese(void);


    static const Locale & getFrance(void);

    static const Locale & getGermany(void);

    static const Locale & getItaly(void);

    static const Locale & getJapan(void);

    static const Locale & getKorea(void);

    static const Locale & getChina(void);

    static const Locale & getPRC(void);

    static const Locale & getTaiwan(void);

    static const Locale & getUK(void);

    static const Locale & getUS(void);

    static const Locale & getCanada(void);

    static const Locale & getCanadaFrench(void);
# 241 "../../common/unicode/locid.h"
    Locale();
# 267 "../../common/unicode/locid.h"
    Locale( const char * language,
            const char * country = 0,
            const char * variant = 0,
            const char * keywordsAndValues = 0);







    Locale(const Locale& other);






    virtual ~Locale() ;
# 294 "../../common/unicode/locid.h"
    Locale& operator=(const Locale& other);
# 303 "../../common/unicode/locid.h"
    UBool operator==(const Locale& other) const;
# 313 "../../common/unicode/locid.h"
    UBool operator!=(const Locale& other) const;
# 326 "../../common/unicode/locid.h"
    Locale *clone() const;
# 344 "../../common/unicode/locid.h"
    static const Locale& getDefault(void);
# 358 "../../common/unicode/locid.h"
    static void setDefault(const Locale& newLocale,
                                     UErrorCode& success);
# 371 "../../common/unicode/locid.h"
    static Locale createFromName(const char *name);
# 381 "../../common/unicode/locid.h"
    static Locale createCanonical(const char* name);






    inline const char * getLanguage( ) const;
# 397 "../../common/unicode/locid.h"
    inline const char * getScript( ) const;






    inline const char * getCountry( ) const;






    inline const char * getVariant( ) const;
# 421 "../../common/unicode/locid.h"
    inline const char * getName() const;
# 430 "../../common/unicode/locid.h"
    const char * getBaseName() const;
# 441 "../../common/unicode/locid.h"
    StringEnumeration * createKeywords(UErrorCode &status) const;
# 454 "../../common/unicode/locid.h"
    int32_t getKeywordValue(const char* keywordName, char *buffer, int32_t bufferCapacity, UErrorCode &status) const;
# 470 "../../common/unicode/locid.h"
    void setKeywordValue(const char* keywordName, const char* keywordValue, UErrorCode &status);







    const char * getISO3Language() const;






    const char * getISO3Country() const;
# 494 "../../common/unicode/locid.h"
    uint32_t getLCID(void) const;
# 505 "../../common/unicode/locid.h"
    UnicodeString& getDisplayLanguage(UnicodeString& dispLang) const;
# 520 "../../common/unicode/locid.h"
    UnicodeString& getDisplayLanguage( const Locale& displayLocale,
                                                UnicodeString& dispLang) const;
# 532 "../../common/unicode/locid.h"
    UnicodeString& getDisplayScript( UnicodeString& dispScript) const;
# 548 "../../common/unicode/locid.h"
    UnicodeString& getDisplayScript( const Locale& displayLocale,
                                               UnicodeString& dispScript) const;
# 560 "../../common/unicode/locid.h"
    UnicodeString& getDisplayCountry( UnicodeString& dispCountry) const;
# 576 "../../common/unicode/locid.h"
    UnicodeString& getDisplayCountry( const Locale& displayLocale,
                                                UnicodeString& dispCountry) const;
# 586 "../../common/unicode/locid.h"
    UnicodeString& getDisplayVariant( UnicodeString& dispVar) const;
# 596 "../../common/unicode/locid.h"
    UnicodeString& getDisplayVariant( const Locale& displayLocale,
                                                UnicodeString& dispVar) const;
# 610 "../../common/unicode/locid.h"
    UnicodeString& getDisplayName( UnicodeString& name) const;
# 624 "../../common/unicode/locid.h"
    UnicodeString& getDisplayName( const Locale& displayLocale,
                                            UnicodeString& name) const;





    int32_t hashCode(void) const;
# 641 "../../common/unicode/locid.h"
    void setToBogus();






    UBool isBogus(void) const;
# 658 "../../common/unicode/locid.h"
    static const Locale* getAvailableLocales(int32_t& count);
# 668 "../../common/unicode/locid.h"
    static const char* const* getISOCountries();
# 678 "../../common/unicode/locid.h"
    static const char* const* getISOLanguages();






    static UClassID getStaticClassID();






    virtual UClassID getDynamicClassID() const;

protected:





    void setFromPOSIXID(const char *posixID);


private:







    Locale& init(const char* cLocaleID, UBool canonicalize);






    enum ELocaleType {
        eBOGUS
    };
    Locale(ELocaleType);




    static Locale *getLocaleCache(void);

    char language[12];
    char script[6];
    char country[4];
    int32_t variantBegin;
    char* fullName;
    char fullNameBuffer[157];

    char* baseName;
    char baseNameBuffer[157];

    UBool fIsBogus;

    static const Locale &getLocale(int locid);





    friend Locale *locale_set_default_internal(const char *, UErrorCode& status);




    friend void locale_available_init();
};

inline UBool
Locale::operator!=(const Locale& other) const
{
    return !operator==(other);
}

inline const char *
Locale::getCountry() const
{
    return country;
}

inline const char *
Locale::getLanguage() const
{
    return language;
}

inline const char *
Locale::getScript() const
{
    return script;
}

inline const char *
Locale::getVariant() const
{
    getBaseName();
    return &baseName[variantBegin];
}

inline const char *
Locale::getName() const
{
    return fullName;
}

inline UBool
Locale::isBogus(void) const {
    return fIsBogus;
}

} }
# 38 "../../i18n/unicode/calendar.h" 2
# 1 "../../i18n/unicode/timezone.h" 1
# 41 "../../i18n/unicode/timezone.h"
# 1 "../../common/unicode/ures.h" 1
# 52 "../../common/unicode/ures.h"
struct UResourceBundle;




typedef struct UResourceBundle UResourceBundle;






typedef enum {

    URES_NONE=-1,


    URES_STRING=0,


    URES_BINARY=1,


    URES_TABLE=2,
# 84 "../../common/unicode/ures.h"
    URES_ALIAS=3,
# 93 "../../common/unicode/ures.h"
    URES_INT=7,


    URES_ARRAY=8,






    URES_INT_VECTOR = 14,


    RES_NONE=URES_NONE,

    RES_STRING=URES_STRING,

    RES_BINARY=URES_BINARY,

    RES_TABLE=URES_TABLE,

    RES_ALIAS=URES_ALIAS,

    RES_INT=URES_INT,

    RES_ARRAY=URES_ARRAY,

    RES_INT_VECTOR=URES_INT_VECTOR,

    RES_RESERVED=15,


    URES_LIMIT = 16
} UResType;
# 160 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) UResourceBundle*
ures_open_52(const char* packageName,
          const char* locale,
          UErrorCode* status);
# 183 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) UResourceBundle*
ures_openDirect_52(const char* packageName,
                const char* locale,
                UErrorCode* status);
# 206 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) UResourceBundle*
ures_openU_52(const UChar* packageName,
           const char* locale,
           UErrorCode* status);
# 228 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) int32_t
ures_countArrayItems_52(const UResourceBundle* resourceBundle,
                     const char* resourceKey,
                     UErrorCode* err);
# 241 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) void
ures_close_52(UResourceBundle* resourceBundle);



extern "C++" { namespace icu_52 {
# 257 "../../common/unicode/ures.h"
class LocalUResourceBundlePointer : public LocalPointerBase<UResourceBundle> { public: explicit LocalUResourceBundlePointer(UResourceBundle *p=__null) : LocalPointerBase<UResourceBundle>(p) {} ~LocalUResourceBundlePointer() { ures_close_52(ptr); } void adoptInstead(UResourceBundle *p) { ures_close_52(ptr); ptr=p; } };

} }
# 274 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) const char*
ures_getVersionNumber_52(const UResourceBundle* resourceBundle);
# 287 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) void
ures_getVersion_52(const UResourceBundle* resB,
                UVersionInfo versionInfo);
# 304 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) const char*
ures_getLocale_52(const UResourceBundle* resourceBundle,
               UErrorCode* status);
# 321 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) const char*
ures_getLocaleByType_52(const UResourceBundle* resourceBundle,
                     ULocDataLocaleType type,
                     UErrorCode* status);
# 344 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) void
ures_openFillIn_52(UResourceBundle *r,
                const char* packageName,
                const char* localeID,
                UErrorCode* status);
# 368 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) const UChar*
ures_getString_52(const UResourceBundle* resourceBundle,
               int32_t* len,
               UErrorCode* status);
# 420 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) const char *
ures_getUTF8String_52(const UResourceBundle *resB,
                   char *dest, int32_t *length,
                   UBool forceCopy,
                   UErrorCode *status);
# 443 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) const uint8_t*
ures_getBinary_52(const UResourceBundle* resourceBundle,
               int32_t* len,
               UErrorCode* status);
# 465 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) const int32_t*
ures_getIntVector_52(const UResourceBundle* resourceBundle,
                  int32_t* len,
                  UErrorCode* status);
# 486 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) uint32_t
ures_getUInt_52(const UResourceBundle* resourceBundle,
             UErrorCode *status);
# 506 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) int32_t
ures_getInt_52(const UResourceBundle* resourceBundle,
            UErrorCode *status);
# 520 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) int32_t
ures_getSize_52(const UResourceBundle *resourceBundle);
# 531 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) UResType
ures_getType_52(const UResourceBundle *resourceBundle);
# 542 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) const char *
ures_getKey_52(const UResourceBundle *resourceBundle);
# 555 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) void
ures_resetIterator_52(UResourceBundle *resourceBundle);
# 565 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) UBool
ures_hasNext_52(const UResourceBundle *resourceBundle);
# 580 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) UResourceBundle*
ures_getNextResource_52(UResourceBundle *resourceBundle,
                     UResourceBundle *fillIn,
                     UErrorCode *status);
# 597 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) const UChar*
ures_getNextString_52(UResourceBundle *resourceBundle,
                   int32_t* len,
                   const char ** key,
                   UErrorCode *status);
# 615 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) UResourceBundle*
ures_getByIndex_52(const UResourceBundle *resourceBundle,
                int32_t indexR,
                UResourceBundle *fillIn,
                UErrorCode *status);
# 632 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) const UChar*
ures_getStringByIndex_52(const UResourceBundle *resourceBundle,
                      int32_t indexS,
                      int32_t* len,
                      UErrorCode *status);
# 686 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) const char *
ures_getUTF8StringByIndex_52(const UResourceBundle *resB,
                          int32_t stringIndex,
                          char *dest, int32_t *pLength,
                          UBool forceCopy,
                          UErrorCode *status);
# 705 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) UResourceBundle*
ures_getByKey_52(const UResourceBundle *resourceBundle,
              const char* key,
              UResourceBundle *fillIn,
              UErrorCode *status);
# 723 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) const UChar*
ures_getStringByKey_52(const UResourceBundle *resB,
                    const char* key,
                    int32_t* len,
                    UErrorCode *status);
# 779 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) const char *
ures_getUTF8StringByKey_52(const UResourceBundle *resB,
                        const char *key,
                        char *dest, int32_t *pLength,
                        UBool forceCopy,
                        UErrorCode *status);




extern "C++" { namespace icu_52 {
# 801 "../../common/unicode/ures.h"
inline UnicodeString
ures_getUnicodeString(const UResourceBundle *resB,
                      UErrorCode* status)
{
    int32_t len = 0;
    const UChar *r = ures_getString_52(resB, &len, status);
    return UnicodeString(1, r, len);
}
# 820 "../../common/unicode/ures.h"
inline UnicodeString
ures_getNextUnicodeString(UResourceBundle *resB,
                          const char ** key,
                          UErrorCode* status)
{
    int32_t len = 0;
    const UChar* r = ures_getNextString_52(resB, &len, key, status);
    return UnicodeString(1, r, len);
}
# 839 "../../common/unicode/ures.h"
inline UnicodeString
ures_getUnicodeStringByIndex(const UResourceBundle *resB,
                             int32_t indexS,
                             UErrorCode* status)
{
    int32_t len = 0;
    const UChar* r = ures_getStringByIndex_52(resB, indexS, &len, status);
    return UnicodeString(1, r, len);
}
# 859 "../../common/unicode/ures.h"
inline UnicodeString
ures_getUnicodeStringByKey(const UResourceBundle *resB,
                           const char* key,
                           UErrorCode* status)
{
    int32_t len = 0;
    const UChar* r = ures_getStringByKey_52(resB, key, &len, status);
    return UnicodeString(1, r, len);
}

} }
# 881 "../../common/unicode/ures.h"
extern "C" __attribute__((visibility("default"))) UEnumeration*
ures_openAvailableLocales_52(const char *packageName, UErrorCode *status);
# 42 "../../i18n/unicode/timezone.h" 2
# 1 "../../i18n/unicode/ucal.h" 1
# 153 "../../i18n/unicode/ucal.h"
typedef void* UCalendar;




enum UCalendarType {





  UCAL_TRADITIONAL,




  UCAL_DEFAULT = UCAL_TRADITIONAL,




  UCAL_GREGORIAN
};


typedef enum UCalendarType UCalendarType;




enum UCalendarDateFields {





  UCAL_ERA,





  UCAL_YEAR,
# 216 "../../i18n/unicode/ucal.h"
  UCAL_MONTH,
# 229 "../../i18n/unicode/ucal.h"
  UCAL_WEEK_OF_YEAR,
# 244 "../../i18n/unicode/ucal.h"
  UCAL_WEEK_OF_MONTH,
# 253 "../../i18n/unicode/ucal.h"
  UCAL_DATE,






  UCAL_DAY_OF_YEAR,
# 276 "../../i18n/unicode/ucal.h"
  UCAL_DAY_OF_WEEK,
# 301 "../../i18n/unicode/ucal.h"
  UCAL_DAY_OF_WEEK_IN_MONTH,
# 312 "../../i18n/unicode/ucal.h"
  UCAL_AM_PM,
# 323 "../../i18n/unicode/ucal.h"
  UCAL_HOUR,
# 332 "../../i18n/unicode/ucal.h"
  UCAL_HOUR_OF_DAY,







  UCAL_MINUTE,







  UCAL_SECOND,







  UCAL_MILLISECOND,






  UCAL_ZONE_OFFSET,






  UCAL_DST_OFFSET,
# 379 "../../i18n/unicode/ucal.h"
  UCAL_YEAR_WOY,







  UCAL_DOW_LOCAL,







  UCAL_EXTENDED_YEAR,
# 407 "../../i18n/unicode/ucal.h"
  UCAL_JULIAN_DAY,
# 418 "../../i18n/unicode/ucal.h"
  UCAL_MILLISECONDS_IN_DAY,





  UCAL_IS_LEAP_MONTH,





  UCAL_FIELD_COUNT,
# 440 "../../i18n/unicode/ucal.h"
  UCAL_DAY_OF_MONTH=UCAL_DATE
};


typedef enum UCalendarDateFields UCalendarDateFields;
# 453 "../../i18n/unicode/ucal.h"
enum UCalendarDaysOfWeek {

  UCAL_SUNDAY = 1,

  UCAL_MONDAY,

  UCAL_TUESDAY,

  UCAL_WEDNESDAY,

  UCAL_THURSDAY,

  UCAL_FRIDAY,

  UCAL_SATURDAY
};


typedef enum UCalendarDaysOfWeek UCalendarDaysOfWeek;




enum UCalendarMonths {

  UCAL_JANUARY,

  UCAL_FEBRUARY,

  UCAL_MARCH,

  UCAL_APRIL,

  UCAL_MAY,

  UCAL_JUNE,

  UCAL_JULY,

  UCAL_AUGUST,

  UCAL_SEPTEMBER,

  UCAL_OCTOBER,

  UCAL_NOVEMBER,

  UCAL_DECEMBER,




  UCAL_UNDECIMBER
};


typedef enum UCalendarMonths UCalendarMonths;




enum UCalendarAMPMs {

  UCAL_AM,

  UCAL_PM
};


typedef enum UCalendarAMPMs UCalendarAMPMs;







enum USystemTimeZoneType {




    UCAL_ZONE_TYPE_ANY,




    UCAL_ZONE_TYPE_CANONICAL,




    UCAL_ZONE_TYPE_CANONICAL_LOCATION
};


typedef enum USystemTimeZoneType USystemTimeZoneType;
# 567 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) UEnumeration*
ucal_openTimeZoneIDEnumeration_52(USystemTimeZoneType zoneType, const char* region,
                                const int32_t* rawOffset, UErrorCode* ec);
# 582 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) UEnumeration*
ucal_openTimeZones_52(UErrorCode* ec);
# 601 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) UEnumeration*
ucal_openCountryTimeZones_52(const char* country, UErrorCode* ec);
# 620 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) int32_t
ucal_getDefaultTimeZone_52(UChar* result, int32_t resultCapacity, UErrorCode* ec);
# 632 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) void
ucal_setDefaultTimeZone_52(const UChar* zoneID, UErrorCode* ec);
# 651 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) int32_t
ucal_getDSTSavings_52(const UChar* zoneID, UErrorCode* ec);







extern "C" __attribute__((visibility("default"))) UDate
ucal_getNow_52(void);
# 686 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) UCalendar*
ucal_open_52(const UChar* zoneID,
          int32_t len,
          const char* locale,
          UCalendarType type,
          UErrorCode* status);







extern "C" __attribute__((visibility("default"))) void
ucal_close_52(UCalendar *cal);



extern "C++" { namespace icu_52 {
# 715 "../../i18n/unicode/ucal.h"
class LocalUCalendarPointer : public LocalPointerBase<UCalendar> { public: explicit LocalUCalendarPointer(UCalendar *p=__null) : LocalPointerBase<UCalendar>(p) {} ~LocalUCalendarPointer() { ucal_close_52(ptr); } void adoptInstead(UCalendar *p) { ucal_close_52(ptr); ptr=p; } };

} }
# 729 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) UCalendar*
ucal_clone_52(const UCalendar* cal,
           UErrorCode* status);
# 742 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) void
ucal_setTimeZone_52(UCalendar* cal,
                 const UChar* zoneID,
                 int32_t len,
                 UErrorCode* status);
# 759 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) int32_t
ucal_getTimeZoneID_52(const UCalendar *cal,
                   UChar *result,
                   int32_t resultLength,
                   UErrorCode *status);






enum UCalendarDisplayNameType {

  UCAL_STANDARD,

  UCAL_SHORT_STANDARD,

  UCAL_DST,

  UCAL_SHORT_DST
};


typedef enum UCalendarDisplayNameType UCalendarDisplayNameType;
# 797 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) int32_t
ucal_getTimeZoneDisplayName_52(const UCalendar* cal,
                            UCalendarDisplayNameType type,
                            const char* locale,
                            UChar* result,
                            int32_t resultLength,
                            UErrorCode* status);
# 813 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) UBool
ucal_inDaylightTime_52(const UCalendar* cal,
                    UErrorCode* status );
# 837 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) void
ucal_setGregorianChange_52(UCalendar *cal, UDate date, UErrorCode *pErrorCode);
# 860 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) UDate
ucal_getGregorianChange_52(const UCalendar *cal, UErrorCode *pErrorCode);





enum UCalendarAttribute {




  UCAL_LENIENT,




  UCAL_FIRST_DAY_OF_WEEK,




  UCAL_MINIMAL_DAYS_IN_FIRST_WEEK,





  UCAL_REPEATED_WALL_TIME,





  UCAL_SKIPPED_WALL_TIME
};


typedef enum UCalendarAttribute UCalendarAttribute;






enum UCalendarWallTimeOption {






    UCAL_WALLTIME_LAST,






    UCAL_WALLTIME_FIRST,





    UCAL_WALLTIME_NEXT_VALID
};

typedef enum UCalendarWallTimeOption UCalendarWallTimeOption;
# 941 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) int32_t
ucal_getAttribute_52(const UCalendar* cal,
                  UCalendarAttribute attr);
# 956 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) void
ucal_setAttribute_52(UCalendar* cal,
                  UCalendarAttribute attr,
                  int32_t newValue);
# 970 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) const char*
ucal_getAvailable_52(int32_t localeIndex);
# 981 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) int32_t
ucal_countAvailable_52(void);
# 995 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) UDate
ucal_getMillis_52(const UCalendar* cal,
               UErrorCode* status);
# 1010 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) void
ucal_setMillis_52(UCalendar* cal,
               UDate dateTime,
               UErrorCode* status );
# 1029 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) void
ucal_setDate_52(UCalendar* cal,
             int32_t year,
             int32_t month,
             int32_t date,
             UErrorCode* status);
# 1053 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) void
ucal_setDateTime_52(UCalendar* cal,
                 int32_t year,
                 int32_t month,
                 int32_t date,
                 int32_t hour,
                 int32_t minute,
                 int32_t second,
                 UErrorCode* status);
# 1072 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) UBool
ucal_equivalentTo_52(const UCalendar* cal1,
                  const UCalendar* cal2);
# 1094 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) void
ucal_add_52(UCalendar* cal,
         UCalendarDateFields field,
         int32_t amount,
         UErrorCode* status);
# 1124 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) void
ucal_roll_52(UCalendar* cal,
          UCalendarDateFields field,
          int32_t amount,
          UErrorCode* status);
# 1146 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) int32_t
ucal_get_52(const UCalendar* cal,
         UCalendarDateFields field,
         UErrorCode* status );
# 1166 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) void
ucal_set_52(UCalendar* cal,
         UCalendarDateFields field,
         int32_t value);
# 1186 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) UBool
ucal_isSet_52(const UCalendar* cal,
           UCalendarDateFields field);
# 1204 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) void
ucal_clearField_52(UCalendar* cal,
                UCalendarDateFields field);
# 1218 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) void
ucal_clear_52(UCalendar* calendar);





enum UCalendarLimitType {

  UCAL_MINIMUM,

  UCAL_MAXIMUM,

  UCAL_GREATEST_MINIMUM,

  UCAL_LEAST_MAXIMUM,

  UCAL_ACTUAL_MINIMUM,

  UCAL_ACTUAL_MAXIMUM
};


typedef enum UCalendarLimitType UCalendarLimitType;
# 1257 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) int32_t
ucal_getLimit_52(const UCalendar* cal,
              UCalendarDateFields field,
              UCalendarLimitType type,
              UErrorCode* status);
# 1270 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) const char *
ucal_getLocaleByType_52(const UCalendar *cal, ULocDataLocaleType type, UErrorCode* status);







extern "C" __attribute__((visibility("default"))) const char *
ucal_getTZDataVersion_52(UErrorCode* status);
# 1300 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) int32_t
ucal_getCanonicalTimeZoneID_52(const UChar* id, int32_t len,
                            UChar* result, int32_t resultCapacity, UBool *isSystemID, UErrorCode* status);







extern "C" __attribute__((visibility("default"))) const char *
ucal_getType_52(const UCalendar *cal, UErrorCode* status);
# 1329 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) UEnumeration*
ucal_getKeywordValuesForLocale_52(const char* key,
                               const char* locale,
                               UBool commonlyUsed,
                               UErrorCode* status);





enum UCalendarWeekdayType {




  UCAL_WEEKDAY,




  UCAL_WEEKEND,





  UCAL_WEEKEND_ONSET,





  UCAL_WEEKEND_CEASE
};


typedef enum UCalendarWeekdayType UCalendarWeekdayType;
# 1384 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) UCalendarWeekdayType
ucal_getDayOfWeekType_52(const UCalendar *cal, UCalendarDaysOfWeek dayOfWeek, UErrorCode* status);
# 1402 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) int32_t
ucal_getWeekendTransition_52(const UCalendar *cal, UCalendarDaysOfWeek dayOfWeek, UErrorCode *status);
# 1415 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) UBool
ucal_isWeekend_52(const UCalendar *cal, UDate date, UErrorCode *status);
# 1442 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) int32_t
ucal_getFieldDifference_52(UCalendar* cal,
                        UDate target,
                        UCalendarDateFields field,
                        UErrorCode* status);





enum UTimeZoneTransitionType {





    UCAL_TZ_TRANSITION_NEXT,





    UCAL_TZ_TRANSITION_NEXT_INCLUSIVE,





    UCAL_TZ_TRANSITION_PREVIOUS,





    UCAL_TZ_TRANSITION_PREVIOUS_INCLUSIVE
};

typedef enum UTimeZoneTransitionType UTimeZoneTransitionType;
# 1496 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) UBool
ucal_getTimeZoneTransitionDate_52(const UCalendar* cal, UTimeZoneTransitionType type,
                               UDate* transition, UErrorCode* status);
# 1525 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) int32_t
ucal_getWindowsTimeZoneID_52(const UChar* id, int32_t len,
                            UChar* winid, int32_t winidCapacity, UErrorCode* status);
# 1557 "../../i18n/unicode/ucal.h"
extern "C" __attribute__((visibility("default"))) int32_t
ucal_getTimeZoneIDForWindowsID_52(const UChar* winid, int32_t len, const char* region,
                                UChar* id, int32_t idCapacity, UErrorCode* status);
# 43 "../../i18n/unicode/timezone.h" 2

extern "C++" { namespace icu_52 {

class StringEnumeration;
# 129 "../../i18n/unicode/timezone.h"
class TimeZone : public UObject {
public:



    virtual ~TimeZone();
# 148 "../../i18n/unicode/timezone.h"
    static const TimeZone& getUnknown();
# 162 "../../i18n/unicode/timezone.h"
    static const TimeZone* getGMT(void);
# 175 "../../i18n/unicode/timezone.h"
    static TimeZone* createTimeZone(const UnicodeString& ID);
# 192 "../../i18n/unicode/timezone.h"
    static StringEnumeration* createTimeZoneIDEnumeration(
        USystemTimeZoneType zoneType,
        const char* region,
        const int32_t* rawOffset,
        UErrorCode& ec);
# 205 "../../i18n/unicode/timezone.h"
    static StringEnumeration* createEnumeration();
# 224 "../../i18n/unicode/timezone.h"
    static StringEnumeration* createEnumeration(int32_t rawOffset);
# 236 "../../i18n/unicode/timezone.h"
    static StringEnumeration* createEnumeration(const char* country);
# 252 "../../i18n/unicode/timezone.h"
    static int32_t countEquivalentIDs(const UnicodeString& id);
# 273 "../../i18n/unicode/timezone.h"
    static const UnicodeString getEquivalentID(const UnicodeString& id,
                                               int32_t index);
# 288 "../../i18n/unicode/timezone.h"
    static TimeZone* createDefault(void);
# 303 "../../i18n/unicode/timezone.h"
    static void adoptDefault(TimeZone* zone);
# 316 "../../i18n/unicode/timezone.h"
    static void setDefault(const TimeZone& zone);
# 325 "../../i18n/unicode/timezone.h"
    static const char* getTZDataVersion(UErrorCode& status);
# 340 "../../i18n/unicode/timezone.h"
    static UnicodeString& getCanonicalID(const UnicodeString& id,
        UnicodeString& canonicalID, UErrorCode& status);
# 358 "../../i18n/unicode/timezone.h"
    static UnicodeString& getCanonicalID(const UnicodeString& id,
        UnicodeString& canonicalID, UBool& isSystemID, UErrorCode& status);
# 384 "../../i18n/unicode/timezone.h"
    static UnicodeString& getWindowsID(const UnicodeString& id,
        UnicodeString& winid, UErrorCode& status);
# 413 "../../i18n/unicode/timezone.h"
    static UnicodeString& getIDForWindowsID(const UnicodeString& winid, const char* region,
        UnicodeString& id, UErrorCode& status);
# 427 "../../i18n/unicode/timezone.h"
    virtual UBool operator==(const TimeZone& that) const;
# 438 "../../i18n/unicode/timezone.h"
    UBool operator!=(const TimeZone& that) const {return !operator==(that);}
# 464 "../../i18n/unicode/timezone.h"
    virtual int32_t getOffset(uint8_t era, int32_t year, int32_t month, int32_t day,
                              uint8_t dayOfWeek, int32_t millis, UErrorCode& status) const = 0;
# 487 "../../i18n/unicode/timezone.h"
    virtual int32_t getOffset(uint8_t era, int32_t year, int32_t month, int32_t day,
                           uint8_t dayOfWeek, int32_t milliseconds,
                           int32_t monthLength, UErrorCode& status) const = 0;
# 514 "../../i18n/unicode/timezone.h"
    virtual void getOffset(UDate date, UBool local, int32_t& rawOffset,
                           int32_t& dstOffset, UErrorCode& ec) const;
# 524 "../../i18n/unicode/timezone.h"
    virtual void setRawOffset(int32_t offsetMillis) = 0;
# 533 "../../i18n/unicode/timezone.h"
    virtual int32_t getRawOffset(void) const = 0;
# 542 "../../i18n/unicode/timezone.h"
    UnicodeString& getID(UnicodeString& ID) const;
# 557 "../../i18n/unicode/timezone.h"
    void setID(const UnicodeString& ID);





    enum EDisplayType {




        SHORT = 1,




        LONG,




        SHORT_GENERIC,




        LONG_GENERIC,





        SHORT_GMT,





        LONG_GMT,





        SHORT_COMMONLY_USED,





        GENERIC_LOCATION
    };
# 621 "../../i18n/unicode/timezone.h"
    UnicodeString& getDisplayName(UnicodeString& result) const;
# 636 "../../i18n/unicode/timezone.h"
    UnicodeString& getDisplayName(const Locale& locale, UnicodeString& result) const;
# 650 "../../i18n/unicode/timezone.h"
    UnicodeString& getDisplayName(UBool daylight, EDisplayType style, UnicodeString& result) const;
# 666 "../../i18n/unicode/timezone.h"
    UnicodeString& getDisplayName(UBool daylight, EDisplayType style, const Locale& locale, UnicodeString& result) const;
# 702 "../../i18n/unicode/timezone.h"
    virtual UBool useDaylightTime(void) const = 0;
# 717 "../../i18n/unicode/timezone.h"
    virtual UBool inDaylightTime(UDate date, UErrorCode& status) const = 0;
# 727 "../../i18n/unicode/timezone.h"
    virtual UBool hasSameRules(const TimeZone& other) const;
# 736 "../../i18n/unicode/timezone.h"
    virtual TimeZone* clone(void) const = 0;







    static UClassID getStaticClassID(void);
# 757 "../../i18n/unicode/timezone.h"
    virtual UClassID getDynamicClassID(void) const = 0;
# 774 "../../i18n/unicode/timezone.h"
    virtual int32_t getDSTSavings() const;
# 793 "../../i18n/unicode/timezone.h"
    static int32_t getRegion(const UnicodeString& id,
        char *region, int32_t capacity, UErrorCode& status);

protected:





    TimeZone();






    TimeZone(const UnicodeString &id);






    TimeZone(const TimeZone& source);






    TimeZone& operator=(const TimeZone& right);
# 835 "../../i18n/unicode/timezone.h"
    static UResourceBundle* loadRule(const UResourceBundle* top, const UnicodeString& ruleid, UResourceBundle* oldbundle, UErrorCode&status);


private:
    friend class ZoneMeta;


    static TimeZone* createCustomTimeZone(const UnicodeString&);
# 852 "../../i18n/unicode/timezone.h"
    static const UChar* findID(const UnicodeString& id);
# 862 "../../i18n/unicode/timezone.h"
    static const UChar* dereferOlsonLink(const UnicodeString& id);







    static const UChar* getRegion(const UnicodeString& id);

  public:
# 882 "../../i18n/unicode/timezone.h"
    static const UChar* getRegion(const UnicodeString& id, UErrorCode& status);


  private:
# 896 "../../i18n/unicode/timezone.h"
    static UBool parseCustomID(const UnicodeString& id, int32_t& sign, int32_t& hour,
        int32_t& minute, int32_t& second);
# 909 "../../i18n/unicode/timezone.h"
    static UnicodeString& getCustomID(const UnicodeString& id, UnicodeString& normalized,
        UErrorCode& status);
# 921 "../../i18n/unicode/timezone.h"
    static UnicodeString& formatCustomID(int32_t hour, int32_t min, int32_t sec,
        UBool negative, UnicodeString& id);

    UnicodeString fID;

    friend class TZEnumeration;
};




inline UnicodeString&
TimeZone::getID(UnicodeString& ID) const
{
    ID = fID;
    return ID;
}



inline void
TimeZone::setID(const UnicodeString& ID)
{
    fID = ID;
}
} }
# 39 "../../i18n/unicode/calendar.h" 2

# 1 "../../common/unicode/umisc.h" 1
# 27 "../../common/unicode/umisc.h"
extern "C" {




typedef struct UFieldPosition {




  int32_t field;




  int32_t beginIndex;




  int32_t endIndex;
} UFieldPosition;






typedef const void* URegistryKey;


}
# 41 "../../i18n/unicode/calendar.h" 2

extern "C++" { namespace icu_52 {

class ICUServiceFactory;




typedef int32_t UFieldResolutionTable[12][8];

class BasicTimeZone;
# 200 "../../i18n/unicode/calendar.h"
class Calendar : public UObject {
public:







    enum EDateFields {







        ERA,
        YEAR,
        MONTH,
        WEEK_OF_YEAR,
        WEEK_OF_MONTH,
        DATE,
        DAY_OF_YEAR,
        DAY_OF_WEEK,
        DAY_OF_WEEK_IN_MONTH,
        AM_PM,
        HOUR,
        HOUR_OF_DAY,
        MINUTE,
        SECOND,
        MILLISECOND,
        ZONE_OFFSET,
        DST_OFFSET,
        YEAR_WOY,
        DOW_LOCAL,

        EXTENDED_YEAR,
        JULIAN_DAY,
        MILLISECONDS_IN_DAY,
        IS_LEAP_MONTH,

        FIELD_COUNT = UCAL_FIELD_COUNT

    };
# 253 "../../i18n/unicode/calendar.h"
    enum EDaysOfWeek {
        SUNDAY = 1,
        MONDAY,
        TUESDAY,
        WEDNESDAY,
        THURSDAY,
        FRIDAY,
        SATURDAY
    };





    enum EMonths {
        JANUARY,
        FEBRUARY,
        MARCH,
        APRIL,
        MAY,
        JUNE,
        JULY,
        AUGUST,
        SEPTEMBER,
        OCTOBER,
        NOVEMBER,
        DECEMBER,
        UNDECIMBER
    };





    enum EAmpm {
        AM,
        PM
    };






    virtual ~Calendar();







    virtual Calendar* clone(void) const = 0;
# 318 "../../i18n/unicode/calendar.h"
    static Calendar* createInstance(UErrorCode& success);
# 332 "../../i18n/unicode/calendar.h"
    static Calendar* createInstance(TimeZone* zoneToAdopt, UErrorCode& success);
# 345 "../../i18n/unicode/calendar.h"
    static Calendar* createInstance(const TimeZone& zone, UErrorCode& success);
# 357 "../../i18n/unicode/calendar.h"
    static Calendar* createInstance(const Locale& aLocale, UErrorCode& success);
# 372 "../../i18n/unicode/calendar.h"
    static Calendar* createInstance(TimeZone* zoneToAdopt, const Locale& aLocale, UErrorCode& success);
# 386 "../../i18n/unicode/calendar.h"
    static Calendar* createInstance(const TimeZone& zone, const Locale& aLocale, UErrorCode& success);
# 397 "../../i18n/unicode/calendar.h"
    static const Locale* getAvailableLocales(int32_t& count);
# 416 "../../i18n/unicode/calendar.h"
    static StringEnumeration* getKeywordValuesForLocale(const char* key,
                    const Locale& locale, UBool commonlyUsed, UErrorCode& status);
# 426 "../../i18n/unicode/calendar.h"
    static UDate getNow(void);
# 441 "../../i18n/unicode/calendar.h"
    inline UDate getTime(UErrorCode& status) const { return getTimeInMillis(status); }
# 453 "../../i18n/unicode/calendar.h"
    inline void setTime(UDate date, UErrorCode& status) { setTimeInMillis(date, status); }
# 466 "../../i18n/unicode/calendar.h"
    virtual UBool operator==(const Calendar& that) const;
# 476 "../../i18n/unicode/calendar.h"
    UBool operator!=(const Calendar& that) const {return !operator==(that);}
# 488 "../../i18n/unicode/calendar.h"
    virtual UBool isEquivalentTo(const Calendar& other) const;
# 504 "../../i18n/unicode/calendar.h"
    UBool equals(const Calendar& when, UErrorCode& status) const;
# 519 "../../i18n/unicode/calendar.h"
    UBool before(const Calendar& when, UErrorCode& status) const;
# 534 "../../i18n/unicode/calendar.h"
    UBool after(const Calendar& when, UErrorCode& status) const;
# 556 "../../i18n/unicode/calendar.h"
    virtual void add(EDateFields field, int32_t amount, UErrorCode& status);
# 578 "../../i18n/unicode/calendar.h"
    virtual void add(UCalendarDateFields field, int32_t amount, UErrorCode& status);
# 613 "../../i18n/unicode/calendar.h"
    inline void roll(EDateFields field, UBool up, UErrorCode& status);
# 648 "../../i18n/unicode/calendar.h"
    inline void roll(UCalendarDateFields field, UBool up, UErrorCode& status);
# 681 "../../i18n/unicode/calendar.h"
    virtual void roll(EDateFields field, int32_t amount, UErrorCode& status);
# 714 "../../i18n/unicode/calendar.h"
    virtual void roll(UCalendarDateFields field, int32_t amount, UErrorCode& status);
# 771 "../../i18n/unicode/calendar.h"
    virtual int32_t fieldDifference(UDate when, EDateFields field, UErrorCode& status);
# 828 "../../i18n/unicode/calendar.h"
    virtual int32_t fieldDifference(UDate when, UCalendarDateFields field, UErrorCode& status);
# 838 "../../i18n/unicode/calendar.h"
    void adoptTimeZone(TimeZone* value);
# 847 "../../i18n/unicode/calendar.h"
    void setTimeZone(const TimeZone& zone);
# 857 "../../i18n/unicode/calendar.h"
    const TimeZone& getTimeZone(void) const;
# 867 "../../i18n/unicode/calendar.h"
    TimeZone* orphanTimeZone(void);
# 877 "../../i18n/unicode/calendar.h"
    virtual UBool inDaylightTime(UErrorCode& status) const = 0;
# 891 "../../i18n/unicode/calendar.h"
    void setLenient(UBool lenient);







    UBool isLenient(void) const;
# 921 "../../i18n/unicode/calendar.h"
    void setRepeatedWallTimeOption(UCalendarWallTimeOption option);
# 932 "../../i18n/unicode/calendar.h"
    UCalendarWallTimeOption getRepeatedWallTimeOption(void) const;
# 955 "../../i18n/unicode/calendar.h"
    void setSkippedWallTimeOption(UCalendarWallTimeOption option);
# 967 "../../i18n/unicode/calendar.h"
    UCalendarWallTimeOption getSkippedWallTimeOption(void) const;
# 976 "../../i18n/unicode/calendar.h"
    void setFirstDayOfWeek(EDaysOfWeek value);
# 985 "../../i18n/unicode/calendar.h"
    void setFirstDayOfWeek(UCalendarDaysOfWeek value);
# 994 "../../i18n/unicode/calendar.h"
    EDaysOfWeek getFirstDayOfWeek(void) const;
# 1004 "../../i18n/unicode/calendar.h"
    UCalendarDaysOfWeek getFirstDayOfWeek(UErrorCode &status) const;
# 1015 "../../i18n/unicode/calendar.h"
    void setMinimalDaysInFirstWeek(uint8_t value);
# 1026 "../../i18n/unicode/calendar.h"
    uint8_t getMinimalDaysInFirstWeek(void) const;
# 1036 "../../i18n/unicode/calendar.h"
    virtual int32_t getMinimum(EDateFields field) const;
# 1046 "../../i18n/unicode/calendar.h"
    virtual int32_t getMinimum(UCalendarDateFields field) const;
# 1056 "../../i18n/unicode/calendar.h"
    virtual int32_t getMaximum(EDateFields field) const;
# 1066 "../../i18n/unicode/calendar.h"
    virtual int32_t getMaximum(UCalendarDateFields field) const;
# 1076 "../../i18n/unicode/calendar.h"
    virtual int32_t getGreatestMinimum(EDateFields field) const;
# 1086 "../../i18n/unicode/calendar.h"
    virtual int32_t getGreatestMinimum(UCalendarDateFields field) const;
# 1096 "../../i18n/unicode/calendar.h"
    virtual int32_t getLeastMaximum(EDateFields field) const;
# 1106 "../../i18n/unicode/calendar.h"
    virtual int32_t getLeastMaximum(UCalendarDateFields field) const;
# 1123 "../../i18n/unicode/calendar.h"
    int32_t getActualMinimum(EDateFields field, UErrorCode& status) const;
# 1140 "../../i18n/unicode/calendar.h"
    virtual int32_t getActualMinimum(UCalendarDateFields field, UErrorCode& status) const;
# 1159 "../../i18n/unicode/calendar.h"
    int32_t getActualMaximum(EDateFields field, UErrorCode& status) const;
# 1178 "../../i18n/unicode/calendar.h"
    virtual int32_t getActualMaximum(UCalendarDateFields field, UErrorCode& status) const;
# 1194 "../../i18n/unicode/calendar.h"
    int32_t get(EDateFields field, UErrorCode& status) const;
# 1210 "../../i18n/unicode/calendar.h"
    int32_t get(UCalendarDateFields field, UErrorCode& status) const;
# 1221 "../../i18n/unicode/calendar.h"
    UBool isSet(EDateFields field) const;
# 1232 "../../i18n/unicode/calendar.h"
    UBool isSet(UCalendarDateFields field) const;
# 1242 "../../i18n/unicode/calendar.h"
    void set(EDateFields field, int32_t value);
# 1252 "../../i18n/unicode/calendar.h"
    void set(UCalendarDateFields field, int32_t value);
# 1264 "../../i18n/unicode/calendar.h"
    void set(int32_t year, int32_t month, int32_t date);
# 1278 "../../i18n/unicode/calendar.h"
    void set(int32_t year, int32_t month, int32_t date, int32_t hour, int32_t minute);
# 1293 "../../i18n/unicode/calendar.h"
    void set(int32_t year, int32_t month, int32_t date, int32_t hour, int32_t minute, int32_t second);







    void clear(void);
# 1312 "../../i18n/unicode/calendar.h"
    void clear(EDateFields field);
# 1323 "../../i18n/unicode/calendar.h"
    void clear(UCalendarDateFields field);
# 1340 "../../i18n/unicode/calendar.h"
    virtual UClassID getDynamicClassID(void) const = 0;
# 1374 "../../i18n/unicode/calendar.h"
    virtual const char * getType() const = 0;
# 1392 "../../i18n/unicode/calendar.h"
    virtual UCalendarWeekdayType getDayOfWeekType(UCalendarDaysOfWeek dayOfWeek, UErrorCode &status) const;
# 1408 "../../i18n/unicode/calendar.h"
    virtual int32_t getWeekendTransition(UCalendarDaysOfWeek dayOfWeek, UErrorCode &status) const;
# 1419 "../../i18n/unicode/calendar.h"
    virtual UBool isWeekend(UDate date, UErrorCode &status) const;
# 1428 "../../i18n/unicode/calendar.h"
    virtual UBool isWeekend(void) const;

protected:
# 1440 "../../i18n/unicode/calendar.h"
    Calendar(UErrorCode& success);







    Calendar(const Calendar& source);







    Calendar& operator=(const Calendar& right);
# 1468 "../../i18n/unicode/calendar.h"
    Calendar(TimeZone* zone, const Locale& aLocale, UErrorCode& success);
# 1479 "../../i18n/unicode/calendar.h"
    Calendar(const TimeZone& zone, const Locale& aLocale, UErrorCode& success);
# 1489 "../../i18n/unicode/calendar.h"
    virtual void computeTime(UErrorCode& status);
# 1502 "../../i18n/unicode/calendar.h"
    virtual void computeFields(UErrorCode& status);
# 1513 "../../i18n/unicode/calendar.h"
    double getTimeInMillis(UErrorCode& status) const;
# 1523 "../../i18n/unicode/calendar.h"
    void setTimeInMillis( double millis, UErrorCode& status );
# 1534 "../../i18n/unicode/calendar.h"
    void complete(UErrorCode& status);
# 1545 "../../i18n/unicode/calendar.h"
    inline int32_t internalGet(EDateFields field) const {return fFields[field];}
# 1559 "../../i18n/unicode/calendar.h"
    inline int32_t internalGet(UCalendarDateFields field, int32_t defaultValue) const {return fStamp[field]>kUnset ? fFields[field] : defaultValue;}
# 1569 "../../i18n/unicode/calendar.h"
    inline int32_t internalGet(UCalendarDateFields field) const {return fFields[field];}
# 1582 "../../i18n/unicode/calendar.h"
    void internalSet(EDateFields field, int32_t value);
# 1594 "../../i18n/unicode/calendar.h"
    inline void internalSet(UCalendarDateFields field, int32_t value);







    virtual void prepareGetActual(UCalendarDateFields field, UBool isMinimum, UErrorCode &status);





    enum ELimitType {

      UCAL_LIMIT_MINIMUM = 0,
      UCAL_LIMIT_GREATEST_MINIMUM,
      UCAL_LIMIT_LEAST_MAXIMUM,
      UCAL_LIMIT_MAXIMUM,
      UCAL_LIMIT_COUNT

    };
# 1639 "../../i18n/unicode/calendar.h"
    virtual int32_t handleGetLimit(UCalendarDateFields field, ELimitType limitType) const = 0;
# 1648 "../../i18n/unicode/calendar.h"
    virtual int32_t getLimit(UCalendarDateFields field, ELimitType limitType) const;
# 1664 "../../i18n/unicode/calendar.h"
    virtual int32_t handleComputeMonthStart(int32_t eyear, int32_t month,
                                                   UBool useMonth) const = 0;
# 1674 "../../i18n/unicode/calendar.h"
    virtual int32_t handleGetMonthLength(int32_t extendedYear, int32_t month) const ;
# 1683 "../../i18n/unicode/calendar.h"
    virtual int32_t handleGetYearLength(int32_t eyear) const;
# 1694 "../../i18n/unicode/calendar.h"
    virtual int32_t handleGetExtendedYear() = 0;
# 1704 "../../i18n/unicode/calendar.h"
    virtual int32_t handleComputeJulianDay(UCalendarDateFields bestField);
# 1714 "../../i18n/unicode/calendar.h"
    virtual int32_t handleGetExtendedYearFromWeekFields(int32_t yearWoy, int32_t woy);
# 1723 "../../i18n/unicode/calendar.h"
    int32_t computeJulianDay();
# 1732 "../../i18n/unicode/calendar.h"
    int32_t computeMillisInDay();
# 1743 "../../i18n/unicode/calendar.h"
    int32_t computeZoneOffset(double millis, int32_t millisInDay, UErrorCode &ec);
# 1754 "../../i18n/unicode/calendar.h"
    int32_t newestStamp(UCalendarDateFields start, UCalendarDateFields end, int32_t bestSoFar) const;






    enum {

      kResolveSTOP = -1,

      kResolveRemap = 32
    };






    static const UFieldResolutionTable kDatePrecedence[];






    static const UFieldResolutionTable kYearPrecedence[];






    static const UFieldResolutionTable kDOWPrecedence[];
# 1816 "../../i18n/unicode/calendar.h"
    UCalendarDateFields resolveFields(const UFieldResolutionTable *precedenceTable);






    virtual const UFieldResolutionTable* getFieldResolutionTable() const;







    UCalendarDateFields newerField(UCalendarDateFields defaultField, UCalendarDateFields alternateField) const;



private:
# 1844 "../../i18n/unicode/calendar.h"
    int32_t getActualHelper(UCalendarDateFields field, int32_t startValue, int32_t endValue, UErrorCode &status) const;


protected:




    UBool fIsTimeSet;
# 1864 "../../i18n/unicode/calendar.h"
    UBool fAreFieldsSet;






    UBool fAreAllFieldsSet;
# 1880 "../../i18n/unicode/calendar.h"
    UBool fAreFieldsVirtuallySet;







    UDate internalGetTime(void) const { return fTime; }
# 1897 "../../i18n/unicode/calendar.h"
    void internalSetTime(UDate time) { fTime = time; }





    int32_t fFields[UCAL_FIELD_COUNT];





    UBool fIsSet[UCAL_FIELD_COUNT];




    enum {
        kUnset = 0,
        kInternallySet,
        kMinimumUserStamp
    };







    int32_t fStamp[UCAL_FIELD_COUNT];
# 1952 "../../i18n/unicode/calendar.h"
    virtual void handleComputeFields(int32_t julianDay, UErrorCode &status);







    int32_t getGregorianYear() const {
        return fGregorianYear;
    }






    int32_t getGregorianMonth() const {
        return fGregorianMonth;
    }






    int32_t getGregorianDayOfYear() const {
        return fGregorianDayOfYear;
    }






    int32_t getGregorianDayOfMonth() const {
      return fGregorianDayOfMonth;
    }
# 1998 "../../i18n/unicode/calendar.h"
    virtual int32_t getDefaultMonthInYear(int32_t eyear) ;
# 2008 "../../i18n/unicode/calendar.h"
    virtual int32_t getDefaultDayInMonth(int32_t eyear, int32_t month);
# 2044 "../../i18n/unicode/calendar.h"
    virtual void pinField(UCalendarDateFields field, UErrorCode& status);
# 2089 "../../i18n/unicode/calendar.h"
    int32_t weekNumber(int32_t desiredDay, int32_t dayOfPeriod, int32_t dayOfWeek);
# 2123 "../../i18n/unicode/calendar.h"
    inline int32_t weekNumber(int32_t dayOfPeriod, int32_t dayOfWeek);





    int32_t getLocalDOW();


private:




    int32_t fNextStamp;





    void recalculateStamp();




    UDate fTime;




    UBool fLenient;





    TimeZone* fZone;





    UCalendarWallTimeOption fRepeatedWallTime;





    UCalendarWallTimeOption fSkippedWallTime;
# 2181 "../../i18n/unicode/calendar.h"
    UCalendarDaysOfWeek fFirstDayOfWeek;
    uint8_t fMinimalDaysInFirstWeek;
    UCalendarDaysOfWeek fWeekendOnset;
    int32_t fWeekendOnsetMillis;
    UCalendarDaysOfWeek fWeekendCease;
    int32_t fWeekendCeaseMillis;
# 2198 "../../i18n/unicode/calendar.h"
    void setWeekData(const Locale& desiredLocale, const char *type, UErrorCode& success);
# 2209 "../../i18n/unicode/calendar.h"
    void updateTime(UErrorCode& status);






    int32_t fGregorianYear;






    int32_t fGregorianMonth;






    int32_t fGregorianDayOfYear;






    int32_t fGregorianDayOfMonth;
# 2247 "../../i18n/unicode/calendar.h"
    void computeGregorianAndDOWFields(int32_t julianDay, UErrorCode &ec);

protected:
# 2258 "../../i18n/unicode/calendar.h"
    void computeGregorianFields(int32_t julianDay, UErrorCode &ec);

private:
# 2282 "../../i18n/unicode/calendar.h"
    void computeWeekFields(UErrorCode &ec);
# 2293 "../../i18n/unicode/calendar.h"
    void validateFields(UErrorCode &status);
# 2303 "../../i18n/unicode/calendar.h"
    virtual void validateField(UCalendarDateFields field, UErrorCode &status);
# 2313 "../../i18n/unicode/calendar.h"
    void validateField(UCalendarDateFields field, int32_t min, int32_t max, UErrorCode& status);

 protected:
# 2326 "../../i18n/unicode/calendar.h"
    static uint8_t julianDayToDayOfWeek(double julian);


 private:
    char validLocale[157];
    char actualLocale[157];

 public:
# 2346 "../../i18n/unicode/calendar.h"
    static StringEnumeration* getAvailableLocales(void);
# 2356 "../../i18n/unicode/calendar.h"
    static URegistryKey registerFactory(ICUServiceFactory* toAdopt, UErrorCode& status);
# 2368 "../../i18n/unicode/calendar.h"
    static UBool unregister(URegistryKey key, UErrorCode& status);






    friend class CalendarFactory;





    friend class CalendarService;





    friend class DefaultCalendarFactory;






    virtual UBool haveDefaultCentury() const = 0;





    virtual UDate defaultCenturyStart() const = 0;




    virtual int32_t defaultCenturyStartYear() const = 0;







    Locale getLocale(ULocDataLocaleType type, UErrorCode &status) const;
# 2422 "../../i18n/unicode/calendar.h"
    const char* getLocaleID(ULocDataLocaleType type, UErrorCode &status) const;


private:




    BasicTimeZone* getBasicTimeZone() const;
};



inline Calendar*
Calendar::createInstance(TimeZone* zone, UErrorCode& errorCode)
{

    return createInstance(zone, Locale::getDefault(), errorCode);
}



inline void
Calendar::roll(UCalendarDateFields field, UBool up, UErrorCode& status)
{
    roll(field, (int32_t)(up ? +1 : -1), status);
}


inline void
Calendar::roll(EDateFields field, UBool up, UErrorCode& status)
{
    roll((UCalendarDateFields) field, up, status);
}
# 2466 "../../i18n/unicode/calendar.h"
inline void
Calendar::internalSet(UCalendarDateFields field, int32_t value)
{
    fFields[field] = value;
    fStamp[field] = kInternallySet;
    fIsSet[field] = 1;
}



inline int32_t Calendar::weekNumber(int32_t dayOfPeriod, int32_t dayOfWeek)
{
  return weekNumber(dayOfPeriod, dayOfPeriod, dayOfWeek);
}


} }
# 14 "./fldset.h" 2

# 1 "../../i18n/unicode/udat.h" 1
# 17 "../../i18n/unicode/udat.h"
# 1 "../../i18n/unicode/unum.h" 1
# 22 "../../i18n/unicode/unum.h"
# 1 "../../common/unicode/parseerr.h" 1
# 25 "../../common/unicode/parseerr.h"
enum { U_PARSE_CONTEXT_LEN = 16 };
# 56 "../../common/unicode/parseerr.h"
typedef struct UParseError {
# 65 "../../common/unicode/parseerr.h"
    int32_t line;
# 74 "../../common/unicode/parseerr.h"
    int32_t offset;






    UChar preContext[U_PARSE_CONTEXT_LEN];






    UChar postContext[U_PARSE_CONTEXT_LEN];

} UParseError;
# 23 "../../i18n/unicode/unum.h" 2
# 1 "../../i18n/unicode/uformattable.h" 1
# 46 "../../i18n/unicode/uformattable.h"
typedef enum UFormattableType {
  UFMT_DATE = 0,
  UFMT_DOUBLE,
  UFMT_LONG,
  UFMT_STRING,
  UFMT_ARRAY,
  UFMT_INT64,
  UFMT_OBJECT,
  UFMT_COUNT
} UFormattableType;
# 64 "../../i18n/unicode/uformattable.h"
typedef void *UFormattable;
# 76 "../../i18n/unicode/uformattable.h"
extern "C" __attribute__((visibility("default"))) UFormattable*
ufmt_open_52(UErrorCode* status);







extern "C" __attribute__((visibility("default"))) void
ufmt_close_52(UFormattable* fmt);



extern "C++" { namespace icu_52 {
# 101 "../../i18n/unicode/uformattable.h"
class LocalUFormattablePointer : public LocalPointerBase<UFormattable> { public: explicit LocalUFormattablePointer(UFormattable *p=__null) : LocalPointerBase<UFormattable>(p) {} ~LocalUFormattablePointer() { ufmt_close_52(ptr); } void adoptInstead(UFormattable *p) { ufmt_close_52(ptr); ptr=p; } };

} }
# 117 "../../i18n/unicode/uformattable.h"
extern "C" __attribute__((visibility("default"))) UFormattableType
ufmt_getType_52(const UFormattable* fmt, UErrorCode *status);
# 128 "../../i18n/unicode/uformattable.h"
extern "C" __attribute__((visibility("default"))) UBool
ufmt_isNumeric_52(const UFormattable* fmt);
# 141 "../../i18n/unicode/uformattable.h"
extern "C" __attribute__((visibility("default"))) UDate
ufmt_getDate_52(const UFormattable* fmt, UErrorCode *status);
# 159 "../../i18n/unicode/uformattable.h"
extern "C" __attribute__((visibility("default"))) double
ufmt_getDouble_52(UFormattable* fmt, UErrorCode *status);
# 180 "../../i18n/unicode/uformattable.h"
extern "C" __attribute__((visibility("default"))) int32_t
ufmt_getLong_52(UFormattable* fmt, UErrorCode *status);
# 201 "../../i18n/unicode/uformattable.h"
extern "C" __attribute__((visibility("default"))) int64_t
ufmt_getInt64_52(UFormattable* fmt, UErrorCode *status);
# 214 "../../i18n/unicode/uformattable.h"
extern "C" __attribute__((visibility("default"))) const void *
ufmt_getObject_52(const UFormattable* fmt, UErrorCode *status);
# 229 "../../i18n/unicode/uformattable.h"
extern "C" __attribute__((visibility("default"))) const UChar*
ufmt_getUChars_52(UFormattable* fmt, int32_t *len, UErrorCode *status);
# 240 "../../i18n/unicode/uformattable.h"
extern "C" __attribute__((visibility("default"))) int32_t
ufmt_getArrayLength_52(const UFormattable* fmt, UErrorCode *status);
# 252 "../../i18n/unicode/uformattable.h"
extern "C" __attribute__((visibility("default"))) UFormattable *
ufmt_getArrayItemByIndex_52(UFormattable* fmt, int32_t n, UErrorCode *status);
# 277 "../../i18n/unicode/uformattable.h"
extern "C" __attribute__((visibility("default"))) const char *
ufmt_getDecNumChars_52(UFormattable *fmt, int32_t *len, UErrorCode *status);
# 24 "../../i18n/unicode/unum.h" 2
# 132 "../../i18n/unicode/unum.h"
typedef void* UNumberFormat;




typedef enum UNumberFormatStyle {




    UNUM_PATTERN_DECIMAL=0,




    UNUM_DECIMAL=1,




    UNUM_CURRENCY,




    UNUM_PERCENT,




    UNUM_SCIENTIFIC,




    UNUM_SPELLOUT,




    UNUM_ORDINAL,




    UNUM_DURATION,




    UNUM_NUMBERING_SYSTEM,




    UNUM_PATTERN_RULEBASED,




    UNUM_CURRENCY_ISO,





    UNUM_CURRENCY_PLURAL,




    UNUM_FORMAT_STYLE_COUNT,




    UNUM_DEFAULT = UNUM_DECIMAL,




    UNUM_IGNORE = UNUM_PATTERN_DECIMAL
} UNumberFormatStyle;




typedef enum UNumberFormatRoundingMode {
    UNUM_ROUND_CEILING,
    UNUM_ROUND_FLOOR,
    UNUM_ROUND_DOWN,
    UNUM_ROUND_UP,




    UNUM_ROUND_HALFEVEN,





    UNUM_FOUND_HALFEVEN = UNUM_ROUND_HALFEVEN,

    UNUM_ROUND_HALFDOWN = UNUM_ROUND_HALFEVEN + 1,
    UNUM_ROUND_HALFUP,




    UNUM_ROUND_UNNECESSARY
} UNumberFormatRoundingMode;




typedef enum UNumberFormatPadPosition {
    UNUM_PAD_BEFORE_PREFIX,
    UNUM_PAD_AFTER_PREFIX,
    UNUM_PAD_BEFORE_SUFFIX,
    UNUM_PAD_AFTER_SUFFIX
} UNumberFormatPadPosition;






typedef enum UNumberCompactStyle {

  UNUM_SHORT,

  UNUM_LONG

} UNumberCompactStyle;






enum UCurrencySpacing {

    UNUM_CURRENCY_MATCH,

    UNUM_CURRENCY_SURROUNDING_MATCH,

    UNUM_CURRENCY_INSERT,

    UNUM_CURRENCY_SPACING_COUNT
};
typedef enum UCurrencySpacing UCurrencySpacing;







typedef enum UNumberFormatFields {

    UNUM_INTEGER_FIELD,

    UNUM_FRACTION_FIELD,

    UNUM_DECIMAL_SEPARATOR_FIELD,

    UNUM_EXPONENT_SYMBOL_FIELD,

    UNUM_EXPONENT_SIGN_FIELD,

    UNUM_EXPONENT_FIELD,

    UNUM_GROUPING_SEPARATOR_FIELD,

    UNUM_CURRENCY_FIELD,

    UNUM_PERCENT_FIELD,

    UNUM_PERMILL_FIELD,

    UNUM_SIGN_FIELD,

    UNUM_FIELD_COUNT
} UNumberFormatFields;
# 350 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) UNumberFormat*
unum_open_52( UNumberFormatStyle style,
            const UChar* pattern,
            int32_t patternLength,
            const char* locale,
            UParseError* parseErr,
            UErrorCode* status);
# 365 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) void
unum_close_52(UNumberFormat* fmt);



extern "C++" { namespace icu_52 {
# 381 "../../i18n/unicode/unum.h"
class LocalUNumberFormatPointer : public LocalPointerBase<UNumberFormat> { public: explicit LocalUNumberFormatPointer(UNumberFormat *p=__null) : LocalPointerBase<UNumberFormat>(p) {} ~LocalUNumberFormatPointer() { unum_close_52(ptr); } void adoptInstead(UNumberFormat *p) { unum_close_52(ptr); ptr=p; } };

} }
# 395 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) UNumberFormat*
unum_clone_52(const UNumberFormat *fmt,
       UErrorCode *status);
# 423 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) int32_t
unum_format_52( const UNumberFormat* fmt,
        int32_t number,
        UChar* result,
        int32_t resultLength,
        UFieldPosition *pos,
        UErrorCode* status);
# 455 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) int32_t
unum_formatInt64_52(const UNumberFormat *fmt,
        int64_t number,
        UChar* result,
        int32_t resultLength,
        UFieldPosition *pos,
        UErrorCode* status);
# 487 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) int32_t
unum_formatDouble_52( const UNumberFormat* fmt,
            double number,
            UChar* result,
            int32_t resultLength,
            UFieldPosition *pos,
            UErrorCode* status);
# 523 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) int32_t
unum_formatDecimal_52( const UNumberFormat* fmt,
            const char * number,
            int32_t length,
            UChar* result,
            int32_t resultLength,
            UFieldPosition *pos,
            UErrorCode* status);
# 556 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) int32_t
unum_formatDoubleCurrency_52(const UNumberFormat* fmt,
                          double number,
                          UChar* currency,
                          UChar* result,
                          int32_t resultLength,
                          UFieldPosition* pos,
                          UErrorCode* status);
# 586 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) int32_t
unum_formatUFormattable_52(const UNumberFormat* fmt,
                        const UFormattable *number,
                        UChar *result,
                        int32_t resultLength,
                        UFieldPosition *pos,
                        UErrorCode *status);
# 612 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) int32_t
unum_parse_52( const UNumberFormat* fmt,
        const UChar* text,
        int32_t textLength,
        int32_t *parsePos ,
        UErrorCode *status);
# 636 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) int64_t
unum_parseInt64_52(const UNumberFormat* fmt,
        const UChar* text,
        int32_t textLength,
        int32_t *parsePos ,
        UErrorCode *status);
# 660 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) double
unum_parseDouble_52( const UNumberFormat* fmt,
            const UChar* text,
            int32_t textLength,
            int32_t *parsePos ,
            UErrorCode *status);
# 693 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) int32_t
unum_parseDecimal_52(const UNumberFormat* fmt,
                 const UChar* text,
                         int32_t textLength,
                         int32_t *parsePos ,
                         char *outBuf,
                         int32_t outBufLength,
                         UErrorCode *status);
# 721 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) double
unum_parseDoubleCurrency_52(const UNumberFormat* fmt,
                         const UChar* text,
                         int32_t textLength,
                         int32_t* parsePos,
                         UChar* currency,
                         UErrorCode* status);
# 748 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) UFormattable*
unum_parseToUFormattable_52(const UNumberFormat* fmt,
                         UFormattable *result,
                         const UChar* text,
                         int32_t textLength,
                         int32_t* parsePos,
                         UErrorCode* status);
# 773 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) void
unum_applyPattern_52( UNumberFormat *format,
                            UBool localized,
                    const UChar *pattern,
                            int32_t patternLength,
                            UParseError *parseError,
                            UErrorCode *status
                                    );
# 792 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) const char*
unum_getAvailable_52(int32_t localeIndex);
# 804 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) int32_t
unum_countAvailable_52(void);





typedef enum UNumberFormatAttributeValue {

  UNUM_NO = 0,

  UNUM_YES = 1,

  UNUM_MAYBE = 2
} UNumberFormatAttributeValue;



typedef enum UNumberFormatAttribute {

  UNUM_PARSE_INT_ONLY,

  UNUM_GROUPING_USED,

  UNUM_DECIMAL_ALWAYS_SHOWN,

  UNUM_MAX_INTEGER_DIGITS,

  UNUM_MIN_INTEGER_DIGITS,

  UNUM_INTEGER_DIGITS,

  UNUM_MAX_FRACTION_DIGITS,

  UNUM_MIN_FRACTION_DIGITS,

  UNUM_FRACTION_DIGITS,

  UNUM_MULTIPLIER,

  UNUM_GROUPING_SIZE,

  UNUM_ROUNDING_MODE,

  UNUM_ROUNDING_INCREMENT,

  UNUM_FORMAT_WIDTH,

  UNUM_PADDING_POSITION,

  UNUM_SECONDARY_GROUPING_SIZE,


  UNUM_SIGNIFICANT_DIGITS_USED,


  UNUM_MIN_SIGNIFICANT_DIGITS,


  UNUM_MAX_SIGNIFICANT_DIGITS,



  UNUM_LENIENT_PARSE,





  UNUM_PARSE_ALL_INPUT = UNUM_LENIENT_PARSE + 1,
# 885 "../../i18n/unicode/unum.h"
  UNUM_SCALE = UNUM_LENIENT_PARSE + 2,





  UNUM_NUMERIC_ATTRIBUTE_COUNT = UNUM_LENIENT_PARSE + 3,




  UNUM_MAX_NONBOOLEAN_ATTRIBUTE = 0x0FFF,







  UNUM_FORMAT_FAIL_IF_MORE_THAN_MAX_DIGITS = 0x1000,






  UNUM_PARSE_NO_EXPONENT,




  UNUM_LIMIT_BOOLEAN_ATTRIBUTE

} UNumberFormatAttribute;
# 937 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) int32_t
unum_getAttribute_52(const UNumberFormat* fmt,
          UNumberFormatAttribute attr);
# 960 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) void
unum_setAttribute_52( UNumberFormat* fmt,
            UNumberFormatAttribute attr,
            int32_t newValue);
# 980 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) double
unum_getDoubleAttribute_52(const UNumberFormat* fmt,
          UNumberFormatAttribute attr);
# 998 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) void
unum_setDoubleAttribute_52( UNumberFormat* fmt,
            UNumberFormatAttribute attr,
            double newValue);


typedef enum UNumberFormatTextAttribute {

  UNUM_POSITIVE_PREFIX,

  UNUM_POSITIVE_SUFFIX,

  UNUM_NEGATIVE_PREFIX,

  UNUM_NEGATIVE_SUFFIX,

  UNUM_PADDING_CHARACTER,

  UNUM_CURRENCY_CODE,




  UNUM_DEFAULT_RULESET,






  UNUM_PUBLIC_RULESETS
} UNumberFormatTextAttribute;
# 1049 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) int32_t
unum_getTextAttribute_52( const UNumberFormat* fmt,
            UNumberFormatTextAttribute tag,
            UChar* result,
            int32_t resultLength,
            UErrorCode* status);
# 1072 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) void
unum_setTextAttribute_52( UNumberFormat* fmt,
            UNumberFormatTextAttribute tag,
            const UChar* newValue,
            int32_t newValueLength,
            UErrorCode *status);
# 1095 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) int32_t
unum_toPattern_52( const UNumberFormat* fmt,
        UBool isPatternLocalized,
        UChar* result,
        int32_t resultLength,
        UErrorCode* status);






typedef enum UNumberFormatSymbol {

  UNUM_DECIMAL_SEPARATOR_SYMBOL = 0,

  UNUM_GROUPING_SEPARATOR_SYMBOL = 1,

  UNUM_PATTERN_SEPARATOR_SYMBOL = 2,

  UNUM_PERCENT_SYMBOL = 3,

  UNUM_ZERO_DIGIT_SYMBOL = 4,

  UNUM_DIGIT_SYMBOL = 5,

  UNUM_MINUS_SIGN_SYMBOL = 6,

  UNUM_PLUS_SIGN_SYMBOL = 7,

  UNUM_CURRENCY_SYMBOL = 8,

  UNUM_INTL_CURRENCY_SYMBOL = 9,

  UNUM_MONETARY_SEPARATOR_SYMBOL = 10,

  UNUM_EXPONENTIAL_SYMBOL = 11,

  UNUM_PERMILL_SYMBOL = 12,

  UNUM_PAD_ESCAPE_SYMBOL = 13,

  UNUM_INFINITY_SYMBOL = 14,

  UNUM_NAN_SYMBOL = 15,


  UNUM_SIGNIFICANT_DIGIT_SYMBOL = 16,



  UNUM_MONETARY_GROUPING_SEPARATOR_SYMBOL = 17,



  UNUM_ONE_DIGIT_SYMBOL = 18,



  UNUM_TWO_DIGIT_SYMBOL = 19,



  UNUM_THREE_DIGIT_SYMBOL = 20,



  UNUM_FOUR_DIGIT_SYMBOL = 21,



  UNUM_FIVE_DIGIT_SYMBOL = 22,



  UNUM_SIX_DIGIT_SYMBOL = 23,



  UNUM_SEVEN_DIGIT_SYMBOL = 24,



  UNUM_EIGHT_DIGIT_SYMBOL = 25,



  UNUM_NINE_DIGIT_SYMBOL = 26,

  UNUM_FORMAT_SYMBOL_COUNT = 27
} UNumberFormatSymbol;
# 1203 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) int32_t
unum_getSymbol_52(const UNumberFormat *fmt,
               UNumberFormatSymbol symbol,
               UChar *buffer,
               int32_t size,
               UErrorCode *status);
# 1223 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) void
unum_setSymbol_52(UNumberFormat *fmt,
               UNumberFormatSymbol symbol,
               const UChar *value,
               int32_t length,
               UErrorCode *status);
# 1240 "../../i18n/unicode/unum.h"
extern "C" __attribute__((visibility("default"))) const char*
unum_getLocaleByType_52(const UNumberFormat *fmt,
                     ULocDataLocaleType type,
                     UErrorCode* status);
# 18 "../../i18n/unicode/udat.h" 2
# 1 "../../i18n/unicode/udisplaycontext.h" 1
# 26 "../../i18n/unicode/udisplaycontext.h"
enum UDisplayContextType {






    UDISPCTX_TYPE_DIALECT_HANDLING = 0,






    UDISPCTX_TYPE_CAPITALIZATION = 1

};



typedef enum UDisplayContextType UDisplayContextType;







enum UDisplayContext {
# 68 "../../i18n/unicode/udisplaycontext.h"
    UDISPCTX_STANDARD_NAMES = (UDISPCTX_TYPE_DIALECT_HANDLING<<8) + 0,






    UDISPCTX_DIALECT_NAMES = (UDISPCTX_TYPE_DIALECT_HANDLING<<8) + 1,
# 89 "../../i18n/unicode/udisplaycontext.h"
    UDISPCTX_CAPITALIZATION_NONE = (UDISPCTX_TYPE_CAPITALIZATION<<8) + 0,





    UDISPCTX_CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE = (UDISPCTX_TYPE_CAPITALIZATION<<8) + 1,





    UDISPCTX_CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE = (UDISPCTX_TYPE_CAPITALIZATION<<8) + 2,





    UDISPCTX_CAPITALIZATION_FOR_UI_LIST_OR_MENU = (UDISPCTX_TYPE_CAPITALIZATION<<8) + 3,






    UDISPCTX_CAPITALIZATION_FOR_STANDALONE = (UDISPCTX_TYPE_CAPITALIZATION<<8) + 4

};



typedef enum UDisplayContext UDisplayContext;
# 19 "../../i18n/unicode/udat.h" 2
# 150 "../../i18n/unicode/udat.h"
typedef void* UDateFormat;




typedef enum UDateFormatStyle {

    UDAT_FULL,

    UDAT_LONG,

    UDAT_MEDIUM,

    UDAT_SHORT,

    UDAT_DEFAULT = UDAT_MEDIUM,


    UDAT_RELATIVE = (1 << 7),

    UDAT_FULL_RELATIVE = UDAT_FULL | UDAT_RELATIVE,

    UDAT_LONG_RELATIVE = UDAT_LONG | UDAT_RELATIVE,

    UDAT_MEDIUM_RELATIVE = UDAT_MEDIUM | UDAT_RELATIVE,

    UDAT_SHORT_RELATIVE = UDAT_SHORT | UDAT_RELATIVE,



    UDAT_NONE = -1,






    UDAT_PATTERN = -2,


    UDAT_IGNORE = UDAT_PATTERN
} UDateFormatStyle;
# 495 "../../i18n/unicode/udat.h"
typedef enum UDateFormatField {





    UDAT_ERA_FIELD = 0,






    UDAT_YEAR_FIELD = 1,






    UDAT_MONTH_FIELD = 2,






    UDAT_DATE_FIELD = 3,
# 531 "../../i18n/unicode/udat.h"
    UDAT_HOUR_OF_DAY1_FIELD = 4,
# 540 "../../i18n/unicode/udat.h"
    UDAT_HOUR_OF_DAY0_FIELD = 5,






    UDAT_MINUTE_FIELD = 6,






    UDAT_SECOND_FIELD = 7,
# 569 "../../i18n/unicode/udat.h"
    UDAT_FRACTIONAL_SECOND_FIELD = 8,






    UDAT_DAY_OF_WEEK_FIELD = 9,






    UDAT_DAY_OF_YEAR_FIELD = 10,






    UDAT_DAY_OF_WEEK_IN_MONTH_FIELD = 11,






    UDAT_WEEK_OF_YEAR_FIELD = 12,






    UDAT_WEEK_OF_MONTH_FIELD = 13,






    UDAT_AM_PM_FIELD = 14,
# 620 "../../i18n/unicode/udat.h"
    UDAT_HOUR1_FIELD = 15,
# 629 "../../i18n/unicode/udat.h"
    UDAT_HOUR0_FIELD = 16,







    UDAT_TIMEZONE_FIELD = 17,






    UDAT_YEAR_WOY_FIELD = 18,






    UDAT_DOW_LOCAL_FIELD = 19,






    UDAT_EXTENDED_YEAR_FIELD = 20,






    UDAT_JULIAN_DAY_FIELD = 21,






    UDAT_MILLISECONDS_IN_DAY_FIELD = 22,







    UDAT_TIMEZONE_RFC_FIELD = 23,






    UDAT_TIMEZONE_GENERIC_FIELD = 24,






    UDAT_STANDALONE_DAY_FIELD = 25,







    UDAT_STANDALONE_MONTH_FIELD = 26,
# 711 "../../i18n/unicode/udat.h"
    UDAT_QUARTER_FIELD = 27,
# 720 "../../i18n/unicode/udat.h"
    UDAT_STANDALONE_QUARTER_FIELD = 28,






    UDAT_TIMEZONE_SPECIAL_FIELD = 29,
# 736 "../../i18n/unicode/udat.h"
    UDAT_YEAR_NAME_FIELD = 30,
# 745 "../../i18n/unicode/udat.h"
    UDAT_TIMEZONE_LOCALIZED_GMT_OFFSET_FIELD = 31,







    UDAT_TIMEZONE_ISO_FIELD = 32,







    UDAT_TIMEZONE_ISO_LOCAL_FIELD = 33,
# 772 "../../i18n/unicode/udat.h"
    UDAT_FIELD_COUNT = 34

} UDateFormatField;
# 785 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) UCalendarDateFields
udat_toCalendarDateField_52(UDateFormatField field);
# 817 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) UDateFormat*
udat_open_52(UDateFormatStyle timeStyle,
          UDateFormatStyle dateStyle,
          const char *locale,
          const UChar *tzID,
          int32_t tzIDLength,
          const UChar *pattern,
          int32_t patternLength,
          UErrorCode *status);
# 834 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) void
udat_close_52(UDateFormat* format);






typedef enum UDateFormatBooleanAttribute {




    UDAT_PARSE_ALLOW_WHITESPACE,





    UDAT_PARSE_ALLOW_NUMERIC,




    UDAT_BOOLEAN_ATTRIBUTE_COUNT
} UDateFormatBooleanAttribute;
# 872 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) UBool
udat_getBooleanAttribute(const UDateFormat* fmt, UDateFormatBooleanAttribute attr, UErrorCode* status);
# 885 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) void
udat_setBooleanAttribute(UDateFormat *fmt, UDateFormatBooleanAttribute attr, UBool, UErrorCode* status);







extern "C++" { namespace icu_52 {
# 905 "../../i18n/unicode/udat.h"
class LocalUDateFormatPointer : public LocalPointerBase<UDateFormat> { public: explicit LocalUDateFormatPointer(UDateFormat *p=__null) : LocalPointerBase<UDateFormat>(p) {} ~LocalUDateFormatPointer() { udat_close_52(ptr); } void adoptInstead(UDateFormat *p) { udat_close_52(ptr); ptr=p; } };

} }
# 919 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) UDateFormat*
udat_clone_52(const UDateFormat *fmt,
       UErrorCode *status);
# 941 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) int32_t
udat_format_52( const UDateFormat* format,
                        UDate dateToFormat,
                        UChar* result,
                        int32_t resultLength,
                        UFieldPosition* position,
                        UErrorCode* status);
# 974 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) UDate
udat_parse_52(const UDateFormat* format,
           const UChar* text,
                    int32_t textLength,
                    int32_t *parsePos,
                    UErrorCode *status);
# 1002 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) void
udat_parseCalendar_52(const UDateFormat* format,
                            UCalendar* calendar,
                   const UChar* text,
                            int32_t textLength,
                            int32_t *parsePos,
                            UErrorCode *status);
# 1019 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) UBool
udat_isLenient_52(const UDateFormat* fmt);
# 1031 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) void
udat_setLenient_52( UDateFormat* fmt,
                    UBool isLenient);
# 1044 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) const UCalendar*
udat_getCalendar_52(const UDateFormat* fmt);
# 1056 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) void
udat_setCalendar_52( UDateFormat* fmt,
                    const UCalendar* calendarToSet);
# 1069 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) const UNumberFormat*
udat_getNumberFormat_52(const UDateFormat* fmt);
# 1081 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) void
udat_setNumberFormat_52( UDateFormat* fmt,
                        const UNumberFormat* numberFormatToSet);
# 1094 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) const char*
udat_getAvailable_52(int32_t localeIndex);
# 1105 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) int32_t
udat_countAvailable_52(void);
# 1118 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) UDate
udat_get2DigitYearStart_52( const UDateFormat *fmt,
                                    UErrorCode *status);
# 1132 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) void
udat_set2DigitYearStart_52( UDateFormat *fmt,
                            UDate d,
                            UErrorCode *status);
# 1149 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) int32_t
udat_toPattern_52( const UDateFormat *fmt,
                        UBool localized,
                        UChar *result,
                        int32_t resultLength,
                        UErrorCode *status);
# 1166 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) void
udat_applyPattern_52( UDateFormat *format,
                            UBool localized,
                    const UChar *pattern,
                            int32_t patternLength);





typedef enum UDateFormatSymbolType {

    UDAT_ERAS,

    UDAT_MONTHS,

    UDAT_SHORT_MONTHS,

    UDAT_WEEKDAYS,




    UDAT_SHORT_WEEKDAYS,

    UDAT_AM_PMS,

    UDAT_LOCALIZED_CHARS,

    UDAT_ERA_NAMES,

    UDAT_NARROW_MONTHS,

    UDAT_NARROW_WEEKDAYS,

    UDAT_STANDALONE_MONTHS,
    UDAT_STANDALONE_SHORT_MONTHS,
    UDAT_STANDALONE_NARROW_MONTHS,

    UDAT_STANDALONE_WEEKDAYS,




    UDAT_STANDALONE_SHORT_WEEKDAYS,

    UDAT_STANDALONE_NARROW_WEEKDAYS,

    UDAT_QUARTERS,

    UDAT_SHORT_QUARTERS,

    UDAT_STANDALONE_QUARTERS,
    UDAT_STANDALONE_SHORT_QUARTERS,
# 1228 "../../i18n/unicode/udat.h"
    UDAT_SHORTER_WEEKDAYS,




    UDAT_STANDALONE_SHORTER_WEEKDAYS

} UDateFormatSymbolType;

struct UDateFormatSymbols;




typedef struct UDateFormatSymbols UDateFormatSymbols;
# 1260 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) int32_t
udat_getSymbols_52(const UDateFormat *fmt,
                        UDateFormatSymbolType type,
                        int32_t symbolIndex,
                        UChar *result,
                        int32_t resultLength,
                        UErrorCode *status);
# 1280 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) int32_t
udat_countSymbols_52( const UDateFormat *fmt,
                            UDateFormatSymbolType type);
# 1299 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) void
udat_setSymbols_52( UDateFormat *format,
                    UDateFormatSymbolType type,
                    int32_t symbolIndex,
                    UChar *value,
                    int32_t valueLength,
                    UErrorCode *status);
# 1316 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) const char*
udat_getLocaleByType_52(const UDateFormat *fmt,
                     ULocDataLocaleType type,
                     UErrorCode* status);
# 1330 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) void
udat_setContext_52(UDateFormat* fmt, UDisplayContext value, UErrorCode* status);
# 1342 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) UDisplayContext
udat_getContext_52(UDateFormat* fmt, UDisplayContextType type, UErrorCode* status);
# 1359 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) int32_t
udat_toPatternRelativeDate_52(const UDateFormat *fmt,
                           UChar *result,
                           int32_t resultLength,
                           UErrorCode *status);
# 1376 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) int32_t
udat_toPatternRelativeTime_52(const UDateFormat *fmt,
                           UChar *result,
                           int32_t resultLength,
                           UErrorCode *status);
# 1394 "../../i18n/unicode/udat.h"
extern "C" __attribute__((visibility("default"))) void
udat_applyPatternRelative_52(UDateFormat *format,
                          const UChar *datePattern,
                          int32_t datePatternLength,
                          const UChar *timePattern,
                          int32_t timePatternLength,
                          UErrorCode *status);





typedef UDateFormat* ( *UDateFormatOpener) (UDateFormatStyle timeStyle,
                                                    UDateFormatStyle dateStyle,
                                                    const char *locale,
                                                    const UChar *tzID,
                                                    int32_t tzIDLength,
                                                    const UChar *pattern,
                                                    int32_t patternLength,
                                                    UErrorCode *status);





extern "C" __attribute__((visibility("default"))) void
udat_registerOpener_52(UDateFormatOpener opener, UErrorCode *status);





extern "C" __attribute__((visibility("default"))) UDateFormatOpener
udat_unregisterOpener_52(UDateFormatOpener opener, UErrorCode *status);
# 16 "./fldset.h" 2
# 1 "../../tools/toolutil/udbgutil.h" 1
# 16 "../../tools/toolutil/udbgutil.h"
enum UDebugEnumType {
    UDBG_UDebugEnumType = 0,

    UDBG_UCalendarDateFields,
    UDBG_UCalendarMonths,
    UDBG_UDateFormatStyle,

    UDBG_UPlugReason,
    UDBG_UPlugLevel,
    UDBG_UAcceptResult,




    UDBG_UColAttributeValue,

    UDBG_ENUM_COUNT,
    UDBG_HIGHEST_CONTIGUOUS_ENUM = UDBG_UAcceptResult,
    UDBG_INVALID_ENUM = -1
};

typedef enum UDebugEnumType UDebugEnumType;






extern "C" __attribute__((visibility("default"))) int32_t udbg_enumCount(UDebugEnumType type);







extern "C" __attribute__((visibility("default"))) const char * udbg_enumName(UDebugEnumType type, int32_t field);







extern "C" __attribute__((visibility("default"))) int32_t udbg_enumExpectedCount(UDebugEnumType type);







extern "C" __attribute__((visibility("default"))) int32_t udbg_enumArrayValue(UDebugEnumType type, int32_t field);







extern "C" __attribute__((visibility("default"))) int32_t udbg_enumByName(UDebugEnumType type, const char *name);





extern "C" __attribute__((visibility("default"))) const char *udbg_getPlatform(void);







extern "C" __attribute__((visibility("default"))) const char *udbg_getSystemParameterNameByIndex(int32_t i);
# 99 "../../tools/toolutil/udbgutil.h"
extern "C" __attribute__((visibility("default"))) int32_t udbg_getSystemParameterValueByIndex(int32_t i, char *buffer, int32_t bufferCapacity, UErrorCode *status);




extern "C" __attribute__((visibility("default"))) void udbg_writeIcuInfo(FILE *f);
# 118 "../../tools/toolutil/udbgutil.h"
extern "C" __attribute__((visibility("default"))) char *udbg_knownIssueURLFrom(const char *ticket, char *buf);






extern "C" __attribute__((visibility("default"))) void *udbg_knownIssue_openU(void *ptr, const char *ticket, char *where, const UChar *msg, UBool *firstForTicket,
                                   UBool *firstForWhere);







extern "C" __attribute__((visibility("default"))) void *udbg_knownIssue_open(void *ptr, const char *ticket, char *where, const char *msg, UBool *firstForTicket,
                                   UBool *firstForWhere);






extern "C" __attribute__((visibility("default"))) UBool udbg_knownIssue_print(void *ptr);





extern "C" __attribute__((visibility("default"))) void udbg_knownIssue_close(void *ptr);
# 17 "./fldset.h" 2
# 1 "../../tools/toolutil/dbgutil.h" 1
# 20 "../../tools/toolutil/dbgutil.h"
               const icu::UnicodeString&
udbg_enumString(UDebugEnumType type, int32_t field);




extern "C" __attribute__((visibility("default"))) int32_t
udbg_enumByString(UDebugEnumType type, const icu::UnicodeString& string);






extern "C" __attribute__((visibility("default"))) int32_t udbg_stoi(const icu::UnicodeString &s);

extern "C" __attribute__((visibility("default"))) double udbg_stod(const icu::UnicodeString &s);

extern "C" __attribute__((visibility("default"))) icu::UnicodeString *
udbg_escape(const icu::UnicodeString &s, icu::UnicodeString *dst);
# 18 "./fldset.h" 2
# 29 "./fldset.h"
class FieldsSet {
    protected:







        FieldsSet(UDebugEnumType whichEnum);





        FieldsSet(int32_t fieldsCount);

    public:
# 57 "./fldset.h"
      icu_52:: UnicodeString diffFrom(const FieldsSet& other, UErrorCode &status) const;

    public:






      int32_t parseFrom(const icu_52:: UnicodeString& str, UErrorCode& status) {
          return parseFrom(str,__null,status);
      }
# 78 "./fldset.h"
      int32_t parseFrom(const icu_52:: UnicodeString& str,
                        const FieldsSet& inheritFrom,
                        UErrorCode& status) {
          return parseFrom(str, &inheritFrom, status);
      }
# 92 "./fldset.h"
      int32_t parseFrom(const icu_52:: UnicodeString& str,
                        const FieldsSet* inheritFrom,
                        UErrorCode& status);

    protected:
# 111 "./fldset.h"
      virtual int32_t handleParseName(const FieldsSet* inheritFrom,
                                      const icu_52:: UnicodeString& name,
                                      const icu_52:: UnicodeString& substr,
                                      UErrorCode& status);
# 125 "./fldset.h"
      virtual void handleParseValue(const FieldsSet* inheritFrom,
                                    int32_t field,
                                    const icu_52:: UnicodeString& substr,
                                    UErrorCode& status);







      void parseValueDefault(const FieldsSet* inheritFrom,
                             int32_t field,
                             const icu_52:: UnicodeString& substr,
                             UErrorCode& status);
# 148 "./fldset.h"
      void parseValueEnum(UDebugEnumType type,
                          const FieldsSet* inheritFrom,
                          int32_t field,
                          const icu_52:: UnicodeString& substr,
                          UErrorCode& status);

    private:




      FieldsSet();





      void construct(UDebugEnumType whichEnum, int32_t fieldCount);

    public:



     virtual ~FieldsSet();




    void clear();





    void clear(int32_t field);






    void set(int32_t field, int32_t value);

    UBool isSet(int32_t field) const;






    int32_t get(int32_t field) const;




    UBool isSameType(const FieldsSet& other) const;




    int32_t fieldCount() const;

    protected:
       int32_t fValue[64];
       UBool fIsSet[64];
    protected:
       int32_t fFieldCount;
       UDebugEnumType fEnum;
};





class CalendarFieldsSet : public FieldsSet {
public:
    CalendarFieldsSet();
    virtual ~CalendarFieldsSet();
# 237 "./fldset.h"
    UBool matches(icu_52:: Calendar *cal,
                  CalendarFieldsSet &diffSet,
                  UErrorCode& status) const;







    void setOnCalendar(icu_52:: Calendar *cal, UErrorCode& status) const;

protected:



    void handleParseValue(const FieldsSet* inheritFrom,
                          int32_t field,
                          const icu_52:: UnicodeString& substr,
                          UErrorCode& status);
};







class DateTimeStyleSet : public FieldsSet {
    public:
        DateTimeStyleSet();
        virtual ~DateTimeStyleSet();




        UDateFormatStyle getDateStyle() const;




        UDateFormatStyle getTimeStyle() const;
    protected:
        void handleParseValue(const FieldsSet* inheritFrom,
                              int32_t field,
                              const icu_52:: UnicodeString& substr,
                              UErrorCode& status);
        int32_t handleParseName(const FieldsSet* inheritFrom,
                                const icu_52:: UnicodeString& name,
                                const icu_52:: UnicodeString& substr,
                                UErrorCode& status);
};
# 9 "fldset.cpp" 2
# 1 "./intltest.h" 1
# 15 "./intltest.h"
# 1 "../../i18n/unicode/fmtable.h" 1
# 31 "../../i18n/unicode/fmtable.h"
extern "C++" { namespace icu_52 {

class CharString;
class DigitList;
# 66 "../../i18n/unicode/fmtable.h"
class Formattable : public UObject {
public:
# 77 "../../i18n/unicode/fmtable.h"
    enum ISDATE { kIsDate };





    Formattable();







    Formattable(UDate d, ISDATE flag);






    Formattable(double d);






    Formattable(int32_t l);






    Formattable(int64_t ll);
# 121 "../../i18n/unicode/fmtable.h"
    Formattable(const char* strToCopy);
# 137 "../../i18n/unicode/fmtable.h"
    Formattable(const StringPiece &number, UErrorCode &status);






    Formattable(const UnicodeString& strToCopy);






    Formattable(UnicodeString* strToAdopt);







    Formattable(const Formattable* arrayToCopy, int32_t count);






    Formattable(UObject* objectToAdopt);





    Formattable(const Formattable&);






    Formattable& operator=(const Formattable &rhs);







    UBool operator==(const Formattable &other) const;







    UBool operator!=(const Formattable& other) const
      { return !operator==(other); }





    virtual ~Formattable();
# 215 "../../i18n/unicode/fmtable.h"
    Formattable *clone() const;







    enum Type {





        kDate,






        kDouble,






        kLong,






        kString,






        kArray,






        kInt64,






        kObject
   };






    Type getType(void) const;







    UBool isNumeric() const;







    double getDouble(void) const { return fValue.fDouble; }
# 309 "../../i18n/unicode/fmtable.h"
    double getDouble(UErrorCode& status) const;







    int32_t getLong(void) const { return (int32_t)fValue.fInt64; }
# 335 "../../i18n/unicode/fmtable.h"
    int32_t getLong(UErrorCode& status) const;







    int64_t getInt64(void) const { return fValue.fInt64; }
# 360 "../../i18n/unicode/fmtable.h"
    int64_t getInt64(UErrorCode& status) const;







    UDate getDate() const { return fValue.fDate; }
# 378 "../../i18n/unicode/fmtable.h"
     UDate getDate(UErrorCode& status) const;
# 387 "../../i18n/unicode/fmtable.h"
    UnicodeString& getString(UnicodeString& result) const
      { result=*fValue.fString; return result; }
# 399 "../../i18n/unicode/fmtable.h"
    UnicodeString& getString(UnicodeString& result, UErrorCode& status) const;
# 408 "../../i18n/unicode/fmtable.h"
    inline const UnicodeString& getString(void) const;
# 418 "../../i18n/unicode/fmtable.h"
    const UnicodeString& getString(UErrorCode& status) const;







    inline UnicodeString& getString(void);
# 436 "../../i18n/unicode/fmtable.h"
    UnicodeString& getString(UErrorCode& status);
# 445 "../../i18n/unicode/fmtable.h"
    const Formattable* getArray(int32_t& count) const
      { count=fValue.fArrayAndCount.fCount; return fValue.fArrayAndCount.fArray; }
# 457 "../../i18n/unicode/fmtable.h"
    const Formattable* getArray(int32_t& count, UErrorCode& status) const;
# 467 "../../i18n/unicode/fmtable.h"
    Formattable& operator[](int32_t index) { return fValue.fArrayAndCount.fArray[index]; }







    const UObject* getObject() const;
# 495 "../../i18n/unicode/fmtable.h"
    StringPiece getDecimalNumber(UErrorCode &status);







    void setDouble(double d);







    void setLong(int32_t l);







    void setInt64(int64_t ll);







    void setDate(UDate d);







    void setString(const UnicodeString& stringToCopy);
# 544 "../../i18n/unicode/fmtable.h"
    void setArray(const Formattable* array, int32_t count);







    void adoptString(UnicodeString* stringToAdopt);






    void adoptArray(Formattable* array, int32_t count);
# 568 "../../i18n/unicode/fmtable.h"
    void adoptObject(UObject* objectToAdopt);
# 584 "../../i18n/unicode/fmtable.h"
    void setDecimalNumber(const StringPiece &numberString,
                                      UErrorCode &status);






    virtual UClassID getDynamicClassID() const;






    static UClassID getStaticClassID();
# 609 "../../i18n/unicode/fmtable.h"
    static inline Formattable *fromUFormattable(UFormattable *fmt);
# 618 "../../i18n/unicode/fmtable.h"
    static inline const Formattable *fromUFormattable(const UFormattable *fmt);







    inline UFormattable *toUFormattable();







    inline const UFormattable *toUFormattable() const;
# 644 "../../i18n/unicode/fmtable.h"
    inline int32_t getLong(UErrorCode* status) const;
# 656 "../../i18n/unicode/fmtable.h"
    DigitList *getDigitList() const { return fDecimalNum;}




    DigitList *getInternalDigitList();







    void adoptDigitList(DigitList *dl);







    CharString *internalGetCharString(UErrorCode &status);



private:




    void dispose(void);




    void init();

    UnicodeString* getBogus() const;

    union {
        UObject* fObject;
        UnicodeString* fString;
        double fDouble;
        int64_t fInt64;
        UDate fDate;
        struct {
          Formattable* fArray;
          int32_t fCount;
        } fArrayAndCount;
    } fValue;

    CharString *fDecimalStr;

    DigitList *fDecimalNum;

    char fStackData[128];

    Type fType;
    UnicodeString fBogus;
};

inline UDate Formattable::getDate(UErrorCode& status) const {
    if (fType != kDate) {
        if (U_SUCCESS(status)) {
            status = U_INVALID_FORMAT_ERROR;
        }
        return 0;
    }
    return fValue.fDate;
}

inline const UnicodeString& Formattable::getString(void) const {
    return *fValue.fString;
}

inline UnicodeString& Formattable::getString(void) {
    return *fValue.fString;
}


inline int32_t Formattable::getLong(UErrorCode* status) const {
    return getLong(*status);
}



inline UFormattable* Formattable::toUFormattable() {
  return reinterpret_cast<UFormattable*>(this);
}

inline const UFormattable* Formattable::toUFormattable() const {
  return reinterpret_cast<const UFormattable*>(this);
}

inline Formattable* Formattable::fromUFormattable(UFormattable *fmt) {
  return reinterpret_cast<Formattable *>(fmt);
}

inline const Formattable* Formattable::fromUFormattable(const UFormattable *fmt) {
  return reinterpret_cast<const Formattable *>(fmt);
}


} }
# 16 "./intltest.h" 2
# 1 "../../tools/ctestfw/unicode/testlog.h" 1
# 14 "../../tools/ctestfw/unicode/testlog.h"
# 1 "../../common/unicode/errorcode.h" 1
# 29 "../../common/unicode/errorcode.h"
extern "C++" { namespace icu_52 {
# 79 "../../common/unicode/errorcode.h"
class ErrorCode: public UMemory {
public:




    ErrorCode() : errorCode(U_ZERO_ERROR) {}

    virtual ~ErrorCode();

    operator UErrorCode & () { return errorCode; }

    operator UErrorCode * () { return &errorCode; }

    UBool isSuccess() const { return U_SUCCESS(errorCode); }

    UBool isFailure() const { return U_FAILURE(errorCode); }

    UErrorCode get() const { return errorCode; }

    void set(UErrorCode value) { errorCode=value; }

    UErrorCode reset();
# 111 "../../common/unicode/errorcode.h"
    void assertSuccess() const;






    const char* errorName() const;

protected:




    UErrorCode errorCode;






    virtual void handleFailure() const {}
};

} }
# 15 "../../tools/ctestfw/unicode/testlog.h" 2

# 1 "../../tools/ctestfw/unicode/testtype.h" 1
# 27 "../../tools/ctestfw/unicode/testtype.h"
    using namespace icu_52;
# 17 "../../tools/ctestfw/unicode/testlog.h" 2





class TestLog {
public:
    virtual ~TestLog();
    virtual void errln( const UnicodeString &message ) = 0;
    virtual void logln( const UnicodeString &message ) = 0;
    virtual void dataerrln( const UnicodeString &message ) = 0;
    virtual const char* getTestDataPath(UErrorCode& err) = 0;
};

class IcuTestErrorCode : public ErrorCode {
public:
    IcuTestErrorCode(TestLog &callingTestClass, const char *callingTestName) :
        testClass(callingTestClass), testName(callingTestName) {}
    virtual ~IcuTestErrorCode();

    UBool logIfFailureAndReset(const char *fmt, ...);
    UBool logDataIfFailureAndReset(const char *fmt, ...);
protected:
    virtual void handleFailure() const;
private:
    TestLog &testClass;
    const char *const testName;
};
# 17 "./intltest.h" 2
# 41 "./intltest.h"
using namespace icu_52;
# 52 "./intltest.h"
UnicodeString UCharToUnicodeString(UChar c);
UnicodeString Int64ToUnicodeString(int64_t num);

UnicodeString operator+(const UnicodeString& left, long num);
UnicodeString operator+(const UnicodeString& left, unsigned long num);
UnicodeString operator+(const UnicodeString& left, double num);
UnicodeString operator+(const UnicodeString& left, char num);
UnicodeString operator+(const UnicodeString& left, short num);
UnicodeString operator+(const UnicodeString& left, int num);
UnicodeString operator+(const UnicodeString& left, unsigned char num);
UnicodeString operator+(const UnicodeString& left, unsigned short num);
UnicodeString operator+(const UnicodeString& left, unsigned int num);
UnicodeString operator+(const UnicodeString& left, float num);

UnicodeString toString(const Formattable& f);
UnicodeString toString(int32_t n);

UnicodeString toString(UBool b);
# 131 "./intltest.h"
class IntlTest : public TestLog {
public:

    IntlTest();


    virtual UBool runTest( char* name = __null, char* par = __null, char *baseName = __null);

    virtual UBool setVerbose( UBool verbose = 1 );
    virtual UBool setNoErrMsg( UBool no_err_msg = 1 );
    virtual UBool setQuick( UBool quick = 1 );
    virtual UBool setLeaks( UBool leaks = 1 );
    virtual UBool setNotime( UBool no_time = 1 );
    virtual UBool setWarnOnMissingData( UBool warn_on_missing_data = 1 );
    virtual int32_t setThreadCount( int32_t count = 1);

    virtual int32_t getErrors( void );
    virtual int32_t getDataErrors (void );

    virtual void setCaller( IntlTest* callingTest );
    virtual void setPath( char* path );

    virtual void log( const UnicodeString &message );

    virtual void logln( const UnicodeString &message );

    virtual void logln( void );
# 168 "./intltest.h"
    UBool logKnownIssue( const char *ticket, const UnicodeString &message );
# 177 "./intltest.h"
    UBool logKnownIssue( const char *ticket );
# 187 "./intltest.h"
    UBool logKnownIssue( const char *ticket, const char *fmt, ...);

    virtual void info( const UnicodeString &message );

    virtual void infoln( const UnicodeString &message );

    virtual void infoln( void );

    virtual void err(void);

    virtual void err( const UnicodeString &message );

    virtual void errln( const UnicodeString &message );

    virtual void dataerr( const UnicodeString &message );

    virtual void dataerrln( const UnicodeString &message );

    void errcheckln(UErrorCode status, const UnicodeString &message );


    void log(const char *fmt, ...);
    void logln(const char *fmt, ...);
    void info(const char *fmt, ...);
    void infoln(const char *fmt, ...);
    void err(const char *fmt, ...);
    void errln(const char *fmt, ...);
    void dataerr(const char *fmt, ...);
    void dataerrln(const char *fmt, ...);







    void errcheckln(UErrorCode status, const char *fmt, ...);


    void printErrors();


    UBool printKnownIssues();

    virtual void usage( void ) ;
# 242 "./intltest.h"
    static float random(int32_t* seedp);




    static float random();

    enum { kMaxProps = 16 };

    virtual void setProperty(const char* propline);
    virtual const char* getProperty(const char* prop);

protected:

    UBool assertTrue(const char* message, UBool condition, UBool quiet=0, UBool possibleDataError=0, const char *file=__null, int line=0);
    UBool assertFalse(const char* message, UBool condition, UBool quiet=0);




    UBool assertSuccess(const char* message, UErrorCode ec, UBool possibleDataError=0, const char *file=__null, int line=0);
    UBool assertEquals(const char* message, const UnicodeString& expected,
                       const UnicodeString& actual, UBool possibleDataError=0);
    UBool assertEquals(const char* message, const char* expected,
                       const char* actual);
    UBool assertEquals(const char* message, UBool expected,
                       UBool actual);
    UBool assertEquals(const char* message, int32_t expected, int32_t actual);
    UBool assertEquals(const char* message, int64_t expected, int64_t actual);

    UBool assertEquals(const char* message, const Formattable& expected,
                       const Formattable& actual, UBool possibleDataError=0);
    UBool assertEquals(const UnicodeString& message, const Formattable& expected,
                       const Formattable& actual);

    UBool assertTrue(const UnicodeString& message, UBool condition, UBool quiet=0);
    UBool assertFalse(const UnicodeString& message, UBool condition, UBool quiet=0);
    UBool assertSuccess(const UnicodeString& message, UErrorCode ec);
    UBool assertEquals(const UnicodeString& message, const UnicodeString& expected,
                       const UnicodeString& actual, UBool possibleDataError=0);
    UBool assertEquals(const UnicodeString& message, const char* expected,
                       const char* actual);
    UBool assertEquals(const UnicodeString& message, UBool expected, UBool actual);
    UBool assertEquals(const UnicodeString& message, int32_t expected, int32_t actual);
    UBool assertEquals(const UnicodeString& message, int64_t expected, int64_t actual);

    virtual void runIndexedTest( int32_t index, UBool exec, const char* &name, char* par = __null );

    virtual UBool runTestLoop( char* testname, char* par, char *baseName );

    virtual int32_t IncErrorCount( void );

    virtual int32_t IncDataErrorCount( void );

    virtual UBool callTest( IntlTest& testToBeCalled, char* par );


    UBool verbose;
    UBool no_err_msg;
    UBool quick;
    UBool leaks;
    UBool warn_on_missing_data;
    UBool no_time;
    int32_t threadCount;

private:
    UBool LL_linestart;
    int32_t LL_indentlevel;

    int32_t errorCount;
    int32_t dataErrorCount;
    IntlTest* caller;
    char* testPath;

    char basePath[1024];
    char currName[1024];


    void *testoutfp;

    const char* proplines[kMaxProps];
    int32_t numProps;

protected:

    virtual void LL_message( UnicodeString message, UBool newline );



    static UnicodeString &prettify(const UnicodeString &source, UnicodeString &target);
    static UnicodeString prettify(const UnicodeString &source, UBool parseBackslash=0);

    static UnicodeString &appendHex(uint32_t number, int32_t digits, UnicodeString &target);
    static UnicodeString toHex(uint32_t number, int32_t digits=-1);
    static inline UnicodeString toHex(int32_t number, int32_t digits=-1) {
        return toHex((uint32_t)number, digits);
    }

public:
    static void setICU_DATA();

    static const char* pathToDataDirectory();

public:
    UBool run_phase2( char* name, char* par );
    static const char* loadTestData(UErrorCode& err);
    virtual const char* getTestDataPath(UErrorCode& err);
    static const char* getSourceTestData(UErrorCode& err);


public:
    static IntlTest* gTest;
    static const char* fgDataDir;

};

void it_log( UnicodeString message );
void it_logln( UnicodeString message );
void it_logln( void );
void it_info( UnicodeString message );
void it_infoln( UnicodeString message );
void it_infoln( void );
void it_err(void);
void it_err( UnicodeString message );
void it_errln( UnicodeString message );
void it_dataerr( UnicodeString message );
void it_dataerrln( UnicodeString message );






extern UnicodeString CharsToUnicodeString(const char* chars);


extern UnicodeString ctou(const char* chars);
# 10 "fldset.cpp" 2


# 1 "../../i18n/unicode/regex.h" 1
# 51 "../../i18n/unicode/regex.h"
# 1 "../../common/unicode/utext.h" 1
# 139 "../../common/unicode/utext.h"
# 1 "../../common/unicode/uchar.h" 1
# 28 "../../common/unicode/uchar.h"
extern "C" {
# 161 "../../common/unicode/uchar.h"
typedef enum UProperty {
# 175 "../../common/unicode/uchar.h"
    UCHAR_ALPHABETIC=0,

    UCHAR_BINARY_START=UCHAR_ALPHABETIC,

    UCHAR_ASCII_HEX_DIGIT=1,



    UCHAR_BIDI_CONTROL=2,




    UCHAR_BIDI_MIRRORED=3,

    UCHAR_DASH=4,



    UCHAR_DEFAULT_IGNORABLE_CODE_POINT=5,


    UCHAR_DEPRECATED=6,


    UCHAR_DIACRITIC=7,



    UCHAR_EXTENDER=8,



    UCHAR_FULL_COMPOSITION_EXCLUSION=9,



    UCHAR_GRAPHEME_BASE=10,



    UCHAR_GRAPHEME_EXTEND=11,


    UCHAR_GRAPHEME_LINK=12,


    UCHAR_HEX_DIGIT=13,


    UCHAR_HYPHEN=14,




    UCHAR_ID_CONTINUE=15,



    UCHAR_ID_START=16,


    UCHAR_IDEOGRAPHIC=17,



    UCHAR_IDS_BINARY_OPERATOR=18,



    UCHAR_IDS_TRINARY_OPERATOR=19,


    UCHAR_JOIN_CONTROL=20,



    UCHAR_LOGICAL_ORDER_EXCEPTION=21,


    UCHAR_LOWERCASE=22,

    UCHAR_MATH=23,



    UCHAR_NONCHARACTER_CODE_POINT=24,

    UCHAR_QUOTATION_MARK=25,



    UCHAR_RADICAL=26,




    UCHAR_SOFT_DOTTED=27,



    UCHAR_TERMINAL_PUNCTUATION=28,



    UCHAR_UNIFIED_IDEOGRAPH=29,


    UCHAR_UPPERCASE=30,



    UCHAR_WHITE_SPACE=31,



    UCHAR_XID_CONTINUE=32,


    UCHAR_XID_START=33,



   UCHAR_CASE_SENSITIVE=34,




    UCHAR_S_TERM=35,





    UCHAR_VARIATION_SELECTOR=36,






    UCHAR_NFD_INERT=37,






    UCHAR_NFKD_INERT=38,






    UCHAR_NFC_INERT=39,






    UCHAR_NFKC_INERT=40,
# 348 "../../common/unicode/uchar.h"
    UCHAR_SEGMENT_STARTER=41,




    UCHAR_PATTERN_SYNTAX=42,




    UCHAR_PATTERN_WHITE_SPACE=43,




    UCHAR_POSIX_ALNUM=44,




    UCHAR_POSIX_BLANK=45,




    UCHAR_POSIX_GRAPH=46,




    UCHAR_POSIX_PRINT=47,




    UCHAR_POSIX_XDIGIT=48,

    UCHAR_CASED=49,

    UCHAR_CASE_IGNORABLE=50,

    UCHAR_CHANGES_WHEN_LOWERCASED=51,

    UCHAR_CHANGES_WHEN_UPPERCASED=52,

    UCHAR_CHANGES_WHEN_TITLECASED=53,

    UCHAR_CHANGES_WHEN_CASEFOLDED=54,

    UCHAR_CHANGES_WHEN_CASEMAPPED=55,

    UCHAR_CHANGES_WHEN_NFKC_CASEFOLDED=56,

    UCHAR_BINARY_LIMIT=57,



    UCHAR_BIDI_CLASS=0x1000,

    UCHAR_INT_START=UCHAR_BIDI_CLASS,


    UCHAR_BLOCK=0x1001,


    UCHAR_CANONICAL_COMBINING_CLASS=0x1002,


    UCHAR_DECOMPOSITION_TYPE=0x1003,



    UCHAR_EAST_ASIAN_WIDTH=0x1004,


    UCHAR_GENERAL_CATEGORY=0x1005,


    UCHAR_JOINING_GROUP=0x1006,


    UCHAR_JOINING_TYPE=0x1007,


    UCHAR_LINE_BREAK=0x1008,


    UCHAR_NUMERIC_TYPE=0x1009,


    UCHAR_SCRIPT=0x100A,


    UCHAR_HANGUL_SYLLABLE_TYPE=0x100B,


    UCHAR_NFD_QUICK_CHECK=0x100C,


    UCHAR_NFKD_QUICK_CHECK=0x100D,


    UCHAR_NFC_QUICK_CHECK=0x100E,


    UCHAR_NFKC_QUICK_CHECK=0x100F,






    UCHAR_LEAD_CANONICAL_COMBINING_CLASS=0x1010,






    UCHAR_TRAIL_CANONICAL_COMBINING_CLASS=0x1011,




    UCHAR_GRAPHEME_CLUSTER_BREAK=0x1012,




    UCHAR_SENTENCE_BREAK=0x1013,




    UCHAR_WORD_BREAK=0x1014,




    UCHAR_BIDI_PAIRED_BRACKET_TYPE=0x1015,

    UCHAR_INT_LIMIT=0x1016,
# 499 "../../common/unicode/uchar.h"
    UCHAR_GENERAL_CATEGORY_MASK=0x2000,

    UCHAR_MASK_START=UCHAR_GENERAL_CATEGORY_MASK,

    UCHAR_MASK_LIMIT=0x2001,



    UCHAR_NUMERIC_VALUE=0x3000,

    UCHAR_DOUBLE_START=UCHAR_NUMERIC_VALUE,

    UCHAR_DOUBLE_LIMIT=0x3001,



    UCHAR_AGE=0x4000,

    UCHAR_STRING_START=UCHAR_AGE,


    UCHAR_BIDI_MIRRORING_GLYPH=0x4001,


    UCHAR_CASE_FOLDING=0x4002,



    UCHAR_ISO_COMMENT=0x4003,



    UCHAR_LOWERCASE_MAPPING=0x4004,


    UCHAR_NAME=0x4005,


    UCHAR_SIMPLE_CASE_FOLDING=0x4006,


    UCHAR_SIMPLE_LOWERCASE_MAPPING=0x4007,


    UCHAR_SIMPLE_TITLECASE_MAPPING=0x4008,


    UCHAR_SIMPLE_UPPERCASE_MAPPING=0x4009,


    UCHAR_TITLECASE_MAPPING=0x400A,





    UCHAR_UNICODE_1_NAME=0x400B,



    UCHAR_UPPERCASE_MAPPING=0x400C,


    UCHAR_BIDI_PAIRED_BRACKET=0x400D,

    UCHAR_STRING_LIMIT=0x400E,






    UCHAR_SCRIPT_EXTENSIONS=0x7000,

    UCHAR_OTHER_PROPERTY_START=UCHAR_SCRIPT_EXTENSIONS,


    UCHAR_OTHER_PROPERTY_LIMIT=0x7001,

    UCHAR_INVALID_CODE = -1
} UProperty;






typedef enum UCharCategory
{
# 596 "../../common/unicode/uchar.h"
    U_UNASSIGNED = 0,

    U_GENERAL_OTHER_TYPES = 0,

    U_UPPERCASE_LETTER = 1,

    U_LOWERCASE_LETTER = 2,

    U_TITLECASE_LETTER = 3,

    U_MODIFIER_LETTER = 4,

    U_OTHER_LETTER = 5,

    U_NON_SPACING_MARK = 6,

    U_ENCLOSING_MARK = 7,

    U_COMBINING_SPACING_MARK = 8,

    U_DECIMAL_DIGIT_NUMBER = 9,

    U_LETTER_NUMBER = 10,

    U_OTHER_NUMBER = 11,

    U_SPACE_SEPARATOR = 12,

    U_LINE_SEPARATOR = 13,

    U_PARAGRAPH_SEPARATOR = 14,

    U_CONTROL_CHAR = 15,

    U_FORMAT_CHAR = 16,

    U_PRIVATE_USE_CHAR = 17,

    U_SURROGATE = 18,

    U_DASH_PUNCTUATION = 19,

    U_START_PUNCTUATION = 20,

    U_END_PUNCTUATION = 21,

    U_CONNECTOR_PUNCTUATION = 22,

    U_OTHER_PUNCTUATION = 23,

    U_MATH_SYMBOL = 24,

    U_CURRENCY_SYMBOL = 25,

    U_MODIFIER_SYMBOL = 26,

    U_OTHER_SYMBOL = 27,

    U_INITIAL_PUNCTUATION = 28,

    U_FINAL_PUNCTUATION = 29,

    U_CHAR_CATEGORY_COUNT
} UCharCategory;
# 777 "../../common/unicode/uchar.h"
typedef enum UCharDirection {
# 786 "../../common/unicode/uchar.h"
    U_LEFT_TO_RIGHT = 0,

    U_RIGHT_TO_LEFT = 1,

    U_EUROPEAN_NUMBER = 2,

    U_EUROPEAN_NUMBER_SEPARATOR = 3,

    U_EUROPEAN_NUMBER_TERMINATOR = 4,

    U_ARABIC_NUMBER = 5,

    U_COMMON_NUMBER_SEPARATOR = 6,

    U_BLOCK_SEPARATOR = 7,

    U_SEGMENT_SEPARATOR = 8,

    U_WHITE_SPACE_NEUTRAL = 9,

    U_OTHER_NEUTRAL = 10,

    U_LEFT_TO_RIGHT_EMBEDDING = 11,

    U_LEFT_TO_RIGHT_OVERRIDE = 12,

    U_RIGHT_TO_LEFT_ARABIC = 13,

    U_RIGHT_TO_LEFT_EMBEDDING = 14,

    U_RIGHT_TO_LEFT_OVERRIDE = 15,

    U_POP_DIRECTIONAL_FORMAT = 16,

    U_DIR_NON_SPACING_MARK = 17,

    U_BOUNDARY_NEUTRAL = 18,

    U_FIRST_STRONG_ISOLATE = 19,

    U_LEFT_TO_RIGHT_ISOLATE = 20,

    U_RIGHT_TO_LEFT_ISOLATE = 21,

    U_POP_DIRECTIONAL_ISOLATE = 22,

    U_CHAR_DIRECTION_COUNT
} UCharDirection;







typedef enum UBidiPairedBracketType {







    U_BPT_NONE,

    U_BPT_OPEN,

    U_BPT_CLOSE,

    U_BPT_COUNT
} UBidiPairedBracketType;





enum UBlockCode {







    UBLOCK_NO_BLOCK = 0,


    UBLOCK_BASIC_LATIN = 1,


    UBLOCK_LATIN_1_SUPPLEMENT=2,


    UBLOCK_LATIN_EXTENDED_A =3,


    UBLOCK_LATIN_EXTENDED_B =4,


    UBLOCK_IPA_EXTENSIONS =5,


    UBLOCK_SPACING_MODIFIER_LETTERS =6,


    UBLOCK_COMBINING_DIACRITICAL_MARKS =7,





    UBLOCK_GREEK =8,


    UBLOCK_CYRILLIC =9,


    UBLOCK_ARMENIAN =10,


    UBLOCK_HEBREW =11,


    UBLOCK_ARABIC =12,


    UBLOCK_SYRIAC =13,


    UBLOCK_THAANA =14,


    UBLOCK_DEVANAGARI =15,


    UBLOCK_BENGALI =16,


    UBLOCK_GURMUKHI =17,


    UBLOCK_GUJARATI =18,


    UBLOCK_ORIYA =19,


    UBLOCK_TAMIL =20,


    UBLOCK_TELUGU =21,


    UBLOCK_KANNADA =22,


    UBLOCK_MALAYALAM =23,


    UBLOCK_SINHALA =24,


    UBLOCK_THAI =25,


    UBLOCK_LAO =26,


    UBLOCK_TIBETAN =27,


    UBLOCK_MYANMAR =28,


    UBLOCK_GEORGIAN =29,


    UBLOCK_HANGUL_JAMO =30,


    UBLOCK_ETHIOPIC =31,


    UBLOCK_CHEROKEE =32,


    UBLOCK_UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS =33,


    UBLOCK_OGHAM =34,


    UBLOCK_RUNIC =35,


    UBLOCK_KHMER =36,


    UBLOCK_MONGOLIAN =37,


    UBLOCK_LATIN_EXTENDED_ADDITIONAL =38,


    UBLOCK_GREEK_EXTENDED =39,


    UBLOCK_GENERAL_PUNCTUATION =40,


    UBLOCK_SUPERSCRIPTS_AND_SUBSCRIPTS =41,


    UBLOCK_CURRENCY_SYMBOLS =42,





    UBLOCK_COMBINING_MARKS_FOR_SYMBOLS =43,


    UBLOCK_LETTERLIKE_SYMBOLS =44,


    UBLOCK_NUMBER_FORMS =45,


    UBLOCK_ARROWS =46,


    UBLOCK_MATHEMATICAL_OPERATORS =47,


    UBLOCK_MISCELLANEOUS_TECHNICAL =48,


    UBLOCK_CONTROL_PICTURES =49,


    UBLOCK_OPTICAL_CHARACTER_RECOGNITION =50,


    UBLOCK_ENCLOSED_ALPHANUMERICS =51,


    UBLOCK_BOX_DRAWING =52,


    UBLOCK_BLOCK_ELEMENTS =53,


    UBLOCK_GEOMETRIC_SHAPES =54,


    UBLOCK_MISCELLANEOUS_SYMBOLS =55,


    UBLOCK_DINGBATS =56,


    UBLOCK_BRAILLE_PATTERNS =57,


    UBLOCK_CJK_RADICALS_SUPPLEMENT =58,


    UBLOCK_KANGXI_RADICALS =59,


    UBLOCK_IDEOGRAPHIC_DESCRIPTION_CHARACTERS =60,


    UBLOCK_CJK_SYMBOLS_AND_PUNCTUATION =61,


    UBLOCK_HIRAGANA =62,


    UBLOCK_KATAKANA =63,


    UBLOCK_BOPOMOFO =64,


    UBLOCK_HANGUL_COMPATIBILITY_JAMO =65,


    UBLOCK_KANBUN =66,


    UBLOCK_BOPOMOFO_EXTENDED =67,


    UBLOCK_ENCLOSED_CJK_LETTERS_AND_MONTHS =68,


    UBLOCK_CJK_COMPATIBILITY =69,


    UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_A =70,


    UBLOCK_CJK_UNIFIED_IDEOGRAPHS =71,


    UBLOCK_YI_SYLLABLES =72,


    UBLOCK_YI_RADICALS =73,


    UBLOCK_HANGUL_SYLLABLES =74,


    UBLOCK_HIGH_SURROGATES =75,


    UBLOCK_HIGH_PRIVATE_USE_SURROGATES =76,


    UBLOCK_LOW_SURROGATES =77,
# 1118 "../../common/unicode/uchar.h"
    UBLOCK_PRIVATE_USE_AREA =78,
# 1128 "../../common/unicode/uchar.h"
    UBLOCK_PRIVATE_USE = UBLOCK_PRIVATE_USE_AREA,


    UBLOCK_CJK_COMPATIBILITY_IDEOGRAPHS =79,


    UBLOCK_ALPHABETIC_PRESENTATION_FORMS =80,


    UBLOCK_ARABIC_PRESENTATION_FORMS_A =81,


    UBLOCK_COMBINING_HALF_MARKS =82,


    UBLOCK_CJK_COMPATIBILITY_FORMS =83,


    UBLOCK_SMALL_FORM_VARIANTS =84,


    UBLOCK_ARABIC_PRESENTATION_FORMS_B =85,


    UBLOCK_SPECIALS =86,


    UBLOCK_HALFWIDTH_AND_FULLWIDTH_FORMS =87,




    UBLOCK_OLD_ITALIC = 88,

    UBLOCK_GOTHIC = 89,

    UBLOCK_DESERET = 90,

    UBLOCK_BYZANTINE_MUSICAL_SYMBOLS = 91,

    UBLOCK_MUSICAL_SYMBOLS = 92,

    UBLOCK_MATHEMATICAL_ALPHANUMERIC_SYMBOLS = 93,

    UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B = 94,

    UBLOCK_CJK_COMPATIBILITY_IDEOGRAPHS_SUPPLEMENT = 95,

    UBLOCK_TAGS = 96,




    UBLOCK_CYRILLIC_SUPPLEMENT = 97,




    UBLOCK_CYRILLIC_SUPPLEMENTARY = UBLOCK_CYRILLIC_SUPPLEMENT,

    UBLOCK_TAGALOG = 98,

    UBLOCK_HANUNOO = 99,

    UBLOCK_BUHID = 100,

    UBLOCK_TAGBANWA = 101,

    UBLOCK_MISCELLANEOUS_MATHEMATICAL_SYMBOLS_A = 102,

    UBLOCK_SUPPLEMENTAL_ARROWS_A = 103,

    UBLOCK_SUPPLEMENTAL_ARROWS_B = 104,

    UBLOCK_MISCELLANEOUS_MATHEMATICAL_SYMBOLS_B = 105,

    UBLOCK_SUPPLEMENTAL_MATHEMATICAL_OPERATORS = 106,

    UBLOCK_KATAKANA_PHONETIC_EXTENSIONS = 107,

    UBLOCK_VARIATION_SELECTORS = 108,

    UBLOCK_SUPPLEMENTARY_PRIVATE_USE_AREA_A = 109,

    UBLOCK_SUPPLEMENTARY_PRIVATE_USE_AREA_B = 110,




    UBLOCK_LIMBU = 111,

    UBLOCK_TAI_LE = 112,

    UBLOCK_KHMER_SYMBOLS = 113,

    UBLOCK_PHONETIC_EXTENSIONS = 114,

    UBLOCK_MISCELLANEOUS_SYMBOLS_AND_ARROWS = 115,

    UBLOCK_YIJING_HEXAGRAM_SYMBOLS = 116,

    UBLOCK_LINEAR_B_SYLLABARY = 117,

    UBLOCK_LINEAR_B_IDEOGRAMS = 118,

    UBLOCK_AEGEAN_NUMBERS = 119,

    UBLOCK_UGARITIC = 120,

    UBLOCK_SHAVIAN = 121,

    UBLOCK_OSMANYA = 122,

    UBLOCK_CYPRIOT_SYLLABARY = 123,

    UBLOCK_TAI_XUAN_JING_SYMBOLS = 124,

    UBLOCK_VARIATION_SELECTORS_SUPPLEMENT = 125,




    UBLOCK_ANCIENT_GREEK_MUSICAL_NOTATION = 126,

    UBLOCK_ANCIENT_GREEK_NUMBERS = 127,

    UBLOCK_ARABIC_SUPPLEMENT = 128,

    UBLOCK_BUGINESE = 129,

    UBLOCK_CJK_STROKES = 130,

    UBLOCK_COMBINING_DIACRITICAL_MARKS_SUPPLEMENT = 131,

    UBLOCK_COPTIC = 132,

    UBLOCK_ETHIOPIC_EXTENDED = 133,

    UBLOCK_ETHIOPIC_SUPPLEMENT = 134,

    UBLOCK_GEORGIAN_SUPPLEMENT = 135,

    UBLOCK_GLAGOLITIC = 136,

    UBLOCK_KHAROSHTHI = 137,

    UBLOCK_MODIFIER_TONE_LETTERS = 138,

    UBLOCK_NEW_TAI_LUE = 139,

    UBLOCK_OLD_PERSIAN = 140,

    UBLOCK_PHONETIC_EXTENSIONS_SUPPLEMENT = 141,

    UBLOCK_SUPPLEMENTAL_PUNCTUATION = 142,

    UBLOCK_SYLOTI_NAGRI = 143,

    UBLOCK_TIFINAGH = 144,

    UBLOCK_VERTICAL_FORMS = 145,




    UBLOCK_NKO = 146,

    UBLOCK_BALINESE = 147,

    UBLOCK_LATIN_EXTENDED_C = 148,

    UBLOCK_LATIN_EXTENDED_D = 149,

    UBLOCK_PHAGS_PA = 150,

    UBLOCK_PHOENICIAN = 151,

    UBLOCK_CUNEIFORM = 152,

    UBLOCK_CUNEIFORM_NUMBERS_AND_PUNCTUATION = 153,

    UBLOCK_COUNTING_ROD_NUMERALS = 154,




    UBLOCK_SUNDANESE = 155,

    UBLOCK_LEPCHA = 156,

    UBLOCK_OL_CHIKI = 157,

    UBLOCK_CYRILLIC_EXTENDED_A = 158,

    UBLOCK_VAI = 159,

    UBLOCK_CYRILLIC_EXTENDED_B = 160,

    UBLOCK_SAURASHTRA = 161,

    UBLOCK_KAYAH_LI = 162,

    UBLOCK_REJANG = 163,

    UBLOCK_CHAM = 164,

    UBLOCK_ANCIENT_SYMBOLS = 165,

    UBLOCK_PHAISTOS_DISC = 166,

    UBLOCK_LYCIAN = 167,

    UBLOCK_CARIAN = 168,

    UBLOCK_LYDIAN = 169,

    UBLOCK_MAHJONG_TILES = 170,

    UBLOCK_DOMINO_TILES = 171,




    UBLOCK_SAMARITAN = 172,

    UBLOCK_UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS_EXTENDED = 173,

    UBLOCK_TAI_THAM = 174,

    UBLOCK_VEDIC_EXTENSIONS = 175,

    UBLOCK_LISU = 176,

    UBLOCK_BAMUM = 177,

    UBLOCK_COMMON_INDIC_NUMBER_FORMS = 178,

    UBLOCK_DEVANAGARI_EXTENDED = 179,

    UBLOCK_HANGUL_JAMO_EXTENDED_A = 180,

    UBLOCK_JAVANESE = 181,

    UBLOCK_MYANMAR_EXTENDED_A = 182,

    UBLOCK_TAI_VIET = 183,

    UBLOCK_MEETEI_MAYEK = 184,

    UBLOCK_HANGUL_JAMO_EXTENDED_B = 185,

    UBLOCK_IMPERIAL_ARAMAIC = 186,

    UBLOCK_OLD_SOUTH_ARABIAN = 187,

    UBLOCK_AVESTAN = 188,

    UBLOCK_INSCRIPTIONAL_PARTHIAN = 189,

    UBLOCK_INSCRIPTIONAL_PAHLAVI = 190,

    UBLOCK_OLD_TURKIC = 191,

    UBLOCK_RUMI_NUMERAL_SYMBOLS = 192,

    UBLOCK_KAITHI = 193,

    UBLOCK_EGYPTIAN_HIEROGLYPHS = 194,

    UBLOCK_ENCLOSED_ALPHANUMERIC_SUPPLEMENT = 195,

    UBLOCK_ENCLOSED_IDEOGRAPHIC_SUPPLEMENT = 196,

    UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_C = 197,




    UBLOCK_MANDAIC = 198,

    UBLOCK_BATAK = 199,

    UBLOCK_ETHIOPIC_EXTENDED_A = 200,

    UBLOCK_BRAHMI = 201,

    UBLOCK_BAMUM_SUPPLEMENT = 202,

    UBLOCK_KANA_SUPPLEMENT = 203,

    UBLOCK_PLAYING_CARDS = 204,

    UBLOCK_MISCELLANEOUS_SYMBOLS_AND_PICTOGRAPHS = 205,

    UBLOCK_EMOTICONS = 206,

    UBLOCK_TRANSPORT_AND_MAP_SYMBOLS = 207,

    UBLOCK_ALCHEMICAL_SYMBOLS = 208,

    UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_D = 209,




    UBLOCK_ARABIC_EXTENDED_A = 210,

    UBLOCK_ARABIC_MATHEMATICAL_ALPHABETIC_SYMBOLS = 211,

    UBLOCK_CHAKMA = 212,

    UBLOCK_MEETEI_MAYEK_EXTENSIONS = 213,

    UBLOCK_MEROITIC_CURSIVE = 214,

    UBLOCK_MEROITIC_HIEROGLYPHS = 215,

    UBLOCK_MIAO = 216,

    UBLOCK_SHARADA = 217,

    UBLOCK_SORA_SOMPENG = 218,

    UBLOCK_SUNDANESE_SUPPLEMENT = 219,

    UBLOCK_TAKRI = 220,


    UBLOCK_COUNT = 221,


    UBLOCK_INVALID_CODE=-1
};


typedef enum UBlockCode UBlockCode;
# 1472 "../../common/unicode/uchar.h"
typedef enum UEastAsianWidth {






    U_EA_NEUTRAL,
    U_EA_AMBIGUOUS,
    U_EA_HALFWIDTH,
    U_EA_FULLWIDTH,
    U_EA_NARROW,
    U_EA_WIDE,
    U_EA_COUNT
} UEastAsianWidth;
# 1499 "../../common/unicode/uchar.h"
typedef enum UCharNameChoice {

    U_UNICODE_CHAR_NAME,






    U_UNICODE_10_CHAR_NAME,


    U_EXTENDED_CHAR_NAME = U_UNICODE_CHAR_NAME+2,

    U_CHAR_NAME_ALIAS,

    U_CHAR_NAME_CHOICE_COUNT
} UCharNameChoice;
# 1531 "../../common/unicode/uchar.h"
typedef enum UPropertyNameChoice {
    U_SHORT_PROPERTY_NAME,
    U_LONG_PROPERTY_NAME,
    U_PROPERTY_NAME_CHOICE_COUNT
} UPropertyNameChoice;







typedef enum UDecompositionType {






    U_DT_NONE,
    U_DT_CANONICAL,
    U_DT_COMPAT,
    U_DT_CIRCLE,
    U_DT_FINAL,
    U_DT_FONT,
    U_DT_FRACTION,
    U_DT_INITIAL,
    U_DT_ISOLATED,
    U_DT_MEDIAL,
    U_DT_NARROW,
    U_DT_NOBREAK,
    U_DT_SMALL,
    U_DT_SQUARE,
    U_DT_SUB,
    U_DT_SUPER,
    U_DT_VERTICAL,
    U_DT_WIDE,
    U_DT_COUNT
} UDecompositionType;







typedef enum UJoiningType {






    U_JT_NON_JOINING,
    U_JT_JOIN_CAUSING,
    U_JT_DUAL_JOINING,
    U_JT_LEFT_JOINING,
    U_JT_RIGHT_JOINING,
    U_JT_TRANSPARENT,
    U_JT_COUNT
} UJoiningType;







typedef enum UJoiningGroup {






    U_JG_NO_JOINING_GROUP,
    U_JG_AIN,
    U_JG_ALAPH,
    U_JG_ALEF,
    U_JG_BEH,
    U_JG_BETH,
    U_JG_DAL,
    U_JG_DALATH_RISH,
    U_JG_E,
    U_JG_FEH,
    U_JG_FINAL_SEMKATH,
    U_JG_GAF,
    U_JG_GAMAL,
    U_JG_HAH,
    U_JG_TEH_MARBUTA_GOAL,
    U_JG_HAMZA_ON_HEH_GOAL=U_JG_TEH_MARBUTA_GOAL,
    U_JG_HE,
    U_JG_HEH,
    U_JG_HEH_GOAL,
    U_JG_HETH,
    U_JG_KAF,
    U_JG_KAPH,
    U_JG_KNOTTED_HEH,
    U_JG_LAM,
    U_JG_LAMADH,
    U_JG_MEEM,
    U_JG_MIM,
    U_JG_NOON,
    U_JG_NUN,
    U_JG_PE,
    U_JG_QAF,
    U_JG_QAPH,
    U_JG_REH,
    U_JG_REVERSED_PE,
    U_JG_SAD,
    U_JG_SADHE,
    U_JG_SEEN,
    U_JG_SEMKATH,
    U_JG_SHIN,
    U_JG_SWASH_KAF,
    U_JG_SYRIAC_WAW,
    U_JG_TAH,
    U_JG_TAW,
    U_JG_TEH_MARBUTA,
    U_JG_TETH,
    U_JG_WAW,
    U_JG_YEH,
    U_JG_YEH_BARREE,
    U_JG_YEH_WITH_TAIL,
    U_JG_YUDH,
    U_JG_YUDH_HE,
    U_JG_ZAIN,
    U_JG_FE,
    U_JG_KHAPH,
    U_JG_ZHAIN,
    U_JG_BURUSHASKI_YEH_BARREE,
    U_JG_FARSI_YEH,
    U_JG_NYA,
    U_JG_ROHINGYA_YEH,
    U_JG_COUNT
} UJoiningGroup;







typedef enum UGraphemeClusterBreak {






    U_GCB_OTHER = 0,
    U_GCB_CONTROL = 1,
    U_GCB_CR = 2,
    U_GCB_EXTEND = 3,
    U_GCB_L = 4,
    U_GCB_LF = 5,
    U_GCB_LV = 6,
    U_GCB_LVT = 7,
    U_GCB_T = 8,
    U_GCB_V = 9,
    U_GCB_SPACING_MARK = 10,
    U_GCB_PREPEND = 11,
    U_GCB_REGIONAL_INDICATOR = 12,
    U_GCB_COUNT = 13
} UGraphemeClusterBreak;
# 1704 "../../common/unicode/uchar.h"
typedef enum UWordBreakValues {






    U_WB_OTHER = 0,
    U_WB_ALETTER = 1,
    U_WB_FORMAT = 2,
    U_WB_KATAKANA = 3,
    U_WB_MIDLETTER = 4,
    U_WB_MIDNUM = 5,
    U_WB_NUMERIC = 6,
    U_WB_EXTENDNUMLET = 7,
    U_WB_CR = 8,
    U_WB_EXTEND = 9,
    U_WB_LF = 10,
    U_WB_MIDNUMLET =11,
    U_WB_NEWLINE =12,
    U_WB_REGIONAL_INDICATOR = 13,
    U_WB_HEBREW_LETTER = 14,
    U_WB_SINGLE_QUOTE = 15,
    U_WB_DOUBLE_QUOTE = 16,
    U_WB_COUNT = 17
} UWordBreakValues;







typedef enum USentenceBreak {






    U_SB_OTHER = 0,
    U_SB_ATERM = 1,
    U_SB_CLOSE = 2,
    U_SB_FORMAT = 3,
    U_SB_LOWER = 4,
    U_SB_NUMERIC = 5,
    U_SB_OLETTER = 6,
    U_SB_SEP = 7,
    U_SB_SP = 8,
    U_SB_STERM = 9,
    U_SB_UPPER = 10,
    U_SB_CR = 11,
    U_SB_EXTEND = 12,
    U_SB_LF = 13,
    U_SB_SCONTINUE = 14,
    U_SB_COUNT = 15
} USentenceBreak;







typedef enum ULineBreak {






    U_LB_UNKNOWN = 0,
    U_LB_AMBIGUOUS = 1,
    U_LB_ALPHABETIC = 2,
    U_LB_BREAK_BOTH = 3,
    U_LB_BREAK_AFTER = 4,
    U_LB_BREAK_BEFORE = 5,
    U_LB_MANDATORY_BREAK = 6,
    U_LB_CONTINGENT_BREAK = 7,
    U_LB_CLOSE_PUNCTUATION = 8,
    U_LB_COMBINING_MARK = 9,
    U_LB_CARRIAGE_RETURN = 10,
    U_LB_EXCLAMATION = 11,
    U_LB_GLUE = 12,
    U_LB_HYPHEN = 13,
    U_LB_IDEOGRAPHIC = 14,

    U_LB_INSEPARABLE = 15,
    U_LB_INSEPERABLE = U_LB_INSEPARABLE,
    U_LB_INFIX_NUMERIC = 16,
    U_LB_LINE_FEED = 17,
    U_LB_NONSTARTER = 18,
    U_LB_NUMERIC = 19,
    U_LB_OPEN_PUNCTUATION = 20,
    U_LB_POSTFIX_NUMERIC = 21,
    U_LB_PREFIX_NUMERIC = 22,
    U_LB_QUOTATION = 23,
    U_LB_COMPLEX_CONTEXT = 24,
    U_LB_SURROGATE = 25,
    U_LB_SPACE = 26,
    U_LB_BREAK_SYMBOLS = 27,
    U_LB_ZWSPACE = 28,
    U_LB_NEXT_LINE = 29,
    U_LB_WORD_JOINER = 30,
    U_LB_H2 = 31,
    U_LB_H3 = 32,
    U_LB_JL = 33,
    U_LB_JT = 34,
    U_LB_JV = 35,
    U_LB_CLOSE_PARENTHESIS = 36,
    U_LB_CONDITIONAL_JAPANESE_STARTER = 37,
    U_LB_HEBREW_LETTER = 38,
    U_LB_REGIONAL_INDICATOR = 39,
    U_LB_COUNT = 40
} ULineBreak;







typedef enum UNumericType {






    U_NT_NONE,
    U_NT_DECIMAL,
    U_NT_DIGIT,
    U_NT_NUMERIC,
    U_NT_COUNT
} UNumericType;







typedef enum UHangulSyllableType {






    U_HST_NOT_APPLICABLE,
    U_HST_LEADING_JAMO,
    U_HST_VOWEL_JAMO,
    U_HST_TRAILING_JAMO,
    U_HST_LV_SYLLABLE,
    U_HST_LVT_SYLLABLE,
    U_HST_COUNT
} UHangulSyllableType;
# 1888 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_hasBinaryProperty_52(UChar32 c, UProperty which);
# 1903 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_isUAlphabetic_52(UChar32 c);
# 1918 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_isULowercase_52(UChar32 c);
# 1933 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_isUUppercase_52(UChar32 c);
# 1954 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_isUWhiteSpace_52(UChar32 c);
# 1994 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_getIntPropertyValue_52(UChar32 c, UProperty which);
# 2015 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_getIntPropertyMinValue_52(UProperty which);
# 2044 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_getIntPropertyMaxValue_52(UProperty which);
# 2069 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) double
u_getNumericValue_52(UChar32 c);
# 2104 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_islower_52(UChar32 c);
# 2131 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_isupper_52(UChar32 c);
# 2148 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_istitle_52(UChar32 c);
# 2169 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_isdigit_52(UChar32 c);
# 2190 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_isalpha_52(UChar32 c);
# 2211 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_isalnum_52(UChar32 c);
# 2234 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_isxdigit_52(UChar32 c);
# 2250 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_ispunct_52(UChar32 c);
# 2269 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_isgraph_52(UChar32 c);
# 2298 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_isblank_52(UChar32 c);
# 2323 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_isdefined_52(UChar32 c);
# 2344 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_isspace_52(UChar32 c);
# 2365 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_isJavaSpaceChar_52(UChar32 c);
# 2405 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_isWhitespace_52(UChar32 c);
# 2429 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_iscntrl_52(UChar32 c);
# 2444 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_isISOControl_52(UChar32 c);
# 2462 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_isprint_52(UChar32 c);
# 2483 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_isbase_52(UChar32 c);
# 2502 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UCharDirection
u_charDirection_52(UChar32 c);
# 2520 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_isMirrored_52(UChar32 c);
# 2542 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UChar32
u_charMirror_52(UChar32 c);
# 2561 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UChar32
u_getBidiPairedBracket_52(UChar32 c);
# 2575 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) int8_t
u_charType_52(UChar32 c);
# 2610 "../../common/unicode/uchar.h"
typedef UBool
UCharEnumTypeRange(const void *context, UChar32 start, UChar32 limit, UCharCategory type);
# 2632 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) void
u_enumCharTypes_52(UCharEnumTypeRange *enumRange, const void *context);
# 2644 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) uint8_t
u_getCombiningClass_52(UChar32 c);
# 2672 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_charDigitValue_52(UChar32 c);
# 2684 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBlockCode
ublock_getCode_52(UChar32 c);
# 2719 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_charName_52(UChar32 code, UCharNameChoice nameChoice,
           char *buffer, int32_t bufferLength,
           UErrorCode *pErrorCode);
# 2743 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_getISOComment_52(UChar32 c,
                char *dest, int32_t destCapacity,
                UErrorCode *pErrorCode);
# 2769 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UChar32
u_charFromName_52(UCharNameChoice nameChoice,
               const char *name,
               UErrorCode *pErrorCode);
# 2791 "../../common/unicode/uchar.h"
typedef UBool UEnumCharNamesFn(void *context,
                               UChar32 code,
                               UCharNameChoice nameChoice,
                               const char *name,
                               int32_t length);
# 2818 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) void
u_enumCharNames_52(UChar32 start, UChar32 limit,
                UEnumCharNamesFn *fn,
                void *context,
                UCharNameChoice nameChoice,
                UErrorCode *pErrorCode);
# 2856 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) const char*
u_getPropertyName_52(UProperty property,
                  UPropertyNameChoice nameChoice);
# 2879 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UProperty
u_getPropertyEnum_52(const char* alias);
# 2929 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) const char*
u_getPropertyValueName_52(UProperty property,
                       int32_t value,
                       UPropertyNameChoice nameChoice);
# 2965 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_getPropertyValueEnum_52(UProperty property,
                       const char* alias);
# 2986 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_isIDStart_52(UChar32 c);
# 3010 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_isIDPart_52(UChar32 c);
# 3033 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_isIDIgnorable_52(UChar32 c);
# 3052 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_isJavaIDStart_52(UChar32 c);
# 3073 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UBool
u_isJavaIDPart_52(UChar32 c);
# 3098 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UChar32
u_tolower_52(UChar32 c);
# 3123 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UChar32
u_toupper_52(UChar32 c);
# 3148 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UChar32
u_totitle_52(UChar32 c);
# 3194 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UChar32
u_foldCase_52(UChar32 c, uint32_t options);
# 3235 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_digit_52(UChar32 ch, int8_t radix);
# 3266 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) UChar32
u_forDigit_52(int32_t digit, int8_t radix);
# 3283 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) void
u_charAge_52(UChar32 c, UVersionInfo versionArray);
# 3297 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) void
u_getUnicodeVersion_52(UVersionInfo versionArray);
# 3322 "../../common/unicode/uchar.h"
extern "C" __attribute__((visibility("default"))) int32_t
u_getFC_NFKC_Closure_52(UChar32 c, UChar *dest, int32_t destCapacity, UErrorCode *pErrorCode);




}
# 140 "../../common/unicode/utext.h" 2




# 1 "../../common/unicode/chariter.h" 1
# 21 "../../common/unicode/chariter.h"
extern "C++" { namespace icu_52 {
# 89 "../../common/unicode/chariter.h"
class ForwardCharacterIterator : public UObject {
public:





    enum { DONE = 0xffff };





    virtual ~ForwardCharacterIterator();
# 112 "../../common/unicode/chariter.h"
    virtual UBool operator==(const ForwardCharacterIterator& that) const = 0;
# 124 "../../common/unicode/chariter.h"
    inline UBool operator!=(const ForwardCharacterIterator& that) const;






    virtual int32_t hashCode(void) const = 0;
# 140 "../../common/unicode/chariter.h"
    virtual UClassID getDynamicClassID(void) const = 0;
# 150 "../../common/unicode/chariter.h"
    virtual UChar nextPostInc(void) = 0;
# 160 "../../common/unicode/chariter.h"
    virtual UChar32 next32PostInc(void) = 0;
# 171 "../../common/unicode/chariter.h"
    virtual UBool hasNext() = 0;

protected:

    ForwardCharacterIterator();


    ForwardCharacterIterator(const ForwardCharacterIterator &other);





    ForwardCharacterIterator &operator=(const ForwardCharacterIterator&) { return *this; }
};
# 356 "../../common/unicode/chariter.h"
class CharacterIterator : public ForwardCharacterIterator {
public:




    enum EOrigin { kStart, kCurrent, kEnd };





    virtual ~CharacterIterator();
# 378 "../../common/unicode/chariter.h"
    virtual CharacterIterator* clone(void) const = 0;
# 387 "../../common/unicode/chariter.h"
    virtual UChar first(void) = 0;
# 397 "../../common/unicode/chariter.h"
    virtual UChar firstPostInc(void);
# 408 "../../common/unicode/chariter.h"
    virtual UChar32 first32(void) = 0;
# 418 "../../common/unicode/chariter.h"
    virtual UChar32 first32PostInc(void);
# 427 "../../common/unicode/chariter.h"
    inline int32_t setToStart();
# 436 "../../common/unicode/chariter.h"
    virtual UChar last(void) = 0;
# 445 "../../common/unicode/chariter.h"
    virtual UChar32 last32(void) = 0;
# 454 "../../common/unicode/chariter.h"
    inline int32_t setToEnd();
# 464 "../../common/unicode/chariter.h"
    virtual UChar setIndex(int32_t position) = 0;
# 477 "../../common/unicode/chariter.h"
    virtual UChar32 setIndex32(int32_t position) = 0;






    virtual UChar current(void) const = 0;






    virtual UChar32 current32(void) const = 0;
# 500 "../../common/unicode/chariter.h"
    virtual UChar next(void) = 0;
# 512 "../../common/unicode/chariter.h"
    virtual UChar32 next32(void) = 0;
# 521 "../../common/unicode/chariter.h"
    virtual UChar previous(void) = 0;
# 530 "../../common/unicode/chariter.h"
    virtual UChar32 previous32(void) = 0;
# 541 "../../common/unicode/chariter.h"
    virtual UBool hasPrevious() = 0;
# 553 "../../common/unicode/chariter.h"
    inline int32_t startIndex(void) const;
# 564 "../../common/unicode/chariter.h"
    inline int32_t endIndex(void) const;
# 574 "../../common/unicode/chariter.h"
    inline int32_t getIndex(void) const;







    inline int32_t getLength() const;
# 595 "../../common/unicode/chariter.h"
    virtual int32_t move(int32_t delta, EOrigin origin) = 0;
# 608 "../../common/unicode/chariter.h"
    virtual int32_t move32(int32_t delta, EOrigin origin) = 0;







    virtual void getText(UnicodeString& result) = 0;

protected:




    CharacterIterator();





    CharacterIterator(int32_t length);





    CharacterIterator(int32_t length, int32_t position);





    CharacterIterator(int32_t length, int32_t textBegin, int32_t textEnd, int32_t position);







    CharacterIterator(const CharacterIterator &that);
# 658 "../../common/unicode/chariter.h"
    CharacterIterator &operator=(const CharacterIterator &that);






    int32_t textLength;





    int32_t pos;





    int32_t begin;





    int32_t end;
};

inline UBool
ForwardCharacterIterator::operator!=(const ForwardCharacterIterator& that) const {
    return !operator==(that);
}

inline int32_t
CharacterIterator::setToStart() {
    return move(0, kStart);
}

inline int32_t
CharacterIterator::setToEnd() {
    return move(0, kEnd);
}

inline int32_t
CharacterIterator::startIndex(void) const {
    return begin;
}

inline int32_t
CharacterIterator::endIndex(void) const {
    return end;
}

inline int32_t
CharacterIterator::getIndex(void) const {
    return pos;
}

inline int32_t
CharacterIterator::getLength(void) const {
    return textLength;
}

} }
# 145 "../../common/unicode/utext.h" 2



extern "C" {

struct UText;
typedef struct UText UText;
# 181 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) UText *
utext_close_52(UText *ut);



extern "C++" { namespace icu_52 {
# 197 "../../common/unicode/utext.h"
class LocalUTextPointer : public LocalPointerBase<UText> { public: explicit LocalUTextPointer(UText *p=__null) : LocalPointerBase<UText>(p) {} ~LocalUTextPointer() { utext_close_52(ptr); } void adoptInstead(UText *p) { utext_close_52(ptr); ptr=p; } };

} }
# 224 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) UText *
utext_openUTF8_52(UText *ut, const char *s, int64_t length, UErrorCode *status);
# 242 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) UText *
utext_openUChars_52(UText *ut, const UChar *s, int64_t length, UErrorCode *status);
# 259 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) UText *
utext_openUnicodeString_52(UText *ut, icu::UnicodeString *s, UErrorCode *status);
# 275 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) UText *
utext_openConstUnicodeString_52(UText *ut, const icu::UnicodeString *s, UErrorCode *status);
# 291 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) UText *
utext_openReplaceable_52(UText *ut, icu::Replaceable *rep, UErrorCode *status);
# 306 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) UText *
utext_openCharacterIterator_52(UText *ut, icu::CharacterIterator *ci, UErrorCode *status);
# 369 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) UText *
utext_clone_52(UText *dest, const UText *src, UBool deep, UBool readOnly, UErrorCode *status);
# 384 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) UBool
utext_equals_52(const UText *a, const UText *b);
# 405 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) int64_t
utext_nativeLength_52(UText *ut);
# 421 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) UBool
utext_isLengthExpensive_52(const UText *ut);
# 449 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) UChar32
utext_char32At_52(UText *ut, int64_t nativeIndex);
# 463 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) UChar32
utext_current32_52(UText *ut);
# 485 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) UChar32
utext_next32_52(UText *ut);
# 506 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) UChar32
utext_previous32_52(UText *ut);
# 528 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) UChar32
utext_next32From_52(UText *ut, int64_t nativeIndex);
# 548 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) UChar32
utext_previous32From_52(UText *ut, int64_t nativeIndex);
# 563 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) int64_t
utext_getNativeIndex_52(const UText *ut);
# 589 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) void
utext_setNativeIndex_52(UText *ut, int64_t nativeIndex);
# 608 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) UBool
utext_moveIndex32_52(UText *ut, int32_t delta);
# 633 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) int64_t
utext_getPreviousNativeIndex_52(UText *ut);
# 671 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) int32_t
utext_extract_52(UText *ut,
             int64_t nativeStart, int64_t nativeLimit,
             UChar *dest, int32_t destCapacity,
             UErrorCode *status);
# 803 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) UBool
utext_isWritable_52(const UText *ut);
# 815 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) UBool
utext_hasMetaData_52(const UText *ut);
# 846 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) int32_t
utext_replace_52(UText *ut,
             int64_t nativeStart, int64_t nativeLimit,
             const UChar *replacementText, int32_t replacementLength,
             UErrorCode *status);
# 886 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) void
utext_copy_52(UText *ut,
          int64_t nativeStart, int64_t nativeLimit,
          int64_t destIndex,
          UBool move,
          UErrorCode *status);
# 915 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) void
utext_freeze_52(UText *ut);
# 925 "../../common/unicode/utext.h"
enum {




    UTEXT_PROVIDER_LENGTH_IS_EXPENSIVE = 1,






    UTEXT_PROVIDER_STABLE_CHUNKS = 2,






    UTEXT_PROVIDER_WRITABLE = 3,





    UTEXT_PROVIDER_HAS_META_DATA = 4,







     UTEXT_PROVIDER_OWNS_TEXT = 5
};
# 998 "../../common/unicode/utext.h"
typedef UText *
UTextClone(UText *dest, const UText *src, UBool deep, UErrorCode *status);
# 1010 "../../common/unicode/utext.h"
typedef int64_t
UTextNativeLength(UText *ut);
# 1038 "../../common/unicode/utext.h"
typedef UBool
UTextAccess(UText *ut, int64_t nativeIndex, UBool forward);
# 1068 "../../common/unicode/utext.h"
typedef int32_t
UTextExtract(UText *ut,
             int64_t nativeStart, int64_t nativeLimit,
             UChar *dest, int32_t destCapacity,
             UErrorCode *status);
# 1103 "../../common/unicode/utext.h"
typedef int32_t
UTextReplace(UText *ut,
             int64_t nativeStart, int64_t nativeLimit,
             const UChar *replacementText, int32_t replacmentLength,
             UErrorCode *status);
# 1137 "../../common/unicode/utext.h"
typedef void
UTextCopy(UText *ut,
          int64_t nativeStart, int64_t nativeLimit,
          int64_t nativeDest,
          UBool move,
          UErrorCode *status);
# 1157 "../../common/unicode/utext.h"
typedef int64_t
UTextMapOffsetToNative(const UText *ut);
# 1175 "../../common/unicode/utext.h"
typedef int32_t
UTextMapNativeIndexToUTF16(const UText *ut, int64_t nativeIndex);
# 1196 "../../common/unicode/utext.h"
typedef void
UTextClose(UText *ut);
# 1209 "../../common/unicode/utext.h"
struct UTextFuncs {
# 1224 "../../common/unicode/utext.h"
    int32_t tableSize;






    int32_t reserved1, reserved2, reserved3;
# 1240 "../../common/unicode/utext.h"
    UTextClone *clone;
# 1249 "../../common/unicode/utext.h"
    UTextNativeLength *nativeLength;







    UTextAccess *access;







    UTextExtract *extract;







    UTextReplace *replace;







    UTextCopy *copy;







    UTextMapOffsetToNative *mapOffsetToNative;







    UTextMapNativeIndexToUTF16 *mapNativeIndexToUTF16;







    UTextClose *close;





    UTextClose *spare1;





    UTextClose *spare2;





    UTextClose *spare3;

};




typedef struct UTextFuncs UTextFuncs;
# 1343 "../../common/unicode/utext.h"
struct UText {
# 1356 "../../common/unicode/utext.h"
    uint32_t magic;







    int32_t flags;







    int32_t providerProperties;







    int32_t sizeOfStruct;
# 1390 "../../common/unicode/utext.h"
    int64_t chunkNativeLimit;





    int32_t extraSize;
# 1405 "../../common/unicode/utext.h"
    int32_t nativeIndexingLimit;







    int64_t chunkNativeStart;






    int32_t chunkOffset;





    int32_t chunkLength;
# 1437 "../../common/unicode/utext.h"
    const UChar *chunkContents;





    const UTextFuncs *pFuncs;






    void *pExtra;







    const void *context;
# 1467 "../../common/unicode/utext.h"
    const void *p;





    const void *q;





    const void *r;






    void *privP;
# 1497 "../../common/unicode/utext.h"
    int64_t a;






    int32_t b;






    int32_t c;
# 1521 "../../common/unicode/utext.h"
    int64_t privA;





    int32_t privB;





    int32_t privC;
};
# 1553 "../../common/unicode/utext.h"
extern "C" __attribute__((visibility("default"))) UText *
utext_setup_52(UText *ut, int32_t extraSpace, UErrorCode *status);







enum {
    UTEXT_MAGIC = 0x345ad82c
};
# 1596 "../../common/unicode/utext.h"
}
# 52 "../../i18n/unicode/regex.h" 2


# 1 "../../i18n/unicode/uregex.h" 1
# 34 "../../i18n/unicode/uregex.h"
struct URegularExpression;





typedef struct URegularExpression URegularExpression;






typedef enum URegexpFlag{





    UREGEX_CANON_EQ = 128,


    UREGEX_CASE_INSENSITIVE = 2,


    UREGEX_COMMENTS = 4,



    UREGEX_DOTALL = 32,
# 75 "../../i18n/unicode/uregex.h"
    UREGEX_LITERAL = 16,





    UREGEX_MULTILINE = 8,






    UREGEX_UNIX_LINES = 1,
# 97 "../../i18n/unicode/uregex.h"
    UREGEX_UWORD = 256,
# 106 "../../i18n/unicode/uregex.h"
     UREGEX_ERROR_ON_UNKNOWN_ESCAPES = 512

} URegexpFlag;
# 132 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) URegularExpression *
uregex_open_52( const UChar *pattern,
                    int32_t patternLength,
                    uint32_t flags,
                    UParseError *pe,
                    UErrorCode *status);
# 162 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) URegularExpression *
uregex_openUText_52(UText *pattern,
                 uint32_t flags,
                 UParseError *pe,
                 UErrorCode *status);
# 192 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) URegularExpression *
uregex_openC_52( const char *pattern,
                    uint32_t flags,
                    UParseError *pe,
                    UErrorCode *status);
# 208 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) void
uregex_close_52(URegularExpression *regexp);



extern "C++" { namespace icu_52 {
# 224 "../../i18n/unicode/uregex.h"
class LocalURegularExpressionPointer : public LocalPointerBase<URegularExpression> { public: explicit LocalURegularExpressionPointer(URegularExpression *p=__null) : LocalPointerBase<URegularExpression>(p) {} ~LocalURegularExpressionPointer() { uregex_close_52(ptr); } void adoptInstead(URegularExpression *p) { uregex_close_52(ptr); ptr=p; } };

} }
# 248 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) URegularExpression *
uregex_clone_52(const URegularExpression *regexp, UErrorCode *status);
# 268 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) const UChar *
uregex_pattern_52(const URegularExpression *regexp,
                     int32_t *patLength,
                     UErrorCode *status);
# 284 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) UText *
uregex_patternUText_52(const URegularExpression *regexp,
                          UErrorCode *status);
# 296 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) int32_t
uregex_flags_52(const URegularExpression *regexp,
                    UErrorCode *status);
# 321 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) void
uregex_setText_52(URegularExpression *regexp,
               const UChar *text,
               int32_t textLength,
               UErrorCode *status);
# 344 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) void
uregex_setUText_52(URegularExpression *regexp,
                UText *text,
                UErrorCode *status);
# 369 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) const UChar *
uregex_getText_52(URegularExpression *regexp,
               int32_t *textLength,
               UErrorCode *status);
# 390 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) UText *
uregex_getUText_52(URegularExpression *regexp,
                UText *dest,
                UErrorCode *status);
# 420 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) void
uregex_refreshUText_52(URegularExpression *regexp,
                    UText *text,
                    UErrorCode *status);
# 445 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) UBool
uregex_matches_52(URegularExpression *regexp,
                int32_t startIndex,
                UErrorCode *status);
# 471 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) UBool
uregex_matches64_52(URegularExpression *regexp,
                 int64_t startIndex,
                 UErrorCode *status);
# 499 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) UBool
uregex_lookingAt_52(URegularExpression *regexp,
                 int32_t startIndex,
                 UErrorCode *status);
# 528 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) UBool
uregex_lookingAt64_52(URegularExpression *regexp,
                   int64_t startIndex,
                   UErrorCode *status);
# 552 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) UBool
uregex_find_52(URegularExpression *regexp,
            int32_t startIndex,
            UErrorCode *status);
# 577 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) UBool
uregex_find64_52(URegularExpression *regexp,
              int64_t startIndex,
              UErrorCode *status);
# 595 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) UBool
uregex_findNext_52(URegularExpression *regexp,
                UErrorCode *status);
# 606 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) int32_t
uregex_groupCount_52(URegularExpression *regexp,
                  UErrorCode *status);
# 626 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) int32_t
uregex_group_52(URegularExpression *regexp,
             int32_t groupNum,
             UChar *dest,
             int32_t destCapacity,
             UErrorCode *status);
# 655 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) UText *
uregex_groupUText_52(URegularExpression *regexp,
                  int32_t groupNum,
                  UText *dest,
                  int64_t *groupLength,
                  UErrorCode *status);
# 680 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) UText *
uregex_groupUTextDeep_52(URegularExpression *regexp,
                  int32_t groupNum,
                  UText *dest,
                  UErrorCode *status);
# 701 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) int32_t
uregex_start_52(URegularExpression *regexp,
             int32_t groupNum,
             UErrorCode *status);
# 721 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) int64_t
uregex_start64_52(URegularExpression *regexp,
               int32_t groupNum,
               UErrorCode *status);
# 739 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) int32_t
uregex_end_52(URegularExpression *regexp,
           int32_t groupNum,
           UErrorCode *status);
# 758 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) int64_t
uregex_end64_52(URegularExpression *regexp,
             int32_t groupNum,
             UErrorCode *status);
# 776 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) void
uregex_reset_52(URegularExpression *regexp,
             int32_t index,
             UErrorCode *status);
# 795 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) void
uregex_reset64_52(URegularExpression *regexp,
               int64_t index,
               UErrorCode *status);
# 820 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) void
uregex_setRegion_52(URegularExpression *regexp,
                 int32_t regionStart,
                 int32_t regionLimit,
                 UErrorCode *status);
# 847 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) void
uregex_setRegion64_52(URegularExpression *regexp,
                 int64_t regionStart,
                 int64_t regionLimit,
                 UErrorCode *status);
# 867 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) void
uregex_setRegionAndStart_52(URegularExpression *regexp,
                 int64_t regionStart,
                 int64_t regionLimit,
                 int64_t startIndex,
                 UErrorCode *status);
# 883 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) int32_t
uregex_regionStart_52(const URegularExpression *regexp,
                          UErrorCode *status);
# 897 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) int64_t
uregex_regionStart64_52(const URegularExpression *regexp,
                            UErrorCode *status);
# 911 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) int32_t
uregex_regionEnd_52(const URegularExpression *regexp,
                        UErrorCode *status);
# 926 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) int64_t
uregex_regionEnd64_52(const URegularExpression *regexp,
                          UErrorCode *status);
# 940 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) UBool
uregex_hasTransparentBounds_52(const URegularExpression *regexp,
                                   UErrorCode *status);
# 964 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) void
uregex_useTransparentBounds_52(URegularExpression *regexp,
                            UBool b,
                            UErrorCode *status);
# 979 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) UBool
uregex_hasAnchoringBounds_52(const URegularExpression *regexp,
                                 UErrorCode *status);
# 997 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) void
uregex_useAnchoringBounds_52(URegularExpression *regexp,
                          UBool b,
                          UErrorCode *status);
# 1012 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) UBool
uregex_hitEnd_52(const URegularExpression *regexp,
                     UErrorCode *status);
# 1027 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) UBool
uregex_requireEnd_52(const URegularExpression *regexp,
                         UErrorCode *status);
# 1059 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) int32_t
uregex_replaceAll_52(URegularExpression *regexp,
                  const UChar *replacementText,
                  int32_t replacementLength,
                  UChar *destBuf,
                  int32_t destCapacity,
                  UErrorCode *status);
# 1088 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) UText *
uregex_replaceAllUText_52(URegularExpression *regexp,
                       UText *replacement,
                       UText *dest,
                       UErrorCode *status);
# 1118 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) int32_t
uregex_replaceFirst_52(URegularExpression *regexp,
                    const UChar *replacementText,
                    int32_t replacementLength,
                    UChar *destBuf,
                    int32_t destCapacity,
                    UErrorCode *status);
# 1147 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) UText *
uregex_replaceFirstUText_52(URegularExpression *regexp,
                         UText *replacement,
                         UText *dest,
                         UErrorCode *status);
# 1199 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) int32_t
uregex_appendReplacement_52(URegularExpression *regexp,
                         const UChar *replacementText,
                         int32_t replacementLength,
                         UChar **destBuf,
                         int32_t *destCapacity,
                         UErrorCode *status);
# 1229 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) void
uregex_appendReplacementUText_52(URegularExpression *regexp,
                              UText *replacementText,
                              UText *dest,
                              UErrorCode *status);
# 1259 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) int32_t
uregex_appendTail_52(URegularExpression *regexp,
                  UChar **destBuf,
                  int32_t *destCapacity,
                  UErrorCode *status);
# 1283 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) UText *
uregex_appendTailUText_52(URegularExpression *regexp,
                       UText *dest,
                       UErrorCode *status);
# 1339 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) int32_t
uregex_split_52( URegularExpression *regexp,
                  UChar *destBuf,
                  int32_t destCapacity,
                  int32_t *requiredCapacity,
                  UChar *destFields[],
                  int32_t destFieldsCapacity,
                  UErrorCode *status);
# 1374 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) int32_t
uregex_splitUText_52(URegularExpression *regexp,
                  UText *destFields[],
                  int32_t destFieldsCapacity,
                  UErrorCode *status);
# 1402 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) void
uregex_setTimeLimit_52(URegularExpression *regexp,
                    int32_t limit,
                    UErrorCode *status);
# 1416 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) int32_t
uregex_getTimeLimit_52(const URegularExpression *regexp,
                          UErrorCode *status);
# 1440 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) void
uregex_setStackLimit_52(URegularExpression *regexp,
                     int32_t limit,
                     UErrorCode *status);
# 1452 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) int32_t
uregex_getStackLimit_52(const URegularExpression *regexp,
                           UErrorCode *status);
# 1475 "../../i18n/unicode/uregex.h"
extern "C" {
typedef UBool URegexMatchCallback (
                   const void *context,
                   int32_t steps);
}
# 1495 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) void
uregex_setMatchCallback_52(URegularExpression *regexp,
                        URegexMatchCallback *callback,
                        const void *context,
                        UErrorCode *status);
# 1513 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) void
uregex_getMatchCallback_52(const URegularExpression *regexp,
                        URegexMatchCallback **callback,
                        const void **context,
                        UErrorCode *status);
# 1549 "../../i18n/unicode/uregex.h"
extern "C" {
typedef UBool URegexFindProgressCallback (
                   const void *context,
                   int64_t matchIndex);
}
# 1567 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) void
uregex_setFindProgressCallback_52(URegularExpression *regexp,
                                URegexFindProgressCallback *callback,
                                const void *context,
                                UErrorCode *status);
# 1584 "../../i18n/unicode/uregex.h"
extern "C" __attribute__((visibility("default"))) void
uregex_getFindProgressCallback_52(const URegularExpression *regexp,
                                URegexFindProgressCallback **callback,
                                const void **context,
                                UErrorCode *status);
# 55 "../../i18n/unicode/regex.h" 2



extern "C++" { namespace icu_52 {

struct Regex8BitSet;
class RegexCImpl;
class RegexMatcher;
class RegexPattern;
struct REStackFrame;
class RuleBasedBreakIterator;
class UnicodeSet;
class UVector;
class UVector32;
class UVector64;
# 98 "../../i18n/unicode/regex.h"
class RegexPattern: public UObject {
public:
# 108 "../../i18n/unicode/regex.h"
    RegexPattern();







    RegexPattern(const RegexPattern &source);






    virtual ~RegexPattern();
# 133 "../../i18n/unicode/regex.h"
    UBool operator==(const RegexPattern& that) const;
# 143 "../../i18n/unicode/regex.h"
    inline UBool operator!=(const RegexPattern& that) const {return ! operator ==(that);}






    RegexPattern &operator =(const RegexPattern &source);
# 159 "../../i18n/unicode/regex.h"
    virtual RegexPattern *clone() const;
# 186 "../../i18n/unicode/regex.h"
    static RegexPattern * compile( const UnicodeString &regex,
        UParseError &pe,
        UErrorCode &status);
# 216 "../../i18n/unicode/regex.h"
    static RegexPattern * compile( UText *regex,
        UParseError &pe,
        UErrorCode &status);
# 244 "../../i18n/unicode/regex.h"
    static RegexPattern * compile( const UnicodeString &regex,
        uint32_t flags,
        UParseError &pe,
        UErrorCode &status);
# 275 "../../i18n/unicode/regex.h"
    static RegexPattern * compile( UText *regex,
        uint32_t flags,
        UParseError &pe,
        UErrorCode &status);
# 302 "../../i18n/unicode/regex.h"
    static RegexPattern * compile( const UnicodeString &regex,
        uint32_t flags,
        UErrorCode &status);
# 330 "../../i18n/unicode/regex.h"
    static RegexPattern * compile( UText *regex,
        uint32_t flags,
        UErrorCode &status);






    virtual uint32_t flags() const;
# 358 "../../i18n/unicode/regex.h"
    virtual RegexMatcher *matcher(const UnicodeString &input,
        UErrorCode &status) const;

private:
# 374 "../../i18n/unicode/regex.h"
    RegexMatcher *matcher(const UChar *input,
        UErrorCode &status) const;
public:
# 390 "../../i18n/unicode/regex.h"
    virtual RegexMatcher *matcher(UErrorCode &status) const;
# 407 "../../i18n/unicode/regex.h"
    static UBool matches(const UnicodeString &regex,
        const UnicodeString &input,
              UParseError &pe,
              UErrorCode &status);
# 426 "../../i18n/unicode/regex.h"
    static UBool matches(UText *regex,
        UText *input,
        UParseError &pe,
        UErrorCode &status);
# 439 "../../i18n/unicode/regex.h"
    virtual UnicodeString pattern() const;
# 452 "../../i18n/unicode/regex.h"
    virtual UText *patternText(UErrorCode &status) const;
# 493 "../../i18n/unicode/regex.h"
    virtual int32_t split(const UnicodeString &input,
        UnicodeString dest[],
        int32_t destCapacity,
        UErrorCode &status) const;
# 537 "../../i18n/unicode/regex.h"
    virtual int32_t split(UText *input,
        UText *dest[],
        int32_t destCapacity,
        UErrorCode &status) const;







    virtual UClassID getDynamicClassID() const;






    static UClassID getStaticClassID();

private:



    UText *fPattern;
    UnicodeString *fPatternString;
    uint32_t fFlags;

    UVector64 *fCompiledPat;
    UnicodeString fLiteralText;


    UVector *fSets;
    Regex8BitSet *fSets8;


    UErrorCode fDeferredStatus;


    int32_t fMinMatchLen;




    int32_t fFrameSize;


    int32_t fDataSize;



    UVector32 *fGroupMap;


    int32_t fMaxCaptureDigits;

    UnicodeSet **fStaticSets;


    Regex8BitSet *fStaticSets8;


    int32_t fStartType;
    int32_t fInitialStringIdx;
    int32_t fInitialStringLen;
    UnicodeSet *fInitialChars;
    UChar32 fInitialChar;
    Regex8BitSet *fInitialChars8;
    UBool fNeedsAltInput;

    friend class RegexCompile;
    friend class RegexMatcher;
    friend class RegexCImpl;




    void init();
    void zap();





};
# 634 "../../i18n/unicode/regex.h"
class RegexMatcher: public UObject {
public:
# 651 "../../i18n/unicode/regex.h"
    RegexMatcher(const UnicodeString &regexp, uint32_t flags, UErrorCode &status);
# 668 "../../i18n/unicode/regex.h"
    RegexMatcher(UText *regexp, uint32_t flags, UErrorCode &status);
# 691 "../../i18n/unicode/regex.h"
    RegexMatcher(const UnicodeString &regexp, const UnicodeString &input,
        uint32_t flags, UErrorCode &status);
# 715 "../../i18n/unicode/regex.h"
    RegexMatcher(UText *regexp, UText *input,
        uint32_t flags, UErrorCode &status);

private:
# 731 "../../i18n/unicode/regex.h"
    RegexMatcher(const UnicodeString &regexp, const UChar *input,
        uint32_t flags, UErrorCode &status);
public:







    virtual ~RegexMatcher();
# 750 "../../i18n/unicode/regex.h"
    virtual UBool matches(UErrorCode &status);
# 763 "../../i18n/unicode/regex.h"
    virtual UBool matches(int64_t startIndex, UErrorCode &status);
# 779 "../../i18n/unicode/regex.h"
    virtual UBool lookingAt(UErrorCode &status);
# 795 "../../i18n/unicode/regex.h"
    virtual UBool lookingAt(int64_t startIndex, UErrorCode &status);
# 810 "../../i18n/unicode/regex.h"
    virtual UBool find();
# 822 "../../i18n/unicode/regex.h"
    virtual UBool find(int64_t start, UErrorCode &status);
# 834 "../../i18n/unicode/regex.h"
    virtual UnicodeString group(UErrorCode &status) const;
# 849 "../../i18n/unicode/regex.h"
    virtual UnicodeString group(int32_t groupNum, UErrorCode &status) const;







    virtual int32_t groupCount() const;
# 874 "../../i18n/unicode/regex.h"
    virtual UText *group(UText *dest, int64_t &group_len, UErrorCode &status) const;
# 891 "../../i18n/unicode/regex.h"
    virtual UText *group(int32_t groupNum, UText *dest, int64_t &group_len, UErrorCode &status) const;
# 908 "../../i18n/unicode/regex.h"
    virtual UText *group(int32_t groupNum, UText *dest, UErrorCode &status) const;
# 918 "../../i18n/unicode/regex.h"
    virtual int32_t start(UErrorCode &status) const;
# 927 "../../i18n/unicode/regex.h"
    virtual int64_t start64(UErrorCode &status) const;
# 943 "../../i18n/unicode/regex.h"
    virtual int32_t start(int32_t group, UErrorCode &status) const;
# 958 "../../i18n/unicode/regex.h"
    virtual int64_t start64(int32_t group, UErrorCode &status) const;
# 974 "../../i18n/unicode/regex.h"
    virtual int32_t end(UErrorCode &status) const;
# 989 "../../i18n/unicode/regex.h"
    virtual int64_t end64(UErrorCode &status) const;
# 1009 "../../i18n/unicode/regex.h"
    virtual int32_t end(int32_t group, UErrorCode &status) const;
# 1028 "../../i18n/unicode/regex.h"
    virtual int64_t end64(int32_t group, UErrorCode &status) const;
# 1039 "../../i18n/unicode/regex.h"
    virtual RegexMatcher &reset();
# 1057 "../../i18n/unicode/regex.h"
    virtual RegexMatcher &reset(int64_t index, UErrorCode &status);
# 1077 "../../i18n/unicode/regex.h"
    virtual RegexMatcher &reset(const UnicodeString &input);
# 1093 "../../i18n/unicode/regex.h"
    virtual RegexMatcher &reset(UText *input);
# 1120 "../../i18n/unicode/regex.h"
    virtual RegexMatcher &refreshInputText(UText *input, UErrorCode &status);

private:
# 1135 "../../i18n/unicode/regex.h"
    RegexMatcher &reset(const UChar *input);
public:
# 1145 "../../i18n/unicode/regex.h"
    virtual const UnicodeString &input() const;
# 1155 "../../i18n/unicode/regex.h"
    virtual UText *inputText() const;
# 1167 "../../i18n/unicode/regex.h"
    virtual UText *getInput(UText *dest, UErrorCode &status) const;
# 1188 "../../i18n/unicode/regex.h"
     virtual RegexMatcher &region(int64_t start, int64_t limit, UErrorCode &status);
# 1201 "../../i18n/unicode/regex.h"
     virtual RegexMatcher &region(int64_t regionStart, int64_t regionLimit, int64_t startIndex, UErrorCode &status);
# 1211 "../../i18n/unicode/regex.h"
     virtual int32_t regionStart() const;
# 1221 "../../i18n/unicode/regex.h"
     virtual int64_t regionStart64() const;
# 1232 "../../i18n/unicode/regex.h"
      virtual int32_t regionEnd() const;
# 1242 "../../i18n/unicode/regex.h"
      virtual int64_t regionEnd64() const;
# 1252 "../../i18n/unicode/regex.h"
      virtual UBool hasTransparentBounds() const;
# 1272 "../../i18n/unicode/regex.h"
      virtual RegexMatcher &useTransparentBounds(UBool b);
# 1282 "../../i18n/unicode/regex.h"
      virtual UBool hasAnchoringBounds() const;
# 1297 "../../i18n/unicode/regex.h"
      virtual RegexMatcher &useAnchoringBounds(UBool b);
# 1312 "../../i18n/unicode/regex.h"
      virtual UBool hitEnd() const;
# 1323 "../../i18n/unicode/regex.h"
      virtual UBool requireEnd() const;







    virtual const RegexPattern &pattern() const;
# 1350 "../../i18n/unicode/regex.h"
    virtual UnicodeString replaceAll(const UnicodeString &replacement, UErrorCode &status);
# 1373 "../../i18n/unicode/regex.h"
    virtual UText *replaceAll(UText *replacement, UText *dest, UErrorCode &status);
# 1396 "../../i18n/unicode/regex.h"
    virtual UnicodeString replaceFirst(const UnicodeString &replacement, UErrorCode &status);
# 1423 "../../i18n/unicode/regex.h"
    virtual UText *replaceFirst(UText *replacement, UText *dest, UErrorCode &status);
# 1453 "../../i18n/unicode/regex.h"
    virtual RegexMatcher &appendReplacement(UnicodeString &dest,
        const UnicodeString &replacement, UErrorCode &status);
# 1484 "../../i18n/unicode/regex.h"
    virtual RegexMatcher &appendReplacement(UText *dest,
        UText *replacement, UErrorCode &status);
# 1498 "../../i18n/unicode/regex.h"
    virtual UnicodeString &appendTail(UnicodeString &dest);
# 1514 "../../i18n/unicode/regex.h"
    virtual UText *appendTail(UText *dest, UErrorCode &status);
# 1540 "../../i18n/unicode/regex.h"
    virtual int32_t split(const UnicodeString &input,
        UnicodeString dest[],
        int32_t destCapacity,
        UErrorCode &status);
# 1569 "../../i18n/unicode/regex.h"
    virtual int32_t split(UText *input,
        UText *dest[],
        int32_t destCapacity,
        UErrorCode &status);
# 1595 "../../i18n/unicode/regex.h"
    virtual void setTimeLimit(int32_t limit, UErrorCode &status);







    virtual int32_t getTimeLimit() const;
# 1626 "../../i18n/unicode/regex.h"
    virtual void setStackLimit(int32_t limit, UErrorCode &status);
# 1635 "../../i18n/unicode/regex.h"
    virtual int32_t getStackLimit() const;
# 1651 "../../i18n/unicode/regex.h"
    virtual void setMatchCallback(URegexMatchCallback *callback,
                                  const void *context,
                                  UErrorCode &status);
# 1666 "../../i18n/unicode/regex.h"
    virtual void getMatchCallback(URegexMatchCallback *&callback,
                                  const void *&context,
                                  UErrorCode &status);
# 1684 "../../i18n/unicode/regex.h"
    virtual void setFindProgressCallback(URegexFindProgressCallback *callback,
                                              const void *context,
                                              UErrorCode &status);
# 1699 "../../i18n/unicode/regex.h"
    virtual void getFindProgressCallback(URegexFindProgressCallback *&callback,
                                              const void *&context,
                                              UErrorCode &status);







    void setTrace(UBool state);







    static UClassID getStaticClassID();






    virtual UClassID getDynamicClassID() const;

private:


    RegexMatcher();
    RegexMatcher(const RegexPattern *pat);
    RegexMatcher(const RegexMatcher &other);
    RegexMatcher &operator =(const RegexMatcher &rhs);
    void init(UErrorCode &status);
    void init2(UText *t, UErrorCode &e);

    friend class RegexPattern;
    friend class RegexCImpl;
public:


    void resetPreserveRegion();

private:





    void MatchAt(int64_t startIdx, UBool toEnd, UErrorCode &status);
    inline void backTrack(int64_t &inputIdx, int32_t &patIdx);
    UBool isWordBoundary(int64_t pos);
    UBool isUWordBoundary(int64_t pos);
    REStackFrame *resetStack();
    inline REStackFrame *StateSave(REStackFrame *fp, int64_t savePatIdx, UErrorCode &status);
    void IncrementTime(UErrorCode &status);
    UBool ReportFindProgress(int64_t matchIndex, UErrorCode &status);

    int64_t appendGroup(int32_t groupNum, UText *dest, UErrorCode &status) const;

    UBool findUsingChunk();
    void MatchChunkAt(int32_t startIdx, UBool toEnd, UErrorCode &status);
    UBool isChunkWordBoundary(int32_t pos);

    const RegexPattern *fPattern;
    RegexPattern *fPatternOwned;


    const UnicodeString *fInput;
    UText *fInputText;
    UText *fAltInputText;

    int64_t fInputLength;
    int32_t fFrameSize;

    int64_t fRegionStart;
    int64_t fRegionLimit;

    int64_t fAnchorStart;
    int64_t fAnchorLimit;

    int64_t fLookStart;
    int64_t fLookLimit;


    int64_t fActiveStart;
    int64_t fActiveLimit;



    UBool fTransparentBounds;
    UBool fAnchoringBounds;

    UBool fMatch;
    int64_t fMatchStart;
    int64_t fMatchEnd;


    int64_t fLastMatchEnd;

    int64_t fAppendPosition;



    UBool fHitEnd;
    UBool fRequireEnd;


    UVector64 *fStack;
    REStackFrame *fFrame;



    int64_t *fData;
    int64_t fSmallData[8];

    int32_t fTimeLimit;


    int32_t fTime;
    int32_t fTickCounter;




    int32_t fStackLimit;


    URegexMatchCallback *fCallbackFn;

    const void *fCallbackContext;

    URegexFindProgressCallback *fFindProgressCallbackFn;

    const void *fFindProgressCallbackContext;


    UBool fInputUniStrMaybeMutable;

    UBool fTraceDebug;

    UErrorCode fDeferredStatus;


    RuleBasedBreakIterator *fWordBreakItr;
};

} }
# 13 "fldset.cpp" 2


FieldsSet::FieldsSet() {

}

FieldsSet::FieldsSet(int32_t fieldCount) {
    construct((UDebugEnumType)-1, fieldCount);
}

FieldsSet::FieldsSet(UDebugEnumType field) {
    construct(field, udbg_enumCount(field));
}

FieldsSet::~FieldsSet() {

}

int32_t FieldsSet::fieldCount() const {
    return fFieldCount;
}

void FieldsSet::construct(UDebugEnumType field, int32_t fieldCount) {
    fEnum = field;
    if(fieldCount > 64) {
        fieldCount = 64;
    }
    fFieldCount = fieldCount;
    clear();
}

UnicodeString FieldsSet::diffFrom(const FieldsSet& other, UErrorCode& status) const {
    UnicodeString str;
    if(!isSameType(other)) {
        status = U_ILLEGAL_ARGUMENT_ERROR;
        return UnicodeString("U_ILLEGAL_ARGUMENT_ERROR: FieldsSet of a different type!");
    }
    for (int i=0; i<fieldCount(); i++) {
        if (isSet((UCalendarDateFields)i)) {
            int32_t myVal = get(i);
            int32_t theirVal = other.get(i);

            if(fEnum != -1) {
                const UnicodeString& fieldName = udbg_enumString(
                        fEnum, i);

                str = str + fieldName + UnicodeString("=")+myVal+UnicodeString(" not ")+theirVal+UnicodeString(", ");
            } else {
                str = str + UnicodeString("some field") + "=" + myVal+" not " + theirVal+", ";
            }
        }
    }
    return str;
}

static UnicodeString *split(const UnicodeString &src, UChar ch, int32_t &splits)
{
    int32_t offset = -1;

    splits = 1;
    while((offset = src.indexOf(ch, offset + 1)) >= 0) {
        splits += 1;
    }

    UnicodeString *result = new UnicodeString[splits];

    int32_t start = 0;
    int32_t split = 0;
    int32_t end;

    while((end = src.indexOf(ch, start)) >= 0) {
        src.extractBetween(start, end, result[split++]);
        start = end + 1;
    }

    src.extractBetween(start, src.length(), result[split]);

    return result;
}

int32_t FieldsSet::parseFrom(const UnicodeString& str, const
        FieldsSet* inheritFrom, UErrorCode& status) {

    int goodFields = 0;

    if(U_FAILURE(status)) {
        return -1;
    }

    int32_t destCount = 0;
    UnicodeString *dest = split(str, 0x002C , destCount);

    for(int i = 0; i < destCount; i += 1) {
        int32_t dc = 0;
        UnicodeString *kv = split(dest[i], 0x003D , dc);

        if(dc != 2) {
            it_errln(UnicodeString("dc == ") + dc + UnicodeString("?"));
        }

        int32_t field = handleParseName(inheritFrom, kv[0], kv[1], status);

        if(U_FAILURE(status)) {
            char ch[256];
            const UChar *u = kv[0].getBuffer();
            int32_t len = kv[0].length();
            u_UCharsToChars_52(u, ch, len);
            ch[len] = 0;
            it_errln(UnicodeString("Parse Failed: Field ") + UnicodeString(ch) + UnicodeString(", err ") + UnicodeString(u_errorName_52(status)));
            delete[] kv;
            delete[] dest;
            return -1;
        }

        if(field != -1) {
            handleParseValue(inheritFrom, field, kv[1], status);

            if(U_FAILURE(status)) {
                char ch[256];
                const UChar *u = kv[1].getBuffer();
                int32_t len = kv[1].length();
                u_UCharsToChars_52(u, ch, len);
                ch[len] = 0;
                it_errln(UnicodeString("Parse Failed: Value ") + UnicodeString(ch) + UnicodeString(", err ") + UnicodeString(u_errorName_52(status)));
                delete[] kv;
                delete[] dest;
                return -1;
            }

            goodFields += 1;
        }

        delete[] kv;
    }

    delete[] dest;

    return goodFields;
}

UBool FieldsSet::isSameType(const FieldsSet& other) const {
    return((&other==this)||
           ((other.fFieldCount==fFieldCount) && (other.fEnum==fEnum)));
}

void FieldsSet::clear() {
    for (int i=0; i<fieldCount(); i++) {
        fValue[i]=-1;
        fIsSet[i]=0;
    }
}

void FieldsSet::clear(int32_t field) {
    if (field<0|| field>=fieldCount()) {
        return;
    }
    fValue[field] = -1;
    fIsSet[field] = 0;
}
void FieldsSet::set(int32_t field, int32_t amount) {
    if (field<0|| field>=fieldCount()) {
        return;
    }
    fValue[field] = amount;
    fIsSet[field] = 1;
}

UBool FieldsSet::isSet(int32_t field) const {
    if (field<0|| field>=fieldCount()) {
        return 0;
    }
    return fIsSet[field];
}
int32_t FieldsSet::get(int32_t field) const {
    if (field<0|| field>=fieldCount()) {
        return -1;
    }
    return fValue[field];
}


int32_t FieldsSet::handleParseName(const FieldsSet* , const UnicodeString& name, const UnicodeString& , UErrorCode& status) {
    if(fEnum > -1) {
        int32_t which = udbg_enumByString(fEnum, name);
        if(which == UDBG_INVALID_ENUM) {
            status = U_UNSUPPORTED_ERROR;
        }
        return which;
    } else {
        status = U_UNSUPPORTED_ERROR;
        return -1;
    }
}

void FieldsSet::parseValueDefault(const FieldsSet* inheritFrom, int32_t field, const UnicodeString& substr, UErrorCode& status) {
    int32_t value = -1;
    if(substr.length()==0) {

        if((inheritFrom == __null) || !inheritFrom->isSet((UCalendarDateFields)field)) {

            it_errln(UnicodeString("Parse Failed: Couldn't inherit field ") + field + UnicodeString(" [") + UnicodeString(udbg_enumName(fEnum, field)) + UnicodeString("]"));
            status = U_ILLEGAL_ARGUMENT_ERROR;
            return;
        }
        value = inheritFrom->get((UCalendarDateFields)field);
    } else {
        value = udbg_stoi(substr);
    }
    set(field, value);
}

void FieldsSet::parseValueEnum(UDebugEnumType type, const FieldsSet* inheritFrom, int32_t field, const UnicodeString& substr, UErrorCode& status) {
    int32_t value = udbg_enumByString(type, substr);
    if(value>=0) {
        set(field, value);
    } else {

        parseValueDefault(inheritFrom,field,substr,status);
    }
}

void FieldsSet::handleParseValue(const FieldsSet* inheritFrom, int32_t field, const UnicodeString& substr, UErrorCode& status) {
    parseValueDefault(inheritFrom, field, substr, status);
}




CalendarFieldsSet::CalendarFieldsSet() :
FieldsSet(UDBG_UCalendarDateFields) {

}

CalendarFieldsSet::~CalendarFieldsSet() {
}

void CalendarFieldsSet::handleParseValue(const FieldsSet* inheritFrom, int32_t field, const UnicodeString& substr, UErrorCode& status) {
    if(field==UCAL_MONTH) {
        parseValueEnum(UDBG_UCalendarMonths, inheritFrom, field, substr, status);

    } else {
        parseValueDefault(inheritFrom, field, substr, status);
    }
}




void CalendarFieldsSet::setOnCalendar(Calendar *cal, UErrorCode& ) const {
    for (int i=0; i<UDAT_FIELD_COUNT; i++) {
        if (isSet((UCalendarDateFields)i)) {
            int32_t value = get((UCalendarDateFields)i);
            cal->set((UCalendarDateFields)i, value);
        }
    }
}




UBool CalendarFieldsSet::matches(Calendar *cal, CalendarFieldsSet &diffSet,
        UErrorCode& status) const {
    UBool match = 1;
    if (U_FAILURE(status)) {
        return 0;
    }
    for (int i=0; i<UDAT_FIELD_COUNT; i++) {
        if (isSet((UCalendarDateFields)i)) {
            int32_t calVal = cal->get((UCalendarDateFields)i, status);
            if (U_FAILURE(status))
                return 0;
            if (calVal != get((UCalendarDateFields)i)) {
                match = 0;
                diffSet.set((UCalendarDateFields)i, calVal);

            }
        }
    }
    return match;
}





enum DateTimeStyleSetFields {
    DTS_DATE = 0,
    DTS_TIME,
    DTS_COUNT
};




DateTimeStyleSet::DateTimeStyleSet() :
    FieldsSet(DTS_COUNT) {
}

DateTimeStyleSet::~DateTimeStyleSet() {

}

UDateFormatStyle DateTimeStyleSet::getDateStyle() const {
    if(!isSet(DTS_DATE)) {
        return UDAT_NONE;
    } else {
        return (UDateFormatStyle)get(DTS_DATE);
    }
}


UDateFormatStyle DateTimeStyleSet::getTimeStyle() const {
    if(!isSet(DTS_TIME)) {
        return UDAT_NONE;
    } else {
        return (UDateFormatStyle)get(DTS_TIME);
    }
}

void DateTimeStyleSet::handleParseValue(const FieldsSet* inheritFrom, int32_t field, const UnicodeString& substr, UErrorCode& status) {
    UnicodeString kRELATIVE_("RELATIVE_");
    if(substr.startsWith(kRELATIVE_)) {
        UnicodeString relativeas(substr,kRELATIVE_.length());
        parseValueEnum(UDBG_UDateFormatStyle, inheritFrom, field, relativeas, status);

        if(isSet(field) && U_SUCCESS(status)) {
            set(field, get(field) | UDAT_RELATIVE);
        }
    } else {
        parseValueEnum(UDBG_UDateFormatStyle, inheritFrom, field, substr, status);
    }
}

int32_t DateTimeStyleSet::handleParseName(const FieldsSet* , const UnicodeString& name, const UnicodeString& , UErrorCode& status) {
    UnicodeString kDATE("DATE");
    UnicodeString kTIME("TIME");
    if(name == kDATE ) {
        return DTS_DATE;
    } else if(name == kTIME) {
        return DTS_TIME;
    } else {
        status = U_ILLEGAL_ARGUMENT_ERROR;
        return -1;
    }
}
