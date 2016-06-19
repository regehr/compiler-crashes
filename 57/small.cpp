# 1 "../../src/hb-ot-shape-normalize.cc"
# 1 "/var/cache/apt-build/build/harfbuzz-0.9.27/build-udeb/src//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "../../src/hb-ot-shape-normalize.cc"
# 27 "../../src/hb-ot-shape-normalize.cc"
# 1 "../../src/hb-ot-shape-normalize-private.hh" 1
# 30 "../../src/hb-ot-shape-normalize-private.hh"
# 1 "../../src/hb-private.hh" 1
# 33 "../../src/hb-private.hh"
# 1 "../config.h" 1
# 34 "../../src/hb-private.hh" 2


# 1 "../../src/hb.h" 1
# 31 "../../src/hb.h"
# 1 "../../src/hb-blob.h" 1
# 34 "../../src/hb-blob.h"
# 1 "../../src/hb-common.h" 1
# 65 "../../src/hb-common.h"
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
# 36 "/usr/include/stdint.h" 3 4
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
# 66 "../../src/hb-common.h" 2




extern "C" {


typedef int hb_bool_t;

typedef uint32_t hb_codepoint_t;
typedef int32_t hb_position_t;
typedef uint32_t hb_mask_t;

typedef union _hb_var_int_t {
  uint32_t u32;
  int32_t i32;
  uint16_t u16[2];
  int16_t i16[2];
  uint8_t u8[4];
  int8_t i8[4];
} hb_var_int_t;




typedef uint32_t hb_tag_t;
# 100 "../../src/hb-common.h"
hb_tag_t
hb_tag_from_string (const char *str, int len);


void
hb_tag_to_string (hb_tag_t tag, char *buf);




typedef enum {
  HB_DIRECTION_INVALID = 0,
  HB_DIRECTION_LTR = 4,
  HB_DIRECTION_RTL,
  HB_DIRECTION_TTB,
  HB_DIRECTION_BTT
} hb_direction_t;


hb_direction_t
hb_direction_from_string (const char *str, int len);

const char *
hb_direction_to_string (hb_direction_t direction);
# 135 "../../src/hb-common.h"
typedef const struct hb_language_impl_t *hb_language_t;


hb_language_t
hb_language_from_string (const char *str, int len);

const char *
hb_language_to_string (hb_language_t language);



hb_language_t
hb_language_get_default (void);







typedef enum
{
          HB_SCRIPT_COMMON = ((hb_tag_t)((((uint8_t)('Z'))<<24)|(((uint8_t)('y'))<<16)|(((uint8_t)('y'))<<8)|((uint8_t)('y')))),
          HB_SCRIPT_INHERITED = ((hb_tag_t)((((uint8_t)('Z'))<<24)|(((uint8_t)('i'))<<16)|(((uint8_t)('n'))<<8)|((uint8_t)('h')))),
          HB_SCRIPT_UNKNOWN = ((hb_tag_t)((((uint8_t)('Z'))<<24)|(((uint8_t)('z'))<<16)|(((uint8_t)('z'))<<8)|((uint8_t)('z')))),

          HB_SCRIPT_ARABIC = ((hb_tag_t)((((uint8_t)('A'))<<24)|(((uint8_t)('r'))<<16)|(((uint8_t)('a'))<<8)|((uint8_t)('b')))),
          HB_SCRIPT_ARMENIAN = ((hb_tag_t)((((uint8_t)('A'))<<24)|(((uint8_t)('r'))<<16)|(((uint8_t)('m'))<<8)|((uint8_t)('n')))),
          HB_SCRIPT_BENGALI = ((hb_tag_t)((((uint8_t)('B'))<<24)|(((uint8_t)('e'))<<16)|(((uint8_t)('n'))<<8)|((uint8_t)('g')))),
          HB_SCRIPT_CYRILLIC = ((hb_tag_t)((((uint8_t)('C'))<<24)|(((uint8_t)('y'))<<16)|(((uint8_t)('r'))<<8)|((uint8_t)('l')))),
          HB_SCRIPT_DEVANAGARI = ((hb_tag_t)((((uint8_t)('D'))<<24)|(((uint8_t)('e'))<<16)|(((uint8_t)('v'))<<8)|((uint8_t)('a')))),
          HB_SCRIPT_GEORGIAN = ((hb_tag_t)((((uint8_t)('G'))<<24)|(((uint8_t)('e'))<<16)|(((uint8_t)('o'))<<8)|((uint8_t)('r')))),
          HB_SCRIPT_GREEK = ((hb_tag_t)((((uint8_t)('G'))<<24)|(((uint8_t)('r'))<<16)|(((uint8_t)('e'))<<8)|((uint8_t)('k')))),
          HB_SCRIPT_GUJARATI = ((hb_tag_t)((((uint8_t)('G'))<<24)|(((uint8_t)('u'))<<16)|(((uint8_t)('j'))<<8)|((uint8_t)('r')))),
          HB_SCRIPT_GURMUKHI = ((hb_tag_t)((((uint8_t)('G'))<<24)|(((uint8_t)('u'))<<16)|(((uint8_t)('r'))<<8)|((uint8_t)('u')))),
          HB_SCRIPT_HANGUL = ((hb_tag_t)((((uint8_t)('H'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('n'))<<8)|((uint8_t)('g')))),
          HB_SCRIPT_HAN = ((hb_tag_t)((((uint8_t)('H'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('n'))<<8)|((uint8_t)('i')))),
          HB_SCRIPT_HEBREW = ((hb_tag_t)((((uint8_t)('H'))<<24)|(((uint8_t)('e'))<<16)|(((uint8_t)('b'))<<8)|((uint8_t)('r')))),
          HB_SCRIPT_HIRAGANA = ((hb_tag_t)((((uint8_t)('H'))<<24)|(((uint8_t)('i'))<<16)|(((uint8_t)('r'))<<8)|((uint8_t)('a')))),
          HB_SCRIPT_KANNADA = ((hb_tag_t)((((uint8_t)('K'))<<24)|(((uint8_t)('n'))<<16)|(((uint8_t)('d'))<<8)|((uint8_t)('a')))),
          HB_SCRIPT_KATAKANA = ((hb_tag_t)((((uint8_t)('K'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('n'))<<8)|((uint8_t)('a')))),
          HB_SCRIPT_LAO = ((hb_tag_t)((((uint8_t)('L'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('o'))<<8)|((uint8_t)('o')))),
          HB_SCRIPT_LATIN = ((hb_tag_t)((((uint8_t)('L'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('t'))<<8)|((uint8_t)('n')))),
          HB_SCRIPT_MALAYALAM = ((hb_tag_t)((((uint8_t)('M'))<<24)|(((uint8_t)('l'))<<16)|(((uint8_t)('y'))<<8)|((uint8_t)('m')))),
          HB_SCRIPT_ORIYA = ((hb_tag_t)((((uint8_t)('O'))<<24)|(((uint8_t)('r'))<<16)|(((uint8_t)('y'))<<8)|((uint8_t)('a')))),
          HB_SCRIPT_TAMIL = ((hb_tag_t)((((uint8_t)('T'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('m'))<<8)|((uint8_t)('l')))),
          HB_SCRIPT_TELUGU = ((hb_tag_t)((((uint8_t)('T'))<<24)|(((uint8_t)('e'))<<16)|(((uint8_t)('l'))<<8)|((uint8_t)('u')))),
          HB_SCRIPT_THAI = ((hb_tag_t)((((uint8_t)('T'))<<24)|(((uint8_t)('h'))<<16)|(((uint8_t)('a'))<<8)|((uint8_t)('i')))),

          HB_SCRIPT_TIBETAN = ((hb_tag_t)((((uint8_t)('T'))<<24)|(((uint8_t)('i'))<<16)|(((uint8_t)('b'))<<8)|((uint8_t)('t')))),

          HB_SCRIPT_BOPOMOFO = ((hb_tag_t)((((uint8_t)('B'))<<24)|(((uint8_t)('o'))<<16)|(((uint8_t)('p'))<<8)|((uint8_t)('o')))),
          HB_SCRIPT_BRAILLE = ((hb_tag_t)((((uint8_t)('B'))<<24)|(((uint8_t)('r'))<<16)|(((uint8_t)('a'))<<8)|((uint8_t)('i')))),
          HB_SCRIPT_CANADIAN_SYLLABICS = ((hb_tag_t)((((uint8_t)('C'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('n'))<<8)|((uint8_t)('s')))),
          HB_SCRIPT_CHEROKEE = ((hb_tag_t)((((uint8_t)('C'))<<24)|(((uint8_t)('h'))<<16)|(((uint8_t)('e'))<<8)|((uint8_t)('r')))),
          HB_SCRIPT_ETHIOPIC = ((hb_tag_t)((((uint8_t)('E'))<<24)|(((uint8_t)('t'))<<16)|(((uint8_t)('h'))<<8)|((uint8_t)('i')))),
          HB_SCRIPT_KHMER = ((hb_tag_t)((((uint8_t)('K'))<<24)|(((uint8_t)('h'))<<16)|(((uint8_t)('m'))<<8)|((uint8_t)('r')))),
          HB_SCRIPT_MONGOLIAN = ((hb_tag_t)((((uint8_t)('M'))<<24)|(((uint8_t)('o'))<<16)|(((uint8_t)('n'))<<8)|((uint8_t)('g')))),
          HB_SCRIPT_MYANMAR = ((hb_tag_t)((((uint8_t)('M'))<<24)|(((uint8_t)('y'))<<16)|(((uint8_t)('m'))<<8)|((uint8_t)('r')))),
          HB_SCRIPT_OGHAM = ((hb_tag_t)((((uint8_t)('O'))<<24)|(((uint8_t)('g'))<<16)|(((uint8_t)('a'))<<8)|((uint8_t)('m')))),
          HB_SCRIPT_RUNIC = ((hb_tag_t)((((uint8_t)('R'))<<24)|(((uint8_t)('u'))<<16)|(((uint8_t)('n'))<<8)|((uint8_t)('r')))),
          HB_SCRIPT_SINHALA = ((hb_tag_t)((((uint8_t)('S'))<<24)|(((uint8_t)('i'))<<16)|(((uint8_t)('n'))<<8)|((uint8_t)('h')))),
          HB_SCRIPT_SYRIAC = ((hb_tag_t)((((uint8_t)('S'))<<24)|(((uint8_t)('y'))<<16)|(((uint8_t)('r'))<<8)|((uint8_t)('c')))),
          HB_SCRIPT_THAANA = ((hb_tag_t)((((uint8_t)('T'))<<24)|(((uint8_t)('h'))<<16)|(((uint8_t)('a'))<<8)|((uint8_t)('a')))),
          HB_SCRIPT_YI = ((hb_tag_t)((((uint8_t)('Y'))<<24)|(((uint8_t)('i'))<<16)|(((uint8_t)('i'))<<8)|((uint8_t)('i')))),

          HB_SCRIPT_DESERET = ((hb_tag_t)((((uint8_t)('D'))<<24)|(((uint8_t)('s'))<<16)|(((uint8_t)('r'))<<8)|((uint8_t)('t')))),
          HB_SCRIPT_GOTHIC = ((hb_tag_t)((((uint8_t)('G'))<<24)|(((uint8_t)('o'))<<16)|(((uint8_t)('t'))<<8)|((uint8_t)('h')))),
          HB_SCRIPT_OLD_ITALIC = ((hb_tag_t)((((uint8_t)('I'))<<24)|(((uint8_t)('t'))<<16)|(((uint8_t)('a'))<<8)|((uint8_t)('l')))),

          HB_SCRIPT_BUHID = ((hb_tag_t)((((uint8_t)('B'))<<24)|(((uint8_t)('u'))<<16)|(((uint8_t)('h'))<<8)|((uint8_t)('d')))),
          HB_SCRIPT_HANUNOO = ((hb_tag_t)((((uint8_t)('H'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('n'))<<8)|((uint8_t)('o')))),
          HB_SCRIPT_TAGALOG = ((hb_tag_t)((((uint8_t)('T'))<<24)|(((uint8_t)('g'))<<16)|(((uint8_t)('l'))<<8)|((uint8_t)('g')))),
          HB_SCRIPT_TAGBANWA = ((hb_tag_t)((((uint8_t)('T'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('g'))<<8)|((uint8_t)('b')))),

          HB_SCRIPT_CYPRIOT = ((hb_tag_t)((((uint8_t)('C'))<<24)|(((uint8_t)('p'))<<16)|(((uint8_t)('r'))<<8)|((uint8_t)('t')))),
          HB_SCRIPT_LIMBU = ((hb_tag_t)((((uint8_t)('L'))<<24)|(((uint8_t)('i'))<<16)|(((uint8_t)('m'))<<8)|((uint8_t)('b')))),
          HB_SCRIPT_LINEAR_B = ((hb_tag_t)((((uint8_t)('L'))<<24)|(((uint8_t)('i'))<<16)|(((uint8_t)('n'))<<8)|((uint8_t)('b')))),
          HB_SCRIPT_OSMANYA = ((hb_tag_t)((((uint8_t)('O'))<<24)|(((uint8_t)('s'))<<16)|(((uint8_t)('m'))<<8)|((uint8_t)('a')))),
          HB_SCRIPT_SHAVIAN = ((hb_tag_t)((((uint8_t)('S'))<<24)|(((uint8_t)('h'))<<16)|(((uint8_t)('a'))<<8)|((uint8_t)('w')))),
          HB_SCRIPT_TAI_LE = ((hb_tag_t)((((uint8_t)('T'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('l'))<<8)|((uint8_t)('e')))),
          HB_SCRIPT_UGARITIC = ((hb_tag_t)((((uint8_t)('U'))<<24)|(((uint8_t)('g'))<<16)|(((uint8_t)('a'))<<8)|((uint8_t)('r')))),

          HB_SCRIPT_BUGINESE = ((hb_tag_t)((((uint8_t)('B'))<<24)|(((uint8_t)('u'))<<16)|(((uint8_t)('g'))<<8)|((uint8_t)('i')))),
          HB_SCRIPT_COPTIC = ((hb_tag_t)((((uint8_t)('C'))<<24)|(((uint8_t)('o'))<<16)|(((uint8_t)('p'))<<8)|((uint8_t)('t')))),
          HB_SCRIPT_GLAGOLITIC = ((hb_tag_t)((((uint8_t)('G'))<<24)|(((uint8_t)('l'))<<16)|(((uint8_t)('a'))<<8)|((uint8_t)('g')))),
          HB_SCRIPT_KHAROSHTHI = ((hb_tag_t)((((uint8_t)('K'))<<24)|(((uint8_t)('h'))<<16)|(((uint8_t)('a'))<<8)|((uint8_t)('r')))),
          HB_SCRIPT_NEW_TAI_LUE = ((hb_tag_t)((((uint8_t)('T'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('l'))<<8)|((uint8_t)('u')))),
          HB_SCRIPT_OLD_PERSIAN = ((hb_tag_t)((((uint8_t)('X'))<<24)|(((uint8_t)('p'))<<16)|(((uint8_t)('e'))<<8)|((uint8_t)('o')))),
          HB_SCRIPT_SYLOTI_NAGRI = ((hb_tag_t)((((uint8_t)('S'))<<24)|(((uint8_t)('y'))<<16)|(((uint8_t)('l'))<<8)|((uint8_t)('o')))),
          HB_SCRIPT_TIFINAGH = ((hb_tag_t)((((uint8_t)('T'))<<24)|(((uint8_t)('f'))<<16)|(((uint8_t)('n'))<<8)|((uint8_t)('g')))),

          HB_SCRIPT_BALINESE = ((hb_tag_t)((((uint8_t)('B'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('l'))<<8)|((uint8_t)('i')))),
          HB_SCRIPT_CUNEIFORM = ((hb_tag_t)((((uint8_t)('X'))<<24)|(((uint8_t)('s'))<<16)|(((uint8_t)('u'))<<8)|((uint8_t)('x')))),
          HB_SCRIPT_NKO = ((hb_tag_t)((((uint8_t)('N'))<<24)|(((uint8_t)('k'))<<16)|(((uint8_t)('o'))<<8)|((uint8_t)('o')))),
          HB_SCRIPT_PHAGS_PA = ((hb_tag_t)((((uint8_t)('P'))<<24)|(((uint8_t)('h'))<<16)|(((uint8_t)('a'))<<8)|((uint8_t)('g')))),
          HB_SCRIPT_PHOENICIAN = ((hb_tag_t)((((uint8_t)('P'))<<24)|(((uint8_t)('h'))<<16)|(((uint8_t)('n'))<<8)|((uint8_t)('x')))),

          HB_SCRIPT_CARIAN = ((hb_tag_t)((((uint8_t)('C'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('r'))<<8)|((uint8_t)('i')))),
          HB_SCRIPT_CHAM = ((hb_tag_t)((((uint8_t)('C'))<<24)|(((uint8_t)('h'))<<16)|(((uint8_t)('a'))<<8)|((uint8_t)('m')))),
          HB_SCRIPT_KAYAH_LI = ((hb_tag_t)((((uint8_t)('K'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('l'))<<8)|((uint8_t)('i')))),
          HB_SCRIPT_LEPCHA = ((hb_tag_t)((((uint8_t)('L'))<<24)|(((uint8_t)('e'))<<16)|(((uint8_t)('p'))<<8)|((uint8_t)('c')))),
          HB_SCRIPT_LYCIAN = ((hb_tag_t)((((uint8_t)('L'))<<24)|(((uint8_t)('y'))<<16)|(((uint8_t)('c'))<<8)|((uint8_t)('i')))),
          HB_SCRIPT_LYDIAN = ((hb_tag_t)((((uint8_t)('L'))<<24)|(((uint8_t)('y'))<<16)|(((uint8_t)('d'))<<8)|((uint8_t)('i')))),
          HB_SCRIPT_OL_CHIKI = ((hb_tag_t)((((uint8_t)('O'))<<24)|(((uint8_t)('l'))<<16)|(((uint8_t)('c'))<<8)|((uint8_t)('k')))),
          HB_SCRIPT_REJANG = ((hb_tag_t)((((uint8_t)('R'))<<24)|(((uint8_t)('j'))<<16)|(((uint8_t)('n'))<<8)|((uint8_t)('g')))),
          HB_SCRIPT_SAURASHTRA = ((hb_tag_t)((((uint8_t)('S'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('u'))<<8)|((uint8_t)('r')))),
          HB_SCRIPT_SUNDANESE = ((hb_tag_t)((((uint8_t)('S'))<<24)|(((uint8_t)('u'))<<16)|(((uint8_t)('n'))<<8)|((uint8_t)('d')))),
          HB_SCRIPT_VAI = ((hb_tag_t)((((uint8_t)('V'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('i'))<<8)|((uint8_t)('i')))),

          HB_SCRIPT_AVESTAN = ((hb_tag_t)((((uint8_t)('A'))<<24)|(((uint8_t)('v'))<<16)|(((uint8_t)('s'))<<8)|((uint8_t)('t')))),
          HB_SCRIPT_BAMUM = ((hb_tag_t)((((uint8_t)('B'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('m'))<<8)|((uint8_t)('u')))),
          HB_SCRIPT_EGYPTIAN_HIEROGLYPHS = ((hb_tag_t)((((uint8_t)('E'))<<24)|(((uint8_t)('g'))<<16)|(((uint8_t)('y'))<<8)|((uint8_t)('p')))),
          HB_SCRIPT_IMPERIAL_ARAMAIC = ((hb_tag_t)((((uint8_t)('A'))<<24)|(((uint8_t)('r'))<<16)|(((uint8_t)('m'))<<8)|((uint8_t)('i')))),
          HB_SCRIPT_INSCRIPTIONAL_PAHLAVI = ((hb_tag_t)((((uint8_t)('P'))<<24)|(((uint8_t)('h'))<<16)|(((uint8_t)('l'))<<8)|((uint8_t)('i')))),
          HB_SCRIPT_INSCRIPTIONAL_PARTHIAN = ((hb_tag_t)((((uint8_t)('P'))<<24)|(((uint8_t)('r'))<<16)|(((uint8_t)('t'))<<8)|((uint8_t)('i')))),
          HB_SCRIPT_JAVANESE = ((hb_tag_t)((((uint8_t)('J'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('v'))<<8)|((uint8_t)('a')))),
          HB_SCRIPT_KAITHI = ((hb_tag_t)((((uint8_t)('K'))<<24)|(((uint8_t)('t'))<<16)|(((uint8_t)('h'))<<8)|((uint8_t)('i')))),
          HB_SCRIPT_LISU = ((hb_tag_t)((((uint8_t)('L'))<<24)|(((uint8_t)('i'))<<16)|(((uint8_t)('s'))<<8)|((uint8_t)('u')))),
          HB_SCRIPT_MEETEI_MAYEK = ((hb_tag_t)((((uint8_t)('M'))<<24)|(((uint8_t)('t'))<<16)|(((uint8_t)('e'))<<8)|((uint8_t)('i')))),
          HB_SCRIPT_OLD_SOUTH_ARABIAN = ((hb_tag_t)((((uint8_t)('S'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('r'))<<8)|((uint8_t)('b')))),
          HB_SCRIPT_OLD_TURKIC = ((hb_tag_t)((((uint8_t)('O'))<<24)|(((uint8_t)('r'))<<16)|(((uint8_t)('k'))<<8)|((uint8_t)('h')))),
          HB_SCRIPT_SAMARITAN = ((hb_tag_t)((((uint8_t)('S'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('m'))<<8)|((uint8_t)('r')))),
          HB_SCRIPT_TAI_THAM = ((hb_tag_t)((((uint8_t)('L'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('n'))<<8)|((uint8_t)('a')))),
          HB_SCRIPT_TAI_VIET = ((hb_tag_t)((((uint8_t)('T'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('v'))<<8)|((uint8_t)('t')))),

          HB_SCRIPT_BATAK = ((hb_tag_t)((((uint8_t)('B'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('t'))<<8)|((uint8_t)('k')))),
          HB_SCRIPT_BRAHMI = ((hb_tag_t)((((uint8_t)('B'))<<24)|(((uint8_t)('r'))<<16)|(((uint8_t)('a'))<<8)|((uint8_t)('h')))),
          HB_SCRIPT_MANDAIC = ((hb_tag_t)((((uint8_t)('M'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('n'))<<8)|((uint8_t)('d')))),

          HB_SCRIPT_CHAKMA = ((hb_tag_t)((((uint8_t)('C'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('k'))<<8)|((uint8_t)('m')))),
          HB_SCRIPT_MEROITIC_CURSIVE = ((hb_tag_t)((((uint8_t)('M'))<<24)|(((uint8_t)('e'))<<16)|(((uint8_t)('r'))<<8)|((uint8_t)('c')))),
          HB_SCRIPT_MEROITIC_HIEROGLYPHS = ((hb_tag_t)((((uint8_t)('M'))<<24)|(((uint8_t)('e'))<<16)|(((uint8_t)('r'))<<8)|((uint8_t)('o')))),
          HB_SCRIPT_MIAO = ((hb_tag_t)((((uint8_t)('P'))<<24)|(((uint8_t)('l'))<<16)|(((uint8_t)('r'))<<8)|((uint8_t)('d')))),
          HB_SCRIPT_SHARADA = ((hb_tag_t)((((uint8_t)('S'))<<24)|(((uint8_t)('h'))<<16)|(((uint8_t)('r'))<<8)|((uint8_t)('d')))),
          HB_SCRIPT_SORA_SOMPENG = ((hb_tag_t)((((uint8_t)('S'))<<24)|(((uint8_t)('o'))<<16)|(((uint8_t)('r'))<<8)|((uint8_t)('a')))),
          HB_SCRIPT_TAKRI = ((hb_tag_t)((((uint8_t)('T'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('k'))<<8)|((uint8_t)('r')))),


          HB_SCRIPT_INVALID = ((hb_tag_t)((((uint8_t)(0))<<24)|(((uint8_t)(0))<<16)|(((uint8_t)(0))<<8)|((uint8_t)(0)))),



          _HB_SCRIPT_MAX_VALUE = ((hb_tag_t)((((uint8_t)(0xff))<<24)|(((uint8_t)(0xff))<<16)|(((uint8_t)(0xff))<<8)|((uint8_t)(0xff))))

} hb_script_t;
# 312 "../../src/hb-common.h"
hb_script_t
hb_script_from_iso15924_tag (hb_tag_t tag);



hb_script_t
hb_script_from_string (const char *s, int len);

hb_tag_t
hb_script_to_iso15924_tag (hb_script_t script);

hb_direction_t
hb_script_get_horizontal_direction (hb_script_t script);




typedef struct hb_user_data_key_t {

  char unused;
} hb_user_data_key_t;

typedef void (*hb_destroy_func_t) (void *user_data);


}
# 35 "../../src/hb-blob.h" 2

extern "C" {
# 59 "../../src/hb-blob.h"
typedef enum {
  HB_MEMORY_MODE_DUPLICATE,
  HB_MEMORY_MODE_READONLY,
  HB_MEMORY_MODE_WRITABLE,
  HB_MEMORY_MODE_READONLY_MAY_MAKE_WRITABLE
} hb_memory_mode_t;

typedef struct hb_blob_t hb_blob_t;

hb_blob_t *
hb_blob_create (const char *data,
  unsigned int length,
  hb_memory_mode_t mode,
  void *user_data,
  hb_destroy_func_t destroy);







hb_blob_t *
hb_blob_create_sub_blob (hb_blob_t *parent,
    unsigned int offset,
    unsigned int length);

hb_blob_t *
hb_blob_get_empty (void);

hb_blob_t *
hb_blob_reference (hb_blob_t *blob);

void
hb_blob_destroy (hb_blob_t *blob);

hb_bool_t
hb_blob_set_user_data (hb_blob_t *blob,
         hb_user_data_key_t *key,
         void * data,
         hb_destroy_func_t destroy,
         hb_bool_t replace);


void *
hb_blob_get_user_data (hb_blob_t *blob,
         hb_user_data_key_t *key);


void
hb_blob_make_immutable (hb_blob_t *blob);

hb_bool_t
hb_blob_is_immutable (hb_blob_t *blob);


unsigned int
hb_blob_get_length (hb_blob_t *blob);

const char *
hb_blob_get_data (hb_blob_t *blob, unsigned int *length);

char *
hb_blob_get_data_writable (hb_blob_t *blob, unsigned int *length);


}
# 32 "../../src/hb.h" 2
# 1 "../../src/hb-buffer.h" 1
# 37 "../../src/hb-buffer.h"
# 1 "../../src/hb-common.h" 1
# 38 "../../src/hb-buffer.h" 2
# 1 "../../src/hb-unicode.h" 1
# 38 "../../src/hb-unicode.h"
# 1 "../../src/hb-common.h" 1
# 39 "../../src/hb-unicode.h" 2

extern "C" {





typedef enum
{
  HB_UNICODE_GENERAL_CATEGORY_CONTROL,
  HB_UNICODE_GENERAL_CATEGORY_FORMAT,
  HB_UNICODE_GENERAL_CATEGORY_UNASSIGNED,
  HB_UNICODE_GENERAL_CATEGORY_PRIVATE_USE,
  HB_UNICODE_GENERAL_CATEGORY_SURROGATE,
  HB_UNICODE_GENERAL_CATEGORY_LOWERCASE_LETTER,
  HB_UNICODE_GENERAL_CATEGORY_MODIFIER_LETTER,
  HB_UNICODE_GENERAL_CATEGORY_OTHER_LETTER,
  HB_UNICODE_GENERAL_CATEGORY_TITLECASE_LETTER,
  HB_UNICODE_GENERAL_CATEGORY_UPPERCASE_LETTER,
  HB_UNICODE_GENERAL_CATEGORY_SPACING_MARK,
  HB_UNICODE_GENERAL_CATEGORY_ENCLOSING_MARK,
  HB_UNICODE_GENERAL_CATEGORY_NON_SPACING_MARK,
  HB_UNICODE_GENERAL_CATEGORY_DECIMAL_NUMBER,
  HB_UNICODE_GENERAL_CATEGORY_LETTER_NUMBER,
  HB_UNICODE_GENERAL_CATEGORY_OTHER_NUMBER,
  HB_UNICODE_GENERAL_CATEGORY_CONNECT_PUNCTUATION,
  HB_UNICODE_GENERAL_CATEGORY_DASH_PUNCTUATION,
  HB_UNICODE_GENERAL_CATEGORY_CLOSE_PUNCTUATION,
  HB_UNICODE_GENERAL_CATEGORY_FINAL_PUNCTUATION,
  HB_UNICODE_GENERAL_CATEGORY_INITIAL_PUNCTUATION,
  HB_UNICODE_GENERAL_CATEGORY_OTHER_PUNCTUATION,
  HB_UNICODE_GENERAL_CATEGORY_OPEN_PUNCTUATION,
  HB_UNICODE_GENERAL_CATEGORY_CURRENCY_SYMBOL,
  HB_UNICODE_GENERAL_CATEGORY_MODIFIER_SYMBOL,
  HB_UNICODE_GENERAL_CATEGORY_MATH_SYMBOL,
  HB_UNICODE_GENERAL_CATEGORY_OTHER_SYMBOL,
  HB_UNICODE_GENERAL_CATEGORY_LINE_SEPARATOR,
  HB_UNICODE_GENERAL_CATEGORY_PARAGRAPH_SEPARATOR,
  HB_UNICODE_GENERAL_CATEGORY_SPACE_SEPARATOR
} hb_unicode_general_category_t;
# 87 "../../src/hb-unicode.h"
typedef enum
{
  HB_UNICODE_COMBINING_CLASS_NOT_REORDERED = 0,
  HB_UNICODE_COMBINING_CLASS_OVERLAY = 1,
  HB_UNICODE_COMBINING_CLASS_NUKTA = 7,
  HB_UNICODE_COMBINING_CLASS_KANA_VOICING = 8,
  HB_UNICODE_COMBINING_CLASS_VIRAMA = 9,


  HB_UNICODE_COMBINING_CLASS_CCC10 = 10,
  HB_UNICODE_COMBINING_CLASS_CCC11 = 11,
  HB_UNICODE_COMBINING_CLASS_CCC12 = 12,
  HB_UNICODE_COMBINING_CLASS_CCC13 = 13,
  HB_UNICODE_COMBINING_CLASS_CCC14 = 14,
  HB_UNICODE_COMBINING_CLASS_CCC15 = 15,
  HB_UNICODE_COMBINING_CLASS_CCC16 = 16,
  HB_UNICODE_COMBINING_CLASS_CCC17 = 17,
  HB_UNICODE_COMBINING_CLASS_CCC18 = 18,
  HB_UNICODE_COMBINING_CLASS_CCC19 = 19,
  HB_UNICODE_COMBINING_CLASS_CCC20 = 20,
  HB_UNICODE_COMBINING_CLASS_CCC21 = 21,
  HB_UNICODE_COMBINING_CLASS_CCC22 = 22,
  HB_UNICODE_COMBINING_CLASS_CCC23 = 23,
  HB_UNICODE_COMBINING_CLASS_CCC24 = 24,
  HB_UNICODE_COMBINING_CLASS_CCC25 = 25,
  HB_UNICODE_COMBINING_CLASS_CCC26 = 26,


  HB_UNICODE_COMBINING_CLASS_CCC27 = 27,
  HB_UNICODE_COMBINING_CLASS_CCC28 = 28,
  HB_UNICODE_COMBINING_CLASS_CCC29 = 29,
  HB_UNICODE_COMBINING_CLASS_CCC30 = 30,
  HB_UNICODE_COMBINING_CLASS_CCC31 = 31,
  HB_UNICODE_COMBINING_CLASS_CCC32 = 32,
  HB_UNICODE_COMBINING_CLASS_CCC33 = 33,
  HB_UNICODE_COMBINING_CLASS_CCC34 = 34,
  HB_UNICODE_COMBINING_CLASS_CCC35 = 35,


  HB_UNICODE_COMBINING_CLASS_CCC36 = 36,


  HB_UNICODE_COMBINING_CLASS_CCC84 = 84,
  HB_UNICODE_COMBINING_CLASS_CCC91 = 91,


  HB_UNICODE_COMBINING_CLASS_CCC103 = 103,
  HB_UNICODE_COMBINING_CLASS_CCC107 = 107,


  HB_UNICODE_COMBINING_CLASS_CCC118 = 118,
  HB_UNICODE_COMBINING_CLASS_CCC122 = 122,


  HB_UNICODE_COMBINING_CLASS_CCC129 = 129,
  HB_UNICODE_COMBINING_CLASS_CCC130 = 130,
  HB_UNICODE_COMBINING_CLASS_CCC133 = 132,


  HB_UNICODE_COMBINING_CLASS_ATTACHED_BELOW_LEFT = 200,
  HB_UNICODE_COMBINING_CLASS_ATTACHED_BELOW = 202,
  HB_UNICODE_COMBINING_CLASS_ATTACHED_ABOVE = 214,
  HB_UNICODE_COMBINING_CLASS_ATTACHED_ABOVE_RIGHT = 216,
  HB_UNICODE_COMBINING_CLASS_BELOW_LEFT = 218,
  HB_UNICODE_COMBINING_CLASS_BELOW = 220,
  HB_UNICODE_COMBINING_CLASS_BELOW_RIGHT = 222,
  HB_UNICODE_COMBINING_CLASS_LEFT = 224,
  HB_UNICODE_COMBINING_CLASS_RIGHT = 226,
  HB_UNICODE_COMBINING_CLASS_ABOVE_LEFT = 228,
  HB_UNICODE_COMBINING_CLASS_ABOVE = 230,
  HB_UNICODE_COMBINING_CLASS_ABOVE_RIGHT = 232,
  HB_UNICODE_COMBINING_CLASS_DOUBLE_BELOW = 233,
  HB_UNICODE_COMBINING_CLASS_DOUBLE_ABOVE = 234,

  HB_UNICODE_COMBINING_CLASS_IOTA_SUBSCRIPT = 240,

  HB_UNICODE_COMBINING_CLASS_INVALID = 255
} hb_unicode_combining_class_t;






typedef struct hb_unicode_funcs_t hb_unicode_funcs_t;





hb_unicode_funcs_t *
hb_unicode_funcs_get_default (void);


hb_unicode_funcs_t *
hb_unicode_funcs_create (hb_unicode_funcs_t *parent);

hb_unicode_funcs_t *
hb_unicode_funcs_get_empty (void);

hb_unicode_funcs_t *
hb_unicode_funcs_reference (hb_unicode_funcs_t *ufuncs);

void
hb_unicode_funcs_destroy (hb_unicode_funcs_t *ufuncs);

hb_bool_t
hb_unicode_funcs_set_user_data (hb_unicode_funcs_t *ufuncs,
           hb_user_data_key_t *key,
           void * data,
           hb_destroy_func_t destroy,
    hb_bool_t replace);


void *
hb_unicode_funcs_get_user_data (hb_unicode_funcs_t *ufuncs,
           hb_user_data_key_t *key);


void
hb_unicode_funcs_make_immutable (hb_unicode_funcs_t *ufuncs);

hb_bool_t
hb_unicode_funcs_is_immutable (hb_unicode_funcs_t *ufuncs);

hb_unicode_funcs_t *
hb_unicode_funcs_get_parent (hb_unicode_funcs_t *ufuncs);
# 222 "../../src/hb-unicode.h"
typedef hb_unicode_combining_class_t (*hb_unicode_combining_class_func_t) (hb_unicode_funcs_t *ufuncs,
           hb_codepoint_t unicode,
           void *user_data);
typedef unsigned int (*hb_unicode_eastasian_width_func_t) (hb_unicode_funcs_t *ufuncs,
           hb_codepoint_t unicode,
           void *user_data);
typedef hb_unicode_general_category_t (*hb_unicode_general_category_func_t) (hb_unicode_funcs_t *ufuncs,
           hb_codepoint_t unicode,
           void *user_data);
typedef hb_codepoint_t (*hb_unicode_mirroring_func_t) (hb_unicode_funcs_t *ufuncs,
           hb_codepoint_t unicode,
           void *user_data);
typedef hb_script_t (*hb_unicode_script_func_t) (hb_unicode_funcs_t *ufuncs,
           hb_codepoint_t unicode,
           void *user_data);

typedef hb_bool_t (*hb_unicode_compose_func_t) (hb_unicode_funcs_t *ufuncs,
           hb_codepoint_t a,
           hb_codepoint_t b,
           hb_codepoint_t *ab,
           void *user_data);
typedef hb_bool_t (*hb_unicode_decompose_func_t) (hb_unicode_funcs_t *ufuncs,
           hb_codepoint_t ab,
           hb_codepoint_t *a,
           hb_codepoint_t *b,
           void *user_data);
# 267 "../../src/hb-unicode.h"
typedef unsigned int (*hb_unicode_decompose_compatibility_func_t) (hb_unicode_funcs_t *ufuncs,
            hb_codepoint_t u,
            hb_codepoint_t *decomposed,
            void *user_data);
# 288 "../../src/hb-unicode.h"
void
hb_unicode_funcs_set_combining_class_func (hb_unicode_funcs_t *ufuncs,
        hb_unicode_combining_class_func_t func,
        void *user_data, hb_destroy_func_t destroy);
# 304 "../../src/hb-unicode.h"
void
hb_unicode_funcs_set_eastasian_width_func (hb_unicode_funcs_t *ufuncs,
        hb_unicode_eastasian_width_func_t func,
        void *user_data, hb_destroy_func_t destroy);
# 320 "../../src/hb-unicode.h"
void
hb_unicode_funcs_set_general_category_func (hb_unicode_funcs_t *ufuncs,
         hb_unicode_general_category_func_t func,
         void *user_data, hb_destroy_func_t destroy);
# 336 "../../src/hb-unicode.h"
void
hb_unicode_funcs_set_mirroring_func (hb_unicode_funcs_t *ufuncs,
         hb_unicode_mirroring_func_t func,
         void *user_data, hb_destroy_func_t destroy);
# 352 "../../src/hb-unicode.h"
void
hb_unicode_funcs_set_script_func (hb_unicode_funcs_t *ufuncs,
      hb_unicode_script_func_t func,
      void *user_data, hb_destroy_func_t destroy);
# 368 "../../src/hb-unicode.h"
void
hb_unicode_funcs_set_compose_func (hb_unicode_funcs_t *ufuncs,
       hb_unicode_compose_func_t func,
       void *user_data, hb_destroy_func_t destroy);
# 384 "../../src/hb-unicode.h"
void
hb_unicode_funcs_set_decompose_func (hb_unicode_funcs_t *ufuncs,
         hb_unicode_decompose_func_t func,
         void *user_data, hb_destroy_func_t destroy);
# 400 "../../src/hb-unicode.h"
void
hb_unicode_funcs_set_decompose_compatibility_func (hb_unicode_funcs_t *ufuncs,
         hb_unicode_decompose_compatibility_func_t func,
         void *user_data, hb_destroy_func_t destroy);



hb_unicode_combining_class_t
hb_unicode_combining_class (hb_unicode_funcs_t *ufuncs,
       hb_codepoint_t unicode);

unsigned int
hb_unicode_eastasian_width (hb_unicode_funcs_t *ufuncs,
       hb_codepoint_t unicode);

hb_unicode_general_category_t
hb_unicode_general_category (hb_unicode_funcs_t *ufuncs,
        hb_codepoint_t unicode);

hb_codepoint_t
hb_unicode_mirroring (hb_unicode_funcs_t *ufuncs,
        hb_codepoint_t unicode);

hb_script_t
hb_unicode_script (hb_unicode_funcs_t *ufuncs,
     hb_codepoint_t unicode);

hb_bool_t
hb_unicode_compose (hb_unicode_funcs_t *ufuncs,
      hb_codepoint_t a,
      hb_codepoint_t b,
      hb_codepoint_t *ab);
hb_bool_t
hb_unicode_decompose (hb_unicode_funcs_t *ufuncs,
        hb_codepoint_t ab,
        hb_codepoint_t *a,
        hb_codepoint_t *b);

unsigned int
hb_unicode_decompose_compatibility (hb_unicode_funcs_t *ufuncs,
        hb_codepoint_t u,
        hb_codepoint_t *decomposed);

}
# 39 "../../src/hb-buffer.h" 2
# 1 "../../src/hb-font.h" 1
# 34 "../../src/hb-font.h"
# 1 "../../src/hb-common.h" 1
# 35 "../../src/hb-font.h" 2
# 1 "../../src/hb-face.h" 1
# 34 "../../src/hb-face.h"
# 1 "../../src/hb-common.h" 1
# 35 "../../src/hb-face.h" 2
# 1 "../../src/hb-blob.h" 1
# 36 "../../src/hb-face.h" 2

extern "C" {






typedef struct hb_face_t hb_face_t;

hb_face_t *
hb_face_create (hb_blob_t *blob,
  unsigned int index);

typedef hb_blob_t * (*hb_reference_table_func_t) (hb_face_t *face, hb_tag_t tag, void *user_data);


hb_face_t *
hb_face_create_for_tables (hb_reference_table_func_t reference_table_func,
      void *user_data,
      hb_destroy_func_t destroy);

hb_face_t *
hb_face_get_empty (void);

hb_face_t *
hb_face_reference (hb_face_t *face);

void
hb_face_destroy (hb_face_t *face);

hb_bool_t
hb_face_set_user_data (hb_face_t *face,
         hb_user_data_key_t *key,
         void * data,
         hb_destroy_func_t destroy,
         hb_bool_t replace);


void *
hb_face_get_user_data (hb_face_t *face,
         hb_user_data_key_t *key);

void
hb_face_make_immutable (hb_face_t *face);

hb_bool_t
hb_face_is_immutable (hb_face_t *face);


hb_blob_t *
hb_face_reference_table (hb_face_t *face,
    hb_tag_t tag);

hb_blob_t *
hb_face_reference_blob (hb_face_t *face);

void
hb_face_set_index (hb_face_t *face,
     unsigned int index);

unsigned int
hb_face_get_index (hb_face_t *face);

void
hb_face_set_upem (hb_face_t *face,
    unsigned int upem);

unsigned int
hb_face_get_upem (hb_face_t *face);

void
hb_face_set_glyph_count (hb_face_t *face,
    unsigned int glyph_count);

unsigned int
hb_face_get_glyph_count (hb_face_t *face);


}
# 36 "../../src/hb-font.h" 2

extern "C" {


typedef struct hb_font_t hb_font_t;






typedef struct hb_font_funcs_t hb_font_funcs_t;

hb_font_funcs_t *
hb_font_funcs_create (void);

hb_font_funcs_t *
hb_font_funcs_get_empty (void);

hb_font_funcs_t *
hb_font_funcs_reference (hb_font_funcs_t *ffuncs);

void
hb_font_funcs_destroy (hb_font_funcs_t *ffuncs);

hb_bool_t
hb_font_funcs_set_user_data (hb_font_funcs_t *ffuncs,
        hb_user_data_key_t *key,
        void * data,
        hb_destroy_func_t destroy,
        hb_bool_t replace);


void *
hb_font_funcs_get_user_data (hb_font_funcs_t *ffuncs,
        hb_user_data_key_t *key);


void
hb_font_funcs_make_immutable (hb_font_funcs_t *ffuncs);

hb_bool_t
hb_font_funcs_is_immutable (hb_font_funcs_t *ffuncs);




typedef struct hb_glyph_extents_t
{
  hb_position_t x_bearing;
  hb_position_t y_bearing;
  hb_position_t width;
  hb_position_t height;
} hb_glyph_extents_t;




typedef hb_bool_t (*hb_font_get_glyph_func_t) (hb_font_t *font, void *font_data,
            hb_codepoint_t unicode, hb_codepoint_t variation_selector,
            hb_codepoint_t *glyph,
            void *user_data);


typedef hb_position_t (*hb_font_get_glyph_advance_func_t) (hb_font_t *font, void *font_data,
          hb_codepoint_t glyph,
          void *user_data);
typedef hb_font_get_glyph_advance_func_t hb_font_get_glyph_h_advance_func_t;
typedef hb_font_get_glyph_advance_func_t hb_font_get_glyph_v_advance_func_t;

typedef hb_bool_t (*hb_font_get_glyph_origin_func_t) (hb_font_t *font, void *font_data,
            hb_codepoint_t glyph,
            hb_position_t *x, hb_position_t *y,
            void *user_data);
typedef hb_font_get_glyph_origin_func_t hb_font_get_glyph_h_origin_func_t;
typedef hb_font_get_glyph_origin_func_t hb_font_get_glyph_v_origin_func_t;

typedef hb_position_t (*hb_font_get_glyph_kerning_func_t) (hb_font_t *font, void *font_data,
          hb_codepoint_t first_glyph, hb_codepoint_t second_glyph,
          void *user_data);
typedef hb_font_get_glyph_kerning_func_t hb_font_get_glyph_h_kerning_func_t;
typedef hb_font_get_glyph_kerning_func_t hb_font_get_glyph_v_kerning_func_t;


typedef hb_bool_t (*hb_font_get_glyph_extents_func_t) (hb_font_t *font, void *font_data,
             hb_codepoint_t glyph,
             hb_glyph_extents_t *extents,
             void *user_data);
typedef hb_bool_t (*hb_font_get_glyph_contour_point_func_t) (hb_font_t *font, void *font_data,
            hb_codepoint_t glyph, unsigned int point_index,
            hb_position_t *x, hb_position_t *y,
            void *user_data);


typedef hb_bool_t (*hb_font_get_glyph_name_func_t) (hb_font_t *font, void *font_data,
          hb_codepoint_t glyph,
          char *name, unsigned int size,
          void *user_data);
typedef hb_bool_t (*hb_font_get_glyph_from_name_func_t) (hb_font_t *font, void *font_data,
        const char *name, int len,
        hb_codepoint_t *glyph,
        void *user_data);
# 153 "../../src/hb-font.h"
void
hb_font_funcs_set_glyph_func (hb_font_funcs_t *ffuncs,
         hb_font_get_glyph_func_t func,
         void *user_data, hb_destroy_func_t destroy);
# 169 "../../src/hb-font.h"
void
hb_font_funcs_set_glyph_h_advance_func (hb_font_funcs_t *ffuncs,
     hb_font_get_glyph_h_advance_func_t func,
     void *user_data, hb_destroy_func_t destroy);
# 185 "../../src/hb-font.h"
void
hb_font_funcs_set_glyph_v_advance_func (hb_font_funcs_t *ffuncs,
     hb_font_get_glyph_v_advance_func_t func,
     void *user_data, hb_destroy_func_t destroy);
# 201 "../../src/hb-font.h"
void
hb_font_funcs_set_glyph_h_origin_func (hb_font_funcs_t *ffuncs,
           hb_font_get_glyph_h_origin_func_t func,
           void *user_data, hb_destroy_func_t destroy);
# 217 "../../src/hb-font.h"
void
hb_font_funcs_set_glyph_v_origin_func (hb_font_funcs_t *ffuncs,
           hb_font_get_glyph_v_origin_func_t func,
           void *user_data, hb_destroy_func_t destroy);
# 233 "../../src/hb-font.h"
void
hb_font_funcs_set_glyph_h_kerning_func (hb_font_funcs_t *ffuncs,
     hb_font_get_glyph_h_kerning_func_t func,
     void *user_data, hb_destroy_func_t destroy);
# 249 "../../src/hb-font.h"
void
hb_font_funcs_set_glyph_v_kerning_func (hb_font_funcs_t *ffuncs,
     hb_font_get_glyph_v_kerning_func_t func,
     void *user_data, hb_destroy_func_t destroy);
# 265 "../../src/hb-font.h"
void
hb_font_funcs_set_glyph_extents_func (hb_font_funcs_t *ffuncs,
          hb_font_get_glyph_extents_func_t func,
          void *user_data, hb_destroy_func_t destroy);
# 281 "../../src/hb-font.h"
void
hb_font_funcs_set_glyph_contour_point_func (hb_font_funcs_t *ffuncs,
         hb_font_get_glyph_contour_point_func_t func,
         void *user_data, hb_destroy_func_t destroy);
# 297 "../../src/hb-font.h"
void
hb_font_funcs_set_glyph_name_func (hb_font_funcs_t *ffuncs,
       hb_font_get_glyph_name_func_t func,
       void *user_data, hb_destroy_func_t destroy);
# 313 "../../src/hb-font.h"
void
hb_font_funcs_set_glyph_from_name_func (hb_font_funcs_t *ffuncs,
     hb_font_get_glyph_from_name_func_t func,
     void *user_data, hb_destroy_func_t destroy);




hb_bool_t
hb_font_get_glyph (hb_font_t *font,
     hb_codepoint_t unicode, hb_codepoint_t variation_selector,
     hb_codepoint_t *glyph);

hb_position_t
hb_font_get_glyph_h_advance (hb_font_t *font,
        hb_codepoint_t glyph);
hb_position_t
hb_font_get_glyph_v_advance (hb_font_t *font,
        hb_codepoint_t glyph);

hb_bool_t
hb_font_get_glyph_h_origin (hb_font_t *font,
       hb_codepoint_t glyph,
       hb_position_t *x, hb_position_t *y);
hb_bool_t
hb_font_get_glyph_v_origin (hb_font_t *font,
       hb_codepoint_t glyph,
       hb_position_t *x, hb_position_t *y);

hb_position_t
hb_font_get_glyph_h_kerning (hb_font_t *font,
        hb_codepoint_t left_glyph, hb_codepoint_t right_glyph);
hb_position_t
hb_font_get_glyph_v_kerning (hb_font_t *font,
        hb_codepoint_t top_glyph, hb_codepoint_t bottom_glyph);

hb_bool_t
hb_font_get_glyph_extents (hb_font_t *font,
      hb_codepoint_t glyph,
      hb_glyph_extents_t *extents);

hb_bool_t
hb_font_get_glyph_contour_point (hb_font_t *font,
     hb_codepoint_t glyph, unsigned int point_index,
     hb_position_t *x, hb_position_t *y);

hb_bool_t
hb_font_get_glyph_name (hb_font_t *font,
   hb_codepoint_t glyph,
   char *name, unsigned int size);
hb_bool_t
hb_font_get_glyph_from_name (hb_font_t *font,
        const char *name, int len,
        hb_codepoint_t *glyph);




void
hb_font_get_glyph_advance_for_direction (hb_font_t *font,
      hb_codepoint_t glyph,
      hb_direction_t direction,
      hb_position_t *x, hb_position_t *y);
void
hb_font_get_glyph_origin_for_direction (hb_font_t *font,
     hb_codepoint_t glyph,
     hb_direction_t direction,
     hb_position_t *x, hb_position_t *y);
void
hb_font_add_glyph_origin_for_direction (hb_font_t *font,
     hb_codepoint_t glyph,
     hb_direction_t direction,
     hb_position_t *x, hb_position_t *y);
void
hb_font_subtract_glyph_origin_for_direction (hb_font_t *font,
          hb_codepoint_t glyph,
          hb_direction_t direction,
          hb_position_t *x, hb_position_t *y);

void
hb_font_get_glyph_kerning_for_direction (hb_font_t *font,
      hb_codepoint_t first_glyph, hb_codepoint_t second_glyph,
      hb_direction_t direction,
      hb_position_t *x, hb_position_t *y);

hb_bool_t
hb_font_get_glyph_extents_for_origin (hb_font_t *font,
          hb_codepoint_t glyph,
          hb_direction_t direction,
          hb_glyph_extents_t *extents);

hb_bool_t
hb_font_get_glyph_contour_point_for_origin (hb_font_t *font,
         hb_codepoint_t glyph, unsigned int point_index,
         hb_direction_t direction,
         hb_position_t *x, hb_position_t *y);


void
hb_font_glyph_to_string (hb_font_t *font,
    hb_codepoint_t glyph,
    char *s, unsigned int size);

hb_bool_t
hb_font_glyph_from_string (hb_font_t *font,
      const char *s, int len,
      hb_codepoint_t *glyph);
# 428 "../../src/hb-font.h"
hb_font_t *
hb_font_create (hb_face_t *face);

hb_font_t *
hb_font_create_sub_font (hb_font_t *parent);

hb_font_t *
hb_font_get_empty (void);

hb_font_t *
hb_font_reference (hb_font_t *font);

void
hb_font_destroy (hb_font_t *font);

hb_bool_t
hb_font_set_user_data (hb_font_t *font,
         hb_user_data_key_t *key,
         void * data,
         hb_destroy_func_t destroy,
         hb_bool_t replace);


void *
hb_font_get_user_data (hb_font_t *font,
         hb_user_data_key_t *key);

void
hb_font_make_immutable (hb_font_t *font);

hb_bool_t
hb_font_is_immutable (hb_font_t *font);

hb_font_t *
hb_font_get_parent (hb_font_t *font);

hb_face_t *
hb_font_get_face (hb_font_t *font);


void
hb_font_set_funcs (hb_font_t *font,
     hb_font_funcs_t *klass,
     void *font_data,
     hb_destroy_func_t destroy);


void
hb_font_set_funcs_data (hb_font_t *font,
          void *font_data,
          hb_destroy_func_t destroy);


void
hb_font_set_scale (hb_font_t *font,
     int x_scale,
     int y_scale);

void
hb_font_get_scale (hb_font_t *font,
     int *x_scale,
     int *y_scale);




void
hb_font_set_ppem (hb_font_t *font,
    unsigned int x_ppem,
    unsigned int y_ppem);

void
hb_font_get_ppem (hb_font_t *font,
    unsigned int *x_ppem,
    unsigned int *y_ppem);


}
# 40 "../../src/hb-buffer.h" 2

extern "C" {


typedef struct hb_glyph_info_t {
  hb_codepoint_t codepoint;
  hb_mask_t mask;
  uint32_t cluster;


  hb_var_int_t var1;
  hb_var_int_t var2;
} hb_glyph_info_t;

typedef struct hb_glyph_position_t {
  hb_position_t x_advance;
  hb_position_t y_advance;
  hb_position_t x_offset;
  hb_position_t y_offset;


  hb_var_int_t var;
} hb_glyph_position_t;


typedef struct hb_segment_properties_t {
  hb_direction_t direction;
  hb_script_t script;
  hb_language_t language;

  void *reserved1;
  void *reserved2;
} hb_segment_properties_t;







hb_bool_t
hb_segment_properties_equal (const hb_segment_properties_t *a,
        const hb_segment_properties_t *b);

unsigned int
hb_segment_properties_hash (const hb_segment_properties_t *p);







typedef struct hb_buffer_t hb_buffer_t;

hb_buffer_t *
hb_buffer_create (void);

hb_buffer_t *
hb_buffer_get_empty (void);

hb_buffer_t *
hb_buffer_reference (hb_buffer_t *buffer);

void
hb_buffer_destroy (hb_buffer_t *buffer);

hb_bool_t
hb_buffer_set_user_data (hb_buffer_t *buffer,
    hb_user_data_key_t *key,
    void * data,
    hb_destroy_func_t destroy,
    hb_bool_t replace);

void *
hb_buffer_get_user_data (hb_buffer_t *buffer,
    hb_user_data_key_t *key);


typedef enum {
  HB_BUFFER_CONTENT_TYPE_INVALID = 0,
  HB_BUFFER_CONTENT_TYPE_UNICODE,
  HB_BUFFER_CONTENT_TYPE_GLYPHS
} hb_buffer_content_type_t;

void
hb_buffer_set_content_type (hb_buffer_t *buffer,
       hb_buffer_content_type_t content_type);

hb_buffer_content_type_t
hb_buffer_get_content_type (hb_buffer_t *buffer);


void
hb_buffer_set_unicode_funcs (hb_buffer_t *buffer,
        hb_unicode_funcs_t *unicode_funcs);

hb_unicode_funcs_t *
hb_buffer_get_unicode_funcs (hb_buffer_t *buffer);

void
hb_buffer_set_direction (hb_buffer_t *buffer,
    hb_direction_t direction);

hb_direction_t
hb_buffer_get_direction (hb_buffer_t *buffer);

void
hb_buffer_set_script (hb_buffer_t *buffer,
        hb_script_t script);

hb_script_t
hb_buffer_get_script (hb_buffer_t *buffer);

void
hb_buffer_set_language (hb_buffer_t *buffer,
   hb_language_t language);


hb_language_t
hb_buffer_get_language (hb_buffer_t *buffer);

void
hb_buffer_set_segment_properties (hb_buffer_t *buffer,
      const hb_segment_properties_t *props);

void
hb_buffer_get_segment_properties (hb_buffer_t *buffer,
      hb_segment_properties_t *props);

void
hb_buffer_guess_segment_properties (hb_buffer_t *buffer);


typedef enum {
  HB_BUFFER_FLAG_DEFAULT = 0x00000000u,
  HB_BUFFER_FLAG_BOT = 0x00000001u,
  HB_BUFFER_FLAG_EOT = 0x00000002u,
  HB_BUFFER_FLAG_PRESERVE_DEFAULT_IGNORABLES = 0x00000004u
} hb_buffer_flags_t;

void
hb_buffer_set_flags (hb_buffer_t *buffer,
       hb_buffer_flags_t flags);

hb_buffer_flags_t
hb_buffer_get_flags (hb_buffer_t *buffer);




void
hb_buffer_reset (hb_buffer_t *buffer);


void
hb_buffer_clear_contents (hb_buffer_t *buffer);


hb_bool_t
hb_buffer_pre_allocate (hb_buffer_t *buffer,
          unsigned int size);



hb_bool_t
hb_buffer_allocation_successful (hb_buffer_t *buffer);

void
hb_buffer_reverse (hb_buffer_t *buffer);

void
hb_buffer_reverse_clusters (hb_buffer_t *buffer);




void
hb_buffer_add (hb_buffer_t *buffer,
        hb_codepoint_t codepoint,
        unsigned int cluster);

void
hb_buffer_add_utf8 (hb_buffer_t *buffer,
      const char *text,
      int text_length,
      unsigned int item_offset,
      int item_length);

void
hb_buffer_add_utf16 (hb_buffer_t *buffer,
       const uint16_t *text,
       int text_length,
       unsigned int item_offset,
       int item_length);

void
hb_buffer_add_utf32 (hb_buffer_t *buffer,
       const uint32_t *text,
       int text_length,
       unsigned int item_offset,
       int item_length);



hb_bool_t
hb_buffer_set_length (hb_buffer_t *buffer,
        unsigned int length);


unsigned int
hb_buffer_get_length (hb_buffer_t *buffer);




hb_glyph_info_t *
hb_buffer_get_glyph_infos (hb_buffer_t *buffer,
                           unsigned int *length);


hb_glyph_position_t *
hb_buffer_get_glyph_positions (hb_buffer_t *buffer,
                               unsigned int *length);





void
hb_buffer_normalize_glyphs (hb_buffer_t *buffer);






typedef enum {
  HB_BUFFER_SERIALIZE_FLAG_DEFAULT = 0x00000000u,
  HB_BUFFER_SERIALIZE_FLAG_NO_CLUSTERS = 0x00000001u,
  HB_BUFFER_SERIALIZE_FLAG_NO_POSITIONS = 0x00000002u,
  HB_BUFFER_SERIALIZE_FLAG_NO_GLYPH_NAMES = 0x00000004u
} hb_buffer_serialize_flags_t;

typedef enum {
  HB_BUFFER_SERIALIZE_FORMAT_TEXT = ((hb_tag_t)((((uint8_t)('T'))<<24)|(((uint8_t)('E'))<<16)|(((uint8_t)('X'))<<8)|((uint8_t)('T')))),
  HB_BUFFER_SERIALIZE_FORMAT_JSON = ((hb_tag_t)((((uint8_t)('J'))<<24)|(((uint8_t)('S'))<<16)|(((uint8_t)('O'))<<8)|((uint8_t)('N')))),
  HB_BUFFER_SERIALIZE_FORMAT_INVALID = ((hb_tag_t)((((uint8_t)(0))<<24)|(((uint8_t)(0))<<16)|(((uint8_t)(0))<<8)|((uint8_t)(0))))
} hb_buffer_serialize_format_t;


hb_buffer_serialize_format_t
hb_buffer_serialize_format_from_string (const char *str, int len);

const char *
hb_buffer_serialize_format_to_string (hb_buffer_serialize_format_t format);

const char **
hb_buffer_serialize_list_formats (void);


unsigned int
hb_buffer_serialize_glyphs (hb_buffer_t *buffer,
       unsigned int start,
       unsigned int end,
       char *buf,
       unsigned int buf_size,
       unsigned int *buf_consumed,
       hb_font_t *font,
       hb_buffer_serialize_format_t format,
       hb_buffer_serialize_flags_t flags);

hb_bool_t
hb_buffer_deserialize_glyphs (hb_buffer_t *buffer,
         const char *buf,
         int buf_len,
         const char **end_ptr,
         hb_font_t *font,
         hb_buffer_serialize_format_t format);


}
# 33 "../../src/hb.h" 2
# 1 "../../src/hb-common.h" 1
# 34 "../../src/hb.h" 2
# 1 "../../src/hb-deprecated.h" 1
# 34 "../../src/hb-deprecated.h"
# 1 "../../src/hb-common.h" 1
# 35 "../../src/hb-deprecated.h" 2
# 1 "../../src/hb-unicode.h" 1
# 36 "../../src/hb-deprecated.h" 2
# 1 "../../src/hb-font.h" 1
# 37 "../../src/hb-deprecated.h" 2

extern "C" {
# 49 "../../src/hb-deprecated.h"
}
# 35 "../../src/hb.h" 2
# 1 "../../src/hb-face.h" 1
# 36 "../../src/hb.h" 2
# 1 "../../src/hb-font.h" 1
# 37 "../../src/hb.h" 2
# 1 "../../src/hb-set.h" 1
# 34 "../../src/hb-set.h"
# 1 "../../src/hb-common.h" 1
# 35 "../../src/hb-set.h" 2

extern "C" {




typedef struct hb_set_t hb_set_t;


hb_set_t *
hb_set_create (void);

hb_set_t *
hb_set_get_empty (void);

hb_set_t *
hb_set_reference (hb_set_t *set);

void
hb_set_destroy (hb_set_t *set);

hb_bool_t
hb_set_set_user_data (hb_set_t *set,
        hb_user_data_key_t *key,
        void * data,
        hb_destroy_func_t destroy,
        hb_bool_t replace);

void *
hb_set_get_user_data (hb_set_t *set,
        hb_user_data_key_t *key);



hb_bool_t
hb_set_allocation_successful (const hb_set_t *set);

void
hb_set_clear (hb_set_t *set);

hb_bool_t
hb_set_is_empty (const hb_set_t *set);

hb_bool_t
hb_set_has (const hb_set_t *set,
     hb_codepoint_t codepoint);



void
hb_set_add (hb_set_t *set,
     hb_codepoint_t codepoint);

void
hb_set_add_range (hb_set_t *set,
    hb_codepoint_t first,
    hb_codepoint_t last);

void
hb_set_del (hb_set_t *set,
     hb_codepoint_t codepoint);

void
hb_set_del_range (hb_set_t *set,
    hb_codepoint_t first,
    hb_codepoint_t last);

hb_bool_t
hb_set_is_equal (const hb_set_t *set,
   const hb_set_t *other);

void
hb_set_set (hb_set_t *set,
     const hb_set_t *other);

void
hb_set_union (hb_set_t *set,
       const hb_set_t *other);

void
hb_set_intersect (hb_set_t *set,
    const hb_set_t *other);

void
hb_set_subtract (hb_set_t *set,
   const hb_set_t *other);

void
hb_set_symmetric_difference (hb_set_t *set,
        const hb_set_t *other);

void
hb_set_invert (hb_set_t *set);

unsigned int
hb_set_get_population (const hb_set_t *set);


hb_codepoint_t
hb_set_get_min (const hb_set_t *set);


hb_codepoint_t
hb_set_get_max (const hb_set_t *set);


hb_bool_t
hb_set_next (const hb_set_t *set,
      hb_codepoint_t *codepoint);


hb_bool_t
hb_set_next_range (const hb_set_t *set,
     hb_codepoint_t *first,
     hb_codepoint_t *last);


}
# 38 "../../src/hb.h" 2
# 1 "../../src/hb-shape.h" 1
# 36 "../../src/hb-shape.h"
# 1 "../../src/hb-common.h" 1
# 37 "../../src/hb-shape.h" 2
# 1 "../../src/hb-buffer.h" 1
# 38 "../../src/hb-shape.h" 2
# 1 "../../src/hb-font.h" 1
# 39 "../../src/hb-shape.h" 2

extern "C" {


typedef struct hb_feature_t {
  hb_tag_t tag;
  uint32_t value;
  unsigned int start;
  unsigned int end;
} hb_feature_t;


hb_bool_t
hb_feature_from_string (const char *str, int len,
   hb_feature_t *feature);



void
hb_feature_to_string (hb_feature_t *feature,
        char *buf, unsigned int size);


void
hb_shape (hb_font_t *font,
   hb_buffer_t *buffer,
   const hb_feature_t *features,
   unsigned int num_features);

hb_bool_t
hb_shape_full (hb_font_t *font,
        hb_buffer_t *buffer,
        const hb_feature_t *features,
        unsigned int num_features,
        const char * const *shaper_list);

const char **
hb_shape_list_shapers (void);


}
# 39 "../../src/hb.h" 2
# 1 "../../src/hb-shape-plan.h" 1
# 34 "../../src/hb-shape-plan.h"
# 1 "../../src/hb-common.h" 1
# 35 "../../src/hb-shape-plan.h" 2
# 1 "../../src/hb-font.h" 1
# 36 "../../src/hb-shape-plan.h" 2

extern "C" {

typedef struct hb_shape_plan_t hb_shape_plan_t;

hb_shape_plan_t *
hb_shape_plan_create (hb_face_t *face,
        const hb_segment_properties_t *props,
        const hb_feature_t *user_features,
        unsigned int num_user_features,
        const char * const *shaper_list);

hb_shape_plan_t *
hb_shape_plan_create_cached (hb_face_t *face,
        const hb_segment_properties_t *props,
        const hb_feature_t *user_features,
        unsigned int num_user_features,
        const char * const *shaper_list);

hb_shape_plan_t *
hb_shape_plan_get_empty (void);

hb_shape_plan_t *
hb_shape_plan_reference (hb_shape_plan_t *shape_plan);

void
hb_shape_plan_destroy (hb_shape_plan_t *shape_plan);

hb_bool_t
hb_shape_plan_set_user_data (hb_shape_plan_t *shape_plan,
        hb_user_data_key_t *key,
        void * data,
        hb_destroy_func_t destroy,
        hb_bool_t replace);

void *
hb_shape_plan_get_user_data (hb_shape_plan_t *shape_plan,
        hb_user_data_key_t *key);


hb_bool_t
hb_shape_plan_execute (hb_shape_plan_t *shape_plan,
         hb_font_t *font,
         hb_buffer_t *buffer,
         const hb_feature_t *features,
         unsigned int num_features);

const char *
hb_shape_plan_get_shaper (hb_shape_plan_t *shape_plan);


}
# 40 "../../src/hb.h" 2
# 1 "../../src/hb-unicode.h" 1
# 41 "../../src/hb.h" 2
# 1 "../../src/hb-version.h" 1
# 34 "../../src/hb-version.h"
# 1 "../../src/hb-common.h" 1
# 35 "../../src/hb-version.h" 2

extern "C" {
# 50 "../../src/hb-version.h"
void
hb_version (unsigned int *major,
     unsigned int *minor,
     unsigned int *micro);

const char *
hb_version_string (void);

hb_bool_t
hb_version_check (unsigned int major,
    unsigned int minor,
    unsigned int micro);


}
# 42 "../../src/hb.h" 2

extern "C" {
}
# 37 "../../src/hb-private.hh" 2


# 1 "../../src/hb-ot.h" 1
# 33 "../../src/hb-ot.h"
# 1 "../../src/hb-ot-layout.h" 1
# 36 "../../src/hb-ot-layout.h"
# 1 "../../src/hb-ot-tag.h" 1
# 36 "../../src/hb-ot-tag.h"
extern "C" {





void
hb_ot_tags_from_script (hb_script_t script,
   hb_tag_t *script_tag_1,
   hb_tag_t *script_tag_2);

hb_script_t
hb_ot_tag_to_script (hb_tag_t tag);

hb_tag_t
hb_ot_tag_from_language (hb_language_t language);

hb_language_t
hb_ot_tag_to_language (hb_tag_t tag);


}
# 37 "../../src/hb-ot-layout.h" 2

extern "C" {
# 51 "../../src/hb-ot-layout.h"
hb_bool_t
hb_ot_layout_has_glyph_classes (hb_face_t *face);

typedef enum {
  HB_OT_LAYOUT_GLYPH_CLASS_UNCLASSIFIED = 0,
  HB_OT_LAYOUT_GLYPH_CLASS_BASE_GLYPH = 1,
  HB_OT_LAYOUT_GLYPH_CLASS_LIGATURE = 2,
  HB_OT_LAYOUT_GLYPH_CLASS_MARK = 3,
  HB_OT_LAYOUT_GLYPH_CLASS_COMPONENT = 4
} hb_ot_layout_glyph_class_t;

hb_ot_layout_glyph_class_t
hb_ot_layout_get_glyph_class (hb_face_t *face,
         hb_codepoint_t glyph);

void
hb_ot_layout_get_glyphs_in_class (hb_face_t *face,
      hb_ot_layout_glyph_class_t klass,
      hb_set_t *glyphs );




unsigned int
hb_ot_layout_get_attach_points (hb_face_t *face,
    hb_codepoint_t glyph,
    unsigned int start_offset,
    unsigned int *point_count ,
    unsigned int *point_array );


unsigned int
hb_ot_layout_get_ligature_carets (hb_font_t *font,
      hb_direction_t direction,
      hb_codepoint_t glyph,
      unsigned int start_offset,
      unsigned int *caret_count ,
      hb_position_t *caret_array );
# 99 "../../src/hb-ot-layout.h"
unsigned int
hb_ot_layout_table_get_script_tags (hb_face_t *face,
        hb_tag_t table_tag,
        unsigned int start_offset,
        unsigned int *script_count ,
        hb_tag_t *script_tags );

hb_bool_t
hb_ot_layout_table_find_script (hb_face_t *face,
    hb_tag_t table_tag,
    hb_tag_t script_tag,
    unsigned int *script_index);


hb_bool_t
hb_ot_layout_table_choose_script (hb_face_t *face,
      hb_tag_t table_tag,
      const hb_tag_t *script_tags,
      unsigned int *script_index,
      hb_tag_t *chosen_script);

unsigned int
hb_ot_layout_table_get_feature_tags (hb_face_t *face,
         hb_tag_t table_tag,
         unsigned int start_offset,
         unsigned int *feature_count ,
         hb_tag_t *feature_tags );

unsigned int
hb_ot_layout_script_get_language_tags (hb_face_t *face,
           hb_tag_t table_tag,
           unsigned int script_index,
           unsigned int start_offset,
           unsigned int *language_count ,
           hb_tag_t *language_tags );

hb_bool_t
hb_ot_layout_script_find_language (hb_face_t *face,
       hb_tag_t table_tag,
       unsigned int script_index,
       hb_tag_t language_tag,
       unsigned int *language_index);

hb_bool_t
hb_ot_layout_language_get_required_feature_index (hb_face_t *face,
        hb_tag_t table_tag,
        unsigned int script_index,
        unsigned int language_index,
        unsigned int *feature_index);

unsigned int
hb_ot_layout_language_get_feature_indexes (hb_face_t *face,
        hb_tag_t table_tag,
        unsigned int script_index,
        unsigned int language_index,
        unsigned int start_offset,
        unsigned int *feature_count ,
        unsigned int *feature_indexes );

unsigned int
hb_ot_layout_language_get_feature_tags (hb_face_t *face,
     hb_tag_t table_tag,
     unsigned int script_index,
     unsigned int language_index,
     unsigned int start_offset,
     unsigned int *feature_count ,
     hb_tag_t *feature_tags );

hb_bool_t
hb_ot_layout_language_find_feature (hb_face_t *face,
        hb_tag_t table_tag,
        unsigned int script_index,
        unsigned int language_index,
        hb_tag_t feature_tag,
        unsigned int *feature_index);

unsigned int
hb_ot_layout_feature_get_lookups (hb_face_t *face,
      hb_tag_t table_tag,
      unsigned int feature_index,
      unsigned int start_offset,
      unsigned int *lookup_count ,
      unsigned int *lookup_indexes );

unsigned int
hb_ot_layout_table_get_lookup_count (hb_face_t *face,
         hb_tag_t table_tag);


void
hb_ot_layout_collect_lookups (hb_face_t *face,
         hb_tag_t table_tag,
         const hb_tag_t *scripts,
         const hb_tag_t *languages,
         const hb_tag_t *features,
         hb_set_t *lookup_indexes );

void
hb_ot_layout_lookup_collect_glyphs (hb_face_t *face,
        hb_tag_t table_tag,
        unsigned int lookup_index,
        hb_set_t *glyphs_before,
        hb_set_t *glyphs_input,
        hb_set_t *glyphs_after,
        hb_set_t *glyphs_output );
# 236 "../../src/hb-ot-layout.h"
hb_bool_t
hb_ot_layout_has_substitution (hb_face_t *face);

hb_bool_t
hb_ot_layout_lookup_would_substitute (hb_face_t *face,
          unsigned int lookup_index,
          const hb_codepoint_t *glyphs,
          unsigned int glyphs_length,
          hb_bool_t zero_context);

void
hb_ot_layout_lookup_substitute_closure (hb_face_t *face,
            unsigned int lookup_index,
            hb_set_t *glyphs
                                     );
# 269 "../../src/hb-ot-layout.h"
hb_bool_t
hb_ot_layout_has_positioning (hb_face_t *face);
# 283 "../../src/hb-ot-layout.h"
hb_bool_t
hb_ot_layout_get_size_params (hb_face_t *face,
         unsigned int *design_size,
         unsigned int *subfamily_id,
         unsigned int *subfamily_name_id,
         unsigned int *range_start,
         unsigned int *range_end );


}
# 34 "../../src/hb-ot.h" 2
# 1 "../../src/hb-ot-tag.h" 1
# 35 "../../src/hb-ot.h" 2
# 1 "../../src/hb-ot-shape.h" 1
# 33 "../../src/hb-ot-shape.h"
# 1 "../../src/hb-ot-layout.h" 1
# 34 "../../src/hb-ot-shape.h" 2
# 1 "../../src/hb-ot-tag.h" 1
# 35 "../../src/hb-ot-shape.h" 2

extern "C" {


void
hb_ot_shape_glyphs_closure (hb_font_t *font,
                hb_buffer_t *buffer,
                const hb_feature_t *features,
                unsigned int num_features,
                hb_set_t *glyphs);

void
hb_ot_shape_plan_collect_lookups (hb_shape_plan_t *shape_plan,
                hb_tag_t table_tag,
                hb_set_t *lookup_indexes );

}
# 36 "../../src/hb-ot.h" 2

extern "C" {

}
# 40 "../../src/hb-private.hh" 2



# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/home/regehr/z/compiler-install/gcc-r126697-install/lib/gcc/x86_64-unknown-linux-gnu/4.3.0/include/stddef.h" 1 3 4
# 214 "/home/regehr/z/compiler-install/gcc-r126697-install/lib/gcc/x86_64-unknown-linux-gnu/4.3.0/include/stddef.h" 3 4
typedef long unsigned int size_t;
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
# 64 "/usr/include/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 27 "/usr/include/bits/byteswap.h" 3 4
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
# 28 "/usr/include/bits/byteswap.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/byteswap.h" 2 3 4






# 1 "/usr/include/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/bits/byteswap.h" 2 3 4
# 44 "/usr/include/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 65 "/usr/include/bits/waitstatus.h" 2 3 4

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
# 95 "/usr/include/stdlib.h" 3 4


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

# 235 "/usr/include/stdlib.h" 3 4
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
# 236 "/usr/include/stdlib.h" 2 3 4



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




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/home/regehr/z/compiler-install/gcc-r126697-install/lib/gcc/x86_64-unknown-linux-gnu/4.3.0/include/stddef.h" 1 3 4
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





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 44 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 30 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/sys/select.h" 2 3 4
# 54 "/usr/include/sys/select.h" 3 4
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
  __attribute__((__warning__ ("bit outside of fd_set selected")));
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
# 271 "/usr/include/sys/types.h" 2 3 4


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









extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));

extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));










extern void *realloc (void *__ptr, size_t __size)
     throw () __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) throw ();




extern void cfree (void *__ptr) throw ();



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/home/regehr/z/compiler-install/gcc-r126697-install/lib/gcc/x86_64-unknown-linux-gnu/4.3.0/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4

extern "C" {





extern void *alloca (size_t __size) throw ();





}
# 493 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));




extern void *aligned_alloc (size_t __alignment, size_t __size)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) __attribute__ ((__warn_unused_result__));




extern void abort (void) throw () __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) throw () __attribute__ ((__nonnull__ (1)));




extern "C++" int at_quick_exit (void (*__func) (void))
     throw () __asm ("at_quick_exit") __attribute__ ((__nonnull__ (1)));









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
# 24 "/usr/include/bits/stdlib-float.h" 3 4

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



     __attribute__((__warning__ ("second argument of realpath must be either NULL or at " "least PATH_MAX bytes long buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
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


     __attribute__ ((__nonnull__ (2))) __attribute__((__warning__ ("ptsname_r called with buflen bigger than " "size of buf")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
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


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) int
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



     __attribute__((__warning__ ("mbstowcs called with dst buffer smaller than len " "* sizeof (wchar_t)")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
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



     __attribute__((__warning__ ("wcstombs called with dst buffer smaller than len")));

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) size_t
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
# 968 "/usr/include/stdlib.h" 3 4
}
# 44 "../../src/hb-private.hh" 2
# 1 "/home/regehr/z/compiler-install/gcc-r126697-install/lib/gcc/x86_64-unknown-linux-gnu/4.3.0/include/stddef.h" 1 3 4
# 152 "/home/regehr/z/compiler-install/gcc-r126697-install/lib/gcc/x86_64-unknown-linux-gnu/4.3.0/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 45 "../../src/hb-private.hh" 2
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4
extern "C" {




# 1 "/home/regehr/z/compiler-install/gcc-r126697-install/lib/gcc/x86_64-unknown-linux-gnu/4.3.0/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4
# 44 "/usr/include/string.h" 3 4


extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 96 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 110 "/usr/include/string.h" 3 4
extern void *rawmemchr (const void *__s, int __c)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 121 "/usr/include/string.h" 3 4
extern void *memrchr (const void *__s, int __c, size_t __n)
      throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (2)));

# 166 "/usr/include/string.h" 3 4
extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) throw () __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 211 "/usr/include/string.h" 3 4

# 236 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 263 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 277 "/usr/include/string.h" 3 4
extern char *strchrnul (const char *__s, int __c)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern size_t strcspn (const char *__s, const char *__reject)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 315 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 342 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));
# 373 "/usr/include/string.h" 3 4
extern char *strcasestr (const char *__haystack, const char *__needle)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));







extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) throw ();

# 438 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2))) __attribute__ ((__warn_unused_result__));





extern char *strerror_l (int __errnum, __locale_t __l) throw ();





extern void __bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 489 "/usr/include/string.h" 3 4
extern char *index (const char *__s, int __c)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 517 "/usr/include/string.h" 3 4
extern char *rindex (const char *__s, int __c)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) throw () __attribute__ ((__const__));




extern int ffsl (long int __l) throw () __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     throw () __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (const char *__s1, const char *__s2,
    __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) throw ();


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) throw () __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));
# 604 "/usr/include/string.h" 3 4
extern char *basename (const char *__filename) throw () __attribute__ ((__nonnull__ (1)));
# 640 "/usr/include/string.h" 3 4
# 1 "/usr/include/bits/string3.h" 1 3 4
# 22 "/usr/include/bits/string3.h" 3 4
extern void __warn_memset_zero_len (void) __attribute__((__warning__ ("memset used with constant zero length parameter; this could be due to transposed parameters")));
# 47 "/usr/include/bits/string3.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
 memcpy (void *__restrict __dest, const void *__restrict __src, size_t __len) throw ()

{
  return __builtin___memcpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
 memmove (void *__dest, const void *__src, size_t __len) throw ()
{
  return __builtin___memmove_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
 mempcpy (void *__restrict __dest, const void *__restrict __src, size_t __len) throw ()

{
  return __builtin___mempcpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}
# 75 "/usr/include/bits/string3.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void *
 memset (void *__dest, int __ch, size_t __len) throw ()
{
  if (__builtin_constant_p (__len) && __len == 0
      && (!__builtin_constant_p (__ch) || __ch != 0))
    {
      __warn_memset_zero_len ();
      return __dest;
    }
  return __builtin___memset_chk (__dest, __ch, __len, __builtin_object_size (__dest, 0));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void
 bcopy (const void *__src, void *__dest, size_t __len) throw ()
{
  (void) __builtin___memmove_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) void
 bzero (void *__dest, size_t __len) throw ()
{
  (void) __builtin___memset_chk (__dest, '\0', __len, __builtin_object_size (__dest, 0));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
 strcpy (char *__restrict __dest, const char *__restrict __src) throw ()
{
  return __builtin___strcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
 stpcpy (char *__restrict __dest, const char *__restrict __src) throw ()
{
  return __builtin___stpcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
 strncpy (char *__restrict __dest, const char *__restrict __src, size_t __len) throw ()

{
  return __builtin___strncpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}


extern char *__stpncpy_chk (char *__dest, const char *__src, size_t __n,
       size_t __destlen) throw ();
extern char *__stpncpy_alias (char *__dest, const char *__src, size_t __n) throw () __asm__ ("" "stpncpy");


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
 stpncpy (char *__dest, const char *__src, size_t __n) throw ()
{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1
      && (!__builtin_constant_p (__n) || __n <= __builtin_object_size (__dest, 2 > 1)))
    return __stpncpy_chk (__dest, __src, __n, __builtin_object_size (__dest, 2 > 1));
  return __stpncpy_alias (__dest, __src, __n);
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
 strcat (char *__restrict __dest, const char *__restrict __src) throw ()
{
  return __builtin___strcat_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) char *
 strncat (char *__restrict __dest, const char *__restrict __src, size_t __len) throw ()

{
  return __builtin___strncat_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}
# 641 "/usr/include/string.h" 2 3 4



}
# 46 "../../src/hb-private.hh" 2
# 1 "/usr/include/assert.h" 1 3 4
# 66 "/usr/include/assert.h" 3 4
extern "C" {


extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     throw () __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     throw () __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     throw () __attribute__ ((__noreturn__));


}
# 47 "../../src/hb-private.hh" 2





# 1 "/usr/include/stdio.h" 1 3 4
# 29 "/usr/include/stdio.h" 3 4
extern "C" {



# 1 "/home/regehr/z/compiler-install/gcc-r126697-install/lib/gcc/x86_64-unknown-linux-gnu/4.3.0/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/home/regehr/z/compiler-install/gcc-r126697-install/lib/gcc/x86_64-unknown-linux-gnu/4.3.0/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
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
# 49 "/usr/include/libio.h" 3 4
# 1 "/home/regehr/z/compiler-install/gcc-r126697-install/lib/gcc/x86_64-unknown-linux-gnu/4.3.0/include/stdarg.h" 1 3 4
# 43 "/home/regehr/z/compiler-install/gcc-r126697-install/lib/gcc/x86_64-unknown-linux-gnu/4.3.0/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 50 "/usr/include/libio.h" 2 3 4
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
# 108 "/usr/include/stdio.h" 3 4


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








extern FILE *tmpfile (void) __attribute__ ((__warn_unused_result__));
# 205 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) __attribute__ ((__warn_unused_result__));



extern char *tmpnam (char *__s) throw () __attribute__ ((__warn_unused_result__));





extern char *tmpnam_r (char *__s) throw () __attribute__ ((__warn_unused_result__));
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__warn_unused_result__));








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 262 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);









extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) __attribute__ ((__warn_unused_result__));




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) __attribute__ ((__warn_unused_result__));
# 295 "/usr/include/stdio.h" 3 4


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








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) __attribute__ ((__warn_unused_result__));




extern int scanf (const char *__restrict __format, ...) __attribute__ ((__warn_unused_result__));

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) throw ();
# 463 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) __attribute__ ((__warn_unused_result__));





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) __attribute__ ((__warn_unused_result__));


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));
# 522 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








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








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) __attribute__ ((__warn_unused_result__));




extern void rewind (FILE *__stream);

# 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) __attribute__ ((__warn_unused_result__));
# 792 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 815 "/usr/include/stdio.h" 3 4



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


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
 sprintf (char *__restrict __s, const char *__restrict __fmt, ...) throw ()
{
  return __builtin___sprintf_chk (__s, 2 - 1,
      __builtin_object_size (__s, 2 > 1), __fmt, __builtin_va_arg_pack ());
}






extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
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


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
 snprintf (char *__restrict __s, size_t __n, const char *__restrict __fmt, ...) throw ()

{
  return __builtin___snprintf_chk (__s, __n, 2 - 1,
       __builtin_object_size (__s, 2 > 1), __fmt, __builtin_va_arg_pack ());
}






extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
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


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
fprintf (FILE *__restrict __stream, const char *__restrict __fmt, ...)
{
  return __fprintf_chk (__stream, 2 - 1, __fmt,
   __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
printf (const char *__restrict __fmt, ...)
{
  return __printf_chk (2 - 1, __fmt, __builtin_va_arg_pack ());
}







extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
vprintf (const char *__restrict __fmt, __gnuc_va_list __ap)
{

  return __vfprintf_chk (stdout, 2 - 1, __fmt, __ap);



}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
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


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
dprintf (int __fd, const char *__restrict __fmt, ...)
{
  return __dprintf_chk (__fd, 2 - 1, __fmt,
   __builtin_va_arg_pack ());
}





extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
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


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
 asprintf (char **__restrict __ptr, const char *__restrict __fmt, ...) throw ()
{
  return __asprintf_chk (__ptr, 2 - 1, __fmt,
    __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
 __asprintf (char **__restrict __ptr, const char *__restrict __fmt, ...) throw ()

{
  return __asprintf_chk (__ptr, 2 - 1, __fmt,
    __builtin_va_arg_pack ());
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
 obstack_printf (struct obstack *__restrict __obstack, const char *__restrict __fmt, ...) throw ()

{
  return __obstack_printf_chk (__obstack, 2 - 1, __fmt,
          __builtin_va_arg_pack ());
}
# 206 "/usr/include/bits/stdio2.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
 vasprintf (char **__restrict __ptr, const char *__restrict __fmt, __gnuc_va_list __ap) throw ()

{
  return __vasprintf_chk (__ptr, 2 - 1, __fmt, __ap);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) int
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


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fgets called with bigger size than length " "of destination buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
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




     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fread called with bigger size * nmemb than length " "of destination buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) size_t
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


     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fgets_unlocked called with bigger size than length " "of destination buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) char *
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




     __attribute__ ((__warn_unused_result__)) __attribute__((__warning__ ("fread_unlocked called with bigger size * nmemb than " "length of destination buffer")));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) __attribute__ ((__artificial__)) __attribute__ ((__warn_unused_result__)) size_t
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
# 53 "../../src/hb-private.hh" 2
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
# 1 "/usr/include/asm/errno.h" 2 3 4
# 1 "/usr/include/linux/errno.h" 2 3 4
# 25 "/usr/include/bits/errno.h" 2 3 4
# 50 "/usr/include/bits/errno.h" 3 4
extern int *__errno_location (void) throw () __attribute__ ((__const__));
# 36 "/usr/include/errno.h" 2 3 4
# 54 "/usr/include/errno.h" 3 4
extern char *program_invocation_name, *program_invocation_short_name;



}
# 68 "/usr/include/errno.h" 3 4
typedef int error_t;
# 54 "../../src/hb-private.hh" 2
# 1 "/home/regehr/z/compiler-install/gcc-r126697-install/lib/gcc/x86_64-unknown-linux-gnu/4.3.0/include/stdarg.h" 1 3 4
# 55 "../../src/hb-private.hh" 2
# 66 "../../src/hb-private.hh"
struct _hb_void_t {};
typedef const _hb_void_t &hb_void_t;







template <typename Type>
static inline Type MIN (const Type &a, const Type &b) { return a < b ? a : b; }


template <typename Type>
static inline Type MAX (const Type &a, const Type &b) { return a > b ? a : b; }

static inline unsigned int DIV_CEIL (const unsigned int a, unsigned int b)
{ return (a + (b - 1)) / b; }



template <typename Type, unsigned int n>
static inline unsigned int ARRAY_LENGTH (const Type (&)[n]) { return n; }
# 107 "../../src/hb-private.hh"
typedef int _static_assert_on_line_107_failed[(((sizeof (int8_t) == 1)))?1:-1];
typedef int _static_assert_on_line_108_failed[(((sizeof (uint8_t) == 1)))?1:-1];
typedef int _static_assert_on_line_109_failed[(((sizeof (int16_t) == 2)))?1:-1];
typedef int _static_assert_on_line_110_failed[(((sizeof (uint16_t) == 2)))?1:-1];
typedef int _static_assert_on_line_111_failed[(((sizeof (int32_t) == 4)))?1:-1];
typedef int _static_assert_on_line_112_failed[(((sizeof (uint32_t) == 4)))?1:-1];
typedef int _static_assert_on_line_113_failed[(((sizeof (int64_t) == 8)))?1:-1];
typedef int _static_assert_on_line_114_failed[(((sizeof (uint64_t) == 8)))?1:-1];

typedef int _static_assert_on_line_116_failed[(((sizeof (hb_codepoint_t) == 4)))?1:-1];
typedef int _static_assert_on_line_117_failed[(((sizeof (hb_position_t) == 4)))?1:-1];
typedef int _static_assert_on_line_118_failed[(((sizeof (hb_mask_t) == 4)))?1:-1];
typedef int _static_assert_on_line_119_failed[(((sizeof (hb_var_int_t) == 4)))?1:-1];
# 215 "../../src/hb-private.hh"
static __inline__ __attribute__((const)) unsigned int
_hb_popcount32 (uint32_t mask)
{

  return __builtin_popcount (mask);







}


static __inline__ __attribute__((const)) unsigned int
_hb_bit_storage (unsigned int number)
{

  return (__builtin_expect (((number) ? 1 : 0), 1)) ? (sizeof (unsigned int) * 8 - __builtin_clz (number)) : 0;
# 243 "../../src/hb-private.hh"
}


static __inline__ __attribute__((const)) unsigned int
_hb_ctz (unsigned int number)
{

  return (__builtin_expect (((number) ? 1 : 0), 1)) ? __builtin_ctz (number) : 0;
# 260 "../../src/hb-private.hh"
}

static __inline__ bool
_hb_unsigned_int_mul_overflows (unsigned int count, unsigned int size)
{
  return (size > 0) && (count >= ((unsigned int) -1) / size);
}



typedef int (*hb_compare_func_t) (const void *, const void *);
# 279 "../../src/hb-private.hh"
template <typename Type, unsigned int StaticSize>
struct hb_prealloced_array_t
{
  unsigned int len;
  unsigned int allocated;
  Type *array;
  Type static_array[StaticSize];

  void init (void) { memset (this, 0, sizeof (*this)); }

  __inline__ Type& operator [] (unsigned int i) { return array[i]; }
  __inline__ const Type& operator [] (unsigned int i) const { return array[i]; }

  __inline__ Type *push (void)
  {
    if (!array) {
      array = static_array;
      allocated = ARRAY_LENGTH (static_array);
    }
    if ((__builtin_expect (((len < allocated) ? 1 : 0), 1)))
      return &array[len++];


    unsigned int new_allocated = allocated + (allocated >> 1) + 8;
    Type *new_array = __null;

    if (array == static_array) {
      new_array = (Type *) calloc (new_allocated, sizeof (Type));
      if (new_array)
        memcpy (new_array, array, len * sizeof (Type));
    } else {
      bool overflows = (new_allocated < allocated) || _hb_unsigned_int_mul_overflows (new_allocated, sizeof (Type));
      if ((__builtin_expect (((!overflows) ? 1 : 0), 1))) {
 new_array = (Type *) realloc (array, new_allocated * sizeof (Type));
      }
    }

    if ((__builtin_expect (((!new_array) ? 1 : 0), 0)))
      return __null;

    array = new_array;
    allocated = new_allocated;
    return &array[len++];
  }

  __inline__ void pop (void)
  {
    len--;
  }

  __inline__ void remove (unsigned int i)
  {
     if ((__builtin_expect (((i >= len) ? 1 : 0), 0)))
       return;
     memmove (static_cast<void *> (&array[i]),
       static_cast<void *> (&array[i + 1]),
       (len - i - 1) * sizeof (Type));
     len--;
  }

  __inline__ void shrink (unsigned int l)
  {
     if (l < len)
       len = l;
  }

  template <typename T>
  __inline__ Type *find (T v) {
    for (unsigned int i = 0; i < len; i++)
      if (array[i] == v)
 return &array[i];
    return __null;
  }
  template <typename T>
  __inline__ const Type *find (T v) const {
    for (unsigned int i = 0; i < len; i++)
      if (array[i] == v)
 return &array[i];
    return __null;
  }

  __inline__ void sort (void)
  {
    qsort (array, len, sizeof (Type), (hb_compare_func_t) Type::cmp);
  }

  __inline__ void sort (unsigned int start, unsigned int end)
  {
    qsort (array + start, end - start, sizeof (Type), (hb_compare_func_t) Type::cmp);
  }

  template <typename T>
  __inline__ Type *bsearch (T *key)
  {
    return (Type *) ::bsearch (key, array, len, sizeof (Type), (hb_compare_func_t) Type::cmp);
  }
  template <typename T>
  __inline__ const Type *bsearch (T *key) const
  {
    return (const Type *) ::bsearch (key, array, len, sizeof (Type), (hb_compare_func_t) Type::cmp);
  }

  __inline__ void finish (void)
  {
    if (array != static_array)
      free (array);
    array = __null;
    allocated = len = 0;
  }
};


template <typename Type>
struct hb_auto_array_t : hb_prealloced_array_t <Type, 16>
{
  hb_auto_array_t (void) { hb_prealloced_array_t<Type, 16>::init (); }
  ~hb_auto_array_t (void) { hb_prealloced_array_t<Type, 16>::finish (); }
};



template <typename item_t, typename lock_t>
struct hb_lockable_set_t
{
  hb_prealloced_array_t <item_t, 2> items;

  __inline__ void init (void) { items.init (); }

  template <typename T>
  __inline__ item_t *replace_or_insert (T v, lock_t &l, bool replace)
  {
    l.lock ();
    item_t *item = items.find (v);
    if (item) {
      if (replace) {
 item_t old = *item;
 *item = v;
 l.unlock ();
 old.finish ();
      }
      else {
        item = __null;
 l.unlock ();
      }
    } else {
      item = items.push ();
      if ((__builtin_expect (((item) ? 1 : 0), 1)))
 *item = v;
      l.unlock ();
    }
    return item;
  }

  template <typename T>
  __inline__ void remove (T v, lock_t &l)
  {
    l.lock ();
    item_t *item = items.find (v);
    if (item) {
      item_t old = *item;
      *item = items[items.len - 1];
      items.pop ();
      l.unlock ();
      old.finish ();
    } else {
      l.unlock ();
    }
  }

  template <typename T>
  __inline__ bool find (T v, item_t *i, lock_t &l)
  {
    l.lock ();
    item_t *item = items.find (v);
    if (item)
      *i = *item;
    l.unlock ();
    return !!item;
  }

  template <typename T>
  __inline__ item_t *find_or_insert (T v, lock_t &l)
  {
    l.lock ();
    item_t *item = items.find (v);
    if (!item) {
      item = items.push ();
      if ((__builtin_expect (((item) ? 1 : 0), 1)))
        *item = v;
    }
    l.unlock ();
    return item;
  }

  __inline__ void finish (lock_t &l)
  {
    if (!items.len) {

      items.finish ();
      return;
    }
    l.lock ();
    while (items.len) {
      item_t old = items[items.len - 1];
 items.pop ();
 l.unlock ();
 old.finish ();
 l.lock ();
    }
    items.finish ();
    l.unlock ();
  }

};






static __inline__ uint16_t hb_be_uint16 (const uint16_t v)
{
  const uint8_t *V = (const uint8_t *) &v;
  return (V[0] << 8) | V[1];
}

static __inline__ uint16_t hb_uint16_swap (const uint16_t v)
{
  return (v >> 8) | (v << 8);
}

static __inline__ uint32_t hb_uint32_swap (const uint32_t v)
{
  return (hb_uint16_swap (v) << 16) | hb_uint16_swap (v >> 16);
}
# 538 "../../src/hb-private.hh"
static __inline__ bool ISALPHA (unsigned char c)
{ return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'); }
static __inline__ bool ISALNUM (unsigned char c)
{ return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'); }
static __inline__ bool ISSPACE (unsigned char c)
{ return c == ' ' || c =='\f'|| c =='\n'|| c =='\r'|| c =='\t'|| c =='\v'; }
static __inline__ unsigned char TOUPPER (unsigned char c)
{ return (c >= 'a' && c <= 'z') ? c - 'a' + 'A' : c; }
static __inline__ unsigned char TOLOWER (unsigned char c)
{ return (c >= 'A' && c <= 'Z') ? c - 'A' + 'a' : c; }
# 570 "../../src/hb-private.hh"
static __inline__ bool
_hb_debug (unsigned int level,
    unsigned int max_level)
{
  return level < max_level;
}




template <int max_level> static __inline__ void
_hb_debug_msg_va (const char *what,
    const void *obj,
    const char *func,
    bool indented,
    unsigned int level,
    int level_dir,
    const char *message,
    va_list ap)
{
  if (!_hb_debug (level, max_level))
    return;

  fprintf (stderr, "%-10s", what ? what : "");

  if (obj)
    fprintf (stderr, "(%0*lx) ", (unsigned int) (2 * sizeof (void *)), (unsigned long) obj);
  else
    fprintf (stderr, " %*s  ", (unsigned int) (2 * sizeof (void *)), "");

  if (indented) {







    static const char bars[] = "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202" "\342\224\202";
    fprintf (stderr, "%2u %s" "\342\224\234" "%s",
      level,
      bars + sizeof (bars) - 1 - MIN ((unsigned int) sizeof (bars), (unsigned int) (sizeof ("\342\224\202") - 1) * level),
      level_dir ? (level_dir > 0 ? "\342\225\256" : "\342\225\257") : "\342\225\264");
  } else
    fprintf (stderr, "   " "\342\224\234" "\342\225\264");

  if (func)
  {
    unsigned int func_len = strlen (func);


    if (0 == strncmp (func, "typename ", 9))
      func += 9;

    const char *space = strchr (func, ' ');
    if (space)
      func = space + 1;

    const char *paren = strchr (func, '(');
    if (paren)
      func_len = paren - func;

    fprintf (stderr, "%.*s: ", func_len, func);
  }

  if (message)
    vfprintf (stderr, message, ap);

  fprintf (stderr, "\n");
}
template <> __inline__ void
_hb_debug_msg_va<0> (const char *what __attribute__((unused)),
       const void *obj __attribute__((unused)),
       const char *func __attribute__((unused)),
       bool indented __attribute__((unused)),
       unsigned int level __attribute__((unused)),
       int level_dir __attribute__((unused)),
       const char *message __attribute__((unused)),
       va_list ap __attribute__((unused))) {}

template <int max_level> static __inline__ void
_hb_debug_msg (const char *what,
        const void *obj,
        const char *func,
        bool indented,
        unsigned int level,
        int level_dir,
        const char *message,
        ...) __attribute__((__format__ (__printf__, 7, 8)));
template <int max_level> static __inline__ void
_hb_debug_msg (const char *what,
        const void *obj,
        const char *func,
        bool indented,
        unsigned int level,
        int level_dir,
        const char *message,
        ...)
{
  va_list ap;
  __builtin_va_start(ap,message);
  _hb_debug_msg_va<max_level> (what, obj, func, indented, level, level_dir, message, ap);
  __builtin_va_end(ap);
}
template <> __inline__ void
_hb_debug_msg<0> (const char *what __attribute__((unused)),
    const void *obj __attribute__((unused)),
    const char *func __attribute__((unused)),
    bool indented __attribute__((unused)),
    unsigned int level __attribute__((unused)),
    int level_dir __attribute__((unused)),
    const char *message __attribute__((unused)),
    ...) __attribute__((__format__ (__printf__, 7, 8)));
template <> __inline__ void
_hb_debug_msg<0> (const char *what __attribute__((unused)),
    const void *obj __attribute__((unused)),
    const char *func __attribute__((unused)),
    bool indented __attribute__((unused)),
    unsigned int level __attribute__((unused)),
    int level_dir __attribute__((unused)),
    const char *message __attribute__((unused)),
    ...) {}
# 702 "../../src/hb-private.hh"
template <typename T>
struct hb_printer_t {};

template <>
struct hb_printer_t<bool> {
  const char *print (bool v) { return v ? "true" : "false"; }
};

template <>
struct hb_printer_t<hb_void_t> {
  const char *print (hb_void_t) { return ""; }
};






template <typename T>
static __inline__ void _hb_warn_no_return (bool returned)
{
  if ((__builtin_expect (((!returned) ? 1 : 0), 0))) {
    fprintf (stderr, "OUCH, returned with no call to TRACE_RETURN.  This is a bug, please report.\n");
  }
}
template <>
__inline__ void _hb_warn_no_return<hb_void_t> (bool returned __attribute__((unused)))
{}

template <int max_level, typename ret_t>
struct hb_auto_trace_t {
  explicit __inline__ hb_auto_trace_t (unsigned int *plevel_,
       const char *what_,
       const void *obj_,
       const char *func,
       const char *message,
       ...) : plevel (plevel_), what (what_), obj (obj_), returned (false)
  {
    if (plevel) ++*plevel;

    va_list ap;
    __builtin_va_start(ap,message);
    _hb_debug_msg_va<max_level> (what, obj, func, true, plevel ? *plevel : 0, +1, message, ap);
    __builtin_va_end(ap);
  }
  __inline__ ~hb_auto_trace_t (void)
  {
    _hb_warn_no_return<ret_t> (returned);
    if (!returned) {
      _hb_debug_msg<max_level> (what, obj, __null, true, plevel ? *plevel : 1, -1, " ");
    }
    if (plevel) --*plevel;
  }

  __inline__ ret_t ret (ret_t v, unsigned int line = 0)
  {
    if ((__builtin_expect (((returned) ? 1 : 0), 0))) {
      fprintf (stderr, "OUCH, double calls to TRACE_RETURN.  This is a bug, please report.\n");
      return v;
    }

    _hb_debug_msg<max_level> (what, obj, __null, true, plevel ? *plevel : 1, -1,
         "return %s (line %d)",
         hb_printer_t<ret_t>().print (v), line);
    if (plevel) --*plevel;
    plevel = __null;
    returned = true;
    return v;
  }

  private:
  unsigned int *plevel;
  const char *what;
  const void *obj;
  bool returned;
};
template <typename ret_t>
struct hb_auto_trace_t<0, ret_t> {
  explicit __inline__ hb_auto_trace_t (unsigned int *plevel_ __attribute__((unused)),
       const char *what __attribute__((unused)),
       const void *obj __attribute__((unused)),
       const char *func __attribute__((unused)),
       const char *message __attribute__((unused)),
       ...) {}

  __inline__ ret_t ret (ret_t v, unsigned int line __attribute__((unused)) = 0) { return v; }
};
# 799 "../../src/hb-private.hh"
template <typename T> static __inline__ bool
hb_in_range (T u, T lo, T hi)
{
  if ( ((lo^hi) & lo) == 0 &&
       ((lo^hi) & hi) == (lo^hi) &&
       ((lo^hi) & ((lo^hi) + 1)) == 0 )
    return (u & ~(lo^hi)) == lo;
  else
    return lo <= u && u <= hi;
}

template <typename T> static __inline__ bool
hb_in_ranges (T u, T lo1, T hi1, T lo2, T hi2)
{
  return hb_in_range (u, lo1, hi1) || hb_in_range (u, lo2, hi2);
}

template <typename T> static __inline__ bool
hb_in_ranges (T u, T lo1, T hi1, T lo2, T hi2, T lo3, T hi3)
{
  return hb_in_range (u, lo1, hi1) || hb_in_range (u, lo2, hi2) || hb_in_range (u, lo3, hi3);
}
# 831 "../../src/hb-private.hh"
template <typename T, typename T2> __inline__ void
hb_bubble_sort (T *array, unsigned int len, int(*compar)(const T *, const T *), T2 *array2)
{
  if ((__builtin_expect (((!len) ? 1 : 0), 0)))
    return;

  unsigned int k = len - 1;
  do {
    unsigned int new_k = 0;

    for (unsigned int j = 0; j < k; j++)
      if (compar (&array[j], &array[j+1]) > 0)
      {
        {
   T t;
   t = array[j];
   array[j] = array[j + 1];
   array[j + 1] = t;
 }
        if (array2)
        {
   T2 t;
   t = array2[j];
   array2[j] = array2[j + 1];
   array2[j + 1] = t;
 }

 new_k = j;
      }
    k = new_k;
  } while (k);
}

template <typename T> __inline__ void
hb_bubble_sort (T *array, unsigned int len, int(*compar)(const T *, const T *))
{
  hb_bubble_sort (array, len, compar, (int *) __null);
}

static __inline__ hb_bool_t
hb_codepoint_parse (const char *s, unsigned int len, int base, hb_codepoint_t *out)
{

  char buf[64];
  len = MIN (ARRAY_LENGTH (buf) - 1, len);
  strncpy (buf, s, len);
  buf[len] = '\0';

  char *end;
  (*__errno_location ()) = 0;
  unsigned long v = strtoul (buf, &end, base);
  if ((*__errno_location ())) return false;
  if (*end) return false;
  *out = v;
  return true;
}




struct hb_options_t
{
  int initialized : 1;
  int uniscribe_bug_compatible : 1;
};

union hb_options_union_t {
  int i;
  hb_options_t opts;
};
typedef int _static_assert_on_line_901_failed[(((sizeof (int) == sizeof (hb_options_union_t))))?1:-1];

__attribute__((__visibility__("hidden"))) void
_hb_options_init (void);

extern __attribute__((__visibility__("hidden"))) hb_options_union_t _hb_options;

static __inline__ hb_options_t
hb_options (void)
{
  if ((__builtin_expect (((!_hb_options.i) ? 1 : 0), 0)))
    _hb_options_init ();

  return _hb_options.opts;
}
# 31 "../../src/hb-ot-shape-normalize-private.hh" 2





struct hb_ot_shape_plan_t;

enum hb_ot_shape_normalization_mode_t {
  HB_OT_SHAPE_NORMALIZATION_MODE_NONE,
  HB_OT_SHAPE_NORMALIZATION_MODE_DECOMPOSED,
  HB_OT_SHAPE_NORMALIZATION_MODE_COMPOSED_DIACRITICS,
  HB_OT_SHAPE_NORMALIZATION_MODE_COMPOSED_DIACRITICS_NO_SHORT_CIRCUIT,

  HB_OT_SHAPE_NORMALIZATION_MODE_DEFAULT = HB_OT_SHAPE_NORMALIZATION_MODE_COMPOSED_DIACRITICS
};

__attribute__((__visibility__("hidden"))) void _hb_ot_shape_normalize (const hb_ot_shape_plan_t *shaper,
      hb_buffer_t *buffer,
      hb_font_t *font);


struct hb_ot_shape_normalize_context_t
{
  const hb_ot_shape_plan_t *plan;
  hb_buffer_t *buffer;
  hb_font_t *font;
  hb_unicode_funcs_t *unicode;
  bool (*decompose) (const hb_ot_shape_normalize_context_t *c,
       hb_codepoint_t ab,
       hb_codepoint_t *a,
       hb_codepoint_t *b);
  bool (*compose) (const hb_ot_shape_normalize_context_t *c,
     hb_codepoint_t a,
     hb_codepoint_t b,
     hb_codepoint_t *ab);
};
# 28 "../../src/hb-ot-shape-normalize.cc" 2
# 1 "../../src/hb-ot-shape-complex-private.hh" 1
# 32 "../../src/hb-ot-shape-complex-private.hh"
# 1 "../../src/hb-ot-shape-private.hh" 1
# 32 "../../src/hb-ot-shape-private.hh"
# 1 "../../src/hb-ot-map-private.hh" 1
# 32 "../../src/hb-ot-map-private.hh"
# 1 "../../src/hb-buffer-private.hh" 1
# 34 "../../src/hb-buffer-private.hh"
# 1 "../../src/hb-object-private.hh" 1
# 37 "../../src/hb-object-private.hh"
# 1 "../../src/hb-atomic-private.hh" 1
# 95 "../../src/hb-atomic-private.hh"
typedef int hb_atomic_int_t;
# 38 "../../src/hb-object-private.hh" 2
# 1 "../../src/hb-mutex-private.hh" 1
# 59 "../../src/hb-mutex-private.hh"
# 1 "/usr/include/pthread.h" 1 3 4
# 23 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/sched.h" 1 3 4
# 28 "/usr/include/sched.h" 3 4
# 1 "/home/regehr/z/compiler-install/gcc-r126697-install/lib/gcc/x86_64-unknown-linux-gnu/4.3.0/include/stddef.h" 1 3 4
# 29 "/usr/include/sched.h" 2 3 4



# 1 "/usr/include/time.h" 1 3 4
# 33 "/usr/include/sched.h" 2 3 4
# 41 "/usr/include/sched.h" 3 4
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







# 1 "/home/regehr/z/compiler-install/gcc-r126697-install/lib/gcc/x86_64-unknown-linux-gnu/4.3.0/include/stddef.h" 1 3 4
# 38 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/bits/time.h" 1 3 4
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
# 131 "/usr/include/time.h" 3 4


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








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;
# 186 "/usr/include/time.h" 3 4



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
# 691 "/usr/include/pthread.h" 3 4
extern void __pthread_register_cancel (__pthread_unwind_buf_t *__buf)
     ;
# 703 "/usr/include/pthread.h" 3 4
extern void __pthread_unregister_cancel (__pthread_unwind_buf_t *__buf)
  ;
# 726 "/usr/include/pthread.h" 3 4
extern void __pthread_register_cancel_defer (__pthread_unwind_buf_t *__buf)
     ;
# 739 "/usr/include/pthread.h" 3 4
extern void __pthread_unregister_cancel_restore (__pthread_unwind_buf_t *__buf)
  ;



extern void __pthread_unwind_next (__pthread_unwind_buf_t *__buf)
     __attribute__ ((__noreturn__))

     __attribute__ ((__weak__))

     ;



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
# 60 "../../src/hb-mutex-private.hh" 2
typedef pthread_mutex_t hb_mutex_impl_t;
# 117 "../../src/hb-mutex-private.hh"
struct hb_mutex_t
{


  hb_mutex_impl_t m;

  __inline__ void init (void) { pthread_mutex_init (&m, __null); }
  __inline__ void lock (void) { pthread_mutex_lock (&m); }
  __inline__ void unlock (void) { pthread_mutex_unlock (&m); }
  __inline__ void finish (void) { pthread_mutex_destroy (&m); }
};
# 39 "../../src/hb-object-private.hh" 2
# 52 "../../src/hb-object-private.hh"
struct hb_reference_count_t
{
  hb_atomic_int_t ref_count;

  __inline__ void init (int v) { ref_count = v; }
  __inline__ int inc (void) { return __sync_fetch_and_add (&(const_cast<hb_atomic_int_t &> (ref_count)), (1)); }
  __inline__ int dec (void) { return __sync_fetch_and_add (&(const_cast<hb_atomic_int_t &> (ref_count)), (-1)); }
  __inline__ void finish (void) { ref_count = ((hb_atomic_int_t) -1); }

  __inline__ bool is_invalid (void) const { return ref_count == ((hb_atomic_int_t) -1); }

};





struct hb_user_data_array_t
{


  struct hb_user_data_item_t {
    hb_user_data_key_t *key;
    void *data;
    hb_destroy_func_t destroy;

    __inline__ bool operator == (hb_user_data_key_t *other_key) const { return key == other_key; }
    __inline__ bool operator == (hb_user_data_item_t &other) const { return key == other.key; }

    void finish (void) { if (destroy) destroy (data); }
  };

  hb_mutex_t lock;
  hb_lockable_set_t<hb_user_data_item_t, hb_mutex_t> items;

  __inline__ void init (void) { lock.init (); items.init (); }

  __attribute__((__visibility__("hidden"))) bool set (hb_user_data_key_t *key,
   void * data,
   hb_destroy_func_t destroy,
   hb_bool_t replace);

  __attribute__((__visibility__("hidden"))) void *get (hb_user_data_key_t *key);

  __inline__ void finish (void) { items.finish (lock); lock.finish (); }
};




struct hb_object_header_t
{
  hb_reference_count_t ref_count;
  hb_user_data_array_t user_data;



  static __inline__ void *create (unsigned int size) {
    hb_object_header_t *obj = (hb_object_header_t *) calloc (1, size);

    if ((__builtin_expect (((obj) ? 1 : 0), 1)))
      obj->init ();

    return obj;
  }

  __inline__ void init (void) {
    ref_count.init (1);
    user_data.init ();
  }

  __inline__ bool is_inert (void) const {
    return (__builtin_expect (((ref_count.is_invalid ()) ? 1 : 0), 0));
  }

  __inline__ void reference (void) {
    if ((__builtin_expect (((!this || this->is_inert ()) ? 1 : 0), 0)))
      return;
    ref_count.inc ();
  }

  __inline__ bool destroy (void) {
    if ((__builtin_expect (((!this || this->is_inert ()) ? 1 : 0), 0)))
      return false;
    if (ref_count.dec () != 1)
      return false;

    ref_count.finish ();
    user_data.finish ();

    return true;
  }

  __inline__ bool set_user_data (hb_user_data_key_t *key,
        void * data,
        hb_destroy_func_t destroy_func,
        hb_bool_t replace) {
    if ((__builtin_expect (((!this || this->is_inert ()) ? 1 : 0), 0)))
      return false;

    return user_data.set (key, data, destroy_func, replace);
  }

  __inline__ void *get_user_data (hb_user_data_key_t *key) {
    if ((__builtin_expect (((!this || this->is_inert ()) ? 1 : 0), 0)))
      return __null;

    return user_data.get (key);
  }

  __inline__ void trace (const char *function) const {
    if ((__builtin_expect (((!this) ? 1 : 0), 0))) return;


    _hb_debug_msg<(0 +0)> ("OBJECT", ((void *) this), __null, false, 0, 0, "%s refcount=%d", function, this ? ref_count.ref_count : 0);



  }

  private:
  __inline__ void _static_assertion_on_line_173 (void) const { do { typedef __typeof__(*this) _type_173; union _type__type_173_on_line_173_is_not_POD { _type_173 instance; }; } while (0); };
};




template <typename Type>
static __inline__ void hb_object_trace (const Type *obj, const char *function)
{
  obj->header.trace (function);
}
template <typename Type>
static __inline__ Type *hb_object_create (void)
{
  Type *obj = (Type *) hb_object_header_t::create (sizeof (Type));
  hb_object_trace (obj, __PRETTY_FUNCTION__);
  return obj;
}
template <typename Type>
static __inline__ bool hb_object_is_inert (const Type *obj)
{
  return (__builtin_expect (((obj->header.is_inert ()) ? 1 : 0), 0));
}
template <typename Type>
static __inline__ Type *hb_object_reference (Type *obj)
{
  hb_object_trace (obj, __PRETTY_FUNCTION__);
  obj->header.reference ();
  return obj;
}
template <typename Type>
static __inline__ bool hb_object_destroy (Type *obj)
{
  hb_object_trace (obj, __PRETTY_FUNCTION__);
  return obj->header.destroy ();
}
template <typename Type>
static __inline__ bool hb_object_set_user_data (Type *obj,
         hb_user_data_key_t *key,
         void * data,
         hb_destroy_func_t destroy,
         hb_bool_t replace)
{
  return obj->header.set_user_data (key, data, destroy, replace);
}

template <typename Type>
static __inline__ void *hb_object_get_user_data (Type *obj,
          hb_user_data_key_t *key)
{
  return obj->header.get_user_data (key);
}
# 35 "../../src/hb-buffer-private.hh" 2
# 1 "../../src/hb-unicode-private.hh" 1
# 38 "../../src/hb-unicode-private.hh"
extern __attribute__((__visibility__("hidden"))) const uint8_t _hb_modified_combining_class[256];
# 64 "../../src/hb-unicode-private.hh"
struct hb_unicode_funcs_t {
  hb_object_header_t header;
  __inline__ void _static_assertion_on_line_66 (void) const { do { typedef __typeof__(*this) _type_66; union _type__type_66_on_line_66_is_not_POD { _type_66 instance; }; } while (0); };

  hb_unicode_funcs_t *parent;

  bool immutable;



__inline__ hb_unicode_combining_class_t combining_class (hb_codepoint_t unicode) { return func.combining_class (this, unicode, user_data.combining_class); } __inline__ unsigned int eastasian_width (hb_codepoint_t unicode) { return func.eastasian_width (this, unicode, user_data.eastasian_width); } __inline__ hb_unicode_general_category_t general_category (hb_codepoint_t unicode) { return func.general_category (this, unicode, user_data.general_category); } __inline__ hb_codepoint_t mirroring (hb_codepoint_t unicode) { return func.mirroring (this, unicode, user_data.mirroring); } __inline__ hb_script_t script (hb_codepoint_t unicode) { return func.script (this, unicode, user_data.script); }


  __inline__ hb_bool_t compose (hb_codepoint_t a, hb_codepoint_t b,
       hb_codepoint_t *ab)
  {
    *ab = 0;
    if ((__builtin_expect (((!a || !b) ? 1 : 0), 0))) return false;
    return func.compose (this, a, b, ab, user_data.compose);
  }

  __inline__ hb_bool_t decompose (hb_codepoint_t ab,
         hb_codepoint_t *a, hb_codepoint_t *b)
  {
    *a = ab; *b = 0;
    return func.decompose (this, ab, a, b, user_data.decompose);
  }

  __inline__ unsigned int decompose_compatibility (hb_codepoint_t u,
            hb_codepoint_t *decomposed)
  {
    unsigned int ret = func.decompose_compatibility (this, u, decomposed, user_data.decompose_compatibility);
    if (ret == 1 && u == decomposed[0]) {
      decomposed[0] = 0;
      return 0;
    }
    decomposed[ret] = 0;
    return ret;
  }


  unsigned int
  modified_combining_class (hb_codepoint_t unicode)
  {

    if ((__builtin_expect (((unicode == 0x1037) ? 1 : 0), 0))) unicode = 0x103A;



    if ((__builtin_expect (((unicode == 0x1A60) ? 1 : 0), 0))) return 254;

    return _hb_modified_combining_class[combining_class (unicode)];
  }

  __inline__ hb_bool_t
  is_variation_selector (hb_codepoint_t unicode)
  {
    return (__builtin_expect (((hb_in_ranges<hb_codepoint_t> (unicode, 0x180B, 0x180D, 0xFE00, 0xFE0F, 0xE0100, 0xE01EF)) ? 1 : 0), 0));



  }
# 170 "../../src/hb-unicode-private.hh"
  __inline__ hb_bool_t
  is_default_ignorable (hb_codepoint_t ch)
  {
    hb_codepoint_t plane = ch >> 16;
    if ((__builtin_expect (((plane == 0) ? 1 : 0), 1)))
    {

      hb_codepoint_t page = ch >> 8;
      switch (page) {
 case 0x00: return (__builtin_expect (((ch == 0x00AD) ? 1 : 0), 0));
 case 0x03: return (__builtin_expect (((ch == 0x034F) ? 1 : 0), 0));
 case 0x06: return (__builtin_expect (((ch == 0x061C) ? 1 : 0), 0));
 case 0x17: return hb_in_range<hb_codepoint_t> (ch, 0x17B4, 0x17B5);
 case 0x18: return hb_in_range<hb_codepoint_t> (ch, 0x180B, 0x180E);
 case 0x20: return hb_in_ranges<hb_codepoint_t> (ch, 0x200B, 0x200F,
           0x202A, 0x202E,
           0x2060, 0x206F);
 case 0xFE: return hb_in_range<hb_codepoint_t> (ch, 0xFE00, 0xFE0F) || ch == 0xFEFF;
 case 0xFF: return hb_in_range<hb_codepoint_t> (ch, 0xFFF0, 0xFFF8);
 default: return false;
      }
    }
    else
    {

      switch (plane) {
 case 0x01: return hb_in_range<hb_codepoint_t> (ch, 0x0001D173, 0x0001D17A);
 case 0x0E: return hb_in_range<hb_codepoint_t> (ch, 0x000E0000, 0x000E0FFF);
 default: return false;
      }
    }
  }


  struct {

    hb_unicode_combining_class_func_t combining_class; hb_unicode_eastasian_width_func_t eastasian_width; hb_unicode_general_category_func_t general_category; hb_unicode_mirroring_func_t mirroring; hb_unicode_script_func_t script; hb_unicode_compose_func_t compose; hb_unicode_decompose_func_t decompose; hb_unicode_decompose_compatibility_func_t decompose_compatibility;

  } func;

  struct {

    void *combining_class; void *eastasian_width; void *general_category; void *mirroring; void *script; void *compose; void *decompose; void *decompose_compatibility;

  } user_data;

  struct {

    hb_destroy_func_t combining_class; hb_destroy_func_t eastasian_width; hb_destroy_func_t general_category; hb_destroy_func_t mirroring; hb_destroy_func_t script; hb_destroy_func_t compose; hb_destroy_func_t decompose; hb_destroy_func_t decompose_compatibility;

  } destroy;
};


extern __attribute__((__visibility__("hidden"))) const hb_unicode_funcs_t _hb_unicode_funcs_nil;
# 36 "../../src/hb-buffer-private.hh" 2


typedef int _static_assert_on_line_38_failed[(((sizeof (hb_glyph_info_t) == 20)))?1:-1];
typedef int _static_assert_on_line_39_failed[(((sizeof (hb_glyph_info_t) == sizeof (hb_glyph_position_t))))?1:-1];






struct hb_buffer_t {
  hb_object_header_t header;
  __inline__ void _static_assertion_on_line_48 (void) const { do { typedef __typeof__(*this) _type_48; union _type__type_48_on_line_48_is_not_POD { _type_48 instance; }; } while (0); };



  hb_unicode_funcs_t *unicode;
  hb_segment_properties_t props;
  hb_buffer_flags_t flags;



  hb_buffer_content_type_t content_type;

  bool in_error;
  bool have_output;
  bool have_positions;

  unsigned int idx;
  unsigned int len;
  unsigned int out_len;

  unsigned int allocated;
  hb_glyph_info_t *info;
  hb_glyph_info_t *out_info;
  hb_glyph_position_t *pos;

  __inline__ hb_glyph_info_t &cur (unsigned int i = 0) { return info[idx + i]; }
  __inline__ hb_glyph_info_t cur (unsigned int i = 0) const { return info[idx + i]; }

  __inline__ hb_glyph_position_t &cur_pos (unsigned int i = 0) { return pos[idx + i]; }
  __inline__ hb_glyph_position_t cur_pos (unsigned int i = 0) const { return pos[idx + i]; }

  __inline__ hb_glyph_info_t &prev (void) { return out_info[out_len - 1]; }
  __inline__ hb_glyph_info_t prev (void) const { return info[out_len - 1]; }

  __inline__ bool has_separate_output (void) const { return info != out_info; }

  unsigned int serial;


  uint8_t allocated_var_bytes[8];
  const char *allocated_var_owner[8];




  static const unsigned int CONTEXT_LENGTH = 5;
  hb_codepoint_t context[2][CONTEXT_LENGTH];
  unsigned int context_len[2];




  __attribute__((__visibility__("hidden"))) void reset (void);
  __attribute__((__visibility__("hidden"))) void clear (void);

  __inline__ unsigned int backtrack_len (void) const
  { return have_output? out_len : idx; }
  __inline__ unsigned int lookahead_len (void) const
  { return len - idx; }
  __inline__ unsigned int next_serial (void) { return serial++; }

  __attribute__((__visibility__("hidden"))) void allocate_var (unsigned int byte_i, unsigned int count, const char *owner);
  __attribute__((__visibility__("hidden"))) void deallocate_var (unsigned int byte_i, unsigned int count, const char *owner);
  __attribute__((__visibility__("hidden"))) void assert_var (unsigned int byte_i, unsigned int count, const char *owner);
  __attribute__((__visibility__("hidden"))) void deallocate_var_all (void);

  __attribute__((__visibility__("hidden"))) void add (hb_codepoint_t codepoint,
   unsigned int cluster);
  __attribute__((__visibility__("hidden"))) void add_info (const hb_glyph_info_t &glyph_info);

  __attribute__((__visibility__("hidden"))) void reverse_range (unsigned int start, unsigned int end);
  __attribute__((__visibility__("hidden"))) void reverse (void);
  __attribute__((__visibility__("hidden"))) void reverse_clusters (void);
  __attribute__((__visibility__("hidden"))) void guess_segment_properties (void);

  __attribute__((__visibility__("hidden"))) void swap_buffers (void);
  __attribute__((__visibility__("hidden"))) void remove_output (void);
  __attribute__((__visibility__("hidden"))) void clear_output (void);
  __attribute__((__visibility__("hidden"))) void clear_positions (void);

  __attribute__((__visibility__("hidden"))) void replace_glyphs (unsigned int num_in,
       unsigned int num_out,
       const hb_codepoint_t *glyph_data);

  __attribute__((__visibility__("hidden"))) void replace_glyph (hb_codepoint_t glyph_index);

  __attribute__((__visibility__("hidden"))) void output_glyph (hb_codepoint_t glyph_index);
  __attribute__((__visibility__("hidden"))) void output_info (const hb_glyph_info_t &glyph_info);

  __attribute__((__visibility__("hidden"))) void copy_glyph (void);
  __attribute__((__visibility__("hidden"))) bool move_to (unsigned int i);


  __inline__ void
  next_glyph (void)
  {
    if (have_output)
    {
      if ((__builtin_expect (((out_info != info || out_len != idx) ? 1 : 0), 0))) {
 if ((__builtin_expect (((!make_room_for (1, 1)) ? 1 : 0), 0))) return;
 out_info[out_len] = info[idx];
      }
      out_len++;
    }

    idx++;
  }


  __inline__ void skip_glyph (void) { idx++; }

  __inline__ void reset_masks (hb_mask_t mask)
  {
    for (unsigned int j = 0; j < len; j++)
      info[j].mask = mask;
  }
  __inline__ void add_masks (hb_mask_t mask)
  {
    for (unsigned int j = 0; j < len; j++)
      info[j].mask |= mask;
  }
  __attribute__((__visibility__("hidden"))) void set_masks (hb_mask_t value,
         hb_mask_t mask,
         unsigned int cluster_start,
         unsigned int cluster_end);

  __attribute__((__visibility__("hidden"))) void merge_clusters (unsigned int start,
       unsigned int end);
  __attribute__((__visibility__("hidden"))) void merge_out_clusters (unsigned int start,
           unsigned int end);


  __attribute__((__visibility__("hidden"))) bool enlarge (unsigned int size);

  __inline__ bool ensure (unsigned int size)
  { return (__builtin_expect (((!size || size < allocated) ? 1 : 0), 1)) ? true : enlarge (size); }

  __attribute__((__visibility__("hidden"))) bool make_room_for (unsigned int num_in, unsigned int num_out);
  __attribute__((__visibility__("hidden"))) bool shift_forward (unsigned int count);

  typedef long scratch_buffer_t;
  __attribute__((__visibility__("hidden"))) scratch_buffer_t *get_scratch_buffer (unsigned int *size);

  __inline__ void clear_context (unsigned int side) { context_len[side] = 0; }
};
# 33 "../../src/hb-ot-map-private.hh" 2


struct hb_ot_shape_plan_t;

static const hb_tag_t table_tags[2] = {((hb_tag_t)((((uint8_t)('G'))<<24)|(((uint8_t)('S'))<<16)|(((uint8_t)('U'))<<8)|((uint8_t)('B')))), ((hb_tag_t)((((uint8_t)('G'))<<24)|(((uint8_t)('P'))<<16)|(((uint8_t)('O'))<<8)|((uint8_t)('S'))))};

struct hb_ot_map_t
{
  friend struct hb_ot_map_builder_t;

  public:

  struct feature_map_t {
    hb_tag_t tag;
    unsigned int index[2];
    unsigned int stage[2];
    unsigned int shift;
    hb_mask_t mask;
    hb_mask_t _1_mask;
    unsigned int needs_fallback : 1;
    unsigned int auto_zwj : 1;

    static int cmp (const feature_map_t *a, const feature_map_t *b)
    { return a->tag < b->tag ? -1 : a->tag > b->tag ? 1 : 0; }
  };

  struct lookup_map_t {
    unsigned short index;
    unsigned short auto_zwj : 1;
    hb_mask_t mask;

    static int cmp (const lookup_map_t *a, const lookup_map_t *b)
    { return a->index < b->index ? -1 : a->index > b->index ? 1 : 0; }
  };

  typedef void (*pause_func_t) (const struct hb_ot_shape_plan_t *plan, hb_font_t *font, hb_buffer_t *buffer);

  struct stage_map_t {
    unsigned int last_lookup;
    pause_func_t pause_func;
  };


  hb_ot_map_t (void) { memset (this, 0, sizeof (*this)); }

  __inline__ hb_mask_t get_global_mask (void) const { return global_mask; }

  __inline__ hb_mask_t get_mask (hb_tag_t feature_tag, unsigned int *shift = __null) const {
    const feature_map_t *map = features.bsearch (&feature_tag);
    if (shift) *shift = map ? map->shift : 0;
    return map ? map->mask : 0;
  }

  __inline__ bool needs_fallback (hb_tag_t feature_tag) const {
    const feature_map_t *map = features.bsearch (&feature_tag);
    return map ? map->needs_fallback : false;
  }

  __inline__ hb_mask_t get_1_mask (hb_tag_t feature_tag) const {
    const feature_map_t *map = features.bsearch (&feature_tag);
    return map ? map->_1_mask : 0;
  }

  __inline__ unsigned int get_feature_index (unsigned int table_index, hb_tag_t feature_tag) const {
    const feature_map_t *map = features.bsearch (&feature_tag);
    return map ? map->index[table_index] : ((unsigned int) 0xFFFF);
  }

  __inline__ unsigned int get_feature_stage (unsigned int table_index, hb_tag_t feature_tag) const {
    const feature_map_t *map = features.bsearch (&feature_tag);
    return map ? map->stage[table_index] : (unsigned int) -1;
  }

  __inline__ void get_stage_lookups (unsigned int table_index, unsigned int stage,
     const struct lookup_map_t **plookups, unsigned int *lookup_count) const {
    if ((__builtin_expect (((stage == (unsigned int) -1) ? 1 : 0), 0))) {
      *plookups = __null;
      *lookup_count = 0;
      return;
    }
    ((stage <= stages[table_index].len) ? static_cast<void> (0) : __assert_fail ("stage <= stages[table_index].len", "../../src/hb-ot-map-private.hh", 113, __PRETTY_FUNCTION__));
    unsigned int start = stage ? stages[table_index][stage - 1].last_lookup : 0;
    unsigned int end = stage < stages[table_index].len ? stages[table_index][stage].last_lookup : lookups[table_index].len;
    *plookups = &lookups[table_index][start];
    *lookup_count = end - start;
  }

  __attribute__((__visibility__("hidden"))) void collect_lookups (unsigned int table_index, hb_set_t *lookups) const;
  template <typename Proxy>
  __attribute__((__visibility__("hidden"))) __inline__ void apply (const Proxy &proxy,
     const struct hb_ot_shape_plan_t *plan, hb_font_t *font, hb_buffer_t *buffer) const;
  __attribute__((__visibility__("hidden"))) void substitute (const struct hb_ot_shape_plan_t *plan, hb_font_t *font, hb_buffer_t *buffer) const;
  __attribute__((__visibility__("hidden"))) void position (const struct hb_ot_shape_plan_t *plan, hb_font_t *font, hb_buffer_t *buffer) const;

  __inline__ void finish (void) {
    features.finish ();
    for (unsigned int table_index = 0; table_index < 2; table_index++)
    {
      lookups[table_index].finish ();
      stages[table_index].finish ();
    }
  }

  public:
  hb_tag_t chosen_script[2];
  bool found_script[2];

  private:

  __attribute__((__visibility__("hidden"))) void add_lookups (hb_face_t *face,
    unsigned int table_index,
    unsigned int feature_index,
    hb_mask_t mask,
    bool auto_zwj);

  hb_mask_t global_mask;

  hb_prealloced_array_t<feature_map_t, 8> features;
  hb_prealloced_array_t<lookup_map_t, 32> lookups[2];
  hb_prealloced_array_t<stage_map_t, 4> stages[2];
};

enum hb_ot_map_feature_flags_t {
  F_NONE = 0x0000,
  F_GLOBAL = 0x0001,
  F_HAS_FALLBACK = 0x0002,
  F_MANUAL_ZWJ = 0x0004
};


__inline__ hb_ot_map_feature_flags_t
operator | (hb_ot_map_feature_flags_t l, hb_ot_map_feature_flags_t r)
{ return hb_ot_map_feature_flags_t ((unsigned int) l | (unsigned int) r); }
__inline__ hb_ot_map_feature_flags_t
operator & (hb_ot_map_feature_flags_t l, hb_ot_map_feature_flags_t r)
{ return hb_ot_map_feature_flags_t ((unsigned int) l & (unsigned int) r); }
__inline__ hb_ot_map_feature_flags_t
operator ~ (hb_ot_map_feature_flags_t r)
{ return hb_ot_map_feature_flags_t (~(unsigned int) r); }
__inline__ hb_ot_map_feature_flags_t&
operator |= (hb_ot_map_feature_flags_t &l, hb_ot_map_feature_flags_t r)
{ l = l | r; return l; }
__inline__ hb_ot_map_feature_flags_t&
operator &= (hb_ot_map_feature_flags_t& l, hb_ot_map_feature_flags_t r)
{ l = l & r; return l; }


struct hb_ot_map_builder_t
{
  public:

  __attribute__((__visibility__("hidden"))) hb_ot_map_builder_t (hb_face_t *face_,
       const hb_segment_properties_t *props_);

  __attribute__((__visibility__("hidden"))) void add_feature (hb_tag_t tag, unsigned int value,
    hb_ot_map_feature_flags_t flags);

  __inline__ void add_global_bool_feature (hb_tag_t tag)
  { add_feature (tag, 1, F_GLOBAL); }

  __inline__ void add_gsub_pause (hb_ot_map_t::pause_func_t pause_func)
  { add_pause (0, pause_func); }
  __inline__ void add_gpos_pause (hb_ot_map_t::pause_func_t pause_func)
  { add_pause (1, pause_func); }

  __attribute__((__visibility__("hidden"))) void compile (struct hb_ot_map_t &m);

  __inline__ void finish (void) {
    feature_infos.finish ();
    for (unsigned int table_index = 0; table_index < 2; table_index++)
    {
      stages[table_index].finish ();
    }
  }

  private:

  struct feature_info_t {
    hb_tag_t tag;
    unsigned int seq;
    unsigned int max_value;
    hb_ot_map_feature_flags_t flags;
    unsigned int default_value;
    unsigned int stage[2];

    static int cmp (const feature_info_t *a, const feature_info_t *b)
    { return (a->tag != b->tag) ? (a->tag < b->tag ? -1 : 1) : (a->seq < b->seq ? -1 : 1); }
  };

  struct stage_info_t {
    unsigned int index;
    hb_ot_map_t::pause_func_t pause_func;
  };

  __attribute__((__visibility__("hidden"))) void add_pause (unsigned int table_index, hb_ot_map_t::pause_func_t pause_func);

  public:

  hb_face_t *face;
  hb_segment_properties_t props;

  hb_tag_t chosen_script[2];
  bool found_script[2];
  unsigned int script_index[2], language_index[2];

  private:

  unsigned int current_stage[2];
  hb_prealloced_array_t<feature_info_t, 32> feature_infos;
  hb_prealloced_array_t<stage_info_t, 8> stages[2];
};
# 33 "../../src/hb-ot-shape-private.hh" 2
# 1 "../../src/hb-ot-layout-private.hh" 1
# 34 "../../src/hb-ot-layout-private.hh"
# 1 "../../src/hb-font-private.hh" 1
# 35 "../../src/hb-font-private.hh"
# 1 "../../src/hb-face-private.hh" 1
# 35 "../../src/hb-face-private.hh"
# 1 "../../src/hb-shaper-private.hh" 1
# 32 "../../src/hb-shaper-private.hh"
typedef hb_bool_t hb_shape_func_t (hb_shape_plan_t *shape_plan,
       hb_font_t *font,
       hb_buffer_t *buffer,
       const hb_feature_t *features,
       unsigned int num_features);



# 1 "../../src/hb-shaper-list.hh" 1
# 43 "../../src/hb-shaper-list.hh"
extern "C" __attribute__((__visibility__("hidden"))) hb_shape_func_t _hb_ot_shape;
# 54 "../../src/hb-shaper-list.hh"
extern "C" __attribute__((__visibility__("hidden"))) hb_shape_func_t _hb_fallback_shape;
# 41 "../../src/hb-shaper-private.hh" 2


struct hb_shaper_pair_t {
  char name[16];
  hb_shape_func_t *func;
};

__attribute__((__visibility__("hidden"))) const hb_shaper_pair_t *
_hb_shapers_get (void);



struct hb_shaper_data_t {

# 1 "../../src/hb-shaper-list.hh" 1
# 43 "../../src/hb-shaper-list.hh"
void *ot;
# 54 "../../src/hb-shaper-list.hh"
void *fallback;
# 56 "../../src/hb-shaper-private.hh" 2

};
# 36 "../../src/hb-face-private.hh" 2
# 1 "../../src/hb-shape-plan-private.hh" 1
# 35 "../../src/hb-shape-plan-private.hh"
struct hb_shape_plan_t
{
  hb_object_header_t header;
  __inline__ void _static_assertion_on_line_38 (void) const { do { typedef __typeof__(*this) _type_38; union _type__type_38_on_line_38_is_not_POD { _type_38 instance; }; } while (0); };

  hb_bool_t default_shaper_list;
  hb_face_t *face_unsafe;
  hb_segment_properties_t props;

  hb_shape_func_t *shaper_func;
  const char *shaper_name;

  hb_feature_t *user_features;
  unsigned int num_user_features;

  struct hb_shaper_data_t shaper_data;
};





# 1 "../../src/hb-shaper-list.hh" 1
# 43 "../../src/hb-shaper-list.hh"
struct hb_ot_shaper_shape_plan_data_t; extern "C" __attribute__((__visibility__("hidden"))) struct hb_ot_shaper_shape_plan_data_t * _hb_ot_shaper_shape_plan_data_create (hb_shape_plan_t *shape_plan , const hb_feature_t *user_features , unsigned int num_user_features); extern "C" __attribute__((__visibility__("hidden"))) void _hb_ot_shaper_shape_plan_data_destroy (struct hb_ot_shaper_shape_plan_data_t *data);
# 54 "../../src/hb-shaper-list.hh"
struct hb_fallback_shaper_shape_plan_data_t; extern "C" __attribute__((__visibility__("hidden"))) struct hb_fallback_shaper_shape_plan_data_t * _hb_fallback_shaper_shape_plan_data_create (hb_shape_plan_t *shape_plan , const hb_feature_t *user_features , unsigned int num_user_features); extern "C" __attribute__((__visibility__("hidden"))) void _hb_fallback_shaper_shape_plan_data_destroy (struct hb_fallback_shaper_shape_plan_data_t *data);
# 58 "../../src/hb-shape-plan-private.hh" 2
# 37 "../../src/hb-face-private.hh" 2






struct hb_face_t {
  hb_object_header_t header;
  __inline__ void _static_assertion_on_line_45 (void) const { do { typedef __typeof__(*this) _type_45; union _type__type_45_on_line_45_is_not_POD { _type_45 instance; }; } while (0); };

  hb_bool_t immutable;

  hb_reference_table_func_t reference_table_func;
  void *user_data;
  hb_destroy_func_t destroy;

  unsigned int index;
  mutable unsigned int upem;
  mutable unsigned int num_glyphs;

  struct hb_shaper_data_t shaper_data;

  struct plan_node_t {
    hb_shape_plan_t *shape_plan;
    plan_node_t *next;
  } *shape_plans;


  __inline__ hb_blob_t *reference_table (hb_tag_t tag) const
  {
    hb_blob_t *blob;

    if ((__builtin_expect (((!this || !reference_table_func) ? 1 : 0), 0)))
      return hb_blob_get_empty ();

    blob = reference_table_func ( const_cast<hb_face_t *> (this), tag, user_data);
    if ((__builtin_expect (((!blob) ? 1 : 0), 0)))
      return hb_blob_get_empty ();

    return blob;
  }

  __inline__ __attribute__((pure)) unsigned int get_upem (void) const
  {
    if ((__builtin_expect (((!upem) ? 1 : 0), 0)))
      load_upem ();
    return upem;
  }

  __inline__ unsigned int get_num_glyphs (void) const
  {
    if ((__builtin_expect (((num_glyphs == (unsigned int) -1) ? 1 : 0), 0)))
      load_num_glyphs ();
    return num_glyphs;
  }

  private:
  __attribute__((__visibility__("hidden"))) void load_upem (void) const;
  __attribute__((__visibility__("hidden"))) void load_num_glyphs (void) const;
};

extern __attribute__((__visibility__("hidden"))) const hb_face_t _hb_face_nil;



# 1 "../../src/hb-shaper-list.hh" 1
# 43 "../../src/hb-shaper-list.hh"
struct hb_ot_shaper_face_data_t; extern "C" __attribute__((__visibility__("hidden"))) struct hb_ot_shaper_face_data_t * _hb_ot_shaper_face_data_create (hb_face_t *face ); extern "C" __attribute__((__visibility__("hidden"))) void _hb_ot_shaper_face_data_destroy (struct hb_ot_shaper_face_data_t *data);
# 54 "../../src/hb-shaper-list.hh"
struct hb_fallback_shaper_face_data_t; extern "C" __attribute__((__visibility__("hidden"))) struct hb_fallback_shaper_face_data_t * _hb_fallback_shaper_face_data_create (hb_face_t *face ); extern "C" __attribute__((__visibility__("hidden"))) void _hb_fallback_shaper_face_data_destroy (struct hb_fallback_shaper_face_data_t *data);
# 103 "../../src/hb-face-private.hh" 2
# 36 "../../src/hb-font-private.hh" 2
# 58 "../../src/hb-font-private.hh"
struct hb_font_funcs_t {
  hb_object_header_t header;
  __inline__ void _static_assertion_on_line_60 (void) const { do { typedef __typeof__(*this) _type_60; union _type__type_60_on_line_60_is_not_POD { _type_60 instance; }; } while (0); };

  hb_bool_t immutable;



  struct {

    hb_font_get_glyph_func_t glyph; hb_font_get_glyph_h_advance_func_t glyph_h_advance; hb_font_get_glyph_v_advance_func_t glyph_v_advance; hb_font_get_glyph_h_origin_func_t glyph_h_origin; hb_font_get_glyph_v_origin_func_t glyph_v_origin; hb_font_get_glyph_h_kerning_func_t glyph_h_kerning; hb_font_get_glyph_v_kerning_func_t glyph_v_kerning; hb_font_get_glyph_extents_func_t glyph_extents; hb_font_get_glyph_contour_point_func_t glyph_contour_point; hb_font_get_glyph_name_func_t glyph_name; hb_font_get_glyph_from_name_func_t glyph_from_name;

  } get;

  struct {

    void *glyph; void *glyph_h_advance; void *glyph_v_advance; void *glyph_h_origin; void *glyph_v_origin; void *glyph_h_kerning; void *glyph_v_kerning; void *glyph_extents; void *glyph_contour_point; void *glyph_name; void *glyph_from_name;

  } user_data;

  struct {

    hb_destroy_func_t glyph; hb_destroy_func_t glyph_h_advance; hb_destroy_func_t glyph_v_advance; hb_destroy_func_t glyph_h_origin; hb_destroy_func_t glyph_v_origin; hb_destroy_func_t glyph_h_kerning; hb_destroy_func_t glyph_v_kerning; hb_destroy_func_t glyph_extents; hb_destroy_func_t glyph_contour_point; hb_destroy_func_t glyph_name; hb_destroy_func_t glyph_from_name;

  } destroy;
};







struct hb_font_t {
  hb_object_header_t header;
  __inline__ void _static_assertion_on_line_93 (void) const { do { typedef __typeof__(*this) _type_93; union _type__type_93_on_line_93_is_not_POD { _type_93 instance; }; } while (0); };

  hb_bool_t immutable;

  hb_font_t *parent;
  hb_face_t *face;

  int x_scale;
  int y_scale;

  unsigned int x_ppem;
  unsigned int y_ppem;

  hb_font_funcs_t *klass;
  void *user_data;
  hb_destroy_func_t destroy;

  struct hb_shaper_data_t shaper_data;



  __inline__ hb_position_t em_scale_x (int16_t v) { return em_scale (v, this->x_scale); }
  __inline__ hb_position_t em_scale_y (int16_t v) { return em_scale (v, this->y_scale); }


  __inline__ hb_position_t parent_scale_x_distance (hb_position_t v) {
    if ((__builtin_expect (((parent && parent->x_scale != x_scale) ? 1 : 0), 0)))
      return (hb_position_t) (v * (int64_t) this->x_scale / this->parent->x_scale);
    return v;
  }
  __inline__ hb_position_t parent_scale_y_distance (hb_position_t v) {
    if ((__builtin_expect (((parent && parent->y_scale != y_scale) ? 1 : 0), 0)))
      return (hb_position_t) (v * (int64_t) this->y_scale / this->parent->y_scale);
    return v;
  }
  __inline__ hb_position_t parent_scale_x_position (hb_position_t v) {
    return parent_scale_x_distance (v);
  }
  __inline__ hb_position_t parent_scale_y_position (hb_position_t v) {
    return parent_scale_y_distance (v);
  }

  __inline__ void parent_scale_distance (hb_position_t *x, hb_position_t *y) {
    *x = parent_scale_x_distance (*x);
    *y = parent_scale_y_distance (*y);
  }
  __inline__ void parent_scale_position (hb_position_t *x, hb_position_t *y) {
    *x = parent_scale_x_position (*x);
    *y = parent_scale_y_position (*y);
  }




  __inline__ hb_bool_t has_glyph (hb_codepoint_t unicode)
  {
    hb_codepoint_t glyph;
    return get_glyph (unicode, 0, &glyph);
  }

  __inline__ hb_bool_t get_glyph (hb_codepoint_t unicode, hb_codepoint_t variation_selector,
         hb_codepoint_t *glyph)
  {
    *glyph = 0;
    return klass->get.glyph (this, user_data,
        unicode, variation_selector, glyph,
        klass->user_data.glyph);
  }

  __inline__ hb_position_t get_glyph_h_advance (hb_codepoint_t glyph)
  {
    return klass->get.glyph_h_advance (this, user_data,
           glyph,
           klass->user_data.glyph_h_advance);
  }

  __inline__ hb_position_t get_glyph_v_advance (hb_codepoint_t glyph)
  {
    return klass->get.glyph_v_advance (this, user_data,
           glyph,
           klass->user_data.glyph_v_advance);
  }

  __inline__ hb_bool_t get_glyph_h_origin (hb_codepoint_t glyph,
           hb_position_t *x, hb_position_t *y)
  {
    *x = *y = 0;
    return klass->get.glyph_h_origin (this, user_data,
          glyph, x, y,
          klass->user_data.glyph_h_origin);
  }

  __inline__ hb_bool_t get_glyph_v_origin (hb_codepoint_t glyph,
           hb_position_t *x, hb_position_t *y)
  {
    *x = *y = 0;
    return klass->get.glyph_v_origin (this, user_data,
          glyph, x, y,
          klass->user_data.glyph_v_origin);
  }

  __inline__ hb_position_t get_glyph_h_kerning (hb_codepoint_t left_glyph, hb_codepoint_t right_glyph)
  {
    return klass->get.glyph_h_kerning (this, user_data,
           left_glyph, right_glyph,
           klass->user_data.glyph_h_kerning);
  }

  __inline__ hb_position_t get_glyph_v_kerning (hb_codepoint_t top_glyph, hb_codepoint_t bottom_glyph)
  {
    return klass->get.glyph_v_kerning (this, user_data,
           top_glyph, bottom_glyph,
           klass->user_data.glyph_v_kerning);
  }

  __inline__ hb_bool_t get_glyph_extents (hb_codepoint_t glyph,
          hb_glyph_extents_t *extents)
  {
    memset (extents, 0, sizeof (*extents));
    return klass->get.glyph_extents (this, user_data,
         glyph,
         extents,
         klass->user_data.glyph_extents);
  }

  __inline__ hb_bool_t get_glyph_contour_point (hb_codepoint_t glyph, unsigned int point_index,
         hb_position_t *x, hb_position_t *y)
  {
    *x = *y = 0;
    return klass->get.glyph_contour_point (this, user_data,
        glyph, point_index,
        x, y,
        klass->user_data.glyph_contour_point);
  }

  __inline__ hb_bool_t get_glyph_name (hb_codepoint_t glyph,
       char *name, unsigned int size)
  {
    if (size) *name = '\0';
    return klass->get.glyph_name (this, user_data,
      glyph,
      name, size,
      klass->user_data.glyph_name);
  }

  __inline__ hb_bool_t get_glyph_from_name (const char *name, int len,
     hb_codepoint_t *glyph)
  {
    *glyph = 0;
    if (len == -1) len = strlen (name);
    return klass->get.glyph_from_name (this, user_data,
           name, len,
           glyph,
           klass->user_data.glyph_from_name);
  }




  __inline__ void get_glyph_advance_for_direction (hb_codepoint_t glyph,
            hb_direction_t direction,
            hb_position_t *x, hb_position_t *y)
  {
    if ((__builtin_expect (((((((unsigned int) (direction)) & ~1U) == 4)) ? 1 : 0), 1))) {
      *x = get_glyph_h_advance (glyph);
      *y = 0;
    } else {
      *x = 0;
      *y = get_glyph_v_advance (glyph);
    }
  }


  __inline__ void guess_v_origin_minus_h_origin (hb_codepoint_t glyph,
          hb_position_t *x, hb_position_t *y)
  {
    *x = get_glyph_h_advance (glyph) / 2;


    *y = y_scale;
  }

  __inline__ void get_glyph_origin_for_direction (hb_codepoint_t glyph,
           hb_direction_t direction,
           hb_position_t *x, hb_position_t *y)
  {
    if ((__builtin_expect (((((((unsigned int) (direction)) & ~1U) == 4)) ? 1 : 0), 1)))
    {
      if (!get_glyph_h_origin (glyph, x, y) &&
    get_glyph_v_origin (glyph, x, y))
      {
 hb_position_t dx, dy;
 guess_v_origin_minus_h_origin (glyph, &dx, &dy);
 *x -= dx; *y -= dy;
      }
    }
    else
    {
      if (!get_glyph_v_origin (glyph, x, y) &&
    get_glyph_h_origin (glyph, x, y))
      {
 hb_position_t dx, dy;
 guess_v_origin_minus_h_origin (glyph, &dx, &dy);
 *x += dx; *y += dy;
      }
    }
  }

  __inline__ void add_glyph_origin_for_direction (hb_codepoint_t glyph,
           hb_direction_t direction,
           hb_position_t *x, hb_position_t *y)
  {
    hb_position_t origin_x, origin_y;

    get_glyph_origin_for_direction (glyph, direction, &origin_x, &origin_y);

    *x += origin_x;
    *y += origin_y;
  }

  __inline__ void subtract_glyph_origin_for_direction (hb_codepoint_t glyph,
         hb_direction_t direction,
         hb_position_t *x, hb_position_t *y)
  {
    hb_position_t origin_x, origin_y;

    get_glyph_origin_for_direction (glyph, direction, &origin_x, &origin_y);

    *x -= origin_x;
    *y -= origin_y;
  }

  __inline__ void get_glyph_kerning_for_direction (hb_codepoint_t first_glyph, hb_codepoint_t second_glyph,
            hb_direction_t direction,
            hb_position_t *x, hb_position_t *y)
  {
    if ((__builtin_expect (((((((unsigned int) (direction)) & ~1U) == 4)) ? 1 : 0), 1))) {
      *x = get_glyph_h_kerning (first_glyph, second_glyph);
      *y = 0;
    } else {
      *x = 0;
      *y = get_glyph_v_kerning (first_glyph, second_glyph);
    }
  }

  __inline__ hb_bool_t get_glyph_extents_for_origin (hb_codepoint_t glyph,
       hb_direction_t direction,
       hb_glyph_extents_t *extents)
  {
    hb_bool_t ret = get_glyph_extents (glyph, extents);

    if (ret)
      subtract_glyph_origin_for_direction (glyph, direction, &extents->x_bearing, &extents->y_bearing);

    return ret;
  }

  __inline__ hb_bool_t get_glyph_contour_point_for_origin (hb_codepoint_t glyph, unsigned int point_index,
             hb_direction_t direction,
             hb_position_t *x, hb_position_t *y)
  {
    hb_bool_t ret = get_glyph_contour_point (glyph, point_index, x, y);

    if (ret)
      subtract_glyph_origin_for_direction (glyph, direction, x, y);

    return ret;
  }


  __inline__ void
  glyph_to_string (hb_codepoint_t glyph,
     char *s, unsigned int size)
  {
    if (get_glyph_name (glyph, s, size)) return;

    if (size && snprintf (s, size, "gid%u", glyph) < 0)
      *s = '\0';
  }


  __inline__ hb_bool_t
  glyph_from_string (const char *s, int len,
       hb_codepoint_t *glyph)
  {
    if (get_glyph_from_name (s, len, glyph)) return true;

    if (len == -1) len = strlen (s);


    if (hb_codepoint_parse (s, len, 10, glyph))
      return true;

    if (len > 3)
    {

      if (0 == strncmp (s, "gid", 3) &&
   hb_codepoint_parse (s + 3, len - 3, 10, glyph))
 return true;


      hb_codepoint_t unichar;
      if (0 == strncmp (s, "uni", 3) &&
   hb_codepoint_parse (s + 3, len - 3, 16, &unichar) &&
   get_glyph (unichar, 0, glyph))
 return true;
    }

    return false;
  }

  private:
  __inline__ hb_position_t em_scale (int16_t v, int scale) { return (hb_position_t) (v * (int64_t) scale / face->get_upem ()); }
};



# 1 "../../src/hb-shaper-list.hh" 1
# 43 "../../src/hb-shaper-list.hh"
struct hb_ot_shaper_font_data_t; extern "C" __attribute__((__visibility__("hidden"))) struct hb_ot_shaper_font_data_t * _hb_ot_shaper_font_data_create (hb_font_t *font ); extern "C" __attribute__((__visibility__("hidden"))) void _hb_ot_shaper_font_data_destroy (struct hb_ot_shaper_font_data_t *data);
# 54 "../../src/hb-shaper-list.hh"
struct hb_fallback_shaper_font_data_t; extern "C" __attribute__((__visibility__("hidden"))) struct hb_fallback_shaper_font_data_t * _hb_fallback_shaper_font_data_create (hb_font_t *font ); extern "C" __attribute__((__visibility__("hidden"))) void _hb_fallback_shaper_font_data_destroy (struct hb_fallback_shaper_font_data_t *data);
# 411 "../../src/hb-font-private.hh" 2
# 35 "../../src/hb-ot-layout-private.hh" 2

# 1 "../../src/hb-set-private.hh" 1
# 42 "../../src/hb-set-private.hh"
template <typename mask_t, unsigned int shift>
struct hb_set_digest_lowest_bits_t
{
  __inline__ void _static_assertion_on_line_45 (void) const { do { typedef __typeof__(*this) _type_45; union _type__type_45_on_line_45_is_not_POD { _type_45 instance; }; } while (0); };

  static const unsigned int mask_bytes = sizeof (mask_t);
  static const unsigned int mask_bits = sizeof (mask_t) * 8;
  static const unsigned int num_bits = 0
         + (mask_bytes >= 1 ? 3 : 0)
         + (mask_bytes >= 2 ? 1 : 0)
         + (mask_bytes >= 4 ? 1 : 0)
         + (mask_bytes >= 8 ? 1 : 0)
         + (mask_bytes >= 16? 1 : 0)
         + 0;

  typedef int _static_assert_on_line_57_failed[(((shift < sizeof (hb_codepoint_t) * 8)))?1:-1];
  typedef int _static_assert_on_line_58_failed[(((shift + num_bits <= sizeof (hb_codepoint_t) * 8)))?1:-1];

  __inline__ void init (void) {
    mask = 0;
  }

  __inline__ void add (hb_codepoint_t g) {
    mask |= mask_for (g);
  }

  __inline__ void add_range (hb_codepoint_t a, hb_codepoint_t b) {
    if ((b >> shift) - (a >> shift) >= mask_bits - 1)
      mask = (mask_t) -1;
    else {
      mask_t ma = mask_for (a);
      mask_t mb = mask_for (b);
      mask |= mb + (mb - ma) - (mb < ma);
    }
  }

  __inline__ bool may_have (hb_codepoint_t g) const {
    return !!(mask & mask_for (g));
  }

  private:

  static __inline__ mask_t mask_for (hb_codepoint_t g) {
    return ((mask_t) 1) << ((g >> shift) & (mask_bits - 1));
  }
  mask_t mask;
};

template <typename head_t, typename tail_t>
struct hb_set_digest_combiner_t
{
  __inline__ void _static_assertion_on_line_93 (void) const { do { typedef __typeof__(*this) _type_93; union _type__type_93_on_line_93_is_not_POD { _type_93 instance; }; } while (0); };

  __inline__ void init (void) {
    head.init ();
    tail.init ();
  }

  __inline__ void add (hb_codepoint_t g) {
    head.add (g);
    tail.add (g);
  }

  __inline__ void add_range (hb_codepoint_t a, hb_codepoint_t b) {
    head.add_range (a, b);
    tail.add_range (a, b);
  }

  __inline__ bool may_have (hb_codepoint_t g) const {
    return head.may_have (g) && tail.may_have (g);
  }

  private:
  head_t head;
  tail_t tail;
};
# 127 "../../src/hb-set-private.hh"
typedef hb_set_digest_combiner_t
<
  hb_set_digest_lowest_bits_t<unsigned long, 4>,
  hb_set_digest_combiner_t
  <
    hb_set_digest_lowest_bits_t<unsigned long, 0>,
    hb_set_digest_lowest_bits_t<unsigned long, 9>
  >
> hb_set_digest_t;
# 146 "../../src/hb-set-private.hh"
struct hb_set_t
{
  hb_object_header_t header;
  __inline__ void _static_assertion_on_line_149 (void) const { do { typedef __typeof__(*this) _type_149; union _type__type_149_on_line_149_is_not_POD { _type_149 instance; }; } while (0); };
  bool in_error;

  __inline__ void init (void) {
    header.init ();
    clear ();
  }
  __inline__ void fini (void) {
  }
  __inline__ void clear (void) {
    if ((__builtin_expect (((hb_object_is_inert (this)) ? 1 : 0), 0)))
      return;
    in_error = false;
    memset (elts, 0, sizeof elts);
  }
  __inline__ bool is_empty (void) const {
    for (unsigned int i = 0; i < ARRAY_LENGTH (elts); i++)
      if (elts[i])
        return false;
    return true;
  }
  __inline__ void add (hb_codepoint_t g)
  {
    if ((__builtin_expect (((in_error) ? 1 : 0), 0))) return;
    if ((__builtin_expect (((g == INVALID) ? 1 : 0), 0))) return;
    if ((__builtin_expect (((g > MAX_G) ? 1 : 0), 0))) return;
    elt (g) |= mask (g);
  }
  __inline__ void add_range (hb_codepoint_t a, hb_codepoint_t b)
  {
    if ((__builtin_expect (((in_error) ? 1 : 0), 0))) return;

    for (unsigned int i = a; i < b + 1; i++)
      add (i);
  }
  __inline__ void del (hb_codepoint_t g)
  {
    if ((__builtin_expect (((in_error) ? 1 : 0), 0))) return;
    if ((__builtin_expect (((g > MAX_G) ? 1 : 0), 0))) return;
    elt (g) &= ~mask (g);
  }
  __inline__ void del_range (hb_codepoint_t a, hb_codepoint_t b)
  {
    if ((__builtin_expect (((in_error) ? 1 : 0), 0))) return;

    for (unsigned int i = a; i < b + 1; i++)
      del (i);
  }
  __inline__ bool has (hb_codepoint_t g) const
  {
    if ((__builtin_expect (((g > MAX_G) ? 1 : 0), 0))) return false;
    return !!(elt (g) & mask (g));
  }
  __inline__ bool intersects (hb_codepoint_t first,
     hb_codepoint_t last) const
  {
    if ((__builtin_expect (((first > MAX_G) ? 1 : 0), 0))) return false;
    if ((__builtin_expect (((last > MAX_G) ? 1 : 0), 0))) last = MAX_G;
    unsigned int end = last + 1;
    for (hb_codepoint_t i = first; i < end; i++)
      if (has (i))
        return true;
    return false;
  }
  __inline__ bool is_equal (const hb_set_t *other) const
  {
    for (unsigned int i = 0; i < ELTS; i++)
      if (elts[i] != other->elts[i])
        return false;
    return true;
  }
  __inline__ void set (const hb_set_t *other)
  {
    if ((__builtin_expect (((in_error) ? 1 : 0), 0))) return;
    for (unsigned int i = 0; i < ELTS; i++)
      elts[i] = other->elts[i];
  }
  __inline__ void union_ (const hb_set_t *other)
  {
    if ((__builtin_expect (((in_error) ? 1 : 0), 0))) return;
    for (unsigned int i = 0; i < ELTS; i++)
      elts[i] |= other->elts[i];
  }
  __inline__ void intersect (const hb_set_t *other)
  {
    if ((__builtin_expect (((in_error) ? 1 : 0), 0))) return;
    for (unsigned int i = 0; i < ELTS; i++)
      elts[i] &= other->elts[i];
  }
  __inline__ void subtract (const hb_set_t *other)
  {
    if ((__builtin_expect (((in_error) ? 1 : 0), 0))) return;
    for (unsigned int i = 0; i < ELTS; i++)
      elts[i] &= ~other->elts[i];
  }
  __inline__ void symmetric_difference (const hb_set_t *other)
  {
    if ((__builtin_expect (((in_error) ? 1 : 0), 0))) return;
    for (unsigned int i = 0; i < ELTS; i++)
      elts[i] ^= other->elts[i];
  }
  __inline__ void invert (void)
  {
    if ((__builtin_expect (((in_error) ? 1 : 0), 0))) return;
    for (unsigned int i = 0; i < ELTS; i++)
      elts[i] = ~elts[i];
  }
  __inline__ bool next (hb_codepoint_t *codepoint) const
  {
    if ((__builtin_expect (((*codepoint == INVALID) ? 1 : 0), 0))) {
      hb_codepoint_t i = get_min ();
      if (i != INVALID) {
        *codepoint = i;
 return true;
      } else {
 *codepoint = INVALID;
        return false;
      }
    }
    for (hb_codepoint_t i = *codepoint + 1; i < MAX_G + 1; i++)
      if (has (i)) {
        *codepoint = i;
 return true;
      }
    *codepoint = INVALID;
    return false;
  }
  __inline__ bool next_range (hb_codepoint_t *first, hb_codepoint_t *last) const
  {
    hb_codepoint_t i;

    i = *last;
    if (!next (&i))
    {
      *last = *first = INVALID;
      return false;
    }

    *last = *first = i;
    while (next (&i) && i == *last + 1)
      (*last)++;

    return true;
  }

  __inline__ unsigned int get_population (void) const
  {
    unsigned int count = 0;
    for (unsigned int i = 0; i < ELTS; i++)
      count += _hb_popcount32 (elts[i]);
    return count;
  }
  __inline__ hb_codepoint_t get_min (void) const
  {
    for (unsigned int i = 0; i < ELTS; i++)
      if (elts[i])
 for (unsigned int j = 0; j < BITS; j++)
   if (elts[i] & (1 << j))
     return i * BITS + j;
    return INVALID;
  }
  __inline__ hb_codepoint_t get_max (void) const
  {
    for (unsigned int i = ELTS; i; i--)
      if (elts[i - 1])
 for (unsigned int j = BITS; j; j--)
   if (elts[i - 1] & (1 << (j - 1)))
     return (i - 1) * BITS + (j - 1);
    return INVALID;
  }

  typedef uint32_t elt_t;
  static const unsigned int MAX_G = 65536 - 1;
  static const unsigned int SHIFT = 5;
  static const unsigned int BITS = (1 << SHIFT);
  static const unsigned int MASK = BITS - 1;
  static const unsigned int ELTS = (MAX_G + 1 + (BITS - 1)) / BITS;
  static const hb_codepoint_t INVALID = ((hb_codepoint_t) -1);

  elt_t &elt (hb_codepoint_t g) { return elts[g >> SHIFT]; }
  elt_t elt (hb_codepoint_t g) const { return elts[g >> SHIFT]; }
  elt_t mask (hb_codepoint_t g) const { return elt_t (1) << (g & MASK); }

  elt_t elts[ELTS];

  typedef int _static_assert_on_line_334_failed[(((sizeof (elt_t) * 8 == BITS)))?1:-1];
  typedef int _static_assert_on_line_335_failed[(((sizeof (elt_t) * 8 * ELTS > MAX_G)))?1:-1];
};
# 37 "../../src/hb-ot-layout-private.hh" 2






typedef enum
{

  HB_OT_LAYOUT_GLYPH_PROPS_BASE_GLYPH = 0x02u,
  HB_OT_LAYOUT_GLYPH_PROPS_LIGATURE = 0x04u,
  HB_OT_LAYOUT_GLYPH_PROPS_MARK = 0x08u,


  HB_OT_LAYOUT_GLYPH_PROPS_SUBSTITUTED = 0x10u,
  HB_OT_LAYOUT_GLYPH_PROPS_LIGATED = 0x20u,

  HB_OT_LAYOUT_GLYPH_PROPS_PRESERVE = HB_OT_LAYOUT_GLYPH_PROPS_SUBSTITUTED |
       HB_OT_LAYOUT_GLYPH_PROPS_LIGATED
} hb_ot_layout_glyph_class_mask_t;






__attribute__((__visibility__("hidden"))) hb_bool_t
hb_ot_layout_lookup_would_substitute_fast (hb_face_t *face,
        unsigned int lookup_index,
        const hb_codepoint_t *glyphs,
        unsigned int glyphs_length,
        hb_bool_t zero_context);



__attribute__((__visibility__("hidden"))) void
hb_ot_layout_substitute_start (hb_font_t *font,
          hb_buffer_t *buffer);


struct hb_ot_layout_lookup_accelerator_t;

namespace OT {
  struct hb_apply_context_t;
  struct SubstLookup;
}

__attribute__((__visibility__("hidden"))) void
hb_ot_layout_substitute_lookup (OT::hb_apply_context_t *c,
    const OT::SubstLookup &lookup,
    const hb_ot_layout_lookup_accelerator_t &accel);



__attribute__((__visibility__("hidden"))) void
hb_ot_layout_substitute_finish (hb_font_t *font,
    hb_buffer_t *buffer);



__attribute__((__visibility__("hidden"))) void
hb_ot_layout_position_start (hb_font_t *font,
        hb_buffer_t *buffer);


__attribute__((__visibility__("hidden"))) void
hb_ot_layout_position_finish (hb_font_t *font,
         hb_buffer_t *buffer);







namespace OT {
  struct GDEF;
  struct GSUB;
  struct GPOS;
}

struct hb_ot_layout_lookup_accelerator_t
{
  template <typename TLookup>
  __inline__ void init (const TLookup &lookup)
  {
    digest.init ();
    lookup.add_coverage (&digest);
  }

  template <typename TLookup>
  __inline__ void fini (const TLookup &lookup)
  {
  }

  hb_set_digest_t digest;
};

struct hb_ot_layout_t
{
  hb_blob_t *gdef_blob;
  hb_blob_t *gsub_blob;
  hb_blob_t *gpos_blob;

  const struct OT::GDEF *gdef;
  const struct OT::GSUB *gsub;
  const struct OT::GPOS *gpos;

  unsigned int gsub_lookup_count;
  unsigned int gpos_lookup_count;

  hb_ot_layout_lookup_accelerator_t *gsub_accels;
  hb_ot_layout_lookup_accelerator_t *gpos_accels;
};


__attribute__((__visibility__("hidden"))) hb_ot_layout_t *
_hb_ot_layout_create (hb_face_t *face);

__attribute__((__visibility__("hidden"))) void
_hb_ot_layout_destroy (hb_ot_layout_t *layout);
# 178 "../../src/hb-ot-layout-private.hh"
enum {
  MASK0_ZWJ = 0x20u,
  MASK0_ZWNJ = 0x40u,
  MASK0_IGNORABLE = 0x80u,
  MASK0_GEN_CAT = 0x1Fu
};

__inline__ void
_hb_glyph_info_set_unicode_props (hb_glyph_info_t *info, hb_unicode_funcs_t *unicode)
{

  info->var2.u8[0] = ((unsigned int) unicode->general_category (info->codepoint)) |
      (unicode->is_default_ignorable (info->codepoint) ? MASK0_IGNORABLE : 0) |
      (info->codepoint == 0x200C ? MASK0_ZWNJ : 0) |
      (info->codepoint == 0x200D ? MASK0_ZWJ : 0);
  info->var2.u8[1] = unicode->modified_combining_class (info->codepoint);
}

__inline__ void
_hb_glyph_info_set_general_category (hb_glyph_info_t *info,
         hb_unicode_general_category_t gen_cat)
{
  info->var2.u8[0] = (unsigned int) gen_cat | ((info->var2.u8[0]) & ~MASK0_GEN_CAT);
}

__inline__ hb_unicode_general_category_t
_hb_glyph_info_get_general_category (const hb_glyph_info_t *info)
{
  return (hb_unicode_general_category_t) (info->var2.u8[0] & MASK0_GEN_CAT);
}

__inline__ void
_hb_glyph_info_set_modified_combining_class (hb_glyph_info_t *info,
          unsigned int modified_class)
{
  info->var2.u8[1] = modified_class;
}

__inline__ unsigned int
_hb_glyph_info_get_modified_combining_class (const hb_glyph_info_t *info)
{
  return info->var2.u8[1];
}

__inline__ hb_bool_t
_hb_glyph_info_is_default_ignorable (const hb_glyph_info_t *info)
{
  return !!(info->var2.u8[0] & MASK0_IGNORABLE);
}

__inline__ hb_bool_t
_hb_glyph_info_is_zwnj (const hb_glyph_info_t *info)
{
  return !!(info->var2.u8[0] & MASK0_ZWNJ);
}

__inline__ hb_bool_t
_hb_glyph_info_is_zwj (const hb_glyph_info_t *info)
{
  return !!(info->var2.u8[0] & MASK0_ZWJ);
}

__inline__ void
_hb_glyph_info_flip_joiners (hb_glyph_info_t *info)
{
  info->var2.u8[0] ^= MASK0_ZWNJ | MASK0_ZWJ;
}
# 271 "../../src/hb-ot-layout-private.hh"
static __inline__ void
_hb_glyph_info_clear_lig_props (hb_glyph_info_t *info)
{
  info->var1.u8[2] = 0;
}



static __inline__ void
_hb_glyph_info_set_lig_props_for_ligature (hb_glyph_info_t *info,
        unsigned int lig_id,
        unsigned int lig_num_comps)
{
  info->var1.u8[2] = (lig_id << 5) | 0x10 | (lig_num_comps & 0x0F);
}

static __inline__ void
_hb_glyph_info_set_lig_props_for_mark (hb_glyph_info_t *info,
           unsigned int lig_id,
           unsigned int lig_comp)
{
  info->var1.u8[2] = (lig_id << 5) | (lig_comp & 0x0F);
}

static __inline__ void
_hb_glyph_info_set_lig_props_for_component (hb_glyph_info_t *info, unsigned int comp)
{
  _hb_glyph_info_set_lig_props_for_mark (info, 0, comp);
}

static __inline__ unsigned int
_hb_glyph_info_get_lig_id (const hb_glyph_info_t *info)
{
  return info->var1.u8[2] >> 5;
}

static __inline__ bool
_hb_glyph_info_ligated_internal (const hb_glyph_info_t *info)
{
  return !!(info->var1.u8[2] & 0x10);
}

static __inline__ unsigned int
_hb_glyph_info_get_lig_comp (const hb_glyph_info_t *info)
{
  if (_hb_glyph_info_ligated_internal (info))
    return 0;
  else
    return info->var1.u8[2] & 0x0F;
}

static __inline__ unsigned int
_hb_glyph_info_get_lig_num_comps (const hb_glyph_info_t *info)
{
  if ((info->var1.u16[0] & HB_OT_LAYOUT_GLYPH_PROPS_LIGATURE) &&
      _hb_glyph_info_ligated_internal (info))
    return info->var1.u8[2] & 0x0F;
  else
    return 1;
}

static __inline__ uint8_t
_hb_allocate_lig_id (hb_buffer_t *buffer) {
  uint8_t lig_id = buffer->next_serial () & 0x07;
  if ((__builtin_expect (((!lig_id) ? 1 : 0), 0)))
    lig_id = _hb_allocate_lig_id (buffer);
  return lig_id;
}



__inline__ void
_hb_glyph_info_set_glyph_props (hb_glyph_info_t *info, unsigned int props)
{
  info->var1.u16[0] = props;
}

__inline__ unsigned int
_hb_glyph_info_get_glyph_props (const hb_glyph_info_t *info)
{
  return info->var1.u16[0];
}

__inline__ bool
_hb_glyph_info_is_base_glyph (const hb_glyph_info_t *info)
{
  return !!(info->var1.u16[0] & HB_OT_LAYOUT_GLYPH_PROPS_BASE_GLYPH);
}

__inline__ bool
_hb_glyph_info_is_ligature (const hb_glyph_info_t *info)
{
  return !!(info->var1.u16[0] & HB_OT_LAYOUT_GLYPH_PROPS_LIGATURE);
}

__inline__ bool
_hb_glyph_info_is_mark (const hb_glyph_info_t *info)
{
  return !!(info->var1.u16[0] & HB_OT_LAYOUT_GLYPH_PROPS_MARK);
}

static __inline__ bool
_hb_glyph_info_substituted (const hb_glyph_info_t *info)
{
  return !!(info->var1.u16[0] & HB_OT_LAYOUT_GLYPH_PROPS_SUBSTITUTED);
}

static __inline__ bool
_hb_glyph_info_ligated (const hb_glyph_info_t *info)
{
  return !!(info->var1.u16[0] & HB_OT_LAYOUT_GLYPH_PROPS_LIGATED);
}



__inline__ void
_hb_buffer_allocate_unicode_vars (hb_buffer_t *buffer)
{
  buffer->allocate_var (__builtin_offsetof (hb_glyph_info_t, var2.u8[0]) - __builtin_offsetof (hb_glyph_info_t, var1), sizeof (buffer->info[0].var2.u8[0]), "unicode_props0");
  buffer->allocate_var (__builtin_offsetof (hb_glyph_info_t, var2.u8[1]) - __builtin_offsetof (hb_glyph_info_t, var1), sizeof (buffer->info[0].var2.u8[1]), "unicode_props1");
}

__inline__ void
_hb_buffer_deallocate_unicode_vars (hb_buffer_t *buffer)
{
  buffer->deallocate_var (__builtin_offsetof (hb_glyph_info_t, var2.u8[0]) - __builtin_offsetof (hb_glyph_info_t, var1), sizeof (buffer->info[0].var2.u8[0]), "unicode_props0");
  buffer->deallocate_var (__builtin_offsetof (hb_glyph_info_t, var2.u8[1]) - __builtin_offsetof (hb_glyph_info_t, var1), sizeof (buffer->info[0].var2.u8[1]), "unicode_props1");
}

__inline__ void
_hb_buffer_allocate_gsubgpos_vars (hb_buffer_t *buffer)
{
  buffer->allocate_var (__builtin_offsetof (hb_glyph_info_t, var1.u16[0]) - __builtin_offsetof (hb_glyph_info_t, var1), sizeof (buffer->info[0].var1.u16[0]), "glyph_props");
  buffer->allocate_var (__builtin_offsetof (hb_glyph_info_t, var1.u8[2]) - __builtin_offsetof (hb_glyph_info_t, var1), sizeof (buffer->info[0].var1.u8[2]), "lig_props");
  buffer->allocate_var (__builtin_offsetof (hb_glyph_info_t, var1.u8[3]) - __builtin_offsetof (hb_glyph_info_t, var1), sizeof (buffer->info[0].var1.u8[3]), "syllable");
}

__inline__ void
_hb_buffer_deallocate_gsubgpos_vars (hb_buffer_t *buffer)
{
  buffer->deallocate_var (__builtin_offsetof (hb_glyph_info_t, var1.u8[3]) - __builtin_offsetof (hb_glyph_info_t, var1), sizeof (buffer->info[0].var1.u8[3]), "syllable");
  buffer->deallocate_var (__builtin_offsetof (hb_glyph_info_t, var1.u8[2]) - __builtin_offsetof (hb_glyph_info_t, var1), sizeof (buffer->info[0].var1.u8[2]), "lig_props");
  buffer->deallocate_var (__builtin_offsetof (hb_glyph_info_t, var1.u16[0]) - __builtin_offsetof (hb_glyph_info_t, var1), sizeof (buffer->info[0].var1.u16[0]), "glyph_props");
}
# 34 "../../src/hb-ot-shape-private.hh" 2



struct hb_ot_shape_plan_t
{
  hb_segment_properties_t props;
  const struct hb_ot_complex_shaper_t *shaper;
  hb_ot_map_t map;
  const void *data;
  hb_mask_t rtlm_mask, frac_mask, numr_mask, dnom_mask;
  hb_mask_t kern_mask;
  unsigned int has_frac : 1;
  unsigned int has_kern : 1;
  unsigned int has_mark : 1;

  __inline__ void collect_lookups (hb_tag_t table_tag, hb_set_t *lookups) const
  {
    unsigned int table_index;
    switch (table_tag) {
      case ((hb_tag_t)((((uint8_t)('G'))<<24)|(((uint8_t)('S'))<<16)|(((uint8_t)('U'))<<8)|((uint8_t)('B')))): table_index = 0; break;
      case ((hb_tag_t)((((uint8_t)('G'))<<24)|(((uint8_t)('P'))<<16)|(((uint8_t)('O'))<<8)|((uint8_t)('S')))): table_index = 1; break;
      default: return;
    }
    map.collect_lookups (table_index, lookups);
  }
  __inline__ void substitute (hb_font_t *font, hb_buffer_t *buffer) const { map.substitute (this, font, buffer); }
  __inline__ void position (hb_font_t *font, hb_buffer_t *buffer) const { map.position (this, font, buffer); }

  void finish (void) { map.finish (); }
};

struct hb_ot_shape_planner_t
{

  hb_face_t *face;
  hb_segment_properties_t props;
  const struct hb_ot_complex_shaper_t *shaper;
  hb_ot_map_builder_t map;

  hb_ot_shape_planner_t (const hb_shape_plan_t *master_plan) :
    face (master_plan->face_unsafe),
    props (master_plan->props),
    shaper (__null),
    map (face, &props) {}
  ~hb_ot_shape_planner_t (void) { map.finish (); }

  __inline__ void compile (hb_ot_shape_plan_t &plan)
  {
    plan.props = props;
    plan.shaper = shaper;
    map.compile (plan.map);

    plan.rtlm_mask = plan.map.get_1_mask (((hb_tag_t)((((uint8_t)('r'))<<24)|(((uint8_t)('t'))<<16)|(((uint8_t)('l'))<<8)|((uint8_t)('m')))));
    plan.frac_mask = plan.map.get_1_mask (((hb_tag_t)((((uint8_t)('f'))<<24)|(((uint8_t)('r'))<<16)|(((uint8_t)('a'))<<8)|((uint8_t)('c')))));
    plan.numr_mask = plan.map.get_1_mask (((hb_tag_t)((((uint8_t)('n'))<<24)|(((uint8_t)('u'))<<16)|(((uint8_t)('m'))<<8)|((uint8_t)('r')))));
    plan.dnom_mask = plan.map.get_1_mask (((hb_tag_t)((((uint8_t)('d'))<<24)|(((uint8_t)('n'))<<16)|(((uint8_t)('o'))<<8)|((uint8_t)('m')))));

    plan.kern_mask = plan.map.get_mask (((((unsigned int) (plan.props.direction)) & ~1U) == 4) ?
     ((hb_tag_t)((((uint8_t)('k'))<<24)|(((uint8_t)('e'))<<16)|(((uint8_t)('r'))<<8)|((uint8_t)('n')))) : ((hb_tag_t)((((uint8_t)('v'))<<24)|(((uint8_t)('k'))<<16)|(((uint8_t)('r'))<<8)|((uint8_t)('n')))));

    plan.has_frac = plan.frac_mask || (plan.numr_mask && plan.dnom_mask);
    plan.has_kern = !!plan.kern_mask;
    plan.has_mark = !!plan.map.get_1_mask (((hb_tag_t)((((uint8_t)('m'))<<24)|(((uint8_t)('a'))<<16)|(((uint8_t)('r'))<<8)|((uint8_t)('k')))));
  }

  private:
  hb_ot_shape_planner_t (const hb_ot_shape_planner_t &o); hb_ot_shape_planner_t &operator = (const hb_ot_shape_planner_t &o);
};
# 33 "../../src/hb-ot-shape-complex-private.hh" 2
# 42 "../../src/hb-ot-shape-complex-private.hh"
enum hb_ot_shape_zero_width_marks_type_t {
  HB_OT_SHAPE_ZERO_WIDTH_MARKS_NONE,

  HB_OT_SHAPE_ZERO_WIDTH_MARKS_BY_UNICODE_LATE,
  HB_OT_SHAPE_ZERO_WIDTH_MARKS_BY_GDEF_EARLY,
  HB_OT_SHAPE_ZERO_WIDTH_MARKS_BY_GDEF_LATE,

  HB_OT_SHAPE_ZERO_WIDTH_MARKS_DEFAULT = HB_OT_SHAPE_ZERO_WIDTH_MARKS_BY_UNICODE_LATE
};
# 67 "../../src/hb-ot-shape-complex-private.hh"
struct hb_ot_complex_shaper_t
{
  char name[8];






  void (*collect_features) (hb_ot_shape_planner_t *plan);







  void (*override_features) (hb_ot_shape_planner_t *plan);







  void *(*data_create) (const hb_ot_shape_plan_t *plan);







  void (*data_destroy) (void *data);







  void (*preprocess_text) (const hb_ot_shape_plan_t *plan,
      hb_buffer_t *buffer,
      hb_font_t *font);


  hb_ot_shape_normalization_mode_t normalization_preference;





  bool (*decompose) (const hb_ot_shape_normalize_context_t *c,
       hb_codepoint_t ab,
       hb_codepoint_t *a,
       hb_codepoint_t *b);





  bool (*compose) (const hb_ot_shape_normalize_context_t *c,
     hb_codepoint_t a,
     hb_codepoint_t b,
     hb_codepoint_t *ab);







  void (*setup_masks) (const hb_ot_shape_plan_t *plan,
         hb_buffer_t *buffer,
         hb_font_t *font);

  hb_ot_shape_zero_width_marks_type_t zero_width_marks;

  bool fallback_position;
};


extern __attribute__((__visibility__("hidden"))) const hb_ot_complex_shaper_t _hb_ot_complex_shaper_default; extern __attribute__((__visibility__("hidden"))) const hb_ot_complex_shaper_t _hb_ot_complex_shaper_arabic; extern __attribute__((__visibility__("hidden"))) const hb_ot_complex_shaper_t _hb_ot_complex_shaper_hangul; extern __attribute__((__visibility__("hidden"))) const hb_ot_complex_shaper_t _hb_ot_complex_shaper_hebrew; extern __attribute__((__visibility__("hidden"))) const hb_ot_complex_shaper_t _hb_ot_complex_shaper_indic; extern __attribute__((__visibility__("hidden"))) const hb_ot_complex_shaper_t _hb_ot_complex_shaper_myanmar; extern __attribute__((__visibility__("hidden"))) const hb_ot_complex_shaper_t _hb_ot_complex_shaper_sea; extern __attribute__((__visibility__("hidden"))) const hb_ot_complex_shaper_t _hb_ot_complex_shaper_thai; extern __attribute__((__visibility__("hidden"))) const hb_ot_complex_shaper_t _hb_ot_complex_shaper_tibetan;



static __inline__ const hb_ot_complex_shaper_t *
hb_ot_shape_complex_categorize (const hb_ot_shape_planner_t *planner)
{
  switch ((hb_tag_t) planner->props.script)
  {
    default:
      return &_hb_ot_complex_shaper_default;



    case HB_SCRIPT_ARABIC:


    case HB_SCRIPT_MONGOLIAN:
    case HB_SCRIPT_SYRIAC:


    case HB_SCRIPT_NKO:
    case HB_SCRIPT_PHAGS_PA:


    case HB_SCRIPT_MANDAIC:



      if (planner->map.chosen_script[0] != ((hb_tag_t)((((uint8_t)('D'))<<24)|(((uint8_t)('F'))<<16)|(((uint8_t)('L'))<<8)|((uint8_t)('T')))) ||
   planner->props.script == HB_SCRIPT_ARABIC)
 return &_hb_ot_complex_shaper_arabic;
      else
 return &_hb_ot_complex_shaper_default;



    case HB_SCRIPT_THAI:
    case HB_SCRIPT_LAO:

      return &_hb_ot_complex_shaper_thai;



    case HB_SCRIPT_HANGUL:

      return &_hb_ot_complex_shaper_hangul;



    case HB_SCRIPT_TIBETAN:

      return &_hb_ot_complex_shaper_tibetan;



    case HB_SCRIPT_HEBREW:

      return &_hb_ot_complex_shaper_hebrew;
# 269 "../../src/hb-ot-shape-complex-private.hh"
    case HB_SCRIPT_BENGALI:
    case HB_SCRIPT_DEVANAGARI:
    case HB_SCRIPT_GUJARATI:
    case HB_SCRIPT_GURMUKHI:
    case HB_SCRIPT_KANNADA:
    case HB_SCRIPT_MALAYALAM:
    case HB_SCRIPT_ORIYA:
    case HB_SCRIPT_TAMIL:
    case HB_SCRIPT_TELUGU:


    case HB_SCRIPT_SINHALA:


    case HB_SCRIPT_BALINESE:


    case HB_SCRIPT_LEPCHA:
    case HB_SCRIPT_REJANG:
    case HB_SCRIPT_SUNDANESE:


    case HB_SCRIPT_JAVANESE:
    case HB_SCRIPT_KAITHI:
    case HB_SCRIPT_MEETEI_MAYEK:




    case HB_SCRIPT_CHAKMA:
    case HB_SCRIPT_SHARADA:
    case HB_SCRIPT_TAKRI:





      if (planner->map.chosen_script[0] == ((hb_tag_t)((((uint8_t)('D'))<<24)|(((uint8_t)('F'))<<16)|(((uint8_t)('L'))<<8)|((uint8_t)('T')))))
 return &_hb_ot_complex_shaper_default;
      else
 return &_hb_ot_complex_shaper_indic;

    case HB_SCRIPT_KHMER:





      if (planner->map.found_script[0] &&
   hb_ot_layout_language_find_feature (planner->face, ((hb_tag_t)((((uint8_t)('G'))<<24)|(((uint8_t)('S'))<<16)|(((uint8_t)('U'))<<8)|((uint8_t)('B')))),
           planner->map.script_index[0],
           planner->map.language_index[0],
           ((hb_tag_t)((((uint8_t)('p'))<<24)|(((uint8_t)('r'))<<16)|(((uint8_t)('e'))<<8)|((uint8_t)('f')))),
           __null))
 return &_hb_ot_complex_shaper_indic;
      else
 return &_hb_ot_complex_shaper_default;

    case HB_SCRIPT_MYANMAR:


      if (planner->map.chosen_script[0] == ((hb_tag_t)((((uint8_t)('m'))<<24)|(((uint8_t)('y'))<<16)|(((uint8_t)('m'))<<8)|((uint8_t)('2')))))
 return &_hb_ot_complex_shaper_myanmar;
      else
 return &_hb_ot_complex_shaper_default;


    case HB_SCRIPT_BUGINESE:
    case HB_SCRIPT_NEW_TAI_LUE:


    case HB_SCRIPT_CHAM:


    case HB_SCRIPT_TAI_THAM:





      if (planner->map.chosen_script[0] == ((hb_tag_t)((((uint8_t)('D'))<<24)|(((uint8_t)('F'))<<16)|(((uint8_t)('L'))<<8)|((uint8_t)('T')))))
 return &_hb_ot_complex_shaper_default;
      else
 return &_hb_ot_complex_shaper_sea;
  }
}
# 29 "../../src/hb-ot-shape-normalize.cc" 2
# 85 "../../src/hb-ot-shape-normalize.cc"
static bool
decompose_unicode (const hb_ot_shape_normalize_context_t *c,
     hb_codepoint_t ab,
     hb_codepoint_t *a,
     hb_codepoint_t *b)
{
  return c->unicode->decompose (ab, a, b);
}

static bool
compose_unicode (const hb_ot_shape_normalize_context_t *c,
   hb_codepoint_t a,
   hb_codepoint_t b,
   hb_codepoint_t *ab)
{
  return c->unicode->compose (a, b, ab);
}

static __inline__ void
set_glyph (hb_glyph_info_t &info, hb_font_t *font)
{
  font->get_glyph (info.codepoint, 0, &info.var1.u32);
}

static __inline__ void
output_char (hb_buffer_t *buffer, hb_codepoint_t unichar, hb_codepoint_t glyph)
{
  buffer->cur().var1.u32 = glyph;
  buffer->output_glyph (unichar);
  _hb_glyph_info_set_unicode_props (&buffer->prev(), buffer->unicode);
}

static __inline__ void
next_char (hb_buffer_t *buffer, hb_codepoint_t glyph)
{
  buffer->cur().var1.u32 = glyph;
  buffer->next_glyph ();
}

static __inline__ void
skip_char (hb_buffer_t *buffer)
{
  buffer->skip_glyph ();
}


static __inline__ unsigned int
decompose (const hb_ot_shape_normalize_context_t *c, bool shortest, hb_codepoint_t ab)
{
  hb_codepoint_t a, b, a_glyph, b_glyph;
  hb_buffer_t * const buffer = c->buffer;
  hb_font_t * const font = c->font;

  if (!c->decompose (c, ab, &a, &b) ||
      (b && !font->get_glyph (b, 0, &b_glyph)))
    return 0;

  bool has_a = font->get_glyph (a, 0, &a_glyph);
  if (shortest && has_a) {

    output_char (buffer, a, a_glyph);
    if ((__builtin_expect (((b) ? 1 : 0), 1))) {
      output_char (buffer, b, b_glyph);
      return 2;
    }
    return 1;
  }

  unsigned int ret;
  if ((ret = decompose (c, shortest, a))) {
    if (b) {
      output_char (buffer, b, b_glyph);
      return ret + 1;
    }
    return ret;
  }

  if (has_a) {
    output_char (buffer, a, a_glyph);
    if ((__builtin_expect (((b) ? 1 : 0), 1))) {
      output_char (buffer, b, b_glyph);
      return 2;
    }
    return 1;
  }

  return 0;
}


static __inline__ unsigned int
decompose_compatibility (const hb_ot_shape_normalize_context_t *c, hb_codepoint_t u)
{
  unsigned int len, i;
  hb_codepoint_t decomposed[(18+1)];
  hb_codepoint_t glyphs[(18+1)];

  len = c->buffer->unicode->decompose_compatibility (u, decomposed);
  if (!len)
    return 0;

  for (i = 0; i < len; i++)
    if (!c->font->get_glyph (decomposed[i], 0, &glyphs[i]))
      return 0;

  for (i = 0; i < len; i++)
    output_char (c->buffer, decomposed[i], glyphs[i]);

  return len;
}

static __inline__ void
decompose_current_character (const hb_ot_shape_normalize_context_t *c, bool shortest)
{
  hb_buffer_t * const buffer = c->buffer;
  hb_codepoint_t glyph;


  if (shortest && c->font->get_glyph (buffer->cur().codepoint, 0, &glyph))
    next_char (buffer, glyph);
  else if (decompose (c, shortest, buffer->cur().codepoint))
    skip_char (buffer);
  else if (!shortest && c->font->get_glyph (buffer->cur().codepoint, 0, &glyph))
    next_char (buffer, glyph);
  else if (decompose_compatibility (c, buffer->cur().codepoint))
    skip_char (buffer);
  else
    next_char (buffer, glyph);
}

static __inline__ void
handle_variation_selector_cluster (const hb_ot_shape_normalize_context_t *c, unsigned int end, bool short_circuit)
{

  hb_buffer_t * const buffer = c->buffer;
  hb_font_t * const font = c->font;
  for (; buffer->idx < end - 1;) {
    if ((__builtin_expect (((buffer->unicode->is_variation_selector (buffer->cur(+1).codepoint)) ? 1 : 0), 0))) {

      if (font->get_glyph (buffer->cur().codepoint, buffer->cur(+1).codepoint, &buffer->cur().var1.u32))
      {
 buffer->replace_glyphs (2, 1, &buffer->cur().codepoint);
      }
      else
      {

 set_glyph (buffer->cur(), font);
 buffer->next_glyph ();
 set_glyph (buffer->cur(), font);
 buffer->next_glyph ();
      }

      while (buffer->idx < end && (__builtin_expect (((buffer->unicode->is_variation_selector (buffer->cur().codepoint)) ? 1 : 0), 0)))
      {
 set_glyph (buffer->cur(), font);
 buffer->next_glyph ();
      }
    } else {
      set_glyph (buffer->cur(), font);
      buffer->next_glyph ();
    }
  }
  if ((__builtin_expect (((buffer->idx < end) ? 1 : 0), 1))) {
    set_glyph (buffer->cur(), font);
    buffer->next_glyph ();
  }
}

static __inline__ void
decompose_multi_char_cluster (const hb_ot_shape_normalize_context_t *c, unsigned int end, bool short_circuit)
{
  hb_buffer_t * const buffer = c->buffer;
  for (unsigned int i = buffer->idx; i < end; i++)
    if ((__builtin_expect (((buffer->unicode->is_variation_selector (buffer->info[i].codepoint)) ? 1 : 0), 0))) {
      handle_variation_selector_cluster (c, end, short_circuit);
      return;
    }

  while (buffer->idx < end)
    decompose_current_character (c, short_circuit);
}

static __inline__ void
decompose_cluster (const hb_ot_shape_normalize_context_t *c, unsigned int end, bool might_short_circuit, bool always_short_circuit)
{
  if ((__builtin_expect (((c->buffer->idx + 1 == end) ? 1 : 0), 1)))
    decompose_current_character (c, might_short_circuit);
  else
    decompose_multi_char_cluster (c, end, always_short_circuit);
}


static int
compare_combining_class (const hb_glyph_info_t *pa, const hb_glyph_info_t *pb)
{
  unsigned int a = _hb_glyph_info_get_modified_combining_class (pa);
  unsigned int b = _hb_glyph_info_get_modified_combining_class (pb);

  return a < b ? -1 : a == b ? 0 : +1;
}


void
_hb_ot_shape_normalize (const hb_ot_shape_plan_t *plan,
   hb_buffer_t *buffer,
   hb_font_t *font)
{
  hb_ot_shape_normalization_mode_t mode = plan->shaper->normalization_preference;
  const hb_ot_shape_normalize_context_t c = {
    plan,
    buffer,
    font,
    buffer->unicode,
    plan->shaper->decompose ? plan->shaper->decompose : decompose_unicode,
    plan->shaper->compose ? plan->shaper->compose : compose_unicode
  };

  bool always_short_circuit = mode == HB_OT_SHAPE_NORMALIZATION_MODE_NONE;
  bool might_short_circuit = always_short_circuit ||
        (mode != HB_OT_SHAPE_NORMALIZATION_MODE_DECOMPOSED &&
         mode != HB_OT_SHAPE_NORMALIZATION_MODE_COMPOSED_DIACRITICS_NO_SHORT_CIRCUIT);
  unsigned int count;
# 317 "../../src/hb-ot-shape-normalize.cc"
  buffer->clear_output ();
  count = buffer->len;
  for (buffer->idx = 0; buffer->idx < count;)
  {
    unsigned int end;
    for (end = buffer->idx + 1; end < count; end++)
      if (buffer->cur().cluster != buffer->info[end].cluster)
        break;

    decompose_cluster (&c, end, might_short_circuit, always_short_circuit);
  }
  buffer->swap_buffers ();




  count = buffer->len;
  for (unsigned int i = 0; i < count; i++)
  {
    if (_hb_glyph_info_get_modified_combining_class (&buffer->info[i]) == 0)
      continue;

    unsigned int end;
    for (end = i + 1; end < count; end++)
      if (_hb_glyph_info_get_modified_combining_class (&buffer->info[end]) == 0)
        break;




    if (end - i > 10) {
      i = end;
      continue;
    }

    hb_bubble_sort (buffer->info + i, end - i, compare_combining_class);

    i = end;
  }


  if (mode == HB_OT_SHAPE_NORMALIZATION_MODE_NONE ||
      mode == HB_OT_SHAPE_NORMALIZATION_MODE_DECOMPOSED)
    return;






  buffer->clear_output ();
  count = buffer->len;
  unsigned int starter = 0;
  buffer->next_glyph ();
  while (buffer->idx < count)
  {
    hb_codepoint_t composed, glyph;
    if (



 ((1<<(_hb_glyph_info_get_general_category (&buffer->cur()))) & ((1<<(HB_UNICODE_GENERAL_CATEGORY_SPACING_MARK)) | (1<<(HB_UNICODE_GENERAL_CATEGORY_ENCLOSING_MARK)) | (1<<(HB_UNICODE_GENERAL_CATEGORY_NON_SPACING_MARK)))) &&


 (starter == buffer->out_len - 1 ||
  _hb_glyph_info_get_modified_combining_class (&buffer->prev()) < _hb_glyph_info_get_modified_combining_class (&buffer->cur())) &&

 c.compose (&c,
     buffer->out_info[starter].codepoint,
     buffer->cur().codepoint,
     &composed) &&

 font->get_glyph (composed, 0, &glyph))
    {

      buffer->next_glyph ();
      if ((__builtin_expect (((buffer->in_error) ? 1 : 0), 0)))
        return;
      buffer->merge_out_clusters (starter, buffer->out_len);
      buffer->out_len--;

      buffer->out_info[starter].codepoint = composed;
      buffer->out_info[starter].var1.u32 = glyph;
      _hb_glyph_info_set_unicode_props (&buffer->out_info[starter], buffer->unicode);

      continue;
    }


    buffer->next_glyph ();

    if (_hb_glyph_info_get_modified_combining_class (&buffer->prev()) == 0)
      starter = buffer->out_len - 1;
  }
  buffer->swap_buffers ();

}
