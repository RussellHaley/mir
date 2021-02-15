/* This file is a part of MIR project.
   Copyright (C) 2020-2021 Vladimir Makarov <vmakarov.gcc@gmail.com>.
*/

static char armv7_mirc[]  =
	"/*ARM defines*/\n"
	"\n"
	"#define __ARM_SIZEOF_WCHAR_T 4\n"
	"#define __ARM_FEATURE_SAT 1\n"
	"#define __ARM_ARCH_ISA_ARM 1\n"
	"#define __ARMEL__ 1\n"
	"#define __ARM_FEATURE_UNALIGNED 1\n"
	"#define __ARM_FP 12\n"
	"#define __ARM_ASM_SYNTAX_UNIFIED__ 1\n"
	"#define __ARM_SIZEOF_MINIMAL_ENUM 4\n"
	"#define __ARM_PCS_VFP 1\n"
	"#define __ARM_FEATURE_LDREX 15\n"
	"#define __ARM_FEATURE_QBIT 1\n"
	"#define __ARM_ARCH_PROFILE 65\n"
	"#define __ARM_32BIT_STATE 1\n"
	"#define __ARM_FEATURE_CLZ 1\n"
	"#define __ARM_ARCH_ISA_THUMB 2\n"
	"#define __ARM_ARCH 7\n"
	"#define __arm__ 1\n"
	"#define __ARM_ARCH_7A__ 1\n"
	"#define __ARM_FEATURE_SIMD32 1\n"
	"#define __ARM_FEATURE_COPROC 15\n"
	"#define __ARM_EABI__ 1\n"
	"#define __ARM_FEATURE_DSP 1\n"
	"\n"
	"/*Standard size defines*/\n"
	"#define __SIZEOF_DOUBLE__ 8\n"
	"#define __SIZEOF_FLOAT__ 4\n"
	"#define __SIZEOF_INT__ 4\n"
	"#define __SIZEOF_LONG_DOUBLE__ 8\n"
	"#define __SIZEOF_LONG_LONG__ 8\n"
	"#define __SIZEOF_LONG__ 4\n"
	"#define __SIZEOF_POINTER__ 4\n"
	"#define __SIZEOF_PTRDIFF_T__ 4\n"
	"#define __SIZEOF_SHORT__ 2\n"
	"#define __SIZEOF_SIZE_T__ 4\n"
	"\n"
	"/*Byte Order*/\n"
	"#define __ORDER_LITTLE_ENDIAN__ 1234\n"
	"#define __ORDER_BIG_ENDIAN__ 4321\n"
	"#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__\n"
	"\n"
	"/*Some GCC predefined macros: */\n"
	"#define __SIZE_TYPE__ unsigned int\n"
	"#define __PTRDIFF_TYPE__ int\n"
	"#define __INTMAX_TYPE__ long long int\n"
	"#define __UINTMAX_TYPE__ long long unsigned int\n"
	"#define __INT8_TYPE__ signed char\n"
	"#define __INT16_TYPE__ short int\n"
	"#define __INT32_TYPE__ int\n"
	"#define __UINT64_TYPE__ long long unsigned int\n"
	"#define __INTPTR_TYPE__ int\n"
	"#define __UINTPTR_TYPE__ unsigned int\n"
	"\n"
	"#define __CHAR_BIT__ 8\n"
	"#define __INT8_MAX__ 0x7f\n"
	"#define __INT16_MAX__ 0x7fff\n"
	"#define __INT32_MAX__ 0x7fffffff\n"
	"#define __INT64_MAX__ 0x7fffffffffffffffLL\n"
	"#define __UINT8_MAX__ (__INT8_MAX__ * 2u + 1u)\n"
	"#define __UINT16_MAX__ (__INT16_MAX__ * 2u + 1u)\n"
	"#define __UINT32_MAX__ (__INT32_MAX__ * 2u + 1u)\n"
	"#define __UINT64_MAX__ (__INT64_MAX__ * 2u + 1u)\n"
	"#define __SIZE_MAX__ __UINT632_MAX__\n"
	"#define __PTRDIFF_MAX__ __INT32_MAX__\n"
	"#define __INTMAX_MAX__ __INT32_MAX__\n"
	"#define __UINTMAX_MAX__ __UINT32_MAX__\n"
	"#define __INTPTR_MAX__ __INT32_MAX__\n"
	"#define __UINTPTR_MAX__ __UINT32_MAX__\n"
	"\n"
	"/*Float */\n"
	"#define __FLT_MIN_EXP__ (-125)\n"
	"#define __FLT_MAX_EXP__ 128\n"
	"#define __FLT_DIG__ 6\n"
	"#define __FLT_DECIMAL_DIG__ 9\n"
	"#define __FLT_MANT_DIG__ 24\n"
	"/*Differs from aarch64*/"
	"#define __FLT_MIN__ 1.1754943508222875e-38F\n"
	"#define __FLT_MAX__ 3.4028234663852886e+38F\n"
	"#define __FLT_EPSILON__ 1.1920928955078125e-7F\n"
	"\n"
	"/*Double */\n"
	"#define __DBL_MIN_EXP__ (-1021)\n"
	"#define __DBL_MAX_EXP__ 1024\n"
	"#define __DBL_DIG__ 15\n"
	"#define __DBL_DECIMAL_DIG__ 17\n"
	"#define __DBL_MANT_DIG__ 53\n"
	"/*Differs from aarch64*/"
	"#define __DBL_MIN__ ((double)2.2250738585072014e-308L)\n"
	"#define __DBL_MAX__ ((double)1.7976931348623157e+308L)\n"
	"#define __DBL_EPSILON__ ((double)2.2204460492503131e-16L)\n"
	"\n"
    "typedef unsigned short char16_t;\n"
    "typedef unsigned int char32_t;\n"
    "\n"
#if defined(__linux__)
    "#define __gnu_linux__ 1\n"
    "#define __linux 1\n"
    "#define __linux__ 1\n"
    "#define linux 1\n"
    "#define __unix 1\n"
    "#define __unix__ 1\n"
#endif
    "\n"
    "void *alloca (unsigned long);\n";
