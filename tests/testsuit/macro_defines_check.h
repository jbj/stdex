// This will generate compiler error if any internal defines of stdex library are found

#ifndef _STDEX_TESTS_MDC_FAILED

#ifndef _STDEX_TESTS_CHECK_HEADER_NAME
    #error "stdex internal macro _STDEX_TESTS_CHECK_HEADER_NAME was not defined before 'macro_defines_check.h' was used"
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#define _STDEX_TESTS_MDC_STRINGIZE_NX(A) #A
#define _STDEX_TESTS_MDC_STRINGIZE(A) _STDEX_TESTS_MDC_STRINGIZE_NX(A)

#ifdef STRINGIZE_HELPER
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro 'STRINGIZE_HELPER' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef STRINGIZE
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro 'STRINGIZE' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef WARNING
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro 'WARNING' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_HAS_FEATURE_BUILTIN
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_HAS_FEATURE_BUILTIN' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_HAS_EXTENSION_BUILTIN
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_HAS_EXTENSION_BUILTIN' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_DELETED_FUNCTION
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_DELETED_FUNCTION' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_DELETED_FUNCTION
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_NOEXCEPT_FUNCTION' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_TWO_COMPLEMENT_REPRESENTATION_IS_USED
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_TWO_COMPLEMENT_REPRESENTATION_IS_USED' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_MIN_RANGE_INT16_LOWER_BOUND
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_MIN_RANGE_INT16_LOWER_BOUND' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_MIN_RANGE_INT16_UPPER_BOUND
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_MIN_RANGE_INT16_LOWER_BOUND' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_MIN_RANGE_INT32_LOWER_BOUND
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_MIN_RANGE_INT16_LOWER_BOUND' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_MIN_RANGE_INT32_UPPER_BOUND
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_MIN_RANGE_INT32_UPPER_BOUND' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_MIN_RANGE_INT64_LOWER_BOUND
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_MIN_RANGE_INT64_LOWER_BOUND' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_MIN_RANGE_INT64_UPPER_BOUND
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_MIN_RANGE_INT64_UPPER_BOUND' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_SHRT_IS_IN_INT16_MAX_RANGE
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_SHRT_IS_IN_INT16_MAX_RANGE' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_SHRT_IS_IN_INT32_MAX_RANGE
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_SHRT_IS_IN_INT32_MAX_RANGE' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_INT_IS_IN_INT32_MAX_RANGE
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_INT_IS_IN_INT32_MAX_RANGE' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_LONG_IS_IN_INT32_MAX_RANGE
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_LONG_IS_IN_INT32_MAX_RANGE' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_SHRT_IS_IN_INT64_MAX_RANGE
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_SHRT_IS_IN_INT64_MAX_RANGE' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_INT_IS_IN_INT64_MAX_RANGE
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_INT_IS_IN_INT64_MAX_RANGE' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_LONG_IS_IN_INT64_MAX_RANGE
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_LONG_IS_IN_INT64_MAX_RANGE' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_LLONG_IS_IN_INT64_MAX_RANGE
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_LLONG_IS_IN_INT64_MAX_RANGE' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_PLATFORM_CAN_HAVE_STD_8_BIT_MULTIPLE_INT
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_PLATFORM_CAN_HAVE_STD_8_BIT_MULTIPLE_INT' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_PLATFORM_CAN_HAVE_STD_8_BIT_INT
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_PLATFORM_CAN_HAVE_STD_8_BIT_INT' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_PLATFORM_CAN_HAVE_STD_16_BIT_INT
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_PLATFORM_CAN_HAVE_STD_16_BIT_INT' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_PLATFORM_CAN_HAVE_STD_32_BIT_INT
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_PLATFORM_CAN_HAVE_STD_32_BIT_INT' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_PLATFORM_CAN_HAVE_STD_64_BIT_INT
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_PLATFORM_CAN_HAVE_STD_64_BIT_INT' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_PLATFORM_CAN_HAVE_NON_STD_8_BIT_INT
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_PLATFORM_CAN_HAVE_NON_STD_8_BIT_INT' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_PLATFORM_CAN_HAVE_NON_STD_16_BIT_INT
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_PLATFORM_CAN_HAVE_NON_STD_16_BIT_INT' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_PLATFORM_CAN_HAVE_NON_STD_32_BIT_INT
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_PLATFORM_CAN_HAVE_NON_STD_32_BIT_INT' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_PLATFORM_CAN_HAVE_NON_STD_64_BIT_INT
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_PLATFORM_CAN_HAVE_NON_STD_64_BIT_INT' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_10_POW_01
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_10_POW_01' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_10_POW_02
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_10_POW_02' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_10_POW_03
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_10_POW_03' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_10_POW_06
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_10_POW_06' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_10_POW_09
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_10_POW_09' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_10_POW_12
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_10_POW_12' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_10_POW_15
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_10_POW_15' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_10_POW_18
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_10_POW_18' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_10_POW_21
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_10_POW_21' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_10_POW_24
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_10_POW_24' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_THREAD_WIN
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_THREAD_WIN' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_TYPES
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_TYPES' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_ARGS
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_ARGS' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_IS_MEM_FUN_PTR
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_IS_MEM_FUN_PTR' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_IS_MEM_FUN_PTR_CLR
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_IS_MEM_FUN_PTR_CLR' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_IS_MEM_FUN_CDECL_PTR
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_IS_MEM_FUN_CDECL_PTR' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_IS_MEM_FUN_STDCALL_PTR
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_IS_MEM_FUN_STDCALL_PTR' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_IS_MEM_FUN_FASTCALL_PTR
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_IS_MEM_FUN_FASTCALL_PTR' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#ifdef _STDEX_UNDEF_LEAN_AND_MEAN
    #define _STDEX_TESTS_MDC_ERROR_MESSAGE\
        _STDEX_TESTS_MDC_STRINGIZE(macro_defines_check:_STDEX_TESTS_CHECK_HEADER_NAME.hpp)
    #line 1 _STDEX_TESTS_MDC_ERROR_MESSAGE
    #error stdex internal macro '_STDEX_UNDEF_LEAN_AND_MEAN' was not undef
    #undef _STDEX_TESTS_MDC_ERROR_MESSAGE
    #define _STDEX_TESTS_MDC_FAILED
#endif

#undef _STDEX_TESTS_MDC_STRINGIZE_NX
#undef _STDEX_TESTS_MDC_STRINGIZE

#endif
