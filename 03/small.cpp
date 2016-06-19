# 1 "../../src/test/test_concurrent_queue.cpp"
# 1 "../../src/test/test_concurrent_queue.cpp" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 120 "<built-in>" 3
# 120 "<command line>" 1
# 126 "<built-in>" 2
# 1 "../../src/test/test_concurrent_queue.cpp" 2
# 30 "../../src/test/test_concurrent_queue.cpp"
# 1 "../../src/test/harness_defs.h" 1
# 32 "../../src/test/harness_defs.h"
# 1 "../../include/tbb/tbb_config.h" 1
# 33 "../../src/test/harness_defs.h" 2
# 141 "../../src/test/harness_defs.h"
namespace Harness {

    template<typename T> void suppress_unused_warning( const T& ) {}



    template<int > struct int_to_type {};
}
# 31 "../../src/test/test_concurrent_queue.cpp" 2
# 1 "../../src/test/test_concurrent_queue.h" 1
# 29 "../../src/test/test_concurrent_queue.h"
# 1 "../../include/tbb/atomic.h" 1
# 32 "../../include/tbb/atomic.h"
# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 41 "/usr/include/c++/4.4/cstddef" 3


# 1 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++config.h" 1 3
# 243 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++config.h" 3
# 1 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/os_defines.h" 1 3
# 39 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/os_defines.h" 3
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
# 40 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/os_defines.h" 2 3
# 244 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++config.h" 2 3


# 1 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/cpu_defines.h" 1 3
# 247 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++config.h" 2 3
# 44 "/usr/include/c++/4.4/cstddef" 2 3
# 1 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/stddef.h" 1 3 4
# 29 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/stddef.h" 3 4
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;


typedef __typeof__(sizeof(int)) size_t;
# 45 "/usr/include/c++/4.4/cstddef" 2 3




namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::ptrdiff_t;
  using ::size_t;

}
# 33 "../../include/tbb/atomic.h" 2







# 1 "../../include/tbb/tbb_machine.h" 1
# 125 "../../include/tbb/tbb_machine.h"
# 1 "../../include/tbb/tbb_stddef.h" 1
# 121 "../../include/tbb/tbb_stddef.h"
# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 122 "../../include/tbb/tbb_stddef.h" 2







# 1 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/stdint.h" 1 3 4
# 33 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
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
# 34 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/stdint.h" 2 3 4
# 130 "../../include/tbb/tbb_stddef.h" 2



typedef void(*assertion_handler_type)( const char* filename, int line, const char* expression, const char * comment );
# 176 "../../include/tbb/tbb_stddef.h"
namespace tbb {
# 190 "../../include/tbb/tbb_stddef.h"
    namespace internal {
        using ::int8_t;
        using ::int16_t;
        using ::int32_t;
        using ::int64_t;
        using ::uint8_t;
        using ::uint16_t;
        using ::uint32_t;
        using ::uint64_t;
    }


    using std::size_t;
    using std::ptrdiff_t;






extern "C" int TBB_runtime_interface_version();






class split {
};





namespace internal {





const size_t NFS_MaxLineSize = 128;
# 253 "../../include/tbb/tbb_stddef.h"
template<class T, int S>
struct padded_base : T {
    char pad[NFS_MaxLineSize - sizeof(T) % NFS_MaxLineSize];
};
template<class T> struct padded_base<T, 0> : T {};


template<class T>
struct padded : padded_base<T, sizeof(T)> {};
# 274 "../../include/tbb/tbb_stddef.h"
void handle_perror( int error_code, const char* aux_info );
# 290 "../../include/tbb/tbb_stddef.h"
void runtime_warning( const char* format, ... );
# 303 "../../include/tbb/tbb_stddef.h"
template<typename T>
inline void poison_pointer( T* ) { }







template<typename T, typename U>
inline T punned_cast( U* ptr ) {
    uintptr_t x = reinterpret_cast<uintptr_t>(ptr);
    return reinterpret_cast<T>(x);
}


class no_assign {

    void operator=( const no_assign& );
public:


    no_assign() {}

};


class no_copy: no_assign {

    no_copy( const no_copy& );
public:

    no_copy() {}
};


template<typename T>
struct allocator_type {
    typedef T value_type;
};
# 353 "../../include/tbb/tbb_stddef.h"
template <unsigned u, unsigned long long ull >
struct select_size_t_constant {


    static const size_t value = (size_t)((sizeof(size_t)==sizeof(u)) ? u : ull);
};


template<typename T>
inline bool is_aligned(T* pointer, uintptr_t alignment) {
    return 0==((uintptr_t)pointer & (alignment-1));
}


template<typename integer_type>
inline bool is_power_of_two(integer_type arg) {
    return arg && (0 == (arg & (arg - 1)));
}


template<typename argument_integer_type, typename divisor_integer_type>
inline argument_integer_type modulo_power_of_two(argument_integer_type arg, divisor_integer_type divisor) {

    ((void)0);
    return (arg & (divisor - 1));
}





template<typename argument_integer_type, typename divisor_integer_type>
inline bool is_power_of_two_factor(argument_integer_type arg, divisor_integer_type divisor) {

    ((void)0);
    return 0 == (arg & (arg - divisor));
}


template<typename T>
void suppress_unused_warning( const T& ) {}




struct version_tag_v3 {};

typedef version_tag_v3 version_tag;

}


}

namespace tbb { namespace internal {
template <bool condition>
struct STATIC_ASSERTION_FAILED;

template <>
struct STATIC_ASSERTION_FAILED<false> { enum {value=1};};

template<>
struct STATIC_ASSERTION_FAILED<true>;
}}
# 126 "../../include/tbb/tbb_machine.h" 2

namespace tbb {
namespace internal {







template <typename T, std::size_t S>
struct machine_load_store;

template <typename T, std::size_t S>
struct machine_load_store_relaxed;

template <typename T, std::size_t S>
struct machine_load_store_seq_cst;




template<size_t S> struct atomic_selector;

template<> struct atomic_selector<1> {
    typedef int8_t word;
    inline static word fetch_store ( volatile void* location, word value );
};

template<> struct atomic_selector<2> {
    typedef int16_t word;
    inline static word fetch_store ( volatile void* location, word value );
};

template<> struct atomic_selector<4> {




    typedef int32_t word;

    inline static word fetch_store ( volatile void* location, word value );
};

template<> struct atomic_selector<8> {
    typedef int64_t word;
    inline static word fetch_store ( volatile void* location, word value );
};

}}
# 246 "../../include/tbb/tbb_machine.h"
# 1 "../../include/tbb/machine/linux_intel64.h" 1
# 36 "../../include/tbb/machine/linux_intel64.h"
# 1 "../../include/tbb/machine/gcc_ia32_common.h" 1
# 36 "../../include/tbb/machine/gcc_ia32_common.h"
static inline intptr_t __TBB_machine_lg( uintptr_t x ) {
    ((void)0);
    uintptr_t j;
    __asm__ ("bsr %1,%0" : "=r"(j) : "r"(x));
    return j;
}
# 54 "../../include/tbb/machine/gcc_ia32_common.h"
static inline void __TBB_machine_pause( int32_t delay ) {
    for (int32_t i = 0; i < delay; i++) {
       __asm__ __volatile__("pause;");
    }
    return;
}







struct __TBB_cpu_ctl_env_t {
    int mxcsr;
    short x87cw;
};
inline void __TBB_get_cpu_ctl_env ( __TBB_cpu_ctl_env_t* ctl ) {
# 81 "../../include/tbb/machine/gcc_ia32_common.h"
    __asm__ __volatile__ (
            "stmxcsr %0\n\t"
            "fstcw %1"
            : "=m"(ctl->mxcsr), "=m"(ctl->x87cw)
    );

}
inline void __TBB_set_cpu_ctl_env ( const __TBB_cpu_ctl_env_t* ctl ) {
    __asm__ __volatile__ (
            "ldmxcsr %0\n\t"
            "fldcw %1"
            : : "m"(ctl->mxcsr), "m"(ctl->x87cw)
    );
}



# 1 "../../include/tbb/machine/gcc_itsx.h" 1
# 48 "../../include/tbb/machine/gcc_itsx.h"
inline static uint8_t __TBB_machine_try_lock_elided( volatile uint8_t* lk )
{
    uint8_t value = 1;
    __asm__ volatile (".byte " "0xF2""; lock; xchgb %0, %1;"
                      : "=r"(value), "=m"(*lk) : "0"(value), "m"(*lk) : "memory" );
    return uint8_t(value^1);
}

inline static void __TBB_machine_try_lock_elided_cancel()
{

    __asm__ volatile ("pause\n" : : : "memory" );
}

inline static void __TBB_machine_unlock_elided( volatile uint8_t* lk )
{
    __asm__ volatile (".byte " "0xF3""; movb $0, %0"
                      : "=m"(*lk) : "m"(*lk) : "memory" );
}
# 98 "../../include/tbb/machine/gcc_ia32_common.h" 2
# 37 "../../include/tbb/machine/linux_intel64.h" 2
# 82 "../../include/tbb/machine/linux_intel64.h"
static inline int8_t __TBB_machine_cmpswp1 (volatile void *ptr, int8_t value, int8_t comparand ) { int8_t result; __asm__ __volatile__("lock\ncmpxchg" "" " %2,%1" : "=a"(result), "=m"(*(volatile int8_t*)ptr) : "q"(value), "0"(comparand), "m"(*(volatile int8_t*)ptr) : "memory"); return result; } static inline int8_t __TBB_machine_fetchadd1(volatile void *ptr, int8_t addend) { int8_t result; __asm__ __volatile__("lock\nxadd" "" " %0,%1" : "=r"(result),"=m"(*(volatile int8_t*)ptr) : "0"(addend), "m"(*(volatile int8_t*)ptr) : "memory"); return result; } static inline int8_t __TBB_machine_fetchstore1(volatile void *ptr, int8_t value) { int8_t result; __asm__ __volatile__("lock\nxchg" "" " %0,%1" : "=r"(result),"=m"(*(volatile int8_t*)ptr) : "0"(value), "m"(*(volatile int8_t*)ptr) : "memory"); return result; }
static inline int16_t __TBB_machine_cmpswp2 (volatile void *ptr, int16_t value, int16_t comparand ) { int16_t result; __asm__ __volatile__("lock\ncmpxchg" "" " %2,%1" : "=a"(result), "=m"(*(volatile int16_t*)ptr) : "q"(value), "0"(comparand), "m"(*(volatile int16_t*)ptr) : "memory"); return result; } static inline int16_t __TBB_machine_fetchadd2(volatile void *ptr, int16_t addend) { int16_t result; __asm__ __volatile__("lock\nxadd" "" " %0,%1" : "=r"(result),"=m"(*(volatile int16_t*)ptr) : "0"(addend), "m"(*(volatile int16_t*)ptr) : "memory"); return result; } static inline int16_t __TBB_machine_fetchstore2(volatile void *ptr, int16_t value) { int16_t result; __asm__ __volatile__("lock\nxchg" "" " %0,%1" : "=r"(result),"=m"(*(volatile int16_t*)ptr) : "0"(value), "m"(*(volatile int16_t*)ptr) : "memory"); return result; }
static inline int32_t __TBB_machine_cmpswp4 (volatile void *ptr, int32_t value, int32_t comparand ) { int32_t result; __asm__ __volatile__("lock\ncmpxchg" "" " %2,%1" : "=a"(result), "=m"(*(volatile int32_t*)ptr) : "q"(value), "0"(comparand), "m"(*(volatile int32_t*)ptr) : "memory"); return result; } static inline int32_t __TBB_machine_fetchadd4(volatile void *ptr, int32_t addend) { int32_t result; __asm__ __volatile__("lock\nxadd" "" " %0,%1" : "=r"(result),"=m"(*(volatile int32_t*)ptr) : "0"(addend), "m"(*(volatile int32_t*)ptr) : "memory"); return result; } static inline int32_t __TBB_machine_fetchstore4(volatile void *ptr, int32_t value) { int32_t result; __asm__ __volatile__("lock\nxchg" "" " %0,%1" : "=r"(result),"=m"(*(volatile int32_t*)ptr) : "0"(value), "m"(*(volatile int32_t*)ptr) : "memory"); return result; }
static inline int64_t __TBB_machine_cmpswp8 (volatile void *ptr, int64_t value, int64_t comparand ) { int64_t result; __asm__ __volatile__("lock\ncmpxchg" "q" " %2,%1" : "=a"(result), "=m"(*(volatile int64_t*)ptr) : "q"(value), "0"(comparand), "m"(*(volatile int64_t*)ptr) : "memory"); return result; } static inline int64_t __TBB_machine_fetchadd8(volatile void *ptr, int64_t addend) { int64_t result; __asm__ __volatile__("lock\nxadd" "q" " %0,%1" : "=r"(result),"=m"(*(volatile int64_t*)ptr) : "0"(addend), "m"(*(volatile int64_t*)ptr) : "memory"); return result; } static inline int64_t __TBB_machine_fetchstore8(volatile void *ptr, int64_t value) { int64_t result; __asm__ __volatile__("lock\nxchg" "q" " %0,%1" : "=r"(result),"=m"(*(volatile int64_t*)ptr) : "0"(value), "m"(*(volatile int64_t*)ptr) : "memory"); return result; }



static inline void __TBB_machine_or( volatile void *ptr, uint64_t value ) {
    __asm__ __volatile__("lock\norq %1,%0" : "=m"(*(volatile uint64_t*)ptr) : "r"(value), "m"(*(volatile uint64_t*)ptr) : "memory");
}

static inline void __TBB_machine_and( volatile void *ptr, uint64_t value ) {
    __asm__ __volatile__("lock\nandq %1,%0" : "=m"(*(volatile uint64_t*)ptr) : "r"(value), "m"(*(volatile uint64_t*)ptr) : "memory");
}
# 247 "../../include/tbb/tbb_machine.h" 2
# 256 "../../include/tbb/tbb_machine.h"
# 1 "../../include/tbb/machine/linux_common.h" 1
# 33 "../../include/tbb/machine/linux_common.h"
# 1 "/usr/include/sched.h" 1 3 4
# 25 "/usr/include/sched.h" 3 4
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
# 26 "/usr/include/sched.h" 2 3 4






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
# 34 "../../include/tbb/machine/linux_common.h" 2


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
# 232 "/usr/include/unistd.h" 3 4
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
# 37 "../../include/tbb/machine/linux_common.h" 2

# 1 "/usr/include/sys/syscall.h" 1 3 4
# 24 "/usr/include/sys/syscall.h" 3 4
# 1 "/usr/include/asm/unistd.h" 1 3 4
# 12 "/usr/include/asm/unistd.h" 3 4
# 1 "/usr/include/asm/unistd_64.h" 1 3 4
# 13 "/usr/include/asm/unistd.h" 2 3 4
# 25 "/usr/include/sys/syscall.h" 2 3 4






# 1 "/usr/include/bits/syscall.h" 1 3 4
# 32 "/usr/include/sys/syscall.h" 2 3 4
# 39 "../../include/tbb/machine/linux_common.h" 2




# 1 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/limits.h" 1 3 4
# 35 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 143 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/posix1_lim.h" 1 3 4
# 160 "/usr/include/bits/posix1_lim.h" 3 4
# 1 "/usr/include/bits/local_lim.h" 1 3 4
# 38 "/usr/include/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/bits/local_lim.h" 2 3 4
# 161 "/usr/include/bits/posix1_lim.h" 2 3 4
# 144 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/bits/posix2_lim.h" 1 3 4
# 148 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/bits/xopen_lim.h" 1 3 4
# 33 "/usr/include/bits/xopen_lim.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 34 "/usr/include/bits/xopen_lim.h" 2 3 4
# 152 "/usr/include/limits.h" 2 3 4
# 36 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/limits.h" 2 3 4
# 44 "../../include/tbb/machine/linux_common.h" 2
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
# 45 "../../include/tbb/machine/linux_common.h" 2
# 63 "../../include/tbb/machine/linux_common.h"
namespace tbb {

namespace internal {

inline int futex_wait( void *futex, int comparand ) {
    int r = syscall( 202,futex,0,comparand,__null,__null,0 );




    return r;
}

inline int futex_wakeup_one( void *futex ) {
    int r = ::syscall( 202,futex,1,1,__null,__null,0 );
    ((void)0);
    return r;
}

inline int futex_wakeup_all( void *futex ) {
    int r = ::syscall( 202,futex,1,2147483647,__null,__null,0 );
    ((void)0);
    return r;
}

}

}
# 257 "../../include/tbb/tbb_machine.h" 2
# 347 "../../include/tbb/tbb_machine.h"
namespace tbb {


inline void atomic_fence () { __asm__ __volatile__("mfence": : :"memory"); }

namespace internal {



class atomic_backoff : no_copy {



    static const int32_t LOOPS_BEFORE_YIELD = 16;
    int32_t count;
public:



    atomic_backoff() : count(1) {}

    atomic_backoff( bool ) : count(1) { pause(); }


    void pause() {
        if( count<=LOOPS_BEFORE_YIELD ) {
            __TBB_machine_pause(count);

            count*=2;
        } else {

            sched_yield();
        }
    }


    bool bounded_pause() {
        if( count<=LOOPS_BEFORE_YIELD ) {
            __TBB_machine_pause(count);

            count*=2;
            return true;
        } else {
            return false;
        }
    }

    void reset() {
        count = 1;
    }
};



template<typename T, typename U>
void spin_wait_while_eq( const volatile T& location, U value ) {
    atomic_backoff backoff;
    while( location==value ) backoff.pause();
}



template<typename T, typename U>
void spin_wait_until_eq( const volatile T& location, const U value ) {
    atomic_backoff backoff;
    while( location!=value ) backoff.pause();
}
# 437 "../../include/tbb/tbb_machine.h"
template<typename T>
inline T __TBB_MaskedCompareAndSwap (volatile T * const ptr, const T value, const T comparand ) {
    struct endianness{ static bool is_big_endian(){




            return 0==1;



    }};

    const uint32_t byte_offset = (uint32_t) ((uintptr_t)ptr & 0x3);
    volatile uint32_t * const aligned_ptr = (uint32_t*)((uintptr_t)ptr - byte_offset );


    const uint32_t bits_to_shift = 8*(endianness::is_big_endian() ? (4 - sizeof(T) - (byte_offset)) : byte_offset);
    const uint32_t mask = (((uint32_t)1<<(sizeof(T)*8)) - 1 )<<bits_to_shift;

    const uint32_t shifted_comparand = ((uint32_t)comparand << bits_to_shift)&mask;
    const uint32_t shifted_value = ((uint32_t)value << bits_to_shift)&mask;

    for( atomic_backoff b;;b.pause() ) {
        const uint32_t surroundings = *aligned_ptr & ~mask ;
        const uint32_t big_comparand = surroundings | shifted_comparand ;
        const uint32_t big_value = surroundings | shifted_value ;


        const uint32_t big_result = (uint32_t)__TBB_machine_cmpswp4( aligned_ptr, big_value, big_comparand );
        if( big_result == big_comparand
          || ((big_result ^ big_comparand) & mask) != 0)
        {
            return T((big_result & mask) >> bits_to_shift);
        }
        else continue;
    }
}



template<size_t S, typename T>
inline T __TBB_CompareAndSwapGeneric (volatile void *ptr, T value, T comparand );

template<>
inline uint8_t __TBB_CompareAndSwapGeneric <1,uint8_t> (volatile void *ptr, uint8_t value, uint8_t comparand ) {



    return __TBB_machine_cmpswp1(ptr,value,comparand);

}

template<>
inline uint16_t __TBB_CompareAndSwapGeneric <2,uint16_t> (volatile void *ptr, uint16_t value, uint16_t comparand ) {



    return __TBB_machine_cmpswp2(ptr,value,comparand);

}

template<>
inline uint32_t __TBB_CompareAndSwapGeneric <4,uint32_t> (volatile void *ptr, uint32_t value, uint32_t comparand ) {

    return (uint32_t)__TBB_machine_cmpswp4(ptr,value,comparand);
}


template<>
inline uint64_t __TBB_CompareAndSwapGeneric <8,uint64_t> (volatile void *ptr, uint64_t value, uint64_t comparand ) {
    return __TBB_machine_cmpswp8(ptr,value,comparand);
}


template<size_t S, typename T>
inline T __TBB_FetchAndAddGeneric (volatile void *ptr, T addend) {
    T result;
    for( atomic_backoff b;;b.pause() ) {
        result = *reinterpret_cast<volatile T *>(ptr);

        if( __TBB_CompareAndSwapGeneric<S,T> ( ptr, result+addend, result )==result )
            break;
    }
    return result;
}

template<size_t S, typename T>
inline T __TBB_FetchAndStoreGeneric (volatile void *ptr, T value) {
    T result;
    for( atomic_backoff b;;b.pause() ) {
        result = *reinterpret_cast<volatile T *>(ptr);

        if( __TBB_CompareAndSwapGeneric<S,T> ( ptr, value, result )==result )
            break;
    }
    return result;
}
# 573 "../../include/tbb/tbb_machine.h"
atomic_selector<1>::word atomic_selector<1>::fetch_store ( volatile void* location, word value ) { return __TBB_machine_fetchstore1( location, value ); }
atomic_selector<2>::word atomic_selector<2>::fetch_store ( volatile void* location, word value ) { return __TBB_machine_fetchstore2( location, value ); }
atomic_selector<4>::word atomic_selector<4>::fetch_store ( volatile void* location, word value ) { return __TBB_machine_fetchstore4( location, value ); }
atomic_selector<8>::word atomic_selector<8>::fetch_store ( volatile void* location, word value ) { return __TBB_machine_fetchstore8( location, value ); }
# 610 "../../include/tbb/tbb_machine.h"
template <typename T, size_t S>
struct machine_load_store {
    static T load_with_acquire ( const volatile T& location ) {
        T to_return = location;
        __asm__ __volatile__("": : :"memory");
        return to_return;
    }
    static void store_with_release ( volatile T &location, T value ) {
        __asm__ __volatile__("": : :"memory");
        location = value;
    }
};
# 638 "../../include/tbb/tbb_machine.h"
template <typename T, size_t S>
struct machine_load_store_seq_cst {
    static T load ( const volatile T& location ) {
        __asm__ __volatile__("mfence": : :"memory");
        return machine_load_store<T,S>::load_with_acquire( location );
    }

    static void store ( volatile T &location, T value ) {
        atomic_selector<S>::fetch_store( (volatile void*)&location, (typename atomic_selector<S>::word)value );
    }






};
# 681 "../../include/tbb/tbb_machine.h"
template <typename T, size_t S>
struct machine_load_store_relaxed {
    static inline T load ( const volatile T& location ) {
        return location;
    }
    static inline void store ( volatile T& location, T value ) {
        location = value;
    }
};
# 706 "../../include/tbb/tbb_machine.h"
template<typename T>
inline T __TBB_load_with_acquire(const volatile T &location) {
    return machine_load_store<T,sizeof(T)>::load_with_acquire( location );
}
template<typename T, typename V>
inline void __TBB_store_with_release(volatile T& location, V value) {
    machine_load_store<T,sizeof(T)>::store_with_release( location, T(value) );
}

inline void __TBB_store_with_release(volatile size_t& location, size_t value) {
    machine_load_store<size_t,sizeof(size_t)>::store_with_release( location, value );
}

template<typename T>
inline T __TBB_load_full_fence(const volatile T &location) {
    return machine_load_store_seq_cst<T,sizeof(T)>::load( location );
}
template<typename T, typename V>
inline void __TBB_store_full_fence(volatile T& location, V value) {
    machine_load_store_seq_cst<T,sizeof(T)>::store( location, T(value) );
}

inline void __TBB_store_full_fence(volatile size_t& location, size_t value) {
    machine_load_store_seq_cst<size_t,sizeof(size_t)>::store( location, value );
}

template<typename T>
inline T __TBB_load_relaxed (const volatile T& location) {
    return machine_load_store_relaxed<T,sizeof(T)>::load( const_cast<T&>(location) );
}
template<typename T, typename V>
inline void __TBB_store_relaxed ( volatile T& location, V value ) {
    machine_load_store_relaxed<T,sizeof(T)>::store( const_cast<T&>(location), T(value) );
}

inline void __TBB_store_relaxed ( volatile size_t& location, size_t value ) {
    machine_load_store_relaxed<size_t,sizeof(size_t)>::store( const_cast<size_t&>(location), value );
}
# 777 "../../include/tbb/tbb_machine.h"
struct __TBB_machine_type_with_alignment_16 { uint32_t member[16/sizeof(uint32_t)]; } __attribute__((aligned(16)));
struct __TBB_machine_type_with_alignment_32 { uint32_t member[32/sizeof(uint32_t)]; } __attribute__((aligned(32)));
struct __TBB_machine_type_with_alignment_64 { uint32_t member[64/sizeof(uint32_t)]; } __attribute__((aligned(64)));

typedef __TBB_machine_type_with_alignment_64 __TBB_machine_type_with_strictest_alignment;


template<size_t N> struct type_with_alignment;


template<> struct type_with_alignment<1> { char member; };
template<> struct type_with_alignment<2> { uint16_t member; };
template<> struct type_with_alignment<4> { uint32_t member; };
template<> struct type_with_alignment<8> { uint64_t member; };
template<> struct type_with_alignment<16> {__TBB_machine_type_with_alignment_16 member; };
template<> struct type_with_alignment<32> {__TBB_machine_type_with_alignment_32 member; };
template<> struct type_with_alignment<64> {__TBB_machine_type_with_alignment_64 member; };
# 811 "../../include/tbb/tbb_machine.h"
template<typename T>
struct reverse {
    static const T byte_table[256];
};


template<typename T>
const T reverse<T>::byte_table[256] = {
    0x00, 0x80, 0x40, 0xC0, 0x20, 0xA0, 0x60, 0xE0, 0x10, 0x90, 0x50, 0xD0, 0x30, 0xB0, 0x70, 0xF0,
    0x08, 0x88, 0x48, 0xC8, 0x28, 0xA8, 0x68, 0xE8, 0x18, 0x98, 0x58, 0xD8, 0x38, 0xB8, 0x78, 0xF8,
    0x04, 0x84, 0x44, 0xC4, 0x24, 0xA4, 0x64, 0xE4, 0x14, 0x94, 0x54, 0xD4, 0x34, 0xB4, 0x74, 0xF4,
    0x0C, 0x8C, 0x4C, 0xCC, 0x2C, 0xAC, 0x6C, 0xEC, 0x1C, 0x9C, 0x5C, 0xDC, 0x3C, 0xBC, 0x7C, 0xFC,
    0x02, 0x82, 0x42, 0xC2, 0x22, 0xA2, 0x62, 0xE2, 0x12, 0x92, 0x52, 0xD2, 0x32, 0xB2, 0x72, 0xF2,
    0x0A, 0x8A, 0x4A, 0xCA, 0x2A, 0xAA, 0x6A, 0xEA, 0x1A, 0x9A, 0x5A, 0xDA, 0x3A, 0xBA, 0x7A, 0xFA,
    0x06, 0x86, 0x46, 0xC6, 0x26, 0xA6, 0x66, 0xE6, 0x16, 0x96, 0x56, 0xD6, 0x36, 0xB6, 0x76, 0xF6,
    0x0E, 0x8E, 0x4E, 0xCE, 0x2E, 0xAE, 0x6E, 0xEE, 0x1E, 0x9E, 0x5E, 0xDE, 0x3E, 0xBE, 0x7E, 0xFE,
    0x01, 0x81, 0x41, 0xC1, 0x21, 0xA1, 0x61, 0xE1, 0x11, 0x91, 0x51, 0xD1, 0x31, 0xB1, 0x71, 0xF1,
    0x09, 0x89, 0x49, 0xC9, 0x29, 0xA9, 0x69, 0xE9, 0x19, 0x99, 0x59, 0xD9, 0x39, 0xB9, 0x79, 0xF9,
    0x05, 0x85, 0x45, 0xC5, 0x25, 0xA5, 0x65, 0xE5, 0x15, 0x95, 0x55, 0xD5, 0x35, 0xB5, 0x75, 0xF5,
    0x0D, 0x8D, 0x4D, 0xCD, 0x2D, 0xAD, 0x6D, 0xED, 0x1D, 0x9D, 0x5D, 0xDD, 0x3D, 0xBD, 0x7D, 0xFD,
    0x03, 0x83, 0x43, 0xC3, 0x23, 0xA3, 0x63, 0xE3, 0x13, 0x93, 0x53, 0xD3, 0x33, 0xB3, 0x73, 0xF3,
    0x0B, 0x8B, 0x4B, 0xCB, 0x2B, 0xAB, 0x6B, 0xEB, 0x1B, 0x9B, 0x5B, 0xDB, 0x3B, 0xBB, 0x7B, 0xFB,
    0x07, 0x87, 0x47, 0xC7, 0x27, 0xA7, 0x67, 0xE7, 0x17, 0x97, 0x57, 0xD7, 0x37, 0xB7, 0x77, 0xF7,
    0x0F, 0x8F, 0x4F, 0xCF, 0x2F, 0xAF, 0x6F, 0xEF, 0x1F, 0x9F, 0x5F, 0xDF, 0x3F, 0xBF, 0x7F, 0xFF
};

}
}


using tbb::internal::__TBB_load_with_acquire;
using tbb::internal::__TBB_store_with_release;
# 897 "../../include/tbb/tbb_machine.h"
typedef unsigned char __TBB_Flag;

typedef __TBB_Flag __TBB_atomic_flag;


inline bool __TBB_TryLockByte( __TBB_atomic_flag &flag ) {
    return __TBB_machine_cmpswp1(&flag,1,0)==0;
}



inline __TBB_Flag __TBB_LockByte( __TBB_atomic_flag& flag ) {
    tbb::internal::atomic_backoff backoff;
    while( !__TBB_TryLockByte(flag) ) backoff.pause();
    return 0;
}
# 921 "../../include/tbb/tbb_machine.h"
inline void __TBB_TryLockByteElidedCancel() { __TBB_machine_try_lock_elided_cancel(); }

inline bool __TBB_TryLockByteElided( __TBB_atomic_flag& flag ) {
    bool res = __TBB_machine_try_lock_elided( &flag )!=0;



    if( !res ) __TBB_TryLockByteElidedCancel();
    return res;
}

inline void __TBB_LockByteElided( __TBB_atomic_flag& flag )
{
    for(;;) {
        tbb::internal::spin_wait_while_eq( flag, 1 );
        if( __TBB_machine_try_lock_elided( &flag ) )
            return;


        __TBB_TryLockByteElidedCancel();
    }
}

inline void __TBB_UnlockByteElided( __TBB_atomic_flag& flag ) {
    __TBB_machine_unlock_elided( &flag );
}



inline unsigned char __TBB_ReverseByte(unsigned char src) {
    return tbb::internal::reverse<unsigned char>::byte_table[src];
}


template<typename T>
T __TBB_ReverseBits(T src) {
    T dst;
    unsigned char *original = (unsigned char *) &src;
    unsigned char *reversed = (unsigned char *) &dst;

    for( int i = sizeof(T)-1; i >= 0; i-- )
        reversed[i] = __TBB_ReverseByte( original[sizeof(T)-i-1] );

    return dst;
}
# 41 "../../include/tbb/atomic.h" 2







namespace tbb {


enum memory_semantics {

    full_fence,

    acquire,

    release,

    relaxed
};


namespace internal {
# 73 "../../include/tbb/atomic.h"
template<size_t S>
struct atomic_rep;

template<>
struct atomic_rep<1> {
    typedef int8_t word;
};
template<>
struct atomic_rep<2> {
    typedef int16_t word;
};
template<>
struct atomic_rep<4> {




    typedef int32_t word;

};

template<>
struct atomic_rep<8> {
    typedef int64_t word;
};


template<typename value_type, size_t size>
struct aligned_storage;
# 122 "../../include/tbb/atomic.h"
template<typename value_type>
struct aligned_storage<value_type,1> {
    value_type my_value;




};

template<typename value_type> struct aligned_storage<value_type,2> { value_type my_value __attribute__ ((aligned(2))); };
template<typename value_type> struct aligned_storage<value_type,4> { value_type my_value __attribute__ ((aligned(4))); };

template<typename value_type> struct aligned_storage<value_type,8> { value_type my_value __attribute__ ((aligned(8))); };


template<size_t Size, memory_semantics M>
struct atomic_traits;
# 169 "../../include/tbb/atomic.h"
template<memory_semantics M>
struct atomic_load_store_traits;
# 204 "../../include/tbb/atomic.h"
template<memory_semantics M> struct atomic_traits<1,M> { typedef atomic_rep<1>::word word; inline static word compare_and_swap( volatile void* location, word new_value, word comparand ) { return __TBB_machine_cmpswp1(location,new_value,comparand); } inline static word fetch_and_add( volatile void* location, word addend ) { return __TBB_machine_fetchadd1(location,addend); } inline static word fetch_and_store( volatile void* location, word value ) { return __TBB_machine_fetchstore1(location,value); } };
template<memory_semantics M> struct atomic_traits<2,M> { typedef atomic_rep<2>::word word; inline static word compare_and_swap( volatile void* location, word new_value, word comparand ) { return __TBB_machine_cmpswp2(location,new_value,comparand); } inline static word fetch_and_add( volatile void* location, word addend ) { return __TBB_machine_fetchadd2(location,addend); } inline static word fetch_and_store( volatile void* location, word value ) { return __TBB_machine_fetchstore2(location,value); } };
template<memory_semantics M> struct atomic_traits<4,M> { typedef atomic_rep<4>::word word; inline static word compare_and_swap( volatile void* location, word new_value, word comparand ) { return __TBB_machine_cmpswp4(location,new_value,comparand); } inline static word fetch_and_add( volatile void* location, word addend ) { return __TBB_machine_fetchadd4(location,addend); } inline static word fetch_and_store( volatile void* location, word value ) { return __TBB_machine_fetchstore4(location,value); } };

template<memory_semantics M> struct atomic_traits<8,M> { typedef atomic_rep<8>::word word; inline static word compare_and_swap( volatile void* location, word new_value, word comparand ) { return __TBB_machine_cmpswp8(location,new_value,comparand); } inline static word fetch_and_add( volatile void* location, word addend ) { return __TBB_machine_fetchadd8(location,addend); } inline static word fetch_and_store( volatile void* location, word value ) { return __TBB_machine_fetchstore8(location,value); } };



template<> struct atomic_load_store_traits<full_fence> { template <typename T> inline static T load( const volatile T& location ) { return __TBB_load_full_fence( location ); } template <typename T> inline static void store( volatile T& location, T value ) { __TBB_store_full_fence( location, value ); } };
template<> struct atomic_load_store_traits<acquire> { template <typename T> inline static T load( const volatile T& location ) { return __TBB_load_with_acquire( location ); } template <typename T> inline static void store( volatile T& location, T value ) { __TBB_store_acquire( location, value ); } };
template<> struct atomic_load_store_traits<release> { template <typename T> inline static T load( const volatile T& location ) { return __TBB_load_release( location ); } template <typename T> inline static void store( volatile T& location, T value ) { __TBB_store_with_release( location, value ); } };
template<> struct atomic_load_store_traits<relaxed> { template <typename T> inline static T load( const volatile T& location ) { return __TBB_load_relaxed( location ); } template <typename T> inline static void store( volatile T& location, T value ) { __TBB_store_relaxed( location, value ); } };
# 225 "../../include/tbb/atomic.h"
template<typename T>
struct atomic_impl {
protected:
    aligned_storage<T,sizeof(T)> my_storage;
private:


    template<typename value_type>
    union converter {
        typedef typename atomic_rep<sizeof(value_type)>::word bits_type;
        converter(){}
        converter(value_type a_value) : value(a_value) {}
        value_type value;
        bits_type bits;
    };

    template<typename value_t>
    static typename converter<value_t>::bits_type to_bits(value_t value){
        return converter<value_t>(value).bits;
    }
    template<typename value_t>
    static value_t to_value(typename converter<value_t>::bits_type bits){
        converter<value_t> u;
        u.bits = bits;
        return u.value;
    }

    template<typename value_t>
    union ptr_converter;

    template<typename value_t>
    union ptr_converter<value_t *> {
        ptr_converter(){}
        ptr_converter(value_t* a_value) : value(a_value) {}
        value_t* value;
        uintptr_t bits;
    };


    template<typename value_t>
    static typename converter<value_t>::bits_type & to_bits_ref(value_t& value){



            return *(typename converter<value_t>::bits_type*)ptr_converter<value_t*>(&value).bits;



    }


public:
    typedef T value_type;





    template<memory_semantics M>
    value_type fetch_and_store( value_type value ) {
          return to_value<value_type>(
                  internal::atomic_traits<sizeof(value_type),M>::fetch_and_store( &my_storage.my_value, to_bits(value) )
          );
    }

    value_type fetch_and_store( value_type value ) {
        return fetch_and_store<full_fence>(value);
    }

    template<memory_semantics M>
    value_type compare_and_swap( value_type value, value_type comparand ) {
        return to_value<value_type>(
                internal::atomic_traits<sizeof(value_type),M>::compare_and_swap( &my_storage.my_value, to_bits(value), to_bits(comparand) )
        );
    }

    value_type compare_and_swap( value_type value, value_type comparand ) {
        return compare_and_swap<full_fence>(value,comparand);
    }

    operator value_type() const volatile {
        return to_value<value_type>(
                __TBB_load_with_acquire( to_bits_ref(my_storage.my_value) )
        );
    }

    template<memory_semantics M>
    value_type load () const {
        return to_value<value_type>(
                internal::atomic_load_store_traits<M>::load( to_bits_ref(my_storage.my_value) )
        );
    }

    value_type load () const {
        return load<acquire>();
    }

    template<memory_semantics M>
    void store ( value_type value ) {
        internal::atomic_load_store_traits<M>::store( to_bits_ref(my_storage.my_value), to_bits(value));
    }

    void store ( value_type value ) {
        store<release>( value );
    }

protected:
    value_type store_with_release( value_type rhs ) {

        __TBB_store_with_release( to_bits_ref(my_storage.my_value), to_bits(rhs) );
        return rhs;
    }
};





template<typename I, typename D, typename StepType>
struct atomic_impl_with_arithmetic: atomic_impl<I> {
public:
    typedef I value_type;




    template<memory_semantics M>
    value_type fetch_and_add( D addend ) {
        return value_type(internal::atomic_traits<sizeof(value_type),M>::fetch_and_add( &this->my_storage.my_value, addend*sizeof(StepType) ));
    }

    value_type fetch_and_add( D addend ) {
        return fetch_and_add<full_fence>(addend);
    }

    template<memory_semantics M>
    value_type fetch_and_increment() {
        return fetch_and_add<M>(1);
    }

    value_type fetch_and_increment() {
        return fetch_and_add(1);
    }

    template<memory_semantics M>
    value_type fetch_and_decrement() {
        return fetch_and_add<M>((D(D(0)-D(1))));
    }

    value_type fetch_and_decrement() {
        return fetch_and_add((D(D(0)-D(1))));
    }

public:
    value_type operator+=( D value ) {
        return fetch_and_add(value)+value;
    }

    value_type operator-=( D value ) {


        return operator+=(D(0)-value);
    }

    value_type operator++() {
        return fetch_and_add(1)+1;
    }

    value_type operator--() {
        return fetch_and_add((D(D(0)-D(1))))-1;
    }

    value_type operator++(int) {
        return fetch_and_add(1);
    }

    value_type operator--(int) {
        return fetch_and_add((D(D(0)-D(1))));
    }
};

}





template<typename T>
struct atomic: internal::atomic_impl<T> {




    T operator=( T rhs ) {

        return this->store_with_release(rhs);
    }
    atomic<T>& operator=( const atomic<T>& rhs ) {this->store_with_release(rhs); return *this;}
};
# 444 "../../include/tbb/atomic.h"
template<> struct atomic<long long>: internal::atomic_impl_with_arithmetic<long long,long long,char> { long long operator=( long long rhs ) {return store_with_release(rhs);} atomic<long long>& operator=( const atomic<long long>& rhs ) {store_with_release(rhs); return *this;} };
template<> struct atomic<unsigned long long>: internal::atomic_impl_with_arithmetic<unsigned long long,unsigned long long,char> { unsigned long long operator=( unsigned long long rhs ) {return store_with_release(rhs);} atomic<unsigned long long>& operator=( const atomic<unsigned long long>& rhs ) {store_with_release(rhs); return *this;} };



template<> struct atomic<long>: internal::atomic_impl_with_arithmetic<long,long,char> { long operator=( long rhs ) {return store_with_release(rhs);} atomic<long>& operator=( const atomic<long>& rhs ) {store_with_release(rhs); return *this;} };
template<> struct atomic<unsigned long>: internal::atomic_impl_with_arithmetic<unsigned long,unsigned long,char> { unsigned long operator=( unsigned long rhs ) {return store_with_release(rhs);} atomic<unsigned long>& operator=( const atomic<unsigned long>& rhs ) {store_with_release(rhs); return *this;} };
# 476 "../../include/tbb/atomic.h"
template<> struct atomic<unsigned>: internal::atomic_impl_with_arithmetic<unsigned,unsigned,char> { unsigned operator=( unsigned rhs ) {return store_with_release(rhs);} atomic<unsigned>& operator=( const atomic<unsigned>& rhs ) {store_with_release(rhs); return *this;} };
template<> struct atomic<int>: internal::atomic_impl_with_arithmetic<int,int,char> { int operator=( int rhs ) {return store_with_release(rhs);} atomic<int>& operator=( const atomic<int>& rhs ) {store_with_release(rhs); return *this;} };


template<> struct atomic<unsigned short>: internal::atomic_impl_with_arithmetic<unsigned short,unsigned short,char> { unsigned short operator=( unsigned short rhs ) {return store_with_release(rhs);} atomic<unsigned short>& operator=( const atomic<unsigned short>& rhs ) {store_with_release(rhs); return *this;} };
template<> struct atomic<short>: internal::atomic_impl_with_arithmetic<short,short,char> { short operator=( short rhs ) {return store_with_release(rhs);} atomic<short>& operator=( const atomic<short>& rhs ) {store_with_release(rhs); return *this;} };
template<> struct atomic<char>: internal::atomic_impl_with_arithmetic<char,char,char> { char operator=( char rhs ) {return store_with_release(rhs);} atomic<char>& operator=( const atomic<char>& rhs ) {store_with_release(rhs); return *this;} };
template<> struct atomic<signed char>: internal::atomic_impl_with_arithmetic<signed char,signed char,char> { signed char operator=( signed char rhs ) {return store_with_release(rhs);} atomic<signed char>& operator=( const atomic<signed char>& rhs ) {store_with_release(rhs); return *this;} };
template<> struct atomic<unsigned char>: internal::atomic_impl_with_arithmetic<unsigned char,unsigned char,char> { unsigned char operator=( unsigned char rhs ) {return store_with_release(rhs);} atomic<unsigned char>& operator=( const atomic<unsigned char>& rhs ) {store_with_release(rhs); return *this;} };


template<> struct atomic<wchar_t>: internal::atomic_impl_with_arithmetic<wchar_t,wchar_t,char> { wchar_t operator=( wchar_t rhs ) {return store_with_release(rhs);} atomic<wchar_t>& operator=( const atomic<wchar_t>& rhs ) {store_with_release(rhs); return *this;} };



template<typename T> struct atomic<T*>: internal::atomic_impl_with_arithmetic<T*,ptrdiff_t,T> {




    T* operator=( T* rhs ) {

        return this->store_with_release(rhs);
    }
    atomic<T*>& operator=( const atomic<T*>& rhs ) {
        this->store_with_release(rhs); return *this;
    }
    T* operator->() const {
        return (*this);
    }
};


template<> struct atomic<void*>: internal::atomic_impl<void*> {




    void* operator=( void* rhs ) {

        return this->store_with_release(rhs);
    }
    atomic<void*>& operator=( const atomic<void*>& rhs ) {
        this->store_with_release(rhs); return *this;
    }
};




template <memory_semantics M, typename T>
T load ( const atomic<T>& a ) { return a.template load<M>(); }

template <memory_semantics M, typename T>
void store ( atomic<T>& a, T value ) { return a.template store<M>(value); }

namespace interface6{

template<typename T>
atomic<T> make_atomic(T t) {
    atomic<T> a;
    store<relaxed>(a,t);
    return a;
}
}
using interface6::make_atomic;

namespace internal {


template<typename T>
inline atomic<T>& as_atomic( T& t ) {
    return (atomic<T>&)t;
}
}

}
# 30 "../../src/test/test_concurrent_queue.h" 2
# 1 "../../include/tbb/cache_aligned_allocator.h" 1
# 32 "../../include/tbb/cache_aligned_allocator.h"
# 1 "/usr/include/c++/4.4/new" 1 3
# 39 "/usr/include/c++/4.4/new" 3
# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 41 "/usr/include/c++/4.4/cstddef" 3
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

# 33 "../../include/tbb/cache_aligned_allocator.h" 2





namespace tbb {


namespace internal {


    size_t NFS_GetLineSize();



    void* NFS_Allocate( size_t n_element, size_t element_size, void* hint );




    void NFS_Free( void* );
}
# 67 "../../include/tbb/cache_aligned_allocator.h"
template<typename T>
class cache_aligned_allocator {
public:
    typedef typename internal::allocator_type<T>::value_type value_type;
    typedef value_type* pointer;
    typedef const value_type* const_pointer;
    typedef value_type& reference;
    typedef const value_type& const_reference;
    typedef size_t size_type;
    typedef ptrdiff_t difference_type;
    template<typename U> struct rebind {
        typedef cache_aligned_allocator<U> other;
    };

    cache_aligned_allocator() throw() {}
    cache_aligned_allocator( const cache_aligned_allocator& ) throw() {}
    template<typename U> cache_aligned_allocator(const cache_aligned_allocator<U>&) throw() {}

    pointer address(reference x) const {return &x;}
    const_pointer address(const_reference x) const {return &x;}


    pointer allocate( size_type n, const void* hint=0 ) {

        return pointer(internal::NFS_Allocate( n, sizeof(value_type), const_cast<void*>(hint) ));
    }


    void deallocate( pointer p, size_type ) {
        internal::NFS_Free(p);
    }


    size_type max_size() const throw() {
        return (~size_t(0)-internal::NFS_MaxLineSize)/sizeof(value_type);
    }
# 114 "../../include/tbb/cache_aligned_allocator.h"
    void construct( pointer p, const value_type& value ) {::new((void*)(p)) value_type(value);}



    void destroy( pointer p ) {p->~value_type();}
};







template<>
class cache_aligned_allocator<void> {
public:
    typedef void* pointer;
    typedef const void* const_pointer;
    typedef void value_type;
    template<typename U> struct rebind {
        typedef cache_aligned_allocator<U> other;
    };
};

template<typename T, typename U>
inline bool operator==( const cache_aligned_allocator<T>&, const cache_aligned_allocator<U>& ) {return true;}

template<typename T, typename U>
inline bool operator!=( const cache_aligned_allocator<T>&, const cache_aligned_allocator<U>& ) {return false;}

}
# 31 "../../src/test/test_concurrent_queue.h" 2
# 1 "../../include/tbb/spin_mutex.h" 1
# 32 "../../include/tbb/spin_mutex.h"
# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 33 "../../include/tbb/spin_mutex.h" 2

# 1 "../../include/tbb/aligned_space.h" 1
# 35 "../../include/tbb/aligned_space.h"
namespace tbb {




template<typename T,size_t N>
class aligned_space {
private:
    typedef tbb::internal::type_with_alignment<__alignof__(T)> element_type;
    element_type array[(sizeof(T)*N+sizeof(element_type)-1)/sizeof(element_type)];
public:

    T* begin() {return internal::punned_cast<T*>(this);}


    T* end() {return begin()+N;}
};

}
# 35 "../../include/tbb/spin_mutex.h" 2


# 1 "../../include/tbb/tbb_profiling.h" 1
# 107 "../../include/tbb/tbb_profiling.h"
namespace tbb {
    namespace internal {

        enum notify_type {prepare=0, cancel, acquired, releasing};
        const uintptr_t NUM_NOTIFY_TYPES = 4;

        void call_itt_notify_v5(int t, void *ptr);
        void itt_store_pointer_with_release_v3(void *dst, void *src);
        void* itt_load_pointer_with_acquire_v3(const void *src);
        void* itt_load_pointer_v3( const void* src );


        template <typename T, typename U>
        inline void itt_store_word_with_release(tbb::atomic<T>& dst, U src) {





            dst = src;

        }

        template <typename T>
        inline T itt_load_word_with_acquire(const tbb::atomic<T>& src) {
# 146 "../../include/tbb/tbb_profiling.h"
            return src;

        }

        template <typename T>
        inline void itt_store_word_with_release(T& dst, T src) {





            __TBB_store_with_release(dst, src);

        }

        template <typename T>
        inline T itt_load_word_with_acquire(const T& src) {





            return __TBB_load_with_acquire(src);

        }

        template <typename T>
        inline void itt_hide_store_word(T& dst, T src) {





            dst = src;

        }

        template <typename T>
        inline T itt_hide_load_word(const T& src) {





            return src;

        }






        inline void call_itt_notify(notify_type , void * ) {}


    }
}
# 38 "../../include/tbb/spin_mutex.h" 2
# 1 "../../include/tbb/internal/_mutex_padding.h" 1
# 35 "../../include/tbb/internal/_mutex_padding.h"
namespace tbb {
namespace interface7 {
namespace internal {

static const size_t cache_line_size = 64;



template<typename Mutex>
class padded_mutex {
    typedef long pad_type;
    pad_type my_pad[((sizeof(Mutex)+cache_line_size-1)/cache_line_size+1)*cache_line_size/sizeof(pad_type)];

    Mutex *impl() { return (Mutex *)((uintptr_t(this)|(cache_line_size-1))+1);}

public:
    static const bool is_rw_mutex = Mutex::is_rw_mutex;
    static const bool is_recursive_mutex = Mutex::is_recursive_mutex;
    static const bool is_fair_mutex = Mutex::is_fair_mutex;

    padded_mutex() { new(impl()) Mutex(); }
    ~padded_mutex() { impl()->~Mutex(); }


    class scoped_lock : tbb::internal::no_copy {
        typename Mutex::scoped_lock my_scoped_lock;
    public:
        scoped_lock() : my_scoped_lock() {}
        scoped_lock( padded_mutex& m ) : my_scoped_lock(*m.impl()) { }
        ~scoped_lock() { }

        void acquire( padded_mutex& m ) { my_scoped_lock.acquire(*m.impl()); }
        bool try_acquire( padded_mutex& m ) { return my_scoped_lock.try_acquire(*m.impl()); }
        void release() { my_scoped_lock.release(); }
    };
};

}
}
}
# 39 "../../include/tbb/spin_mutex.h" 2

namespace tbb {







class spin_mutex {

    __TBB_atomic_flag flag;

public:


    spin_mutex() : flag(0) {



    }


    class scoped_lock : internal::no_copy {
    private:

        spin_mutex* my_mutex;





        __TBB_Flag my_unlock_value;


        void internal_acquire( spin_mutex& m );


        bool internal_try_acquire( spin_mutex& m );


        void internal_release();

        friend class spin_mutex;

    public:

        scoped_lock() : my_mutex(__null), my_unlock_value(0) {}


        scoped_lock( spin_mutex& m ) : my_unlock_value(0) {
            internal::suppress_unused_warning(my_unlock_value);




            my_mutex=&m;
            __TBB_LockByte(m.flag);

        }


        void acquire( spin_mutex& m ) {



            my_mutex = &m;
            __TBB_LockByte(m.flag);

        }



        bool try_acquire( spin_mutex& m ) {



            bool result = __TBB_TryLockByte(m.flag);
            if( result )
                my_mutex = &m;
            return result;

        }


        void release() {



            __TBB_store_with_release((my_mutex->flag),0);
            my_mutex = __null;

        }


        ~scoped_lock() {
            if( my_mutex ) {



                __TBB_store_with_release((my_mutex->flag),0);

            }
        }
    };


    void internal_construct();


    static const bool is_rw_mutex = false;
    static const bool is_recursive_mutex = false;
    static const bool is_fair_mutex = false;




    void lock() {




        __TBB_LockByte(flag);

    }



    bool try_lock() {




        return __TBB_TryLockByte(flag);

    }


    void unlock() {






        __TBB_store_with_release(flag, 0);

    }

    friend class scoped_lock;
};

namespace profiling { inline void set_name( spin_mutex&, const char* ) {} }

}



# 1 "../../include/tbb/internal/_x86_eliding_mutex_impl.h" 1
# 38 "../../include/tbb/internal/_x86_eliding_mutex_impl.h"
namespace tbb {
namespace interface7 {
namespace internal {

template<typename Mutex>
class padded_mutex;
# 52 "../../include/tbb/internal/_x86_eliding_mutex_impl.h"
class x86_eliding_mutex {


    __TBB_atomic_flag flag;

    friend class padded_mutex<x86_eliding_mutex>;

public:


    x86_eliding_mutex() : flag(0) {}
# 71 "../../include/tbb/internal/_x86_eliding_mutex_impl.h"
private:



    class scoped_lock : tbb::internal::no_copy {
    private:

        x86_eliding_mutex* my_mutex;

    public:

        scoped_lock() : my_mutex(__null) {}


        scoped_lock( x86_eliding_mutex& m ) : my_mutex(__null) { acquire(m); }


        void acquire( x86_eliding_mutex& m ) {
            ((void)0);

            my_mutex=&m;
            my_mutex->lock();
        }



        bool try_acquire( x86_eliding_mutex& m ) {
            ((void)0);

            bool result = m.try_lock();
            if( result ) {
                my_mutex = &m;
            }
            return result;
        }


        void release() {
            ((void)0);

            my_mutex->unlock();
            my_mutex = __null;
        }


        ~scoped_lock() {
            if( my_mutex ) {
                release();
            }
        }
    };


public:



    static const bool is_rw_mutex = false;
    static const bool is_recursive_mutex = false;
    static const bool is_fair_mutex = false;




    void lock() {
        __TBB_LockByteElided(flag);
    }



    bool try_lock() {
        return __TBB_TryLockByteElided(flag);
    }


    void unlock() {
        __TBB_UnlockByteElided( flag );
    }
};

}
}
}
# 197 "../../include/tbb/spin_mutex.h" 2


namespace tbb {
# 212 "../../include/tbb/spin_mutex.h"
typedef interface7::internal::padded_mutex<interface7::internal::x86_eliding_mutex> speculative_spin_mutex;



namespace profiling { inline void set_name( speculative_spin_mutex&, const char* ) {} }

}
# 32 "../../src/test/test_concurrent_queue.h" 2


# 1 "../../src/tbb/concurrent_monitor.h" 1
# 35 "../../src/tbb/concurrent_monitor.h"
# 1 "../../include/tbb/tbb_exception.h" 1
# 42 "../../include/tbb/tbb_exception.h"
# 1 "/usr/include/c++/4.4/string" 1 3
# 38 "/usr/include/c++/4.4/string" 3
# 38 "/usr/include/c++/4.4/string" 3



# 1 "/usr/include/c++/4.4/bits/stringfwd.h" 1 3
# 38 "/usr/include/c++/4.4/bits/stringfwd.h" 3
# 38 "/usr/include/c++/4.4/bits/stringfwd.h" 3




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
# 75 "/usr/include/c++/4.4/bits/stringfwd.h" 3
}
# 42 "/usr/include/c++/4.4/string" 2 3
# 1 "/usr/include/c++/4.4/bits/char_traits.h" 1 3
# 39 "/usr/include/c++/4.4/bits/char_traits.h" 3
# 39 "/usr/include/c++/4.4/bits/char_traits.h" 3


# 1 "/usr/include/c++/4.4/bits/stl_algobase.h" 1 3
# 61 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 41 "/usr/include/c++/4.4/cstddef" 3
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
# 36 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
# 36 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
# 69 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
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
# 194 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
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
# 417 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
}
# 64 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.4/ext/type_traits.h" 1 3
# 32 "/usr/include/c++/4.4/ext/type_traits.h" 3
# 32 "/usr/include/c++/4.4/ext/type_traits.h" 3





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
# 32 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
# 32 "/usr/include/c++/4.4/ext/numeric_traits.h" 3





namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
# 52 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
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
# 97 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
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
# 41 "/usr/include/c++/4.4/cstddef" 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 35 "/usr/include/c++/4.4/bits/move.h" 2 3
# 1 "/usr/include/c++/4.4/bits/concept_check.h" 1 3
# 33 "/usr/include/c++/4.4/bits/concept_check.h" 3
# 33 "/usr/include/c++/4.4/bits/concept_check.h" 3
# 36 "/usr/include/c++/4.4/bits/move.h" 2 3
# 66 "/usr/include/c++/4.4/bits/move.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {







  template<typename _Tp>
    inline void
    swap(_Tp& __a, _Tp& __b)
    {



      _Tp __tmp = (__a);
      __a = (__b);
      __b = (__tmp);
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
# 98 "/usr/include/c++/4.4/bits/stl_pair.h" 3
      template<class _U1, class _U2>
        pair(const pair<_U1, _U2>& __p)
 : first(__p.first),
   second(__p.second) { }
# 141 "/usr/include/c++/4.4/bits/stl_pair.h" 3
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
# 213 "/usr/include/c++/4.4/bits/stl_pair.h" 3
  template<class _T1, class _T2>
    inline pair<_T1, _T2>
    make_pair(_T1 __x, _T2 __y)
    { return pair<_T1, _T2>(__x, __y); }
# 259 "/usr/include/c++/4.4/bits/stl_pair.h" 3
}
# 67 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 1 3
# 63 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
# 63 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3



# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 67 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {
# 79 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
  struct input_iterator_tag { };

  struct output_iterator_tag { };

  struct forward_iterator_tag : public input_iterator_tag { };


  struct bidirectional_iterator_tag : public forward_iterator_tag { };


  struct random_access_iterator_tag : public bidirectional_iterator_tag { };
# 102 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
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
# 63 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
# 63 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3



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
# 108 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
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
# 166 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator, typename _Distance>
    inline void
    advance(_InputIterator& __i, _Distance __n)
    {

      typename iterator_traits<_InputIterator>::difference_type __d = __n;
      std::__advance(__i, __d, std::__iterator_category(__i));
    }
# 195 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
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







    inline typename reverse_iterator<_IteratorL>::difference_type
    operator-(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)

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
# 431 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
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
# 514 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
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
# 620 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
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







    inline typename __normal_iterator<_IteratorL, _Container>::difference_type
    operator-(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)

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
          _ValueType1 __tmp = (*__a);
          *__a = (*__b);
          *__b = (__tmp);
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
# 333 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
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
# 371 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
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
# 509 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
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
# 537 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
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
# 567 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
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
# 684 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
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
# 42 "/usr/include/c++/4.4/bits/char_traits.h" 2 3
# 1 "/usr/include/c++/4.4/bits/postypes.h" 1 3
# 40 "/usr/include/c++/4.4/bits/postypes.h" 3
# 40 "/usr/include/c++/4.4/bits/postypes.h" 3


# 1 "/usr/include/c++/4.4/cwchar" 1 3
# 41 "/usr/include/c++/4.4/cwchar" 3
# 41 "/usr/include/c++/4.4/cwchar" 3



# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 45 "/usr/include/c++/4.4/cwchar" 2 3


# 1 "/usr/include/wchar.h" 1 3 4
# 36 "/usr/include/wchar.h" 3 4
# 1 "/usr/include/stdio.h" 1 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;
# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 37 "/usr/include/wchar.h" 2 3 4


# 1 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/stdarg.h" 1 3 4
# 30 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/stdarg.h" 3 4
typedef __builtin_va_list va_list;
# 48 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 40 "/usr/include/wchar.h" 2 3 4
# 61 "/usr/include/wchar.h" 3 4
typedef unsigned int wint_t;
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
# 48 "/usr/include/c++/4.4/cwchar" 2 3
# 65 "/usr/include/c++/4.4/cwchar" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::mbstate_t;

}
# 139 "/usr/include/c++/4.4/cwchar" 3
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
# 258 "/usr/include/c++/4.4/cwchar" 3
  using ::wcstoll;
  using ::wcstoull;


}

namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::__gnu_cxx::wcstold;
  using ::__gnu_cxx::wcstoll;
  using ::__gnu_cxx::wcstoull;

}
# 43 "/usr/include/c++/4.4/bits/postypes.h" 2 3
# 70 "/usr/include/c++/4.4/bits/postypes.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {
# 88 "/usr/include/c++/4.4/bits/postypes.h" 3
  typedef long streamoff;
# 98 "/usr/include/c++/4.4/bits/postypes.h" 3
  typedef ptrdiff_t streamsize;
# 111 "/usr/include/c++/4.4/bits/postypes.h" 3
  template<typename _StateT>
    class fpos
    {
    private:
      streamoff _M_off;
      _StateT _M_state;

    public:




      fpos()
      : _M_off(0), _M_state() { }
# 133 "/usr/include/c++/4.4/bits/postypes.h" 3
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
# 239 "/usr/include/c++/4.4/bits/postypes.h" 3
}
# 43 "/usr/include/c++/4.4/bits/char_traits.h" 2 3
# 1 "/usr/include/c++/4.4/cwchar" 1 3
# 41 "/usr/include/c++/4.4/cwchar" 3
# 41 "/usr/include/c++/4.4/cwchar" 3



# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 45 "/usr/include/c++/4.4/cwchar" 2 3


# 1 "/usr/include/wchar.h" 1 3 4
# 48 "/usr/include/c++/4.4/cwchar" 2 3
# 44 "/usr/include/c++/4.4/bits/char_traits.h" 2 3








namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
# 64 "/usr/include/c++/4.4/bits/char_traits.h" 3
  template<typename _CharT>
    struct _Char_types
    {
      typedef unsigned long int_type;
      typedef std::streampos pos_type;
      typedef std::streamoff off_type;
      typedef std::mbstate_t state_type;
    };
# 89 "/usr/include/c++/4.4/bits/char_traits.h" 3
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
# 230 "/usr/include/c++/4.4/bits/char_traits.h" 3
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
# 43 "/usr/include/c++/4.4/string" 2 3
# 1 "/usr/include/c++/4.4/bits/allocator.h" 1 3
# 48 "/usr/include/c++/4.4/bits/allocator.h" 3
# 1 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++allocator.h" 1 3
# 34 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++allocator.h" 3
# 1 "/usr/include/c++/4.4/ext/new_allocator.h" 1 3
# 37 "/usr/include/c++/4.4/ext/new_allocator.h" 3
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
# 114 "/usr/include/c++/4.4/ext/new_allocator.h" 3
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
# 44 "/usr/include/c++/4.4/string" 2 3

# 1 "/usr/include/c++/4.4/bits/localefwd.h" 1 3
# 39 "/usr/include/c++/4.4/bits/localefwd.h" 3
# 39 "/usr/include/c++/4.4/bits/localefwd.h" 3



# 1 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++locale.h" 1 3
# 40 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++locale.h" 3
# 40 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++locale.h" 3


# 1 "/usr/include/c++/4.4/clocale" 1 3
# 41 "/usr/include/c++/4.4/clocale" 3
# 41 "/usr/include/c++/4.4/clocale" 3



# 1 "/usr/include/locale.h" 1 3 4
# 29 "/usr/include/locale.h" 3 4
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
# 45 "/usr/include/c++/4.4/clocale" 2 3








namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::lconv;
  using ::setlocale;
  using ::localeconv;

}
# 43 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++locale.h" 2 3
# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 44 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++locale.h" 2 3






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
# 85 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++locale.h" 3
    __builtin_va_list __args;
    __builtin_va_start(__args, __fmt);


    const int __ret = __builtin_vsnprintf(__out, __size, __fmt, __args);




    __builtin_va_end(__args);


    __gnu_cxx::__uselocale(__old);







    return __ret;
  }

}
# 43 "/usr/include/c++/4.4/bits/localefwd.h" 2 3
# 1 "/usr/include/c++/4.4/iosfwd" 1 3
# 38 "/usr/include/c++/4.4/iosfwd" 3
# 38 "/usr/include/c++/4.4/iosfwd" 3






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
# 127 "/usr/include/c++/4.4/iosfwd" 3
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
# 44 "/usr/include/c++/4.4/bits/localefwd.h" 2 3
# 1 "/usr/include/c++/4.4/cctype" 1 3
# 41 "/usr/include/c++/4.4/cctype" 3
# 41 "/usr/include/c++/4.4/cctype" 3



# 1 "/usr/include/ctype.h" 1 3 4
# 28 "/usr/include/ctype.h" 3 4
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
# 45 "/usr/include/c++/4.4/cctype" 2 3
# 64 "/usr/include/c++/4.4/cctype" 3
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
# 45 "/usr/include/c++/4.4/bits/localefwd.h" 2 3

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
# 46 "/usr/include/c++/4.4/string" 2 3
# 1 "/usr/include/c++/4.4/bits/ostream_insert.h" 1 3
# 33 "/usr/include/c++/4.4/bits/ostream_insert.h" 3
# 33 "/usr/include/c++/4.4/bits/ostream_insert.h" 3



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

# 37 "/usr/include/c++/4.4/bits/ostream_insert.h" 2 3

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
# 47 "/usr/include/c++/4.4/string" 2 3



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
    } ;


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
    } ;


  template<typename _Operation, typename _Tp>
    inline binder2nd<_Operation>
    bind2nd(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::second_argument_type _Arg2_type;
      return binder2nd<_Operation>(__fn, _Arg2_type(__x));
    }


}
# 713 "/usr/include/c++/4.4/bits/stl_function.h" 2 3
# 51 "/usr/include/c++/4.4/string" 2 3


# 1 "/usr/include/c++/4.4/bits/basic_string.h" 1 3
# 39 "/usr/include/c++/4.4/bits/basic_string.h" 3
# 39 "/usr/include/c++/4.4/bits/basic_string.h" 3


# 1 "/usr/include/c++/4.4/ext/atomicity.h" 1 3
# 34 "/usr/include/c++/4.4/ext/atomicity.h" 3
# 1 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/gthr.h" 1 3
# 30 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/gthr.h" 3
#pragma GCC visibility push(default)
# 162 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/gthr.h" 3
# 1 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/gthr-default.h" 1 3
# 41 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/gthr-default.h" 3
# 1 "/usr/include/pthread.h" 1 3 4
# 24 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4
extern "C" {
# 41 "/usr/include/time.h" 3 4
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
# 42 "/usr/include/c++/4.4/bits/basic_string.h" 2 3

# 1 "/usr/include/c++/4.4/initializer_list" 1 3
# 44 "/usr/include/c++/4.4/bits/basic_string.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {
# 103 "/usr/include/c++/4.4/bits/basic_string.h" 3
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
# 140 "/usr/include/c++/4.4/bits/basic_string.h" 3
      struct _Rep_base
      {
 size_type _M_length;
 size_type _M_capacity;
 _Atomic_word _M_refcount;
      };

      struct _Rep : _Rep_base
      {

 typedef typename _Alloc::template rebind<char>::other _Raw_bytes_alloc;
# 165 "/usr/include/c++/4.4/bits/basic_string.h" 3
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
# 464 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string(const _CharT* __s, size_type __n,
     const _Alloc& __a = _Alloc());





      basic_string(const _CharT* __s, const _Alloc& __a = _Alloc());






      basic_string(size_type __n, _CharT __c, const _Alloc& __a = _Alloc());
# 495 "/usr/include/c++/4.4/bits/basic_string.h" 3
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
# 528 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      operator=(_CharT __c)
      {
 this->assign(1, __c);
 return *this;
      }
# 553 "/usr/include/c++/4.4/bits/basic_string.h" 3
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
# 652 "/usr/include/c++/4.4/bits/basic_string.h" 3
      void
      resize(size_type __n, _CharT __c);
# 665 "/usr/include/c++/4.4/bits/basic_string.h" 3
      void
      resize(size_type __n)
      { this->resize(__n, _CharT()); }





      size_type
      capacity() const
      { return _M_rep()->_M_capacity; }
# 694 "/usr/include/c++/4.4/bits/basic_string.h" 3
      void
      reserve(size_type __res_arg = 0);




      void
      clear()
      { _M_mutate(0, this->size(), 0); }




      bool
      empty() const
      { return this->size() == 0; }
# 722 "/usr/include/c++/4.4/bits/basic_string.h" 3
      const_reference
      operator[] (size_type __pos) const
      {
                                       ;
 return _M_data()[__pos];
      }
# 739 "/usr/include/c++/4.4/bits/basic_string.h" 3
      reference
      operator[](size_type __pos)
      {

                                       ;

                                         ;
 _M_leak();
 return _M_data()[__pos];
      }
# 760 "/usr/include/c++/4.4/bits/basic_string.h" 3
      const_reference
      at(size_type __n) const
      {
 if (__n >= this->size())
   __throw_out_of_range(("basic_string::at"));
 return _M_data()[__n];
      }
# 779 "/usr/include/c++/4.4/bits/basic_string.h" 3
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
# 835 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      append(const basic_string& __str);
# 850 "/usr/include/c++/4.4/bits/basic_string.h" 3
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
# 882 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      append(size_type __n, _CharT __c);
# 904 "/usr/include/c++/4.4/bits/basic_string.h" 3
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
# 943 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      assign(const basic_string& __str, size_type __pos, size_type __n)
      { return this->assign(__str._M_data()
       + __str._M_check(__pos, "basic_string::assign"),
       __str._M_limit(__pos, __n)); }
# 959 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      assign(const _CharT* __s, size_type __n);
# 971 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      assign(const _CharT* __s)
      {
                               ;
 return this->assign(__s, traits_type::length(__s));
      }
# 987 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      assign(size_type __n, _CharT __c)
      { return _M_replace_aux(size_type(0), this->size(), __n, __c); }
# 999 "/usr/include/c++/4.4/bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string&
        assign(_InputIterator __first, _InputIterator __last)
        { return this->replace(_M_ibegin(), _M_iend(), __first, __last); }
# 1027 "/usr/include/c++/4.4/bits/basic_string.h" 3
      void
      insert(iterator __p, size_type __n, _CharT __c)
      { this->replace(__p, __p, __n, __c); }
# 1042 "/usr/include/c++/4.4/bits/basic_string.h" 3
      template<class _InputIterator>
        void
        insert(iterator __p, _InputIterator __beg, _InputIterator __end)
        { this->replace(__p, __p, __beg, __end); }
# 1070 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos1, const basic_string& __str)
      { return this->insert(__pos1, __str, size_type(0), __str.size()); }
# 1092 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos1, const basic_string& __str,
      size_type __pos2, size_type __n)
      { return this->insert(__pos1, __str._M_data()
       + __str._M_check(__pos2, "basic_string::insert"),
       __str._M_limit(__pos2, __n)); }
# 1115 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, const _CharT* __s, size_type __n);
# 1133 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, const _CharT* __s)
      {
                               ;
 return this->insert(__pos, __s, traits_type::length(__s));
      }
# 1156 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, size_type __n, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::insert"),
         size_type(0), __n, __c); }
# 1173 "/usr/include/c++/4.4/bits/basic_string.h" 3
      iterator
      insert(iterator __p, _CharT __c)
      {
                                                                 ;
 const size_type __pos = __p - _M_ibegin();
 _M_replace_aux(__pos, size_type(0), size_type(1), __c);
 _M_rep()->_M_set_leaked();
 return iterator(_M_data() + __pos);
      }
# 1197 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      erase(size_type __pos = 0, size_type __n = npos)
      {
 _M_mutate(_M_check(__pos, "basic_string::erase"),
    _M_limit(__pos, __n), size_type(0));
 return *this;
      }
# 1213 "/usr/include/c++/4.4/bits/basic_string.h" 3
      iterator
      erase(iterator __position)
      {

                               ;
 const size_type __pos = __position - _M_ibegin();
 _M_mutate(__pos, size_type(1), size_type(0));
 _M_rep()->_M_set_leaked();
 return iterator(_M_data() + __pos);
      }
# 1233 "/usr/include/c++/4.4/bits/basic_string.h" 3
      iterator
      erase(iterator __first, iterator __last);
# 1252 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n, const basic_string& __str)
      { return this->replace(__pos, __n, __str._M_data(), __str.size()); }
# 1274 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2)
      { return this->replace(__pos1, __n1, __str._M_data()
        + __str._M_check(__pos2, "basic_string::replace"),
        __str._M_limit(__pos2, __n2)); }
# 1298 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2);
# 1317 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s)
      {
                               ;
 return this->replace(__pos, __n1, __s, traits_type::length(__s));
      }
# 1340 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, size_type __n2, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::replace"),
         _M_limit(__pos, __n1), __n2, __c); }
# 1358 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const basic_string& __str)
      { return this->replace(__i1, __i2, __str._M_data(), __str.size()); }
# 1376 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const _CharT* __s, size_type __n)
      {

                          ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1, __s, __n);
      }
# 1397 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const _CharT* __s)
      {
                               ;
 return this->replace(__i1, __i2, __s, traits_type::length(__s));
      }
# 1418 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, size_type __n, _CharT __c)
      {

                          ;
 return _M_replace_aux(__i1 - _M_ibegin(), __i2 - __i1, __n, __c);
      }
# 1440 "/usr/include/c++/4.4/bits/basic_string.h" 3
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
# 1515 "/usr/include/c++/4.4/bits/basic_string.h" 3
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
# 1591 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      copy(_CharT* __s, size_type __n, size_type __pos = 0) const;
# 1601 "/usr/include/c++/4.4/bits/basic_string.h" 3
      void
      swap(basic_string& __s);
# 1611 "/usr/include/c++/4.4/bits/basic_string.h" 3
      const _CharT*
      c_str() const
      { return _M_data(); }







      const _CharT*
      data() const
      { return _M_data(); }




      allocator_type
      get_allocator() const
      { return _M_dataplus; }
# 1643 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find(const _CharT* __s, size_type __pos, size_type __n) const;
# 1656 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find(const basic_string& __str, size_type __pos = 0) const
      { return this->find(__str.data(), __pos, __str.size()); }
# 1670 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find(const _CharT* __s, size_type __pos = 0) const
      {
                               ;
 return this->find(__s, __pos, traits_type::length(__s));
      }
# 1687 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find(_CharT __c, size_type __pos = 0) const;
# 1700 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      rfind(const basic_string& __str, size_type __pos = npos) const
      { return this->rfind(__str.data(), __pos, __str.size()); }
# 1715 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      rfind(const _CharT* __s, size_type __pos, size_type __n) const;
# 1728 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      rfind(const _CharT* __s, size_type __pos = npos) const
      {
                               ;
 return this->rfind(__s, __pos, traits_type::length(__s));
      }
# 1745 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      rfind(_CharT __c, size_type __pos = npos) const;
# 1758 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_first_of(const basic_string& __str, size_type __pos = 0) const
      { return this->find_first_of(__str.data(), __pos, __str.size()); }
# 1773 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_first_of(const _CharT* __s, size_type __pos, size_type __n) const;
# 1786 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_first_of(const _CharT* __s, size_type __pos = 0) const
      {
                               ;
 return this->find_first_of(__s, __pos, traits_type::length(__s));
      }
# 1805 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_first_of(_CharT __c, size_type __pos = 0) const
      { return this->find(__c, __pos); }
# 1819 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_last_of(const basic_string& __str, size_type __pos = npos) const
      { return this->find_last_of(__str.data(), __pos, __str.size()); }
# 1834 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_last_of(const _CharT* __s, size_type __pos, size_type __n) const;
# 1847 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_last_of(const _CharT* __s, size_type __pos = npos) const
      {
                               ;
 return this->find_last_of(__s, __pos, traits_type::length(__s));
      }
# 1866 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_last_of(_CharT __c, size_type __pos = npos) const
      { return this->rfind(__c, __pos); }
# 1880 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_first_not_of(const basic_string& __str, size_type __pos = 0) const
      { return this->find_first_not_of(__str.data(), __pos, __str.size()); }
# 1895 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos,
   size_type __n) const;
# 1909 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos = 0) const
      {
                               ;
 return this->find_first_not_of(__s, __pos, traits_type::length(__s));
      }
# 1926 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_first_not_of(_CharT __c, size_type __pos = 0) const;
# 1939 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_last_not_of(const basic_string& __str, size_type __pos = npos) const
      { return this->find_last_not_of(__str.data(), __pos, __str.size()); }
# 1955 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos,
         size_type __n) const;
# 1968 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos = npos) const
      {
                               ;
 return this->find_last_not_of(__s, __pos, traits_type::length(__s));
      }
# 1985 "/usr/include/c++/4.4/bits/basic_string.h" 3
      size_type
      find_last_not_of(_CharT __c, size_type __pos = npos) const;
# 2000 "/usr/include/c++/4.4/bits/basic_string.h" 3
      basic_string
      substr(size_type __pos = 0, size_type __n = npos) const
      { return basic_string(*this,
       _M_check(__pos, "basic_string::substr"), __n); }
# 2018 "/usr/include/c++/4.4/bits/basic_string.h" 3
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
# 2048 "/usr/include/c++/4.4/bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n, const basic_string& __str) const;
# 2072 "/usr/include/c++/4.4/bits/basic_string.h" 3
      int
      compare(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2) const;
# 2090 "/usr/include/c++/4.4/bits/basic_string.h" 3
      int
      compare(const _CharT* __s) const;
# 2113 "/usr/include/c++/4.4/bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s) const;
# 2138 "/usr/include/c++/4.4/bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2) const;
  };

  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>::
    basic_string()

    : _M_dataplus(_S_empty_rep()._M_refdata(), _Alloc()) { }
# 2159 "/usr/include/c++/4.4/bits/basic_string.h" 3
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
# 2230 "/usr/include/c++/4.4/bits/basic_string.h" 3
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
# 2276 "/usr/include/c++/4.4/bits/basic_string.h" 3
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
# 2313 "/usr/include/c++/4.4/bits/basic_string.h" 3
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
# 2350 "/usr/include/c++/4.4/bits/basic_string.h" 3
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
# 2387 "/usr/include/c++/4.4/bits/basic_string.h" 3
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
# 2424 "/usr/include/c++/4.4/bits/basic_string.h" 3
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
# 2461 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline void
    swap(basic_string<_CharT, _Traits, _Alloc>& __lhs,
  basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { __lhs.swap(__rhs); }
# 2478 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __is,
        basic_string<_CharT, _Traits, _Alloc>& __str);

  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __is, basic_string<char>& __str);
# 2496 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __os,
        const basic_string<_CharT, _Traits, _Alloc>& __str)
    {


      return __ostream_insert(__os, __str.data(), __str.size());
    }
# 2519 "/usr/include/c++/4.4/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim);
# 2536 "/usr/include/c++/4.4/bits/basic_string.h" 3
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
# 54 "/usr/include/c++/4.4/string" 2 3


# 1 "/usr/include/c++/4.4/bits/basic_string.tcc" 1 3
# 42 "/usr/include/c++/4.4/bits/basic_string.tcc" 3
# 42 "/usr/include/c++/4.4/bits/basic_string.tcc" 3




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
# 241 "/usr/include/c++/4.4/bits/basic_string.tcc" 3
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
# 578 "/usr/include/c++/4.4/bits/basic_string.tcc" 3
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
# 57 "/usr/include/c++/4.4/string" 2 3
# 43 "../../include/tbb/tbb_exception.h" 2





namespace tbb {


class bad_last_alloc : public std::bad_alloc {
public:
                 const char* what() const throw();



};


class improper_lock : public std::exception {
public:
                 const char* what() const throw();
};


class user_abort : public std::exception {
public:
                 const char* what() const throw();
};


class missing_wait : public std::exception {
public:
                 const char* what() const throw();
};


class invalid_multiple_scheduling : public std::exception {
public:
                 const char* what() const throw();
};

namespace internal {

void throw_bad_last_alloc_exception_v4();

enum exception_id {
    eid_bad_alloc = 1,
    eid_bad_last_alloc,
    eid_nonpositive_step,
    eid_out_of_range,
    eid_segment_range_error,
    eid_index_range_error,
    eid_missing_wait,
    eid_invalid_multiple_scheduling,
    eid_improper_lock,
    eid_possible_deadlock,
    eid_operation_not_permitted,
    eid_condvar_wait_failed,
    eid_invalid_load_factor,
    eid_reserved,
    eid_invalid_swap,
    eid_reservation_length_error,
    eid_invalid_key,
    eid_user_abort,
    eid_reserved1,
# 115 "../../include/tbb/tbb_exception.h"
    eid_max
};




void throw_exception_v4 ( exception_id );


inline void throw_exception ( exception_id eid ) { throw_exception_v4(eid); }

}
}



# 1 "../../include/tbb/tbb_allocator.h" 1
# 44 "../../include/tbb/tbb_allocator.h"
# 1 "/usr/include/c++/4.4/cstring" 1 3
# 41 "/usr/include/c++/4.4/cstring" 3
# 41 "/usr/include/c++/4.4/cstring" 3



# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 45 "/usr/include/c++/4.4/cstring" 2 3
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4
extern "C" {
# 46 "/usr/include/string.h" 3 4
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
extern void __warn_memset_zero_len (void);
# 47 "/usr/include/bits/string3.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) void *
memcpy (void *__restrict __dest, const void *__restrict __src, size_t __len) throw ()

{
  return __builtin___memcpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) void *
memmove (void *__dest, const void *__src, size_t __len) throw ()
{
  return __builtin___memmove_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) void *
mempcpy (void *__restrict __dest, const void *__restrict __src, size_t __len) throw ()

{
  return __builtin___mempcpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}
# 75 "/usr/include/bits/string3.h" 3 4
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) void *
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


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) void
bcopy (const void *__src, void *__dest, size_t __len) throw ()
{
  (void) __builtin___memmove_chk (__dest, __src, __len, __builtin_object_size (__dest, 0));
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) void
bzero (void *__dest, size_t __len) throw ()
{
  (void) __builtin___memset_chk (__dest, '\0', __len, __builtin_object_size (__dest, 0));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strcpy (char *__restrict __dest, const char *__restrict __src) throw ()
{
  return __builtin___strcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
stpcpy (char *__restrict __dest, const char *__restrict __src) throw ()
{
  return __builtin___stpcpy_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strncpy (char *__restrict __dest, const char *__restrict __src, size_t __len) throw ()

{
  return __builtin___strncpy_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}


extern char *__stpncpy_chk (char *__dest, const char *__src, size_t __n,
       size_t __destlen) throw ();
extern char *__stpncpy_alias (char *__dest, const char *__src, size_t __n) throw () __asm__ ("" "stpncpy");


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
stpncpy (char *__dest, const char *__src, size_t __n) throw ()
{
  if (__builtin_object_size (__dest, 2 > 1) != (size_t) -1
      && (!__builtin_constant_p (__n) || __n <= __builtin_object_size (__dest, 2 > 1)))
    return __stpncpy_chk (__dest, __src, __n, __builtin_object_size (__dest, 2 > 1));
  return __stpncpy_alias (__dest, __src, __n);
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strcat (char *__restrict __dest, const char *__restrict __src) throw ()
{
  return __builtin___strcat_chk (__dest, __src, __builtin_object_size (__dest, 2 > 1));
}


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strncat (char *__restrict __dest, const char *__restrict __src, size_t __len) throw ()

{
  return __builtin___strncat_chk (__dest, __src, __len, __builtin_object_size (__dest, 2 > 1));
}
# 641 "/usr/include/string.h" 2 3 4



}
# 46 "/usr/include/c++/4.4/cstring" 2 3
# 74 "/usr/include/c++/4.4/cstring" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::memchr;
  using ::memcmp;
  using ::memcpy;
  using ::memmove;
  using ::memset;
  using ::strcat;
  using ::strcmp;
  using ::strcoll;
  using ::strcpy;
  using ::strcspn;
  using ::strerror;
  using ::strlen;
  using ::strncat;
  using ::strncmp;
  using ::strncpy;
  using ::strspn;
  using ::strtok;
  using ::strxfrm;
  using ::strchr;
  using ::strpbrk;
  using ::strrchr;
  using ::strstr;


  inline void*
  memchr(void* __p, int __c, size_t __n)
  { return memchr(const_cast<const void*>(__p), __c, __n); }

  inline char*
  strchr(char* __s1, int __n)
  { return __builtin_strchr(const_cast<const char*>(__s1), __n); }

  inline char*
  strpbrk(char* __s1, const char* __s2)
  { return __builtin_strpbrk(const_cast<const char*>(__s1), __s2); }

  inline char*
  strrchr(char* __s1, int __n)
  { return __builtin_strrchr(const_cast<const char*>(__s1), __n); }

  inline char*
  strstr(char* __s1, const char* __s2)
  { return __builtin_strstr(const_cast<const char*>(__s1), __s2); }


}
# 45 "../../include/tbb/tbb_allocator.h" 2





namespace tbb {


namespace internal {



    void deallocate_via_handler_v3( void *p );



    void* allocate_via_handler_v3( size_t n );


    bool is_malloc_used_v3();
}
# 80 "../../include/tbb/tbb_allocator.h"
template<typename T>
class tbb_allocator {
public:
    typedef typename internal::allocator_type<T>::value_type value_type;
    typedef value_type* pointer;
    typedef const value_type* const_pointer;
    typedef value_type& reference;
    typedef const value_type& const_reference;
    typedef size_t size_type;
    typedef ptrdiff_t difference_type;
    template<typename U> struct rebind {
        typedef tbb_allocator<U> other;
    };


    enum malloc_type {
        scalable,
        standard
    };

    tbb_allocator() throw() {}
    tbb_allocator( const tbb_allocator& ) throw() {}
    template<typename U> tbb_allocator(const tbb_allocator<U>&) throw() {}

    pointer address(reference x) const {return &x;}
    const_pointer address(const_reference x) const {return &x;}


    pointer allocate( size_type n, const void* = 0) {
        return pointer(internal::allocate_via_handler_v3( n * sizeof(value_type) ));
    }


    void deallocate( pointer p, size_type ) {
        internal::deallocate_via_handler_v3(p);
    }


    size_type max_size() const throw() {
        size_type max = static_cast<size_type>(-1) / sizeof (value_type);
        return (max > 0 ? max : 1);
    }
# 133 "../../include/tbb/tbb_allocator.h"
    void construct( pointer p, const value_type& value ) {::new((void*)(p)) value_type(value);}



    void destroy( pointer p ) {p->~value_type();}


    static malloc_type allocator_type() {
        return internal::is_malloc_used_v3() ? standard : scalable;
    }
};







template<>
class tbb_allocator<void> {
public:
    typedef void* pointer;
    typedef const void* const_pointer;
    typedef void value_type;
    template<typename U> struct rebind {
        typedef tbb_allocator<U> other;
    };
};

template<typename T, typename U>
inline bool operator==( const tbb_allocator<T>&, const tbb_allocator<U>& ) {return true;}

template<typename T, typename U>
inline bool operator!=( const tbb_allocator<T>&, const tbb_allocator<U>& ) {return false;}







template <typename T, template<typename X> class Allocator = tbb_allocator>
class zero_allocator : public Allocator<T>
{
public:
    typedef Allocator<T> base_allocator_type;
    typedef typename base_allocator_type::value_type value_type;
    typedef typename base_allocator_type::pointer pointer;
    typedef typename base_allocator_type::const_pointer const_pointer;
    typedef typename base_allocator_type::reference reference;
    typedef typename base_allocator_type::const_reference const_reference;
    typedef typename base_allocator_type::size_type size_type;
    typedef typename base_allocator_type::difference_type difference_type;
    template<typename U> struct rebind {
        typedef zero_allocator<U, Allocator> other;
    };

    zero_allocator() throw() { }
    zero_allocator(const zero_allocator &a) throw() : base_allocator_type( a ) { }
    template<typename U>
    zero_allocator(const zero_allocator<U> &a) throw() : base_allocator_type( Allocator<U>( a ) ) { }

    pointer allocate(const size_type n, const void *hint = 0 ) {
        pointer ptr = base_allocator_type::allocate( n, hint );
        std::memset( ptr, 0, n * sizeof(value_type) );
        return ptr;
    }
};



template<template<typename T> class Allocator>
class zero_allocator<void, Allocator> : public Allocator<void> {
public:
    typedef Allocator<void> base_allocator_type;
    typedef typename base_allocator_type::value_type value_type;
    typedef typename base_allocator_type::pointer pointer;
    typedef typename base_allocator_type::const_pointer const_pointer;
    template<typename U> struct rebind {
        typedef zero_allocator<U, Allocator> other;
    };
};

template<typename T1, template<typename X1> class B1, typename T2, template<typename X2> class B2>
inline bool operator==( const zero_allocator<T1,B1> &a, const zero_allocator<T2,B2> &b) {
    return static_cast< B1<T1> >(a) == static_cast< B2<T2> >(b);
}
template<typename T1, template<typename X1> class B1, typename T2, template<typename X2> class B2>
inline bool operator!=( const zero_allocator<T1,B1> &a, const zero_allocator<T2,B2> &b) {
    return static_cast< B1<T1> >(a) != static_cast< B2<T2> >(b);
}

}
# 131 "../../include/tbb/tbb_exception.h" 2
# 1 "/usr/include/c++/4.4/typeinfo" 1 3
# 36 "/usr/include/c++/4.4/typeinfo" 3
#pragma GCC visibility push(default)


extern "C++" {

namespace __cxxabiv1
{
  class __class_type_info;
}
# 80 "/usr/include/c++/4.4/typeinfo" 3
namespace std
{






  class type_info
  {
  public:




    virtual ~type_info();



    const char* name() const
    { return __name; }
# 117 "/usr/include/c++/4.4/typeinfo" 3
    bool before(const type_info& __arg) const
    { return __name < __arg.__name; }

    bool operator==(const type_info& __arg) const
    { return __name == __arg.__name; }

    bool operator!=(const type_info& __arg) const
    { return !operator==(__arg); }


    virtual bool __is_pointer_p() const;


    virtual bool __is_function_p() const;







    virtual bool __do_catch(const type_info *__thr_type, void **__thr_obj,
       unsigned __outer) const;


    virtual bool __do_upcast(const __cxxabiv1::__class_type_info *__target,
        void **__obj_ptr) const;

  protected:
    const char *__name;

    explicit type_info(const char *__n): __name(__n) { }

  private:

    type_info& operator=(const type_info&);
    type_info(const type_info&);
  };







  class bad_cast : public exception
  {
  public:
    bad_cast() throw() { }



    virtual ~bad_cast() throw();


    virtual const char* what() const throw();
  };





  class bad_typeid : public exception
  {
  public:
    bad_typeid () throw() { }



    virtual ~bad_typeid() throw();


    virtual const char* what() const throw();
  };
}

#pragma GCC visibility pop


}
# 132 "../../include/tbb/tbb_exception.h" 2

namespace tbb {
# 156 "../../include/tbb/tbb_exception.h"
class tbb_exception : public std::exception
{



    void* operator new ( size_t );

public:





    ~tbb_exception() throw() { ; }




    virtual tbb_exception* move () throw() = 0;




    virtual void destroy () throw() = 0;






    virtual void throw_self () = 0;


    virtual const char* name() const throw() = 0;


    virtual const char* what() const throw() = 0;







    void operator delete ( void* p ) {
        internal::deallocate_via_handler_v3(p);
    }
};






class captured_exception : public tbb_exception
{
public:
    captured_exception ( const captured_exception& src )
        : tbb_exception(src), my_dynamic(false)
    {
        set(src.my_exception_name, src.my_exception_info);
    }

    captured_exception ( const char* name_, const char* info )
        : my_dynamic(false)
    {
        set(name_, info);
    }

                          ~captured_exception () throw();

    captured_exception& operator= ( const captured_exception& src ) {
        if ( this != &src ) {
            clear();
            set(src.my_exception_name, src.my_exception_info);
        }
        return *this;
    }


    captured_exception* move () throw();


    void destroy () throw();


    void throw_self () { throw *this; }


    const char* name() const throw();


    const char* what() const throw();

    void set ( const char* name, const char* info ) throw();
    void clear () throw();

private:

    captured_exception() {}


    static captured_exception* allocate ( const char* name, const char* info );

    bool my_dynamic;
    const char* my_exception_name;
    const char* my_exception_info;
};






template<typename ExceptionData>
class movable_exception : public tbb_exception
{
    typedef movable_exception<ExceptionData> self_type;

public:
    movable_exception ( const ExceptionData& data_ )
        : my_exception_data(data_)
        , my_dynamic(false)
        , my_exception_name(

        typeid(self_type).name()



        )
    {}

    movable_exception ( const movable_exception& src ) throw ()
        : tbb_exception(src)
        , my_exception_data(src.my_exception_data)
        , my_dynamic(false)
        , my_exception_name(src.my_exception_name)
    {}

    ~movable_exception () throw() {}

    const movable_exception& operator= ( const movable_exception& src ) {
        if ( this != &src ) {
            my_exception_data = src.my_exception_data;
            my_exception_name = src.my_exception_name;
        }
        return *this;
    }

    ExceptionData& data () throw() { return my_exception_data; }

    const ExceptionData& data () const throw() { return my_exception_data; }

                 const char* name () const throw() { return my_exception_name; }

                 const char* what () const throw() { return "tbb::movable_exception"; }


    movable_exception* move () throw() {
        void* e = internal::allocate_via_handler_v3(sizeof(movable_exception));
        if ( e ) {
            ::new (e) movable_exception(*this);
            ((movable_exception*)e)->my_dynamic = true;
        }
        return (movable_exception*)e;
    }

    void destroy () throw() {
        ((void)0);
        if ( my_dynamic ) {
            this->~movable_exception();
            internal::deallocate_via_handler_v3(this);
        }
    }

    void throw_self () { throw *this; }

protected:

    ExceptionData my_exception_data;

private:

    bool my_dynamic;



    const char* my_exception_name;
};
# 382 "../../include/tbb/tbb_exception.h"
}
# 36 "../../src/tbb/concurrent_monitor.h" 2


# 1 "../../src/tbb/semaphore.h" 1
# 44 "../../src/tbb/semaphore.h"
# 1 "/usr/include/semaphore.h" 1 3 4
# 22 "/usr/include/semaphore.h" 3 4
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
# 150 "/usr/include/sys/types.h" 3 4
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
# 23 "/usr/include/semaphore.h" 2 3 4






# 1 "/usr/include/bits/semaphore.h" 1 3 4
# 23 "/usr/include/bits/semaphore.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/semaphore.h" 2 3 4
# 36 "/usr/include/bits/semaphore.h" 3 4
typedef union
{
  char __size[32];
  long int __align;
} sem_t;
# 30 "/usr/include/semaphore.h" 2 3 4


extern "C" {



extern int sem_init (sem_t *__sem, int __pshared, unsigned int __value)
     throw ();

extern int sem_destroy (sem_t *__sem) throw ();


extern sem_t *sem_open (const char *__name, int __oflag, ...) throw ();


extern int sem_close (sem_t *__sem) throw ();


extern int sem_unlink (const char *__name) throw ();





extern int sem_wait (sem_t *__sem);






extern int sem_timedwait (sem_t *__restrict __sem,
     const struct timespec *__restrict __abstime);



extern int sem_trywait (sem_t *__sem) throw ();


extern int sem_post (sem_t *__sem) throw ();


extern int sem_getvalue (sem_t *__restrict __sem, int *__restrict __sval)
     throw ();


}
# 45 "../../src/tbb/semaphore.h" 2

# 1 "/usr/include/errno.h" 1 3 4
# 47 "../../src/tbb/semaphore.h" 2



namespace tbb {
namespace internal {
# 103 "../../src/tbb/semaphore.h"
typedef uint32_t sem_count_t;

class semaphore : no_copy {
public:

    semaphore(int start_cnt_ = 0 ) { init_semaphore( start_cnt_ ); }


    ~semaphore() {
        int ret = sem_destroy( &sem );
        ((void)(1 && (!ret)));
    }

    void P() {
        while( sem_wait( &sem )!=0 )
            ((void)0);
    }

    void V() { sem_post( &sem ); }
private:
    sem_t sem;
    void init_semaphore(int start_cnt_) {
        int ret = sem_init( &sem, 0, start_cnt_ );
        ((void)(1 && (!ret)));
    }
};
# 201 "../../src/tbb/semaphore.h"
class binary_semaphore : no_copy {
public:

    binary_semaphore() { my_sem = 1; }

    ~binary_semaphore() {}

    void P() {
        int s;
        if( (s = my_sem.compare_and_swap( 1, 0 ))!=0 ) {
            if( s!=2 )
                s = my_sem.fetch_and_store( 2 );
            while( s!=0 ) {
                futex_wait( &my_sem, 2 );
                s = my_sem.fetch_and_store( 2 );
            }
        }
    }

    void V() {
        ((void)0);
        if( my_sem--!=1 ) {

            my_sem = 0;
            futex_wakeup_one( &my_sem );
        }
    }
private:
    atomic<int> my_sem;
};
# 259 "../../src/tbb/semaphore.h"
}
}
# 39 "../../src/tbb/concurrent_monitor.h" 2

namespace tbb {
namespace internal {



class circular_doubly_linked_list_with_sentinel : no_copy {
public:
    struct node_t {
        node_t* next;
        node_t* prev;
        explicit node_t() : next((node_t*)(uintptr_t)0xcdcdcdcd), prev((node_t*)(uintptr_t)0xcdcdcdcd) {}
    };


    circular_doubly_linked_list_with_sentinel() {clear();}

    ~circular_doubly_linked_list_with_sentinel() {((void)0);}

    inline size_t size() const {return count;}
    inline bool empty() const {return size()==0;}
    inline node_t* front() const {return head.next;}
    inline node_t* last() const {return head.prev;}
    inline node_t* begin() const {return front();}
    inline const node_t* end() const {return &head;}


    inline void add( node_t* n ) {
        __TBB_store_relaxed(count, __TBB_load_relaxed(count) + 1);
        n->prev = head.prev;
        n->next = &head;
        head.prev->next = n;
        head.prev = n;
    }


    inline void remove( node_t& n ) {
        __TBB_store_relaxed(count, __TBB_load_relaxed(count) - 1);
        n.prev->next = n.next;
        n.next->prev = n.prev;
    }


    inline void flush_to( circular_doubly_linked_list_with_sentinel& lst ) {
        if( const size_t l_count = __TBB_load_relaxed(count) ) {
            __TBB_store_relaxed(lst.count, l_count);
            lst.head.next = head.next;
            lst.head.prev = head.prev;
            head.next->prev = &lst.head;
            head.prev->next = &lst.head;
            clear();
        }
    }

    void clear() {head.next = head.prev = &head; __TBB_store_relaxed(count, 0);}
private:
                 size_t count;
    node_t head;
};

typedef circular_doubly_linked_list_with_sentinel waitset_t;
typedef circular_doubly_linked_list_with_sentinel dllist_t;
typedef circular_doubly_linked_list_with_sentinel::node_t waitset_node_t;



class concurrent_monitor : no_copy {
public:

    class thread_context : waitset_node_t, no_copy {
        friend class concurrent_monitor;
    public:
        thread_context() : spurious(false), aborted(false), ready(false), context(0) {
            epoch = 0;
            in_waitset = false;
        }
        ~thread_context() {
            if (ready) {
                if( spurious ) semaphore().P();
                semaphore().~binary_semaphore();
            }
        }
        binary_semaphore& semaphore() { return *sema.begin(); }
    private:



        void init() __attribute__ ((noinline));
        tbb::aligned_space<binary_semaphore, 1> sema;
                     unsigned epoch;
        tbb::atomic<bool> in_waitset;
        bool spurious;
        bool aborted;
        bool ready;
        uintptr_t context;
    };


    concurrent_monitor() {__TBB_store_relaxed(epoch, 0);}


    ~concurrent_monitor() ;


    void prepare_wait( thread_context& thr, uintptr_t ctx = 0 );



    inline bool commit_wait( thread_context& thr ) {
        const bool do_it = thr.epoch == __TBB_load_relaxed(epoch);

        if( do_it ) {
            ((void)0);
            thr.semaphore().P();
            ((void)0);
            if( thr.aborted )
                throw_exception( eid_user_abort );
        } else {
            cancel_wait( thr );
        }
        return do_it;
    }

    void cancel_wait( thread_context& thr );


    template<typename WaitUntil, typename Context>
    void wait( WaitUntil until, Context on );


    void notify_one() {atomic_fence(); notify_one_relaxed();}


    void notify_one_relaxed();


    void notify_all() {atomic_fence(); notify_all_relaxed();}


    void notify_all_relaxed();


    template<typename P> void notify( const P& predicate ) {atomic_fence(); notify_relaxed( predicate );}


    template<typename P> void notify_relaxed( const P& predicate );


    void abort_all() {atomic_fence(); abort_all_relaxed(); }


    void abort_all_relaxed();

private:
    tbb::spin_mutex mutex_ec;
    waitset_t waitset_ec;
                 unsigned epoch;
    thread_context* to_thread_context( waitset_node_t* n ) { return static_cast<thread_context*>(n); }
};

template<typename WaitUntil, typename Context>
void concurrent_monitor::wait( WaitUntil until, Context on )
{
    bool slept = false;
    thread_context thr_ctx;
    prepare_wait( thr_ctx, on() );
    while( !until() ) {
        if( (slept = commit_wait( thr_ctx ) )==true )
            if( until() ) break;
        slept = false;
        prepare_wait( thr_ctx, on() );
    }
    if( !slept )
        cancel_wait( thr_ctx );
}

template<typename P>
void concurrent_monitor::notify_relaxed( const P& predicate ) {
        if( waitset_ec.empty() )
            return;
        dllist_t temp;
        waitset_node_t* nxt;
        const waitset_node_t* end = waitset_ec.end();
        {
            tbb::spin_mutex::scoped_lock l( mutex_ec );
            __TBB_store_relaxed(epoch, __TBB_load_relaxed(epoch) + 1);
            for( waitset_node_t* n=waitset_ec.last(); n!=end; n=nxt ) {
                nxt = n->prev;
                thread_context* thr = to_thread_context( n );
                if( predicate( thr->context ) ) {
                    waitset_ec.remove( *n );
                    thr->in_waitset = false;
                    temp.add( n );
                }
            }
        }

        end = temp.end();
        for( waitset_node_t* n=temp.front(); n!=end; n=nxt ) {
            nxt = n->next;
            to_thread_context(n)->semaphore().V();
        }



}

}
}
# 35 "../../src/test/test_concurrent_queue.h" 2

struct hacked_micro_queue {
    tbb::atomic<uintptr_t> head_page;
    tbb::atomic<size_t> head_counter;

    tbb::atomic<uintptr_t> tail_page;
    tbb::atomic<size_t> tail_counter;

    tbb::spin_mutex page_mutex;
 };


struct hacked_concurrent_queue_rep {
    static const size_t phi = 3;
    static const size_t n_queue = 8;

    tbb::atomic<size_t> head_counter;
    char pad1[tbb::internal::NFS_MaxLineSize-sizeof(tbb::atomic<size_t>)];
    tbb::atomic<size_t> tail_counter;
    char pad2[tbb::internal::NFS_MaxLineSize-sizeof(tbb::atomic<size_t>)];

    size_t items_per_page;
    size_t item_size;
    tbb::atomic<size_t> n_invalid_entries;
    char pad3[tbb::internal::NFS_MaxLineSize-sizeof(size_t)-sizeof(size_t)-sizeof(tbb::atomic<size_t>)];

    hacked_micro_queue array[n_queue];
};

struct hacked_concurrent_queue_page_allocator {
    size_t foo;
};

template <typename T>
struct hacked_concurrent_queue : public hacked_concurrent_queue_page_allocator {
    hacked_concurrent_queue_rep* my_rep;
    typename tbb::cache_aligned_allocator<T>::template rebind<char>::other my_allocator;
};


struct hacked_bounded_concurrent_queue_rep {
    static const size_t phi = 3;
    static const size_t n_queue = 8;

    tbb::atomic<size_t> head_counter;
    char cmon_items_avail[ sizeof(tbb::internal::concurrent_monitor) ];
    tbb::atomic<size_t> n_invalid_entries;
    char pad1[tbb::internal::NFS_MaxLineSize-((sizeof(tbb::atomic<size_t>)+sizeof(tbb::internal::concurrent_monitor)+sizeof(tbb::atomic<size_t>))&(tbb::internal::NFS_MaxLineSize-1))];

    tbb::atomic<size_t> tail_counter;
    char cmon_slots_avail[ sizeof(tbb::internal::concurrent_monitor) ];
    char pad2[tbb::internal::NFS_MaxLineSize-((sizeof(tbb::atomic<size_t>)+sizeof(tbb::internal::concurrent_monitor))&(tbb::internal::NFS_MaxLineSize-1))];
    hacked_micro_queue array[n_queue];

    static const ptrdiff_t infinite_capacity = ptrdiff_t(~size_t(0)/2);
};

struct hacked_bounded_concurrent_queue {
    size_t foo;
    hacked_bounded_concurrent_queue_rep* my_rep;
    ptrdiff_t my_capacity;
    size_t items_per_page;
    size_t item_size;
};
# 32 "../../src/test/test_concurrent_queue.cpp" 2
# 1 "../../include/tbb/concurrent_queue.h" 1
# 32 "../../include/tbb/concurrent_queue.h"
# 1 "../../include/tbb/internal/_concurrent_queue_impl.h" 1
# 51 "../../include/tbb/internal/_concurrent_queue_impl.h"
# 1 "/usr/include/c++/4.4/iterator" 1 3
# 58 "/usr/include/c++/4.4/iterator" 3
# 58 "/usr/include/c++/4.4/iterator" 3



# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 62 "/usr/include/c++/4.4/iterator" 2 3



# 1 "/usr/include/c++/4.4/ostream" 1 3
# 38 "/usr/include/c++/4.4/ostream" 3
# 38 "/usr/include/c++/4.4/ostream" 3


# 1 "/usr/include/c++/4.4/ios" 1 3
# 37 "/usr/include/c++/4.4/ios" 3
# 37 "/usr/include/c++/4.4/ios" 3






# 1 "/usr/include/c++/4.4/bits/ios_base.h" 1 3
# 39 "/usr/include/c++/4.4/bits/ios_base.h" 3
# 39 "/usr/include/c++/4.4/bits/ios_base.h" 3




# 1 "/usr/include/c++/4.4/bits/locale_classes.h" 1 3
# 39 "/usr/include/c++/4.4/bits/locale_classes.h" 3
# 39 "/usr/include/c++/4.4/bits/locale_classes.h" 3






namespace std __attribute__ ((__visibility__ ("default"))) {
# 61 "/usr/include/c++/4.4/bits/locale_classes.h" 3
  class locale
  {
  public:


    typedef int category;


    class facet;
    class id;
    class _Impl;

    friend class facet;
    friend class _Impl;

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Cache>
      friend struct __use_cache;
# 97 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    static const category none = 0;
    static const category ctype = 1L << 0;
    static const category numeric = 1L << 1;
    static const category collate = 1L << 2;
    static const category time = 1L << 3;
    static const category monetary = 1L << 4;
    static const category messages = 1L << 5;
    static const category all = (ctype | numeric | collate |
        time | monetary | messages);
# 116 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    locale() throw();
# 125 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    locale(const locale& __other) throw();
# 135 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    explicit
    locale(const char* __s);
# 150 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    locale(const locale& __base, const char* __s, category __cat);
# 163 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    locale(const locale& __base, const locale& __add, category __cat);
# 175 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    template<typename _Facet>
      locale(const locale& __other, _Facet* __f);


    ~locale() throw();
# 189 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    const locale&
    operator=(const locale& __other) throw();
# 204 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    template<typename _Facet>
      locale
      combine(const locale& __other) const;






    string
    name() const;
# 223 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    bool
    operator==(const locale& __other) const throw ();







    bool
    operator!=(const locale& __other) const throw ()
    { return !(this->operator==(__other)); }
# 251 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    template<typename _Char, typename _Traits, typename _Alloc>
      bool
      operator()(const basic_string<_Char, _Traits, _Alloc>& __s1,
   const basic_string<_Char, _Traits, _Alloc>& __s2) const;
# 267 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    static locale
    global(const locale&);




    static const locale&
    classic();

  private:

    _Impl* _M_impl;


    static _Impl* _S_classic;


    static _Impl* _S_global;





    static const char* const* const _S_categories;
# 302 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    enum { _S_categories_size = 6 + 6 };


    static __gthread_once_t _S_once;


    explicit
    locale(_Impl*) throw();

    static void
    _S_initialize();

    static void
    _S_initialize_once();

    static category
    _S_normalize_category(category);

    void
    _M_coalesce(const locale& __base, const locale& __add, category __cat);
  };
# 335 "/usr/include/c++/4.4/bits/locale_classes.h" 3
  class locale::facet
  {
  private:
    friend class locale;
    friend class locale::_Impl;

    mutable _Atomic_word _M_refcount;


    static __c_locale _S_c_locale;


    static const char _S_c_name[2];


    static __gthread_once_t _S_once;


    static void
    _S_initialize_once();

  protected:
# 366 "/usr/include/c++/4.4/bits/locale_classes.h" 3
    explicit
    facet(size_t __refs = 0) throw() : _M_refcount(__refs ? 1 : 0)
    { }


    virtual
    ~facet();

    static void
    _S_create_c_locale(__c_locale& __cloc, const char* __s,
         __c_locale __old = 0);

    static __c_locale
    _S_clone_c_locale(__c_locale& __cloc);

    static void
    _S_destroy_c_locale(__c_locale& __cloc);



    static __c_locale
    _S_get_c_locale();

    static const char*
    _S_get_c_name();

  private:
    void
    _M_add_reference() const throw()
    { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }

    void
    _M_remove_reference() const throw()
    {
      if (__gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1) == 1)
 {
   try
     { delete this; }
   catch(...)
     { }
 }
    }

    facet(const facet&);

    facet&
    operator=(const facet&);
  };
# 426 "/usr/include/c++/4.4/bits/locale_classes.h" 3
  class locale::id
  {
  private:
    friend class locale;
    friend class locale::_Impl;

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw ();




    mutable size_t _M_index;


    static _Atomic_word _S_refcount;

    void
    operator=(const id&);

    id(const id&);

  public:



    id() { }

    size_t
    _M_id() const;
  };



  class locale::_Impl
  {
  public:

    friend class locale;
    friend class locale::facet;

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Cache>
      friend struct __use_cache;

  private:

    _Atomic_word _M_refcount;
    const facet** _M_facets;
    size_t _M_facets_size;
    const facet** _M_caches;
    char** _M_names;
    static const locale::id* const _S_id_ctype[];
    static const locale::id* const _S_id_numeric[];
    static const locale::id* const _S_id_collate[];
    static const locale::id* const _S_id_time[];
    static const locale::id* const _S_id_monetary[];
    static const locale::id* const _S_id_messages[];
    static const locale::id* const* const _S_facet_categories[];

    void
    _M_add_reference() throw()
    { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }

    void
    _M_remove_reference() throw()
    {
      if (__gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1) == 1)
 {
   try
     { delete this; }
   catch(...)
     { }
 }
    }

    _Impl(const _Impl&, size_t);
    _Impl(const char*, size_t);
    _Impl(size_t) throw();

   ~_Impl() throw();

    _Impl(const _Impl&);

    void
    operator=(const _Impl&);

    bool
    _M_check_same_name()
    {
      bool __ret = true;
      if (_M_names[1])

 for (size_t __i = 0; __ret && __i < _S_categories_size - 1; ++__i)
   __ret = __builtin_strcmp(_M_names[__i], _M_names[__i + 1]) == 0;
      return __ret;
    }

    void
    _M_replace_categories(const _Impl*, category);

    void
    _M_replace_category(const _Impl*, const locale::id* const*);

    void
    _M_replace_facet(const _Impl*, const locale::id*);

    void
    _M_install_facet(const locale::id*, const facet*);

    template<typename _Facet>
      void
      _M_init_facet(_Facet* __facet)
      { _M_install_facet(&_Facet::id, __facet); }

    void
    _M_install_cache(const facet*, size_t);
  };
# 569 "/usr/include/c++/4.4/bits/locale_classes.h" 3
  template<typename _Facet>
    bool
    has_facet(const locale& __loc) throw();
# 586 "/usr/include/c++/4.4/bits/locale_classes.h" 3
  template<typename _Facet>
    const _Facet&
    use_facet(const locale& __loc);
# 603 "/usr/include/c++/4.4/bits/locale_classes.h" 3
  template<typename _CharT>
    class collate : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;


    protected:


      __c_locale _M_c_locale_collate;

    public:

      static locale::id id;
# 630 "/usr/include/c++/4.4/bits/locale_classes.h" 3
      explicit
      collate(size_t __refs = 0)
      : facet(__refs), _M_c_locale_collate(_S_get_c_locale())
      { }
# 644 "/usr/include/c++/4.4/bits/locale_classes.h" 3
      explicit
      collate(__c_locale __cloc, size_t __refs = 0)
      : facet(__refs), _M_c_locale_collate(_S_clone_c_locale(__cloc))
      { }
# 661 "/usr/include/c++/4.4/bits/locale_classes.h" 3
      int
      compare(const _CharT* __lo1, const _CharT* __hi1,
       const _CharT* __lo2, const _CharT* __hi2) const
      { return this->do_compare(__lo1, __hi1, __lo2, __hi2); }
# 680 "/usr/include/c++/4.4/bits/locale_classes.h" 3
      string_type
      transform(const _CharT* __lo, const _CharT* __hi) const
      { return this->do_transform(__lo, __hi); }
# 694 "/usr/include/c++/4.4/bits/locale_classes.h" 3
      long
      hash(const _CharT* __lo, const _CharT* __hi) const
      { return this->do_hash(__lo, __hi); }


      int
      _M_compare(const _CharT*, const _CharT*) const;

      size_t
      _M_transform(_CharT*, const _CharT*, size_t) const;

  protected:

      virtual
      ~collate()
      { _S_destroy_c_locale(_M_c_locale_collate); }
# 723 "/usr/include/c++/4.4/bits/locale_classes.h" 3
      virtual int
      do_compare(const _CharT* __lo1, const _CharT* __hi1,
   const _CharT* __lo2, const _CharT* __hi2) const;
# 739 "/usr/include/c++/4.4/bits/locale_classes.h" 3
      virtual string_type
      do_transform(const _CharT* __lo, const _CharT* __hi) const;
# 752 "/usr/include/c++/4.4/bits/locale_classes.h" 3
      virtual long
      do_hash(const _CharT* __lo, const _CharT* __hi) const;
    };

  template<typename _CharT>
    locale::id collate<_CharT>::id;


  template<>
    int
    collate<char>::_M_compare(const char*, const char*) const;

  template<>
    size_t
    collate<char>::_M_transform(char*, const char*, size_t) const;


  template<>
    int
    collate<wchar_t>::_M_compare(const wchar_t*, const wchar_t*) const;

  template<>
    size_t
    collate<wchar_t>::_M_transform(wchar_t*, const wchar_t*, size_t) const;



  template<typename _CharT>
    class collate_byname : public collate<_CharT>
    {
    public:


      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;


      explicit
      collate_byname(const char* __s, size_t __refs = 0)
      : collate<_CharT>(__refs)
      {
 if (__builtin_strcmp(__s, "C") != 0
     && __builtin_strcmp(__s, "POSIX") != 0)
   {
     this->_S_destroy_c_locale(this->_M_c_locale_collate);
     this->_S_create_c_locale(this->_M_c_locale_collate, __s);
   }
      }

    protected:
      virtual
      ~collate_byname() { }
    };

}



# 1 "/usr/include/c++/4.4/bits/locale_classes.tcc" 1 3
# 37 "/usr/include/c++/4.4/bits/locale_classes.tcc" 3
# 37 "/usr/include/c++/4.4/bits/locale_classes.tcc" 3


namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _Facet>
    locale::
    locale(const locale& __other, _Facet* __f)
    {
      _M_impl = new _Impl(*__other._M_impl, 1);

      try
 { _M_impl->_M_install_facet(&_Facet::id, __f); }
      catch(...)
 {
   _M_impl->_M_remove_reference();
   throw;
 }
      delete [] _M_impl->_M_names[0];
      _M_impl->_M_names[0] = 0;
    }

  template<typename _Facet>
    locale
    locale::
    combine(const locale& __other) const
    {
      _Impl* __tmp = new _Impl(*_M_impl, 1);
      try
 {
   __tmp->_M_replace_facet(__other._M_impl, &_Facet::id);
 }
      catch(...)
 {
   __tmp->_M_remove_reference();
   throw;
 }
      return locale(__tmp);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    bool
    locale::
    operator()(const basic_string<_CharT, _Traits, _Alloc>& __s1,
        const basic_string<_CharT, _Traits, _Alloc>& __s2) const
    {
      typedef std::collate<_CharT> __collate_type;
      const __collate_type& __collate = use_facet<__collate_type>(*this);
      return (__collate.compare(__s1.data(), __s1.data() + __s1.length(),
    __s2.data(), __s2.data() + __s2.length()) < 0);
    }


  template<typename _Facet>
    bool
    has_facet(const locale& __loc) throw()
    {
      const size_t __i = _Facet::id._M_id();
      const locale::facet** __facets = __loc._M_impl->_M_facets;
      return (__i < __loc._M_impl->_M_facets_size



              && static_cast<const _Facet*>(__facets[__i]));

    }

  template<typename _Facet>
    const _Facet&
    use_facet(const locale& __loc)
    {
      const size_t __i = _Facet::id._M_id();
      const locale::facet** __facets = __loc._M_impl->_M_facets;
      if (__i >= __loc._M_impl->_M_facets_size || !__facets[__i])
        __throw_bad_cast();



      return static_cast<const _Facet&>(*__facets[__i]);

    }



  template<typename _CharT>
    int
    collate<_CharT>::_M_compare(const _CharT*, const _CharT*) const
    { return 0; }


  template<typename _CharT>
    size_t
    collate<_CharT>::_M_transform(_CharT*, const _CharT*, size_t) const
    { return 0; }

  template<typename _CharT>
    int
    collate<_CharT>::
    do_compare(const _CharT* __lo1, const _CharT* __hi1,
        const _CharT* __lo2, const _CharT* __hi2) const
    {


      const string_type __one(__lo1, __hi1);
      const string_type __two(__lo2, __hi2);

      const _CharT* __p = __one.c_str();
      const _CharT* __pend = __one.data() + __one.length();
      const _CharT* __q = __two.c_str();
      const _CharT* __qend = __two.data() + __two.length();




      for (;;)
 {
   const int __res = _M_compare(__p, __q);
   if (__res)
     return __res;

   __p += char_traits<_CharT>::length(__p);
   __q += char_traits<_CharT>::length(__q);
   if (__p == __pend && __q == __qend)
     return 0;
   else if (__p == __pend)
     return -1;
   else if (__q == __qend)
     return 1;

   __p++;
   __q++;
 }
    }

  template<typename _CharT>
    typename collate<_CharT>::string_type
    collate<_CharT>::
    do_transform(const _CharT* __lo, const _CharT* __hi) const
    {
      string_type __ret;


      const string_type __str(__lo, __hi);

      const _CharT* __p = __str.c_str();
      const _CharT* __pend = __str.data() + __str.length();

      size_t __len = (__hi - __lo) * 2;

      _CharT* __c = new _CharT[__len];

      try
 {



   for (;;)
     {

       size_t __res = _M_transform(__c, __p, __len);


       if (__res >= __len)
  {
    __len = __res + 1;
    delete [] __c, __c = 0;
    __c = new _CharT[__len];
    __res = _M_transform(__c, __p, __len);
  }

       __ret.append(__c, __res);
       __p += char_traits<_CharT>::length(__p);
       if (__p == __pend)
  break;

       __p++;
       __ret.push_back(_CharT());
     }
 }
      catch(...)
 {
   delete [] __c;
   throw;
 }

      delete [] __c;

      return __ret;
    }

  template<typename _CharT>
    long
    collate<_CharT>::
    do_hash(const _CharT* __lo, const _CharT* __hi) const
    {
      unsigned long __val = 0;
      for (; __lo < __hi; ++__lo)
 __val =
   *__lo + ((__val << 7)
     | (__val >> (__gnu_cxx::__numeric_traits<unsigned long>::
    __digits - 7)));
      return static_cast<long>(__val);
    }





  extern template class collate<char>;
  extern template class collate_byname<char>;

  extern template
    const collate<char>&
    use_facet<collate<char> >(const locale&);

  extern template
    bool
    has_facet<collate<char> >(const locale&);


  extern template class collate<wchar_t>;
  extern template class collate_byname<wchar_t>;

  extern template
    const collate<wchar_t>&
    use_facet<collate<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<collate<wchar_t> >(const locale&);



}
# 810 "/usr/include/c++/4.4/bits/locale_classes.h" 2 3
# 44 "/usr/include/c++/4.4/bits/ios_base.h" 2 3
# 54 "/usr/include/c++/4.4/bits/ios_base.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {





  enum _Ios_Fmtflags
    {
      _S_boolalpha = 1L << 0,
      _S_dec = 1L << 1,
      _S_fixed = 1L << 2,
      _S_hex = 1L << 3,
      _S_internal = 1L << 4,
      _S_left = 1L << 5,
      _S_oct = 1L << 6,
      _S_right = 1L << 7,
      _S_scientific = 1L << 8,
      _S_showbase = 1L << 9,
      _S_showpoint = 1L << 10,
      _S_showpos = 1L << 11,
      _S_skipws = 1L << 12,
      _S_unitbuf = 1L << 13,
      _S_uppercase = 1L << 14,
      _S_adjustfield = _S_left | _S_right | _S_internal,
      _S_basefield = _S_dec | _S_oct | _S_hex,
      _S_floatfield = _S_scientific | _S_fixed,
      _S_ios_fmtflags_end = 1L << 16
    };

  inline _Ios_Fmtflags
  operator&(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Fmtflags
  operator|(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Fmtflags
  operator^(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Fmtflags&
  operator|=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a | __b; }

  inline _Ios_Fmtflags&
  operator&=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a & __b; }

  inline _Ios_Fmtflags&
  operator^=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a ^ __b; }

  inline _Ios_Fmtflags
  operator~(_Ios_Fmtflags __a)
  { return _Ios_Fmtflags(~static_cast<int>(__a)); }


  enum _Ios_Openmode
    {
      _S_app = 1L << 0,
      _S_ate = 1L << 1,
      _S_bin = 1L << 2,
      _S_in = 1L << 3,
      _S_out = 1L << 4,
      _S_trunc = 1L << 5,
      _S_ios_openmode_end = 1L << 16
    };

  inline _Ios_Openmode
  operator&(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Openmode
  operator|(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Openmode
  operator^(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Openmode&
  operator|=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a | __b; }

  inline _Ios_Openmode&
  operator&=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a & __b; }

  inline _Ios_Openmode&
  operator^=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a ^ __b; }

  inline _Ios_Openmode
  operator~(_Ios_Openmode __a)
  { return _Ios_Openmode(~static_cast<int>(__a)); }


  enum _Ios_Iostate
    {
      _S_goodbit = 0,
      _S_badbit = 1L << 0,
      _S_eofbit = 1L << 1,
      _S_failbit = 1L << 2,
      _S_ios_iostate_end = 1L << 16
    };

  inline _Ios_Iostate
  operator&(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Iostate
  operator|(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Iostate
  operator^(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Iostate&
  operator|=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a | __b; }

  inline _Ios_Iostate&
  operator&=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a & __b; }

  inline _Ios_Iostate&
  operator^=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a ^ __b; }

  inline _Ios_Iostate
  operator~(_Ios_Iostate __a)
  { return _Ios_Iostate(~static_cast<int>(__a)); }

  enum _Ios_Seekdir
    {
      _S_beg = 0,
      _S_cur = 1,
      _S_end = 2,
      _S_ios_seekdir_end = 1L << 16
    };
# 207 "/usr/include/c++/4.4/bits/ios_base.h" 3
  class ios_base
  {
  public:







    class failure : public exception
    {
    public:


      explicit
      failure(const string& __str) throw();



      virtual
      ~failure() throw();

      virtual const char*
      what() const throw();

    private:
      string _M_msg;
    };
# 263 "/usr/include/c++/4.4/bits/ios_base.h" 3
    typedef _Ios_Fmtflags fmtflags;


    static const fmtflags boolalpha = _S_boolalpha;


    static const fmtflags dec = _S_dec;


    static const fmtflags fixed = _S_fixed;


    static const fmtflags hex = _S_hex;




    static const fmtflags internal = _S_internal;



    static const fmtflags left = _S_left;


    static const fmtflags oct = _S_oct;



    static const fmtflags right = _S_right;


    static const fmtflags scientific = _S_scientific;



    static const fmtflags showbase = _S_showbase;



    static const fmtflags showpoint = _S_showpoint;


    static const fmtflags showpos = _S_showpos;


    static const fmtflags skipws = _S_skipws;


    static const fmtflags unitbuf = _S_unitbuf;



    static const fmtflags uppercase = _S_uppercase;


    static const fmtflags adjustfield = _S_adjustfield;


    static const fmtflags basefield = _S_basefield;


    static const fmtflags floatfield = _S_floatfield;
# 338 "/usr/include/c++/4.4/bits/ios_base.h" 3
    typedef _Ios_Iostate iostate;



    static const iostate badbit = _S_badbit;


    static const iostate eofbit = _S_eofbit;




    static const iostate failbit = _S_failbit;


    static const iostate goodbit = _S_goodbit;
# 369 "/usr/include/c++/4.4/bits/ios_base.h" 3
    typedef _Ios_Openmode openmode;


    static const openmode app = _S_app;


    static const openmode ate = _S_ate;




    static const openmode binary = _S_bin;


    static const openmode in = _S_in;


    static const openmode out = _S_out;


    static const openmode trunc = _S_trunc;
# 401 "/usr/include/c++/4.4/bits/ios_base.h" 3
    typedef _Ios_Seekdir seekdir;


    static const seekdir beg = _S_beg;


    static const seekdir cur = _S_cur;


    static const seekdir end = _S_end;


    typedef int io_state;
    typedef int open_mode;
    typedef int seek_dir;

    typedef std::streampos streampos;
    typedef std::streamoff streamoff;
# 427 "/usr/include/c++/4.4/bits/ios_base.h" 3
    enum event
    {
      erase_event,
      imbue_event,
      copyfmt_event
    };
# 444 "/usr/include/c++/4.4/bits/ios_base.h" 3
    typedef void (*event_callback) (event, ios_base&, int);
# 456 "/usr/include/c++/4.4/bits/ios_base.h" 3
    void
    register_callback(event_callback __fn, int __index);

  protected:




    streamsize _M_precision;
    streamsize _M_width;
    fmtflags _M_flags;
    iostate _M_exception;
    iostate _M_streambuf_state;




    struct _Callback_list
    {

      _Callback_list* _M_next;
      ios_base::event_callback _M_fn;
      int _M_index;
      _Atomic_word _M_refcount;

      _Callback_list(ios_base::event_callback __fn, int __index,
       _Callback_list* __cb)
      : _M_next(__cb), _M_fn(__fn), _M_index(__index), _M_refcount(0) { }

      void
      _M_add_reference() { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }


      int
      _M_remove_reference()
      { return __gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1); }
    };

     _Callback_list* _M_callbacks;

    void
    _M_call_callbacks(event __ev) throw();

    void
    _M_dispose_callbacks(void);


    struct _Words
    {
      void* _M_pword;
      long _M_iword;
      _Words() : _M_pword(0), _M_iword(0) { }
    };


    _Words _M_word_zero;



    enum { _S_local_word_size = 8 };
    _Words _M_local_word[_S_local_word_size];


    int _M_word_size;
    _Words* _M_word;

    _Words&
    _M_grow_words(int __index, bool __iword);


    locale _M_ios_locale;

    void
    _M_init();

  public:





    class Init
    {
      friend class ios_base;
    public:
      Init();
      ~Init();

    private:
      static _Atomic_word _S_refcount;
      static bool _S_synced_with_stdio;
    };






    fmtflags
    flags() const
    { return _M_flags; }
# 565 "/usr/include/c++/4.4/bits/ios_base.h" 3
    fmtflags
    flags(fmtflags __fmtfl)
    {
      fmtflags __old = _M_flags;
      _M_flags = __fmtfl;
      return __old;
    }
# 581 "/usr/include/c++/4.4/bits/ios_base.h" 3
    fmtflags
    setf(fmtflags __fmtfl)
    {
      fmtflags __old = _M_flags;
      _M_flags |= __fmtfl;
      return __old;
    }
# 598 "/usr/include/c++/4.4/bits/ios_base.h" 3
    fmtflags
    setf(fmtflags __fmtfl, fmtflags __mask)
    {
      fmtflags __old = _M_flags;
      _M_flags &= ~__mask;
      _M_flags |= (__fmtfl & __mask);
      return __old;
    }







    void
    unsetf(fmtflags __mask)
    { _M_flags &= ~__mask; }
# 624 "/usr/include/c++/4.4/bits/ios_base.h" 3
    streamsize
    precision() const
    { return _M_precision; }






    streamsize
    precision(streamsize __prec)
    {
      streamsize __old = _M_precision;
      _M_precision = __prec;
      return __old;
    }







    streamsize
    width() const
    { return _M_width; }






    streamsize
    width(streamsize __wide)
    {
      streamsize __old = _M_width;
      _M_width = __wide;
      return __old;
    }
# 675 "/usr/include/c++/4.4/bits/ios_base.h" 3
    static bool
    sync_with_stdio(bool __sync = true);
# 687 "/usr/include/c++/4.4/bits/ios_base.h" 3
    locale
    imbue(const locale& __loc);
# 698 "/usr/include/c++/4.4/bits/ios_base.h" 3
    locale
    getloc() const
    { return _M_ios_locale; }
# 709 "/usr/include/c++/4.4/bits/ios_base.h" 3
    const locale&
    _M_getloc() const
    { return _M_ios_locale; }
# 728 "/usr/include/c++/4.4/bits/ios_base.h" 3
    static int
    xalloc() throw();
# 744 "/usr/include/c++/4.4/bits/ios_base.h" 3
    long&
    iword(int __ix)
    {
      _Words& __word = (__ix < _M_word_size)
   ? _M_word[__ix] : _M_grow_words(__ix, true);
      return __word._M_iword;
    }
# 765 "/usr/include/c++/4.4/bits/ios_base.h" 3
    void*&
    pword(int __ix)
    {
      _Words& __word = (__ix < _M_word_size)
   ? _M_word[__ix] : _M_grow_words(__ix, false);
      return __word._M_pword;
    }
# 782 "/usr/include/c++/4.4/bits/ios_base.h" 3
    virtual ~ios_base();

  protected:
    ios_base();



  private:
    ios_base(const ios_base&);

    ios_base&
    operator=(const ios_base&);
  };



  inline ios_base&
  boolalpha(ios_base& __base)
  {
    __base.setf(ios_base::boolalpha);
    return __base;
  }


  inline ios_base&
  noboolalpha(ios_base& __base)
  {
    __base.unsetf(ios_base::boolalpha);
    return __base;
  }


  inline ios_base&
  showbase(ios_base& __base)
  {
    __base.setf(ios_base::showbase);
    return __base;
  }


  inline ios_base&
  noshowbase(ios_base& __base)
  {
    __base.unsetf(ios_base::showbase);
    return __base;
  }


  inline ios_base&
  showpoint(ios_base& __base)
  {
    __base.setf(ios_base::showpoint);
    return __base;
  }


  inline ios_base&
  noshowpoint(ios_base& __base)
  {
    __base.unsetf(ios_base::showpoint);
    return __base;
  }


  inline ios_base&
  showpos(ios_base& __base)
  {
    __base.setf(ios_base::showpos);
    return __base;
  }


  inline ios_base&
  noshowpos(ios_base& __base)
  {
    __base.unsetf(ios_base::showpos);
    return __base;
  }


  inline ios_base&
  skipws(ios_base& __base)
  {
    __base.setf(ios_base::skipws);
    return __base;
  }


  inline ios_base&
  noskipws(ios_base& __base)
  {
    __base.unsetf(ios_base::skipws);
    return __base;
  }


  inline ios_base&
  uppercase(ios_base& __base)
  {
    __base.setf(ios_base::uppercase);
    return __base;
  }


  inline ios_base&
  nouppercase(ios_base& __base)
  {
    __base.unsetf(ios_base::uppercase);
    return __base;
  }


  inline ios_base&
  unitbuf(ios_base& __base)
  {
     __base.setf(ios_base::unitbuf);
     return __base;
  }


  inline ios_base&
  nounitbuf(ios_base& __base)
  {
     __base.unsetf(ios_base::unitbuf);
     return __base;
  }



  inline ios_base&
  internal(ios_base& __base)
  {
     __base.setf(ios_base::internal, ios_base::adjustfield);
     return __base;
  }


  inline ios_base&
  left(ios_base& __base)
  {
    __base.setf(ios_base::left, ios_base::adjustfield);
    return __base;
  }


  inline ios_base&
  right(ios_base& __base)
  {
    __base.setf(ios_base::right, ios_base::adjustfield);
    return __base;
  }



  inline ios_base&
  dec(ios_base& __base)
  {
    __base.setf(ios_base::dec, ios_base::basefield);
    return __base;
  }


  inline ios_base&
  hex(ios_base& __base)
  {
    __base.setf(ios_base::hex, ios_base::basefield);
    return __base;
  }


  inline ios_base&
  oct(ios_base& __base)
  {
    __base.setf(ios_base::oct, ios_base::basefield);
    return __base;
  }



  inline ios_base&
  fixed(ios_base& __base)
  {
    __base.setf(ios_base::fixed, ios_base::floatfield);
    return __base;
  }


  inline ios_base&
  scientific(ios_base& __base)
  {
    __base.setf(ios_base::scientific, ios_base::floatfield);
    return __base;
  }

}
# 44 "/usr/include/c++/4.4/ios" 2 3
# 1 "/usr/include/c++/4.4/streambuf" 1 3
# 37 "/usr/include/c++/4.4/streambuf" 3
# 37 "/usr/include/c++/4.4/streambuf" 3
# 46 "/usr/include/c++/4.4/streambuf" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits>
    streamsize
    __copy_streambufs_eof(basic_streambuf<_CharT, _Traits>*,
     basic_streambuf<_CharT, _Traits>*, bool&);
# 113 "/usr/include/c++/4.4/streambuf" 3
  template<typename _CharT, typename _Traits>
    class basic_streambuf
    {
    public:






      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename traits_type::int_type int_type;
      typedef typename traits_type::pos_type pos_type;
      typedef typename traits_type::off_type off_type;




      typedef basic_streambuf<char_type, traits_type> __streambuf_type;


      friend class basic_ios<char_type, traits_type>;
      friend class basic_istream<char_type, traits_type>;
      friend class basic_ostream<char_type, traits_type>;
      friend class istreambuf_iterator<char_type, traits_type>;
      friend class ostreambuf_iterator<char_type, traits_type>;

      friend streamsize
      __copy_streambufs_eof<>(__streambuf_type*, __streambuf_type*, bool&);

      template<bool _IsMove, typename _CharT2>
        friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
            _CharT2*>::__type
        __copy_move_a2(istreambuf_iterator<_CharT2>,
         istreambuf_iterator<_CharT2>, _CharT2*);

      template<typename _CharT2>
        friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
      istreambuf_iterator<_CharT2> >::__type
        find(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      const _CharT2&);

      template<typename _CharT2, typename _Traits2>
        friend basic_istream<_CharT2, _Traits2>&
        operator>>(basic_istream<_CharT2, _Traits2>&, _CharT2*);

      template<typename _CharT2, typename _Traits2, typename _Alloc>
        friend basic_istream<_CharT2, _Traits2>&
        operator>>(basic_istream<_CharT2, _Traits2>&,
     basic_string<_CharT2, _Traits2, _Alloc>&);

      template<typename _CharT2, typename _Traits2, typename _Alloc>
        friend basic_istream<_CharT2, _Traits2>&
        getline(basic_istream<_CharT2, _Traits2>&,
  basic_string<_CharT2, _Traits2, _Alloc>&, _CharT2);

    protected:
# 179 "/usr/include/c++/4.4/streambuf" 3
      char_type* _M_in_beg;
      char_type* _M_in_cur;
      char_type* _M_in_end;
      char_type* _M_out_beg;
      char_type* _M_out_cur;
      char_type* _M_out_end;


      locale _M_buf_locale;

  public:

      virtual
      ~basic_streambuf()
      { }
# 203 "/usr/include/c++/4.4/streambuf" 3
      locale
      pubimbue(const locale &__loc)
      {
 locale __tmp(this->getloc());
 this->imbue(__loc);
 _M_buf_locale = __loc;
 return __tmp;
      }
# 220 "/usr/include/c++/4.4/streambuf" 3
      locale
      getloc() const
      { return _M_buf_locale; }
# 233 "/usr/include/c++/4.4/streambuf" 3
      __streambuf_type*
      pubsetbuf(char_type* __s, streamsize __n)
      { return this->setbuf(__s, __n); }

      pos_type
      pubseekoff(off_type __off, ios_base::seekdir __way,
   ios_base::openmode __mode = ios_base::in | ios_base::out)
      { return this->seekoff(__off, __way, __mode); }

      pos_type
      pubseekpos(pos_type __sp,
   ios_base::openmode __mode = ios_base::in | ios_base::out)
      { return this->seekpos(__sp, __mode); }

      int
      pubsync() { return this->sync(); }
# 260 "/usr/include/c++/4.4/streambuf" 3
      streamsize
      in_avail()
      {
 const streamsize __ret = this->egptr() - this->gptr();
 return __ret ? __ret : this->showmanyc();
      }
# 274 "/usr/include/c++/4.4/streambuf" 3
      int_type
      snextc()
      {
 int_type __ret = traits_type::eof();
 if (__builtin_expect(!traits_type::eq_int_type(this->sbumpc(),
             __ret), true))
   __ret = this->sgetc();
 return __ret;
      }
# 292 "/usr/include/c++/4.4/streambuf" 3
      int_type
      sbumpc()
      {
 int_type __ret;
 if (__builtin_expect(this->gptr() < this->egptr(), true))
   {
     __ret = traits_type::to_int_type(*this->gptr());
     this->gbump(1);
   }
 else
   __ret = this->uflow();
 return __ret;
      }
# 314 "/usr/include/c++/4.4/streambuf" 3
      int_type
      sgetc()
      {
 int_type __ret;
 if (__builtin_expect(this->gptr() < this->egptr(), true))
   __ret = traits_type::to_int_type(*this->gptr());
 else
   __ret = this->underflow();
 return __ret;
      }
# 333 "/usr/include/c++/4.4/streambuf" 3
      streamsize
      sgetn(char_type* __s, streamsize __n)
      { return this->xsgetn(__s, __n); }
# 347 "/usr/include/c++/4.4/streambuf" 3
      int_type
      sputbackc(char_type __c)
      {
 int_type __ret;
 const bool __testpos = this->eback() < this->gptr();
 if (__builtin_expect(!__testpos ||
        !traits_type::eq(__c, this->gptr()[-1]), false))
   __ret = this->pbackfail(traits_type::to_int_type(__c));
 else
   {
     this->gbump(-1);
     __ret = traits_type::to_int_type(*this->gptr());
   }
 return __ret;
      }
# 372 "/usr/include/c++/4.4/streambuf" 3
      int_type
      sungetc()
      {
 int_type __ret;
 if (__builtin_expect(this->eback() < this->gptr(), true))
   {
     this->gbump(-1);
     __ret = traits_type::to_int_type(*this->gptr());
   }
 else
   __ret = this->pbackfail();
 return __ret;
      }
# 399 "/usr/include/c++/4.4/streambuf" 3
      int_type
      sputc(char_type __c)
      {
 int_type __ret;
 if (__builtin_expect(this->pptr() < this->epptr(), true))
   {
     *this->pptr() = __c;
     this->pbump(1);
     __ret = traits_type::to_int_type(__c);
   }
 else
   __ret = this->overflow(traits_type::to_int_type(__c));
 return __ret;
      }
# 425 "/usr/include/c++/4.4/streambuf" 3
      streamsize
      sputn(const char_type* __s, streamsize __n)
      { return this->xsputn(__s, __n); }

    protected:
# 439 "/usr/include/c++/4.4/streambuf" 3
      basic_streambuf()
      : _M_in_beg(0), _M_in_cur(0), _M_in_end(0),
      _M_out_beg(0), _M_out_cur(0), _M_out_end(0),
      _M_buf_locale(locale())
      { }
# 457 "/usr/include/c++/4.4/streambuf" 3
      char_type*
      eback() const { return _M_in_beg; }

      char_type*
      gptr() const { return _M_in_cur; }

      char_type*
      egptr() const { return _M_in_end; }
# 473 "/usr/include/c++/4.4/streambuf" 3
      void
      gbump(int __n) { _M_in_cur += __n; }
# 484 "/usr/include/c++/4.4/streambuf" 3
      void
      setg(char_type* __gbeg, char_type* __gnext, char_type* __gend)
      {
 _M_in_beg = __gbeg;
 _M_in_cur = __gnext;
 _M_in_end = __gend;
      }
# 504 "/usr/include/c++/4.4/streambuf" 3
      char_type*
      pbase() const { return _M_out_beg; }

      char_type*
      pptr() const { return _M_out_cur; }

      char_type*
      epptr() const { return _M_out_end; }
# 520 "/usr/include/c++/4.4/streambuf" 3
      void
      pbump(int __n) { _M_out_cur += __n; }
# 530 "/usr/include/c++/4.4/streambuf" 3
      void
      setp(char_type* __pbeg, char_type* __pend)
      {
 _M_out_beg = _M_out_cur = __pbeg;
 _M_out_end = __pend;
      }
# 551 "/usr/include/c++/4.4/streambuf" 3
      virtual void
      imbue(const locale&)
      { }
# 566 "/usr/include/c++/4.4/streambuf" 3
      virtual basic_streambuf<char_type,_Traits>*
      setbuf(char_type*, streamsize)
      { return this; }
# 577 "/usr/include/c++/4.4/streambuf" 3
      virtual pos_type
      seekoff(off_type, ios_base::seekdir,
       ios_base::openmode = ios_base::in | ios_base::out)
      { return pos_type(off_type(-1)); }
# 589 "/usr/include/c++/4.4/streambuf" 3
      virtual pos_type
      seekpos(pos_type,
       ios_base::openmode = ios_base::in | ios_base::out)
      { return pos_type(off_type(-1)); }
# 602 "/usr/include/c++/4.4/streambuf" 3
      virtual int
      sync() { return 0; }
# 624 "/usr/include/c++/4.4/streambuf" 3
      virtual streamsize
      showmanyc() { return 0; }
# 640 "/usr/include/c++/4.4/streambuf" 3
      virtual streamsize
      xsgetn(char_type* __s, streamsize __n);
# 662 "/usr/include/c++/4.4/streambuf" 3
      virtual int_type
      underflow()
      { return traits_type::eof(); }
# 675 "/usr/include/c++/4.4/streambuf" 3
      virtual int_type
      uflow()
      {
 int_type __ret = traits_type::eof();
 const bool __testeof = traits_type::eq_int_type(this->underflow(),
       __ret);
 if (!__testeof)
   {
     __ret = traits_type::to_int_type(*this->gptr());
     this->gbump(1);
   }
 return __ret;
      }
# 699 "/usr/include/c++/4.4/streambuf" 3
      virtual int_type
      pbackfail(int_type = traits_type::eof())
      { return traits_type::eof(); }
# 717 "/usr/include/c++/4.4/streambuf" 3
      virtual streamsize
      xsputn(const char_type* __s, streamsize __n);
# 742 "/usr/include/c++/4.4/streambuf" 3
      virtual int_type
      overflow(int_type = traits_type::eof())
      { return traits_type::eof(); }



    public:
# 757 "/usr/include/c++/4.4/streambuf" 3
      void
      stossc()
      {
 if (this->gptr() < this->egptr())
   this->gbump(1);
 else
   this->uflow();
      }


    private:


      basic_streambuf(const __streambuf_type& __sb)
      : _M_in_beg(__sb._M_in_beg), _M_in_cur(__sb._M_in_cur),
      _M_in_end(__sb._M_in_end), _M_out_beg(__sb._M_out_beg),
      _M_out_cur(__sb._M_out_cur), _M_out_end(__sb._M_out_cur),
      _M_buf_locale(__sb._M_buf_locale)
      { }

      __streambuf_type&
      operator=(const __streambuf_type&) { return *this; };
    };


  template<>
    streamsize
    __copy_streambufs_eof(basic_streambuf<char>* __sbin,
     basic_streambuf<char>* __sbout, bool& __ineof);

  template<>
    streamsize
    __copy_streambufs_eof(basic_streambuf<wchar_t>* __sbin,
     basic_streambuf<wchar_t>* __sbout, bool& __ineof);


}



# 1 "/usr/include/c++/4.4/bits/streambuf.tcc" 1 3
# 38 "/usr/include/c++/4.4/bits/streambuf.tcc" 3
# 38 "/usr/include/c++/4.4/bits/streambuf.tcc" 3


namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits>
    streamsize
    basic_streambuf<_CharT, _Traits>::
    xsgetn(char_type* __s, streamsize __n)
    {
      streamsize __ret = 0;
      while (__ret < __n)
 {
   const streamsize __buf_len = this->egptr() - this->gptr();
   if (__buf_len)
     {
       const streamsize __remaining = __n - __ret;
       const streamsize __len = std::min(__buf_len, __remaining);
       traits_type::copy(__s, this->gptr(), __len);
       __ret += __len;
       __s += __len;
       this->gbump(__len);
     }

   if (__ret < __n)
     {
       const int_type __c = this->uflow();
       if (!traits_type::eq_int_type(__c, traits_type::eof()))
  {
    traits_type::assign(*__s++, traits_type::to_char_type(__c));
    ++__ret;
  }
       else
  break;
     }
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    streamsize
    basic_streambuf<_CharT, _Traits>::
    xsputn(const char_type* __s, streamsize __n)
    {
      streamsize __ret = 0;
      while (__ret < __n)
 {
   const streamsize __buf_len = this->epptr() - this->pptr();
   if (__buf_len)
     {
       const streamsize __remaining = __n - __ret;
       const streamsize __len = std::min(__buf_len, __remaining);
       traits_type::copy(this->pptr(), __s, __len);
       __ret += __len;
       __s += __len;
       this->pbump(__len);
     }

   if (__ret < __n)
     {
       int_type __c = this->overflow(traits_type::to_int_type(*__s));
       if (!traits_type::eq_int_type(__c, traits_type::eof()))
  {
    ++__ret;
    ++__s;
  }
       else
  break;
     }
 }
      return __ret;
    }




  template<typename _CharT, typename _Traits>
    streamsize
    __copy_streambufs_eof(basic_streambuf<_CharT, _Traits>* __sbin,
     basic_streambuf<_CharT, _Traits>* __sbout,
     bool& __ineof)
    {
      streamsize __ret = 0;
      __ineof = true;
      typename _Traits::int_type __c = __sbin->sgetc();
      while (!_Traits::eq_int_type(__c, _Traits::eof()))
 {
   __c = __sbout->sputc(_Traits::to_char_type(__c));
   if (_Traits::eq_int_type(__c, _Traits::eof()))
     {
       __ineof = false;
       break;
     }
   ++__ret;
   __c = __sbin->snextc();
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    inline streamsize
    __copy_streambufs(basic_streambuf<_CharT, _Traits>* __sbin,
        basic_streambuf<_CharT, _Traits>* __sbout)
    {
      bool __ineof;
      return __copy_streambufs_eof(__sbin, __sbout, __ineof);
    }





  extern template class basic_streambuf<char>;
  extern template
    streamsize
    __copy_streambufs(basic_streambuf<char>*,
        basic_streambuf<char>*);
  extern template
    streamsize
    __copy_streambufs_eof(basic_streambuf<char>*,
     basic_streambuf<char>*, bool&);


  extern template class basic_streambuf<wchar_t>;
  extern template
    streamsize
    __copy_streambufs(basic_streambuf<wchar_t>*,
        basic_streambuf<wchar_t>*);
  extern template
    streamsize
    __copy_streambufs_eof(basic_streambuf<wchar_t>*,
     basic_streambuf<wchar_t>*, bool&);



}
# 797 "/usr/include/c++/4.4/streambuf" 2 3
# 45 "/usr/include/c++/4.4/ios" 2 3
# 1 "/usr/include/c++/4.4/bits/basic_ios.h" 1 3
# 35 "/usr/include/c++/4.4/bits/basic_ios.h" 3
# 35 "/usr/include/c++/4.4/bits/basic_ios.h" 3




# 1 "/usr/include/c++/4.4/bits/locale_facets.h" 1 3
# 39 "/usr/include/c++/4.4/bits/locale_facets.h" 3
# 39 "/usr/include/c++/4.4/bits/locale_facets.h" 3


# 1 "/usr/include/c++/4.4/cwctype" 1 3
# 41 "/usr/include/c++/4.4/cwctype" 3
# 41 "/usr/include/c++/4.4/cwctype" 3





# 1 "/usr/include/wctype.h" 1 3 4
# 33 "/usr/include/wctype.h" 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 34 "/usr/include/wctype.h" 2 3 4
# 52 "/usr/include/wctype.h" 3 4
typedef unsigned long int wctype_t;
# 71 "/usr/include/wctype.h" 3 4
enum
{
  __ISwupper = 0,
  __ISwlower = 1,
  __ISwalpha = 2,
  __ISwdigit = 3,
  __ISwxdigit = 4,
  __ISwspace = 5,
  __ISwprint = 6,
  __ISwgraph = 7,
  __ISwblank = 8,
  __ISwcntrl = 9,
  __ISwpunct = 10,
  __ISwalnum = 11,

  _ISwupper = ((__ISwupper) < 8 ? (int) ((1UL << (__ISwupper)) << 24) : ((__ISwupper) < 16 ? (int) ((1UL << (__ISwupper)) << 8) : ((__ISwupper) < 24 ? (int) ((1UL << (__ISwupper)) >> 8) : (int) ((1UL << (__ISwupper)) >> 24)))),
  _ISwlower = ((__ISwlower) < 8 ? (int) ((1UL << (__ISwlower)) << 24) : ((__ISwlower) < 16 ? (int) ((1UL << (__ISwlower)) << 8) : ((__ISwlower) < 24 ? (int) ((1UL << (__ISwlower)) >> 8) : (int) ((1UL << (__ISwlower)) >> 24)))),
  _ISwalpha = ((__ISwalpha) < 8 ? (int) ((1UL << (__ISwalpha)) << 24) : ((__ISwalpha) < 16 ? (int) ((1UL << (__ISwalpha)) << 8) : ((__ISwalpha) < 24 ? (int) ((1UL << (__ISwalpha)) >> 8) : (int) ((1UL << (__ISwalpha)) >> 24)))),
  _ISwdigit = ((__ISwdigit) < 8 ? (int) ((1UL << (__ISwdigit)) << 24) : ((__ISwdigit) < 16 ? (int) ((1UL << (__ISwdigit)) << 8) : ((__ISwdigit) < 24 ? (int) ((1UL << (__ISwdigit)) >> 8) : (int) ((1UL << (__ISwdigit)) >> 24)))),
  _ISwxdigit = ((__ISwxdigit) < 8 ? (int) ((1UL << (__ISwxdigit)) << 24) : ((__ISwxdigit) < 16 ? (int) ((1UL << (__ISwxdigit)) << 8) : ((__ISwxdigit) < 24 ? (int) ((1UL << (__ISwxdigit)) >> 8) : (int) ((1UL << (__ISwxdigit)) >> 24)))),
  _ISwspace = ((__ISwspace) < 8 ? (int) ((1UL << (__ISwspace)) << 24) : ((__ISwspace) < 16 ? (int) ((1UL << (__ISwspace)) << 8) : ((__ISwspace) < 24 ? (int) ((1UL << (__ISwspace)) >> 8) : (int) ((1UL << (__ISwspace)) >> 24)))),
  _ISwprint = ((__ISwprint) < 8 ? (int) ((1UL << (__ISwprint)) << 24) : ((__ISwprint) < 16 ? (int) ((1UL << (__ISwprint)) << 8) : ((__ISwprint) < 24 ? (int) ((1UL << (__ISwprint)) >> 8) : (int) ((1UL << (__ISwprint)) >> 24)))),
  _ISwgraph = ((__ISwgraph) < 8 ? (int) ((1UL << (__ISwgraph)) << 24) : ((__ISwgraph) < 16 ? (int) ((1UL << (__ISwgraph)) << 8) : ((__ISwgraph) < 24 ? (int) ((1UL << (__ISwgraph)) >> 8) : (int) ((1UL << (__ISwgraph)) >> 24)))),
  _ISwblank = ((__ISwblank) < 8 ? (int) ((1UL << (__ISwblank)) << 24) : ((__ISwblank) < 16 ? (int) ((1UL << (__ISwblank)) << 8) : ((__ISwblank) < 24 ? (int) ((1UL << (__ISwblank)) >> 8) : (int) ((1UL << (__ISwblank)) >> 24)))),
  _ISwcntrl = ((__ISwcntrl) < 8 ? (int) ((1UL << (__ISwcntrl)) << 24) : ((__ISwcntrl) < 16 ? (int) ((1UL << (__ISwcntrl)) << 8) : ((__ISwcntrl) < 24 ? (int) ((1UL << (__ISwcntrl)) >> 8) : (int) ((1UL << (__ISwcntrl)) >> 24)))),
  _ISwpunct = ((__ISwpunct) < 8 ? (int) ((1UL << (__ISwpunct)) << 24) : ((__ISwpunct) < 16 ? (int) ((1UL << (__ISwpunct)) << 8) : ((__ISwpunct) < 24 ? (int) ((1UL << (__ISwpunct)) >> 8) : (int) ((1UL << (__ISwpunct)) >> 24)))),
  _ISwalnum = ((__ISwalnum) < 8 ? (int) ((1UL << (__ISwalnum)) << 24) : ((__ISwalnum) < 16 ? (int) ((1UL << (__ISwalnum)) << 8) : ((__ISwalnum) < 24 ? (int) ((1UL << (__ISwalnum)) >> 8) : (int) ((1UL << (__ISwalnum)) >> 24))))
};



extern "C" {
# 111 "/usr/include/wctype.h" 3 4
extern int iswalnum (wint_t __wc) throw ();





extern int iswalpha (wint_t __wc) throw ();


extern int iswcntrl (wint_t __wc) throw ();



extern int iswdigit (wint_t __wc) throw ();



extern int iswgraph (wint_t __wc) throw ();




extern int iswlower (wint_t __wc) throw ();


extern int iswprint (wint_t __wc) throw ();




extern int iswpunct (wint_t __wc) throw ();




extern int iswspace (wint_t __wc) throw ();




extern int iswupper (wint_t __wc) throw ();




extern int iswxdigit (wint_t __wc) throw ();





extern int iswblank (wint_t __wc) throw ();
# 171 "/usr/include/wctype.h" 3 4
extern wctype_t wctype (const char *__property) throw ();



extern int iswctype (wint_t __wc, wctype_t __desc) throw ();
# 186 "/usr/include/wctype.h" 3 4
typedef const __int32_t *wctrans_t;







extern wint_t towlower (wint_t __wc) throw ();


extern wint_t towupper (wint_t __wc) throw ();


}
# 213 "/usr/include/wctype.h" 3 4
extern "C" {




extern wctrans_t wctrans (const char *__property) throw ();


extern wint_t towctrans (wint_t __wc, wctrans_t __desc) throw ();
# 230 "/usr/include/wctype.h" 3 4
extern int iswalnum_l (wint_t __wc, __locale_t __locale) throw ();





extern int iswalpha_l (wint_t __wc, __locale_t __locale) throw ();


extern int iswcntrl_l (wint_t __wc, __locale_t __locale) throw ();



extern int iswdigit_l (wint_t __wc, __locale_t __locale) throw ();



extern int iswgraph_l (wint_t __wc, __locale_t __locale) throw ();




extern int iswlower_l (wint_t __wc, __locale_t __locale) throw ();


extern int iswprint_l (wint_t __wc, __locale_t __locale) throw ();




extern int iswpunct_l (wint_t __wc, __locale_t __locale) throw ();




extern int iswspace_l (wint_t __wc, __locale_t __locale) throw ();




extern int iswupper_l (wint_t __wc, __locale_t __locale) throw ();




extern int iswxdigit_l (wint_t __wc, __locale_t __locale) throw ();




extern int iswblank_l (wint_t __wc, __locale_t __locale) throw ();



extern wctype_t wctype_l (const char *__property, __locale_t __locale)
     throw ();



extern int iswctype_l (wint_t __wc, wctype_t __desc, __locale_t __locale)
     throw ();







extern wint_t towlower_l (wint_t __wc, __locale_t __locale) throw ();


extern wint_t towupper_l (wint_t __wc, __locale_t __locale) throw ();



extern wctrans_t wctrans_l (const char *__property, __locale_t __locale)
     throw ();


extern wint_t towctrans_l (wint_t __wc, wctrans_t __desc,
      __locale_t __locale) throw ();



}
# 47 "/usr/include/c++/4.4/cwctype" 2 3
# 76 "/usr/include/c++/4.4/cwctype" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::wctrans_t;
  using ::wctype_t;
  using ::wint_t;

  using ::iswalnum;
  using ::iswalpha;

  using ::iswblank;

  using ::iswcntrl;
  using ::iswctype;
  using ::iswdigit;
  using ::iswgraph;
  using ::iswlower;
  using ::iswprint;
  using ::iswpunct;
  using ::iswspace;
  using ::iswupper;
  using ::iswxdigit;
  using ::towctrans;
  using ::towlower;
  using ::towupper;
  using ::wctrans;
  using ::wctype;

}
# 42 "/usr/include/c++/4.4/bits/locale_facets.h" 2 3
# 1 "/usr/include/c++/4.4/cctype" 1 3
# 41 "/usr/include/c++/4.4/cctype" 3
# 41 "/usr/include/c++/4.4/cctype" 3
# 43 "/usr/include/c++/4.4/bits/locale_facets.h" 2 3
# 1 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/ctype_base.h" 1 3
# 37 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/ctype_base.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {


  struct ctype_base
  {

    typedef const int* __to_type;



    typedef unsigned short mask;
    static const mask upper = _ISupper;
    static const mask lower = _ISlower;
    static const mask alpha = _ISalpha;
    static const mask digit = _ISdigit;
    static const mask xdigit = _ISxdigit;
    static const mask space = _ISspace;
    static const mask print = _ISprint;
    static const mask graph = _ISalpha | _ISdigit | _ISpunct;
    static const mask cntrl = _IScntrl;
    static const mask punct = _ISpunct;
    static const mask alnum = _ISalpha | _ISdigit;
  };

}
# 44 "/usr/include/c++/4.4/bits/locale_facets.h" 2 3






# 1 "/usr/include/c++/4.4/bits/streambuf_iterator.h" 1 3
# 35 "/usr/include/c++/4.4/bits/streambuf_iterator.h" 3
# 35 "/usr/include/c++/4.4/bits/streambuf_iterator.h" 3





namespace std __attribute__ ((__visibility__ ("default"))) {



  template<typename _CharT, typename _Traits>
    class istreambuf_iterator
    : public iterator<input_iterator_tag, _CharT, typename _Traits::off_type,
        _CharT*, _CharT&>
    {
    public:



      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename _Traits::int_type int_type;
      typedef basic_streambuf<_CharT, _Traits> streambuf_type;
      typedef basic_istream<_CharT, _Traits> istream_type;


      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
                      ostreambuf_iterator<_CharT2> >::__type
 copy(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      ostreambuf_iterator<_CharT2>);

      template<bool _IsMove, typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
            _CharT2*>::__type
 __copy_move_a2(istreambuf_iterator<_CharT2>,
         istreambuf_iterator<_CharT2>, _CharT2*);

      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
               istreambuf_iterator<_CharT2> >::__type
 find(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      const _CharT2&);

    private:







      mutable streambuf_type* _M_sbuf;
      mutable int_type _M_c;

    public:

      istreambuf_iterator() throw()
      : _M_sbuf(0), _M_c(traits_type::eof()) { }


      istreambuf_iterator(istream_type& __s) throw()
      : _M_sbuf(__s.rdbuf()), _M_c(traits_type::eof()) { }


      istreambuf_iterator(streambuf_type* __s) throw()
      : _M_sbuf(__s), _M_c(traits_type::eof()) { }




      char_type
      operator*() const
      {







 return traits_type::to_char_type(_M_get());
      }


      istreambuf_iterator&
      operator++()
      {


                        ;
 if (_M_sbuf)
   {
     _M_sbuf->sbumpc();
     _M_c = traits_type::eof();
   }
 return *this;
      }


      istreambuf_iterator
      operator++(int)
      {


                        ;

 istreambuf_iterator __old = *this;
 if (_M_sbuf)
   {
     __old._M_c = _M_sbuf->sbumpc();
     _M_c = traits_type::eof();
   }
 return __old;
      }





      bool
      equal(const istreambuf_iterator& __b) const
      { return _M_at_eof() == __b._M_at_eof(); }

    private:
      int_type
      _M_get() const
      {
 const int_type __eof = traits_type::eof();
 int_type __ret = __eof;
 if (_M_sbuf)
   {
     if (!traits_type::eq_int_type(_M_c, __eof))
       __ret = _M_c;
     else if (!traits_type::eq_int_type((__ret = _M_sbuf->sgetc()),
            __eof))
       _M_c = __ret;
     else
       _M_sbuf = 0;
   }
 return __ret;
      }

      bool
      _M_at_eof() const
      {
 const int_type __eof = traits_type::eof();
 return traits_type::eq_int_type(_M_get(), __eof);
      }
    };

  template<typename _CharT, typename _Traits>
    inline bool
    operator==(const istreambuf_iterator<_CharT, _Traits>& __a,
        const istreambuf_iterator<_CharT, _Traits>& __b)
    { return __a.equal(__b); }

  template<typename _CharT, typename _Traits>
    inline bool
    operator!=(const istreambuf_iterator<_CharT, _Traits>& __a,
        const istreambuf_iterator<_CharT, _Traits>& __b)
    { return !__a.equal(__b); }


  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    public:



      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef basic_streambuf<_CharT, _Traits> streambuf_type;
      typedef basic_ostream<_CharT, _Traits> ostream_type;


      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
                      ostreambuf_iterator<_CharT2> >::__type
 copy(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      ostreambuf_iterator<_CharT2>);

    private:
      streambuf_type* _M_sbuf;
      bool _M_failed;

    public:

      ostreambuf_iterator(ostream_type& __s) throw ()
      : _M_sbuf(__s.rdbuf()), _M_failed(!_M_sbuf) { }


      ostreambuf_iterator(streambuf_type* __s) throw ()
      : _M_sbuf(__s), _M_failed(!_M_sbuf) { }


      ostreambuf_iterator&
      operator=(_CharT __c)
      {
 if (!_M_failed &&
     _Traits::eq_int_type(_M_sbuf->sputc(__c), _Traits::eof()))
   _M_failed = true;
 return *this;
      }


      ostreambuf_iterator&
      operator*()
      { return *this; }


      ostreambuf_iterator&
      operator++(int)
      { return *this; }


      ostreambuf_iterator&
      operator++()
      { return *this; }


      bool
      failed() const throw()
      { return _M_failed; }

      ostreambuf_iterator&
      _M_put(const _CharT* __ws, streamsize __len)
      {
 if (__builtin_expect(!_M_failed, true)
     && __builtin_expect(this->_M_sbuf->sputn(__ws, __len) != __len,
    false))
   _M_failed = true;
 return *this;
      }
    };


  template<typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
                           ostreambuf_iterator<_CharT> >::__type
    copy(istreambuf_iterator<_CharT> __first,
  istreambuf_iterator<_CharT> __last,
  ostreambuf_iterator<_CharT> __result)
    {
      if (__first._M_sbuf && !__last._M_sbuf && !__result._M_failed)
 {
   bool __ineof;
   __copy_streambufs_eof(__first._M_sbuf, __result._M_sbuf, __ineof);
   if (!__ineof)
     __result._M_failed = true;
 }
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
            ostreambuf_iterator<_CharT> >::__type
    __copy_move_a2(_CharT* __first, _CharT* __last,
     ostreambuf_iterator<_CharT> __result)
    {
      const streamsize __num = __last - __first;
      if (__num > 0)
 __result._M_put(__first, __num);
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        ostreambuf_iterator<_CharT> >::__type
    __copy_move_a2(const _CharT* __first, const _CharT* __last,
     ostreambuf_iterator<_CharT> __result)
    {
      const streamsize __num = __last - __first;
      if (__num > 0)
 __result._M_put(__first, __num);
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
            _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT> __first,
     istreambuf_iterator<_CharT> __last, _CharT* __result)
    {
      typedef istreambuf_iterator<_CharT> __is_iterator_type;
      typedef typename __is_iterator_type::traits_type traits_type;
      typedef typename __is_iterator_type::streambuf_type streambuf_type;
      typedef typename traits_type::int_type int_type;

      if (__first._M_sbuf && !__last._M_sbuf)
 {
   streambuf_type* __sb = __first._M_sbuf;
   int_type __c = __sb->sgetc();
   while (!traits_type::eq_int_type(__c, traits_type::eof()))
     {
       const streamsize __n = __sb->egptr() - __sb->gptr();
       if (__n > 1)
  {
    traits_type::copy(__result, __sb->gptr(), __n);
    __sb->gbump(__n);
    __result += __n;
    __c = __sb->underflow();
  }
       else
  {
    *__result++ = traits_type::to_char_type(__c);
    __c = __sb->snextc();
  }
     }
 }
      return __result;
    }

  template<typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
          istreambuf_iterator<_CharT> >::__type
    find(istreambuf_iterator<_CharT> __first,
  istreambuf_iterator<_CharT> __last, const _CharT& __val)
    {
      typedef istreambuf_iterator<_CharT> __is_iterator_type;
      typedef typename __is_iterator_type::traits_type traits_type;
      typedef typename __is_iterator_type::streambuf_type streambuf_type;
      typedef typename traits_type::int_type int_type;

      if (__first._M_sbuf && !__last._M_sbuf)
 {
   const int_type __ival = traits_type::to_int_type(__val);
   streambuf_type* __sb = __first._M_sbuf;
   int_type __c = __sb->sgetc();
   while (!traits_type::eq_int_type(__c, traits_type::eof())
   && !traits_type::eq_int_type(__c, __ival))
     {
       streamsize __n = __sb->egptr() - __sb->gptr();
       if (__n > 1)
  {
    const _CharT* __p = traits_type::find(__sb->gptr(),
       __n, __val);
    if (__p)
      __n = __p - __sb->gptr();
    __sb->gbump(__n);
    __c = __sb->sgetc();
  }
       else
  __c = __sb->snextc();
     }

   if (!traits_type::eq_int_type(__c, traits_type::eof()))
     __first._M_c = __c;
   else
     __first._M_sbuf = 0;
 }
      return __first;
    }

}
# 51 "/usr/include/c++/4.4/bits/locale_facets.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {
# 64 "/usr/include/c++/4.4/bits/locale_facets.h" 3
  template<typename _Tv>
    void
    __convert_to_v(const char* __in, _Tv& __out, ios_base::iostate& __err,
     const __c_locale& __cloc);


  template<>
    void
    __convert_to_v(const char*, float&, ios_base::iostate&,
     const __c_locale&);

  template<>
    void
    __convert_to_v(const char*, double&, ios_base::iostate&,
     const __c_locale&);

  template<>
    void
    __convert_to_v(const char*, long double&, ios_base::iostate&,
     const __c_locale&);



  template<typename _CharT, typename _Traits>
    struct __pad
    {
      static void
      _S_pad(ios_base& __io, _CharT __fill, _CharT* __news,
      const _CharT* __olds, streamsize __newlen, streamsize __oldlen);
    };






  template<typename _CharT>
    _CharT*
    __add_grouping(_CharT* __s, _CharT __sep,
     const char* __gbeg, size_t __gsize,
     const _CharT* __first, const _CharT* __last);




  template<typename _CharT>
    inline
    ostreambuf_iterator<_CharT>
    __write(ostreambuf_iterator<_CharT> __s, const _CharT* __ws, int __len)
    {
      __s._M_put(__ws, __len);
      return __s;
    }


  template<typename _CharT, typename _OutIter>
    inline
    _OutIter
    __write(_OutIter __s, const _CharT* __ws, int __len)
    {
      for (int __j = 0; __j < __len; __j++, ++__s)
 *__s = __ws[__j];
      return __s;
    }
# 143 "/usr/include/c++/4.4/bits/locale_facets.h" 3
  template<typename _CharT>
    class __ctype_abstract_base : public locale::facet, public ctype_base
    {
    public:


      typedef _CharT char_type;
# 161 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      bool
      is(mask __m, char_type __c) const
      { return this->do_is(__m, __c); }
# 178 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      const char_type*
      is(const char_type *__lo, const char_type *__hi, mask *__vec) const
      { return this->do_is(__lo, __hi, __vec); }
# 194 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      const char_type*
      scan_is(mask __m, const char_type* __lo, const char_type* __hi) const
      { return this->do_scan_is(__m, __lo, __hi); }
# 210 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      const char_type*
      scan_not(mask __m, const char_type* __lo, const char_type* __hi) const
      { return this->do_scan_not(__m, __lo, __hi); }
# 224 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      char_type
      toupper(char_type __c) const
      { return this->do_toupper(__c); }
# 239 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      const char_type*
      toupper(char_type *__lo, const char_type* __hi) const
      { return this->do_toupper(__lo, __hi); }
# 253 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      char_type
      tolower(char_type __c) const
      { return this->do_tolower(__c); }
# 268 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      const char_type*
      tolower(char_type* __lo, const char_type* __hi) const
      { return this->do_tolower(__lo, __hi); }
# 285 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      char_type
      widen(char __c) const
      { return this->do_widen(__c); }
# 304 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      const char*
      widen(const char* __lo, const char* __hi, char_type* __to) const
      { return this->do_widen(__lo, __hi, __to); }
# 323 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      char
      narrow(char_type __c, char __dfault) const
      { return this->do_narrow(__c, __dfault); }
# 345 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      const char_type*
      narrow(const char_type* __lo, const char_type* __hi,
       char __dfault, char *__to) const
      { return this->do_narrow(__lo, __hi, __dfault, __to); }

    protected:
      explicit
      __ctype_abstract_base(size_t __refs = 0): facet(__refs) { }

      virtual
      ~__ctype_abstract_base() { }
# 370 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual bool
      do_is(mask __m, char_type __c) const = 0;
# 389 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi,
     mask* __vec) const = 0;
# 408 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo,
   const char_type* __hi) const = 0;
# 427 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const = 0;
# 445 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type) const = 0;
# 462 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const = 0;
# 478 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type) const = 0;
# 495 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const = 0;
# 514 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char_type
      do_widen(char) const = 0;
# 535 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi,
        char_type* __dest) const = 0;
# 557 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type, char __dfault) const = 0;
# 581 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const = 0;
    };
# 604 "/usr/include/c++/4.4/bits/locale_facets.h" 3
  template<typename _CharT>
    class ctype : public __ctype_abstract_base<_CharT>
    {
    public:

      typedef _CharT char_type;
      typedef typename __ctype_abstract_base<_CharT>::mask mask;


      static locale::id id;

      explicit
      ctype(size_t __refs = 0) : __ctype_abstract_base<_CharT>(__refs) { }

   protected:
      virtual
      ~ctype();

      virtual bool
      do_is(mask __m, char_type __c) const;

      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi, mask* __vec) const;

      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo, const char_type* __hi) const;

      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const;

      virtual char_type
      do_toupper(char_type __c) const;

      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;

      virtual char_type
      do_tolower(char_type __c) const;

      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;

      virtual char_type
      do_widen(char __c) const;

      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const;

      virtual char
      do_narrow(char_type, char __dfault) const;

      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const;
    };

  template<typename _CharT>
    locale::id ctype<_CharT>::id;
# 673 "/usr/include/c++/4.4/bits/locale_facets.h" 3
  template<>
    class ctype<char> : public locale::facet, public ctype_base
    {
    public:


      typedef char char_type;

    protected:

      __c_locale _M_c_locale_ctype;
      bool _M_del;
      __to_type _M_toupper;
      __to_type _M_tolower;
      const mask* _M_table;
      mutable char _M_widen_ok;
      mutable char _M_widen[1 + static_cast<unsigned char>(-1)];
      mutable char _M_narrow[1 + static_cast<unsigned char>(-1)];
      mutable char _M_narrow_ok;


    public:

      static locale::id id;

      static const size_t table_size = 1 + static_cast<unsigned char>(-1);
# 710 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      explicit
      ctype(const mask* __table = 0, bool __del = false, size_t __refs = 0);
# 723 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      explicit
      ctype(__c_locale __cloc, const mask* __table = 0, bool __del = false,
     size_t __refs = 0);
# 736 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      inline bool
      is(mask __m, char __c) const;
# 751 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      inline const char*
      is(const char* __lo, const char* __hi, mask* __vec) const;
# 765 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      inline const char*
      scan_is(mask __m, const char* __lo, const char* __hi) const;
# 779 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      inline const char*
      scan_not(mask __m, const char* __lo, const char* __hi) const;
# 794 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      char_type
      toupper(char_type __c) const
      { return this->do_toupper(__c); }
# 811 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      const char_type*
      toupper(char_type *__lo, const char_type* __hi) const
      { return this->do_toupper(__lo, __hi); }
# 827 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      char_type
      tolower(char_type __c) const
      { return this->do_tolower(__c); }
# 844 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      const char_type*
      tolower(char_type* __lo, const char_type* __hi) const
      { return this->do_tolower(__lo, __hi); }
# 864 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      char_type
      widen(char __c) const
      {
 if (_M_widen_ok)
   return _M_widen[static_cast<unsigned char>(__c)];
 this->_M_widen_init();
 return this->do_widen(__c);
      }
# 891 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      const char*
      widen(const char* __lo, const char* __hi, char_type* __to) const
      {
 if (_M_widen_ok == 1)
   {
     __builtin_memcpy(__to, __lo, __hi - __lo);
     return __hi;
   }
 if (!_M_widen_ok)
   _M_widen_init();
 return this->do_widen(__lo, __hi, __to);
      }
# 922 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      char
      narrow(char_type __c, char __dfault) const
      {
 if (_M_narrow[static_cast<unsigned char>(__c)])
   return _M_narrow[static_cast<unsigned char>(__c)];
 const char __t = do_narrow(__c, __dfault);
 if (__t != __dfault)
   _M_narrow[static_cast<unsigned char>(__c)] = __t;
 return __t;
      }
# 955 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      const char_type*
      narrow(const char_type* __lo, const char_type* __hi,
      char __dfault, char *__to) const
      {
 if (__builtin_expect(_M_narrow_ok == 1, true))
   {
     __builtin_memcpy(__to, __lo, __hi - __lo);
     return __hi;
   }
 if (!_M_narrow_ok)
   _M_narrow_init();
 return this->do_narrow(__lo, __hi, __dfault, __to);
      }





      const mask*
      table() const throw()
      { return _M_table; }


      static const mask*
      classic_table() throw();
    protected:







      virtual
      ~ctype();
# 1004 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type) const;
# 1021 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;
# 1037 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type) const;
# 1054 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;
# 1074 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char_type
      do_widen(char __c) const
      { return __c; }
# 1097 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const
      {
 __builtin_memcpy(__dest, __lo, __hi - __lo);
 return __hi;
      }
# 1123 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type __c, char) const
      { return __c; }
# 1149 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char, char* __dest) const
      {
 __builtin_memcpy(__dest, __lo, __hi - __lo);
 return __hi;
      }

    private:
      void _M_narrow_init() const;
      void _M_widen_init() const;
    };
# 1174 "/usr/include/c++/4.4/bits/locale_facets.h" 3
  template<>
    class ctype<wchar_t> : public __ctype_abstract_base<wchar_t>
    {
    public:


      typedef wchar_t char_type;
      typedef wctype_t __wmask_type;

    protected:
      __c_locale _M_c_locale_ctype;


      bool _M_narrow_ok;
      char _M_narrow[128];
      wint_t _M_widen[1 + static_cast<unsigned char>(-1)];


      mask _M_bit[16];
      __wmask_type _M_wmask[16];

    public:


      static locale::id id;
# 1207 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      explicit
      ctype(size_t __refs = 0);
# 1218 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      explicit
      ctype(__c_locale __cloc, size_t __refs = 0);

    protected:
      __wmask_type
      _M_convert_to_wmask(const mask __m) const;


      virtual
      ~ctype();
# 1242 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual bool
      do_is(mask __m, char_type __c) const;
# 1261 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi, mask* __vec) const;
# 1279 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo, const char_type* __hi) const;
# 1297 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const;
# 1314 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type) const;
# 1331 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;
# 1347 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type) const;
# 1364 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;
# 1384 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char_type
      do_widen(char) const;
# 1406 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const;
# 1429 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type, char __dfault) const;
# 1455 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const;


      void
      _M_initialize_ctype();
    };



  template<typename _CharT>
    class ctype_byname : public ctype<_CharT>
    {
    public:
      typedef typename ctype<_CharT>::mask mask;

      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname() { };
    };


  template<>
    class ctype_byname<char> : public ctype<char>
    {
    public:
      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname();
    };


  template<>
    class ctype_byname<wchar_t> : public ctype<wchar_t>
    {
    public:
      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname();
    };


}



# 1 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/ctype_inline.h" 1 3
# 37 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/ctype_inline.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  bool
  ctype<char>::
  is(mask __m, char __c) const
  { return _M_table[static_cast<unsigned char>(__c)] & __m; }

  const char*
  ctype<char>::
  is(const char* __low, const char* __high, mask* __vec) const
  {
    while (__low < __high)
      *__vec++ = _M_table[static_cast<unsigned char>(*__low++)];
    return __high;
  }

  const char*
  ctype<char>::
  scan_is(mask __m, const char* __low, const char* __high) const
  {
    while (__low < __high
    && !(_M_table[static_cast<unsigned char>(*__low)] & __m))
      ++__low;
    return __low;
  }

  const char*
  ctype<char>::
  scan_not(mask __m, const char* __low, const char* __high) const
  {
    while (__low < __high
    && (_M_table[static_cast<unsigned char>(*__low)] & __m) != 0)
      ++__low;
    return __low;
  }

}
# 1511 "/usr/include/c++/4.4/bits/locale_facets.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {


  class __num_base
  {
  public:


    enum
      {
        _S_ominus,
        _S_oplus,
        _S_ox,
        _S_oX,
        _S_odigits,
        _S_odigits_end = _S_odigits + 16,
        _S_oudigits = _S_odigits_end,
        _S_oudigits_end = _S_oudigits + 16,
        _S_oe = _S_odigits + 14,
        _S_oE = _S_oudigits + 14,
 _S_oend = _S_oudigits_end
      };






    static const char* _S_atoms_out;



    static const char* _S_atoms_in;

    enum
    {
      _S_iminus,
      _S_iplus,
      _S_ix,
      _S_iX,
      _S_izero,
      _S_ie = _S_izero + 14,
      _S_iE = _S_izero + 20,
      _S_iend = 26
    };



    static void
    _S_format_float(const ios_base& __io, char* __fptr, char __mod);
  };

  template<typename _CharT>
    struct __numpunct_cache : public locale::facet
    {
      const char* _M_grouping;
      size_t _M_grouping_size;
      bool _M_use_grouping;
      const _CharT* _M_truename;
      size_t _M_truename_size;
      const _CharT* _M_falsename;
      size_t _M_falsename_size;
      _CharT _M_decimal_point;
      _CharT _M_thousands_sep;





      _CharT _M_atoms_out[__num_base::_S_oend];





      _CharT _M_atoms_in[__num_base::_S_iend];

      bool _M_allocated;

      __numpunct_cache(size_t __refs = 0) : facet(__refs),
      _M_grouping(__null), _M_grouping_size(0), _M_use_grouping(false),
      _M_truename(__null), _M_truename_size(0), _M_falsename(__null),
      _M_falsename_size(0), _M_decimal_point(_CharT()),
      _M_thousands_sep(_CharT()), _M_allocated(false)
      { }

      ~__numpunct_cache();

      void
      _M_cache(const locale& __loc);

    private:
      __numpunct_cache&
      operator=(const __numpunct_cache&);

      explicit
      __numpunct_cache(const __numpunct_cache&);
    };

  template<typename _CharT>
    __numpunct_cache<_CharT>::~__numpunct_cache()
    {
      if (_M_allocated)
 {
   delete [] _M_grouping;
   delete [] _M_truename;
   delete [] _M_falsename;
 }
    }
# 1635 "/usr/include/c++/4.4/bits/locale_facets.h" 3
  template<typename _CharT>
    class numpunct : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;

      typedef __numpunct_cache<_CharT> __cache_type;

    protected:
      __cache_type* _M_data;

    public:

      static locale::id id;






      explicit
      numpunct(size_t __refs = 0) : facet(__refs), _M_data(__null)
      { _M_initialize_numpunct(); }
# 1672 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      explicit
      numpunct(__cache_type* __cache, size_t __refs = 0)
      : facet(__refs), _M_data(__cache)
      { _M_initialize_numpunct(); }
# 1686 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      explicit
      numpunct(__c_locale __cloc, size_t __refs = 0)
      : facet(__refs), _M_data(__null)
      { _M_initialize_numpunct(__cloc); }
# 1700 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      char_type
      decimal_point() const
      { return this->do_decimal_point(); }
# 1713 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      char_type
      thousands_sep() const
      { return this->do_thousands_sep(); }
# 1744 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      string
      grouping() const
      { return this->do_grouping(); }
# 1757 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      string_type
      truename() const
      { return this->do_truename(); }
# 1770 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      string_type
      falsename() const
      { return this->do_falsename(); }

    protected:

      virtual
      ~numpunct();
# 1787 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char_type
      do_decimal_point() const
      { return _M_data->_M_decimal_point; }
# 1799 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual char_type
      do_thousands_sep() const
      { return _M_data->_M_thousands_sep; }
# 1812 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual string
      do_grouping() const
      { return _M_data->_M_grouping; }
# 1825 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual string_type
      do_truename() const
      { return _M_data->_M_truename; }
# 1838 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual string_type
      do_falsename() const
      { return _M_data->_M_falsename; }


      void
      _M_initialize_numpunct(__c_locale __cloc = __null);
    };

  template<typename _CharT>
    locale::id numpunct<_CharT>::id;

  template<>
    numpunct<char>::~numpunct();

  template<>
    void
    numpunct<char>::_M_initialize_numpunct(__c_locale __cloc);


  template<>
    numpunct<wchar_t>::~numpunct();

  template<>
    void
    numpunct<wchar_t>::_M_initialize_numpunct(__c_locale __cloc);



  template<typename _CharT>
    class numpunct_byname : public numpunct<_CharT>
    {
    public:
      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;

      explicit
      numpunct_byname(const char* __s, size_t __refs = 0)
      : numpunct<_CharT>(__refs)
      {
 if (__builtin_strcmp(__s, "C") != 0
     && __builtin_strcmp(__s, "POSIX") != 0)
   {
     __c_locale __tmp;
     this->_S_create_c_locale(__tmp, __s);
     this->_M_initialize_numpunct(__tmp);
     this->_S_destroy_c_locale(__tmp);
   }
      }

    protected:
      virtual
      ~numpunct_byname() { }
    };
# 1907 "/usr/include/c++/4.4/bits/locale_facets.h" 3
  template<typename _CharT, typename _InIter>
    class num_get : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef _InIter iter_type;



      static locale::id id;
# 1928 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      explicit
      num_get(size_t __refs = 0) : facet(__refs) { }
# 1954 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, bool& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 1990 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned short& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned int& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }


      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned long long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 2049 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, float& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, double& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long double& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 2091 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, void*& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

    protected:

      virtual ~num_get() { }

      iter_type
      _M_extract_float(iter_type, iter_type, ios_base&, ios_base::iostate&,
         string&) const;

      template<typename _ValueT>
        iter_type
        _M_extract_int(iter_type, iter_type, ios_base&, ios_base::iostate&,
         _ValueT&) const;

      template<typename _CharT2>
      typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value, int>::__type
        _M_find(const _CharT2*, size_t __len, _CharT2 __c) const
        {
   int __ret = -1;
   if (__len <= 10)
     {
       if (__c >= _CharT2('0') && __c < _CharT2(_CharT2('0') + __len))
  __ret = __c - _CharT2('0');
     }
   else
     {
       if (__c >= _CharT2('0') && __c <= _CharT2('9'))
  __ret = __c - _CharT2('0');
       else if (__c >= _CharT2('a') && __c <= _CharT2('f'))
  __ret = 10 + (__c - _CharT2('a'));
       else if (__c >= _CharT2('A') && __c <= _CharT2('F'))
  __ret = 10 + (__c - _CharT2('A'));
     }
   return __ret;
 }

      template<typename _CharT2>
      typename __gnu_cxx::__enable_if<!__is_char<_CharT2>::__value,
          int>::__type
        _M_find(const _CharT2* __zero, size_t __len, _CharT2 __c) const
        {
   int __ret = -1;
   const char_type* __q = char_traits<_CharT2>::find(__zero, __len, __c);
   if (__q)
     {
       __ret = __q - __zero;
       if (__ret > 15)
  __ret -= 6;
     }
   return __ret;
 }
# 2162 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate&, bool&) const;

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned short& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned int& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }


      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, long long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned long long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }


      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      float&) const;

      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      double&) const;







      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      long double&) const;


      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      void*&) const;
# 2227 "/usr/include/c++/4.4/bits/locale_facets.h" 3
    };

  template<typename _CharT, typename _InIter>
    locale::id num_get<_CharT, _InIter>::id;
# 2244 "/usr/include/c++/4.4/bits/locale_facets.h" 3
  template<typename _CharT, typename _OutIter>
    class num_put : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef _OutIter iter_type;



      static locale::id id;
# 2265 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      explicit
      num_put(size_t __refs = 0) : facet(__refs) { }
# 2283 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, bool __v) const
      { return this->do_put(__s, __f, __fill, __v); }
# 2325 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, long __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   unsigned long __v) const
      { return this->do_put(__s, __f, __fill, __v); }


      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, long long __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   unsigned long long __v) const
      { return this->do_put(__s, __f, __fill, __v); }
# 2388 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, double __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   long double __v) const
      { return this->do_put(__s, __f, __fill, __v); }
# 2413 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   const void* __v) const
      { return this->do_put(__s, __f, __fill, __v); }

    protected:
      template<typename _ValueT>
        iter_type
        _M_insert_float(iter_type, ios_base& __io, char_type __fill,
   char __mod, _ValueT __v) const;

      void
      _M_group_float(const char* __grouping, size_t __grouping_size,
       char_type __sep, const char_type* __p, char_type* __new,
       char_type* __cs, int& __len) const;

      template<typename _ValueT>
        iter_type
        _M_insert_int(iter_type, ios_base& __io, char_type __fill,
        _ValueT __v) const;

      void
      _M_group_int(const char* __grouping, size_t __grouping_size,
     char_type __sep, ios_base& __io, char_type* __new,
     char_type* __cs, int& __len) const;

      void
      _M_pad(char_type __fill, streamsize __w, ios_base& __io,
      char_type* __new, const char_type* __cs, int& __len) const;


      virtual
      ~num_put() { };
# 2461 "/usr/include/c++/4.4/bits/locale_facets.h" 3
      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, bool __v) const;

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill, long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      unsigned long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }


      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      long long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      unsigned long long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }


      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, double __v) const;






      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, long double __v) const;


      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, const void* __v) const;







    };

  template <typename _CharT, typename _OutIter>
    locale::id num_put<_CharT, _OutIter>::id;
# 2519 "/usr/include/c++/4.4/bits/locale_facets.h" 3
  template<typename _CharT>
    inline bool
    isspace(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::space, __c); }


  template<typename _CharT>
    inline bool
    isprint(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::print, __c); }


  template<typename _CharT>
    inline bool
    iscntrl(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::cntrl, __c); }


  template<typename _CharT>
    inline bool
    isupper(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::upper, __c); }


  template<typename _CharT>
    inline bool
    islower(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::lower, __c); }


  template<typename _CharT>
    inline bool
    isalpha(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::alpha, __c); }


  template<typename _CharT>
    inline bool
    isdigit(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::digit, __c); }


  template<typename _CharT>
    inline bool
    ispunct(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::punct, __c); }


  template<typename _CharT>
    inline bool
    isxdigit(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::xdigit, __c); }


  template<typename _CharT>
    inline bool
    isalnum(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::alnum, __c); }


  template<typename _CharT>
    inline bool
    isgraph(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::graph, __c); }


  template<typename _CharT>
    inline _CharT
    toupper(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).toupper(__c); }


  template<typename _CharT>
    inline _CharT
    tolower(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).tolower(__c); }

}



# 1 "/usr/include/c++/4.4/bits/locale_facets.tcc" 1 3
# 35 "/usr/include/c++/4.4/bits/locale_facets.tcc" 3
# 35 "/usr/include/c++/4.4/bits/locale_facets.tcc" 3


namespace std __attribute__ ((__visibility__ ("default"))) {



  template<typename _Facet>
    struct __use_cache
    {
      const _Facet*
      operator() (const locale& __loc) const;
    };


  template<typename _CharT>
    struct __use_cache<__numpunct_cache<_CharT> >
    {
      const __numpunct_cache<_CharT>*
      operator() (const locale& __loc) const
      {
 const size_t __i = numpunct<_CharT>::id._M_id();
 const locale::facet** __caches = __loc._M_impl->_M_caches;
 if (!__caches[__i])
   {
     __numpunct_cache<_CharT>* __tmp = __null;
     try
       {
  __tmp = new __numpunct_cache<_CharT>;
  __tmp->_M_cache(__loc);
       }
     catch(...)
       {
  delete __tmp;
  throw;
       }
     __loc._M_impl->_M_install_cache(__tmp, __i);
   }
 return static_cast<const __numpunct_cache<_CharT>*>(__caches[__i]);
      }
    };

  template<typename _CharT>
    void
    __numpunct_cache<_CharT>::_M_cache(const locale& __loc)
    {
      _M_allocated = true;

      const numpunct<_CharT>& __np = use_facet<numpunct<_CharT> >(__loc);

      _M_grouping_size = __np.grouping().size();
      char* __grouping = new char[_M_grouping_size];
      __np.grouping().copy(__grouping, _M_grouping_size);
      _M_grouping = __grouping;
      _M_use_grouping = (_M_grouping_size
    && static_cast<signed char>(_M_grouping[0]) > 0
    && (_M_grouping[0]
        != __gnu_cxx::__numeric_traits<char>::__max));

      _M_truename_size = __np.truename().size();
      _CharT* __truename = new _CharT[_M_truename_size];
      __np.truename().copy(__truename, _M_truename_size);
      _M_truename = __truename;

      _M_falsename_size = __np.falsename().size();
      _CharT* __falsename = new _CharT[_M_falsename_size];
      __np.falsename().copy(__falsename, _M_falsename_size);
      _M_falsename = __falsename;

      _M_decimal_point = __np.decimal_point();
      _M_thousands_sep = __np.thousands_sep();

      const ctype<_CharT>& __ct = use_facet<ctype<_CharT> >(__loc);
      __ct.widen(__num_base::_S_atoms_out,
   __num_base::_S_atoms_out + __num_base::_S_oend, _M_atoms_out);
      __ct.widen(__num_base::_S_atoms_in,
   __num_base::_S_atoms_in + __num_base::_S_iend, _M_atoms_in);
    }
# 121 "/usr/include/c++/4.4/bits/locale_facets.tcc" 3
  bool
  __verify_grouping(const char* __grouping, size_t __grouping_size,
      const string& __grouping_tmp);



  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    _M_extract_float(_InIter __beg, _InIter __end, ios_base& __io,
       ios_base::iostate& __err, string& __xtrc) const
    {
      typedef char_traits<_CharT> __traits_type;
      typedef __numpunct_cache<_CharT> __cache_type;
      __use_cache<__cache_type> __uc;
      const locale& __loc = __io._M_getloc();
      const __cache_type* __lc = __uc(__loc);
      const _CharT* __lit = __lc->_M_atoms_in;
      char_type __c = char_type();


      bool __testeof = __beg == __end;


      if (!__testeof)
 {
   __c = *__beg;
   const bool __plus = __c == __lit[__num_base::_S_iplus];
   if ((__plus || __c == __lit[__num_base::_S_iminus])
       && !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       && !(__c == __lc->_M_decimal_point))
     {
       __xtrc += __plus ? '+' : '-';
       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
 }


      bool __found_mantissa = false;
      int __sep_pos = 0;
      while (!__testeof)
 {
   if ((__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       || __c == __lc->_M_decimal_point)
     break;
   else if (__c == __lit[__num_base::_S_izero])
     {
       if (!__found_mantissa)
  {
    __xtrc += '0';
    __found_mantissa = true;
  }
       ++__sep_pos;

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
   else
     break;
 }


      bool __found_dec = false;
      bool __found_sci = false;
      string __found_grouping;
      if (__lc->_M_use_grouping)
 __found_grouping.reserve(32);
      const char_type* __lit_zero = __lit + __num_base::_S_izero;

      if (!__lc->_M_allocated)

 while (!__testeof)
   {
     const int __digit = _M_find(__lit_zero, 10, __c);
     if (__digit != -1)
       {
  __xtrc += '0' + __digit;
  __found_mantissa = true;
       }
     else if (__c == __lc->_M_decimal_point
       && !__found_dec && !__found_sci)
       {
  __xtrc += '.';
  __found_dec = true;
       }
     else if ((__c == __lit[__num_base::_S_ie]
        || __c == __lit[__num_base::_S_iE])
       && !__found_sci && __found_mantissa)
       {

  __xtrc += 'e';
  __found_sci = true;


  if (++__beg != __end)
    {
      __c = *__beg;
      const bool __plus = __c == __lit[__num_base::_S_iplus];
      if (__plus || __c == __lit[__num_base::_S_iminus])
        __xtrc += __plus ? '+' : '-';
      else
        continue;
    }
  else
    {
      __testeof = true;
      break;
    }
       }
     else
       break;

     if (++__beg != __end)
       __c = *__beg;
     else
       __testeof = true;
   }
      else
 while (!__testeof)
   {


     if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       {
  if (!__found_dec && !__found_sci)
    {


      if (__sep_pos)
        {
   __found_grouping += static_cast<char>(__sep_pos);
   __sep_pos = 0;
        }
      else
        {


   __xtrc.clear();
   break;
        }
    }
  else
    break;
       }
     else if (__c == __lc->_M_decimal_point)
       {
  if (!__found_dec && !__found_sci)
    {



      if (__found_grouping.size())
        __found_grouping += static_cast<char>(__sep_pos);
      __xtrc += '.';
      __found_dec = true;
    }
  else
    break;
       }
     else
       {
  const char_type* __q =
    __traits_type::find(__lit_zero, 10, __c);
  if (__q)
    {
      __xtrc += '0' + (__q - __lit_zero);
      __found_mantissa = true;
      ++__sep_pos;
    }
  else if ((__c == __lit[__num_base::_S_ie]
     || __c == __lit[__num_base::_S_iE])
    && !__found_sci && __found_mantissa)
    {

      if (__found_grouping.size() && !__found_dec)
        __found_grouping += static_cast<char>(__sep_pos);
      __xtrc += 'e';
      __found_sci = true;


      if (++__beg != __end)
        {
   __c = *__beg;
   const bool __plus = __c == __lit[__num_base::_S_iplus];
   if ((__plus || __c == __lit[__num_base::_S_iminus])
       && !(__lc->_M_use_grouping
     && __c == __lc->_M_thousands_sep)
       && !(__c == __lc->_M_decimal_point))
        __xtrc += __plus ? '+' : '-';
   else
     continue;
        }
      else
        {
   __testeof = true;
   break;
        }
    }
  else
    break;
       }

     if (++__beg != __end)
       __c = *__beg;
     else
       __testeof = true;
   }



      if (__found_grouping.size())
        {

   if (!__found_dec && !__found_sci)
     __found_grouping += static_cast<char>(__sep_pos);

          if (!std::__verify_grouping(__lc->_M_grouping,
          __lc->_M_grouping_size,
          __found_grouping))
     __err = ios_base::failbit;
        }

      return __beg;
    }

  template<typename _CharT, typename _InIter>
    template<typename _ValueT>
      _InIter
      num_get<_CharT, _InIter>::
      _M_extract_int(_InIter __beg, _InIter __end, ios_base& __io,
       ios_base::iostate& __err, _ValueT& __v) const
      {
        typedef char_traits<_CharT> __traits_type;
 using __gnu_cxx::__add_unsigned;
 typedef typename __add_unsigned<_ValueT>::__type __unsigned_type;
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);
 const _CharT* __lit = __lc->_M_atoms_in;
 char_type __c = char_type();


 const ios_base::fmtflags __basefield = __io.flags()
                                        & ios_base::basefield;
 const bool __oct = __basefield == ios_base::oct;
 int __base = __oct ? 8 : (__basefield == ios_base::hex ? 16 : 10);


 bool __testeof = __beg == __end;


 bool __negative = false;
 if (!__testeof)
   {
     __c = *__beg;
     __negative = __c == __lit[__num_base::_S_iminus];
     if ((__negative || __c == __lit[__num_base::_S_iplus])
  && !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  && !(__c == __lc->_M_decimal_point))
       {
  if (++__beg != __end)
    __c = *__beg;
  else
    __testeof = true;
       }
   }



 bool __found_zero = false;
 int __sep_pos = 0;
 while (!__testeof)
   {
     if ((__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  || __c == __lc->_M_decimal_point)
       break;
     else if (__c == __lit[__num_base::_S_izero]
       && (!__found_zero || __base == 10))
       {
  __found_zero = true;
  ++__sep_pos;
  if (__basefield == 0)
    __base = 8;
  if (__base == 8)
    __sep_pos = 0;
       }
     else if (__found_zero
       && (__c == __lit[__num_base::_S_ix]
    || __c == __lit[__num_base::_S_iX]))
       {
  if (__basefield == 0)
    __base = 16;
  if (__base == 16)
    {
      __found_zero = false;
      __sep_pos = 0;
    }
  else
    break;
       }
     else
       break;

     if (++__beg != __end)
       {
  __c = *__beg;
  if (!__found_zero)
    break;
       }
     else
       __testeof = true;
   }



 const size_t __len = (__base == 16 ? __num_base::_S_iend
         - __num_base::_S_izero : __base);


 string __found_grouping;
 if (__lc->_M_use_grouping)
   __found_grouping.reserve(32);
 bool __testfail = false;
 bool __testoverflow = false;
 const __unsigned_type __max =
   (__negative && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
   ? -__gnu_cxx::__numeric_traits<_ValueT>::__min
   : __gnu_cxx::__numeric_traits<_ValueT>::__max;
 const __unsigned_type __smax = __max / __base;
 __unsigned_type __result = 0;
 int __digit = 0;
 const char_type* __lit_zero = __lit + __num_base::_S_izero;

 if (!__lc->_M_allocated)

   while (!__testeof)
     {
       __digit = _M_find(__lit_zero, __len, __c);
       if (__digit == -1)
  break;

       if (__result > __smax)
  __testoverflow = true;
       else
  {
    __result *= __base;
    __testoverflow |= __result > __max - __digit;
    __result += __digit;
    ++__sep_pos;
  }

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
 else
   while (!__testeof)
     {


       if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  {


    if (__sep_pos)
      {
        __found_grouping += static_cast<char>(__sep_pos);
        __sep_pos = 0;
      }
    else
      {
        __testfail = true;
        break;
      }
  }
       else if (__c == __lc->_M_decimal_point)
  break;
       else
  {
    const char_type* __q =
      __traits_type::find(__lit_zero, __len, __c);
    if (!__q)
      break;

    __digit = __q - __lit_zero;
    if (__digit > 15)
      __digit -= 6;
    if (__result > __smax)
      __testoverflow = true;
    else
      {
        __result *= __base;
        __testoverflow |= __result > __max - __digit;
        __result += __digit;
        ++__sep_pos;
      }
  }

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }



 if (__found_grouping.size())
   {

     __found_grouping += static_cast<char>(__sep_pos);

     if (!std::__verify_grouping(__lc->_M_grouping,
     __lc->_M_grouping_size,
     __found_grouping))
       __err = ios_base::failbit;
   }



 if ((!__sep_pos && !__found_zero && !__found_grouping.size())
     || __testfail)
   {
     __v = 0;
     __err = ios_base::failbit;
   }
 else if (__testoverflow)
   {
     if (__negative
  && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
       __v = __gnu_cxx::__numeric_traits<_ValueT>::__min;
     else
       __v = __gnu_cxx::__numeric_traits<_ValueT>::__max;
     __err = ios_base::failbit;
   }
 else
   __v = __negative ? -__result : __result;

 if (__testeof)
   __err |= ios_base::eofbit;
 return __beg;
      }



  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, bool& __v) const
    {
      if (!(__io.flags() & ios_base::boolalpha))
        {



   long __l = -1;
          __beg = _M_extract_int(__beg, __end, __io, __err, __l);
   if (__l == 0 || __l == 1)
     __v = bool(__l);
   else
     {


       __v = true;
       __err = ios_base::failbit;
       if (__beg == __end)
  __err |= ios_base::eofbit;
     }
        }
      else
        {

   typedef __numpunct_cache<_CharT> __cache_type;
   __use_cache<__cache_type> __uc;
   const locale& __loc = __io._M_getloc();
   const __cache_type* __lc = __uc(__loc);

   bool __testf = true;
   bool __testt = true;
   bool __donef = __lc->_M_falsename_size == 0;
   bool __donet = __lc->_M_truename_size == 0;
   bool __testeof = false;
   size_t __n = 0;
   while (!__donef || !__donet)
     {
       if (__beg == __end)
  {
    __testeof = true;
    break;
  }

       const char_type __c = *__beg;

       if (!__donef)
  __testf = __c == __lc->_M_falsename[__n];

       if (!__testf && __donet)
  break;

       if (!__donet)
  __testt = __c == __lc->_M_truename[__n];

       if (!__testt && __donef)
  break;

       if (!__testt && !__testf)
  break;

       ++__n;
       ++__beg;

       __donef = !__testf || __n >= __lc->_M_falsename_size;
       __donet = !__testt || __n >= __lc->_M_truename_size;
     }
   if (__testf && __n == __lc->_M_falsename_size && __n)
     {
       __v = false;
       if (__testt && __n == __lc->_M_truename_size)
  __err = ios_base::failbit;
       else
  __err = __testeof ? ios_base::eofbit : ios_base::goodbit;
     }
   else if (__testt && __n == __lc->_M_truename_size && __n)
     {
       __v = true;
       __err = __testeof ? ios_base::eofbit : ios_base::goodbit;
     }
   else
     {


       __v = false;
       __err = ios_base::failbit;
       if (__testeof)
  __err |= ios_base::eofbit;
     }
 }
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
    ios_base::iostate& __err, float& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, double& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }
# 715 "/usr/include/c++/4.4/bits/locale_facets.tcc" 3
  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, long double& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, void*& __v) const
    {

      typedef ios_base::fmtflags fmtflags;
      const fmtflags __fmt = __io.flags();
      __io.flags((__fmt & ~ios_base::basefield) | ios_base::hex);

      typedef __gnu_cxx::__conditional_type<(sizeof(void*)
          <= sizeof(unsigned long)),
 unsigned long, unsigned long long>::__type _UIntPtrType;

      _UIntPtrType __ul;
      __beg = _M_extract_int(__beg, __end, __io, __err, __ul);


      __io.flags(__fmt);

      __v = reinterpret_cast<void*>(__ul);
      return __beg;
    }



  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_pad(_CharT __fill, streamsize __w, ios_base& __io,
    _CharT* __new, const _CharT* __cs, int& __len) const
    {


      __pad<_CharT, char_traits<_CharT> >::_S_pad(__io, __fill, __new,
        __cs, __w, __len);
      __len = static_cast<int>(__w);
    }



  template<typename _CharT, typename _ValueT>
    int
    __int_to_char(_CharT* __bufend, _ValueT __v, const _CharT* __lit,
    ios_base::fmtflags __flags, bool __dec)
    {
      _CharT* __buf = __bufend;
      if (__builtin_expect(__dec, true))
 {

   do
     {
       *--__buf = __lit[(__v % 10) + __num_base::_S_odigits];
       __v /= 10;
     }
   while (__v != 0);
 }
      else if ((__flags & ios_base::basefield) == ios_base::oct)
 {

   do
     {
       *--__buf = __lit[(__v & 0x7) + __num_base::_S_odigits];
       __v >>= 3;
     }
   while (__v != 0);
 }
      else
 {

   const bool __uppercase = __flags & ios_base::uppercase;
   const int __case_offset = __uppercase ? __num_base::_S_oudigits
                                         : __num_base::_S_odigits;
   do
     {
       *--__buf = __lit[(__v & 0xf) + __case_offset];
       __v >>= 4;
     }
   while (__v != 0);
 }
      return __bufend - __buf;
    }



  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_group_int(const char* __grouping, size_t __grouping_size, _CharT __sep,
   ios_base&, _CharT* __new, _CharT* __cs, int& __len) const
    {
      _CharT* __p = std::__add_grouping(__new, __sep, __grouping,
     __grouping_size, __cs, __cs + __len);
      __len = __p - __new;
    }

  template<typename _CharT, typename _OutIter>
    template<typename _ValueT>
      _OutIter
      num_put<_CharT, _OutIter>::
      _M_insert_int(_OutIter __s, ios_base& __io, _CharT __fill,
      _ValueT __v) const
      {
 using __gnu_cxx::__add_unsigned;
 typedef typename __add_unsigned<_ValueT>::__type __unsigned_type;
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);
 const _CharT* __lit = __lc->_M_atoms_out;
 const ios_base::fmtflags __flags = __io.flags();


 const int __ilen = 5 * sizeof(_ValueT);
 _CharT* __cs = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
            * __ilen));



 const ios_base::fmtflags __basefield = __flags & ios_base::basefield;
 const bool __dec = (__basefield != ios_base::oct
       && __basefield != ios_base::hex);
 const __unsigned_type __u = ((__v > 0 || !__dec)
         ? __unsigned_type(__v)
         : -__unsigned_type(__v));
  int __len = __int_to_char(__cs + __ilen, __u, __lit, __flags, __dec);
 __cs += __ilen - __len;


 if (__lc->_M_use_grouping)
   {


     _CharT* __cs2 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * (__len + 1)
          * 2));
     _M_group_int(__lc->_M_grouping, __lc->_M_grouping_size,
    __lc->_M_thousands_sep, __io, __cs2 + 2, __cs, __len);
     __cs = __cs2 + 2;
   }


 if (__builtin_expect(__dec, true))
   {

     if (__v >= 0)
       {
  if (bool(__flags & ios_base::showpos)
      && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
    *--__cs = __lit[__num_base::_S_oplus], ++__len;
       }
     else
       *--__cs = __lit[__num_base::_S_ominus], ++__len;
   }
 else if (bool(__flags & ios_base::showbase) && __v)
   {
     if (__basefield == ios_base::oct)
       *--__cs = __lit[__num_base::_S_odigits], ++__len;
     else
       {

  const bool __uppercase = __flags & ios_base::uppercase;
  *--__cs = __lit[__num_base::_S_ox + __uppercase];

  *--__cs = __lit[__num_base::_S_odigits];
  __len += 2;
       }
   }


 const streamsize __w = __io.width();
 if (__w > static_cast<streamsize>(__len))
   {
     _CharT* __cs3 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __w));
     _M_pad(__fill, __w, __io, __cs3, __cs, __len);
     __cs = __cs3;
   }
 __io.width(0);



 return std::__write(__s, __cs, __len);
      }

  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_group_float(const char* __grouping, size_t __grouping_size,
     _CharT __sep, const _CharT* __p, _CharT* __new,
     _CharT* __cs, int& __len) const
    {



      const int __declen = __p ? __p - __cs : __len;
      _CharT* __p2 = std::__add_grouping(__new, __sep, __grouping,
      __grouping_size,
      __cs, __cs + __declen);


      int __newlen = __p2 - __new;
      if (__p)
 {
   char_traits<_CharT>::copy(__p2, __p, __len - __declen);
   __newlen += __len - __declen;
 }
      __len = __newlen;
    }
# 951 "/usr/include/c++/4.4/bits/locale_facets.tcc" 3
  template<typename _CharT, typename _OutIter>
    template<typename _ValueT>
      _OutIter
      num_put<_CharT, _OutIter>::
      _M_insert_float(_OutIter __s, ios_base& __io, _CharT __fill, char __mod,
         _ValueT __v) const
      {
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);


 const streamsize __prec = __io.precision() < 0 ? 6 : __io.precision();

 const int __max_digits =
   __gnu_cxx::__numeric_traits<_ValueT>::__digits10;


 int __len;

 char __fbuf[16];
 __num_base::_S_format_float(__io, __fbuf, __mod);




 int __cs_size = __max_digits * 3;
 char* __cs = static_cast<char*>(__builtin_alloca(__cs_size));
 __len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size,
          __fbuf, __prec, __v);


 if (__len >= __cs_size)
   {
     __cs_size = __len + 1;
     __cs = static_cast<char*>(__builtin_alloca(__cs_size));
     __len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size,
       __fbuf, __prec, __v);
   }
# 1012 "/usr/include/c++/4.4/bits/locale_facets.tcc" 3
 const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);

 _CharT* __ws = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
            * __len));
 __ctype.widen(__cs, __cs + __len, __ws);


 _CharT* __wp = 0;
 const char* __p = char_traits<char>::find(__cs, __len, '.');
 if (__p)
   {
     __wp = __ws + (__p - __cs);
     *__wp = __lc->_M_decimal_point;
   }




 if (__lc->_M_use_grouping
     && (__wp || __len < 3 || (__cs[1] <= '9' && __cs[2] <= '9'
          && __cs[1] >= '0' && __cs[2] >= '0')))
   {


     _CharT* __ws2 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __len * 2));

     streamsize __off = 0;
     if (__cs[0] == '-' || __cs[0] == '+')
       {
  __off = 1;
  __ws2[0] = __ws[0];
  __len -= 1;
       }

     _M_group_float(__lc->_M_grouping, __lc->_M_grouping_size,
      __lc->_M_thousands_sep, __wp, __ws2 + __off,
      __ws + __off, __len);
     __len += __off;

     __ws = __ws2;
   }


 const streamsize __w = __io.width();
 if (__w > static_cast<streamsize>(__len))
   {
     _CharT* __ws3 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __w));
     _M_pad(__fill, __w, __io, __ws3, __ws, __len);
     __ws = __ws3;
   }
 __io.width(0);



 return std::__write(__s, __ws, __len);
      }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, bool __v) const
    {
      const ios_base::fmtflags __flags = __io.flags();
      if ((__flags & ios_base::boolalpha) == 0)
        {
          const long __l = __v;
          __s = _M_insert_int(__s, __io, __fill, __l);
        }
      else
        {
   typedef __numpunct_cache<_CharT> __cache_type;
   __use_cache<__cache_type> __uc;
   const locale& __loc = __io._M_getloc();
   const __cache_type* __lc = __uc(__loc);

   const _CharT* __name = __v ? __lc->_M_truename
                              : __lc->_M_falsename;
   int __len = __v ? __lc->_M_truename_size
                   : __lc->_M_falsename_size;

   const streamsize __w = __io.width();
   if (__w > static_cast<streamsize>(__len))
     {
       const streamsize __plen = __w - __len;
       _CharT* __ps
  = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
       * __plen));

       char_traits<_CharT>::assign(__ps, __plen, __fill);
       __io.width(0);

       if ((__flags & ios_base::adjustfield) == ios_base::left)
  {
    __s = std::__write(__s, __name, __len);
    __s = std::__write(__s, __ps, __plen);
  }
       else
  {
    __s = std::__write(__s, __ps, __plen);
    __s = std::__write(__s, __name, __len);
  }
       return __s;
     }
   __io.width(0);
   __s = std::__write(__s, __name, __len);
 }
      return __s;
    }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, double __v) const
    { return _M_insert_float(__s, __io, __fill, char(), __v); }
# 1137 "/usr/include/c++/4.4/bits/locale_facets.tcc" 3
  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
    long double __v) const
    { return _M_insert_float(__s, __io, __fill, 'L', __v); }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
           const void* __v) const
    {
      const ios_base::fmtflags __flags = __io.flags();
      const ios_base::fmtflags __fmt = ~(ios_base::basefield
      | ios_base::uppercase);
      __io.flags((__flags & __fmt) | (ios_base::hex | ios_base::showbase));

      typedef __gnu_cxx::__conditional_type<(sizeof(const void*)
          <= sizeof(unsigned long)),
 unsigned long, unsigned long long>::__type _UIntPtrType;

      __s = _M_insert_int(__s, __io, __fill,
     reinterpret_cast<_UIntPtrType>(__v));
      __io.flags(__flags);
      return __s;
    }
# 1174 "/usr/include/c++/4.4/bits/locale_facets.tcc" 3
  template<typename _CharT, typename _Traits>
    void
    __pad<_CharT, _Traits>::_S_pad(ios_base& __io, _CharT __fill,
       _CharT* __news, const _CharT* __olds,
       streamsize __newlen, streamsize __oldlen)
    {
      const size_t __plen = static_cast<size_t>(__newlen - __oldlen);
      const ios_base::fmtflags __adjust = __io.flags() & ios_base::adjustfield;


      if (__adjust == ios_base::left)
 {
   _Traits::copy(__news, __olds, __oldlen);
   _Traits::assign(__news + __oldlen, __plen, __fill);
   return;
 }

      size_t __mod = 0;
      if (__adjust == ios_base::internal)
 {



          const locale& __loc = __io._M_getloc();
   const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);

   if (__ctype.widen('-') == __olds[0]
       || __ctype.widen('+') == __olds[0])
     {
       __news[0] = __olds[0];
       __mod = 1;
       ++__news;
     }
   else if (__ctype.widen('0') == __olds[0]
     && __oldlen > 1
     && (__ctype.widen('x') == __olds[1]
         || __ctype.widen('X') == __olds[1]))
     {
       __news[0] = __olds[0];
       __news[1] = __olds[1];
       __mod = 2;
       __news += 2;
     }

 }
      _Traits::assign(__news, __plen, __fill);
      _Traits::copy(__news + __plen, __olds + __mod, __oldlen - __mod);
    }

  template<typename _CharT>
    _CharT*
    __add_grouping(_CharT* __s, _CharT __sep,
     const char* __gbeg, size_t __gsize,
     const _CharT* __first, const _CharT* __last)
    {
      size_t __idx = 0;
      size_t __ctr = 0;

      while (__last - __first > __gbeg[__idx]
      && static_cast<signed char>(__gbeg[__idx]) > 0
      && __gbeg[__idx] != __gnu_cxx::__numeric_traits<char>::__max)
 {
   __last -= __gbeg[__idx];
   __idx < __gsize - 1 ? ++__idx : ++__ctr;
 }

      while (__first != __last)
 *__s++ = *__first++;

      while (__ctr--)
 {
   *__s++ = __sep;
   for (char __i = __gbeg[__idx]; __i > 0; --__i)
     *__s++ = *__first++;
 }

      while (__idx--)
 {
   *__s++ = __sep;
   for (char __i = __gbeg[__idx]; __i > 0; --__i)
     *__s++ = *__first++;
 }

      return __s;
    }





  extern template class numpunct<char>;
  extern template class numpunct_byname<char>;
  extern template class num_get<char>;
  extern template class num_put<char>;
  extern template class ctype_byname<char>;

  extern template
    const ctype<char>&
    use_facet<ctype<char> >(const locale&);

  extern template
    const numpunct<char>&
    use_facet<numpunct<char> >(const locale&);

  extern template
    const num_put<char>&
    use_facet<num_put<char> >(const locale&);

  extern template
    const num_get<char>&
    use_facet<num_get<char> >(const locale&);

  extern template
    bool
    has_facet<ctype<char> >(const locale&);

  extern template
    bool
    has_facet<numpunct<char> >(const locale&);

  extern template
    bool
    has_facet<num_put<char> >(const locale&);

  extern template
    bool
    has_facet<num_get<char> >(const locale&);


  extern template class numpunct<wchar_t>;
  extern template class numpunct_byname<wchar_t>;
  extern template class num_get<wchar_t>;
  extern template class num_put<wchar_t>;
  extern template class ctype_byname<wchar_t>;

  extern template
    const ctype<wchar_t>&
    use_facet<ctype<wchar_t> >(const locale&);

  extern template
    const numpunct<wchar_t>&
    use_facet<numpunct<wchar_t> >(const locale&);

  extern template
    const num_put<wchar_t>&
    use_facet<num_put<wchar_t> >(const locale&);

  extern template
    const num_get<wchar_t>&
    use_facet<num_get<wchar_t> >(const locale&);

 extern template
    bool
    has_facet<ctype<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<numpunct<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<num_put<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<num_get<wchar_t> >(const locale&);



}
# 2600 "/usr/include/c++/4.4/bits/locale_facets.h" 2 3
# 40 "/usr/include/c++/4.4/bits/basic_ios.h" 2 3


namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _Facet>
    inline const _Facet&
    __check_facet(const _Facet* __f)
    {
      if (!__f)
 __throw_bad_cast();
      return *__f;
    }
# 61 "/usr/include/c++/4.4/bits/basic_ios.h" 3
  template<typename _CharT, typename _Traits>
    class basic_ios : public ios_base
    {
    public:






      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;






      typedef ctype<_CharT> __ctype_type;
      typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> >
           __num_put_type;
      typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> >
           __num_get_type;



    protected:
      basic_ostream<_CharT, _Traits>* _M_tie;
      mutable char_type _M_fill;
      mutable bool _M_fill_init;
      basic_streambuf<_CharT, _Traits>* _M_streambuf;


      const __ctype_type* _M_ctype;

      const __num_put_type* _M_num_put;

      const __num_get_type* _M_num_get;

    public:







      operator void*() const
      { return this->fail() ? 0 : const_cast<basic_ios*>(this); }

      bool
      operator!() const
      { return this->fail(); }
# 126 "/usr/include/c++/4.4/bits/basic_ios.h" 3
      iostate
      rdstate() const
      { return _M_streambuf_state; }
# 137 "/usr/include/c++/4.4/bits/basic_ios.h" 3
      void
      clear(iostate __state = goodbit);







      void
      setstate(iostate __state)
      { this->clear(this->rdstate() | __state); }




      void
      _M_setstate(iostate __state)
      {


 _M_streambuf_state |= __state;
 if (this->exceptions() & __state)
   throw;
      }







      bool
      good() const
      { return this->rdstate() == 0; }







      bool
      eof() const
      { return (this->rdstate() & eofbit) != 0; }
# 190 "/usr/include/c++/4.4/bits/basic_ios.h" 3
      bool
      fail() const
      { return (this->rdstate() & (badbit | failbit)) != 0; }







      bool
      bad() const
      { return (this->rdstate() & badbit) != 0; }
# 211 "/usr/include/c++/4.4/bits/basic_ios.h" 3
      iostate
      exceptions() const
      { return _M_exception; }
# 246 "/usr/include/c++/4.4/bits/basic_ios.h" 3
      void
      exceptions(iostate __except)
      {
        _M_exception = __except;
        this->clear(_M_streambuf_state);
      }







      explicit
      basic_ios(basic_streambuf<_CharT, _Traits>* __sb)
      : ios_base(), _M_tie(0), _M_fill(), _M_fill_init(false), _M_streambuf(0),
 _M_ctype(0), _M_num_put(0), _M_num_get(0)
      { this->init(__sb); }







      virtual
      ~basic_ios() { }
# 284 "/usr/include/c++/4.4/bits/basic_ios.h" 3
      basic_ostream<_CharT, _Traits>*
      tie() const
      { return _M_tie; }
# 296 "/usr/include/c++/4.4/bits/basic_ios.h" 3
      basic_ostream<_CharT, _Traits>*
      tie(basic_ostream<_CharT, _Traits>* __tiestr)
      {
        basic_ostream<_CharT, _Traits>* __old = _M_tie;
        _M_tie = __tiestr;
        return __old;
      }







      basic_streambuf<_CharT, _Traits>*
      rdbuf() const
      { return _M_streambuf; }
# 336 "/usr/include/c++/4.4/bits/basic_ios.h" 3
      basic_streambuf<_CharT, _Traits>*
      rdbuf(basic_streambuf<_CharT, _Traits>* __sb);
# 350 "/usr/include/c++/4.4/bits/basic_ios.h" 3
      basic_ios&
      copyfmt(const basic_ios& __rhs);







      char_type
      fill() const
      {
 if (!_M_fill_init)
   {
     _M_fill = this->widen(' ');
     _M_fill_init = true;
   }
 return _M_fill;
      }
# 379 "/usr/include/c++/4.4/bits/basic_ios.h" 3
      char_type
      fill(char_type __ch)
      {
 char_type __old = this->fill();
 _M_fill = __ch;
 return __old;
      }
# 399 "/usr/include/c++/4.4/bits/basic_ios.h" 3
      locale
      imbue(const locale& __loc);
# 419 "/usr/include/c++/4.4/bits/basic_ios.h" 3
      char
      narrow(char_type __c, char __dfault) const
      { return __check_facet(_M_ctype).narrow(__c, __dfault); }
# 438 "/usr/include/c++/4.4/bits/basic_ios.h" 3
      char_type
      widen(char __c) const
      { return __check_facet(_M_ctype).widen(__c); }

    protected:







      basic_ios()
      : ios_base(), _M_tie(0), _M_fill(char_type()), _M_fill_init(false),
 _M_streambuf(0), _M_ctype(0), _M_num_put(0), _M_num_get(0)
      { }







      void
      init(basic_streambuf<_CharT, _Traits>* __sb);

      void
      _M_cache_locale(const locale& __loc);
    };

}



# 1 "/usr/include/c++/4.4/bits/basic_ios.tcc" 1 3
# 34 "/usr/include/c++/4.4/bits/basic_ios.tcc" 3
# 34 "/usr/include/c++/4.4/bits/basic_ios.tcc" 3


namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::clear(iostate __state)
    {
      if (this->rdbuf())
 _M_streambuf_state = __state;
      else
   _M_streambuf_state = __state | badbit;
      if (this->exceptions() & this->rdstate())
 __throw_ios_failure(("basic_ios::clear"));
    }

  template<typename _CharT, typename _Traits>
    basic_streambuf<_CharT, _Traits>*
    basic_ios<_CharT, _Traits>::rdbuf(basic_streambuf<_CharT, _Traits>* __sb)
    {
      basic_streambuf<_CharT, _Traits>* __old = _M_streambuf;
      _M_streambuf = __sb;
      this->clear();
      return __old;
    }

  template<typename _CharT, typename _Traits>
    basic_ios<_CharT, _Traits>&
    basic_ios<_CharT, _Traits>::copyfmt(const basic_ios& __rhs)
    {


      if (this != &__rhs)
 {




   _Words* __words = (__rhs._M_word_size <= _S_local_word_size) ?
                      _M_local_word : new _Words[__rhs._M_word_size];


   _Callback_list* __cb = __rhs._M_callbacks;
   if (__cb)
     __cb->_M_add_reference();
   _M_call_callbacks(erase_event);
   if (_M_word != _M_local_word)
     {
       delete [] _M_word;
       _M_word = 0;
     }
   _M_dispose_callbacks();


   _M_callbacks = __cb;
   for (int __i = 0; __i < __rhs._M_word_size; ++__i)
     __words[__i] = __rhs._M_word[__i];
   _M_word = __words;
   _M_word_size = __rhs._M_word_size;

   this->flags(__rhs.flags());
   this->width(__rhs.width());
   this->precision(__rhs.precision());
   this->tie(__rhs.tie());
   this->fill(__rhs.fill());
   _M_ios_locale = __rhs.getloc();
   _M_cache_locale(_M_ios_locale);

   _M_call_callbacks(copyfmt_event);


   this->exceptions(__rhs.exceptions());
 }
      return *this;
    }


  template<typename _CharT, typename _Traits>
    locale
    basic_ios<_CharT, _Traits>::imbue(const locale& __loc)
    {
      locale __old(this->getloc());
      ios_base::imbue(__loc);
      _M_cache_locale(__loc);
      if (this->rdbuf() != 0)
 this->rdbuf()->pubimbue(__loc);
      return __old;
    }

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::init(basic_streambuf<_CharT, _Traits>* __sb)
    {

      ios_base::_M_init();


      _M_cache_locale(_M_ios_locale);
# 145 "/usr/include/c++/4.4/bits/basic_ios.tcc" 3
      _M_fill = _CharT();
      _M_fill_init = false;

      _M_tie = 0;
      _M_exception = goodbit;
      _M_streambuf = __sb;
      _M_streambuf_state = __sb ? goodbit : badbit;
    }

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::_M_cache_locale(const locale& __loc)
    {
      if (__builtin_expect(has_facet<__ctype_type>(__loc), true))
 _M_ctype = &use_facet<__ctype_type>(__loc);
      else
 _M_ctype = 0;

      if (__builtin_expect(has_facet<__num_put_type>(__loc), true))
 _M_num_put = &use_facet<__num_put_type>(__loc);
      else
 _M_num_put = 0;

      if (__builtin_expect(has_facet<__num_get_type>(__loc), true))
 _M_num_get = &use_facet<__num_get_type>(__loc);
      else
 _M_num_get = 0;
    }





  extern template class basic_ios<char>;


  extern template class basic_ios<wchar_t>;



}
# 472 "/usr/include/c++/4.4/bits/basic_ios.h" 2 3
# 46 "/usr/include/c++/4.4/ios" 2 3
# 41 "/usr/include/c++/4.4/ostream" 2 3


namespace std __attribute__ ((__visibility__ ("default"))) {
# 54 "/usr/include/c++/4.4/ostream" 3
  template<typename _CharT, typename _Traits>
    class basic_ostream : virtual public basic_ios<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_ios<_CharT, _Traits> __ios_type;
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> >
             __num_put_type;
      typedef ctype<_CharT> __ctype_type;
# 81 "/usr/include/c++/4.4/ostream" 3
      explicit
      basic_ostream(__streambuf_type* __sb)
      { this->init(__sb); }






      virtual
      ~basic_ostream() { }


      class sentry;
      friend class sentry;
# 107 "/usr/include/c++/4.4/ostream" 3
      __ostream_type&
      operator<<(__ostream_type& (*__pf)(__ostream_type&))
      {



 return __pf(*this);
      }

      __ostream_type&
      operator<<(__ios_type& (*__pf)(__ios_type&))
      {



 __pf(*this);
 return *this;
      }

      __ostream_type&
      operator<<(ios_base& (*__pf) (ios_base&))
      {



 __pf(*this);
 return *this;
      }
# 164 "/usr/include/c++/4.4/ostream" 3
      __ostream_type&
      operator<<(long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(unsigned long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(bool __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(short __n);

      __ostream_type&
      operator<<(unsigned short __n)
      {


 return _M_insert(static_cast<unsigned long>(__n));
      }

      __ostream_type&
      operator<<(int __n);

      __ostream_type&
      operator<<(unsigned int __n)
      {


 return _M_insert(static_cast<unsigned long>(__n));
      }


      __ostream_type&
      operator<<(long long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(unsigned long long __n)
      { return _M_insert(__n); }


      __ostream_type&
      operator<<(double __f)
      { return _M_insert(__f); }

      __ostream_type&
      operator<<(float __f)
      {


 return _M_insert(static_cast<double>(__f));
      }

      __ostream_type&
      operator<<(long double __f)
      { return _M_insert(__f); }

      __ostream_type&
      operator<<(const void* __p)
      { return _M_insert(__p); }
# 249 "/usr/include/c++/4.4/ostream" 3
      __ostream_type&
      operator<<(__streambuf_type* __sb);
# 282 "/usr/include/c++/4.4/ostream" 3
      __ostream_type&
      put(char_type __c);


      void
      _M_write(const char_type* __s, streamsize __n)
      {
 const streamsize __put = this->rdbuf()->sputn(__s, __n);
 if (__put != __n)
   this->setstate(ios_base::badbit);
      }
# 310 "/usr/include/c++/4.4/ostream" 3
      __ostream_type&
      write(const char_type* __s, streamsize __n);
# 323 "/usr/include/c++/4.4/ostream" 3
      __ostream_type&
      flush();
# 334 "/usr/include/c++/4.4/ostream" 3
      pos_type
      tellp();
# 345 "/usr/include/c++/4.4/ostream" 3
      __ostream_type&
      seekp(pos_type);
# 357 "/usr/include/c++/4.4/ostream" 3
       __ostream_type&
      seekp(off_type, ios_base::seekdir);

    protected:
      basic_ostream()
      { this->init(0); }

      template<typename _ValueT>
        __ostream_type&
        _M_insert(_ValueT __v);
    };
# 376 "/usr/include/c++/4.4/ostream" 3
  template <typename _CharT, typename _Traits>
    class basic_ostream<_CharT, _Traits>::sentry
    {

      bool _M_ok;
      basic_ostream<_CharT, _Traits>& _M_os;

    public:
# 395 "/usr/include/c++/4.4/ostream" 3
      explicit
      sentry(basic_ostream<_CharT, _Traits>& __os);
# 405 "/usr/include/c++/4.4/ostream" 3
      ~sentry()
      {

 if (bool(_M_os.flags() & ios_base::unitbuf) && !uncaught_exception())
   {

     if (_M_os.rdbuf() && _M_os.rdbuf()->pubsync() == -1)
       _M_os.setstate(ios_base::badbit);
   }
      }
# 423 "/usr/include/c++/4.4/ostream" 3
      operator bool() const
      { return _M_ok; }
    };
# 444 "/usr/include/c++/4.4/ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, _CharT __c)
    { return __ostream_insert(__out, &__c, 1); }

  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, char __c)
    { return (__out << __out.widen(__c)); }


  template <class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, char __c)
    { return __ostream_insert(__out, &__c, 1); }


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, signed char __c)
    { return (__out << static_cast<char>(__c)); }

  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, unsigned char __c)
    { return (__out << static_cast<char>(__c)); }
# 486 "/usr/include/c++/4.4/ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, const _CharT* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 __ostream_insert(__out, __s,
    static_cast<streamsize>(_Traits::length(__s)));
      return __out;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits> &
    operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s);


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const char* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 __ostream_insert(__out, __s,
    static_cast<streamsize>(_Traits::length(__s)));
      return __out;
    }


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const signed char* __s)
    { return (__out << reinterpret_cast<const char*>(__s)); }

  template<class _Traits>
    inline basic_ostream<char, _Traits> &
    operator<<(basic_ostream<char, _Traits>& __out, const unsigned char* __s)
    { return (__out << reinterpret_cast<const char*>(__s)); }
# 536 "/usr/include/c++/4.4/ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    endl(basic_ostream<_CharT, _Traits>& __os)
    { return flush(__os.put(__os.widen('\n'))); }







  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    ends(basic_ostream<_CharT, _Traits>& __os)
    { return __os.put(_CharT()); }






  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    flush(basic_ostream<_CharT, _Traits>& __os)
    { return __os.flush(); }

}



# 1 "/usr/include/c++/4.4/bits/ostream.tcc" 1 3
# 39 "/usr/include/c++/4.4/bits/ostream.tcc" 3
# 39 "/usr/include/c++/4.4/bits/ostream.tcc" 3




namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>::sentry::
    sentry(basic_ostream<_CharT, _Traits>& __os)
    : _M_ok(false), _M_os(__os)
    {

      if (__os.tie() && __os.good())
 __os.tie()->flush();

      if (__os.good())
 _M_ok = true;
      else
 __os.setstate(ios_base::failbit);
    }

  template<typename _CharT, typename _Traits>
    template<typename _ValueT>
      basic_ostream<_CharT, _Traits>&
      basic_ostream<_CharT, _Traits>::
      _M_insert(_ValueT __v)
      {
 sentry __cerb(*this);
 if (__cerb)
   {
     ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
     try
       {
  const __num_put_type& __np = __check_facet(this->_M_num_put);
  if (__np.put(*this, *this, this->fill(), __v).failed())
    __err |= ios_base::badbit;
       }
     catch(__cxxabiv1::__forced_unwind&)
       {
  this->_M_setstate(ios_base::badbit);
  throw;
       }
     catch(...)
       { this->_M_setstate(ios_base::badbit); }
     if (__err)
       this->setstate(__err);
   }
 return *this;
      }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(short __n)
    {


      const ios_base::fmtflags __fmt = this->flags() & ios_base::basefield;
      if (__fmt == ios_base::oct || __fmt == ios_base::hex)
 return _M_insert(static_cast<long>(static_cast<unsigned short>(__n)));
      else
 return _M_insert(static_cast<long>(__n));
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(int __n)
    {


      const ios_base::fmtflags __fmt = this->flags() & ios_base::basefield;
      if (__fmt == ios_base::oct || __fmt == ios_base::hex)
 return _M_insert(static_cast<long>(static_cast<unsigned int>(__n)));
      else
 return _M_insert(static_cast<long>(__n));
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(__streambuf_type* __sbin)
    {
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this);
      if (__cerb && __sbin)
 {
   try
     {
       if (!__copy_streambufs(__sbin, this->rdbuf()))
  __err |= ios_base::failbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::failbit); }
 }
      else if (!__sbin)
 __err |= ios_base::badbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    put(char_type __c)
    {






      sentry __cerb(*this);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const int_type __put = this->rdbuf()->sputc(__c);
       if (traits_type::eq_int_type(__put, traits_type::eof()))
  __err |= ios_base::badbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    write(const _CharT* __s, streamsize __n)
    {







      sentry __cerb(*this);
      if (__cerb)
 {
   try
     { _M_write(__s, __n); }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    flush()
    {



      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      try
 {
   if (this->rdbuf() && this->rdbuf()->pubsync() == -1)
     __err |= ios_base::badbit;
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_ostream<_CharT, _Traits>::pos_type
    basic_ostream<_CharT, _Traits>::
    tellp()
    {
      pos_type __ret = pos_type(-1);
      try
 {
   if (!this->fail())
     __ret = this->rdbuf()->pubseekoff(0, ios_base::cur, ios_base::out);
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    seekp(pos_type __pos)
    {
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      try
 {
   if (!this->fail())
     {


       const pos_type __p = this->rdbuf()->pubseekpos(__pos,
            ios_base::out);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    seekp(off_type __off, ios_base::seekdir __dir)
    {
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      try
 {
   if (!this->fail())
     {


       const pos_type __p = this->rdbuf()->pubseekoff(__off, __dir,
            ios_base::out);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 {


   const size_t __clen = char_traits<char>::length(__s);
   try
     {
       struct __ptr_guard
       {
  _CharT *__p;
  __ptr_guard (_CharT *__ip): __p(__ip) { }
  ~__ptr_guard() { delete[] __p; }
  _CharT* __get() { return __p; }
       } __pg (new _CharT[__clen]);

       _CharT *__ws = __pg.__get();
       for (size_t __i = 0; __i < __clen; ++__i)
  __ws[__i] = __out.widen(__s[__i]);
       __ostream_insert(__out, __ws, __clen);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __out._M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { __out._M_setstate(ios_base::badbit); }
 }
      return __out;
    }





  extern template class basic_ostream<char>;
  extern template ostream& endl(ostream&);
  extern template ostream& ends(ostream&);
  extern template ostream& flush(ostream&);
  extern template ostream& operator<<(ostream&, char);
  extern template ostream& operator<<(ostream&, unsigned char);
  extern template ostream& operator<<(ostream&, signed char);
  extern template ostream& operator<<(ostream&, const char*);
  extern template ostream& operator<<(ostream&, const unsigned char*);
  extern template ostream& operator<<(ostream&, const signed char*);

  extern template ostream& ostream::_M_insert(long);
  extern template ostream& ostream::_M_insert(unsigned long);
  extern template ostream& ostream::_M_insert(bool);

  extern template ostream& ostream::_M_insert(long long);
  extern template ostream& ostream::_M_insert(unsigned long long);

  extern template ostream& ostream::_M_insert(double);
  extern template ostream& ostream::_M_insert(long double);
  extern template ostream& ostream::_M_insert(const void*);


  extern template class basic_ostream<wchar_t>;
  extern template wostream& endl(wostream&);
  extern template wostream& ends(wostream&);
  extern template wostream& flush(wostream&);
  extern template wostream& operator<<(wostream&, wchar_t);
  extern template wostream& operator<<(wostream&, char);
  extern template wostream& operator<<(wostream&, const wchar_t*);
  extern template wostream& operator<<(wostream&, const char*);

  extern template wostream& wostream::_M_insert(long);
  extern template wostream& wostream::_M_insert(unsigned long);
  extern template wostream& wostream::_M_insert(bool);

  extern template wostream& wostream::_M_insert(long long);
  extern template wostream& wostream::_M_insert(unsigned long long);

  extern template wostream& wostream::_M_insert(double);
  extern template wostream& wostream::_M_insert(long double);
  extern template wostream& wostream::_M_insert(const void*);



}
# 566 "/usr/include/c++/4.4/ostream" 2 3
# 66 "/usr/include/c++/4.4/iterator" 2 3
# 1 "/usr/include/c++/4.4/istream" 1 3
# 38 "/usr/include/c++/4.4/istream" 3
# 38 "/usr/include/c++/4.4/istream" 3





namespace std __attribute__ ((__visibility__ ("default"))) {
# 54 "/usr/include/c++/4.4/istream" 3
  template<typename _CharT, typename _Traits>
    class basic_istream : virtual public basic_ios<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_ios<_CharT, _Traits> __ios_type;
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> >
        __num_get_type;
      typedef ctype<_CharT> __ctype_type;

    protected:





      streamsize _M_gcount;

    public:
# 90 "/usr/include/c++/4.4/istream" 3
      explicit
      basic_istream(__streambuf_type* __sb)
      : _M_gcount(streamsize(0))
      { this->init(__sb); }






      virtual
      ~basic_istream()
      { _M_gcount = streamsize(0); }


      class sentry;
      friend class sentry;
# 118 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      operator>>(__istream_type& (*__pf)(__istream_type&))
      { return __pf(*this); }

      __istream_type&
      operator>>(__ios_type& (*__pf)(__ios_type&))
      {
 __pf(*this);
 return *this;
      }

      __istream_type&
      operator>>(ios_base& (*__pf)(ios_base&))
      {
 __pf(*this);
 return *this;
      }
# 165 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      operator>>(bool& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(short& __n);

      __istream_type&
      operator>>(unsigned short& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(int& __n);

      __istream_type&
      operator>>(unsigned int& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(long& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(unsigned long& __n)
      { return _M_extract(__n); }


      __istream_type&
      operator>>(long long& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(unsigned long long& __n)
      { return _M_extract(__n); }


      __istream_type&
      operator>>(float& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(double& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(long double& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(void*& __p)
      { return _M_extract(__p); }
# 237 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      operator>>(__streambuf_type* __sb);
# 247 "/usr/include/c++/4.4/istream" 3
      streamsize
      gcount() const
      { return _M_gcount; }
# 279 "/usr/include/c++/4.4/istream" 3
      int_type
      get();
# 293 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      get(char_type& __c);
# 320 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      get(char_type* __s, streamsize __n, char_type __delim);
# 331 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      get(char_type* __s, streamsize __n)
      { return this->get(__s, __n, this->widen('\n')); }
# 354 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      get(__streambuf_type& __sb, char_type __delim);
# 364 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      get(__streambuf_type& __sb)
      { return this->get(__sb, this->widen('\n')); }
# 393 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      getline(char_type* __s, streamsize __n, char_type __delim);
# 404 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      getline(char_type* __s, streamsize __n)
      { return this->getline(__s, __n, this->widen('\n')); }
# 428 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      ignore();

      __istream_type&
      ignore(streamsize __n);

      __istream_type&
      ignore(streamsize __n, int_type __delim);
# 445 "/usr/include/c++/4.4/istream" 3
      int_type
      peek();
# 463 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      read(char_type* __s, streamsize __n);
# 482 "/usr/include/c++/4.4/istream" 3
      streamsize
      readsome(char_type* __s, streamsize __n);
# 498 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      putback(char_type __c);
# 513 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      unget();
# 531 "/usr/include/c++/4.4/istream" 3
      int
      sync();
# 545 "/usr/include/c++/4.4/istream" 3
      pos_type
      tellg();
# 560 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      seekg(pos_type);
# 576 "/usr/include/c++/4.4/istream" 3
      __istream_type&
      seekg(off_type, ios_base::seekdir);


    protected:
      basic_istream()
      : _M_gcount(streamsize(0))
      { this->init(0); }

      template<typename _ValueT>
        __istream_type&
        _M_extract(_ValueT& __v);
    };


  template<>
    basic_istream<char>&
    basic_istream<char>::
    getline(char_type* __s, streamsize __n, char_type __delim);

  template<>
    basic_istream<char>&
    basic_istream<char>::
    ignore(streamsize __n);

  template<>
    basic_istream<char>&
    basic_istream<char>::
    ignore(streamsize __n, int_type __delim);


  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    getline(char_type* __s, streamsize __n, char_type __delim);

  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    ignore(streamsize __n);

  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    ignore(streamsize __n, int_type __delim);
# 631 "/usr/include/c++/4.4/istream" 3
  template<typename _CharT, typename _Traits>
    class basic_istream<_CharT, _Traits>::sentry
    {
    public:

      typedef _Traits traits_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef typename __istream_type::__ctype_type __ctype_type;
      typedef typename _Traits::int_type __int_type;
# 663 "/usr/include/c++/4.4/istream" 3
      explicit
      sentry(basic_istream<_CharT, _Traits>& __is, bool __noskipws = false);
# 673 "/usr/include/c++/4.4/istream" 3
      operator bool() const
      { return _M_ok; }

    private:
      bool _M_ok;
    };
# 693 "/usr/include/c++/4.4/istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c);

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, unsigned char& __c)
    { return (__in >> reinterpret_cast<char&>(__c)); }

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, signed char& __c)
    { return (__in >> reinterpret_cast<char&>(__c)); }
# 734 "/usr/include/c++/4.4/istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s);


  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __in, char* __s);

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, unsigned char* __s)
    { return (__in >> reinterpret_cast<char*>(__s)); }

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, signed char* __s)
    { return (__in >> reinterpret_cast<char*>(__s)); }
# 762 "/usr/include/c++/4.4/istream" 3
  template<typename _CharT, typename _Traits>
    class basic_iostream
    : public basic_istream<_CharT, _Traits>,
      public basic_ostream<_CharT, _Traits>
    {
    public:



      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_ostream<_CharT, _Traits> __ostream_type;







      explicit
      basic_iostream(basic_streambuf<_CharT, _Traits>* __sb)
      : __istream_type(__sb), __ostream_type(__sb) { }




      virtual
      ~basic_iostream() { }

    protected:
      basic_iostream()
      : __istream_type(), __ostream_type() { }
    };
# 823 "/usr/include/c++/4.4/istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    ws(basic_istream<_CharT, _Traits>& __is);

}



# 1 "/usr/include/c++/4.4/bits/istream.tcc" 1 3
# 39 "/usr/include/c++/4.4/bits/istream.tcc" 3
# 39 "/usr/include/c++/4.4/bits/istream.tcc" 3




namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>::sentry::
    sentry(basic_istream<_CharT, _Traits>& __in, bool __noskip) : _M_ok(false)
    {
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      if (__in.good())
 {
   if (__in.tie())
     __in.tie()->flush();
   if (!__noskip && bool(__in.flags() & ios_base::skipws))
     {
       const __int_type __eof = traits_type::eof();
       __streambuf_type* __sb = __in.rdbuf();
       __int_type __c = __sb->sgetc();

       const __ctype_type& __ct = __check_facet(__in._M_ctype);
       while (!traits_type::eq_int_type(__c, __eof)
       && __ct.is(ctype_base::space,
    traits_type::to_char_type(__c)))
  __c = __sb->snextc();




       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
 }

      if (__in.good() && __err == ios_base::goodbit)
 _M_ok = true;
      else
 {
   __err |= ios_base::failbit;
   __in.setstate(__err);
 }
    }

  template<typename _CharT, typename _Traits>
    template<typename _ValueT>
      basic_istream<_CharT, _Traits>&
      basic_istream<_CharT, _Traits>::
      _M_extract(_ValueT& __v)
      {
 sentry __cerb(*this, false);
 if (__cerb)
   {
     ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
     try
       {
  const __num_get_type& __ng = __check_facet(this->_M_num_get);
  __ng.get(*this, 0, *this, __err, __v);
       }
     catch(__cxxabiv1::__forced_unwind&)
       {
  this->_M_setstate(ios_base::badbit);
  throw;
       }
     catch(...)
       { this->_M_setstate(ios_base::badbit); }
     if (__err)
       this->setstate(__err);
   }
 return *this;
      }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(short& __n)
    {


      long __l;
      _M_extract(__l);
      if (!this->fail())
 {
   if (__gnu_cxx::__numeric_traits<short>::__min <= __l
       && __l <= __gnu_cxx::__numeric_traits<short>::__max)
     __n = short(__l);
   else
     this->setstate(ios_base::failbit);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(int& __n)
    {


      long __l;
      _M_extract(__l);
      if (!this->fail())
 {
   if (__gnu_cxx::__numeric_traits<int>::__min <= __l
       && __l <= __gnu_cxx::__numeric_traits<int>::__max)
     __n = int(__l);
   else
     this->setstate(ios_base::failbit);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(__streambuf_type* __sbout)
    {
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, false);
      if (__cerb && __sbout)
 {
   try
     {
       bool __ineof;
       if (!__copy_streambufs_eof(this->rdbuf(), __sbout, __ineof))
  __err |= ios_base::failbit;
       if (__ineof)
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::failbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::failbit); }
 }
      else if (!__sbout)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::int_type
    basic_istream<_CharT, _Traits>::
    get(void)
    {
      const int_type __eof = traits_type::eof();
      int_type __c = __eof;
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, true);
      if (__cerb)
 {
   try
     {
       __c = this->rdbuf()->sbumpc();

       if (!traits_type::eq_int_type(__c, __eof))
  _M_gcount = 1;
       else
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return __c;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(char_type& __c)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, true);
      if (__cerb)
 {
   try
     {
       const int_type __cb = this->rdbuf()->sbumpc();

       if (!traits_type::eq_int_type(__cb, traits_type::eof()))
  {
    _M_gcount = 1;
    __c = traits_type::to_char_type(__cb);
  }
       else
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(char_type* __s, streamsize __n, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, true);
      if (__cerb)
 {
   try
     {
       const int_type __idelim = traits_type::to_int_type(__delim);
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       int_type __c = __sb->sgetc();

       while (_M_gcount + 1 < __n
       && !traits_type::eq_int_type(__c, __eof)
       && !traits_type::eq_int_type(__c, __idelim))
  {
    *__s++ = traits_type::to_char_type(__c);
    ++_M_gcount;
    __c = __sb->snextc();
  }
       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }


      if (__n > 0)
 *__s = char_type();
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(__streambuf_type& __sb, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, true);
      if (__cerb)
 {
   try
     {
       const int_type __idelim = traits_type::to_int_type(__delim);
       const int_type __eof = traits_type::eof();
       __streambuf_type* __this_sb = this->rdbuf();
       int_type __c = __this_sb->sgetc();
       char_type __c2 = traits_type::to_char_type(__c);

       while (!traits_type::eq_int_type(__c, __eof)
       && !traits_type::eq_int_type(__c, __idelim)
       && !traits_type::eq_int_type(__sb.sputc(__c2), __eof))
  {
    ++_M_gcount;
    __c = __this_sb->snextc();
    __c2 = traits_type::to_char_type(__c);
  }
       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    getline(char_type* __s, streamsize __n, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, true);
      if (__cerb)
        {
          try
            {
              const int_type __idelim = traits_type::to_int_type(__delim);
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();

              while (_M_gcount + 1 < __n
                     && !traits_type::eq_int_type(__c, __eof)
                     && !traits_type::eq_int_type(__c, __idelim))
                {
                  *__s++ = traits_type::to_char_type(__c);
                  __c = __sb->snextc();
                  ++_M_gcount;
                }
              if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
              else
                {
                  if (traits_type::eq_int_type(__c, __idelim))
                    {
                      __sb->sbumpc();
                      ++_M_gcount;
                    }
                  else
                    __err |= ios_base::failbit;
                }
            }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
          catch(...)
            { this->_M_setstate(ios_base::badbit); }
        }


      if (__n > 0)
 *__s = char_type();
      if (!_M_gcount)
        __err |= ios_base::failbit;
      if (__err)
        this->setstate(__err);
      return *this;
    }




  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(void)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();

       if (traits_type::eq_int_type(__sb->sbumpc(), __eof))
  __err |= ios_base::eofbit;
       else
  _M_gcount = 1;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb && __n > 0)
        {
          ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
          try
            {
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();
# 463 "/usr/include/c++/4.4/bits/istream.tcc" 3
       bool __large_ignore = false;
       while (true)
  {
    while (_M_gcount < __n
    && !traits_type::eq_int_type(__c, __eof))
      {
        ++_M_gcount;
        __c = __sb->snextc();
      }
    if (__n == __gnu_cxx::__numeric_traits<streamsize>::__max
        && !traits_type::eq_int_type(__c, __eof))
      {
        _M_gcount =
   __gnu_cxx::__numeric_traits<streamsize>::__min;
        __large_ignore = true;
      }
    else
      break;
  }

       if (__large_ignore)
  _M_gcount = __gnu_cxx::__numeric_traits<streamsize>::__max;

       if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
            }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
          catch(...)
            { this->_M_setstate(ios_base::badbit); }
          if (__err)
            this->setstate(__err);
        }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(streamsize __n, int_type __delim)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb && __n > 0)
        {
          ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
          try
            {
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();


       bool __large_ignore = false;
       while (true)
  {
    while (_M_gcount < __n
    && !traits_type::eq_int_type(__c, __eof)
    && !traits_type::eq_int_type(__c, __delim))
      {
        ++_M_gcount;
        __c = __sb->snextc();
      }
    if (__n == __gnu_cxx::__numeric_traits<streamsize>::__max
        && !traits_type::eq_int_type(__c, __eof)
        && !traits_type::eq_int_type(__c, __delim))
      {
        _M_gcount =
   __gnu_cxx::__numeric_traits<streamsize>::__min;
        __large_ignore = true;
      }
    else
      break;
  }

       if (__large_ignore)
  _M_gcount = __gnu_cxx::__numeric_traits<streamsize>::__max;

              if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
       else if (traits_type::eq_int_type(__c, __delim))
  {
    if (_M_gcount
        < __gnu_cxx::__numeric_traits<streamsize>::__max)
      ++_M_gcount;
    __sb->sbumpc();
  }
            }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
          catch(...)
            { this->_M_setstate(ios_base::badbit); }
          if (__err)
            this->setstate(__err);
        }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::int_type
    basic_istream<_CharT, _Traits>::
    peek(void)
    {
      int_type __c = traits_type::eof();
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       __c = this->rdbuf()->sgetc();
       if (traits_type::eq_int_type(__c, traits_type::eof()))
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return __c;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    read(char_type* __s, streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       _M_gcount = this->rdbuf()->sgetn(__s, __n);
       if (_M_gcount != __n)
  __err |= (ios_base::eofbit | ios_base::failbit);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    streamsize
    basic_istream<_CharT, _Traits>::
    readsome(char_type* __s, streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {

       const streamsize __num = this->rdbuf()->in_avail();
       if (__num > 0)
  _M_gcount = this->rdbuf()->sgetn(__s, std::min(__num, __n));
       else if (__num == -1)
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return _M_gcount;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    putback(char_type __c)
    {


      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       if (!__sb
    || traits_type::eq_int_type(__sb->sputbackc(__c), __eof))
  __err |= ios_base::badbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    unget(void)
    {


      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       if (!__sb
    || traits_type::eq_int_type(__sb->sungetc(), __eof))
  __err |= ios_base::badbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    int
    basic_istream<_CharT, _Traits>::
    sync(void)
    {


      int __ret = -1;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       __streambuf_type* __sb = this->rdbuf();
       if (__sb)
  {
    if (__sb->pubsync() == -1)
      __err |= ios_base::badbit;
    else
      __ret = 0;
  }
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::pos_type
    basic_istream<_CharT, _Traits>::
    tellg(void)
    {


      pos_type __ret = pos_type(-1);
      try
 {
   if (!this->fail())
     __ret = this->rdbuf()->pubseekoff(0, ios_base::cur,
           ios_base::in);
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    seekg(pos_type __pos)
    {


      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      try
 {
   if (!this->fail())
     {

       const pos_type __p = this->rdbuf()->pubseekpos(__pos,
            ios_base::in);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    seekg(off_type __off, ios_base::seekdir __dir)
    {


      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      try
 {
   if (!this->fail())
     {

       const pos_type __p = this->rdbuf()->pubseekoff(__off, __dir,
            ios_base::in);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }


  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef typename __istream_type::int_type __int_type;

      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const __int_type __cb = __in.rdbuf()->sbumpc();
       if (!_Traits::eq_int_type(__cb, _Traits::eof()))
  __c = _Traits::to_char_type(__cb);
       else
  __err |= (ios_base::eofbit | ios_base::failbit);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __in._M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { __in._M_setstate(ios_base::badbit); }
   if (__err)
     __in.setstate(__err);
 }
      return __in;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef typename _Traits::int_type int_type;
      typedef _CharT char_type;
      typedef ctype<_CharT> __ctype_type;

      streamsize __extracted = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   try
     {

       streamsize __num = __in.width();
       if (__num <= 0)
  __num = __gnu_cxx::__numeric_traits<streamsize>::__max;

       const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());

       const int_type __eof = _Traits::eof();
       __streambuf_type* __sb = __in.rdbuf();
       int_type __c = __sb->sgetc();

       while (__extracted < __num - 1
       && !_Traits::eq_int_type(__c, __eof)
       && !__ct.is(ctype_base::space,
     _Traits::to_char_type(__c)))
  {
    *__s++ = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __sb->snextc();
  }
       if (_Traits::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;



       *__s = char_type();
       __in.width(0);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __in._M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { __in._M_setstate(ios_base::badbit); }
 }
      if (!__extracted)
 __err |= ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }


  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    ws(basic_istream<_CharT, _Traits>& __in)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef typename __istream_type::int_type __int_type;
      typedef ctype<_CharT> __ctype_type;

      const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
      const __int_type __eof = _Traits::eof();
      __streambuf_type* __sb = __in.rdbuf();
      __int_type __c = __sb->sgetc();

      while (!_Traits::eq_int_type(__c, __eof)
      && __ct.is(ctype_base::space, _Traits::to_char_type(__c)))
 __c = __sb->snextc();

       if (_Traits::eq_int_type(__c, __eof))
  __in.setstate(ios_base::eofbit);
      return __in;
    }





  extern template class basic_istream<char>;
  extern template istream& ws(istream&);
  extern template istream& operator>>(istream&, char&);
  extern template istream& operator>>(istream&, char*);
  extern template istream& operator>>(istream&, unsigned char&);
  extern template istream& operator>>(istream&, signed char&);
  extern template istream& operator>>(istream&, unsigned char*);
  extern template istream& operator>>(istream&, signed char*);

  extern template istream& istream::_M_extract(unsigned short&);
  extern template istream& istream::_M_extract(unsigned int&);
  extern template istream& istream::_M_extract(long&);
  extern template istream& istream::_M_extract(unsigned long&);
  extern template istream& istream::_M_extract(bool&);

  extern template istream& istream::_M_extract(long long&);
  extern template istream& istream::_M_extract(unsigned long long&);

  extern template istream& istream::_M_extract(float&);
  extern template istream& istream::_M_extract(double&);
  extern template istream& istream::_M_extract(long double&);
  extern template istream& istream::_M_extract(void*&);

  extern template class basic_iostream<char>;


  extern template class basic_istream<wchar_t>;
  extern template wistream& ws(wistream&);
  extern template wistream& operator>>(wistream&, wchar_t&);
  extern template wistream& operator>>(wistream&, wchar_t*);

  extern template wistream& wistream::_M_extract(unsigned short&);
  extern template wistream& wistream::_M_extract(unsigned int&);
  extern template wistream& wistream::_M_extract(long&);
  extern template wistream& wistream::_M_extract(unsigned long&);
  extern template wistream& wistream::_M_extract(bool&);

  extern template wistream& wistream::_M_extract(long long&);
  extern template wistream& wistream::_M_extract(unsigned long long&);

  extern template wistream& wistream::_M_extract(float&);
  extern template wistream& wistream::_M_extract(double&);
  extern template wistream& wistream::_M_extract(long double&);
  extern template wistream& wistream::_M_extract(void*&);

  extern template class basic_iostream<wchar_t>;



}
# 831 "/usr/include/c++/4.4/istream" 2 3
# 67 "/usr/include/c++/4.4/iterator" 2 3
# 1 "/usr/include/c++/4.4/bits/stream_iterator.h" 1 3
# 33 "/usr/include/c++/4.4/bits/stream_iterator.h" 3
# 33 "/usr/include/c++/4.4/bits/stream_iterator.h" 3




namespace std __attribute__ ((__visibility__ ("default"))) {


  template<typename _Tp, typename _CharT = char,
           typename _Traits = char_traits<_CharT>, typename _Dist = ptrdiff_t>
    class istream_iterator
    : public iterator<input_iterator_tag, _Tp, _Dist, const _Tp*, const _Tp&>
    {
    public:
      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef basic_istream<_CharT, _Traits> istream_type;

    private:
      istream_type* _M_stream;
      _Tp _M_value;
      bool _M_ok;

    public:

      istream_iterator()
      : _M_stream(0), _M_value(), _M_ok(false) {}


      istream_iterator(istream_type& __s)
      : _M_stream(&__s)
      { _M_read(); }

      istream_iterator(const istream_iterator& __obj)
      : _M_stream(__obj._M_stream), _M_value(__obj._M_value),
        _M_ok(__obj._M_ok)
      { }

      const _Tp&
      operator*() const
      {


                        ;
 return _M_value;
      }

      const _Tp*
      operator->() const { return &(operator*()); }

      istream_iterator&
      operator++()
      {


                        ;
 _M_read();
 return *this;
      }

      istream_iterator
      operator++(int)
      {


                        ;
 istream_iterator __tmp = *this;
 _M_read();
 return __tmp;
      }

      bool
      _M_equal(const istream_iterator& __x) const
      { return (_M_ok == __x._M_ok) && (!_M_ok || _M_stream == __x._M_stream); }

    private:
      void
      _M_read()
      {
 _M_ok = (_M_stream && *_M_stream) ? true : false;
 if (_M_ok)
   {
     *_M_stream >> _M_value;
     _M_ok = *_M_stream ? true : false;
   }
      }
    };


  template<typename _Tp, typename _CharT, typename _Traits, typename _Dist>
    inline bool
    operator==(const istream_iterator<_Tp, _CharT, _Traits, _Dist>& __x,
        const istream_iterator<_Tp, _CharT, _Traits, _Dist>& __y)
    { return __x._M_equal(__y); }


  template <class _Tp, class _CharT, class _Traits, class _Dist>
    inline bool
    operator!=(const istream_iterator<_Tp, _CharT, _Traits, _Dist>& __x,
        const istream_iterator<_Tp, _CharT, _Traits, _Dist>& __y)
    { return !__x._M_equal(__y); }
# 145 "/usr/include/c++/4.4/bits/stream_iterator.h" 3
  template<typename _Tp, typename _CharT = char,
           typename _Traits = char_traits<_CharT> >
    class ostream_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    public:


      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef basic_ostream<_CharT, _Traits> ostream_type;


    private:
      ostream_type* _M_stream;
      const _CharT* _M_string;

    public:

      ostream_iterator(ostream_type& __s) : _M_stream(&__s), _M_string(0) {}
# 176 "/usr/include/c++/4.4/bits/stream_iterator.h" 3
      ostream_iterator(ostream_type& __s, const _CharT* __c)
      : _M_stream(&__s), _M_string(__c) { }


      ostream_iterator(const ostream_iterator& __obj)
      : _M_stream(__obj._M_stream), _M_string(__obj._M_string) { }



      ostream_iterator&
      operator=(const _Tp& __value)
      {


                        ;
 *_M_stream << __value;
 if (_M_string) *_M_stream << _M_string;
 return *this;
      }

      ostream_iterator&
      operator*()
      { return *this; }

      ostream_iterator&
      operator++()
      { return *this; }

      ostream_iterator&
      operator++(int)
      { return *this; }
    };

}
# 68 "/usr/include/c++/4.4/iterator" 2 3
# 52 "../../include/tbb/internal/_concurrent_queue_impl.h" 2





namespace tbb {




namespace strict_ppl {
template<typename T, typename A> class concurrent_queue;
}

template<typename T, typename A> class concurrent_bounded_queue;

namespace deprecated {
template<typename T, typename A> class concurrent_queue;
}



namespace strict_ppl {


namespace internal {

using namespace tbb::internal;

typedef size_t ticket;

template<typename T> class micro_queue ;
template<typename T> class micro_queue_pop_finalizer ;
template<typename T> class concurrent_queue_base_v3;





struct concurrent_queue_rep_base : no_copy {
    template<typename T> friend class micro_queue;
    template<typename T> friend class concurrent_queue_base_v3;

protected:

    static const size_t phi = 3;

public:

    static const size_t n_queue = 8;


    struct page {
        page* next;
        uintptr_t mask;
    };

    atomic<ticket> head_counter;
    char pad1[NFS_MaxLineSize-sizeof(atomic<ticket>)];
    atomic<ticket> tail_counter;
    char pad2[NFS_MaxLineSize-sizeof(atomic<ticket>)];


    size_t items_per_page;


    size_t item_size;


    atomic<size_t> n_invalid_entries;

    char pad3[NFS_MaxLineSize-sizeof(size_t)-sizeof(size_t)-sizeof(atomic<size_t>)];
} ;

inline bool is_valid_page(const concurrent_queue_rep_base::page* p) {
    return uintptr_t(p)>1;
}





class concurrent_queue_page_allocator
{
    template<typename T> friend class micro_queue ;
    template<typename T> friend class micro_queue_pop_finalizer ;
protected:
    virtual ~concurrent_queue_page_allocator() {}
private:
    virtual concurrent_queue_rep_base::page* allocate_page() = 0;
    virtual void deallocate_page( concurrent_queue_rep_base::page* p ) = 0;
} ;
# 154 "../../include/tbb/internal/_concurrent_queue_impl.h"
template<typename T>
class micro_queue : no_copy {
    typedef concurrent_queue_rep_base::page page;


    class destroyer: no_copy {
        T& my_value;
    public:
        destroyer( T& value ) : my_value(value) {}
        ~destroyer() {my_value.~T();}
    };

    void copy_item( page& dst, size_t index, const void* src ) {
        new( &get_ref(dst,index) ) T(*static_cast<const T*>(src));
    }

    void copy_item( page& dst, size_t dindex, const page& src, size_t sindex ) {
        new( &get_ref(dst,dindex) ) T( get_ref(const_cast<page&>(src),sindex) );
    }

    void assign_and_destroy_item( void* dst, page& src, size_t index ) {
        T& from = get_ref(src,index);
        destroyer d(from);
        *static_cast<T*>(dst) = from;
    }

    void spin_wait_until_my_turn( atomic<ticket>& counter, ticket k, concurrent_queue_rep_base& rb ) const ;

public:
    friend class micro_queue_pop_finalizer<T>;

    struct padded_page: page {

        padded_page();

        void operator=( const padded_page& );

        T last;
    };

    static T& get_ref( page& p, size_t index ) {
        return (&static_cast<padded_page*>(static_cast<void*>(&p))->last)[index];
    }

    atomic<page*> head_page;
    atomic<ticket> head_counter;

    atomic<page*> tail_page;
    atomic<ticket> tail_counter;

    spin_mutex page_mutex;

    void push( const void* item, ticket k, concurrent_queue_base_v3<T>& base ) ;

    bool pop( void* dst, ticket k, concurrent_queue_base_v3<T>& base ) ;

    micro_queue& assign( const micro_queue& src, concurrent_queue_base_v3<T>& base ) ;

    page* make_copy( concurrent_queue_base_v3<T>& base, const page* src_page, size_t begin_in_page, size_t end_in_page, ticket& g_index ) ;

    void invalidate_page_and_rethrow( ticket k ) ;
};

template<typename T>
void micro_queue<T>::spin_wait_until_my_turn( atomic<ticket>& counter, ticket k, concurrent_queue_rep_base& rb ) const {
    for( atomic_backoff b(true);;b.pause() ) {
        ticket c = counter;
        if( c==k ) return;
        else if( c&1 ) {
            ++rb.n_invalid_entries;
            throw_exception( eid_bad_last_alloc );
        }
    }
}

template<typename T>
void micro_queue<T>::push( const void* item, ticket k, concurrent_queue_base_v3<T>& base ) {
    k &= -concurrent_queue_rep_base::n_queue;
    page* p = __null;
    size_t index = modulo_power_of_two( k/concurrent_queue_rep_base::n_queue, base.my_rep->items_per_page);
    if( !index ) {
        try {
            concurrent_queue_page_allocator& pa = base;
            p = pa.allocate_page();
        } catch(...) {
            ++base.my_rep->n_invalid_entries;
            invalidate_page_and_rethrow( k );
        }
        p->mask = 0;
        p->next = __null;
    }

    if( tail_counter!=k ) spin_wait_until_my_turn( tail_counter, k, *base.my_rep );
    call_itt_notify(acquired, &tail_counter);

    if( p ) {
        spin_mutex::scoped_lock lock( page_mutex );
        page* q = tail_page;
        if( is_valid_page(q) )
            q->next = p;
        else
            head_page = p;
        tail_page = p;
    } else {
        p = tail_page;
    }
    try {
        copy_item( *p, index, item );

        itt_hide_store_word(p->mask, p->mask | uintptr_t(1)<<index);
        call_itt_notify(releasing, &tail_counter);
        tail_counter += concurrent_queue_rep_base::n_queue;
    } catch(...) {
        ++base.my_rep->n_invalid_entries;
        call_itt_notify(releasing, &tail_counter);
        tail_counter += concurrent_queue_rep_base::n_queue;
        throw;
    }
}

template<typename T>
bool micro_queue<T>::pop( void* dst, ticket k, concurrent_queue_base_v3<T>& base ) {
    k &= -concurrent_queue_rep_base::n_queue;
    if( head_counter!=k ) spin_wait_until_eq( head_counter, k );
    call_itt_notify(acquired, &head_counter);
    if( tail_counter==k ) spin_wait_while_eq( tail_counter, k );
    call_itt_notify(acquired, &tail_counter);
    page& p = *head_page;
    ((void)0);
    size_t index = modulo_power_of_two( k/concurrent_queue_rep_base::n_queue, base.my_rep->items_per_page );
    bool success = false;
    {
        micro_queue_pop_finalizer<T> finalizer( *this, base, k+concurrent_queue_rep_base::n_queue, index==base.my_rep->items_per_page-1 ? &p : __null );
        if( p.mask & uintptr_t(1)<<index ) {
            success = true;
            assign_and_destroy_item( dst, p, index );
        } else {
            --base.my_rep->n_invalid_entries;
        }
    }
    return success;
}

template<typename T>
micro_queue<T>& micro_queue<T>::assign( const micro_queue<T>& src, concurrent_queue_base_v3<T>& base ) {
    head_counter = src.head_counter;
    tail_counter = src.tail_counter;
    page_mutex = src.page_mutex;

    const page* srcp = src.head_page;
    if( is_valid_page(srcp) ) {
        ticket g_index = head_counter;
        try {
            size_t n_items = (tail_counter-head_counter)/concurrent_queue_rep_base::n_queue;
            size_t index = modulo_power_of_two( head_counter/concurrent_queue_rep_base::n_queue, base.my_rep->items_per_page );
            size_t end_in_first_page = (index+n_items<base.my_rep->items_per_page)?(index+n_items):base.my_rep->items_per_page;

            head_page = make_copy( base, srcp, index, end_in_first_page, g_index );
            page* cur_page = head_page;

            if( srcp != src.tail_page ) {
                for( srcp = srcp->next; srcp!=src.tail_page; srcp=srcp->next ) {
                    cur_page->next = make_copy( base, srcp, 0, base.my_rep->items_per_page, g_index );
                    cur_page = cur_page->next;
                }

                ((void)0);
                size_t last_index = modulo_power_of_two( tail_counter/concurrent_queue_rep_base::n_queue, base.my_rep->items_per_page );
                if( last_index==0 ) last_index = base.my_rep->items_per_page;

                cur_page->next = make_copy( base, srcp, 0, last_index, g_index );
                cur_page = cur_page->next;
            }
            tail_page = cur_page;
        } catch(...) {
            invalidate_page_and_rethrow( g_index );
        }
    } else {
        head_page = tail_page = __null;
    }
    return *this;
}

template<typename T>
void micro_queue<T>::invalidate_page_and_rethrow( ticket k ) {

    page* invalid_page = (page*)uintptr_t(1);
    {
        spin_mutex::scoped_lock lock( page_mutex );
        itt_store_word_with_release(tail_counter, k+concurrent_queue_rep_base::n_queue+1);
        page* q = tail_page;
        if( is_valid_page(q) )
            q->next = invalid_page;
        else
            head_page = invalid_page;
        tail_page = invalid_page;
    }
    throw;
}

template<typename T>
concurrent_queue_rep_base::page* micro_queue<T>::make_copy( concurrent_queue_base_v3<T>& base, const concurrent_queue_rep_base::page* src_page, size_t begin_in_page, size_t end_in_page, ticket& g_index ) {
    concurrent_queue_page_allocator& pa = base;
    page* new_page = pa.allocate_page();
    new_page->next = __null;
    new_page->mask = src_page->mask;
    for( ; begin_in_page!=end_in_page; ++begin_in_page, ++g_index )
        if( new_page->mask & uintptr_t(1)<<begin_in_page )
            copy_item( *new_page, begin_in_page, *src_page, begin_in_page );
    return new_page;
}

template<typename T>
class micro_queue_pop_finalizer: no_copy {
    typedef concurrent_queue_rep_base::page page;
    ticket my_ticket;
    micro_queue<T>& my_queue;
    page* my_page;
    concurrent_queue_page_allocator& allocator;
public:
    micro_queue_pop_finalizer( micro_queue<T>& queue, concurrent_queue_base_v3<T>& b, ticket k, page* p ) :
        my_ticket(k), my_queue(queue), my_page(p), allocator(b)
    {}
    ~micro_queue_pop_finalizer() ;
};

template<typename T>
micro_queue_pop_finalizer<T>::~micro_queue_pop_finalizer() {
    page* p = my_page;
    if( is_valid_page(p) ) {
        spin_mutex::scoped_lock lock( my_queue.page_mutex );
        page* q = p->next;
        my_queue.head_page = q;
        if( !is_valid_page(q) ) {
            my_queue.tail_page = __null;
        }
    }
    itt_store_word_with_release(my_queue.head_counter, my_ticket);
    if( is_valid_page(p) ) {
        allocator.deallocate_page( p );
    }
}





template<typename T> class concurrent_queue_iterator_rep ;
template<typename T> class concurrent_queue_iterator_base_v3;





template<typename T>
struct concurrent_queue_rep : public concurrent_queue_rep_base {
    micro_queue<T> array[n_queue];


    static size_t index( ticket k ) {
        return k*phi%n_queue;
    }

    micro_queue<T>& choose( ticket k ) {

        return array[index(k)];
    }
};






template<typename T>
class concurrent_queue_base_v3: public concurrent_queue_page_allocator {

    concurrent_queue_rep<T>* my_rep;

    friend struct concurrent_queue_rep<T>;
    friend class micro_queue<T>;
    friend class concurrent_queue_iterator_rep<T>;
    friend class concurrent_queue_iterator_base_v3<T>;

protected:
    typedef typename concurrent_queue_rep<T>::page page;

private:
    typedef typename micro_queue<T>::padded_page padded_page;

                   virtual page *allocate_page() {
        concurrent_queue_rep<T>& r = *my_rep;
        size_t n = sizeof(padded_page) + (r.items_per_page-1)*sizeof(T);
        return reinterpret_cast<page*>(allocate_block ( n ));
    }

                   virtual void deallocate_page( concurrent_queue_rep_base::page *p ) {
        concurrent_queue_rep<T>& r = *my_rep;
        size_t n = sizeof(padded_page) + (r.items_per_page-1)*sizeof(T);
        deallocate_block( reinterpret_cast<void*>(p), n );
    }


    virtual void *allocate_block( size_t n ) = 0;


    virtual void deallocate_block( void *p, size_t n ) = 0;

protected:
    concurrent_queue_base_v3();

                   virtual ~concurrent_queue_base_v3() {





        cache_aligned_allocator<concurrent_queue_rep<T> >().deallocate(my_rep,1);
    }


    void internal_push( const void* src ) {
        concurrent_queue_rep<T>& r = *my_rep;
        ticket k = r.tail_counter++;
        r.choose(k).push( src, k, *this );
    }



    bool internal_try_pop( void* dst ) ;


    size_t internal_size() const ;


    bool internal_empty() const ;



    void internal_finish_clear() ;


    void internal_throw_exception() const {
        throw_exception( eid_bad_alloc );
    }


    void assign( const concurrent_queue_base_v3& src ) ;
};

template<typename T>
concurrent_queue_base_v3<T>::concurrent_queue_base_v3() {
    const size_t item_size = sizeof(T);
    my_rep = cache_aligned_allocator<concurrent_queue_rep<T> >().allocate(1);
    ((void)0);
    ((void)0);
    ((void)0);
    ((void)0);
    memset(my_rep,0,sizeof(concurrent_queue_rep<T>));
    my_rep->item_size = item_size;
    my_rep->items_per_page = item_size<= 8 ? 32 :
                             item_size<= 16 ? 16 :
                             item_size<= 32 ? 8 :
                             item_size<= 64 ? 4 :
                             item_size<=128 ? 2 :
                             1;
}

template<typename T>
bool concurrent_queue_base_v3<T>::internal_try_pop( void* dst ) {
    concurrent_queue_rep<T>& r = *my_rep;
    ticket k;
    do {
        k = r.head_counter;
        for(;;) {
            if( (ptrdiff_t)(r.tail_counter-k)<=0 ) {

                return false;
            }

            ticket tk=k;




            k = r.head_counter.compare_and_swap( tk+1, tk );



            if( k==tk )
                break;

        }
    } while( !r.choose( k ).pop( dst, k, *this ) );
    return true;
}

template<typename T>
size_t concurrent_queue_base_v3<T>::internal_size() const {
    concurrent_queue_rep<T>& r = *my_rep;
    ((void)0);
    ticket hc = r.head_counter;
    size_t nie = r.n_invalid_entries;
    ticket tc = r.tail_counter;
    ((void)0);
    ptrdiff_t sz = tc-hc-nie;
    return sz<0 ? 0 : size_t(sz);
}

template<typename T>
bool concurrent_queue_base_v3<T>::internal_empty() const {
    concurrent_queue_rep<T>& r = *my_rep;
    ticket tc = r.tail_counter;
    ticket hc = r.head_counter;

    return tc==r.tail_counter && tc==hc+r.n_invalid_entries ;
}

template<typename T>
void concurrent_queue_base_v3<T>::internal_finish_clear() {
    concurrent_queue_rep<T>& r = *my_rep;
    size_t nq = r.n_queue;
    for( size_t i=0; i<nq; ++i ) {
        page* tp = r.array[i].tail_page;
        if( is_valid_page(tp) ) {
            ((void)0);
            deallocate_page( tp );
            r.array[i].tail_page = __null;
        } else
            ((void)0);
    }
}

template<typename T>
void concurrent_queue_base_v3<T>::assign( const concurrent_queue_base_v3& src ) {
    concurrent_queue_rep<T>& r = *my_rep;
    r.items_per_page = src.my_rep->items_per_page;


    r.head_counter = src.my_rep->head_counter;
    r.tail_counter = src.my_rep->tail_counter;
    r.n_invalid_entries = src.my_rep->n_invalid_entries;


    for( size_t i = 0; i<r.n_queue; ++i )
        r.array[i].assign( src.my_rep->array[i], *this);

    ((void)0);

}

template<typename Container, typename Value> class concurrent_queue_iterator;

template<typename T>
class concurrent_queue_iterator_rep: no_assign {
    typedef typename micro_queue<T>::padded_page padded_page;
public:
    ticket head_counter;
    const concurrent_queue_base_v3<T>& my_queue;
    typename concurrent_queue_base_v3<T>::page* array[concurrent_queue_rep<T>::n_queue];
    concurrent_queue_iterator_rep( const concurrent_queue_base_v3<T>& queue ) :
        head_counter(queue.my_rep->head_counter),
        my_queue(queue)
    {
        for( size_t k=0; k<concurrent_queue_rep<T>::n_queue; ++k )
            array[k] = queue.my_rep->array[k].head_page;
    }


    bool get_item( T*& item, size_t k ) ;
};

template<typename T>
bool concurrent_queue_iterator_rep<T>::get_item( T*& item, size_t k ) {
    if( k==my_queue.my_rep->tail_counter ) {
        item = __null;
        return true;
    } else {
        typename concurrent_queue_base_v3<T>::page* p = array[concurrent_queue_rep<T>::index(k)];
        ((void)0);
        size_t i = modulo_power_of_two( k/concurrent_queue_rep<T>::n_queue, my_queue.my_rep->items_per_page );
        item = &micro_queue<T>::get_ref(*p,i);
        return (p->mask & uintptr_t(1)<<i)!=0;
    }
}



template<typename Value>
class concurrent_queue_iterator_base_v3 : no_assign {


    concurrent_queue_iterator_rep<Value>* my_rep;

    template<typename C, typename T, typename U>
    friend bool operator==( const concurrent_queue_iterator<C,T>& i, const concurrent_queue_iterator<C,U>& j );

    template<typename C, typename T, typename U>
    friend bool operator!=( const concurrent_queue_iterator<C,T>& i, const concurrent_queue_iterator<C,U>& j );
protected:

    Value* my_item;


    concurrent_queue_iterator_base_v3() : my_rep(__null), my_item(__null) {



    }


    concurrent_queue_iterator_base_v3( const concurrent_queue_iterator_base_v3& i )
    : no_assign(), my_rep(__null), my_item(__null) {
        assign(i);
    }


    concurrent_queue_iterator_base_v3( const concurrent_queue_base_v3<Value>& queue ) ;


    void assign( const concurrent_queue_iterator_base_v3<Value>& other ) ;


    void advance() ;


    ~concurrent_queue_iterator_base_v3() {
        cache_aligned_allocator<concurrent_queue_iterator_rep<Value> >().deallocate(my_rep, 1);
        my_rep = __null;
    }
};

template<typename Value>
concurrent_queue_iterator_base_v3<Value>::concurrent_queue_iterator_base_v3( const concurrent_queue_base_v3<Value>& queue ) {
    my_rep = cache_aligned_allocator<concurrent_queue_iterator_rep<Value> >().allocate(1);
    new( my_rep ) concurrent_queue_iterator_rep<Value>(queue);
    size_t k = my_rep->head_counter;
    if( !my_rep->get_item(my_item, k) ) advance();
}

template<typename Value>
void concurrent_queue_iterator_base_v3<Value>::assign( const concurrent_queue_iterator_base_v3<Value>& other ) {
    if( my_rep!=other.my_rep ) {
        if( my_rep ) {
            cache_aligned_allocator<concurrent_queue_iterator_rep<Value> >().deallocate(my_rep, 1);
            my_rep = __null;
        }
        if( other.my_rep ) {
            my_rep = cache_aligned_allocator<concurrent_queue_iterator_rep<Value> >().allocate(1);
            new( my_rep ) concurrent_queue_iterator_rep<Value>( *other.my_rep );
        }
    }
    my_item = other.my_item;
}

template<typename Value>
void concurrent_queue_iterator_base_v3<Value>::advance() {
    ((void)0);
    size_t k = my_rep->head_counter;
    const concurrent_queue_base_v3<Value>& queue = my_rep->my_queue;





    size_t i = modulo_power_of_two( k/concurrent_queue_rep<Value>::n_queue, queue.my_rep->items_per_page );
    if( i==queue.my_rep->items_per_page-1 ) {
        typename concurrent_queue_base_v3<Value>::page*& root = my_rep->array[concurrent_queue_rep<Value>::index(k)];
        root = root->next;
    }

    my_rep->head_counter = ++k;
    if( !my_rep->get_item(my_item, k) ) advance();
}



template<typename T> struct tbb_remove_cv {typedef T type;};
template<typename T> struct tbb_remove_cv<const T> {typedef T type;};
template<typename T> struct tbb_remove_cv<volatile T> {typedef T type;};
template<typename T> struct tbb_remove_cv<const volatile T> {typedef T type;};




template<typename Container, typename Value>
class concurrent_queue_iterator: public concurrent_queue_iterator_base_v3<typename tbb_remove_cv<Value>::type>,
        public std::iterator<std::forward_iterator_tag,Value> {

    template<typename T, class A>
    friend class ::tbb::strict_ppl::concurrent_queue;




    concurrent_queue_iterator( const concurrent_queue_base_v3<Value>& queue ) :
        concurrent_queue_iterator_base_v3<typename tbb_remove_cv<Value>::type>(queue)
    {
    }

public:
    concurrent_queue_iterator() {}

    concurrent_queue_iterator( const concurrent_queue_iterator<Container,typename Container::value_type>& other ) :
        concurrent_queue_iterator_base_v3<typename tbb_remove_cv<Value>::type>(other)
    {}


    concurrent_queue_iterator& operator=( const concurrent_queue_iterator& other ) {
        this->assign(other);
        return *this;
    }


    Value& operator*() const {
        return *static_cast<Value*>(this->my_item);
    }

    Value* operator->() const {return &operator*();}


    concurrent_queue_iterator& operator++() {
        this->advance();
        return *this;
    }


    Value* operator++(int) {
        Value* result = &operator*();
        operator++();
        return result;
    }
};


template<typename C, typename T, typename U>
bool operator==( const concurrent_queue_iterator<C,T>& i, const concurrent_queue_iterator<C,U>& j ) {
    return i.my_item==j.my_item;
}

template<typename C, typename T, typename U>
bool operator!=( const concurrent_queue_iterator<C,T>& i, const concurrent_queue_iterator<C,U>& j ) {
    return i.my_item!=j.my_item;
}

}



}


namespace internal {

class concurrent_queue_rep;
class concurrent_queue_iterator_rep;
class concurrent_queue_iterator_base_v3;
template<typename Container, typename Value> class concurrent_queue_iterator;




class concurrent_queue_base_v3: no_copy {

    concurrent_queue_rep* my_rep;

    friend class concurrent_queue_rep;
    friend struct micro_queue;
    friend class micro_queue_pop_finalizer;
    friend class concurrent_queue_iterator_rep;
    friend class concurrent_queue_iterator_base_v3;
protected:

    struct page {
        page* next;
        uintptr_t mask;
    };


    ptrdiff_t my_capacity;


    size_t items_per_page;


    size_t item_size;


public:

    template<typename T>
    struct padded_page: page {

        padded_page();

        void operator=( const padded_page& );

        T last;
    };

private:
    virtual void copy_item( page& dst, size_t index, const void* src ) = 0;
    virtual void assign_and_destroy_item( void* dst, page& src, size_t index ) = 0;
protected:
                          concurrent_queue_base_v3( size_t item_size );
    virtual ~concurrent_queue_base_v3();


    void internal_push( const void* src );


    void internal_pop( void* dst );


    void internal_abort();


    bool internal_push_if_not_full( const void* src );



    bool internal_pop_if_present( void* dst );


    ptrdiff_t internal_size() const;


    bool internal_empty() const;


    void internal_set_capacity( ptrdiff_t capacity, size_t element_size );


    virtual page *allocate_page() = 0;


    virtual void deallocate_page( page *p ) = 0;



    void internal_finish_clear() ;


    void internal_throw_exception() const;


    void assign( const concurrent_queue_base_v3& src ) ;

private:
    virtual void copy_page_item( page& dst, size_t dindex, const page& src, size_t sindex ) = 0;
};



class concurrent_queue_iterator_base_v3 {


    concurrent_queue_iterator_rep* my_rep;

    template<typename C, typename T, typename U>
    friend bool operator==( const concurrent_queue_iterator<C,T>& i, const concurrent_queue_iterator<C,U>& j );

    template<typename C, typename T, typename U>
    friend bool operator!=( const concurrent_queue_iterator<C,T>& i, const concurrent_queue_iterator<C,U>& j );

    void initialize( const concurrent_queue_base_v3& queue, size_t offset_of_data );
protected:

    void* my_item;


    concurrent_queue_iterator_base_v3() : my_rep(__null), my_item(__null) {}


    concurrent_queue_iterator_base_v3( const concurrent_queue_iterator_base_v3& i ) : my_rep(__null), my_item(__null) {
        assign(i);
    }



                          concurrent_queue_iterator_base_v3( const concurrent_queue_base_v3& queue );


                          concurrent_queue_iterator_base_v3( const concurrent_queue_base_v3& queue, size_t offset_of_data );


    void assign( const concurrent_queue_iterator_base_v3& i );


    void advance();


                          ~concurrent_queue_iterator_base_v3();
};

typedef concurrent_queue_iterator_base_v3 concurrent_queue_iterator_base;




template<typename Container, typename Value>
class concurrent_queue_iterator: public concurrent_queue_iterator_base,
        public std::iterator<std::forward_iterator_tag,Value> {


    template<typename T, class A>
    friend class ::tbb::concurrent_bounded_queue;

    template<typename T, class A>
    friend class ::tbb::deprecated::concurrent_queue;




    concurrent_queue_iterator( const concurrent_queue_base_v3& queue ) :
        concurrent_queue_iterator_base_v3(queue,((ptrdiff_t)&(reinterpret_cast<concurrent_queue_base_v3::padded_page<Value>*>(0x1000)->last) - 0x1000))
    {
    }

public:
    concurrent_queue_iterator() {}



    concurrent_queue_iterator( const concurrent_queue_iterator<Container,typename Container::value_type>& other ) :
        concurrent_queue_iterator_base_v3(other)
    {}


    concurrent_queue_iterator& operator=( const concurrent_queue_iterator& other ) {
        assign(other);
        return *this;
    }


    Value& operator*() const {
        return *static_cast<Value*>(my_item);
    }

    Value* operator->() const {return &operator*();}


    concurrent_queue_iterator& operator++() {
        advance();
        return *this;
    }


    Value* operator++(int) {
        Value* result = &operator*();
        operator++();
        return result;
    }
};


template<typename C, typename T, typename U>
bool operator==( const concurrent_queue_iterator<C,T>& i, const concurrent_queue_iterator<C,U>& j ) {
    return i.my_item==j.my_item;
}

template<typename C, typename T, typename U>
bool operator!=( const concurrent_queue_iterator<C,T>& i, const concurrent_queue_iterator<C,U>& j ) {
    return i.my_item!=j.my_item;
}

}



}
# 33 "../../include/tbb/concurrent_queue.h" 2

namespace tbb {

namespace strict_ppl {





template<typename T, typename A = cache_aligned_allocator<T> >
class concurrent_queue: public internal::concurrent_queue_base_v3<T> {
    template<typename Container, typename Value> friend class internal::concurrent_queue_iterator;


    typedef typename A::template rebind<char>::other page_allocator_type;
    page_allocator_type my_allocator;


                 virtual void *allocate_block( size_t n ) {
        void *b = reinterpret_cast<void*>(my_allocator.allocate( n ));
        if( !b )
            internal::throw_exception(internal::eid_bad_alloc);
        return b;
    }


                 virtual void deallocate_block( void *b, size_t n ) {
        my_allocator.deallocate( reinterpret_cast<char*>(b), n );
    }

public:

    typedef T value_type;


    typedef T& reference;


    typedef const T& const_reference;


    typedef size_t size_type;


    typedef ptrdiff_t difference_type;


    typedef A allocator_type;


    explicit concurrent_queue(const allocator_type& a = allocator_type()) :
        my_allocator( a )
    {
    }


    template<typename InputIterator>
    concurrent_queue( InputIterator begin, InputIterator end, const allocator_type& a = allocator_type()) :
        my_allocator( a )
    {
        for( ; begin != end; ++begin )
            this->internal_push(&*begin);
    }


    concurrent_queue( const concurrent_queue& src, const allocator_type& a = allocator_type()) :
        internal::concurrent_queue_base_v3<T>(), my_allocator( a )
    {
        this->assign( src );
    }


    ~concurrent_queue();


    void push( const T& source ) {
        this->internal_push( &source );
    }




    bool try_pop( T& result ) {
        return this->internal_try_pop( &result );
    }


    size_type unsafe_size() const {return this->internal_size();}


    bool empty() const {return this->internal_empty();}


    void clear() ;


    allocator_type get_allocator() const { return this->my_allocator; }

    typedef internal::concurrent_queue_iterator<concurrent_queue,T> iterator;
    typedef internal::concurrent_queue_iterator<concurrent_queue,const T> const_iterator;




    iterator unsafe_begin() {return iterator(*this);}
    iterator unsafe_end() {return iterator();}
    const_iterator unsafe_begin() const {return const_iterator(*this);}
    const_iterator unsafe_end() const {return const_iterator();}
} ;

template<typename T, class A>
concurrent_queue<T,A>::~concurrent_queue() {
    clear();
    this->internal_finish_clear();
}

template<typename T, class A>
void concurrent_queue<T,A>::clear() {
    while( !empty() ) {
        T value;
        this->internal_try_pop(&value);
    }
}

}







template<typename T, class A = cache_aligned_allocator<T> >
class concurrent_bounded_queue: public internal::concurrent_queue_base_v3 {
    template<typename Container, typename Value> friend class internal::concurrent_queue_iterator;


    typedef typename A::template rebind<char>::other page_allocator_type;
    page_allocator_type my_allocator;

    typedef typename concurrent_queue_base_v3::padded_page<T> padded_page;


    class destroyer: internal::no_copy {
        T& my_value;
    public:
        destroyer( T& value ) : my_value(value) {}
        ~destroyer() {my_value.~T();}
    };

    T& get_ref( page& p, size_t index ) {
        ((void)0);
        return (&static_cast<padded_page*>(static_cast<void*>(&p))->last)[index];
    }

                 virtual void copy_item( page& dst, size_t index, const void* src ) {
        new( &get_ref(dst,index) ) T(*static_cast<const T*>(src));
    }

                 virtual void copy_page_item( page& dst, size_t dindex, const page& src, size_t sindex ) {
        new( &get_ref(dst,dindex) ) T( get_ref( const_cast<page&>(src), sindex ) );
    }

                 virtual void assign_and_destroy_item( void* dst, page& src, size_t index ) {
        T& from = get_ref(src,index);
        destroyer d(from);
        *static_cast<T*>(dst) = from;
    }

                 virtual page *allocate_page() {
        size_t n = sizeof(padded_page) + (items_per_page-1)*sizeof(T);
        page *p = reinterpret_cast<page*>(my_allocator.allocate( n ));
        if( !p )
            internal::throw_exception(internal::eid_bad_alloc);
        return p;
    }

                 virtual void deallocate_page( page *p ) {
        size_t n = sizeof(padded_page) + (items_per_page-1)*sizeof(T);
        my_allocator.deallocate( reinterpret_cast<char*>(p), n );
    }

public:

    typedef T value_type;


    typedef A allocator_type;


    typedef T& reference;


    typedef const T& const_reference;




    typedef std::ptrdiff_t size_type;


    typedef std::ptrdiff_t difference_type;


    explicit concurrent_bounded_queue(const allocator_type& a = allocator_type()) :
        concurrent_queue_base_v3( sizeof(T) ), my_allocator( a )
    {
    }


    concurrent_bounded_queue( const concurrent_bounded_queue& src, const allocator_type& a = allocator_type()) :
        concurrent_queue_base_v3( sizeof(T) ), my_allocator( a )
    {
        assign( src );
    }


    template<typename InputIterator>
    concurrent_bounded_queue( InputIterator begin, InputIterator end, const allocator_type& a = allocator_type()) :
        concurrent_queue_base_v3( sizeof(T) ), my_allocator( a )
    {
        for( ; begin != end; ++begin )
            internal_push_if_not_full(&*begin);
    }


    ~concurrent_bounded_queue();


    void push( const T& source ) {
        internal_push( &source );
    }



    void pop( T& destination ) {
        internal_pop( &destination );
    }



    void abort() {
        internal_abort();
    }





    bool try_push( const T& source ) {
        return internal_push_if_not_full( &source );
    }




    bool try_pop( T& destination ) {
        return internal_pop_if_present( &destination );
    }





    size_type size() const {return internal_size();}


    bool empty() const {return internal_empty();}


    size_type capacity() const {
        return my_capacity;
    }




    void set_capacity( size_type new_capacity ) {
        internal_set_capacity( new_capacity, sizeof(T) );
    }


    allocator_type get_allocator() const { return this->my_allocator; }


    void clear() ;

    typedef internal::concurrent_queue_iterator<concurrent_bounded_queue,T> iterator;
    typedef internal::concurrent_queue_iterator<concurrent_bounded_queue,const T> const_iterator;




    iterator unsafe_begin() {return iterator(*this);}
    iterator unsafe_end() {return iterator();}
    const_iterator unsafe_begin() const {return const_iterator(*this);}
    const_iterator unsafe_end() const {return const_iterator();}

};

template<typename T, class A>
concurrent_bounded_queue<T,A>::~concurrent_bounded_queue() {
    clear();
    internal_finish_clear();
}

template<typename T, class A>
void concurrent_bounded_queue<T,A>::clear() {
    while( !empty() ) {
        T value;
        internal_pop_if_present(&value);
    }
}

namespace deprecated {







template<typename T, class A = cache_aligned_allocator<T> >
class concurrent_queue: public concurrent_bounded_queue<T,A> {

    template<typename Container, typename Value> friend class internal::concurrent_queue_iterator;


public:

    explicit concurrent_queue(const A& a = A()) :
        concurrent_bounded_queue<T,A>( a )
    {
    }


    concurrent_queue( const concurrent_queue& src, const A& a = A()) :
        concurrent_bounded_queue<T,A>( src, a )
    {
    }


    template<typename InputIterator>
    concurrent_queue( InputIterator b , InputIterator e , const A& a = A()) :
        concurrent_bounded_queue<T,A>( b, e, a )
    {
    }




    bool push_if_not_full( const T& source ) {
        return this->try_push( source );
    }






    bool pop_if_present( T& destination ) {
        return this->try_pop( destination );
    }

    typedef typename concurrent_bounded_queue<T,A>::iterator iterator;
    typedef typename concurrent_bounded_queue<T,A>::const_iterator const_iterator;




    iterator begin() {return this->unsafe_begin();}
    iterator end() {return this->unsafe_end();}
    const_iterator begin() const {return this->unsafe_begin();}
    const_iterator end() const {return this->unsafe_end();}
};

}





using strict_ppl::concurrent_queue;


}
# 33 "../../src/test/test_concurrent_queue.cpp" 2
# 1 "../../include/tbb/tick_count.h" 1
# 37 "../../include/tbb/tick_count.h"
# 1 "/usr/include/c++/4.4/ctime" 1 3
# 41 "/usr/include/c++/4.4/ctime" 3
# 41 "/usr/include/c++/4.4/ctime" 3


# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 44 "/usr/include/c++/4.4/ctime" 2 3
# 60 "/usr/include/c++/4.4/ctime" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::clock_t;
  using ::time_t;
  using ::tm;

  using ::clock;
  using ::difftime;
  using ::mktime;
  using ::time;
  using ::asctime;
  using ::ctime;
  using ::gmtime;
  using ::localtime;
  using ::strftime;

}
# 38 "../../include/tbb/tick_count.h" 2




namespace tbb {



class tick_count {
public:

    class interval_t {
        long long value;
        explicit interval_t( long long value_ ) : value(value_) {}
    public:

        interval_t() : value(0) {};


        explicit interval_t( double sec );


        double seconds() const;

        friend class tbb::tick_count;


        friend interval_t operator-( const tick_count& t1, const tick_count& t0 );


        friend interval_t operator+( const interval_t& i, const interval_t& j ) {
            return interval_t(i.value+j.value);
        }


        friend interval_t operator-( const interval_t& i, const interval_t& j ) {
            return interval_t(i.value-j.value);
        }


        interval_t& operator+=( const interval_t& i ) {value += i.value; return *this;}


        interval_t& operator-=( const interval_t& i ) {value -= i.value; return *this;}
    private:
        static long long ticks_per_second(){






            return static_cast<long long>(1E9);



        }
    };


    tick_count() : my_count(0) {};


    static tick_count now();


    friend interval_t operator-( const tick_count& t1, const tick_count& t0 );


    static double resolution() { return 1.0 / interval_t::ticks_per_second(); }

private:
    long long my_count;
};

inline tick_count tick_count::now() {
    tick_count result;






    struct timespec ts;
    int status = clock_gettime( 0, &ts );
    ((void)(1 && (status==0)));
    result.my_count = static_cast<long long>(1000000000UL)*static_cast<long long>(ts.tv_sec) + static_cast<long long>(ts.tv_nsec);






    return result;
}

inline tick_count::interval_t::interval_t( double sec ) {
    value = static_cast<long long>(sec*interval_t::ticks_per_second());
}

inline tick_count::interval_t operator-( const tick_count& t1, const tick_count& t0 ) {
    return tick_count::interval_t( t1.my_count-t0.my_count );
}

inline double tick_count::interval_t::seconds() const {
    return value*tick_count::resolution();
}

}
# 34 "../../src/test/test_concurrent_queue.cpp" 2
# 1 "../../src/test/harness.h" 1
# 42 "../../src/test/harness.h"
namespace Harness {
    enum TestResult {
        Done,
        Skipped,
        Unknown
    };
}
# 63 "../../src/test/harness.h"
int TestMain ();







# 1 "/usr/include/c++/4.4/cstdlib" 1 3
# 41 "/usr/include/c++/4.4/cstdlib" 3
# 41 "/usr/include/c++/4.4/cstdlib" 3



# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 45 "/usr/include/c++/4.4/cstdlib" 2 3
# 68 "/usr/include/c++/4.4/cstdlib" 3
# 1 "/usr/include/stdlib.h" 1 3 4
# 34 "/usr/include/stdlib.h" 3 4
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
# 321 "/usr/include/stdlib.h" 3 4
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
# 26 "/usr/include/alloca.h" 3 4
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

      if (__builtin_object_size (__resolved, 2 > 1) < 4096)
 return __realpath_chk_warn (__name, __resolved, __builtin_object_size (__resolved, 2 > 1));

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
# 69 "/usr/include/c++/4.4/cstdlib" 2 3
# 100 "/usr/include/c++/4.4/cstdlib" 3
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
# 157 "/usr/include/c++/4.4/cstdlib" 3
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
# 190 "/usr/include/c++/4.4/cstdlib" 3
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
# 71 "../../src/test/harness.h" 2





# 1 "/usr/include/c++/4.4/cstring" 1 3
# 41 "/usr/include/c++/4.4/cstring" 3
# 41 "/usr/include/c++/4.4/cstring" 3



# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 45 "/usr/include/c++/4.4/cstring" 2 3
# 77 "../../src/test/harness.h" 2
# 113 "../../src/test/harness.h"
# 1 "/usr/include/sys/utsname.h" 1 3 4
# 27 "/usr/include/sys/utsname.h" 3 4
extern "C" {


# 1 "/usr/include/bits/utsname.h" 1 3 4
# 30 "/usr/include/sys/utsname.h" 2 3 4
# 48 "/usr/include/sys/utsname.h" 3 4
struct utsname
  {

    char sysname[65];


    char nodename[65];


    char release[65];

    char version[65];


    char machine[65];




    char domainname[65];




  };
# 81 "/usr/include/sys/utsname.h" 3 4
extern int uname (struct utsname *__name) throw ();


}
# 114 "../../src/test/harness.h" 2
# 1 "/usr/include/errno.h" 1 3 4
# 115 "../../src/test/harness.h" 2




# 1 "/usr/include/execinfo.h" 1 3 4
# 23 "/usr/include/execinfo.h" 3 4
extern "C" {



extern int backtrace (void **__array, int __size) __attribute__ ((__nonnull__ (1)));




extern char **backtrace_symbols (void *const *__array, int __size)
     throw () __attribute__ ((__nonnull__ (1)));




extern void backtrace_symbols_fd (void *const *__array, int __size, int __fd)
     throw () __attribute__ ((__nonnull__ (1)));

}
# 120 "../../src/test/harness.h" 2



# 1 "../../src/test/harness_report.h" 1
# 52 "../../src/test/harness_report.h"
# 1 "/usr/include/c++/4.4/cstdio" 1 3
# 41 "/usr/include/c++/4.4/cstdio" 3
# 41 "/usr/include/c++/4.4/cstdio" 3



# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 45 "/usr/include/c++/4.4/cstdio" 2 3
# 1 "/usr/include/stdio.h" 1 3 4
# 29 "/usr/include/stdio.h" 3 4
extern "C" {
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 20 "/usr/include/_G_config.h" 3 4
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
# 46 "/usr/include/c++/4.4/cstdio" 2 3
# 93 "/usr/include/c++/4.4/cstdio" 3
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
# 150 "/usr/include/c++/4.4/cstdio" 3
namespace __gnu_cxx __attribute__ ((__visibility__ ("default"))) {
# 165 "/usr/include/c++/4.4/cstdio" 3
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
# 53 "../../src/test/harness_report.h" 2


# 1 "/usr/include/c++/4.4/cstdarg" 1 3
# 41 "/usr/include/c++/4.4/cstdarg" 3
# 41 "/usr/include/c++/4.4/cstdarg" 3
# 54 "/usr/include/c++/4.4/cstdarg" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::va_list;

}
# 56 "../../src/test/harness_report.h" 2
# 74 "../../src/test/harness_report.h"
namespace Harness {
    namespace internal {


    struct TbbHarnessReporter {
        void Report ( const char* msg ) {
            printf( "%s", msg );
            fflush(stdout);



        }
    };


    class Tracer {
        int m_flags;
        const char *m_file;
        const char *m_func;
        size_t m_line;

        TbbHarnessReporter m_reporter;

    public:
        enum {
            prefix = 1,
            need_lf = 2
        };

        Tracer* set_trace_info ( int flags, const char *file, size_t line, const char *func ) {
            m_flags = flags;
            m_line = line;
            m_file = file;
            m_func = func;
            return this;
        }

        void trace ( const char* fmt, ... ) {
            char msg[1024];
            char msg_fmt_buf[1024];
            const char *msg_fmt = fmt;
            if ( m_flags & prefix ) {
                snprintf (msg_fmt_buf, 1024, "[%s] %s", m_func, fmt);
                msg_fmt = msg_fmt_buf;
            }
            std::va_list argptr;
            __builtin_va_start(argptr, fmt);
            int len = vsnprintf (msg, 1024, msg_fmt, argptr);
            __builtin_va_end(argptr);
            if ( m_flags & need_lf &&
                 len < 1024 - 1 && msg_fmt[len-1] != '\n' )
            {
                msg[len] = '\n';
                msg[len + 1] = 0;
            }
            m_reporter.Report(msg);
        }
    };

    static Tracer tracer;

    template<int>
    bool not_the_first_call () {
        static bool first_call = false;
        bool res = first_call;
        first_call = true;
        return res;
    }

    }
}
# 124 "../../src/test/harness.h" 2
# 133 "../../src/test/harness.h"
# 1 "../../src/test/harness_assert.h" 1
# 38 "../../src/test/harness_assert.h"
void ReportError( const char* filename, int line, const char* expression, const char* message);
void ReportWarning( const char* filename, int line, const char* expression, const char* message);





template<typename T>
void AssertSameType( const T& , const T& ) {}
# 134 "../../src/test/harness.h" 2



        struct InitReporter {
            InitReporter() {



            ((7000 <= tbb::TBB_runtime_interface_version())?(void)0:ReportWarning("../../src/test/harness.h",142,"TBB_INTERFACE_VERSION <= tbb::TBB_runtime_interface_version()","runtime version mismatch"));
        }
        };
        static InitReporter InitReportError;


    typedef void (*test_error_extra_t)(void);
    static test_error_extra_t ErrorExtraCall;

    void SetHarnessErrorProcessing( test_error_extra_t extra_call ) {
        ErrorExtraCall = extra_call;
    }


    void ReportError( const char* filename, int line, const char* expression, const char * message ) {

        const int sz = 100;
        void *buff[sz];
        int n = backtrace(buff, sz);
        Harness::internal::tracer.set_trace_info(0, "../../src/test/harness.h", 161, __FUNCTION__)->trace("Call stack info (%d):\n", n);
        backtrace_symbols_fd(buff, n, fileno(stdout));
# 190 "../../src/test/harness.h"
        Harness::internal::tracer.set_trace_info(0, "../../src/test/harness.h", 190, __FUNCTION__)->trace("%s:%d, assertion %s: %s\n", filename, line, expression, message ? message : "failed" );


        if( ErrorExtraCall )
            (*ErrorExtraCall)();
        fflush(stdout); fflush(stderr);
# 207 "../../src/test/harness.h"
        abort();

    }

    void ReportWarning( const char* filename, int line, const char* expression, const char * message ) {
        Harness::internal::tracer.set_trace_info(0, "../../src/test/harness.h", 212, __FUNCTION__)->trace("Warning: %s:%d, assertion %s: %s\n", filename, line, expression, message ? message : "failed" );
    }
# 222 "../../src/test/harness.h"
namespace Harness {

    template<typename T, size_t N>
    inline size_t array_length(const T(&)[N])
    {
       return N;
    }
# 240 "../../src/test/harness.h"
}



# 1 "../../include/tbb/blocked_range.h" 1
# 34 "../../include/tbb/blocked_range.h"
namespace tbb {
# 47 "../../include/tbb/blocked_range.h"
template<typename Value>
class blocked_range {
public:



    typedef Value const_iterator;


    typedef std::size_t size_type;



    blocked_range() : my_end(), my_begin() {}


    blocked_range( Value begin_, Value end_, size_type grainsize_=1 ) :
        my_end(end_), my_begin(begin_), my_grainsize(grainsize_)
    {
        ((void)0);
    }


    const_iterator begin() const {return my_begin;}


    const_iterator end() const {return my_end;}



    size_type size() const {
        ((void)0);
        return size_type(my_end-my_begin);
    }


    size_type grainsize() const {return my_grainsize;}






    bool empty() const {return !(my_begin<my_end);}



    bool is_divisible() const {return my_grainsize<size();}




    blocked_range( blocked_range& r, split ) :
        my_end(r.my_end),
        my_begin(do_split(r)),
        my_grainsize(r.my_grainsize)
    {}

private:

    Value my_end;
    Value my_begin;
    size_type my_grainsize;



    static Value do_split( blocked_range& r ) {
        ((void)0);
        Value middle = r.my_begin + (r.my_end-r.my_begin)/2u;
        r.my_end = middle;
        return middle;
    }

    template<typename RowValue, typename ColValue>
    friend class blocked_range2d;

    template<typename RowValue, typename ColValue, typename PageValue>
    friend class blocked_range3d;
};

}
# 244 "../../src/test/harness.h" 2

    namespace Harness {
        template<typename T, size_t N>
        tbb::blocked_range<T*> make_blocked_range( T(& array)[N]){ return tbb::blocked_range<T*>(array, array + N);}
    }






static bool Verbose;






static int MinThread = 1;






static int MaxThread = 4;







static void ParseCommandLine( int argc, char* argv[] ) {
    if( !argc ) Harness::internal::tracer.set_trace_info(0, "../../src/test/harness.h", 278, __FUNCTION__)->trace("Command line with 0 arguments\n");
    int i = 1;
    if( i<argc ) {
        if( strncmp( argv[i], "-v", 2 )==0 ) {
            Verbose = true;
            ++i;
        }
    }
    if( i<argc ) {
        char* endptr;
        MinThread = strtol( argv[i], &endptr, 0 );
        if( *endptr==':' )
            MaxThread = strtol( endptr+1, &endptr, 0 );
        else if( *endptr=='\0' )
            MaxThread = MinThread;
        if( *endptr!='\0' ) {
            Harness::internal::tracer.set_trace_info(0, "../../src/test/harness.h", 294, __FUNCTION__)->trace("garbled nthread range\n");
            exit(1);
        }
        if( MinThread<0 ) {
            Harness::internal::tracer.set_trace_info(0, "../../src/test/harness.h", 298, __FUNCTION__)->trace("nthread must be nonnegative\n");
            exit(1);
        }
        if( MaxThread<MinThread ) {
            Harness::internal::tracer.set_trace_info(0, "../../src/test/harness.h", 302, __FUNCTION__)->trace("nthread range is backwards\n");
            exit(1);
        }
        ++i;
    }
# 315 "../../src/test/harness.h"
    if( i!=argc ) {
        Harness::internal::tracer.set_trace_info(0, "../../src/test/harness.h", 316, __FUNCTION__)->trace("Usage: %s [-v] [nthread|minthread:maxthread]\n", argv[0] );
        exit(1);
    }
}
# 338 "../../src/test/harness.h"
int main(int argc, char* argv[]) {
    ParseCommandLine( argc, argv );
# 380 "../../src/test/harness.h"
    int res = TestMain ();

    ((res==Harness::Done || res==Harness::Skipped)?(void)0:ReportError("../../src/test/harness.h",382,"res==Harness::Done || res==Harness::Skipped","Wrong return code by TestMain"));






    Harness::internal::tracer.set_trace_info(0, "../../src/test/harness.h", 389, __FUNCTION__)->trace( res==Harness::Done ? "done\n" : "skip\n" );

    return 0;
}




class NoAssign {

    void operator=( const NoAssign& );
public:


    NoAssign() {}

};


class NoCopy: NoAssign {

    NoCopy( const NoCopy& );
public:
    NoCopy() {}
};


template<typename Index, typename Body>
class NativeParallelForTask: NoCopy {
public:
    NativeParallelForTask( Index index_, const Body& body_ ) :
        index(index_),
        body(body_)
    {}


    void start() {
# 446 "../../src/test/harness.h"
        const size_t MByte = 1024*1024;



        const size_t stack_size = 2*MByte;



        pthread_attr_t attr_stack;
        int status = pthread_attr_init(&attr_stack);
        ((0==status)?(void)0:ReportError("../../src/test/harness.h",456,"0==status","NativeParallelFor: pthread_attr_init failed"));
        status = pthread_attr_setstacksize( &attr_stack, stack_size );
        ((0==status)?(void)0:ReportError("../../src/test/harness.h",458,"0==status","NativeParallelFor: pthread_attr_setstacksize failed"));
        status = pthread_create(&thread_id, &attr_stack, thread_function, this);
        ((0==status)?(void)0:ReportError("../../src/test/harness.h",460,"0==status","NativeParallelFor: pthread_create failed"));
        pthread_attr_destroy(&attr_stack);




    }


    void wait_to_finish() {





        int status = pthread_join( thread_id, __null );
        ((!status)?(void)0:ReportError("../../src/test/harness.h",476,"!status","pthread_join failed"));




    }

private:



    pthread_t thread_id;



    const Index index;


    const Body body;




    static void* thread_function(void* object)

    {
        NativeParallelForTask& self = *static_cast<NativeParallelForTask*>(object);
        (self.body)(self.index);
        return 0;
    }
};



template<typename Index, typename Body>
void NativeParallelFor( Index n, const Body& body ) {
    typedef NativeParallelForTask<Index,Body> task;

    if( n>0 ) {

        task* array = static_cast<task*>(operator new( n*sizeof(task) ));


        for( Index i=0; i!=n; ++i )
            new( &array[i] ) task(i,body);


        for( Index i=0; i!=n; ++i )
            array[i].start();


        for( Index i=n; i; --i ) {
            array[i-1].wait_to_finish();
            array[i-1].~task();
        }


        operator delete(array);
    }
}


template <typename T>
void zero_fill(void* array, size_t n) {
    memset(array, 0, sizeof(T)*n);
}
# 553 "../../src/test/harness.h"
template<typename T1, typename T2>
T1 min ( const T1& val1, const T2& val2 ) {
    return val1 < val2 ? val1 : val2;
}







template<typename T1, typename T2>
T1 max ( const T1& val1, const T2& val2 ) {
    return val1 < val2 ? val2 : val1;
}



inline unsigned LinuxKernelVersion()
{
    unsigned digit1, digit2, digit3;
    struct utsname utsnameBuf;

    if (-1 == uname(&utsnameBuf)) {
        Harness::internal::tracer.set_trace_info(0, "../../src/test/harness.h", 577, __FUNCTION__)->trace("Can't call uname: errno %d\n", (*__errno_location ()));
        exit(1);
    }
    if (3 != sscanf(utsnameBuf.release, "%u.%u.%u", &digit1, &digit2, &digit3)) {
        Harness::internal::tracer.set_trace_info(0, "../../src/test/harness.h", 581, __FUNCTION__)->trace("Unable to parse OS release '%s'\n", utsnameBuf.release);
        exit(1);
    }
    return 1000000*digit1+1000*digit2+digit3;
}


namespace Harness {



class NoAfterlife {
protected:
    enum state_t {
        LIVE=0x56781234,
        DEAD=0xDEADBEEF
    } m_state;

public:
    NoAfterlife() : m_state(LIVE) {}
    NoAfterlife( const NoAfterlife& src ) : m_state(LIVE) {
        ((src.IsLive())?(void)0:ReportError("../../src/test/harness.h",602,"src.IsLive()","Constructing from the dead source"));
    }
    ~NoAfterlife() {
        ((IsLive())?(void)0:ReportError("../../src/test/harness.h",605,"IsLive()","Repeated destructor call"));
        m_state = DEAD;
    }
    const NoAfterlife& operator=( const NoAfterlife& src ) {
        ((IsLive())?(void)0:ReportError("../../src/test/harness.h",609,"IsLive()",__null));
        ((src.IsLive())?(void)0:ReportError("../../src/test/harness.h",610,"src.IsLive()",__null));
        return *this;
    }
    void AssertLive() const {
        ((IsLive())?(void)0:ReportError("../../src/test/harness.h",614,"IsLive()","Already dead"));
    }
    bool IsLive() const {
        return m_state == LIVE;
    }
};
# 638 "../../src/test/harness.h"
    void Sleep ( int ms ) {
        timespec requested = { ms / 1000, (ms % 1000)*1000000 };
        timespec remaining = { 0, 0 };
        nanosleep(&requested, &remaining);
    }

    typedef pthread_t tid_t;
    tid_t CurrentTid () { return pthread_self(); }


}
# 35 "../../src/test/test_concurrent_queue.cpp" 2
# 1 "../../src/test/harness_allocator.h" 1
# 39 "../../src/test/harness_allocator.h"
# 1 "/usr/include/c++/4.4/memory" 1 3
# 47 "/usr/include/c++/4.4/memory" 3
# 47 "/usr/include/c++/4.4/memory" 3




# 1 "/usr/include/c++/4.4/bits/stl_construct.h" 1 3
# 62 "/usr/include/c++/4.4/bits/stl_construct.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {





  template<typename _T1, typename _T2>
    inline void
    _Construct(_T1* __p, const _T2& __value)
    {


      ::new(static_cast<void*>(__p)) _T1(__value);
    }




  template<typename _Tp>
    inline void
    _Destroy(_Tp* __pointer)
    { __pointer->~_Tp(); }

  template<bool>
    struct _Destroy_aux
    {
      template<typename _ForwardIterator>
        static void
        __destroy(_ForwardIterator __first, _ForwardIterator __last)
 {
   for (; __first != __last; ++__first)
     std::_Destroy(&*__first);
 }
    };

  template<>
    struct _Destroy_aux<true>
    {
      template<typename _ForwardIterator>
        static void
        __destroy(_ForwardIterator, _ForwardIterator) { }
    };






  template<typename _ForwardIterator>
    inline void
    _Destroy(_ForwardIterator __first, _ForwardIterator __last)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
                       _Value_type;
      std::_Destroy_aux<__has_trivial_destructor(_Value_type)>::
 __destroy(__first, __last);
    }







  template <typename _Tp> class allocator;

  template<typename _ForwardIterator, typename _Allocator>
    void
    _Destroy(_ForwardIterator __first, _ForwardIterator __last,
      _Allocator& __alloc)
    {
      for (; __first != __last; ++__first)
 __alloc.destroy(&*__first);
    }

  template<typename _ForwardIterator, typename _Tp>
    inline void
    _Destroy(_ForwardIterator __first, _ForwardIterator __last,
      allocator<_Tp>&)
    {
      _Destroy(__first, __last);
    }

}
# 52 "/usr/include/c++/4.4/memory" 2 3
# 1 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 1 3
# 60 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  template<bool>
    struct __uninitialized_copy
    {
      template<typename _InputIterator, typename _ForwardIterator>
        static _ForwardIterator
        uninitialized_copy(_InputIterator __first, _InputIterator __last,
      _ForwardIterator __result)
        {
   _ForwardIterator __cur = __result;
   try
     {
       for (; __first != __last; ++__first, ++__cur)
  ::new(static_cast<void*>(&*__cur)) typename
      iterator_traits<_ForwardIterator>::value_type(*__first);
       return __cur;
     }
   catch(...)
     {
       std::_Destroy(__result, __cur);
       throw;
     }
 }
    };

  template<>
    struct __uninitialized_copy<true>
    {
      template<typename _InputIterator, typename _ForwardIterator>
        static _ForwardIterator
        uninitialized_copy(_InputIterator __first, _InputIterator __last,
      _ForwardIterator __result)
        { return std::copy(__first, __last, __result); }
    };
# 105 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
  template<typename _InputIterator, typename _ForwardIterator>
    inline _ForwardIterator
    uninitialized_copy(_InputIterator __first, _InputIterator __last,
         _ForwardIterator __result)
    {
      typedef typename iterator_traits<_InputIterator>::value_type
 _ValueType1;
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType2;

      return std::__uninitialized_copy<(__is_pod(_ValueType1)
     && __is_pod(_ValueType2))>::
 uninitialized_copy(__first, __last, __result);
    }


  template<bool>
    struct __uninitialized_fill
    {
      template<typename _ForwardIterator, typename _Tp>
        static void
        uninitialized_fill(_ForwardIterator __first,
      _ForwardIterator __last, const _Tp& __x)
        {
   _ForwardIterator __cur = __first;
   try
     {
       for (; __cur != __last; ++__cur)
  std::_Construct(&*__cur, __x);
     }
   catch(...)
     {
       std::_Destroy(__first, __cur);
       throw;
     }
 }
    };

  template<>
    struct __uninitialized_fill<true>
    {
      template<typename _ForwardIterator, typename _Tp>
        static void
        uninitialized_fill(_ForwardIterator __first,
      _ForwardIterator __last, const _Tp& __x)
        { std::fill(__first, __last, __x); }
    };
# 162 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline void
    uninitialized_fill(_ForwardIterator __first, _ForwardIterator __last,
         const _Tp& __x)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;

      std::__uninitialized_fill<__is_pod(_ValueType)>::
 uninitialized_fill(__first, __last, __x);
    }


  template<bool>
    struct __uninitialized_fill_n
    {
      template<typename _ForwardIterator, typename _Size, typename _Tp>
        static void
        uninitialized_fill_n(_ForwardIterator __first, _Size __n,
        const _Tp& __x)
        {
   _ForwardIterator __cur = __first;
   try
     {
       for (; __n > 0; --__n, ++__cur)
  std::_Construct(&*__cur, __x);
     }
   catch(...)
     {
       std::_Destroy(__first, __cur);
       throw;
     }
 }
    };

  template<>
    struct __uninitialized_fill_n<true>
    {
      template<typename _ForwardIterator, typename _Size, typename _Tp>
        static void
        uninitialized_fill_n(_ForwardIterator __first, _Size __n,
        const _Tp& __x)
        { std::fill_n(__first, __n, __x); }
    };
# 216 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
  template<typename _ForwardIterator, typename _Size, typename _Tp>
    inline void
    uninitialized_fill_n(_ForwardIterator __first, _Size __n, const _Tp& __x)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;

      std::__uninitialized_fill_n<__is_pod(_ValueType)>::
 uninitialized_fill_n(__first, __n, __x);
    }







  template<typename _InputIterator, typename _ForwardIterator,
    typename _Allocator>
    _ForwardIterator
    __uninitialized_copy_a(_InputIterator __first, _InputIterator __last,
      _ForwardIterator __result, _Allocator& __alloc)
    {
      _ForwardIterator __cur = __result;
      try
 {
   for (; __first != __last; ++__first, ++__cur)
     __alloc.construct(&*__cur, *__first);
   return __cur;
 }
      catch(...)
 {
   std::_Destroy(__result, __cur, __alloc);
   throw;
 }
    }

  template<typename _InputIterator, typename _ForwardIterator, typename _Tp>
    inline _ForwardIterator
    __uninitialized_copy_a(_InputIterator __first, _InputIterator __last,
      _ForwardIterator __result, allocator<_Tp>&)
    { return std::uninitialized_copy(__first, __last, __result); }

  template<typename _InputIterator, typename _ForwardIterator,
    typename _Allocator>
    inline _ForwardIterator
    __uninitialized_move_a(_InputIterator __first, _InputIterator __last,
      _ForwardIterator __result, _Allocator& __alloc)
    {
      return std::__uninitialized_copy_a((__first),
      (__last),
      __result, __alloc);
    }

  template<typename _ForwardIterator, typename _Tp, typename _Allocator>
    void
    __uninitialized_fill_a(_ForwardIterator __first, _ForwardIterator __last,
      const _Tp& __x, _Allocator& __alloc)
    {
      _ForwardIterator __cur = __first;
      try
 {
   for (; __cur != __last; ++__cur)
     __alloc.construct(&*__cur, __x);
 }
      catch(...)
 {
   std::_Destroy(__first, __cur, __alloc);
   throw;
 }
    }

  template<typename _ForwardIterator, typename _Tp, typename _Tp2>
    inline void
    __uninitialized_fill_a(_ForwardIterator __first, _ForwardIterator __last,
      const _Tp& __x, allocator<_Tp2>&)
    { std::uninitialized_fill(__first, __last, __x); }

  template<typename _ForwardIterator, typename _Size, typename _Tp,
    typename _Allocator>
    void
    __uninitialized_fill_n_a(_ForwardIterator __first, _Size __n,
        const _Tp& __x, _Allocator& __alloc)
    {
      _ForwardIterator __cur = __first;
      try
 {
   for (; __n > 0; --__n, ++__cur)
     __alloc.construct(&*__cur, __x);
 }
      catch(...)
 {
   std::_Destroy(__first, __cur, __alloc);
   throw;
 }
    }

  template<typename _ForwardIterator, typename _Size, typename _Tp,
    typename _Tp2>
    inline void
    __uninitialized_fill_n_a(_ForwardIterator __first, _Size __n,
        const _Tp& __x, allocator<_Tp2>&)
    { std::uninitialized_fill_n(__first, __n, __x); }
# 330 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _ForwardIterator, typename _Allocator>
    inline _ForwardIterator
    __uninitialized_copy_move(_InputIterator1 __first1,
         _InputIterator1 __last1,
         _InputIterator2 __first2,
         _InputIterator2 __last2,
         _ForwardIterator __result,
         _Allocator& __alloc)
    {
      _ForwardIterator __mid = std::__uninitialized_copy_a(__first1, __last1,
          __result,
          __alloc);
      try
 {
   return std::__uninitialized_move_a(__first2, __last2, __mid, __alloc);
 }
      catch(...)
 {
   std::_Destroy(__result, __mid, __alloc);
   throw;
 }
    }





  template<typename _InputIterator1, typename _InputIterator2,
    typename _ForwardIterator, typename _Allocator>
    inline _ForwardIterator
    __uninitialized_move_copy(_InputIterator1 __first1,
         _InputIterator1 __last1,
         _InputIterator2 __first2,
         _InputIterator2 __last2,
         _ForwardIterator __result,
         _Allocator& __alloc)
    {
      _ForwardIterator __mid = std::__uninitialized_move_a(__first1, __last1,
          __result,
          __alloc);
      try
 {
   return std::__uninitialized_copy_a(__first2, __last2, __mid, __alloc);
 }
      catch(...)
 {
   std::_Destroy(__result, __mid, __alloc);
   throw;
 }
    }




  template<typename _ForwardIterator, typename _Tp, typename _InputIterator,
    typename _Allocator>
    inline _ForwardIterator
    __uninitialized_fill_move(_ForwardIterator __result, _ForwardIterator __mid,
         const _Tp& __x, _InputIterator __first,
         _InputIterator __last, _Allocator& __alloc)
    {
      std::__uninitialized_fill_a(__result, __mid, __x, __alloc);
      try
 {
   return std::__uninitialized_move_a(__first, __last, __mid, __alloc);
 }
      catch(...)
 {
   std::_Destroy(__result, __mid, __alloc);
   throw;
 }
    }




  template<typename _InputIterator, typename _ForwardIterator, typename _Tp,
    typename _Allocator>
    inline void
    __uninitialized_move_fill(_InputIterator __first1, _InputIterator __last1,
         _ForwardIterator __first2,
         _ForwardIterator __last2, const _Tp& __x,
         _Allocator& __alloc)
    {
      _ForwardIterator __mid2 = std::__uninitialized_move_a(__first1, __last1,
           __first2,
           __alloc);
      try
 {
   std::__uninitialized_fill_a(__mid2, __last2, __x, __alloc);
 }
      catch(...)
 {
   std::_Destroy(__first2, __mid2, __alloc);
   throw;
 }
    }
# 476 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
}
# 53 "/usr/include/c++/4.4/memory" 2 3
# 1 "/usr/include/c++/4.4/bits/stl_tempbuf.h" 1 3
# 64 "/usr/include/c++/4.4/bits/stl_tempbuf.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {
# 83 "/usr/include/c++/4.4/bits/stl_tempbuf.h" 3
  template<typename _Tp>
    pair<_Tp*, ptrdiff_t>
    get_temporary_buffer(ptrdiff_t __len)
    {
      const ptrdiff_t __max =
 __gnu_cxx::__numeric_traits<ptrdiff_t>::__max / sizeof(_Tp);
      if (__len > __max)
 __len = __max;

      while (__len > 0)
 {
   _Tp* __tmp = static_cast<_Tp*>(::operator new(__len * sizeof(_Tp),
       std::nothrow));
   if (__tmp != 0)
     return std::pair<_Tp*, ptrdiff_t>(__tmp, __len);
   __len /= 2;
 }
      return std::pair<_Tp*, ptrdiff_t>(static_cast<_Tp*>(0), 0);
    }
# 110 "/usr/include/c++/4.4/bits/stl_tempbuf.h" 3
  template<typename _Tp>
    inline void
    return_temporary_buffer(_Tp* __p)
    { ::operator delete(__p, std::nothrow); }







  template<typename _ForwardIterator, typename _Tp>
    class _Temporary_buffer
    {



    public:
      typedef _Tp value_type;
      typedef value_type* pointer;
      typedef pointer iterator;
      typedef ptrdiff_t size_type;

    protected:
      size_type _M_original_len;
      size_type _M_len;
      pointer _M_buffer;

    public:

      size_type
      size() const
      { return _M_len; }


      size_type
      requested_size() const
      { return _M_original_len; }


      iterator
      begin()
      { return _M_buffer; }


      iterator
      end()
      { return _M_buffer + _M_len; }





      _Temporary_buffer(_ForwardIterator __first, _ForwardIterator __last);

      ~_Temporary_buffer()
      {
 std::_Destroy(_M_buffer, _M_buffer + _M_len);
 std::return_temporary_buffer(_M_buffer);
      }

    private:

      _Temporary_buffer(const _Temporary_buffer&);

      void
      operator=(const _Temporary_buffer&);
    };

  template<typename _ForwardIterator, typename _Tp>
    _Temporary_buffer<_ForwardIterator, _Tp>::
    _Temporary_buffer(_ForwardIterator __first, _ForwardIterator __last)
    : _M_original_len(std::distance(__first, __last)),
      _M_len(0), _M_buffer(0)
    {
      try
 {
   std::pair<pointer, size_type> __p(std::get_temporary_buffer<
         value_type>(_M_original_len));
   _M_buffer = __p.first;
   _M_len = __p.second;
   if (!__is_pod(_Tp) && _M_len > 0)
     std::uninitialized_fill_n(_M_buffer, _M_len, *__first);
 }
      catch(...)
 {
   std::return_temporary_buffer(_M_buffer);
   _M_buffer = 0;
   _M_len = 0;
   throw;
 }
    }

}
# 54 "/usr/include/c++/4.4/memory" 2 3
# 1 "/usr/include/c++/4.4/bits/stl_raw_storage_iter.h" 1 3
# 60 "/usr/include/c++/4.4/bits/stl_raw_storage_iter.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {





  template <class _OutputIterator, class _Tp>
    class raw_storage_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _OutputIterator _M_iter;

    public:
      explicit
      raw_storage_iterator(_OutputIterator __x)
      : _M_iter(__x) {}

      raw_storage_iterator&
      operator*() { return *this; }

      raw_storage_iterator&
      operator=(const _Tp& __element)
      {
 std::_Construct(&*_M_iter, __element);
 return *this;
      }

      raw_storage_iterator<_OutputIterator, _Tp>&
      operator++()
      {
 ++_M_iter;
 return *this;
      }

      raw_storage_iterator<_OutputIterator, _Tp>
      operator++(int)
      {
 raw_storage_iterator<_OutputIterator, _Tp> __tmp = *this;
 ++_M_iter;
 return __tmp;
      }
    };

}
# 55 "/usr/include/c++/4.4/memory" 2 3
# 90 "/usr/include/c++/4.4/memory" 3
# 1 "/usr/include/c++/4.4/backward/auto_ptr.h" 1 3
# 36 "/usr/include/c++/4.4/backward/auto_ptr.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {
# 45 "/usr/include/c++/4.4/backward/auto_ptr.h" 3
  template<typename _Tp1>
    struct auto_ptr_ref
    {
      _Tp1* _M_ptr;

      explicit
      auto_ptr_ref(_Tp1* __p): _M_ptr(__p) { }
    } ;
# 84 "/usr/include/c++/4.4/backward/auto_ptr.h" 3
  template<typename _Tp>
    class auto_ptr
    {
    private:
      _Tp* _M_ptr;

    public:

      typedef _Tp element_type;







      explicit
      auto_ptr(element_type* __p = 0) throw() : _M_ptr(__p) { }
# 110 "/usr/include/c++/4.4/backward/auto_ptr.h" 3
      auto_ptr(auto_ptr& __a) throw() : _M_ptr(__a.release()) { }
# 122 "/usr/include/c++/4.4/backward/auto_ptr.h" 3
      template<typename _Tp1>
        auto_ptr(auto_ptr<_Tp1>& __a) throw() : _M_ptr(__a.release()) { }
# 133 "/usr/include/c++/4.4/backward/auto_ptr.h" 3
      auto_ptr&
      operator=(auto_ptr& __a) throw()
      {
 reset(__a.release());
 return *this;
      }
# 150 "/usr/include/c++/4.4/backward/auto_ptr.h" 3
      template<typename _Tp1>
        auto_ptr&
        operator=(auto_ptr<_Tp1>& __a) throw()
        {
   reset(__a.release());
   return *this;
 }
# 168 "/usr/include/c++/4.4/backward/auto_ptr.h" 3
      ~auto_ptr() { delete _M_ptr; }
# 178 "/usr/include/c++/4.4/backward/auto_ptr.h" 3
      element_type&
      operator*() const throw()
      {
                                   ;
 return *_M_ptr;
      }







      element_type*
      operator->() const throw()
      {
                                   ;
 return _M_ptr;
      }
# 208 "/usr/include/c++/4.4/backward/auto_ptr.h" 3
      element_type*
      get() const throw() { return _M_ptr; }
# 222 "/usr/include/c++/4.4/backward/auto_ptr.h" 3
      element_type*
      release() throw()
      {
 element_type* __tmp = _M_ptr;
 _M_ptr = 0;
 return __tmp;
      }
# 237 "/usr/include/c++/4.4/backward/auto_ptr.h" 3
      void
      reset(element_type* __p = 0) throw()
      {
 if (__p != _M_ptr)
   {
     delete _M_ptr;
     _M_ptr = __p;
   }
      }
# 258 "/usr/include/c++/4.4/backward/auto_ptr.h" 3
      auto_ptr(auto_ptr_ref<element_type> __ref) throw()
      : _M_ptr(__ref._M_ptr) { }

      auto_ptr&
      operator=(auto_ptr_ref<element_type> __ref) throw()
      {
 if (__ref._M_ptr != this->get())
   {
     delete _M_ptr;
     _M_ptr = __ref._M_ptr;
   }
 return *this;
      }

      template<typename _Tp1>
        operator auto_ptr_ref<_Tp1>() throw()
        { return auto_ptr_ref<_Tp1>(this->release()); }

      template<typename _Tp1>
        operator auto_ptr<_Tp1>() throw()
        { return auto_ptr<_Tp1>(this->release()); }
    } ;



  template<>
    class auto_ptr<void>
    {
    public:
      typedef void element_type;
    } ;

}
# 91 "/usr/include/c++/4.4/memory" 2 3
# 40 "../../src/test/harness_allocator.h" 2








# 1 "/usr/include/c++/4.4/stdexcept" 1 3
# 36 "/usr/include/c++/4.4/stdexcept" 3
# 36 "/usr/include/c++/4.4/stdexcept" 3





namespace std __attribute__ ((__visibility__ ("default"))) {
# 53 "/usr/include/c++/4.4/stdexcept" 3
  class logic_error : public exception
  {
    string _M_msg;

  public:

    explicit
    logic_error(const string& __arg);

    virtual
    ~logic_error() throw();



    virtual const char*
    what() const throw();
  };



  class domain_error : public logic_error
  {
  public:
    explicit domain_error(const string& __arg);
  };


  class invalid_argument : public logic_error
  {
  public:
    explicit invalid_argument(const string& __arg);
  };



  class length_error : public logic_error
  {
  public:
    explicit length_error(const string& __arg);
  };



  class out_of_range : public logic_error
  {
  public:
    explicit out_of_range(const string& __arg);
  };






  class runtime_error : public exception
  {
    string _M_msg;

  public:

    explicit
    runtime_error(const string& __arg);

    virtual
    ~runtime_error() throw();



    virtual const char*
    what() const throw();
  };


  class range_error : public runtime_error
  {
  public:
    explicit range_error(const string& __arg);
  };


  class overflow_error : public runtime_error
  {
  public:
    explicit overflow_error(const string& __arg);
  };


  class underflow_error : public runtime_error
  {
  public:
    explicit underflow_error(const string& __arg);
  };



}
# 49 "../../src/test/harness_allocator.h" 2
# 67 "../../src/test/harness_allocator.h"
template <typename base_alloc_t, typename count_t = tbb::atomic<size_t> >
class static_counting_allocator : public base_alloc_t
{
public:
    typedef typename base_alloc_t::pointer pointer;
    typedef typename base_alloc_t::const_pointer const_pointer;
    typedef typename base_alloc_t::reference reference;
    typedef typename base_alloc_t::const_reference const_reference;
    typedef typename base_alloc_t::value_type value_type;
    typedef typename base_alloc_t::size_type size_type;
    typedef typename base_alloc_t::difference_type difference_type;
    template<typename U> struct rebind {
        typedef static_counting_allocator<typename base_alloc_t::template rebind<U>::other,count_t> other;
    };

    static size_t max_items;
    static count_t items_allocated;
    static count_t items_freed;
    static count_t allocations;
    static count_t frees;
    static bool verbose, throwing;

    static_counting_allocator() throw() { }

    static_counting_allocator(const base_alloc_t& src) throw()
    : base_alloc_t(src) { }

    static_counting_allocator(const static_counting_allocator& src) throw()
    : base_alloc_t(src) { }

    template<typename U, typename C>
    static_counting_allocator(const static_counting_allocator<U, C>& src) throw()
    : base_alloc_t(src) { }

    pointer allocate(const size_type n)
    {
        if(verbose) printf("\t+%d|", int(n));
        if(max_items && items_allocated + n >= max_items) {
            if(verbose) printf("items limit hits!");
            if(throwing)
                throw std::bad_alloc();
            return __null;
        }
        allocations++;
        items_allocated += n;
        return base_alloc_t::allocate(n, pointer(0));
    }

    pointer allocate(const size_type n, const void * const)
    { return allocate(n); }

    void deallocate(const pointer ptr, const size_type n)
    {
        if(verbose) printf("\t-%d|", int(n));
        frees++;
        items_freed += n;
        base_alloc_t::deallocate(ptr, n);
    }

    static void init_counters(bool v = false) {
        verbose = v;
        if(verbose) printf("\n------------------------------------------- Allocations:\n");
        items_allocated = 0;
        items_freed = 0;
        allocations = 0;
        frees = 0;
        max_items = 0;
    }

    static void set_limits(size_type max = 0, bool do_throw = true) {
        max_items = max;
        throwing = do_throw;
    }
};

template <typename base_alloc_t, typename count_t>
size_t static_counting_allocator<base_alloc_t, count_t>::max_items;
template <typename base_alloc_t, typename count_t>
count_t static_counting_allocator<base_alloc_t, count_t>::items_allocated;
template <typename base_alloc_t, typename count_t>
count_t static_counting_allocator<base_alloc_t, count_t>::items_freed;
template <typename base_alloc_t, typename count_t>
count_t static_counting_allocator<base_alloc_t, count_t>::allocations;
template <typename base_alloc_t, typename count_t>
count_t static_counting_allocator<base_alloc_t, count_t>::frees;
template <typename base_alloc_t, typename count_t>
bool static_counting_allocator<base_alloc_t, count_t>::verbose;
template <typename base_alloc_t, typename count_t>
bool static_counting_allocator<base_alloc_t, count_t>::throwing;

template <typename base_alloc_t, typename count_t = tbb::atomic<size_t> >
class local_counting_allocator : public base_alloc_t
{
public:
    typedef typename base_alloc_t::pointer pointer;
    typedef typename base_alloc_t::const_pointer const_pointer;
    typedef typename base_alloc_t::reference reference;
    typedef typename base_alloc_t::const_reference const_reference;
    typedef typename base_alloc_t::value_type value_type;
    typedef typename base_alloc_t::size_type size_type;
    typedef typename base_alloc_t::difference_type difference_type;
    template<typename U> struct rebind {
        typedef local_counting_allocator<typename base_alloc_t::template rebind<U>::other,count_t> other;
    };

    count_t items_allocated;
    count_t items_freed;
    count_t allocations;
    count_t frees;
    size_t max_items;

    local_counting_allocator() throw() {
        items_allocated = 0;
        items_freed = 0;
        allocations = 0;
        frees = 0;
        max_items = 0;
    }

    local_counting_allocator(const local_counting_allocator &a) throw()
        : base_alloc_t(a)
        , items_allocated(a.items_allocated)
        , items_freed(a.items_freed)
        , allocations(a.allocations)
        , frees(a.frees)
        , max_items(a.max_items)
    { }

    template<typename U, typename C>
    local_counting_allocator(const static_counting_allocator<U,C> &) throw() {
        items_allocated = static_counting_allocator<U,C>::items_allocated;
        items_freed = static_counting_allocator<U,C>::items_freed;
        allocations = static_counting_allocator<U,C>::allocations;
        frees = static_counting_allocator<U,C>::frees;
        max_items = static_counting_allocator<U,C>::max_items;
    }

    template<typename U, typename C>
    local_counting_allocator(const local_counting_allocator<U,C> &a) throw()
        : items_allocated(a.items_allocated)
        , items_freed(a.items_freed)
        , allocations(a.allocations)
        , frees(a.frees)
        , max_items(a.max_items)
    { }

    bool operator==(const local_counting_allocator &a) const
    { return &a == this; }

    pointer allocate(const size_type n)
    {
        if(max_items && items_allocated + n >= max_items)
            throw std::bad_alloc();
        ++allocations;
        items_allocated += n;
        return base_alloc_t::allocate(n, pointer(0));
    }

    pointer allocate(const size_type n, const void * const)
    { return allocate(n); }

    void deallocate(const pointer ptr, const size_type n)
    {
        ++frees;
        items_freed += n;
        base_alloc_t::deallocate(ptr, n);
    }

    void set_limits(size_type max = 0) {
        max_items = max;
    }
};

template <typename T, template<typename X> class Allocator = std::allocator>
class debug_allocator : public Allocator<T>
{
public:
    typedef Allocator<T> base_allocator_type;
    typedef typename base_allocator_type::value_type value_type;
    typedef typename base_allocator_type::pointer pointer;
    typedef typename base_allocator_type::const_pointer const_pointer;
    typedef typename base_allocator_type::reference reference;
    typedef typename base_allocator_type::const_reference const_reference;
    typedef typename base_allocator_type::size_type size_type;
    typedef typename base_allocator_type::difference_type difference_type;
    template<typename U> struct rebind {
        typedef debug_allocator<U, Allocator> other;
    };

    debug_allocator() throw() { }
    debug_allocator(const debug_allocator &a) throw() : base_allocator_type( a ) { }
    template<typename U>
    debug_allocator(const debug_allocator<U> &a) throw() : base_allocator_type( Allocator<U>( a ) ) { }

    pointer allocate(const size_type n, const void *hint = 0 ) {
        pointer ptr = base_allocator_type::allocate( n, hint );
        std::memset( ptr, 0xE3E3E3E3, n * sizeof(value_type) );
        return ptr;
    }
};



template<template<typename T> class Allocator>
class debug_allocator<void, Allocator> : public Allocator<void> {
public:
    typedef Allocator<void> base_allocator_type;
    typedef typename base_allocator_type::value_type value_type;
    typedef typename base_allocator_type::pointer pointer;
    typedef typename base_allocator_type::const_pointer const_pointer;
    template<typename U> struct rebind {
        typedef debug_allocator<U, Allocator> other;
    };
};

template<typename T1, template<typename X1> class B1, typename T2, template<typename X2> class B2>
inline bool operator==( const debug_allocator<T1,B1> &a, const debug_allocator<T2,B2> &b) {
    return static_cast< B1<T1> >(a) == static_cast< B2<T2> >(b);
}
template<typename T1, template<typename X1> class B1, typename T2, template<typename X2> class B2>
inline bool operator!=( const debug_allocator<T1,B1> &a, const debug_allocator<T2,B2> &b) {
    return static_cast< B1<T1> >(a) != static_cast< B2<T2> >(b);
}
# 36 "../../src/test/test_concurrent_queue.cpp" 2






# 1 "/usr/include/c++/4.4/limits" 1 3
# 41 "/usr/include/c++/4.4/limits" 3
# 41 "/usr/include/c++/4.4/limits" 3
# 146 "/usr/include/c++/4.4/limits" 3
namespace std __attribute__ ((__visibility__ ("default"))) {






  enum float_round_style
  {
    round_indeterminate = -1,
    round_toward_zero = 0,
    round_to_nearest = 1,
    round_toward_infinity = 2,
    round_toward_neg_infinity = 3
  };







  enum float_denorm_style
  {

    denorm_indeterminate = -1,

    denorm_absent = 0,

    denorm_present = 1
  };
# 188 "/usr/include/c++/4.4/limits" 3
  struct __numeric_limits_base
  {


    static const bool is_specialized = false;




    static const int digits = 0;

    static const int digits10 = 0;

    static const bool is_signed = false;



    static const bool is_integer = false;




    static const bool is_exact = false;


    static const int radix = 0;



    static const int min_exponent = 0;


    static const int min_exponent10 = 0;



    static const int max_exponent = 0;


    static const int max_exponent10 = 0;


    static const bool has_infinity = false;


    static const bool has_quiet_NaN = false;


    static const bool has_signaling_NaN = false;

    static const float_denorm_style has_denorm = denorm_absent;


    static const bool has_denorm_loss = false;



    static const bool is_iec559 = false;



    static const bool is_bounded = false;




    static const bool is_modulo = false;


    static const bool traps = false;

    static const bool tinyness_before = false;



    static const float_round_style round_style = round_toward_zero;
  };
# 277 "/usr/include/c++/4.4/limits" 3
  template<typename _Tp>
    struct numeric_limits : public __numeric_limits_base
    {


      static _Tp min() throw() { return static_cast<_Tp>(0); }

      static _Tp max() throw() { return static_cast<_Tp>(0); }


      static _Tp epsilon() throw() { return static_cast<_Tp>(0); }

      static _Tp round_error() throw() { return static_cast<_Tp>(0); }

      static _Tp infinity() throw() { return static_cast<_Tp>(0); }

      static _Tp quiet_NaN() throw() { return static_cast<_Tp>(0); }


      static _Tp signaling_NaN() throw() { return static_cast<_Tp>(0); }



      static _Tp denorm_min() throw() { return static_cast<_Tp>(0); }
    };





  template<>
    struct numeric_limits<bool>
    {
      static const bool is_specialized = true;

      static bool min() throw()
      { return false; }
      static bool max() throw()
      { return true; }

      static const int digits = 1;
      static const int digits10 = 0;
      static const bool is_signed = false;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;
      static bool epsilon() throw()
      { return false; }
      static bool round_error() throw()
      { return false; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm = denorm_absent;
      static const bool has_denorm_loss = false;

      static bool infinity() throw()
      { return false; }
      static bool quiet_NaN() throw()
      { return false; }
      static bool signaling_NaN() throw()
      { return false; }
      static bool denorm_min() throw()
      { return false; }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = false;




      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_toward_zero;
    };


  template<>
    struct numeric_limits<char>
    {
      static const bool is_specialized = true;

      static char min() throw()
      { return (((char)(-1) < 0) ? (char)1 << (sizeof(char) * 8 - ((char)(-1) < 0)) : (char)0); }
      static char max() throw()
      { return (((char)(-1) < 0) ? (((((char)1 << ((sizeof(char) * 8 - ((char)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(char)0); }

      static const int digits = (sizeof(char) * 8 - ((char)(-1) < 0));
      static const int digits10 = ((sizeof(char) * 8 - ((char)(-1) < 0)) * 643 / 2136);
      static const bool is_signed = ((char)(-1) < 0);
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;
      static char epsilon() throw()
      { return 0; }
      static char round_error() throw()
      { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm = denorm_absent;
      static const bool has_denorm_loss = false;

      static char infinity() throw()
      { return char(); }
      static char quiet_NaN() throw()
      { return char(); }
      static char signaling_NaN() throw()
      { return char(); }
      static char denorm_min() throw()
      { return static_cast<char>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_toward_zero;
    };


  template<>
    struct numeric_limits<signed char>
    {
      static const bool is_specialized = true;

      static signed char min() throw()
      { return -127 - 1; }
      static signed char max() throw()
      { return 127; }

      static const int digits = (sizeof(signed char) * 8 - ((signed char)(-1) < 0));
      static const int digits10 = ((sizeof(signed char) * 8 - ((signed char)(-1) < 0)) * 643 / 2136);
      static const bool is_signed = true;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;
      static signed char epsilon() throw()
      { return 0; }
      static signed char round_error() throw()
      { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm = denorm_absent;
      static const bool has_denorm_loss = false;

      static signed char infinity() throw()
      { return static_cast<signed char>(0); }
      static signed char quiet_NaN() throw()
      { return static_cast<signed char>(0); }
      static signed char signaling_NaN() throw()
      { return static_cast<signed char>(0); }
      static signed char denorm_min() throw()
      { return static_cast<signed char>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_toward_zero;
    };


  template<>
    struct numeric_limits<unsigned char>
    {
      static const bool is_specialized = true;

      static unsigned char min() throw()
      { return 0; }
      static unsigned char max() throw()
      { return 127 * 2U + 1; }

      static const int digits = (sizeof(unsigned char) * 8 - ((unsigned char)(-1) < 0));
      static const int digits10 = ((sizeof(unsigned char) * 8 - ((unsigned char)(-1) < 0)) * 643 / 2136);
      static const bool is_signed = false;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;
      static unsigned char epsilon() throw()
      { return 0; }
      static unsigned char round_error() throw()
      { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm = denorm_absent;
      static const bool has_denorm_loss = false;

      static unsigned char infinity() throw()
      { return static_cast<unsigned char>(0); }
      static unsigned char quiet_NaN() throw()
      { return static_cast<unsigned char>(0); }
      static unsigned char signaling_NaN() throw()
      { return static_cast<unsigned char>(0); }
      static unsigned char denorm_min() throw()
      { return static_cast<unsigned char>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_toward_zero;
    };


  template<>
    struct numeric_limits<wchar_t>
    {
      static const bool is_specialized = true;

      static wchar_t min() throw()
      { return (((wchar_t)(-1) < 0) ? (wchar_t)1 << (sizeof(wchar_t) * 8 - ((wchar_t)(-1) < 0)) : (wchar_t)0); }
      static wchar_t max() throw()
      { return (((wchar_t)(-1) < 0) ? (((((wchar_t)1 << ((sizeof(wchar_t) * 8 - ((wchar_t)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(wchar_t)0); }

      static const int digits = (sizeof(wchar_t) * 8 - ((wchar_t)(-1) < 0));
      static const int digits10 = ((sizeof(wchar_t) * 8 - ((wchar_t)(-1) < 0)) * 643 / 2136);
      static const bool is_signed = ((wchar_t)(-1) < 0);
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;
      static wchar_t epsilon() throw()
      { return 0; }
      static wchar_t round_error() throw()
      { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm = denorm_absent;
      static const bool has_denorm_loss = false;

      static wchar_t infinity() throw()
      { return wchar_t(); }
      static wchar_t quiet_NaN() throw()
      { return wchar_t(); }
      static wchar_t signaling_NaN() throw()
      { return wchar_t(); }
      static wchar_t denorm_min() throw()
      { return wchar_t(); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_toward_zero;
    };
# 669 "/usr/include/c++/4.4/limits" 3
  template<>
    struct numeric_limits<short>
    {
      static const bool is_specialized = true;

      static short min() throw()
      { return -32767 - 1; }
      static short max() throw()
      { return 32767; }

      static const int digits = (sizeof(short) * 8 - ((short)(-1) < 0));
      static const int digits10 = ((sizeof(short) * 8 - ((short)(-1) < 0)) * 643 / 2136);
      static const bool is_signed = true;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;
      static short epsilon() throw()
      { return 0; }
      static short round_error() throw()
      { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm = denorm_absent;
      static const bool has_denorm_loss = false;

      static short infinity() throw()
      { return short(); }
      static short quiet_NaN() throw()
      { return short(); }
      static short signaling_NaN() throw()
      { return short(); }
      static short denorm_min() throw()
      { return short(); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_toward_zero;
    };


  template<>
    struct numeric_limits<unsigned short>
    {
      static const bool is_specialized = true;

      static unsigned short min() throw()
      { return 0; }
      static unsigned short max() throw()
      { return 32767 * 2U + 1; }

      static const int digits = (sizeof(unsigned short) * 8 - ((unsigned short)(-1) < 0));
      static const int digits10 = ((sizeof(unsigned short) * 8 - ((unsigned short)(-1) < 0)) * 643 / 2136);
      static const bool is_signed = false;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;
      static unsigned short epsilon() throw()
      { return 0; }
      static unsigned short round_error() throw()
      { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm = denorm_absent;
      static const bool has_denorm_loss = false;

      static unsigned short infinity() throw()
      { return static_cast<unsigned short>(0); }
      static unsigned short quiet_NaN() throw()
      { return static_cast<unsigned short>(0); }
      static unsigned short signaling_NaN() throw()
      { return static_cast<unsigned short>(0); }
      static unsigned short denorm_min() throw()
      { return static_cast<unsigned short>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_toward_zero;
    };


  template<>
    struct numeric_limits<int>
    {
      static const bool is_specialized = true;

      static int min() throw()
      { return -2147483647 - 1; }
      static int max() throw()
      { return 2147483647; }

      static const int digits = (sizeof(int) * 8 - ((int)(-1) < 0));
      static const int digits10 = ((sizeof(int) * 8 - ((int)(-1) < 0)) * 643 / 2136);
      static const bool is_signed = true;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;
      static int epsilon() throw()
      { return 0; }
      static int round_error() throw()
      { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm = denorm_absent;
      static const bool has_denorm_loss = false;

      static int infinity() throw()
      { return static_cast<int>(0); }
      static int quiet_NaN() throw()
      { return static_cast<int>(0); }
      static int signaling_NaN() throw()
      { return static_cast<int>(0); }
      static int denorm_min() throw()
      { return static_cast<int>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_toward_zero;
    };


  template<>
    struct numeric_limits<unsigned int>
    {
      static const bool is_specialized = true;

      static unsigned int min() throw()
      { return 0; }
      static unsigned int max() throw()
      { return 2147483647 * 2U + 1; }

      static const int digits = (sizeof(unsigned int) * 8 - ((unsigned int)(-1) < 0));
      static const int digits10 = ((sizeof(unsigned int) * 8 - ((unsigned int)(-1) < 0)) * 643 / 2136);
      static const bool is_signed = false;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;
      static unsigned int epsilon() throw()
      { return 0; }
      static unsigned int round_error() throw()
      { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm = denorm_absent;
      static const bool has_denorm_loss = false;

      static unsigned int infinity() throw()
      { return static_cast<unsigned int>(0); }
      static unsigned int quiet_NaN() throw()
      { return static_cast<unsigned int>(0); }
      static unsigned int signaling_NaN() throw()
      { return static_cast<unsigned int>(0); }
      static unsigned int denorm_min() throw()
      { return static_cast<unsigned int>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_toward_zero;
    };


  template<>
    struct numeric_limits<long>
    {
      static const bool is_specialized = true;

      static long min() throw()
      { return -9223372036854775807L - 1; }
      static long max() throw()
      { return 9223372036854775807L; }

      static const int digits = (sizeof(long) * 8 - ((long)(-1) < 0));
      static const int digits10 = ((sizeof(long) * 8 - ((long)(-1) < 0)) * 643 / 2136);
      static const bool is_signed = true;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;
      static long epsilon() throw()
      { return 0; }
      static long round_error() throw()
      { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm = denorm_absent;
      static const bool has_denorm_loss = false;

      static long infinity() throw()
      { return static_cast<long>(0); }
      static long quiet_NaN() throw()
      { return static_cast<long>(0); }
      static long signaling_NaN() throw()
      { return static_cast<long>(0); }
      static long denorm_min() throw()
      { return static_cast<long>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_toward_zero;
    };


  template<>
    struct numeric_limits<unsigned long>
    {
      static const bool is_specialized = true;

      static unsigned long min() throw()
      { return 0; }
      static unsigned long max() throw()
      { return 9223372036854775807L * 2UL + 1; }

      static const int digits = (sizeof(unsigned long) * 8 - ((unsigned long)(-1) < 0));
      static const int digits10 = ((sizeof(unsigned long) * 8 - ((unsigned long)(-1) < 0)) * 643 / 2136);
      static const bool is_signed = false;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;
      static unsigned long epsilon() throw()
      { return 0; }
      static unsigned long round_error() throw()
      { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm = denorm_absent;
      static const bool has_denorm_loss = false;

      static unsigned long infinity() throw()
      { return static_cast<unsigned long>(0); }
      static unsigned long quiet_NaN() throw()
      { return static_cast<unsigned long>(0); }
      static unsigned long signaling_NaN() throw()
      { return static_cast<unsigned long>(0); }
      static unsigned long denorm_min() throw()
      { return static_cast<unsigned long>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_toward_zero;
    };


  template<>
    struct numeric_limits<long long>
    {
      static const bool is_specialized = true;

      static long long min() throw()
      { return -9223372036854775807LL - 1; }
      static long long max() throw()
      { return 9223372036854775807LL; }

      static const int digits = (sizeof(long long) * 8 - ((long long)(-1) < 0));
      static const int digits10 = ((sizeof(long long) * 8 - ((long long)(-1) < 0)) * 643 / 2136);
      static const bool is_signed = true;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;
      static long long epsilon() throw()
      { return 0; }
      static long long round_error() throw()
      { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm = denorm_absent;
      static const bool has_denorm_loss = false;

      static long long infinity() throw()
      { return static_cast<long long>(0); }
      static long long quiet_NaN() throw()
      { return static_cast<long long>(0); }
      static long long signaling_NaN() throw()
      { return static_cast<long long>(0); }
      static long long denorm_min() throw()
      { return static_cast<long long>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_toward_zero;
    };


  template<>
    struct numeric_limits<unsigned long long>
    {
      static const bool is_specialized = true;

      static unsigned long long min() throw()
      { return 0; }
      static unsigned long long max() throw()
      { return 9223372036854775807LL * 2ULL + 1; }

      static const int digits = (sizeof(unsigned long long) * 8 - ((unsigned long long)(-1) < 0));
      static const int digits10 = ((sizeof(unsigned long long) * 8 - ((unsigned long long)(-1) < 0)) * 643 / 2136);
      static const bool is_signed = false;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;
      static unsigned long long epsilon() throw()
      { return 0; }
      static unsigned long long round_error() throw()
      { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm = denorm_absent;
      static const bool has_denorm_loss = false;

      static unsigned long long infinity() throw()
      { return static_cast<unsigned long long>(0); }
      static unsigned long long quiet_NaN() throw()
      { return static_cast<unsigned long long>(0); }
      static unsigned long long signaling_NaN() throw()
      { return static_cast<unsigned long long>(0); }
      static unsigned long long denorm_min() throw()
      { return static_cast<unsigned long long>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_toward_zero;
    };


  template<>
    struct numeric_limits<float>
    {
      static const bool is_specialized = true;

      static float min() throw()
      { return 1.17549435e-38F; }
      static float max() throw()
      { return 3.40282347e+38F; }

      static const int digits = 24;
      static const int digits10 = 6;
      static const bool is_signed = true;
      static const bool is_integer = false;
      static const bool is_exact = false;
      static const int radix = 2;
      static float epsilon() throw()
      { return 1.19209290e-7F; }
      static float round_error() throw()
      { return 0.5F; }

      static const int min_exponent = (-125);
      static const int min_exponent10 = (-37);
      static const int max_exponent = 128;
      static const int max_exponent10 = 38;

      static const bool has_infinity = 1;
      static const bool has_quiet_NaN = 1;
      static const bool has_signaling_NaN = has_quiet_NaN;
      static const float_denorm_style has_denorm
 = bool(1) ? denorm_present : denorm_absent;
      static const bool has_denorm_loss = false;

      static float infinity() throw()
      { return __builtin_huge_valf (); }
      static float quiet_NaN() throw()
      { return __builtin_nanf (""); }
      static float signaling_NaN() throw()
      { return __builtin_nansf (""); }
      static float denorm_min() throw()
      { return 1.40129846e-45F; }

      static const bool is_iec559
 = has_infinity && has_quiet_NaN && has_denorm == denorm_present;
      static const bool is_bounded = true;
      static const bool is_modulo = false;

      static const bool traps = false;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_to_nearest;
    };






  template<>
    struct numeric_limits<double>
    {
      static const bool is_specialized = true;

      static double min() throw()
      { return 2.2250738585072014e-308; }
      static double max() throw()
      { return 1.7976931348623157e+308; }

      static const int digits = 53;
      static const int digits10 = 15;
      static const bool is_signed = true;
      static const bool is_integer = false;
      static const bool is_exact = false;
      static const int radix = 2;
      static double epsilon() throw()
      { return 2.2204460492503131e-16; }
      static double round_error() throw()
      { return 0.5; }

      static const int min_exponent = (-1021);
      static const int min_exponent10 = (-307);
      static const int max_exponent = 1024;
      static const int max_exponent10 = 308;

      static const bool has_infinity = 1;
      static const bool has_quiet_NaN = 1;
      static const bool has_signaling_NaN = has_quiet_NaN;
      static const float_denorm_style has_denorm
 = bool(1) ? denorm_present : denorm_absent;
      static const bool has_denorm_loss = false;

      static double infinity() throw()
      { return __builtin_huge_val(); }
      static double quiet_NaN() throw()
      { return __builtin_nan (""); }
      static double signaling_NaN() throw()
      { return __builtin_nans (""); }
      static double denorm_min() throw()
      { return 4.9406564584124654e-324; }

      static const bool is_iec559
 = has_infinity && has_quiet_NaN && has_denorm == denorm_present;
      static const bool is_bounded = true;
      static const bool is_modulo = false;

      static const bool traps = false;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_to_nearest;
    };






  template<>
    struct numeric_limits<long double>
    {
      static const bool is_specialized = true;

      static long double min() throw()
      { return 3.36210314311209350626e-4932L; }
      static long double max() throw()
      { return 1.18973149535723176502e+4932L; }

      static const int digits = 64;
      static const int digits10 = 18;
      static const bool is_signed = true;
      static const bool is_integer = false;
      static const bool is_exact = false;
      static const int radix = 2;
      static long double epsilon() throw()
      { return 1.08420217248550443401e-19L; }
      static long double round_error() throw()
      { return 0.5L; }

      static const int min_exponent = (-16381);
      static const int min_exponent10 = (-4931);
      static const int max_exponent = 16384;
      static const int max_exponent10 = 4932;

      static const bool has_infinity = 1;
      static const bool has_quiet_NaN = 1;
      static const bool has_signaling_NaN = has_quiet_NaN;
      static const float_denorm_style has_denorm
 = bool(1) ? denorm_present : denorm_absent;
      static const bool has_denorm_loss
 = false;

      static long double infinity() throw()
      { return __builtin_huge_vall (); }
      static long double quiet_NaN() throw()
      { return __builtin_nanl (""); }
      static long double signaling_NaN() throw()
      { return __builtin_nansl (""); }
      static long double denorm_min() throw()
      { return 3.64519953188247460253e-4951L; }

      static const bool is_iec559
 = has_infinity && has_quiet_NaN && has_denorm == denorm_present;
      static const bool is_bounded = true;
      static const bool is_modulo = false;

      static const bool traps = false;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_to_nearest;
    };





}
# 43 "../../src/test/test_concurrent_queue.cpp" 2





static tbb::atomic<long> FooConstructed;
static tbb::atomic<long> FooDestroyed;

enum state_t{
    LIVE=0x1234,
    DEAD=0xDEAD
};

class Foo {
    state_t state;
public:
    int thread_id;
    int serial;
    Foo() : state(LIVE), thread_id(0), serial(0) {
        ++FooConstructed;
    }
    Foo( const Foo& item ) : state(LIVE) {
        ((item.state==LIVE)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",65,"item.state==LIVE",__null));
        ++FooConstructed;
        thread_id = item.thread_id;
        serial = item.serial;
    }
    ~Foo() {
        ((state==LIVE)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",71,"state==LIVE",__null));
        ++FooDestroyed;
        state=DEAD;
        thread_id=DEAD;
        serial=DEAD;
    }
    void operator=( const Foo& item ) {
        ((item.state==LIVE)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",78,"item.state==LIVE",__null));
        ((state==LIVE)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",79,"state==LIVE",__null));
        thread_id = item.thread_id;
        serial = item.serial;
    }
    bool is_const() {return false;}
    bool is_const() const {return true;}
    static void clear_counters() { FooConstructed = 0; FooDestroyed = 0; }
    static long get_n_constructed() { return FooConstructed; }
    static long get_n_destroyed() { return FooDestroyed; }
};


static const int N = 50000;



class Foo_exception : public std::bad_alloc {
public:
    virtual const char *what() const throw() { return "out of Foo limit"; }
    virtual ~Foo_exception() throw() {}
};

static tbb::atomic<long> FooExConstructed;
static tbb::atomic<long> FooExDestroyed;
static tbb::atomic<long> serial_source;
static long MaxFooCount = 0;
static const long Threshold = 400;

class FooEx {
    state_t state;
public:
    int serial;
    FooEx() : state(LIVE) {
        ++FooExConstructed;
        serial = serial_source++;
    }

    FooEx( const FooEx& item ) : state(LIVE) {
        ++FooExConstructed;
        if( MaxFooCount && (FooExConstructed-FooExDestroyed) >= MaxFooCount )
            throw Foo_exception();
        serial = item.serial;
    }
    ~FooEx() {
        ((state==LIVE)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",123,"state==LIVE",__null));
        ++FooExDestroyed;
        state=DEAD;
        serial=DEAD;
    }
    void operator=( FooEx& item ) {
        ((item.state==LIVE)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",129,"item.state==LIVE",__null));
        ((state==LIVE)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",130,"state==LIVE",__null));
        serial = item.serial;
        if( MaxFooCount==2*Threshold && (FooExConstructed-FooExDestroyed) <= MaxFooCount/4 )
            throw Foo_exception();
    }
} ;


const size_t MAXTHREAD = 256;

static int Sum[MAXTHREAD];





static tbb::atomic<long> PopKind[3];

const int M = 10000;
# 158 "../../src/test/test_concurrent_queue.cpp"
template<typename CQ,typename T>
struct Body: NoAssign {
    CQ* queue;
    const int nthread;
    Body( int nthread_ ) : nthread(nthread_) {}
    void operator()( int thread_id ) const {
        long pop_kind[3] = {0,0,0};
        int serial[MAXTHREAD+1];
        memset( serial, 0, nthread*sizeof(int) );
        ((thread_id<nthread)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",167,"thread_id<nthread",__null));

        long sum = 0;
        for( long j=0; j<M; ++j ) {
            T f;
            f.thread_id = DEAD;
            f.serial = DEAD;
            bool prepopped = false;
            if( j&1 ) {
                prepopped = queue->try_pop(f);
                ++pop_kind[prepopped];
            }
            T g;
            g.thread_id = thread_id;
            g.serial = j+1;
            queue->push( g );
            if( !prepopped ) {
                while( !(queue)->try_pop(f) ) sched_yield();
                ++pop_kind[2];
            }
            ((f.thread_id<=nthread)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",187,"f.thread_id<=nthread",__null));
            ((f.thread_id==nthread || serial[f.thread_id]<f.serial)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",188,"f.thread_id==nthread || serial[f.thread_id]<f.serial","partial order violation"));
            serial[f.thread_id] = f.serial;
            sum += f.serial-1;
        }
        Sum[thread_id] = sum;
        for( int k=0; k<3; ++k )
            PopKind[k] += pop_kind[k];
    }
};



template<typename T, typename A = tbb::cache_aligned_allocator<T> >
class ConcQWithSizeWrapper : public tbb::concurrent_queue<T> {
public:
    ConcQWithSizeWrapper() {}
    template<typename InputIterator>
    ConcQWithSizeWrapper( InputIterator begin, InputIterator end, const A& a = A()) : tbb::concurrent_queue<T>(begin,end,a) {}
    size_t size() const { return this->unsafe_size(); }
};

template<typename T>
class ConcQPushPopWrapper : public tbb::concurrent_queue<T> {
public:
    ConcQPushPopWrapper() : my_capacity( size_t(-1)/(sizeof(void*)+sizeof(T)) ) {}
    size_t size() const { return this->unsafe_size(); }
    void set_capacity( const ptrdiff_t n ) { my_capacity = n; }
    bool try_push( const T& source ) { return this->push( source ); }
    bool try_pop( T& dest ) { return this->tbb::concurrent_queue<T>::try_pop( dest ); }
    size_t my_capacity;
};

template<typename T>
class ConcQWithCapacity : public tbb::concurrent_queue<T> {
public:
    ConcQWithCapacity() : my_capacity( size_t(-1)/(sizeof(void*)+sizeof(T)) ) {}
    size_t size() const { return this->unsafe_size(); }
    size_t capacity() const { return my_capacity; }
    void set_capacity( const int n ) { my_capacity = n; }
    bool try_push( const T& source ) { this->push( source ); return (size_t)source.serial<my_capacity; }

    bool try_pop( T& dest ) { this->tbb::concurrent_queue<T>::try_pop( dest ); return (size_t)dest.serial<my_capacity; }

    size_t my_capacity;
};


template<typename CQ, typename T>
void TestPushPop( size_t prefill, ptrdiff_t capacity, int nthread ) {
    ((nthread>0)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",237,"nthread>0","nthread must be positive"));
    ptrdiff_t signed_prefill = ptrdiff_t(prefill);
    if( signed_prefill+1>=capacity )
        return;
    bool success = false;
    for( int k=0; k<3; ++k )
        PopKind[k] = 0;
    for( int trial=0; !success; ++trial ) {
        T::clear_counters();
        Body<CQ,T> body(nthread);
        CQ queue;
        queue.set_capacity( capacity );
        body.queue = &queue;
        for( size_t i=0; i<prefill; ++i ) {
            T f;
            f.thread_id = nthread;
            f.serial = 1+int(i);
            queue.push(f);
            ((unsigned(queue.size())==i+1)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",255,"unsigned(queue.size())==i+1",__null));
            ((!queue.empty())?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",256,"!queue.empty()",__null));
        }
        tbb::tick_count t0 = tbb::tick_count::now();
        NativeParallelFor( nthread, body );
        tbb::tick_count t1 = tbb::tick_count::now();
        double timing = (t1-t0).seconds();
        !Verbose ? (void)0 : Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 262, __FUNCTION__)->trace("prefill=%d capacity=%d threads=%d time = %g = %g nsec/operation\n", int(prefill), int(capacity), nthread, timing, timing/(2*M*nthread)*1.E9);
        int sum = 0;
        for( int k=0; k<nthread; ++k )
            sum += Sum[k];
        int expected = int(nthread*((M-1)*M/2) + ((prefill-1)*prefill)/2);
        for( int i=int(prefill); --i>=0; ) {
            ((!queue.empty())?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",268,"!queue.empty()",__null));
            T f;
            bool result = queue.try_pop(f);
            ((result)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",271,"result",__null));
            ((int(queue.size())==i)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",272,"int(queue.size())==i",__null));
            sum += f.serial-1;
        }
        ((queue.empty())?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",275,"queue.empty()",__null));
        ((queue.size()==0)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",276,"queue.size()==0",__null));
        if( sum!=expected )
            Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 278, __FUNCTION__)->trace("sum=%d expected=%d\n",sum,expected);
        ((T::get_n_constructed()==T::get_n_destroyed())?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",279,"T::get_n_constructed()==T::get_n_destroyed()",__null));


        success = true;
        if( nthread>1 && prefill==0 ) {

            for( int k=0; k<2; ++k ) {







                const int min_requirement = 100;
                const int max_trial = 20;

                if( PopKind[k]<min_requirement ) {
                    if( trial>=max_trial ) {
                        if( Verbose )
                            Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 299, __FUNCTION__)->trace("Warning: %d threads had only %ld pop_if_present operations %s after %d trials (expected at least %d). "
                               "This problem may merely be unlucky scheduling. "
                               "Investigate only if it happens repeatedly.\n",
                               nthread, long(PopKind[k]), k==0?"failed":"succeeded", max_trial, min_requirement);
                        else
                            Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 304, __FUNCTION__)->trace("Warning: the number of %s pop_if_present operations is less than expected for %d threads. Investigate if it happens repeatedly.\n",
                               k==0?"failed":"succeeded", nthread );

                    } else {
                        success = false;
                    }
               }
            }
        }
    }
}

class Bar {
    state_t state;
public:
    ptrdiff_t my_id;
    Bar() : state(LIVE), my_id(-1) {}
    Bar(size_t _i) : state(LIVE), my_id(_i) {}
    Bar( const Bar& a_bar ) : state(LIVE) {
        ((a_bar.state==LIVE)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",323,"a_bar.state==LIVE",__null));
        my_id = a_bar.my_id;
    }
    ~Bar() {
        ((state==LIVE)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",327,"state==LIVE",__null));
        state = DEAD;
        my_id = DEAD;
    }
    void operator=( const Bar& a_bar ) {
        ((a_bar.state==LIVE)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",332,"a_bar.state==LIVE",__null));
        ((state==LIVE)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",333,"state==LIVE",__null));
        my_id = a_bar.my_id;
    }
    friend bool operator==(const Bar& bar1, const Bar& bar2 ) ;
} ;

bool operator==(const Bar& bar1, const Bar& bar2) {
    ((bar1.state==LIVE)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",340,"bar1.state==LIVE",__null));
    ((bar2.state==LIVE)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",341,"bar2.state==LIVE",__null));
    return bar1.my_id == bar2.my_id;
}

class BarIterator
{
    Bar* bar_ptr;
    BarIterator(Bar* bp_) : bar_ptr(bp_) {}
public:
    ~BarIterator() {}
    BarIterator& operator=( const BarIterator& other ) {
        bar_ptr = other.bar_ptr;
        return *this;
    }
    Bar& operator*() const {
        return *bar_ptr;
    }
    BarIterator& operator++() {
        ++bar_ptr;
        return *this;
    }
    Bar* operator++(int) {
        Bar* result = &operator*();
        operator++();
        return result;
    }
    friend bool operator==(const BarIterator& bia, const BarIterator& bib) ;
    friend bool operator!=(const BarIterator& bia, const BarIterator& bib) ;
    template<typename CQ, typename T, typename TIter, typename CQ_EX, typename T_EX>
    friend void TestConstructors ();
} ;

bool operator==(const BarIterator& bia, const BarIterator& bib) {
    return bia.bar_ptr==bib.bar_ptr;
}

bool operator!=(const BarIterator& bia, const BarIterator& bib) {
    return bia.bar_ptr!=bib.bar_ptr;
}


class Bar_exception : public std::bad_alloc {
public:
    virtual const char *what() const throw() { return "making the entry invalid"; }
    virtual ~Bar_exception() throw() {}
};

class BarEx {
    static int count;
public:
    state_t state;
    typedef enum {
        PREPARATION,
        COPY_CONSTRUCT
    } mode_t;
    static mode_t mode;
    ptrdiff_t my_id;
    ptrdiff_t my_tilda_id;
    static int button;
    BarEx() : state(LIVE), my_id(-1), my_tilda_id(-1) {}
    BarEx(size_t _i) : state(LIVE), my_id(_i), my_tilda_id(my_id^(-1)) {}
    BarEx( const BarEx& a_bar ) : state(LIVE) {
        ((a_bar.state==LIVE)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",403,"a_bar.state==LIVE",__null));
        my_id = a_bar.my_id;
        if( mode==PREPARATION )
            if( !( ++count % 100 ) )
                throw Bar_exception();
        my_tilda_id = a_bar.my_tilda_id;
    }
    ~BarEx() {
        ((state==LIVE)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",411,"state==LIVE",__null));
        state = DEAD;
        my_id = DEAD;
    }
    static void set_mode( mode_t m ) { mode = m; }
    void operator=( const BarEx& a_bar ) {
        ((a_bar.state==LIVE)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",417,"a_bar.state==LIVE",__null));
        ((state==LIVE)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",418,"state==LIVE",__null));
        my_id = a_bar.my_id;
        my_tilda_id = a_bar.my_tilda_id;
    }
    friend bool operator==(const BarEx& bar1, const BarEx& bar2 ) ;
} ;

int BarEx::count = 0;
BarEx::mode_t BarEx::mode = BarEx::PREPARATION;

bool operator==(const BarEx& bar1, const BarEx& bar2) {
    ((bar1.state==LIVE)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",429,"bar1.state==LIVE",__null));
    ((bar2.state==LIVE)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",430,"bar2.state==LIVE",__null));
    (((bar1.my_id ^ bar1.my_tilda_id) == -1)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",431,"(bar1.my_id ^ bar1.my_tilda_id) == -1",__null));
    (((bar2.my_id ^ bar2.my_tilda_id) == -1)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",432,"(bar2.my_id ^ bar2.my_tilda_id) == -1",__null));
    return bar1.my_id==bar2.my_id && bar1.my_tilda_id==bar2.my_tilda_id;
}
# 453 "../../src/test/test_concurrent_queue.cpp"
template<typename CQ, typename T, typename TIter, typename CQ_EX, typename T_EX>
void TestConstructors ()
{
    CQ src_queue;
    typename CQ::const_iterator dqb;
    typename CQ::const_iterator dqe;
    typename CQ::const_iterator iter;

    for( size_t size=0; size<1001; ++size ) {
        for( size_t i=0; i<size; ++i )
            src_queue.push(T(i+(i^size)));
        typename CQ::const_iterator sqb( src_queue.unsafe_begin() );
        typename CQ::const_iterator sqe( src_queue.unsafe_end());

        CQ dst_queue(sqb, sqe);

        ((src_queue.size()==dst_queue.size())?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",469,"src_queue.size()==dst_queue.size()","different size"));

        src_queue.clear();
    }

    T bar_array[1001];
    for( size_t size=0; size<1001; ++size ) {
        for( size_t i=0; i<size; ++i )
            bar_array[i] = T(i+(i^size));

        const TIter sab(bar_array+0);
        const TIter sae(bar_array+size);

        CQ dst_queue2(sab, sae);

        ((size==unsigned(dst_queue2.size()))?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",484,"size==unsigned(dst_queue2.size())",__null));
        ((sab==TIter(bar_array+0))?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",485,"sab==TIter(bar_array+0)",__null));
        ((sae==TIter(bar_array+size))?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",486,"sae==TIter(bar_array+size)",__null));

        dqb = dst_queue2.unsafe_begin();
        dqe = dst_queue2.unsafe_end();
        TIter v_iter(sab);
        for( ; dqb != dqe; ++dqb, ++v_iter )
            ((*dqb == *v_iter)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",492,"*dqb == *v_iter","unexpected element"));
        ((v_iter==sae)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",493,"v_iter==sae","different size?"));
    }

    src_queue.clear();

    CQ dst_queue3( src_queue );
    ((src_queue.size()==dst_queue3.size())?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",499,"src_queue.size()==dst_queue3.size()",__null));
    ((0==dst_queue3.size())?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",500,"0==dst_queue3.size()",__null));

    int k=0;
    for( size_t i=0; i<1001; ++i ) {
        T tmp_bar;
        src_queue.push(T(++k));
        src_queue.push(T(++k));
        src_queue.try_pop(tmp_bar);

        CQ dst_queue4( src_queue );

        ((src_queue.size()==dst_queue4.size())?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",511,"src_queue.size()==dst_queue4.size()",__null));

        dqb = dst_queue4.unsafe_begin();
        dqe = dst_queue4.unsafe_end();
        iter = src_queue.unsafe_begin();

        for( ; dqb != dqe; ++dqb, ++iter )
            ((*dqb == *iter)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",518,"*dqb == *iter","unexpected element"));

        ((iter==src_queue.unsafe_end())?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",520,"iter==CALL_END(src_queue,i)","different size?"));
    }

    CQ dst_queue5( src_queue );

    ((src_queue.size()==dst_queue5.size())?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",525,"src_queue.size()==dst_queue5.size()",__null));
    dqb = dst_queue5.unsafe_begin();
    dqe = dst_queue5.unsafe_end();
    iter = src_queue.unsafe_begin();
    for( ; dqb != dqe; ++dqb, ++iter )
        ((*dqb == *iter)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",530,"*dqb == *iter","unexpected element"));

    for( size_t i=0; i<100; ++i) {
        T tmp_bar;
        src_queue.push(T(i+1000));
        src_queue.push(T(i+1000));
        src_queue.try_pop(tmp_bar);

        dst_queue5.push(T(i+1000));
        dst_queue5.push(T(i+1000));
        dst_queue5.try_pop(tmp_bar);
    }

    ((src_queue.size()==dst_queue5.size())?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",543,"src_queue.size()==dst_queue5.size()",__null));
    dqb = dst_queue5.unsafe_begin();
    dqe = dst_queue5.unsafe_end();
    iter = src_queue.unsafe_begin();
    for( ; dqb != dqe; ++dqb, ++iter )
        ((*dqb == *iter)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",548,"*dqb == *iter","unexpected element"));
    ((iter==src_queue.unsafe_end())?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",549,"iter==src_queue.unsafe_end()","different size?"));




    k = 0;
    typename CQ_EX::size_type n_elements=0;
    CQ_EX src_queue_ex;
    for( size_t size=0; size<1001; ++size ) {
        T_EX tmp_bar_ex;
        typename CQ_EX::size_type n_successful_pushes=0;
        T_EX::set_mode( T_EX::PREPARATION );
        try {
            src_queue_ex.push(T_EX(k+(k^size)));
            ++n_successful_pushes;
        } catch (...) {
        }
        ++k;
        try {
            src_queue_ex.push(T_EX(k+(k^size)));
            ++n_successful_pushes;
        } catch (...) {
        }
        ++k;
        src_queue_ex.try_pop(tmp_bar_ex);
        n_elements += (n_successful_pushes - 1);
        ((src_queue_ex.size()==n_elements)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",575,"src_queue_ex.size()==n_elements",__null));

        T_EX::set_mode( T_EX::COPY_CONSTRUCT );
        CQ_EX dst_queue_ex( src_queue_ex );

        ((src_queue_ex.size()==dst_queue_ex.size())?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",580,"src_queue_ex.size()==dst_queue_ex.size()",__null));

        typename CQ_EX::const_iterator dqb_ex = dst_queue_ex.unsafe_begin();
        typename CQ_EX::const_iterator dqe_ex = dst_queue_ex.unsafe_end();
        typename CQ_EX::const_iterator iter_ex = src_queue_ex.unsafe_begin();

        for( ; dqb_ex != dqe_ex; ++dqb_ex, ++iter_ex )
            ((*dqb_ex == *iter_ex)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",587,"*dqb_ex == *iter_ex","unexpected element"));
        ((iter_ex==src_queue_ex.unsafe_end())?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",588,"iter_ex==CALL_END(src_queue_ex,size)","different size?"));
    }

}

template<typename Iterator1, typename Iterator2>
void TestIteratorAux( Iterator1 i, Iterator2 j, int size ) {

    Iterator1 old_i;
    for( int k=0; k<size; ++k ) {
        ((i!=j)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",598,"i!=j",__null));
        ((!(i==j))?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",599,"!(i==j)",__null));
        Foo f;
        if( k&1 ) {

            f = *old_i++;

            i = old_i;
        } else {

            f=*i++;
            if( k<size-1 ) {

                ((k+2==i->serial)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",611,"k+2==i->serial",__null));
            }

            old_i = i;
        }
        ((k+1==f.serial)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",616,"k+1==f.serial",__null));
    }
    ((!(i!=j))?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",618,"!(i!=j)",__null));
    ((i==j)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",619,"i==j",__null));
}

template<typename Iterator1, typename Iterator2>
void TestIteratorAssignment( Iterator2 j ) {
    Iterator1 i(j);
    ((i==j)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",625,"i==j",__null));
    ((!(i!=j))?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",626,"!(i!=j)",__null));
    Iterator1 k;
    k = j;
    ((k==j)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",629,"k==j",__null));
    ((!(k!=j))?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",630,"!(k!=j)",__null));
}

template<typename Iterator, typename T>
void TestIteratorTraits() {
    AssertSameType( static_cast<typename Iterator::difference_type*>(0), static_cast<ptrdiff_t*>(0) );
    AssertSameType( static_cast<typename Iterator::value_type*>(0), static_cast<T*>(0) );
    AssertSameType( static_cast<typename Iterator::pointer*>(0), static_cast<T**>(0) );
    AssertSameType( static_cast<typename Iterator::iterator_category*>(0), static_cast<std::forward_iterator_tag*>(0) );
    T x;
    typename Iterator::reference xr = x;
    typename Iterator::pointer xp = &x;
    ((&xr==xp)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",642,"&xr==xp",__null));
}


template<typename CQ>
void TestIterator() {
    CQ queue;
    const CQ& const_queue = queue;
    for( int j=0; j<500; ++j ) {
        TestIteratorAux( queue.unsafe_begin() , queue.unsafe_end() , j );
        TestIteratorAux( const_queue.unsafe_begin(), const_queue.unsafe_end(), j );
        TestIteratorAux( const_queue.unsafe_begin(), queue.unsafe_end() , j );
        TestIteratorAux( queue.unsafe_begin() , const_queue.unsafe_end(), j );
        Foo f;
        f.serial = j+1;
        queue.push(f);
    }
    TestIteratorAssignment<typename CQ::const_iterator>( const_queue.unsafe_begin() );
    TestIteratorAssignment<typename CQ::const_iterator>( queue.unsafe_begin() );
    TestIteratorAssignment<typename CQ::iterator>( queue.unsafe_begin() );
    TestIteratorTraits<typename CQ::const_iterator, const Foo>();
    TestIteratorTraits<typename CQ::iterator, Foo>();
}

template<typename CQ>
void TestConcurrentQueueType() {
    AssertSameType( typename CQ::value_type(), Foo() );
    Foo f;
    const Foo g;
    typename CQ::reference r = f;
    ((&r==&f)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",672,"&r==&f",__null));
    ((!r.is_const())?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",673,"!r.is_const()",__null));
    typename CQ::const_reference cr = g;
    ((&cr==&g)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",675,"&cr==&g",__null));
    ((cr.is_const())?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",676,"cr.is_const()",__null));
}

template<typename CQ, typename T>
void TestEmptyQueue() {
    const CQ queue;
    ((queue.size()==0)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",682,"queue.size()==0",__null));
    ((queue.capacity()>0)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",683,"queue.capacity()>0",__null));
    ((size_t(queue.capacity())>=size_t(-1)/(sizeof(void*)+sizeof(T)))?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",684,"size_t(queue.capacity())>=size_t(-1)/(sizeof(void*)+sizeof(T))",__null));
}
# 698 "../../src/test/test_concurrent_queue.cpp"
template<typename CQ,typename T>
void TestFullQueue() {
    for( int n=0; n<10; ++n ) {
        T::clear_counters();
        CQ queue;
        queue.set_capacity(n);
        for( int i=0; i<=n; ++i ) {
            T f;
            f.serial = i;
            bool result = (queue).try_push(f);
            ((result==(i<n))?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",708,"result==(i<n)",__null));
        }
        for( int i=0; i<=n; ++i ) {
            T f;
            bool result = (queue).try_pop(f);
            ((result==(i<n))?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",713,"result==(i<n)",__null));
            ((!result || f.serial==i)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",714,"!result || f.serial==i",__null));
        }
        ((T::get_n_constructed()==T::get_n_destroyed())?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",716,"T::get_n_constructed()==T::get_n_destroyed()",__null));
    }
}







template<typename CQ>
void TestClear() {
    FooConstructed = 0;
    FooDestroyed = 0;
    const unsigned int n=5;

    CQ queue;
    const int q_capacity=10;
    queue.set_capacity(q_capacity);
    for( size_t i=0; i<n; ++i ) {
        Foo f;
        f.serial = int(i);
        bool result = (queue.push(f), true);
        ((result)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",739,"result",__null));
    }
    ((unsigned(queue.size())==n)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",741,"unsigned(queue.size())==n",__null));
    queue.clear();
    ((queue.size()==0)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",743,"queue.size()==0",__null));
    for( size_t i=0; i<n; ++i ) {
        Foo f;
        f.serial = int(i);
        bool result = (queue.push(f), true);
        ((result)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",748,"result",__null));
    }
    ((unsigned(queue.size())==n)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",750,"unsigned(queue.size())==n",__null));
    queue.clear();
    ((queue.size()==0)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",752,"queue.size()==0",__null));
    for( size_t i=0; i<n; ++i ) {
        Foo f;
        f.serial = int(i);
        bool result = (queue.push(f), true);
        ((result)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",757,"result",__null));
    }
    ((unsigned(queue.size())==n)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",759,"unsigned(queue.size())==n",__null));
}
# 799 "../../src/test/test_concurrent_queue.cpp"
template<typename CQ,typename A1,typename A2,typename T>
void TestExceptionBody() {
    enum methods {
        m_push = 0,
        m_pop
    };

    !Verbose ? (void)0 : Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 806, __FUNCTION__)->trace("Testing exception safety\n");
    MaxFooCount = 5;



    {
        CQ queue0;
        tbb::concurrent_queue<int,A1> queue1;
        for( int i=0; i<2; ++i ) {
            bool caught = false;
            try {
                A2::init_counters();
                A2::set_limits(N/2);
                for( int k=0; k<N; k++ ) {
                    if( i==0 )
                        queue0.push( T() );
                    else
                        queue1.push( k );
                }
            } catch (...) {
                caught = true;
            }
            ((caught)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",828,"caught","call to push should have thrown exception"));
        }
    }
    !Verbose ? (void)0 : Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 831, __FUNCTION__)->trace("... queue destruction test passed\n");

    try {
        int n_pushed=0, n_popped=0;
        for(int t = 0; t <= 1; t++)
        {
            CQ queue_test;
            for( int m=m_push; m<=m_pop; m++ ) {

                A2::init_counters();

                if(t) MaxFooCount = MaxFooCount + 400;
                else A2::set_limits(N/2);

                try {
                    switch(m) {
                    case m_push:
                            for( int k=0; k<N; k++ ) {
                                queue_test.push( T() );
                                n_pushed++;
                            }
                            break;
                    case m_pop:
                            n_popped=0;
                            for( int k=0; k<n_pushed; k++ ) {
                                T elt;
                                queue_test.try_pop( elt );
                                n_popped++;
                            }
                            n_pushed = 0;
                            A2::set_limits();
                            break;
                    }
                    if( !t && m==m_push ) ((false)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",864,"false","should throw an exception"));
                } catch ( Foo_exception & ) {
                    switch(m) {
                    case m_push: {
                                ((ptrdiff_t(queue_test.size())==n_pushed)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",868,"ptrdiff_t(queue_test.size())==n_pushed","incorrect queue size"));
                                long tc = MaxFooCount;
                                MaxFooCount = 0;
                                for( int k=0; k<(int)tc; k++ ) {
                                    queue_test.push( T() );
                                    n_pushed++;
                                }
                                MaxFooCount = tc;
                            }
                            break;
                    case m_pop:
                            MaxFooCount = 0;
                            n_pushed -= (n_popped+1);
                            ((n_pushed>=0)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",881,"n_pushed>=0","n_pushed cannot be less than 0"));
                            for( int k=0; k<1000; k++ ) {
                                queue_test.push( T() );
                                n_pushed++;
                            }
                            ((!queue_test.empty())?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",886,"!queue_test.empty()","queue must not be empty"));
                            ((ptrdiff_t(queue_test.size())==n_pushed)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",887,"ptrdiff_t(queue_test.size())==n_pushed","queue size must be equal to n pushed"));
                            for( int k=0; k<n_pushed; k++ ) {
                                T elt;
                                queue_test.try_pop( elt );
                            }
                            ((queue_test.empty())?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",892,"queue_test.empty()","queue must be empty"));
                            ((queue_test.size()==0)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",893,"queue_test.size()==0","queue must be empty"));
                            break;
                    }
                } catch ( std::bad_alloc & ) {
                    A2::set_limits();
                    size_t size = queue_test.size();
                    switch(m) {
                    case m_push:
                            ((size>0)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",901,"size>0","incorrect queue size"));
                            break;
                    case m_pop:
                            if( !t ) ((false)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",904,"false","should not throw an exceptin"));
                            break;
                    }
                }
                !Verbose ? (void)0 : Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 908, __FUNCTION__)->trace("... for t=%d and m=%d, exception test passed\n", t, m);
            }
        }
    } catch(...) {
        ((false)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",912,"false","unexpected exception"));
    }
}


void TestExceptions() {



    typedef static_counting_allocator<std::allocator<FooEx>, size_t> allocator_t;
    typedef static_counting_allocator<std::allocator<char>, size_t> allocator_char_t;

    TestExceptionBody<ConcQWithSizeWrapper<FooEx, allocator_t>,allocator_t,allocator_char_t,FooEx>();
    TestExceptionBody<tbb::concurrent_bounded_queue<FooEx, allocator_t>,allocator_t,allocator_char_t,FooEx>();




}

template<typename CQ, typename T>
struct TestQueueElements: NoAssign {
    CQ& queue;
    const int nthread;
    TestQueueElements( CQ& q, int n ) : queue(q), nthread(n) {}
    void operator()( int k ) const {
        for( int i=0; i<1000; ++i ) {
            if( (i&0x1)==0 ) {
                ((T(k)<T(nthread))?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",940,"T(k)<T(nthread)",__null));
                queue.push( T(k) );
            } else {

                T item = 0;
                queue.try_pop(item);
                ((item<=T(nthread))?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",946,"item<=T(nthread)",__null));
            }
        }
    }
};


template<typename CQ, typename T>
void TestPrimitiveTypes( int nthread, T exemplar )
{
    CQ queue;
    for( int i=0; i<100; ++i )
        queue.push( exemplar );
    NativeParallelFor( nthread, TestQueueElements<CQ,T>(queue,nthread) );
}


# 1 "../../src/test/harness_m128.h" 1
# 44 "../../src/test/harness_m128.h"
template<typename __Mvec>
class ClassWithVectorType {
    static const int n = 16;
    static const int F = sizeof(__Mvec)/sizeof(float);
    __Mvec field[n];
    void init( int start );
public:
    ClassWithVectorType() {init(-n);}
    ClassWithVectorType( int i ) {init(i);}
    void operator=( const ClassWithVectorType& src ) {
        __Mvec stack[n];
        for( int i=0; i<n; ++i )
            stack[i^5] = src.field[i];
        for( int i=0; i<n; ++i )
            field[i^5] = stack[i];
    }
    ~ClassWithVectorType() {init(-2*n);}
    friend bool operator==( const ClassWithVectorType& x, const ClassWithVectorType& y ) {
        for( int i=0; i<F*n; ++i )
            if( ((const float*)x.field)[i]!=((const float*)y.field)[i] )
                return false;
        return true;
    }
    friend bool operator!=( const ClassWithVectorType& x, const ClassWithVectorType& y ) {
        return !(x==y);
    }
};

template<typename __Mvec>
void ClassWithVectorType<__Mvec>::init( int start ) {
    __Mvec stack[n];
    for( int i=0; i<n; ++i ) {


        __Mvec value[1];
        for( int j=0; j<F; ++j )
            ((float*)value)[j] = float(n*start+F*i+j);
        stack[i^5] = value[0];
    }
    for( int i=0; i<n; ++i )
        field[i^5] = stack[i];
}
# 115 "../../src/test/harness_m128.h"
# 1 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/xmmintrin.h" 1 3 4
# 31 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/xmmintrin.h" 3 4
# 1 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/mmintrin.h" 1 3 4
# 31 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/mmintrin.h" 3 4
typedef long long __m64 __attribute__((__vector_size__(8)));

typedef int __v2si __attribute__((__vector_size__(8)));
typedef short __v4hi __attribute__((__vector_size__(8)));
typedef char __v8qi __attribute__((__vector_size__(8)));

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_empty(void)
{
    __builtin_ia32_emms();
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi32_si64(int __i)
{
    return (__m64)(__v2si){__i, 0};
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi64_si32(__m64 __m)
{
    __v2si __mmx_var2 = (__v2si)__m;
    return __mmx_var2[0];
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi64_m64(long long __i)
{
    return (__m64)__i;
}

static inline long long __attribute__((__always_inline__, __nodebug__))
_mm_cvtm64_si64(__m64 __m)
{
    return (long long)__m;
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_packs_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_packsswb((__v4hi)__m1, (__v4hi)__m2);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_packs_pi32(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_packssdw((__v2si)__m1, (__v2si)__m2);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_packs_pu16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_packuswb((__v4hi)__m1, (__v4hi)__m2);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_unpackhi_pi8(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_shufflevector((__v8qi)__m1, (__v8qi)__m2, 4, 8+4, 5,
                                          8+5, 6, 8+6, 7, 8+7);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_unpackhi_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_shufflevector((__v4hi)__m1, (__v4hi)__m2, 2, 4+2, 3,
                                          4+3);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_unpackhi_pi32(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_shufflevector((__v2si)__m1, (__v2si)__m2, 1, 2+1);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_unpacklo_pi8(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_shufflevector((__v8qi)__m1, (__v8qi)__m2, 0, 8+0, 1,
                                          8+1, 2, 8+2, 3, 8+3);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_unpacklo_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_shufflevector((__v4hi)__m1, (__v4hi)__m2, 0, 4+0, 1,
                                          4+1);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_unpacklo_pi32(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_shufflevector((__v2si)__m1, (__v2si)__m2, 0, 2+0);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_add_pi8(__m64 __m1, __m64 __m2)
{
    return (__m64)((__v8qi)__m1 + (__v8qi)__m2);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_add_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)((__v4hi)__m1 + (__v4hi)__m2);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_add_pi32(__m64 __m1, __m64 __m2)
{
    return (__m64)((__v2si)__m1 + (__v2si)__m2);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_adds_pi8(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_paddsb((__v8qi)__m1, (__v8qi)__m2);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_adds_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_paddsw((__v4hi)__m1, (__v4hi)__m2);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_adds_pu8(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_paddusb((__v8qi)__m1, (__v8qi)__m2);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_adds_pu16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_paddusw((__v4hi)__m1, (__v4hi)__m2);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_sub_pi8(__m64 __m1, __m64 __m2)
{
    return (__m64)((__v8qi)__m1 - (__v8qi)__m2);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_sub_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)((__v4hi)__m1 - (__v4hi)__m2);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_sub_pi32(__m64 __m1, __m64 __m2)
{
    return (__m64)((__v2si)__m1 - (__v2si)__m2);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_subs_pi8(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_psubsb((__v8qi)__m1, (__v8qi)__m2);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_subs_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_psubsw((__v4hi)__m1, (__v4hi)__m2);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_subs_pu8(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_psubusb((__v8qi)__m1, (__v8qi)__m2);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_subs_pu16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_psubusw((__v4hi)__m1, (__v4hi)__m2);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_madd_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_pmaddwd((__v4hi)__m1, (__v4hi)__m2);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_mulhi_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)__builtin_ia32_pmulhw((__v4hi)__m1, (__v4hi)__m2);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_mullo_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)((__v4hi)__m1 * (__v4hi)__m2);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_sll_pi16(__m64 __m, __m64 __count)
{
    return (__m64)__builtin_ia32_psllw((__v4hi)__m, __count);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_slli_pi16(__m64 __m, int __count)
{
    return (__m64)__builtin_ia32_psllwi((__v4hi)__m, __count);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_sll_pi32(__m64 __m, __m64 __count)
{
    return (__m64)__builtin_ia32_pslld((__v2si)__m, __count);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_slli_pi32(__m64 __m, int __count)
{
    return (__m64)__builtin_ia32_pslldi((__v2si)__m, __count);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_sll_si64(__m64 __m, __m64 __count)
{
    return __builtin_ia32_psllq(__m, __count);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_slli_si64(__m64 __m, int __count)
{
    return __builtin_ia32_psllqi(__m, __count);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_sra_pi16(__m64 __m, __m64 __count)
{
    return (__m64)__builtin_ia32_psraw((__v4hi)__m, __count);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_srai_pi16(__m64 __m, int __count)
{
    return (__m64)__builtin_ia32_psrawi((__v4hi)__m, __count);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_sra_pi32(__m64 __m, __m64 __count)
{
    return (__m64)__builtin_ia32_psrad((__v2si)__m, __count);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_srai_pi32(__m64 __m, int __count)
{
    return (__m64)__builtin_ia32_psradi((__v2si)__m, __count);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_srl_pi16(__m64 __m, __m64 __count)
{
    return (__m64)__builtin_ia32_psrlw((__v4hi)__m, __count);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_srli_pi16(__m64 __m, int __count)
{
    return (__m64)__builtin_ia32_psrlwi((__v4hi)__m, __count);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_srl_pi32(__m64 __m, __m64 __count)
{
    return (__m64)__builtin_ia32_psrld((__v2si)__m, __count);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_srli_pi32(__m64 __m, int __count)
{
    return (__m64)__builtin_ia32_psrldi((__v2si)__m, __count);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_srl_si64(__m64 __m, __m64 __count)
{
    return (__m64)__builtin_ia32_psrlq(__m, __count);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_srli_si64(__m64 __m, int __count)
{
    return __builtin_ia32_psrlqi(__m, __count);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_and_si64(__m64 __m1, __m64 __m2)
{
    return __m1 & __m2;
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_andnot_si64(__m64 __m1, __m64 __m2)
{
    return ~__m1 & __m2;
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_or_si64(__m64 __m1, __m64 __m2)
{
    return __m1 | __m2;
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_xor_si64(__m64 __m1, __m64 __m2)
{
    return __m1 ^ __m2;
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cmpeq_pi8(__m64 __m1, __m64 __m2)
{
    return (__m64)((__v8qi)__m1 == (__v8qi)__m2);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cmpeq_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)((__v4hi)__m1 == (__v4hi)__m2);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cmpeq_pi32(__m64 __m1, __m64 __m2)
{
    return (__m64)((__v2si)__m1 == (__v2si)__m2);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cmpgt_pi8(__m64 __m1, __m64 __m2)
{
    return (__m64)((__v8qi)__m1 > (__v8qi)__m2);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cmpgt_pi16(__m64 __m1, __m64 __m2)
{
    return (__m64)((__v4hi)__m1 > (__v4hi)__m2);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cmpgt_pi32(__m64 __m1, __m64 __m2)
{
    return (__m64)((__v2si)__m1 > (__v2si)__m2);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_setzero_si64(void)
{
    return (__m64){ 0LL };
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_set_pi32(int __i1, int __i0)
{
    return (__m64)(__v2si){ __i0, __i1 };
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_set_pi16(short __s3, short __s2, short __s1, short __s0)
{
    return (__m64)(__v4hi){ __s0, __s1, __s2, __s3 };
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_set_pi8(char __b7, char __b6, char __b5, char __b4, char __b3, char __b2,
            char __b1, char __b0)
{
    return (__m64)(__v8qi){ __b0, __b1, __b2, __b3, __b4, __b5, __b6, __b7 };
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_set1_pi32(int __i)
{
    return (__m64)(__v2si){ __i, __i };
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_set1_pi16(short __s)
{
    return (__m64)(__v4hi){ __s, __s, __s, __s };
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_set1_pi8(char __b)
{
    return (__m64)(__v8qi){ __b, __b, __b, __b, __b, __b, __b, __b };
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_setr_pi32(int __i1, int __i0)
{
    return (__m64)(__v2si){ __i1, __i0 };
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_setr_pi16(short __s3, short __s2, short __s1, short __s0)
{
    return (__m64)(__v4hi){ __s3, __s2, __s1, __s0 };
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_setr_pi8(char __b7, char __b6, char __b5, char __b4, char __b3, char __b2,
             char __b1, char __b0)
{
    return (__m64)(__v8qi){ __b7, __b6, __b5, __b4, __b3, __b2, __b1, __b0 };
}
# 32 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/xmmintrin.h" 2 3 4

typedef float __v4sf __attribute__((__vector_size__(16)));
typedef float __m128 __attribute__((__vector_size__(16)));


# 1 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/mm_malloc.h" 1 3 4
# 27 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/mm_malloc.h" 3 4
# 1 "/usr/include/errno.h" 1 3 4
# 28 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/mm_malloc.h" 2 3 4


static inline void *__attribute__((__always_inline__, __nodebug__)) _mm_malloc(size_t size, size_t align)
{
  if (align & (align - 1)) {
    (*__errno_location ()) = 22;
    return 0;
  }

  if (!size)
    return 0;

  if (align < 2 * sizeof(void *))
    align = 2 * sizeof(void *);

  void *mallocedMemory = malloc(size + align);
  if (!mallocedMemory)
    return 0;

  void *alignedMemory = (void *)(((size_t)mallocedMemory + align) & ~((size_t)align - 1));
  ((void **)alignedMemory)[-1] = mallocedMemory;

  return alignedMemory;
}

static inline void __attribute__((__always_inline__, __nodebug__)) _mm_free(void *p)
{
  if (p)
    free(((void **)p)[-1]);
}
# 37 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/xmmintrin.h" 2 3 4

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_add_ss(__m128 a, __m128 b)
{
  a[0] += b[0];
  return a;
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_add_ps(__m128 a, __m128 b)
{
  return a + b;
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_sub_ss(__m128 a, __m128 b)
{
  a[0] -= b[0];
  return a;
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_sub_ps(__m128 a, __m128 b)
{
  return a - b;
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_mul_ss(__m128 a, __m128 b)
{
  a[0] *= b[0];
  return a;
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_mul_ps(__m128 a, __m128 b)
{
  return a * b;
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_div_ss(__m128 a, __m128 b)
{
  a[0] /= b[0];
  return a;
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_div_ps(__m128 a, __m128 b)
{
  return a / b;
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_sqrt_ss(__m128 a)
{
  return __builtin_ia32_sqrtss(a);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_sqrt_ps(__m128 a)
{
  return __builtin_ia32_sqrtps(a);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_rcp_ss(__m128 a)
{
  return __builtin_ia32_rcpss(a);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_rcp_ps(__m128 a)
{
  return __builtin_ia32_rcpps(a);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_rsqrt_ss(__m128 a)
{
  return __builtin_ia32_rsqrtss(a);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_rsqrt_ps(__m128 a)
{
  return __builtin_ia32_rsqrtps(a);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_min_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_minss(a, b);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_min_ps(__m128 a, __m128 b)
{
  return __builtin_ia32_minps(a, b);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_max_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_maxss(a, b);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_max_ps(__m128 a, __m128 b)
{
  return __builtin_ia32_maxps(a, b);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_and_ps(__m128 a, __m128 b)
{
  typedef int __v4si __attribute__((__vector_size__(16)));
  return (__m128)((__v4si)a & (__v4si)b);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_andnot_ps(__m128 a, __m128 b)
{
  typedef int __v4si __attribute__((__vector_size__(16)));
  return (__m128)(~(__v4si)a & (__v4si)b);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_or_ps(__m128 a, __m128 b)
{
  typedef int __v4si __attribute__((__vector_size__(16)));
  return (__m128)((__v4si)a | (__v4si)b);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_xor_ps(__m128 a, __m128 b)
{
  typedef int __v4si __attribute__((__vector_size__(16)));
  return (__m128)((__v4si)a ^ (__v4si)b);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpeq_ss(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpss(a, b, 0);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpeq_ps(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpps(a, b, 0);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmplt_ss(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpss(a, b, 1);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmplt_ps(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpps(a, b, 1);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmple_ss(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpss(a, b, 2);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmple_ps(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpps(a, b, 2);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpgt_ss(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpss(b, a, 1);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpgt_ps(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpps(b, a, 1);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpge_ss(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpss(b, a, 2);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpge_ps(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpps(b, a, 2);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpneq_ss(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpss(a, b, 4);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpneq_ps(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpps(a, b, 4);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpnlt_ss(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpss(a, b, 5);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpnlt_ps(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpps(a, b, 5);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpnle_ss(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpss(a, b, 6);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpnle_ps(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpps(a, b, 6);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpngt_ss(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpss(b, a, 5);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpngt_ps(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpps(b, a, 5);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpnge_ss(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpss(b, a, 6);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpnge_ps(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpps(b, a, 6);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpord_ss(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpss(a, b, 7);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpord_ps(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpps(a, b, 7);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpunord_ss(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpss(a, b, 3);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cmpunord_ps(__m128 a, __m128 b)
{
  return (__m128)__builtin_ia32_cmpps(a, b, 3);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_comieq_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_comieq(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_comilt_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_comilt(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_comile_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_comile(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_comigt_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_comigt(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_comige_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_comige(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_comineq_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_comineq(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_ucomieq_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_ucomieq(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_ucomilt_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_ucomilt(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_ucomile_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_ucomile(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_ucomigt_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_ucomigt(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_ucomige_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_ucomige(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_ucomineq_ss(__m128 a, __m128 b)
{
  return __builtin_ia32_ucomineq(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_cvtss_si32(__m128 a)
{
  return __builtin_ia32_cvtss2si(a);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_cvt_ss2si(__m128 a)
{
  return _mm_cvtss_si32(a);
}



static inline long long __attribute__((__always_inline__, __nodebug__))
_mm_cvtss_si64(__m128 a)
{
  return __builtin_ia32_cvtss2si64(a);
}



static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cvtps_pi32(__m128 a)
{
  return (__m64)__builtin_ia32_cvtps2pi(a);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_cvttss_si32(__m128 a)
{
  return a[0];
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_cvtt_ss2si(__m128 a)
{
  return _mm_cvttss_si32(a);
}

static inline long long __attribute__((__always_inline__, __nodebug__))
_mm_cvttss_si64(__m128 a)
{
  return a[0];
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cvttps_pi32(__m128 a)
{
  return (__m64)__builtin_ia32_cvttps2pi(a);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi32_ss(__m128 a, int b)
{
  a[0] = b;
  return a;
}



static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi64_ss(__m128 a, long long b)
{
  a[0] = b;
  return a;
}



static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvtpi32_ps(__m128 a, __m64 b)
{
  return __builtin_ia32_cvtpi2ps(a, (__v2si)b);
}

static inline float __attribute__((__always_inline__, __nodebug__))
_mm_cvtss_f32(__m128 a)
{
  return a[0];
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_loadh_pi(__m128 a, const __m64 *p)
{
  __m128 b;
  b[0] = *(float*)p;
  b[1] = *((float*)p+1);
  return __builtin_shufflevector(a, b, 0, 1, 4, 5);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_loadl_pi(__m128 a, const __m64 *p)
{
  __m128 b;
  b[0] = *(float*)p;
  b[1] = *((float*)p+1);
  return __builtin_shufflevector(a, b, 4, 5, 2, 3);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_load_ss(const float *p)
{
  return (__m128){ *p, 0, 0, 0 };
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_load1_ps(const float *p)
{
  return (__m128){ *p, *p, *p, *p };
}



static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_load_ps(const float *p)
{
  return *(__m128*)p;
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_loadu_ps(const float *p)
{
  return __builtin_ia32_loadups(p);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_loadr_ps(const float *p)
{
  __m128 a = _mm_load_ps(p);
  return __builtin_shufflevector(a, a, 3, 2, 1, 0);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_set_ss(float w)
{
  return (__m128){ w, 0, 0, 0 };
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_set1_ps(float w)
{
  return (__m128){ w, w, w, w };
}


static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_set_ps1(float w)
{
    return _mm_set1_ps(w);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_set_ps(float z, float y, float x, float w)
{
  return (__m128){ w, x, y, z };
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_setr_ps(float z, float y, float x, float w)
{
  return (__m128){ z, y, x, w };
}

static inline __m128 __attribute__((__always_inline__))
_mm_setzero_ps(void)
{
  return (__m128){ 0, 0, 0, 0 };
}

static inline void __attribute__((__always_inline__))
_mm_storeh_pi(__m64 *p, __m128 a)
{
  __builtin_ia32_storehps((__v2si *)p, a);
}

static inline void __attribute__((__always_inline__))
_mm_storel_pi(__m64 *p, __m128 a)
{
  __builtin_ia32_storelps((__v2si *)p, a);
}

static inline void __attribute__((__always_inline__))
_mm_store_ss(float *p, __m128 a)
{
  *p = a[0];
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_storeu_ps(float *p, __m128 a)
{
  __builtin_ia32_storeups(p, a);
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_store1_ps(float *p, __m128 a)
{
  a = __builtin_shufflevector(a, a, 0, 0, 0, 0);
  _mm_storeu_ps(p, a);
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_store_ps(float *p, __m128 a)
{
  *(__m128 *)p = a;
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_storer_ps(float *p, __m128 a)
{
  a = __builtin_shufflevector(a, a, 3, 2, 1, 0);
  _mm_store_ps(p, a);
}
# 618 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/xmmintrin.h" 3 4
static inline void __attribute__((__always_inline__, __nodebug__))
_mm_stream_pi(__m64 *p, __m64 a)
{
  __builtin_ia32_movntq(p, a);
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_stream_ps(float *p, __m128 a)
{
  __builtin_ia32_movntps(p, a);
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_sfence(void)
{
  __builtin_ia32_sfence();
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_extract_pi16(__m64 a, int n)
{
  __v4hi b = (__v4hi)a;
  return (unsigned short)b[n & 3];
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_insert_pi16(__m64 a, int d, int n)
{
   __v4hi b = (__v4hi)a;
   b[n & 3] = d;
   return (__m64)b;
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_max_pi16(__m64 a, __m64 b)
{
  return (__m64)__builtin_ia32_pmaxsw((__v4hi)a, (__v4hi)b);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_max_pu8(__m64 a, __m64 b)
{
  return (__m64)__builtin_ia32_pmaxub((__v8qi)a, (__v8qi)b);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_min_pi16(__m64 a, __m64 b)
{
  return (__m64)__builtin_ia32_pminsw((__v4hi)a, (__v4hi)b);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_min_pu8(__m64 a, __m64 b)
{
  return (__m64)__builtin_ia32_pminub((__v8qi)a, (__v8qi)b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_movemask_pi8(__m64 a)
{
  return __builtin_ia32_pmovmskb((__v8qi)a);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_mulhi_pu16(__m64 a, __m64 b)
{
  return (__m64)__builtin_ia32_pmulhuw((__v4hi)a, (__v4hi)b);
}






static inline void __attribute__((__always_inline__, __nodebug__))
_mm_maskmove_si64(__m64 d, __m64 n, char *p)
{
  __builtin_ia32_maskmovq((__v8qi)d, (__v8qi)n, p);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_avg_pu8(__m64 a, __m64 b)
{
  return (__m64)__builtin_ia32_pavgb((__v8qi)a, (__v8qi)b);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_avg_pu16(__m64 a, __m64 b)
{
  return (__m64)__builtin_ia32_pavgw((__v4hi)a, (__v4hi)b);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_sad_pu8(__m64 a, __m64 b)
{
  return (__m64)__builtin_ia32_psadbw((__v8qi)a, (__v8qi)b);
}

static inline unsigned int __attribute__((__always_inline__, __nodebug__))
_mm_getcsr(void)
{
  return __builtin_ia32_stmxcsr();
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_setcsr(unsigned int i)
{
  __builtin_ia32_ldmxcsr(i);
}






static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_unpackhi_ps(__m128 a, __m128 b)
{
  return __builtin_shufflevector(a, b, 2, 6, 3, 7);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_unpacklo_ps(__m128 a, __m128 b)
{
  return __builtin_shufflevector(a, b, 0, 4, 1, 5);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_move_ss(__m128 a, __m128 b)
{
  return __builtin_shufflevector(a, b, 4, 1, 2, 3);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_movehl_ps(__m128 a, __m128 b)
{
  return __builtin_shufflevector(a, b, 6, 7, 2, 3);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_movelh_ps(__m128 a, __m128 b)
{
  return __builtin_shufflevector(a, b, 0, 1, 4, 5);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvtpi16_ps(__m64 a)
{
  __m64 b, c;
  __m128 r;

  b = _mm_setzero_si64();
  b = _mm_cmpgt_pi16(b, a);
  c = _mm_unpackhi_pi16(a, b);
  r = _mm_setzero_ps();
  r = _mm_cvtpi32_ps(r, c);
  r = _mm_movelh_ps(r, r);
  c = _mm_unpacklo_pi16(a, b);
  r = _mm_cvtpi32_ps(r, c);

  return r;
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvtpu16_ps(__m64 a)
{
  __m64 b, c;
  __m128 r;

  b = _mm_setzero_si64();
  c = _mm_unpackhi_pi16(a, b);
  r = _mm_setzero_ps();
  r = _mm_cvtpi32_ps(r, c);
  r = _mm_movelh_ps(r, r);
  c = _mm_unpacklo_pi16(a, b);
  r = _mm_cvtpi32_ps(r, c);

  return r;
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvtpi8_ps(__m64 a)
{
  __m64 b;

  b = _mm_setzero_si64();
  b = _mm_cmpgt_pi8(b, a);
  b = _mm_unpacklo_pi8(a, b);

  return _mm_cvtpi16_ps(b);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvtpu8_ps(__m64 a)
{
  __m64 b;

  b = _mm_setzero_si64();
  b = _mm_unpacklo_pi8(a, b);

  return _mm_cvtpi16_ps(b);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvtpi32x2_ps(__m64 a, __m64 b)
{
  __m128 c;

  c = _mm_setzero_ps();
  c = _mm_cvtpi32_ps(c, b);
  c = _mm_movelh_ps(c, c);

  return _mm_cvtpi32_ps(c, a);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cvtps_pi16(__m128 a)
{
  __m64 b, c;

  b = _mm_cvtps_pi32(a);
  a = _mm_movehl_ps(a, a);
  c = _mm_cvtps_pi32(a);

  return _mm_packs_pi16(b, c);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cvtps_pi8(__m128 a)
{
  __m64 b, c;

  b = _mm_cvtps_pi16(a);
  c = _mm_setzero_si64();

  return _mm_packs_pi16(b, c);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_movemask_ps(__m128 a)
{
  return __builtin_ia32_movmskps(a);
}
# 915 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/xmmintrin.h" 3 4
# 1 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/emmintrin.h" 1 3 4
# 31 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/emmintrin.h" 3 4
# 1 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/xmmintrin.h" 1 3 4
# 32 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/emmintrin.h" 2 3 4

typedef double __m128d __attribute__((__vector_size__(16)));
typedef long long __m128i __attribute__((__vector_size__(16)));

typedef int __v4si __attribute__((__vector_size__(16)));
typedef short __v8hi __attribute__((__vector_size__(16)));
typedef char __v16qi __attribute__((__vector_size__(16)));

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_add_sd(__m128d a, __m128d b)
{
  a[0] += b[0];
  return a;
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_add_pd(__m128d a, __m128d b)
{
  return a + b;
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_sub_sd(__m128d a, __m128d b)
{
  a[0] -= b[0];
  return a;
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_sub_pd(__m128d a, __m128d b)
{
  return a - b;
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_mul_sd(__m128d a, __m128d b)
{
  a[0] *= b[0];
  return a;
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_mul_pd(__m128d a, __m128d b)
{
  return a * b;
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_div_sd(__m128d a, __m128d b)
{
  a[0] /= b[0];
  return a;
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_div_pd(__m128d a, __m128d b)
{
  return a / b;
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_sqrt_sd(__m128d a, __m128d b)
{
  __m128d c = __builtin_ia32_sqrtsd(b);
  return (__m128d) { c[0], a[1] };
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_sqrt_pd(__m128d a)
{
  return __builtin_ia32_sqrtpd(a);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_min_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_minsd(a, b);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_min_pd(__m128d a, __m128d b)
{
  return __builtin_ia32_minpd(a, b);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_max_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_maxsd(a, b);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_max_pd(__m128d a, __m128d b)
{
  return __builtin_ia32_maxpd(a, b);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_and_pd(__m128d a, __m128d b)
{
  return (__m128d)((__v4si)a & (__v4si)b);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_andnot_pd(__m128d a, __m128d b)
{
  return (__m128d)(~(__v4si)a & (__v4si)b);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_or_pd(__m128d a, __m128d b)
{
  return (__m128d)((__v4si)a | (__v4si)b);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_xor_pd(__m128d a, __m128d b)
{
  return (__m128d)((__v4si)a ^ (__v4si)b);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpeq_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(a, b, 0);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmplt_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(a, b, 1);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmple_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(a, b, 2);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpgt_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(b, a, 1);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpge_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(b, a, 2);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpord_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(a, b, 7);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpunord_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(a, b, 3);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpneq_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(a, b, 4);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpnlt_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(a, b, 5);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpnle_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(a, b, 6);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpngt_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(b, a, 5);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpnge_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(b, a, 6);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpeq_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(a, b, 0);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmplt_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(a, b, 1);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmple_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(a, b, 2);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpgt_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(b, a, 1);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpge_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(b, a, 2);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpord_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(a, b, 7);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpunord_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(a, b, 3);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpneq_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(a, b, 4);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpnlt_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(a, b, 5);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpnle_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(a, b, 6);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpngt_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(b, a, 5);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpnge_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(b, a, 6);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_comieq_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_comisdeq(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_comilt_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_comisdlt(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_comile_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_comisdle(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_comigt_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_comisdgt(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_comineq_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_comisdneq(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_ucomieq_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_ucomisdeq(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_ucomilt_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_ucomisdlt(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_ucomile_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_ucomisdle(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_ucomigt_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_ucomisdgt(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_ucomineq_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_ucomisdneq(a, b);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvtpd_ps(__m128d a)
{
  return __builtin_ia32_cvtpd2ps(a);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cvtps_pd(__m128 a)
{
  return __builtin_ia32_cvtps2pd(a);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cvtepi32_pd(__m128i a)
{
  return __builtin_ia32_cvtdq2pd((__v4si)a);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cvtpd_epi32(__m128d a)
{
  return __builtin_ia32_cvtpd2dq(a);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_cvtsd_si32(__m128d a)
{
  return __builtin_ia32_cvtsd2si(a);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvtsd_ss(__m128 a, __m128d b)
{
  a[0] = b[0];
  return a;
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi32_sd(__m128d a, int b)
{
  a[0] = b;
  return a;
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cvtss_sd(__m128d a, __m128 b)
{
  a[0] = b[0];
  return a;
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cvttpd_epi32(__m128d a)
{
  return (__m128i)__builtin_ia32_cvttpd2dq(a);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_cvttsd_si32(__m128d a)
{
  return a[0];
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cvtpd_pi32(__m128d a)
{
  return (__m64)__builtin_ia32_cvtpd2pi(a);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cvttpd_pi32(__m128d a)
{
  return (__m64)__builtin_ia32_cvttpd2pi(a);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cvtpi32_pd(__m64 a)
{
  return __builtin_ia32_cvtpi2pd((__v2si)a);
}

static inline double __attribute__((__always_inline__, __nodebug__))
_mm_cvtsd_f64(__m128d a)
{
  return a[0];
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_load_pd(double const *dp)
{
  return *(__m128d*)dp;
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_load1_pd(double const *dp)
{
  return (__m128d){ dp[0], dp[0] };
}



static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_loadr_pd(double const *dp)
{
  return (__m128d){ dp[1], dp[0] };
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_loadu_pd(double const *dp)
{
  return __builtin_ia32_loadupd(dp);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_load_sd(double const *dp)
{
  return (__m128d){ *dp, 0.0 };
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_loadh_pd(__m128d a, double const *dp)
{
  return __builtin_shufflevector(a, *(__m128d *)dp, 0, 2);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_loadl_pd(__m128d a, double const *dp)
{
  return __builtin_shufflevector(a, *(__m128d *)dp, 2, 1);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_set_sd(double w)
{
  return (__m128d){ w, 0 };
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_set1_pd(double w)
{
  return (__m128d){ w, w };
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_set_pd(double w, double x)
{
  return (__m128d){ x, w };
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_setr_pd(double w, double x)
{
  return (__m128d){ w, x };
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_setzero_pd(void)
{
  return (__m128d){ 0, 0 };
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_move_sd(__m128d a, __m128d b)
{
  return (__m128d){ b[0], a[1] };
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_store_sd(double *dp, __m128d a)
{
  dp[0] = a[0];
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_store1_pd(double *dp, __m128d a)
{
  dp[0] = a[0];
  dp[1] = a[0];
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_store_pd(double *dp, __m128d a)
{
  *(__m128d *)dp = a;
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_storeu_pd(double *dp, __m128d a)
{
  __builtin_ia32_storeupd(dp, a);
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_storer_pd(double *dp, __m128d a)
{
  dp[0] = a[1];
  dp[1] = a[0];
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_storeh_pd(double *dp, __m128d a)
{
  dp[0] = a[1];
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_storel_pd(double *dp, __m128d a)
{
  dp[0] = a[0];
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_add_epi8(__m128i a, __m128i b)
{
  return (__m128i)((__v16qi)a + (__v16qi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_add_epi16(__m128i a, __m128i b)
{
  return (__m128i)((__v8hi)a + (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_add_epi32(__m128i a, __m128i b)
{
  return (__m128i)((__v4si)a + (__v4si)b);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_add_si64(__m64 a, __m64 b)
{
  return a + b;
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_add_epi64(__m128i a, __m128i b)
{
  return a + b;
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_adds_epi8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_paddsb128((__v16qi)a, (__v16qi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_adds_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_paddsw128((__v8hi)a, (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_adds_epu8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_paddusb128((__v16qi)a, (__v16qi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_adds_epu16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_paddusw128((__v8hi)a, (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_avg_epu8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pavgb128((__v16qi)a, (__v16qi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_avg_epu16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pavgw128((__v8hi)a, (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_madd_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pmaddwd128((__v8hi)a, (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_max_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pmaxsw128((__v8hi)a, (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_max_epu8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pmaxub128((__v16qi)a, (__v16qi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_min_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pminsw128((__v8hi)a, (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_min_epu8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pminub128((__v16qi)a, (__v16qi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_mulhi_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pmulhw128((__v8hi)a, (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_mulhi_epu16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pmulhuw128((__v8hi)a, (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_mullo_epi16(__m128i a, __m128i b)
{
  return (__m128i)((__v8hi)a * (__v8hi)b);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_mul_su32(__m64 a, __m64 b)
{
  return __builtin_ia32_pmuludq((__v2si)a, (__v2si)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_mul_epu32(__m128i a, __m128i b)
{
  return __builtin_ia32_pmuludq128((__v4si)a, (__v4si)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sad_epu8(__m128i a, __m128i b)
{
  return __builtin_ia32_psadbw128((__v16qi)a, (__v16qi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sub_epi8(__m128i a, __m128i b)
{
  return (__m128i)((__v16qi)a - (__v16qi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sub_epi16(__m128i a, __m128i b)
{
  return (__m128i)((__v8hi)a - (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sub_epi32(__m128i a, __m128i b)
{
  return (__m128i)((__v4si)a - (__v4si)b);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_sub_si64(__m64 a, __m64 b)
{
  return a - b;
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sub_epi64(__m128i a, __m128i b)
{
  return a - b;
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_subs_epi8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_psubsb128((__v16qi)a, (__v16qi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_subs_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_psubsw128((__v8hi)a, (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_subs_epu8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_psubusb128((__v16qi)a, (__v16qi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_subs_epu16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_psubusw128((__v8hi)a, (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_and_si128(__m128i a, __m128i b)
{
  return a & b;
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_andnot_si128(__m128i a, __m128i b)
{
  return ~a & b;
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_or_si128(__m128i a, __m128i b)
{
  return a | b;
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_xor_si128(__m128i a, __m128i b)
{
  return a ^ b;
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_slli_si128(__m128i a, int imm)
{
  return __builtin_ia32_pslldqi128(a, imm * 8);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_slli_epi16(__m128i a, int count)
{
  return (__m128i)__builtin_ia32_psllwi128((__v8hi)a, count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sll_epi16(__m128i a, __m128i count)
{
  return (__m128i)__builtin_ia32_psllw128((__v8hi)a, (__v8hi)count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_slli_epi32(__m128i a, int count)
{
  return (__m128i)__builtin_ia32_pslldi128((__v4si)a, count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sll_epi32(__m128i a, __m128i count)
{
  return (__m128i)__builtin_ia32_pslld128((__v4si)a, (__v4si)count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_slli_epi64(__m128i a, int count)
{
  return __builtin_ia32_psllqi128(a, count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sll_epi64(__m128i a, __m128i count)
{
  return __builtin_ia32_psllq128(a, count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_srai_epi16(__m128i a, int count)
{
  return (__m128i)__builtin_ia32_psrawi128((__v8hi)a, count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sra_epi16(__m128i a, __m128i count)
{
  return (__m128i)__builtin_ia32_psraw128((__v8hi)a, (__v8hi)count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_srai_epi32(__m128i a, int count)
{
  return (__m128i)__builtin_ia32_psradi128((__v4si)a, count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sra_epi32(__m128i a, __m128i count)
{
  return (__m128i)__builtin_ia32_psrad128((__v4si)a, (__v4si)count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_srli_si128(__m128i a, int imm)
{
  return __builtin_ia32_psrldqi128(a, imm * 8);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_srli_epi16(__m128i a, int count)
{
  return (__m128i)__builtin_ia32_psrlwi128((__v8hi)a, count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_srl_epi16(__m128i a, __m128i count)
{
  return (__m128i)__builtin_ia32_psrlw128((__v8hi)a, (__v8hi)count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_srli_epi32(__m128i a, int count)
{
  return (__m128i)__builtin_ia32_psrldi128((__v4si)a, count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_srl_epi32(__m128i a, __m128i count)
{
  return (__m128i)__builtin_ia32_psrld128((__v4si)a, (__v4si)count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_srli_epi64(__m128i a, int count)
{
  return __builtin_ia32_psrlqi128(a, count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_srl_epi64(__m128i a, __m128i count)
{
  return __builtin_ia32_psrlq128(a, count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmpeq_epi8(__m128i a, __m128i b)
{
  return (__m128i)((__v16qi)a == (__v16qi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmpeq_epi16(__m128i a, __m128i b)
{
  return (__m128i)((__v8hi)a == (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmpeq_epi32(__m128i a, __m128i b)
{
  return (__m128i)((__v4si)a == (__v4si)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmpgt_epi8(__m128i a, __m128i b)
{
  return (__m128i)((__v16qi)a > (__v16qi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmpgt_epi16(__m128i a, __m128i b)
{
  return (__m128i)((__v8hi)a > (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmpgt_epi32(__m128i a, __m128i b)
{
  return (__m128i)((__v4si)a > (__v4si)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmplt_epi8(__m128i a, __m128i b)
{
  return _mm_cmpgt_epi8(b,a);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmplt_epi16(__m128i a, __m128i b)
{
  return _mm_cmpgt_epi16(b,a);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmplt_epi32(__m128i a, __m128i b)
{
  return _mm_cmpgt_epi32(b,a);
}


static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi64_sd(__m128d a, long long b)
{
  a[0] = b;
  return a;
}

static inline long long __attribute__((__always_inline__, __nodebug__))
_mm_cvtsd_si64(__m128d a)
{
  return __builtin_ia32_cvtsd2si64(a);
}

static inline long long __attribute__((__always_inline__, __nodebug__))
_mm_cvttsd_si64(__m128d a)
{
  return a[0];
}


static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvtepi32_ps(__m128i a)
{
  return __builtin_ia32_cvtdq2ps((__v4si)a);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cvtps_epi32(__m128 a)
{
  return (__m128i)__builtin_ia32_cvtps2dq(a);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cvttps_epi32(__m128 a)
{
  return (__m128i)__builtin_ia32_cvttps2dq(a);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi32_si128(int a)
{
  return (__m128i)(__v4si){ a, 0, 0, 0 };
}


static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi64_si128(long long a)
{
  return (__m128i){ a, 0 };
}


static inline int __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi128_si32(__m128i a)
{
  __v4si b = (__v4si)a;
  return b[0];
}


static inline long long __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi128_si64(__m128i a)
{
  return a[0];
}


static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_load_si128(__m128i const *p)
{
  return *p;
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_loadu_si128(__m128i const *p)
{
  return (__m128i)__builtin_ia32_loaddqu((char const *)p);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_loadl_epi64(__m128i const *p)
{
  return (__m128i) { *(long long*)p, 0};
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set_epi64x(long long q1, long long q0)
{
  return (__m128i){ q0, q1 };
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set_epi64(__m64 q1, __m64 q0)
{
  return (__m128i){ (long long)q0, (long long)q1 };
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set_epi32(int i3, int i2, int i1, int i0)
{
  return (__m128i)(__v4si){ i0, i1, i2, i3};
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set_epi16(short w7, short w6, short w5, short w4, short w3, short w2, short w1, short w0)
{
  return (__m128i)(__v8hi){ w0, w1, w2, w3, w4, w5, w6, w7 };
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set_epi8(char b15, char b14, char b13, char b12, char b11, char b10, char b9, char b8, char b7, char b6, char b5, char b4, char b3, char b2, char b1, char b0)
{
  return (__m128i)(__v16qi){ b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15 };
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set1_epi64x(long long q)
{
  return (__m128i){ q, q };
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set1_epi64(__m64 q)
{
  return (__m128i){ (long long)q, (long long)q };
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set1_epi32(int i)
{
  return (__m128i)(__v4si){ i, i, i, i };
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set1_epi16(short w)
{
  return (__m128i)(__v8hi){ w, w, w, w, w, w, w, w };
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set1_epi8(char b)
{
  return (__m128i)(__v16qi){ b, b, b, b, b, b, b, b, b, b, b, b, b, b, b, b };
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_setr_epi64(__m64 q0, __m64 q1)
{
  return (__m128i){ (long long)q0, (long long)q1 };
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_setr_epi32(int i0, int i1, int i2, int i3)
{
  return (__m128i)(__v4si){ i0, i1, i2, i3};
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_setr_epi16(short w0, short w1, short w2, short w3, short w4, short w5, short w6, short w7)
{
  return (__m128i)(__v8hi){ w0, w1, w2, w3, w4, w5, w6, w7 };
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_setr_epi8(char b0, char b1, char b2, char b3, char b4, char b5, char b6, char b7, char b8, char b9, char b10, char b11, char b12, char b13, char b14, char b15)
{
  return (__m128i)(__v16qi){ b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15 };
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_setzero_si128(void)
{
  return (__m128i){ 0LL, 0LL };
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_store_si128(__m128i *p, __m128i b)
{
  *p = b;
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_storeu_si128(__m128i *p, __m128i b)
{
  __builtin_ia32_storedqu((char *)p, (__v16qi)b);
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_maskmoveu_si128(__m128i d, __m128i n, char *p)
{
  __builtin_ia32_maskmovdqu((__v16qi)d, (__v16qi)n, p);
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_storel_epi64(__m128i *p, __m128i a)
{
  __builtin_ia32_storelv4si((__v2si *)p, a);
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_stream_pd(double *p, __m128d a)
{
  __builtin_ia32_movntpd(p, a);
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_stream_si128(__m128i *p, __m128i a)
{
  __builtin_ia32_movntdq(p, a);
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_stream_si32(int *p, int a)
{
  __builtin_ia32_movnti(p, a);
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_clflush(void const *p)
{
  __builtin_ia32_clflush(p);
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_lfence(void)
{
  __builtin_ia32_lfence();
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_mfence(void)
{
  __builtin_ia32_mfence();
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_packs_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_packsswb128((__v8hi)a, (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_packs_epi32(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_packssdw128((__v4si)a, (__v4si)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_packus_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_packuswb128((__v8hi)a, (__v8hi)b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_extract_epi16(__m128i a, int imm)
{
  __v8hi b = (__v8hi)a;
  return b[imm];
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_insert_epi16(__m128i a, int b, int imm)
{
  __v8hi c = (__v8hi)a;
  c[imm & 7] = b;
  return (__m128i)c;
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_movemask_epi8(__m128i a)
{
  return __builtin_ia32_pmovmskb128((__v16qi)a);
}
# 1230 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/emmintrin.h" 3 4
static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_unpackhi_epi8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_shufflevector((__v16qi)a, (__v16qi)b, 8, 16+8, 9, 16+9, 10, 16+10, 11, 16+11, 12, 16+12, 13, 16+13, 14, 16+14, 15, 16+15);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_unpackhi_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_shufflevector((__v8hi)a, (__v8hi)b, 4, 8+4, 5, 8+5, 6, 8+6, 7, 8+7);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_unpackhi_epi32(__m128i a, __m128i b)
{
  return (__m128i)__builtin_shufflevector((__v4si)a, (__v4si)b, 2, 4+2, 3, 4+3);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_unpackhi_epi64(__m128i a, __m128i b)
{
  return (__m128i)__builtin_shufflevector(a, b, 1, 2+1);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_unpacklo_epi8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_shufflevector((__v16qi)a, (__v16qi)b, 0, 16+0, 1, 16+1, 2, 16+2, 3, 16+3, 4, 16+4, 5, 16+5, 6, 16+6, 7, 16+7);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_unpacklo_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_shufflevector((__v8hi)a, (__v8hi)b, 0, 8+0, 1, 8+1, 2, 8+2, 3, 8+3);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_unpacklo_epi32(__m128i a, __m128i b)
{
  return (__m128i)__builtin_shufflevector((__v4si)a, (__v4si)b, 0, 4+0, 1, 4+1);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_unpacklo_epi64(__m128i a, __m128i b)
{
  return (__m128i)__builtin_shufflevector(a, b, 0, 2+0);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_movepi64_pi64(__m128i a)
{
  return (__m64)a[0];
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_movpi64_pi64(__m64 a)
{
  return (__m128i){ (long long)a, 0 };
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_move_epi64(__m128i a)
{
  return __builtin_shufflevector(a, (__m128i){ 0 }, 0, 2);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_unpackhi_pd(__m128d a, __m128d b)
{
  return __builtin_shufflevector(a, b, 1, 2+1);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_unpacklo_pd(__m128d a, __m128d b)
{
  return __builtin_shufflevector(a, b, 0, 2+0);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_movemask_pd(__m128d a)
{
  return __builtin_ia32_movmskpd(a);
}




static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_castpd_ps(__m128d in)
{
  return (__m128)in;
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_castpd_si128(__m128d in)
{
  return (__m128i)in;
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_castps_pd(__m128 in)
{
  return (__m128d)in;
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_castps_si128(__m128 in)
{
  return (__m128i)in;
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_castsi128_ps(__m128i in)
{
  return (__m128)in;
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_castsi128_pd(__m128i in)
{
  return (__m128d)in;
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_pause(void)
{
  __asm__ volatile ("pause");
}
# 916 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/xmmintrin.h" 2 3 4
# 116 "../../src/test/harness_m128.h" 2

typedef ClassWithVectorType<__m128> ClassWithSSE;
# 963 "../../src/test/test_concurrent_queue.cpp" 2





template<typename ClassWithVectorType, typename Queue>
void TestVectorTypes() {
    Queue q1;
    for( int i=0; i<100; ++i ) {

        ClassWithVectorType bar(i);
        q1.push(bar);
    }


    Queue q2 = q1;

    typename Queue::const_iterator ci = q2.unsafe_begin();
    for( int i=0; i<100; ++i ) {
        ClassWithVectorType foo = *ci;
        ClassWithVectorType bar(i);
        ((*ci==bar)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",984,"*ci==bar",__null));
        ++ci;
    }

    for( int i=0; i<101; ++i ) {
        ClassWithVectorType tmp;
        bool b = q1.try_pop( tmp );
        ((b==(i<100))?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",991,"b==(i<100)",__null));
        ClassWithVectorType bar(i);
        ((!b || tmp==bar)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",993,"!b || tmp==bar",__null));
    }
}


void TestEmptiness()
{
    !Verbose ? (void)0 : Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 1000, __FUNCTION__)->trace(" Test Emptiness\n");

    TestEmptyQueue<ConcQWithCapacity<char>, char>();
    TestEmptyQueue<ConcQWithCapacity<Foo>, Foo>();
    TestEmptyQueue<tbb::concurrent_bounded_queue<char>, char>();
    TestEmptyQueue<tbb::concurrent_bounded_queue<Foo>, Foo>();




}

void TestFullness()
{
    !Verbose ? (void)0 : Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 1014, __FUNCTION__)->trace(" Test Fullness\n");

    TestFullQueue<ConcQWithCapacity<Foo>,Foo>();
    TestFullQueue<tbb::concurrent_bounded_queue<Foo>,Foo>();



}

void TestClearWorks()
{
    !Verbose ? (void)0 : Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 1025, __FUNCTION__)->trace(" Test concurrent_queue::clear() works\n");

    TestClear<ConcQWithCapacity<Foo> >();
    TestClear<tbb::concurrent_bounded_queue<Foo> >();



}

void TestQueueTypeDeclaration()
{
    !Verbose ? (void)0 : Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 1036, __FUNCTION__)->trace(" Test concurrent_queue's types work\n");

    TestConcurrentQueueType<tbb::concurrent_queue<Foo> >();
    TestConcurrentQueueType<tbb::concurrent_bounded_queue<Foo> >();



}

void TestQueueIteratorWorks()
{
    !Verbose ? (void)0 : Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 1047, __FUNCTION__)->trace(" Test concurrent_queue's iterators work\n");

    TestIterator<tbb::concurrent_queue<Foo> >();
    TestIterator<tbb::concurrent_bounded_queue<Foo> >();



}






class Empty;

void TestQueueConstructors()
{
    !Verbose ? (void)0 : Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 1065, __FUNCTION__)->trace(" Test concurrent_queue's constructors work\n");

    TestConstructors<ConcQWithSizeWrapper<Bar>,Bar,BarIterator,ConcQWithSizeWrapper<BarEx>,BarEx>();
    TestConstructors<tbb::concurrent_bounded_queue<Bar>,Bar,BarIterator,tbb::concurrent_bounded_queue<BarEx>,BarEx>();



}

void TestQueueWorksWithPrimitiveTypes()
{
    !Verbose ? (void)0 : Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 1076, __FUNCTION__)->trace(" Test concurrent_queue works with primitive types\n");

    TestPrimitiveTypes<tbb::concurrent_queue<char>, char>( MaxThread, (char)1 );
    TestPrimitiveTypes<tbb::concurrent_queue<int>, int>( MaxThread, (int)-12 );
    TestPrimitiveTypes<tbb::concurrent_queue<float>, float>( MaxThread, (float)-1.2f );
    TestPrimitiveTypes<tbb::concurrent_queue<double>, double>( MaxThread, (double)-4.3 );
    TestPrimitiveTypes<tbb::concurrent_bounded_queue<char>, char>( MaxThread, (char)1 );
    TestPrimitiveTypes<tbb::concurrent_bounded_queue<int>, int>( MaxThread, (int)-12 );
    TestPrimitiveTypes<tbb::concurrent_bounded_queue<float>, float>( MaxThread, (float)-1.2f );
    TestPrimitiveTypes<tbb::concurrent_bounded_queue<double>, double>( MaxThread, (double)-4.3 );






}

void TestQueueWorksWithSSE()
{
    !Verbose ? (void)0 : Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 1096, __FUNCTION__)->trace(" Test concurrent_queue works with SSE data\n");


    TestVectorTypes<ClassWithSSE, tbb::concurrent_queue<ClassWithSSE> >();
    TestVectorTypes<ClassWithSSE, tbb::concurrent_bounded_queue<ClassWithSSE> >();
# 1115 "../../src/test/test_concurrent_queue.cpp"
}

void TestConcurrentPushPop()
{
    !Verbose ? (void)0 : Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 1119, __FUNCTION__)->trace(" Test concurrent_queue's concurrent push and pop\n");
    for( int nthread=MinThread; nthread<=MaxThread; ++nthread ) {
        !Verbose ? (void)0 : Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 1121, __FUNCTION__)->trace(" Testing with %d thread(s)\n", nthread );
# 1132 "../../src/test/test_concurrent_queue.cpp"
        for( size_t prefill=0; prefill<64; prefill+=(1+prefill/3) ) {
            TestPushPop<ConcQPushPopWrapper<Foo>,Foo>(prefill,ptrdiff_t(-1),nthread);
            TestPushPop<ConcQPushPopWrapper<Foo>,Foo>(prefill,ptrdiff_t(1),nthread);
            TestPushPop<ConcQPushPopWrapper<Foo>,Foo>(prefill,ptrdiff_t(2),nthread);
            TestPushPop<ConcQPushPopWrapper<Foo>,Foo>(prefill,ptrdiff_t(10),nthread);
            TestPushPop<ConcQPushPopWrapper<Foo>,Foo>(prefill,ptrdiff_t(100),nthread);
        }
        for( size_t prefill=0; prefill<64; prefill+=(1+prefill/3) ) {
            TestPushPop<tbb::concurrent_bounded_queue<Foo>,Foo>(prefill,ptrdiff_t(-1),nthread);
            TestPushPop<tbb::concurrent_bounded_queue<Foo>,Foo>(prefill,ptrdiff_t(1),nthread);
            TestPushPop<tbb::concurrent_bounded_queue<Foo>,Foo>(prefill,ptrdiff_t(2),nthread);
            TestPushPop<tbb::concurrent_bounded_queue<Foo>,Foo>(prefill,ptrdiff_t(10),nthread);
            TestPushPop<tbb::concurrent_bounded_queue<Foo>,Foo>(prefill,ptrdiff_t(100),nthread);
        }

    }
}


tbb::atomic<size_t> num_pushed;
tbb::atomic<size_t> num_popped;
tbb::atomic<size_t> failed_pushes;
tbb::atomic<size_t> failed_pops;

class SimplePushBody {
    tbb::concurrent_bounded_queue<int>* q;
    int max;
public:
    SimplePushBody(tbb::concurrent_bounded_queue<int>* _q, int hi_thr) : q(_q), max(hi_thr) {}
    void operator()(int thread_id) const {
        if (thread_id == max) {
            Harness::Sleep(50);
            q->abort();
            return;
        }
        try {
            q->push(42);
            ++num_pushed;
        } catch ( tbb::user_abort& ) {
            ++failed_pushes;
        }
    }
};

class SimplePopBody {
    tbb::concurrent_bounded_queue<int>* q;
    int max;
public:
    SimplePopBody(tbb::concurrent_bounded_queue<int>* _q, int hi_thr) : q(_q), max(hi_thr) {}
    void operator()(int thread_id) const {
        int e;
        if (thread_id == max) {
            Harness::Sleep(50);
            q->abort();
            return;
        }
        try {
            q->pop(e);
            ++num_popped;
        } catch ( tbb::user_abort& ) {
            ++failed_pops;
        }
    }
};


void TestAbort() {

    for (int nthreads=MinThread; nthreads<=MaxThread; ++nthreads) {
        !Verbose ? (void)0 : Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 1201, __FUNCTION__)->trace("Testing Abort on %d thread(s).\n", nthreads);

        !Verbose ? (void)0 : Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 1203, __FUNCTION__)->trace("...testing pushing to zero-sized queue\n");
        tbb::concurrent_bounded_queue<int> iq1;
        iq1.set_capacity(0);
        for (int i=0; i<10; ++i) {
            num_pushed = num_popped = failed_pushes = failed_pops = 0;
            SimplePushBody my_push_body1(&iq1, nthreads);
            NativeParallelFor( nthreads+1, my_push_body1 );
            ((num_pushed == 0)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",1210,"num_pushed == 0","no elements should have been pushed to zero-sized queue"));
            (((int)failed_pushes == nthreads)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",1211,"(int)failed_pushes == nthreads","All threads should have failed to push an element to zero-sized queue"));
        }

        !Verbose ? (void)0 : Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 1214, __FUNCTION__)->trace("...testing pushing to small-sized queue\n");
        tbb::concurrent_bounded_queue<int> iq2;
        iq2.set_capacity(2);
        for (int i=0; i<10; ++i) {
            num_pushed = num_popped = failed_pushes = failed_pops = 0;
            SimplePushBody my_push_body2(&iq2, nthreads);
            NativeParallelFor( nthreads+1, my_push_body2 );
            ((num_pushed <= 2)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",1221,"num_pushed <= 2","at most 2 elements should have been pushed to queue of size 2"));
            if (nthreads >= 2)
                (((int)failed_pushes == nthreads-2)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",1223,"(int)failed_pushes == nthreads-2","nthreads-2 threads should have failed to push an element to queue of size 2"));
            int e;
            while (iq2.try_pop(e)) ;
        }

        !Verbose ? (void)0 : Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 1228, __FUNCTION__)->trace("...testing popping from small-sized queue\n");
        tbb::concurrent_bounded_queue<int> iq3;
        iq3.set_capacity(2);
        for (int i=0; i<10; ++i) {
            num_pushed = num_popped = failed_pushes = failed_pops = 0;
            iq3.push(42);
            iq3.push(42);
            SimplePopBody my_pop_body(&iq3, nthreads);
            NativeParallelFor( nthreads+1, my_pop_body);
            ((num_popped <= 2)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",1237,"num_popped <= 2","at most 2 elements should have been popped from queue of size 2"));
            if (nthreads >= 2)
                (((int)failed_pops == nthreads-2)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",1239,"(int)failed_pops == nthreads-2","nthreads-2 threads should have failed to pop an element from queue of size 2"));
            else {
                int e;
                iq3.pop(e);
            }
        }

        !Verbose ? (void)0 : Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 1246, __FUNCTION__)->trace("...testing pushing and popping from small-sized queue\n");
        tbb::concurrent_bounded_queue<int> iq4;
        int cap = nthreads/2;
        if (!cap) cap=1;
        iq4.set_capacity(cap);
        for (int i=0; i<10; ++i) {
            num_pushed = num_popped = failed_pushes = failed_pops = 0;
            SimplePushBody my_push_body2(&iq4, nthreads);
            NativeParallelFor( nthreads+1, my_push_body2 );
            (((int)num_pushed <= cap)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",1255,"(int)num_pushed <= cap","at most cap elements should have been pushed to queue of size cap"));
            if (nthreads >= cap)
                (((int)failed_pushes == nthreads-cap)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",1257,"(int)failed_pushes == nthreads-cap","nthreads-cap threads should have failed to push an element to queue of size cap"));
            SimplePopBody my_pop_body(&iq4, nthreads);
            NativeParallelFor( nthreads+1, my_pop_body);
            (((int)num_popped <= cap)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",1260,"(int)num_popped <= cap","at most cap elements should have been popped from queue of size cap"));
            if (nthreads >= cap)
                (((int)failed_pops == nthreads-cap)?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",1262,"(int)failed_pops == nthreads-cap","nthreads-cap threads should have failed to pop an element from queue of size cap"));
            else {
                int e;
                while (iq4.try_pop(e)) ;
            }
        }
    }

}


template <typename Q>
class FloggerBody : NoAssign {
    Q *q;
public:
    FloggerBody(Q *q_) : q(q_) {}
    void operator()(const int threadID) const {
        typedef typename Q::value_type value_type;
        value_type elem = value_type(threadID);
        for (size_t i=0; i<275; ++i) {
            q->push(elem);
            (void) q->try_pop(elem);
        }
    }
};

template <typename HackedQRep, typename Q>
void TestFloggerHelp(HackedQRep* hack_rep, Q* q, size_t items_per_page) {
    size_t nq = HackedQRep::n_queue;
    size_t hack_val = std::numeric_limits<std::size_t>::max() & ~( nq * items_per_page - 1 );
    hack_rep->head_counter = hack_val;
    hack_rep->tail_counter = hack_val;
    size_t k = hack_rep->tail_counter & -(ptrdiff_t)nq;

    for (size_t i=0; i<nq; ++i) {
        hack_rep->array[i].head_counter = k;
        hack_rep->array[i].tail_counter = k;
    }
    NativeParallelFor(MaxThread, FloggerBody<Q>(q));
    ((q->empty())?(void)0:ReportError("../../src/test/test_concurrent_queue.cpp",1301,"q->empty()","FAILED flogger/empty test."));
    delete q;
}

template <typename T>
void TestFlogger(T ) {
    {
        tbb::concurrent_queue<T>* q = new tbb::concurrent_queue<T>;

        !Verbose ? (void)0 : Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 1310, __FUNCTION__)->trace("Wraparound on strict_ppl::concurrent_queue...");
        hacked_concurrent_queue_rep* hack_rep = ((hacked_concurrent_queue<T>*)(void*)q)->my_rep;
        TestFloggerHelp(hack_rep, q, hack_rep->items_per_page);
        !Verbose ? (void)0 : Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 1313, __FUNCTION__)->trace(" works.\n");







    }
    {
        tbb::concurrent_bounded_queue<T>* q = new tbb::concurrent_bounded_queue<T>;
        !Verbose ? (void)0 : Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 1324, __FUNCTION__)->trace("Wraparound on tbb::concurrent_bounded_queue...");
        hacked_bounded_concurrent_queue* hack_q = (hacked_bounded_concurrent_queue*)(void*)q;
        hacked_bounded_concurrent_queue_rep* hack_rep = hack_q->my_rep;
        TestFloggerHelp(hack_rep, q, hack_q->items_per_page);
        !Verbose ? (void)0 : Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 1328, __FUNCTION__)->trace(" works.\n");
    }
}

void TestWraparound() {
    !Verbose ? (void)0 : Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 1333, __FUNCTION__)->trace("Testing Wraparound...\n");
    TestFlogger(std::numeric_limits<int>::max());
    TestFlogger(std::numeric_limits<unsigned char>::max());
    !Verbose ? (void)0 : Harness::internal::tracer.set_trace_info(0, "../../src/test/test_concurrent_queue.cpp", 1336, __FUNCTION__)->trace("Done Testing Wraparound.\n");
}

int TestMain () {
    TestEmptiness();

    TestFullness();

    TestClearWorks();

    TestQueueTypeDeclaration();

    TestQueueIteratorWorks();

    TestQueueConstructors();

    TestQueueWorksWithPrimitiveTypes();

    TestQueueWorksWithSSE();


    TestConcurrentPushPop();

    TestExceptions();

    TestAbort();

    TestWraparound();

    return Harness::Done;
}
