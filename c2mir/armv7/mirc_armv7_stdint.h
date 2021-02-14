/* This file is a part of MIR project.
   Copyright (C) 2020-2021 Vladimir Makarov <vmakarov.gcc@gmail.com>.
*/

/* See C11 7.20 */
static char stdint_str[]
  = "#ifndef _STDINT_H\n"
    "#define _STDINT_H 1\n"
    "\n"
    "#ifndef __int8_t_defined\n"
    "#define __int8_t_defined\n"
    "typedef signed char int8_t;\n"
    "#endif\n"
    "typedef short int int16_t;\n"
    "typedef int int32_t;\n"
    "typedef long int int64_t;\n"
    "\n"
    "typedef unsigned char uint8_t;\n"
    "typedef unsigned short int uint16_t;\n"
    "typedef unsigned int uint32_t;\n"
    "typedef unsigned long int uint64_t;\n"
    "\n"
    "typedef signed char int_least8_t;\n"
    "typedef short int int_least16_t;\n"
    "typedef int int_least32_t;\n"
    "typedef long int int_least64_t;\n"
    "\n"
    "typedef unsigned char uint_least8_t;\n"
    "typedef unsigned short int uint_least16_t;\n"
    "typedef unsigned int uint_least32_t;\n"
    "typedef unsigned long int uint_least64_t;\n"
    "\n"
    "typedef signed char int_fast8_t;\n"
    "typedef long int int_fast16_t;\n"
    "typedef long int int_fast32_t;\n"
    "typedef long int int_fast64_t;\n"
    "\n"
    "typedef unsigned char uint_fast8_t;\n"
    "typedef unsigned long int uint_fast16_t;\n"
    "typedef unsigned long int uint_fast32_t;\n"
    "typedef unsigned long int uint_fast64_t;\n"
    "\n"
    "#define __intptr_t_defined\n"
    "typedef long int intptr_t;\n"
    "typedef unsigned long int uintptr_t;\n"
    "\n"
    "typedef long int intmax_t;\n"
    "typedef unsigned long int uintmax_t;\n"
    "\n"
    "#define __INT64_C(c) c##L\n"
    "#define __UINT64_C(c) c##UL\n"
    "\n"
    "#define INT8_MIN (-128)\n"
    "#define INT16_MIN (-32768)\n"
    "#define INT32_MIN (-2147483648)\n"
    "#define INT64_MIN (-9223372036854775808l)\n"
    "\n"
    "#define INT8_MAX (127)\n"
    "#define INT16_MAX (32767)\n"
    "#define INT32_MAX (2147483647)\n"
    "#define INT64_MAX (9223372036854775807l)\n"
    "\n"
    "#define UINT8_MAX (255)\n"
    "#define UINT16_MAX (65535)\n"
    "#define UINT32_MAX (4294967295u)\n"
    "#define UINT64_MAX (18446744073709551615ul)\n"
    "\n"
    "#define INT_LEAST8_MIN (-128)\n"
    "#define INT_LEAST16_MIN (-32768)\n"
    "#define INT_LEAST32_MIN (-2147483648)\n"
    "#define INT_LEAST64_MIN (-9223372036854775808L)\n"
    "\n"
    "#define INT_LEAST8_MAX (127)\n"
    "#define INT_LEAST16_MAX (32767)\n"
    "#define INT_LEAST32_MAX (2147483647)\n"
    "#define INT_LEAST64_MAX (9223372036854775807L)\n"
    "\n"
    "#define UINT_LEAST8_MAX (255)\n"
    "#define UINT_LEAST16_MAX (65535)\n"
    "#define UINT_LEAST32_MAX (4294967295U)\n"
    "#define UINT_LEAST64_MAX (18446744073709551615UL)\n"
    "\n"
    "#define INT_FAST8_MIN (-128)\n"
    "#define INT_FAST16_MIN (-9223372036854775808L)\n"
    "#define INT_FAST32_MIN (-9223372036854775808L)\n"
    "#define INT_FAST64_MIN (-9223372036854775808L)\n"
    "\n"
    "#define INT_FAST8_MAX (127)\n"
    "#define INT_FAST16_MAX (9223372036854775807L)\n"
    "#define INT_FAST32_MAX (9223372036854775807L)\n"
    "#define INT_FAST64_MAX (9223372036854775807L)\n"
    "\n"
    "#define UINT_FAST8_MAX (255)\n"
    "#define UINT_FAST16_MAX (18446744073709551615UL)\n"
    "#define UINT_FAST32_MAX (18446744073709551615UL)\n"
    "#define UINT_FAST64_MAX (18446744073709551615UL)\n"
    "\n"
    "#define INTPTR_MIN (-9223372036854775808L)\n"
    "#define INTPTR_MAX (9223372036854775807L)\n"
    "#define UINTPTR_MAX (18446744073709551615UL)\n"
    "\n"
    "#define INTMAX_MIN (-9223372036854775808L)\n"
    "#define INTMAX_MAX (9223372036854775807L)\n"
    "#define UINTMAX_MAX (18446744073709551615UL)\n"
    "\n"
    "#define PTRDIFF_MIN (-9223372036854775808L)\n"
    "#define PTRDIFF_MAX (9223372036854775807L)\n"
    "\n"
    "#define SIZE_MAX (18446744073709551615UL)\n"
    "\n"
    "/* For signed wchar_t and wint_t: */\n"
    "#define WCHAR_MIN INT32_MIN\n"
    "#define WCHAR_MAX INT32_MAX\n"
    "#define WINT_MIN WCHAR_MIN\n"
    "#define WINT_MAX WCHAR_MAX\n"
    "\n"
    "#define INT8_C(value) value\n"
    "#define INT16_C(value) value\n"
    "#define INT32_C(value) value\n"
    "#define INT64_C(value) value##L\n"
    "\n"
    "#define UINT8_C(value) value\n"
    "#define UINT16_C(value) value\n"
    "#define UINT32_C(value) value##U\n"
    "#define UINT64_C(value) value##UL\n"
    "\n"
    "#define INTMAX_C(value) value##L\n"
    "#define UINTMAX_C(value) value##UL\n"
    "\n"
    "#endif /* #ifndef _STDINT_H */\n";
