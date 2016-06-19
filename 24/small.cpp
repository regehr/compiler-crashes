# 1 "../../src/gcc/vec.c"
# 1 "../../src/gcc/vec.c" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 118 "<built-in>" 3
# 118 "<command line>" 1
# 124 "<built-in>" 2
# 1 "../../src/gcc/vec.c" 2
# 25 "../../src/gcc/vec.c"
# 1 "./bconfig.h" 1


# 1 "./auto-host.h" 1
# 4 "./bconfig.h" 2

# 1 "../../src/gcc/../include/ansidecl.h" 1
# 119 "../../src/gcc/../include/ansidecl.h"
extern "C" {
# 438 "../../src/gcc/../include/ansidecl.h"
}
# 6 "./bconfig.h" 2
# 26 "../../src/gcc/vec.c" 2




# 1 "../../src/gcc/system.h" 1
# 26 "../../src/gcc/system.h"
# 1 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/stdarg.h" 1 3 4
# 30 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/stdarg.h" 3 4
typedef __builtin_va_list va_list;
# 48 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 27 "../../src/gcc/system.h" 2
# 37 "../../src/gcc/system.h"
# 1 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/stddef.h" 1 3 4
# 29 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/stddef.h" 3 4
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;


typedef __typeof__(sizeof(int)) size_t;
# 38 "../../src/gcc/system.h" 2


# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
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
# 28 "/usr/include/stdio.h" 2 3 4

extern "C" {






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
# 36 "/usr/include/stdio.h" 2 3 4








struct _IO_FILE;



typedef struct _IO_FILE FILE;
# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 20 "/usr/include/_G_config.h" 3 4
# 1 "/usr/include/wchar.h" 1 3 4
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
# 90 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __ssize_t ssize_t;







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
extern FILE *tmpfile (void) ;
# 205 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) throw () ;





extern char *tmpnam_r (char *__s) throw () ;
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     throw () __attribute__ ((__malloc__)) ;
# 237 "/usr/include/stdio.h" 3 4
extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 262 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);
# 272 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 297 "/usr/include/stdio.h" 3 4
extern FILE *fopen64 (const char *__restrict __filename,
        const char *__restrict __modes) ;
extern FILE *freopen64 (const char *__restrict __filename,
   const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, const char *__modes) throw () ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) throw () ;




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  throw () ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) throw () ;






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
     throw () __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;




extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
# 425 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) throw ();
# 471 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


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
          ;
# 638 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__deprecated__));
# 649 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;
# 689 "/usr/include/stdio.h" 3 4
extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 726 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (const char *__restrict __s,
      FILE *__restrict __stream);
# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);
# 749 "/usr/include/stdio.h" 3 4
extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 798 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 818 "/usr/include/stdio.h" 3 4
extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);




extern void clearerr (FILE *__stream) throw ();

extern int feof (FILE *__stream) throw () ;

extern int ferror (FILE *__stream) throw () ;




extern void clearerr_unlocked (FILE *__stream) throw ();
extern int feof_unlocked (FILE *__stream) throw () ;
extern int ferror_unlocked (FILE *__stream) throw () ;
# 846 "/usr/include/stdio.h" 3 4
extern void perror (const char *__s);







# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];


extern int _sys_nerr;
extern const char *const _sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) throw () ;




extern int fileno_unlocked (FILE *__stream) throw () ;
# 873 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





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



extern int ftrylockfile (FILE *__stream) throw () ;


extern void funlockfile (FILE *__stream) throw ();
# 934 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio.h" 1 3 4
# 35 "/usr/include/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
vprintf (const char *__restrict __fmt, __gnuc_va_list __arg)
{
  return vfprintf (stdout, __fmt, __arg);
}



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








}
# 41 "../../src/gcc/system.h" 2
# 97 "../../src/gcc/system.h"
extern "C" {
# 181 "../../src/gcc/system.h"
}
# 194 "../../src/gcc/system.h"
# 1 "../../src/gcc/../include/safe-ctype.h" 1
# 57 "../../src/gcc/../include/safe-ctype.h"
enum {

  _sch_isblank = 0x0001,
  _sch_iscntrl = 0x0002,
  _sch_isdigit = 0x0004,
  _sch_islower = 0x0008,
  _sch_isprint = 0x0010,
  _sch_ispunct = 0x0020,
  _sch_isspace = 0x0040,
  _sch_isupper = 0x0080,
  _sch_isxdigit = 0x0100,


  _sch_isidst = 0x0200,
  _sch_isvsp = 0x0400,
  _sch_isnvsp = 0x0800,


  _sch_isalpha = _sch_isupper|_sch_islower,
  _sch_isalnum = _sch_isalpha|_sch_isdigit,
  _sch_isidnum = _sch_isidst|_sch_isdigit,
  _sch_isgraph = _sch_isalnum|_sch_ispunct,
  _sch_iscppsp = _sch_isvsp|_sch_isnvsp,
  _sch_isbasic = _sch_isprint|_sch_iscppsp

};


extern const unsigned short _sch_istable[256];
# 110 "../../src/gcc/../include/safe-ctype.h"
extern const unsigned char _sch_toupper[256];
extern const unsigned char _sch_tolower[256];
# 122 "../../src/gcc/../include/safe-ctype.h"
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
# 182 "/usr/include/ctype.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int isalnum (int __c) throw () { return (*__ctype_b_loc ())[(int) (__c)] & (unsigned short int) _ISalnum; }
extern __inline __attribute__ ((__gnu_inline__)) int isalpha (int __c) throw () { return (*__ctype_b_loc ())[(int) (__c)] & (unsigned short int) _ISalpha; }
extern __inline __attribute__ ((__gnu_inline__)) int iscntrl (int __c) throw () { return (*__ctype_b_loc ())[(int) (__c)] & (unsigned short int) _IScntrl; }
extern __inline __attribute__ ((__gnu_inline__)) int isdigit (int __c) throw () { return (*__ctype_b_loc ())[(int) (__c)] & (unsigned short int) _ISdigit; }
extern __inline __attribute__ ((__gnu_inline__)) int islower (int __c) throw () { return (*__ctype_b_loc ())[(int) (__c)] & (unsigned short int) _ISlower; }
extern __inline __attribute__ ((__gnu_inline__)) int isgraph (int __c) throw () { return (*__ctype_b_loc ())[(int) (__c)] & (unsigned short int) _ISgraph; }
extern __inline __attribute__ ((__gnu_inline__)) int isprint (int __c) throw () { return (*__ctype_b_loc ())[(int) (__c)] & (unsigned short int) _ISprint; }
extern __inline __attribute__ ((__gnu_inline__)) int ispunct (int __c) throw () { return (*__ctype_b_loc ())[(int) (__c)] & (unsigned short int) _ISpunct; }
extern __inline __attribute__ ((__gnu_inline__)) int isspace (int __c) throw () { return (*__ctype_b_loc ())[(int) (__c)] & (unsigned short int) _ISspace; }
extern __inline __attribute__ ((__gnu_inline__)) int isupper (int __c) throw () { return (*__ctype_b_loc ())[(int) (__c)] & (unsigned short int) _ISupper; }
extern __inline __attribute__ ((__gnu_inline__)) int isxdigit (int __c) throw () { return (*__ctype_b_loc ())[(int) (__c)] & (unsigned short int) _ISxdigit; }

extern __inline __attribute__ ((__gnu_inline__)) int isblank (int __c) throw () { return (*__ctype_b_loc ())[(int) (__c)] & (unsigned short int) _ISblank; }
# 214 "/usr/include/ctype.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
tolower (int __c) throw ()
{
  return __c >= -128 && __c < 256 ? (*__ctype_tolower_loc ())[__c] : __c;
}

extern __inline __attribute__ ((__gnu_inline__)) int
toupper (int __c) throw ()
{
  return __c >= -128 && __c < 256 ? (*__ctype_toupper_loc ())[__c] : __c;
}
# 257 "/usr/include/ctype.h" 3 4
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
# 258 "/usr/include/ctype.h" 2 3 4
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
# 123 "../../src/gcc/../include/safe-ctype.h" 2
# 195 "../../src/gcc/system.h" 2

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
# 98 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 115 "/usr/include/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 59 "/usr/include/time.h" 3 4
typedef __clock_t clock_t;
# 75 "/usr/include/time.h" 3 4
typedef __time_t time_t;
# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;
# 150 "/usr/include/sys/types.h" 3 4
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


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
# 131 "/usr/include/sys/select.h" 3 4
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
# 197 "../../src/gcc/system.h" 2

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
# 199 "../../src/gcc/system.h" 2






# 1 "/usr/include/c++/4.4/cstring" 1 3
# 41 "/usr/include/c++/4.4/cstring" 3
# 41 "/usr/include/c++/4.4/cstring" 3


# 1 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++config.h" 1 3
# 243 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++config.h" 3
# 1 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/os_defines.h" 1 3
# 244 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++config.h" 2 3


# 1 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/cpu_defines.h" 1 3
# 247 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++config.h" 2 3
# 44 "/usr/include/c++/4.4/cstring" 2 3
# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 41 "/usr/include/c++/4.4/cstddef" 3
# 41 "/usr/include/c++/4.4/cstddef" 3








namespace std __attribute__ ((__visibility__ ("default"))) {

  using ::ptrdiff_t;
  using ::size_t;

}
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
     throw () __attribute__ ((__nonnull__ (2))) ;





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
# 644 "/usr/include/string.h" 3 4
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
# 206 "../../src/gcc/system.h" 2








# 1 "/usr/include/strings.h" 1 3 4
# 215 "../../src/gcc/system.h" 2
# 226 "../../src/gcc/system.h"
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
extern size_t __ctype_get_mb_cur_max (void) throw () ;




extern double atof (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





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
extern char *l64a (long int __n) throw () ;


extern long int a64l (const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
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
extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__)) ;
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





extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     throw () __attribute__ ((__malloc__)) ;




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






extern char *getenv (const char *__name) throw () __attribute__ ((__nonnull__ (1))) ;





extern char *secure_getenv (const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;






extern int putenv (char *__string) throw () __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     throw () __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) throw () __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) throw ();
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) throw () __attribute__ ((__nonnull__ (1)));
# 620 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 630 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 642 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 652 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;
# 674 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 684 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 694 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 706 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 717 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;






extern char *canonicalize_file_name (const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) throw () ;






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);





extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



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




extern int abs (int __x) throw () __attribute__ ((__const__)) ;
extern long int labs (long int __x) throw () __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     throw () __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     throw () __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     throw () __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     throw () __attribute__ ((__const__)) ;
# 812 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;




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
extern int rpmatch (const char *__response) throw () __attribute__ ((__nonnull__ (1))) ;
# 899 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     throw () __attribute__ ((__nonnull__ (1, 2, 3))) ;





extern void setkey (const char *__key) throw () __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) throw ();



extern int unlockpt (int __fd) throw ();




extern char *ptsname (int __fd) throw () ;






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
# 968 "/usr/include/stdlib.h" 3 4
}
# 227 "../../src/gcc/system.h" 2
# 254 "../../src/gcc/system.h"
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
# 267 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 287 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) throw () __attribute__ ((__nonnull__ (1)));




extern int euidaccess (const char *__name, int __type)
     throw () __attribute__ ((__nonnull__ (1)));


extern int eaccess (const char *__name, int __type)
     throw () __attribute__ ((__nonnull__ (1)));






extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) ;
# 334 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) throw ();
# 345 "/usr/include/unistd.h" 3 4
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     throw ();






extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
# 376 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
# 404 "/usr/include/unistd.h" 3 4
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) ;


extern ssize_t pwrite64 (int __fd, const void *__buf, size_t __n,
    __off64_t __offset) ;







extern int pipe (int __pipedes[2]) throw () ;




extern int pipe2 (int __pipedes[2], int __flags) throw () ;
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
     throw () __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) throw () ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     throw () __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) ;



extern int chdir (const char *__path) throw () __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) throw () ;
# 511 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) throw () ;





extern char *get_current_dir_name (void) throw ();







extern char *getwd (char *__buf)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) throw () ;


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





extern int nice (int __inc) throw () ;




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




extern int getgroups (int __size, __gid_t __list[]) throw () ;



extern int group_member (__gid_t __gid) throw ();






extern int setuid (__uid_t __uid) throw () ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) throw () ;




extern int seteuid (__uid_t __uid) throw () ;






extern int setgid (__gid_t __gid) throw () ;




extern int setregid (__gid_t __rgid, __gid_t __egid) throw () ;




extern int setegid (__gid_t __gid) throw () ;





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     throw ();



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     throw ();



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     throw () ;



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     throw () ;






extern __pid_t fork (void) throw ();







extern __pid_t vfork (void) throw ();





extern char *ttyname (int __fd) throw ();



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) throw ();





extern int ttyslot (void) throw ();




extern int link (const char *__from, const char *__to)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     throw () __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (const char *__from, const char *__to)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) throw () __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (2, 3))) ;



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
# 1 "../../src/gcc/../include/getopt.h" 1 3 4
# 27 "../../src/gcc/../include/getopt.h" 3 4
extern "C" {
# 36 "../../src/gcc/../include/getopt.h" 3 4
extern char *optarg;
# 50 "../../src/gcc/../include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 82 "../../src/gcc/../include/getopt.h" 3 4
struct option
{

  const char *name;





  int has_arg;
  int *flag;
  int val;
};
# 113 "../../src/gcc/../include/getopt.h" 3 4
extern int getopt (int argc, char *const *argv, const char *shortopts);







extern int getopt_long (int argc, char *const *argv, const char *shortopts,
          const struct option *longopts, int *longind);
extern int getopt_long_only (int argc, char *const *argv,
        const char *shortopts,
               const struct option *longopts, int *longind);


extern int _getopt_internal (int argc, char *const *argv,
        const char *shortopts,
               const struct option *longopts, int *longind,
        int long_only);
# 141 "../../src/gcc/../include/getopt.h" 3 4
}
# 872 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) throw () __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) throw () ;





extern int getdomainname (char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (const char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) throw ();


extern int revoke (const char *__file) throw () __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     throw () __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) throw ();



extern char *getusershell (void) throw ();
extern void endusershell (void) throw ();
extern void setusershell (void) throw ();





extern int daemon (int __nochdir, int __noclose) throw () ;






extern int chroot (const char *__path) throw () __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);





extern int syncfs (int __fd) throw ();






extern long int gethostid (void);


extern void sync (void) throw ();





extern int getpagesize (void) throw () __attribute__ ((__const__));




extern int getdtablesize (void) throw ();
# 993 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 1005 "/usr/include/unistd.h" 3 4
extern int truncate64 (const char *__file, __off64_t __length)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 1016 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) throw () ;
# 1026 "/usr/include/unistd.h" 3 4
extern int ftruncate64 (int __fd, __off64_t __length) throw () ;
# 1037 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) throw () ;





extern void *sbrk (intptr_t __delta) throw ();
# 1058 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) throw ();
# 1081 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1091 "/usr/include/unistd.h" 3 4
extern int lockf64 (int __fd, int __cmd, __off64_t __len) ;
# 1112 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);







extern char *crypt (const char *__key, const char *__salt)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern void encrypt (char *__glibc_block, int __edflag)
     throw () __attribute__ ((__nonnull__ (1)));






extern void swab (const void *__restrict __from, void *__restrict __to,
    ssize_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));
# 1151 "/usr/include/unistd.h" 3 4
}
# 255 "../../src/gcc/system.h" 2



# 1 "/usr/include/sys/param.h" 1 3 4
# 26 "/usr/include/sys/param.h" 3 4
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
# 27 "/usr/include/sys/param.h" 2 3 4

# 1 "/usr/include/signal.h" 1 3 4
# 30 "/usr/include/signal.h" 3 4
extern "C" {


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 102 "/usr/include/bits/sigset.h" 3 4
extern int __sigismember (const __sigset_t *, int);
extern int __sigaddset (__sigset_t *, int);
extern int __sigdelset (__sigset_t *, int);
# 116 "/usr/include/bits/sigset.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int __sigismember (const __sigset_t *__set, int __sig) { unsigned long int __mask = (((unsigned long int) 1) << (((__sig) - 1) % (8 * sizeof (unsigned long int)))); unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int))); return (__set->__val[__word] & __mask) ? 1 : 0; }
extern __inline __attribute__ ((__gnu_inline__)) int __sigaddset ( __sigset_t *__set, int __sig) { unsigned long int __mask = (((unsigned long int) 1) << (((__sig) - 1) % (8 * sizeof (unsigned long int)))); unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int))); return ((__set->__val[__word] |= __mask), 0); }
extern __inline __attribute__ ((__gnu_inline__)) int __sigdelset ( __sigset_t *__set, int __sig) { unsigned long int __mask = (((unsigned long int) 1) << (((__sig) - 1) % (8 * sizeof (unsigned long int)))); unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int))); return ((__set->__val[__word] &= ~__mask), 0); }
# 33 "/usr/include/signal.h" 2 3 4







typedef __sig_atomic_t sig_atomic_t;
# 57 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/signum.h" 1 3 4
# 58 "/usr/include/signal.h" 2 3 4
# 75 "/usr/include/signal.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 76 "/usr/include/signal.h" 2 3 4




# 1 "/usr/include/bits/siginfo.h" 1 3 4
# 24 "/usr/include/bits/siginfo.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 25 "/usr/include/bits/siginfo.h" 2 3 4







typedef union sigval
  {
    int sival_int;
    void *sival_ptr;
  } sigval_t;
# 58 "/usr/include/bits/siginfo.h" 3 4
typedef __clock_t __sigchld_clock_t;



typedef struct siginfo
  {
    int si_signo;
    int si_errno;

    int si_code;

    union
      {
 int _pad[((128 / sizeof (int)) - 4)];


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;


 struct
   {
     int si_tid;
     int si_overrun;
     sigval_t si_sigval;
   } _timer;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     sigval_t si_sigval;
   } _rt;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __sigchld_clock_t si_utime;
     __sigchld_clock_t si_stime;
   } _sigchld;


 struct
   {
     void *si_addr;
     short int si_addr_lsb;
   } _sigfault;


 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;


 struct
   {
     void *_call_addr;
     int _syscall;
     unsigned int _arch;
   } _sigsys;
      } _sifields;
  } siginfo_t ;
# 153 "/usr/include/bits/siginfo.h" 3 4
enum
{
  SI_ASYNCNL = -60,

  SI_TKILL = -6,

  SI_SIGIO,

  SI_ASYNCIO,

  SI_MESGQ,

  SI_TIMER,

  SI_QUEUE,

  SI_USER,

  SI_KERNEL = 0x80

};



enum
{
  ILL_ILLOPC = 1,

  ILL_ILLOPN,

  ILL_ILLADR,

  ILL_ILLTRP,

  ILL_PRVOPC,

  ILL_PRVREG,

  ILL_COPROC,

  ILL_BADSTK

};


enum
{
  FPE_INTDIV = 1,

  FPE_INTOVF,

  FPE_FLTDIV,

  FPE_FLTOVF,

  FPE_FLTUND,

  FPE_FLTRES,

  FPE_FLTINV,

  FPE_FLTSUB

};


enum
{
  SEGV_MAPERR = 1,

  SEGV_ACCERR

};


enum
{
  BUS_ADRALN = 1,

  BUS_ADRERR,

  BUS_OBJERR,

  BUS_MCEERR_AR,

  BUS_MCEERR_AO

};


enum
{
  TRAP_BRKPT = 1,

  TRAP_TRACE

};


enum
{
  CLD_EXITED = 1,

  CLD_KILLED,

  CLD_DUMPED,

  CLD_TRAPPED,

  CLD_STOPPED,

  CLD_CONTINUED

};


enum
{
  POLL_IN = 1,

  POLL_OUT,

  POLL_MSG,

  POLL_ERR,

  POLL_PRI,

  POLL_HUP

};
# 307 "/usr/include/bits/siginfo.h" 3 4
typedef struct sigevent
  {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 4)];



 __pid_t _tid;

 struct
   {
     void (*_function) (sigval_t);
     pthread_attr_t *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;






enum
{
  SIGEV_SIGNAL = 0,

  SIGEV_NONE,

  SIGEV_THREAD,


  SIGEV_THREAD_ID = 4

};
# 81 "/usr/include/signal.h" 2 3 4




typedef void (*__sighandler_t) (int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     throw ();

extern __sighandler_t sysv_signal (int __sig, __sighandler_t __handler)
     throw ();







extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     throw ();
# 119 "/usr/include/signal.h" 3 4
extern __sighandler_t bsd_signal (int __sig, __sighandler_t __handler)
     throw ();






extern int kill (__pid_t __pid, int __sig) throw ();






extern int killpg (__pid_t __pgrp, int __sig) throw ();




extern int raise (int __sig) throw ();




extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     throw ();
extern int gsignal (int __sig) throw ();




extern void psignal (int __sig, const char *__s);




extern void psiginfo (const siginfo_t *__pinfo, const char *__s);
# 167 "/usr/include/signal.h" 3 4
extern int __sigpause (int __sig_or_mask, int __is_sig);



extern int sigpause (int __sig) __asm__ ("__xpg_sigpause");
# 189 "/usr/include/signal.h" 3 4
extern int sigblock (int __mask) throw () __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) throw () __attribute__ ((__deprecated__));


extern int siggetmask (void) throw () __attribute__ ((__deprecated__));
# 204 "/usr/include/signal.h" 3 4
typedef __sighandler_t sighandler_t;




typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) throw () __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) throw () __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) throw () __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) throw () __attribute__ ((__nonnull__ (1)));


extern int sigismember (const sigset_t *__set, int __signo)
     throw () __attribute__ ((__nonnull__ (1)));



extern int sigisemptyset (const sigset_t *__set) throw () __attribute__ ((__nonnull__ (1)));


extern int sigandset (sigset_t *__set, const sigset_t *__left,
        const sigset_t *__right) throw () __attribute__ ((__nonnull__ (1, 2, 3)));


extern int sigorset (sigset_t *__set, const sigset_t *__left,
       const sigset_t *__right) throw () __attribute__ ((__nonnull__ (1, 2, 3)));





# 1 "/usr/include/bits/sigaction.h" 1 3 4
# 24 "/usr/include/bits/sigaction.h" 3 4
struct sigaction
  {


    union
      {

 __sighandler_t sa_handler;

 void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (void);
  };
# 246 "/usr/include/signal.h" 2 3 4


extern int sigprocmask (int __how, const sigset_t *__restrict __set,
   sigset_t *__restrict __oset) throw ();






extern int sigsuspend (const sigset_t *__set) __attribute__ ((__nonnull__ (1)));


extern int sigaction (int __sig, const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) throw ();


extern int sigpending (sigset_t *__set) throw () __attribute__ ((__nonnull__ (1)));






extern int sigwait (const sigset_t *__restrict __set, int *__restrict __sig)
     __attribute__ ((__nonnull__ (1, 2)));






extern int sigwaitinfo (const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) __attribute__ ((__nonnull__ (1)));






extern int sigtimedwait (const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    const struct timespec *__restrict __timeout)
     __attribute__ ((__nonnull__ (1)));



extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)
     throw ();
# 303 "/usr/include/signal.h" 3 4
extern const char *const _sys_siglist[65];
extern const char *const sys_siglist[65];


struct sigvec
  {
    __sighandler_t sv_handler;
    int sv_mask;

    int sv_flags;

  };
# 327 "/usr/include/signal.h" 3 4
extern int sigvec (int __sig, const struct sigvec *__vec,
     struct sigvec *__ovec) throw ();




# 1 "/usr/include/bits/sigcontext.h" 1 3 4
# 29 "/usr/include/bits/sigcontext.h" 3 4
struct _fpx_sw_bytes
{
  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t padding[7];
};

struct _fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg
{
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short padding[3];
};

struct _xmmreg
{
  __uint32_t element[4];
};
# 121 "/usr/include/bits/sigcontext.h" 3 4
struct _fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _fpxreg _st[8];
  struct _xmmreg _xmm[16];
  __uint32_t padding[24];
};

struct sigcontext
{
  __uint64_t r8;
  __uint64_t r9;
  __uint64_t r10;
  __uint64_t r11;
  __uint64_t r12;
  __uint64_t r13;
  __uint64_t r14;
  __uint64_t r15;
  __uint64_t rdi;
  __uint64_t rsi;
  __uint64_t rbp;
  __uint64_t rbx;
  __uint64_t rdx;
  __uint64_t rax;
  __uint64_t rcx;
  __uint64_t rsp;
  __uint64_t rip;
  __uint64_t eflags;
  unsigned short cs;
  unsigned short gs;
  unsigned short fs;
  unsigned short __pad0;
  __uint64_t err;
  __uint64_t trapno;
  __uint64_t oldmask;
  __uint64_t cr2;
  __extension__ union
    {
      struct _fpstate * fpstate;
      __uint64_t __fpstate_word;
    };
  __uint64_t __reserved1 [8];
};



struct _xsave_hdr
{
  __uint64_t xstate_bv;
  __uint64_t reserved1[2];
  __uint64_t reserved2[5];
};

struct _ymmh_state
{
  __uint32_t ymmh_space[64];
};

struct _xstate
{
  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};
# 333 "/usr/include/signal.h" 2 3 4


extern int sigreturn (struct sigcontext *__scp) throw ();
# 347 "/usr/include/signal.h" 3 4
extern int siginterrupt (int __sig, int __interrupt) throw ();


# 1 "/usr/include/bits/sigstack.h" 1 3 4
# 25 "/usr/include/bits/sigstack.h" 3 4
struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };



enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};
# 49 "/usr/include/bits/sigstack.h" 3 4
typedef struct sigaltstack
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
# 350 "/usr/include/signal.h" 2 3 4


# 1 "/usr/include/sys/ucontext.h" 1 3 4
# 22 "/usr/include/sys/ucontext.h" 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 23 "/usr/include/sys/ucontext.h" 2 3 4








__extension__ typedef long long int greg_t;





typedef greg_t gregset_t[23];



enum
{
  REG_R8 = 0,

  REG_R9,

  REG_R10,

  REG_R11,

  REG_R12,

  REG_R13,

  REG_R14,

  REG_R15,

  REG_RDI,

  REG_RSI,

  REG_RBP,

  REG_RBX,

  REG_RDX,

  REG_RAX,

  REG_RCX,

  REG_RSP,

  REG_RIP,

  REG_EFL,

  REG_CSGSFS,

  REG_ERR,

  REG_TRAPNO,

  REG_OLDMASK,

  REG_CR2

};


struct _libc_fpxreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
  unsigned short int padding[3];
};

struct _libc_xmmreg
{
  __uint32_t element[4];
};

struct _libc_fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _libc_fpxreg _st[8];
  struct _libc_xmmreg _xmm[16];
  __uint32_t padding[24];
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;

    fpregset_t fpregs;
    __extension__ unsigned long long __reserved1 [8];
} mcontext_t;


typedef struct ucontext
  {
    unsigned long int uc_flags;
    struct ucontext *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    __sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
  } ucontext_t;
# 353 "/usr/include/signal.h" 2 3 4





extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     throw () __attribute__ ((__deprecated__));



extern int sigaltstack (const struct sigaltstack *__restrict __ss,
   struct sigaltstack *__restrict __oss) throw ();







extern int sighold (int __sig) throw ();


extern int sigrelse (int __sig) throw ();


extern int sigignore (int __sig) throw ();


extern __sighandler_t sigset (int __sig, __sighandler_t __disp) throw ();







# 1 "/usr/include/bits/sigthread.h" 1 3 4
# 30 "/usr/include/bits/sigthread.h" 3 4
extern int pthread_sigmask (int __how,
       const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)throw ();


extern int pthread_kill (pthread_t __threadid, int __signo) throw ();



extern int pthread_sigqueue (pthread_t __threadid, int __signo,
        const union sigval __value) throw ();
# 389 "/usr/include/signal.h" 2 3 4






extern int __libc_current_sigrtmin (void) throw ();

extern int __libc_current_sigrtmax (void) throw ();



}
# 29 "/usr/include/sys/param.h" 2 3 4


# 1 "/usr/include/bits/param.h" 1 3 4
# 28 "/usr/include/bits/param.h" 3 4
# 1 "/usr/include/linux/param.h" 1 3 4



# 1 "/usr/include/asm/param.h" 1 3 4
# 1 "/usr/include/asm-generic/param.h" 1 3 4
# 2 "/usr/include/asm/param.h" 2 3 4
# 5 "/usr/include/linux/param.h" 2 3 4
# 29 "/usr/include/bits/param.h" 2 3 4
# 32 "/usr/include/sys/param.h" 2 3 4
# 259 "../../src/gcc/system.h" 2
# 268 "../../src/gcc/system.h"
# 1 "../../src/gcc/hwint.h" 1
# 84 "../../src/gcc/hwint.h"
typedef long __gcc_host_wide_int__;
# 196 "../../src/gcc/hwint.h"
static inline int
clz_hwi (unsigned long x)
{
  if (x == 0)
    return (8 * 8);

  return __builtin_clzl (x);





}

static inline int
ctz_hwi (unsigned long x)
{
  if (x == 0)
    return (8 * 8);

  return __builtin_ctzl (x);





}

static inline int
ffs_hwi (unsigned long x)
{

  return __builtin_ffsl (x);





}

static inline int
popcount_hwi (unsigned long x)
{

  return __builtin_popcountl (x);





}

static inline int
floor_log2 (unsigned long x)
{
  return (8 * 8) - 1 - clz_hwi (x);
}

static inline int
ceil_log2 (unsigned long x)
{
  return floor_log2 (x - 1) + 1;
}

static inline int
exact_log2 (unsigned long x)
{
  return x == (x & -x) && x ? ctz_hwi (x) : -1;
}







extern long abs_hwi (long);
extern unsigned long absu_hwi (long);
extern long gcd (long, long);
extern long pos_mul_hwi (long, long);
extern long mul_hwi (long, long);
extern long least_common_multiple (long, long);
# 269 "../../src/gcc/system.h" 2
# 298 "../../src/gcc/system.h"
# 1 "/usr/include/sys/time.h" 1 3 4
# 25 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 26 "/usr/include/sys/time.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 28 "/usr/include/sys/time.h" 2 3 4
# 37 "/usr/include/sys/time.h" 3 4
extern "C" {
# 55 "/usr/include/sys/time.h" 3 4
struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };

typedef struct timezone *__restrict __timezone_ptr_t;
# 71 "/usr/include/sys/time.h" 3 4
extern int gettimeofday (struct timeval *__restrict __tv,
    __timezone_ptr_t __tz) throw () __attribute__ ((__nonnull__ (1)));




extern int settimeofday (const struct timeval *__tv,
    const struct timezone *__tz)
     throw ();





extern int adjtime (const struct timeval *__delta,
      struct timeval *__olddelta) throw ();




enum __itimer_which
  {

    ITIMER_REAL = 0,


    ITIMER_VIRTUAL = 1,



    ITIMER_PROF = 2

  };



struct itimerval
  {

    struct timeval it_interval;

    struct timeval it_value;
  };






typedef int __itimer_which_t;




extern int getitimer (__itimer_which_t __which,
        struct itimerval *__value) throw ();




extern int setitimer (__itimer_which_t __which,
        const struct itimerval *__restrict __new,
        struct itimerval *__restrict __old) throw ();




extern int utimes (const char *__file, const struct timeval __tvp[2])
     throw () __attribute__ ((__nonnull__ (1)));



extern int lutimes (const char *__file, const struct timeval __tvp[2])
     throw () __attribute__ ((__nonnull__ (1)));


extern int futimes (int __fd, const struct timeval __tvp[2]) throw ();






extern int futimesat (int __fd, const char *__file,
        const struct timeval __tvp[2]) throw ();
# 189 "/usr/include/sys/time.h" 3 4
}
# 299 "../../src/gcc/system.h" 2
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4
extern "C" {
# 41 "/usr/include/time.h" 3 4
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
# 300 "../../src/gcc/system.h" 2
# 311 "../../src/gcc/system.h"
# 1 "/usr/include/fcntl.h" 1 3 4
# 28 "/usr/include/fcntl.h" 3 4
extern "C" {







# 1 "/usr/include/bits/fcntl.h" 1 3 4
# 35 "/usr/include/bits/fcntl.h" 3 4
struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };


struct flock64
  {
    short int l_type;
    short int l_whence;
    __off64_t l_start;
    __off64_t l_len;
    __pid_t l_pid;
  };




# 1 "/usr/include/bits/fcntl-linux.h" 1 3 4
# 38 "/usr/include/bits/fcntl-linux.h" 3 4
# 1 "/usr/include/bits/uio.h" 1 3 4
# 43 "/usr/include/bits/uio.h" 3 4
struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
# 39 "/usr/include/bits/fcntl-linux.h" 2 3 4
# 241 "/usr/include/bits/fcntl-linux.h" 3 4
enum __pid_type
  {
    F_OWNER_TID = 0,
    F_OWNER_PID,
    F_OWNER_PGRP,
    F_OWNER_GID = F_OWNER_PGRP
  };


struct f_owner_ex
  {
    enum __pid_type type;
    __pid_t pid;
  };
# 311 "/usr/include/bits/fcntl-linux.h" 3 4
struct file_handle
{
  unsigned int handle_bytes;
  int handle_type;

  unsigned char f_handle[0];
};
# 341 "/usr/include/bits/fcntl-linux.h" 3 4
extern "C" {




extern ssize_t readahead (int __fd, __off64_t __offset, size_t __count)
    throw ();






extern int sync_file_range (int __fd, __off64_t __offset, __off64_t __count,
       unsigned int __flags);






extern ssize_t vmsplice (int __fdout, const struct iovec *__iov,
    size_t __count, unsigned int __flags);





extern ssize_t splice (int __fdin, __off64_t *__offin, int __fdout,
         __off64_t *__offout, size_t __len,
         unsigned int __flags);





extern ssize_t tee (int __fdin, int __fdout, size_t __len,
      unsigned int __flags);






extern int fallocate (int __fd, int __mode, __off_t __offset, __off_t __len);
# 396 "/usr/include/bits/fcntl-linux.h" 3 4
extern int fallocate64 (int __fd, int __mode, __off64_t __offset,
   __off64_t __len);




extern int name_to_handle_at (int __dfd, const char *__name,
         struct file_handle *__handle, int *__mnt_id,
         int __flags) throw ();





extern int open_by_handle_at (int __mountdirfd, struct file_handle *__handle,
         int __flags);



}
# 62 "/usr/include/bits/fcntl.h" 2 3 4
# 36 "/usr/include/fcntl.h" 2 3 4
# 68 "/usr/include/fcntl.h" 3 4
# 1 "/usr/include/bits/stat.h" 1 3 4
# 46 "/usr/include/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 91 "/usr/include/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 106 "/usr/include/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];
# 115 "/usr/include/bits/stat.h" 3 4
  };



struct stat64
  {
    __dev_t st_dev;

    __ino64_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;






    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;





    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;







    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 164 "/usr/include/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];



  };
# 69 "/usr/include/fcntl.h" 2 3 4
# 137 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 146 "/usr/include/fcntl.h" 3 4
extern int open (const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 156 "/usr/include/fcntl.h" 3 4
extern int open64 (const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 170 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 181 "/usr/include/fcntl.h" 3 4
extern int openat64 (int __fd, const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 192 "/usr/include/fcntl.h" 3 4
extern int creat (const char *__file, mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 202 "/usr/include/fcntl.h" 3 4
extern int creat64 (const char *__file, mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 238 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
     int __advise) throw ();
# 250 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise64 (int __fd, off64_t __offset, off64_t __len,
       int __advise) throw ();
# 260 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);
# 271 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate64 (int __fd, off64_t __offset, off64_t __len);
# 282 "/usr/include/fcntl.h" 3 4
}
# 312 "../../src/gcc/system.h" 2
# 352 "../../src/gcc/system.h"
# 1 "/usr/include/sys/wait.h" 1 3 4
# 27 "/usr/include/sys/wait.h" 3 4
extern "C" {
# 102 "/usr/include/sys/wait.h" 3 4
extern __pid_t wait (void * __stat_loc);
# 125 "/usr/include/sys/wait.h" 3 4
extern __pid_t waitpid (__pid_t __pid, int *__stat_loc, int __options);
# 135 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/bits/siginfo.h" 1 3 4
# 24 "/usr/include/bits/siginfo.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 25 "/usr/include/bits/siginfo.h" 2 3 4
# 136 "/usr/include/sys/wait.h" 2 3 4
# 148 "/usr/include/sys/wait.h" 3 4
extern int waitid (idtype_t __idtype, __id_t __id, siginfo_t *__infop,
     int __options);





struct rusage;






extern __pid_t wait3 (void * __stat_loc, int __options,
        struct rusage * __usage) throw ();




extern __pid_t wait4 (__pid_t __pid, void * __stat_loc, int __options,
        struct rusage *__usage) throw ();



}
# 353 "../../src/gcc/system.h" 2
# 383 "../../src/gcc/system.h"
# 1 "/usr/include/sys/mman.h" 1 3 4
# 41 "/usr/include/sys/mman.h" 3 4
# 1 "/usr/include/bits/mman.h" 1 3 4
# 45 "/usr/include/bits/mman.h" 3 4
# 1 "/usr/include/bits/mman-linux.h" 1 3 4
# 46 "/usr/include/bits/mman.h" 2 3 4
# 42 "/usr/include/sys/mman.h" 2 3 4




extern "C" {
# 57 "/usr/include/sys/mman.h" 3 4
extern void *mmap (void *__addr, size_t __len, int __prot,
     int __flags, int __fd, __off_t __offset) throw ();
# 70 "/usr/include/sys/mman.h" 3 4
extern void *mmap64 (void *__addr, size_t __len, int __prot,
       int __flags, int __fd, __off64_t __offset) throw ();




extern int munmap (void *__addr, size_t __len) throw ();




extern int mprotect (void *__addr, size_t __len, int __prot) throw ();







extern int msync (void *__addr, size_t __len, int __flags);




extern int madvise (void *__addr, size_t __len, int __advice) throw ();



extern int posix_madvise (void *__addr, size_t __len, int __advice) throw ();




extern int mlock (const void *__addr, size_t __len) throw ();


extern int munlock (const void *__addr, size_t __len) throw ();




extern int mlockall (int __flags) throw ();



extern int munlockall (void) throw ();







extern int mincore (void *__start, size_t __len, unsigned char *__vec)
     throw ();
# 133 "/usr/include/sys/mman.h" 3 4
extern void *mremap (void *__addr, size_t __old_len, size_t __new_len,
       int __flags, ...) throw ();



extern int remap_file_pages (void *__start, size_t __size, int __prot,
        size_t __pgoff, int __flags) throw ();




extern int shm_open (const char *__name, int __oflag, mode_t __mode);


extern int shm_unlink (const char *__name);

}
# 384 "../../src/gcc/system.h" 2
# 395 "../../src/gcc/system.h"
# 1 "/usr/include/sys/resource.h" 1 3 4
# 24 "/usr/include/sys/resource.h" 3 4
# 1 "/usr/include/bits/resource.h" 1 3 4
# 31 "/usr/include/bits/resource.h" 3 4
enum __rlimit_resource
{

  RLIMIT_CPU = 0,



  RLIMIT_FSIZE = 1,



  RLIMIT_DATA = 2,



  RLIMIT_STACK = 3,



  RLIMIT_CORE = 4,






  __RLIMIT_RSS = 5,



  RLIMIT_NOFILE = 7,
  __RLIMIT_OFILE = RLIMIT_NOFILE,




  RLIMIT_AS = 9,



  __RLIMIT_NPROC = 6,



  __RLIMIT_MEMLOCK = 8,



  __RLIMIT_LOCKS = 10,



  __RLIMIT_SIGPENDING = 11,



  __RLIMIT_MSGQUEUE = 12,





  __RLIMIT_NICE = 13,




  __RLIMIT_RTPRIO = 14,





  __RLIMIT_RTTIME = 15,


  __RLIMIT_NLIMITS = 16,
  __RLIM_NLIMITS = __RLIMIT_NLIMITS


};
# 131 "/usr/include/bits/resource.h" 3 4
typedef __rlim_t rlim_t;




typedef __rlim64_t rlim64_t;


struct rlimit
  {

    rlim_t rlim_cur;

    rlim_t rlim_max;
  };


struct rlimit64
  {

    rlim64_t rlim_cur;

    rlim64_t rlim_max;
 };



enum __rusage_who
{

  RUSAGE_SELF = 0,



  RUSAGE_CHILDREN = -1



  ,

  RUSAGE_THREAD = 1




};



# 1 "/usr/include/bits/time.h" 1 3 4
# 180 "/usr/include/bits/resource.h" 2 3 4







struct rusage
  {

    struct timeval ru_utime;

    struct timeval ru_stime;

    __extension__ union
      {
 long int ru_maxrss;
 __syscall_slong_t __ru_maxrss_word;
      };



    __extension__ union
      {
 long int ru_ixrss;
 __syscall_slong_t __ru_ixrss_word;
      };

    __extension__ union
      {
 long int ru_idrss;
 __syscall_slong_t __ru_idrss_word;
      };

    __extension__ union
      {
 long int ru_isrss;
  __syscall_slong_t __ru_isrss_word;
      };


    __extension__ union
      {
 long int ru_minflt;
 __syscall_slong_t __ru_minflt_word;
      };

    __extension__ union
      {
 long int ru_majflt;
 __syscall_slong_t __ru_majflt_word;
      };

    __extension__ union
      {
 long int ru_nswap;
 __syscall_slong_t __ru_nswap_word;
      };


    __extension__ union
      {
 long int ru_inblock;
 __syscall_slong_t __ru_inblock_word;
      };

    __extension__ union
      {
 long int ru_oublock;
 __syscall_slong_t __ru_oublock_word;
      };

    __extension__ union
      {
 long int ru_msgsnd;
 __syscall_slong_t __ru_msgsnd_word;
      };

    __extension__ union
      {
 long int ru_msgrcv;
 __syscall_slong_t __ru_msgrcv_word;
      };

    __extension__ union
      {
 long int ru_nsignals;
 __syscall_slong_t __ru_nsignals_word;
      };



    __extension__ union
      {
 long int ru_nvcsw;
 __syscall_slong_t __ru_nvcsw_word;
      };


    __extension__ union
      {
 long int ru_nivcsw;
 __syscall_slong_t __ru_nivcsw_word;
      };
  };







enum __priority_which
{
  PRIO_PROCESS = 0,

  PRIO_PGRP = 1,

  PRIO_USER = 2

};


extern "C" {




extern int prlimit (__pid_t __pid, enum __rlimit_resource __resource,
      const struct rlimit *__new_limit,
      struct rlimit *__old_limit) throw ();
# 322 "/usr/include/bits/resource.h" 3 4
extern int prlimit64 (__pid_t __pid, enum __rlimit_resource __resource,
        const struct rlimit64 *__new_limit,
        struct rlimit64 *__old_limit) throw ();



}
# 25 "/usr/include/sys/resource.h" 2 3 4






extern "C" {
# 42 "/usr/include/sys/resource.h" 3 4
typedef int __rlimit_resource_t;
typedef int __rusage_who_t;
typedef int __priority_which_t;





extern int getrlimit (__rlimit_resource_t __resource,
        struct rlimit *__rlimits) throw ();
# 61 "/usr/include/sys/resource.h" 3 4
extern int getrlimit64 (__rlimit_resource_t __resource,
   struct rlimit64 *__rlimits) throw ();






extern int setrlimit (__rlimit_resource_t __resource,
        const struct rlimit *__rlimits) throw ();
# 81 "/usr/include/sys/resource.h" 3 4
extern int setrlimit64 (__rlimit_resource_t __resource,
   const struct rlimit64 *__rlimits) throw ();




extern int getrusage (__rusage_who_t __who, struct rusage *__usage) throw ();





extern int getpriority (__priority_which_t __which, id_t __who) throw ();



extern int setpriority (__priority_which_t __which, id_t __who, int __prio)
     throw ();

}
# 396 "../../src/gcc/system.h" 2



# 1 "/usr/include/sys/times.h" 1 3 4
# 31 "/usr/include/sys/times.h" 3 4
extern "C" {


struct tms
  {
    clock_t tms_utime;
    clock_t tms_stime;

    clock_t tms_cutime;
    clock_t tms_cstime;
  };






extern clock_t times (struct tms *__buffer) throw ();

}
# 400 "../../src/gcc/system.h" 2








extern "C" {
# 432 "../../src/gcc/system.h"
extern int getopt (int, char * const *, const char *);
# 456 "../../src/gcc/system.h"
}




# 1 "/usr/include/malloc.h" 1 3 4
# 35 "/usr/include/malloc.h" 3 4
extern "C" {


extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__)) ;


extern void *calloc (size_t __nmemb, size_t __size)
throw () __attribute__ ((__malloc__)) ;






extern void *realloc (void *__ptr, size_t __size)
throw () __attribute__ ((__warn_unused_result__));


extern void free (void *__ptr) throw ();


extern void cfree (void *__ptr) throw ();


extern void *memalign (size_t __alignment, size_t __size)
throw () __attribute__ ((__malloc__)) ;


extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__)) ;



extern void *pvalloc (size_t __size) throw () __attribute__ ((__malloc__)) ;



extern void *(*__morecore) (ptrdiff_t __size);


extern void *__default_morecore (ptrdiff_t __size)
throw () __attribute__ ((__malloc__));



struct mallinfo
{
  int arena;
  int ordblks;
  int smblks;
  int hblks;
  int hblkhd;
  int usmblks;
  int fsmblks;
  int uordblks;
  int fordblks;
  int keepcost;
};


extern struct mallinfo mallinfo (void) throw ();
# 121 "/usr/include/malloc.h" 3 4
extern int mallopt (int __param, int __val) throw ();



extern int malloc_trim (size_t __pad) throw ();



extern size_t malloc_usable_size (void *__ptr) throw ();


extern void malloc_stats (void) throw ();


extern int malloc_info (int __options, FILE *__fp) throw ();


extern void *malloc_get_state (void) throw ();



extern int malloc_set_state (void *__ptr) throw ();




extern void (*volatile __malloc_initialize_hook) (void)
__attribute__ ((__deprecated__));

extern void (*volatile __free_hook) (void *__ptr,
                                                   const void *)
__attribute__ ((__deprecated__));
extern void *(*volatile __malloc_hook)(size_t __size,
                                                     const void *)
__attribute__ ((__deprecated__));
extern void *(*volatile __realloc_hook)(void *__ptr,
                                                      size_t __size,
                                                      const void *)
__attribute__ ((__deprecated__));
extern void *(*volatile __memalign_hook)(size_t __alignment,
                                                       size_t __size,
                                                       const void *)
__attribute__ ((__deprecated__));
extern void (*volatile __after_morecore_hook) (void);


extern void __malloc_check_init (void) throw () __attribute__ ((__deprecated__));


}
# 461 "../../src/gcc/system.h" 2



extern "C" {
# 480 "../../src/gcc/system.h"
}




# 1 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/stdint.h" 1 3 4
# 33 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/bits/wchar.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 48 "/usr/include/stdint.h" 3 4
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
# 122 "/usr/include/stdint.h" 3 4
typedef unsigned long int uintptr_t;
# 134 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 34 "/home/regehr/z/compiler-install/llvm-r98697-install/lib/clang/1.1/include/stdint.h" 2 3 4
# 485 "../../src/gcc/system.h" 2



# 1 "/usr/include/inttypes.h" 1 3 4
# 266 "/usr/include/inttypes.h" 3 4
extern "C" {




typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
# 290 "/usr/include/inttypes.h" 3 4
extern intmax_t imaxabs (intmax_t __n) throw () __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      throw () __attribute__ ((__const__));


extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base) throw ();


extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) throw ();


extern intmax_t wcstoimax (const wchar_t *__restrict __nptr,
      wchar_t **__restrict __endptr, int __base)
     throw ();


extern uintmax_t wcstoumax (const wchar_t *__restrict __nptr,
       wchar_t ** __restrict __endptr, int __base)
     throw ();





extern long int __strtol_internal (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, int __group)
  throw () __attribute__ ((__nonnull__ (1))) ;

extern __inline __attribute__ ((__gnu_inline__)) intmax_t
strtoimax (const char *__restrict nptr, char **__restrict endptr, int base) throw ()

{
  return __strtol_internal (nptr, endptr, base, 0);
}

extern unsigned long int __strtoul_internal (const char *__restrict __nptr,
          char ** __restrict __endptr,
          int __base, int __group)
  throw () __attribute__ ((__nonnull__ (1))) ;

extern __inline __attribute__ ((__gnu_inline__)) uintmax_t
strtoumax (const char *__restrict nptr, char **__restrict endptr, int base) throw ()

{
  return __strtoul_internal (nptr, endptr, base, 0);
}

extern long int __wcstol_internal (const wchar_t * __restrict __nptr,
       wchar_t **__restrict __endptr,
       int __base, int __group)
  throw () __attribute__ ((__nonnull__ (1))) ;

extern __inline __attribute__ ((__gnu_inline__)) intmax_t
wcstoimax (const wchar_t *__restrict nptr, wchar_t **__restrict endptr, int base) throw ()

{
  return __wcstol_internal (nptr, endptr, base, 0);
}

extern unsigned long int __wcstoul_internal (const wchar_t *
          __restrict __nptr,
          wchar_t **
          __restrict __endptr,
          int __base, int __group)
  throw () __attribute__ ((__nonnull__ (1))) ;

extern __inline __attribute__ ((__gnu_inline__)) uintmax_t
wcstoumax (const wchar_t *__restrict nptr, wchar_t **__restrict endptr, int base) throw ()

{
  return __wcstoul_internal (nptr, endptr, base, 0);
}
# 432 "/usr/include/inttypes.h" 3 4
}
# 489 "../../src/gcc/system.h" 2



extern "C" {
# 535 "../../src/gcc/system.h"
}
# 552 "../../src/gcc/system.h"
# 1 "/usr/include/sys/stat.h" 1 3 4
# 103 "/usr/include/sys/stat.h" 3 4
extern "C" {


# 1 "/usr/include/bits/stat.h" 1 3 4
# 106 "/usr/include/sys/stat.h" 2 3 4
# 209 "/usr/include/sys/stat.h" 3 4
extern int stat (const char *__restrict __file,
   struct stat *__restrict __buf) throw () __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) throw () __attribute__ ((__nonnull__ (2)));
# 228 "/usr/include/sys/stat.h" 3 4
extern int stat64 (const char *__restrict __file,
     struct stat64 *__restrict __buf) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int fstat64 (int __fd, struct stat64 *__buf) throw () __attribute__ ((__nonnull__ (2)));







extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     throw () __attribute__ ((__nonnull__ (2, 3)));
# 253 "/usr/include/sys/stat.h" 3 4
extern int fstatat64 (int __fd, const char *__restrict __file,
        struct stat64 *__restrict __buf, int __flag)
     throw () __attribute__ ((__nonnull__ (2, 3)));







extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) throw () __attribute__ ((__nonnull__ (1, 2)));
# 276 "/usr/include/sys/stat.h" 3 4
extern int lstat64 (const char *__restrict __file,
      struct stat64 *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern int chmod (const char *__file, __mode_t __mode)
     throw () __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     throw () __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) throw ();





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     throw () __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) throw ();




extern __mode_t getumask (void) throw ();



extern int mkdir (const char *__path, __mode_t __mode)
     throw () __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     throw () __attribute__ ((__nonnull__ (2)));






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     throw () __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) throw () __attribute__ ((__nonnull__ (2)));





extern int mkfifo (const char *__path, __mode_t __mode)
     throw () __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     throw () __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     throw () __attribute__ ((__nonnull__ (2)));




extern int futimens (int __fd, const struct timespec __times[2]) throw ();
# 399 "/usr/include/sys/stat.h" 3 4
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     throw () __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, const char *__filename,
      struct stat *__stat_buf) throw () __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, const char *__filename,
       struct stat *__stat_buf) throw () __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, const char *__filename,
         struct stat *__stat_buf, int __flag)
     throw () __attribute__ ((__nonnull__ (3, 4)));
# 432 "/usr/include/sys/stat.h" 3 4
extern int __fxstat64 (int __ver, int __fildes, struct stat64 *__stat_buf)
     throw () __attribute__ ((__nonnull__ (3)));
extern int __xstat64 (int __ver, const char *__filename,
        struct stat64 *__stat_buf) throw () __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat64 (int __ver, const char *__filename,
         struct stat64 *__stat_buf) throw () __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat64 (int __ver, int __fildes, const char *__filename,
    struct stat64 *__stat_buf, int __flag)
     throw () __attribute__ ((__nonnull__ (3, 4)));

extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev) throw () __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
     throw () __attribute__ ((__nonnull__ (3, 5)));




extern __inline __attribute__ ((__gnu_inline__)) int
stat (const char *__path, struct stat *__statbuf) throw ()
{
  return __xstat (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
lstat (const char *__path, struct stat *__statbuf) throw ()
{
  return __lxstat (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
fstat (int __fd, struct stat *__statbuf) throw ()
{
  return __fxstat (1, __fd, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
fstatat (int __fd, const char *__filename, struct stat *__statbuf, int __flag) throw ()

{
  return __fxstatat (1, __fd, __filename, __statbuf, __flag);
}



extern __inline __attribute__ ((__gnu_inline__)) int
mknod (const char *__path, __mode_t __mode, __dev_t __dev) throw ()
{
  return __xmknod (0, __path, __mode, &__dev);
}



extern __inline __attribute__ ((__gnu_inline__)) int
mknodat (int __fd, const char *__path, __mode_t __mode, __dev_t __dev) throw ()

{
  return __xmknodat (0, __fd, __path, __mode, &__dev);
}





extern __inline __attribute__ ((__gnu_inline__)) int
stat64 (const char *__path, struct stat64 *__statbuf) throw ()
{
  return __xstat64 (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
lstat64 (const char *__path, struct stat64 *__statbuf) throw ()
{
  return __lxstat64 (1, __path, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
fstat64 (int __fd, struct stat64 *__statbuf) throw ()
{
  return __fxstat64 (1, __fd, __statbuf);
}


extern __inline __attribute__ ((__gnu_inline__)) int
fstatat64 (int __fd, const char *__filename, struct stat64 *__statbuf, int __flag) throw ()

{
  return __fxstatat64 (1, __fd, __filename, __statbuf, __flag);
}






}
# 553 "../../src/gcc/system.h" 2
# 624 "../../src/gcc/system.h"
# 1 "../../src/gcc/../include/filenames.h" 1
# 29 "../../src/gcc/../include/filenames.h"
# 1 "../../src/gcc/../include/hashtab.h" 1
# 37 "../../src/gcc/../include/hashtab.h"
extern "C" {
# 47 "../../src/gcc/../include/hashtab.h"
typedef unsigned int hashval_t;




typedef hashval_t (*htab_hash) (const void *);






typedef int (*htab_eq) (const void *, const void *);



typedef void (*htab_del) (void *);





typedef int (*htab_trav) (void **, void *);





typedef void *(*htab_alloc) (size_t, size_t);


typedef void (*htab_free) (void *);



typedef void *(*htab_alloc_with_arg) (void *, size_t, size_t);
typedef void (*htab_free_with_arg) (void *, void *);
# 100 "../../src/gcc/../include/hashtab.h"
struct htab {

  htab_hash hash_f;


  htab_eq eq_f;


  htab_del del_f;


  void ** entries;


  size_t size;


  size_t n_elements;


  size_t n_deleted;



  unsigned int searches;



  unsigned int collisions;


  htab_alloc alloc_f;
  htab_free free_f;


  void * alloc_arg;
  htab_alloc_with_arg alloc_with_arg_f;
  htab_free_with_arg free_with_arg_f;



  unsigned int size_prime_index;
};

typedef struct htab *htab_t;


enum insert_option {NO_INSERT, INSERT};



extern htab_t htab_create_alloc (size_t, htab_hash,
                                    htab_eq, htab_del,
                                    htab_alloc, htab_free);

extern htab_t htab_create_alloc_ex (size_t, htab_hash,
                                      htab_eq, htab_del,
                                      void *, htab_alloc_with_arg,
                                      htab_free_with_arg);

extern htab_t htab_create_typed_alloc (size_t, htab_hash, htab_eq, htab_del,
     htab_alloc, htab_alloc, htab_free);


extern htab_t htab_create (size_t, htab_hash, htab_eq, htab_del);
extern htab_t htab_try_create (size_t, htab_hash, htab_eq, htab_del);

extern void htab_set_functions_ex (htab_t, htab_hash,
                                       htab_eq, htab_del,
                                       void *, htab_alloc_with_arg,
                                       htab_free_with_arg);

extern void htab_delete (htab_t);
extern void htab_empty (htab_t);

extern void * htab_find (htab_t, const void *);
extern void ** htab_find_slot (htab_t, const void *, enum insert_option);
extern void * htab_find_with_hash (htab_t, const void *, hashval_t);
extern void ** htab_find_slot_with_hash (htab_t, const void *,
       hashval_t, enum insert_option);
extern void htab_clear_slot (htab_t, void **);
extern void htab_remove_elt (htab_t, void *);
extern void htab_remove_elt_with_hash (htab_t, void *, hashval_t);

extern void htab_traverse (htab_t, htab_trav, void *);
extern void htab_traverse_noresize (htab_t, htab_trav, void *);

extern size_t htab_size (htab_t);
extern size_t htab_elements (htab_t);
extern double htab_collisions (htab_t);


extern htab_hash htab_hash_pointer;


extern htab_eq htab_eq_pointer;


extern hashval_t htab_hash_string (const void *);


extern hashval_t iterative_hash (const void *, size_t, hashval_t);




}
# 30 "../../src/gcc/../include/filenames.h" 2


extern "C" {
# 83 "../../src/gcc/../include/filenames.h"
extern int filename_cmp (const char *s1, const char *s2);


extern int filename_ncmp (const char *s1, const char *s2,
     size_t n);

extern hashval_t filename_hash (const void *s);

extern int filename_eq (const void *s1, const void *s2);


}
# 625 "../../src/gcc/system.h" 2
# 636 "../../src/gcc/system.h"
# 1 "/usr/include/dlfcn.h" 1 3 4
# 27 "/usr/include/dlfcn.h" 3 4
# 1 "/usr/include/bits/dlfcn.h" 1 3 4
# 57 "/usr/include/bits/dlfcn.h" 3 4
extern "C" {


extern void _dl_mcount_wrapper_check (void *__selfpc) throw ();

}
# 28 "/usr/include/dlfcn.h" 2 3 4
# 44 "/usr/include/dlfcn.h" 3 4
typedef long int Lmid_t;







extern "C" {



extern void *dlopen (const char *__file, int __mode) throw ();



extern int dlclose (void *__handle) throw () __attribute__ ((__nonnull__ (1)));



extern void *dlsym (void *__restrict __handle,
      const char *__restrict __name) throw () __attribute__ ((__nonnull__ (2)));



extern void *dlmopen (Lmid_t __nsid, const char *__file, int __mode) throw ();



extern void *dlvsym (void *__restrict __handle,
       const char *__restrict __name,
       const char *__restrict __version)
     throw () __attribute__ ((__nonnull__ (2, 3)));





extern char *dlerror (void) throw ();





typedef struct
{
  const char *dli_fname;
  void *dli_fbase;
  const char *dli_sname;
  void *dli_saddr;
} Dl_info;



extern int dladdr (const void *__address, Dl_info *__info)
     throw () __attribute__ ((__nonnull__ (2)));


extern int dladdr1 (const void *__address, Dl_info *__info,
      void **__extra_info, int __flags) throw () __attribute__ ((__nonnull__ (2)));




enum
  {

    RTLD_DL_SYMENT = 1,


    RTLD_DL_LINKMAP = 2
  };







extern int dlinfo (void *__restrict __handle,
     int __request, void *__restrict __arg)
     throw () __attribute__ ((__nonnull__ (1, 3)));


enum
  {

    RTLD_DI_LMID = 1,



    RTLD_DI_LINKMAP = 2,

    RTLD_DI_CONFIGADDR = 3,






    RTLD_DI_SERINFO = 4,
    RTLD_DI_SERINFOSIZE = 5,



    RTLD_DI_ORIGIN = 6,

    RTLD_DI_PROFILENAME = 7,
    RTLD_DI_PROFILEOUT = 8,




    RTLD_DI_TLS_MODID = 9,





    RTLD_DI_TLS_DATA = 10,

    RTLD_DI_MAX = 10
  };




typedef struct
{
  char *dls_name;
  unsigned int dls_flags;
} Dl_serpath;



typedef struct
{
  size_t dls_size;
  unsigned int dls_cnt;
  Dl_serpath dls_serpath[1];
} Dl_serinfo;



}
# 637 "../../src/gcc/system.h" 2








# 1 "../../src/gcc/../include/libiberty.h" 1
# 40 "../../src/gcc/../include/libiberty.h"
extern "C" {
# 56 "../../src/gcc/../include/libiberty.h"
extern void unlock_stream (FILE *);





extern void unlock_std_streams (void);





extern FILE *fopen_unlocked (const char *, const char *);
extern FILE *fdopen_unlocked (int, const char *);
extern FILE *freopen_unlocked (const char *, const char *, FILE *);




extern char **buildargv (const char *) __attribute__ ((__malloc__));



extern void freeargv (char **);




extern char **dupargv (char **) __attribute__ ((__malloc__));



extern void expandargv (int *, char ***);



extern int writeargv (char **, FILE *);



extern int countargv (char**);
# 121 "../../src/gcc/../include/libiberty.h"
extern const char *lbasename (const char *);




extern const char *dos_lbasename (const char *);





extern const char *unix_lbasename (const char *);



extern char *lrealpath (const char *);





extern char *concat (const char *, ...) __attribute__ ((__malloc__)) __attribute__ ((__sentinel__));
# 151 "../../src/gcc/../include/libiberty.h"
extern char *reconcat (char *, const char *, ...) __attribute__ ((__malloc__)) __attribute__ ((__sentinel__));





extern unsigned long concat_length (const char *, ...) __attribute__ ((__sentinel__));






extern char *concat_copy (char *, const char *, ...) __attribute__ ((__sentinel__));






extern char *concat_copy2 (const char *, ...) __attribute__ ((__sentinel__));



extern char *libiberty_concat_ptr;
# 187 "../../src/gcc/../include/libiberty.h"
extern int fdmatch (int fd1, int fd2);
# 199 "../../src/gcc/../include/libiberty.h"
extern char * getpwd (void);
# 212 "../../src/gcc/../include/libiberty.h"
extern long get_run_time (void);




extern char *make_relative_prefix (const char *, const char *,
                                   const char *) __attribute__ ((__malloc__));





extern char *make_relative_prefix_ignore_links (const char *, const char *,
      const char *) __attribute__ ((__malloc__));



extern char *choose_temp_base (void) __attribute__ ((__malloc__));



extern char *make_temp_file (const char *) __attribute__ ((__malloc__));



extern int unlink_if_ordinary (const char *);



extern const char *spaces (int count);




extern int errno_max (void);




extern const char *strerrno (int);



extern int strtoerrno (const char *);



extern char *xstrerror (int);




extern int signo_max (void);
# 276 "../../src/gcc/../include/libiberty.h"
extern const char *strsigno (int);



extern int strtosigno (const char *);



extern int xatexit (void (*fn) (void));



extern void xexit (int status) __attribute__ ((__noreturn__));



extern void xmalloc_set_program_name (const char *);


extern void xmalloc_failed (size_t) __attribute__ ((__noreturn__));





extern void *xmalloc (size_t) __attribute__ ((__malloc__));





extern void *xrealloc (void *, size_t);




extern void *xcalloc (size_t, size_t) __attribute__ ((__malloc__));



extern char *xstrdup (const char *) __attribute__ ((__malloc__));



extern char *xstrndup (const char *, size_t) __attribute__ ((__malloc__));



extern void *xmemdup (const void *, size_t, size_t) __attribute__ ((__malloc__));


extern double physmem_total (void);
extern double physmem_available (void);


extern unsigned int xcrc32 (const unsigned char *, int, unsigned int);
# 375 "../../src/gcc/../include/libiberty.h"
extern const unsigned char _hex_value[256];
extern void hex_init (void);
# 401 "../../src/gcc/../include/libiberty.h"
extern struct pex_obj *pex_init (int flags, const char *pname,
     const char *tempbase);
# 496 "../../src/gcc/../include/libiberty.h"
extern const char *pex_run (struct pex_obj *obj, int flags,
       const char *executable, char * const *argv,
       const char *outname, const char *errname,
       int *err);
# 511 "../../src/gcc/../include/libiberty.h"
extern const char *pex_run_in_environment (struct pex_obj *obj, int flags,
                      const char *executable,
                                           char * const *argv,
                                           char * const *env,
                              const char *outname,
        const char *errname, int *err);





extern FILE *pex_input_file (struct pex_obj *obj, int flags,
                             const char *in_name);






extern FILE *pex_input_pipe (struct pex_obj *obj, int binary);







extern FILE *pex_read_output (struct pex_obj *, int binary);







extern FILE *pex_read_err (struct pex_obj *, int binary);





extern int pex_get_status (struct pex_obj *, int count, int *vector);






struct pex_time
{
  unsigned long user_seconds;
  unsigned long user_microseconds;
  unsigned long system_seconds;
  unsigned long system_microseconds;
};

extern int pex_get_times (struct pex_obj *, int count,
     struct pex_time *vector);




extern void pex_free (struct pex_obj *);
# 586 "../../src/gcc/../include/libiberty.h"
extern const char *pex_one (int flags, const char *executable,
       char * const *argv, const char *pname,
       const char *outname, const char *errname,
       int *status, int *err);
# 605 "../../src/gcc/../include/libiberty.h"
extern int pexecute (const char *, char * const *, const char *,
                     const char *, char **, char **, int);



extern int pwait (int, int *, int);
# 642 "../../src/gcc/../include/libiberty.h"
extern void setproctitle (const char *name, ...);


extern void stack_limit_increase (unsigned long);
# 655 "../../src/gcc/../include/libiberty.h"
extern void *C_alloca (size_t) __attribute__ ((__malloc__));
# 682 "../../src/gcc/../include/libiberty.h"
}
# 646 "../../src/gcc/system.h" 2
# 679 "../../src/gcc/system.h"
extern void fancy_abort (const char *, int, const char *) __attribute__ ((__noreturn__));
# 31 "../../src/gcc/vec.c" 2
# 1 "../../src/gcc/coretypes.h" 1
# 46 "../../src/gcc/coretypes.h"
struct bitmap_head_def;
typedef struct bitmap_head_def *bitmap;
typedef const struct bitmap_head_def *const_bitmap;
struct simple_bitmap_def;
typedef struct simple_bitmap_def *sbitmap;
typedef const struct simple_bitmap_def *const_sbitmap;
struct rtx_def;
typedef struct rtx_def *rtx;
typedef const struct rtx_def *const_rtx;
struct rtvec_def;
typedef struct rtvec_def *rtvec;
typedef const struct rtvec_def *const_rtvec;
union tree_node;
typedef union tree_node *tree;
typedef const union tree_node *const_tree;
union gimple_statement_d;
typedef union gimple_statement_d *gimple;
typedef const union gimple_statement_d *const_gimple;
typedef gimple gimple_seq;
union section;
typedef union section section;
struct gcc_options;
struct cl_target_option;
struct cl_optimization;
struct cl_option;
struct cl_decoded_option;
struct cl_option_handlers;
struct diagnostic_context;
typedef struct diagnostic_context diagnostic_context;
struct pretty_print_info;
typedef struct pretty_print_info pretty_printer;


typedef unsigned char addr_space_t;






enum ir_type {
  IR_GIMPLE,
  IR_RTL_CFGRTL,
  IR_RTL_CFGLAYOUT
};






struct cpp_reader;
struct cpp_token;




enum tls_model {
  TLS_MODEL_NONE,
  TLS_MODEL_EMULATED,
  TLS_MODEL_REAL,
  TLS_MODEL_GLOBAL_DYNAMIC = TLS_MODEL_REAL,
  TLS_MODEL_LOCAL_DYNAMIC,
  TLS_MODEL_INITIAL_EXEC,
  TLS_MODEL_LOCAL_EXEC
};



enum unwind_info_type
{
  UI_NONE,
  UI_SJLJ,
  UI_DWARF2,
  UI_TARGET,
  UI_SEH
};


enum node_frequency {


  NODE_FREQUENCY_UNLIKELY_EXECUTED,


  NODE_FREQUENCY_EXECUTED_ONCE,

  NODE_FREQUENCY_NORMAL,


  NODE_FREQUENCY_HOT
};




enum var_init_status
{
  VAR_INIT_STATUS_UNKNOWN,
  VAR_INIT_STATUS_UNINITIALIZED,
  VAR_INIT_STATUS_INITIALIZED
};


struct edge_def;
typedef struct edge_def *edge;
typedef const struct edge_def *const_edge;
struct basic_block_def;
typedef struct basic_block_def *basic_block;
typedef const struct basic_block_def *const_basic_block;
# 168 "../../src/gcc/coretypes.h"
typedef int reg_class_t;
# 186 "../../src/gcc/coretypes.h"
enum memmodel
{
  MEMMODEL_RELAXED = 0,
  MEMMODEL_CONSUME = 1,
  MEMMODEL_ACQUIRE = 2,
  MEMMODEL_RELEASE = 3,
  MEMMODEL_ACQ_REL = 4,
  MEMMODEL_SEQ_CST = 5,
  MEMMODEL_LAST = 6
};






typedef void (*gt_pointer_operator) (void *, void *);


typedef unsigned char uchar;
# 32 "../../src/gcc/vec.c" 2
# 1 "../../src/gcc/ggc.h" 1
# 23 "../../src/gcc/ggc.h"
# 1 "../../src/gcc/statistics.h" 1
# 61 "../../src/gcc/statistics.h"
struct function;


extern void statistics_early_init (void);
extern void statistics_init (void);
extern void statistics_fini (void);
extern void statistics_fini_pass (void);
extern void statistics_counter_event (struct function *, const char *, int);
extern void statistics_histogram_event (struct function *, const char *, int);
# 24 "../../src/gcc/ggc.h" 2





extern const char empty_string[];





# 1 "./gtype-desc.h" 1
# 2828 "./gtype-desc.h"
extern void gt_ggc_mx_vec_ivarref_entry_va_gc_ (void *);



extern void gt_ggc_mx_vec_prot_list_entry_va_gc_ (void *);



extern void gt_ggc_mx_vec_msgref_entry_va_gc_ (void *);



extern void gt_ggc_mx_vec_ident_data_tuple_va_gc_ (void *);



extern void gt_ggc_mx_string_descriptor (void *);



extern void gt_ggc_mx_imp_entry (void *);



extern void gt_ggc_mx_hashed_attribute (void *);



extern void gt_ggc_mx_hashed_entry (void *);



extern void gt_ggc_mx_objc_map_private (void *);



extern void gt_ggc_mx_gimple_type_leader_entry_s (void *);



extern void gt_ggc_mx_vec_method_entry_va_gc_ (void *);



extern void gt_ggc_mx_type_assertion (void *);



extern void gt_ggc_mx_treetreehash_entry (void *);



extern void gt_ggc_mx_CPool (void *);



extern void gt_ggc_mx_JCF (void *);



extern void gt_ggc_mx_module_htab_entry (void *);



extern void gt_ggc_mx_binding_level (void *);



extern void gt_ggc_mx_vec_pending_noexcept_va_gc_ (void *);



extern void gt_ggc_mx_pending_abstract_type (void *);



extern void gt_ggc_mx_vec_tree_int_va_gc_ (void *);



extern void gt_ggc_mx_cp_parser (void *);



extern void gt_ggc_mx_vec_cp_unparsed_functions_entry_va_gc_ (void *);



extern void gt_ggc_mx_cp_parser_context (void *);



extern void gt_ggc_mx_vec_cp_default_arg_entry_va_gc_ (void *);



extern void gt_ggc_mx_cp_lexer (void *);



extern void gt_ggc_mx_vec_cp_token_va_gc_ (void *);



extern void gt_ggc_mx_tree_check (void *);



extern void gt_ggc_mx_constexpr_call (void *);



extern void gt_ggc_mx_constexpr_fundef (void *);



extern void gt_ggc_mx_vec_deferred_access_va_gc_ (void *);



extern void gt_ggc_mx_vec_deferred_access_check_va_gc_ (void *);



extern void gt_ggc_mx_spec_entry (void *);



extern void gt_ggc_mx_pending_template (void *);



extern void gt_ggc_mx_vec_incomplete_var_va_gc_ (void *);



extern void gt_ggc_mx_named_label_use_entry (void *);



extern void gt_ggc_mx_vec_tree_pair_s_va_gc_ (void *);



extern void gt_ggc_mx_named_label_entry (void *);



extern void gt_ggc_mx_vec_cxx_saved_binding_va_gc_ (void *);



extern void gt_ggc_mx_vec_qualified_typedef_usage_t_va_gc_ (void *);



extern void gt_ggc_mx_cp_token_cache (void *);



extern void gt_ggc_mx_saved_scope (void *);



extern void gt_ggc_mx_cxx_int_tree_map (void *);



extern void gt_ggc_mx_vec_cp_label_binding_va_gc_ (void *);



extern void gt_ggc_mx_vec_cp_class_binding_va_gc_ (void *);



extern void gt_ggc_mx_cp_binding_level (void *);



extern void gt_ggc_mx_cxx_binding (void *);



extern void gt_ggc_mx_binding_entry_s (void *);



extern void gt_ggc_mx_binding_table_s (void *);



extern void gt_ggc_mx_tinst_level (void *);



extern void gt_ggc_mx_vec_tinfo_s_va_gc_ (void *);



extern void gt_ggc_mx_c_parser (void *);



extern void gt_ggc_mx_opt_stack (void *);



extern void gt_ggc_mx_vec_pending_redefinition_va_gc_ (void *);



extern void gt_ggc_mx_vec_pending_weak_va_gc_ (void *);



extern void gt_ggc_mx_align_stack (void *);



extern void gt_ggc_mx_vec_tree_gc_vec_va_gc_ (void *);



extern void gt_ggc_mx_vec_const_char_p_va_gc_ (void *);



extern void gt_ggc_mx_sorted_fields_type (void *);



extern void gt_ggc_mx_c_inline_static (void *);



extern void gt_ggc_mx_vec_c_goto_bindings_p_va_gc_ (void *);



extern void gt_ggc_mx_c_goto_bindings (void *);



extern void gt_ggc_mx_c_scope (void *);



extern void gt_ggc_mx_c_binding (void *);



extern void gt_ggc_mx_c_label_vars (void *);



extern void gt_ggc_mx_pad_type_hash (void *);



extern void gt_ggc_mx_gnat_binding_level (void *);



extern void gt_ggc_mx_vec_loop_info_va_gc_ (void *);



extern void gt_ggc_mx_loop_info_d (void *);



extern void gt_ggc_mx_vec_range_check_info_va_gc_ (void *);



extern void gt_ggc_mx_range_check_info_d (void *);



extern void gt_ggc_mx_elab_info (void *);



extern void gt_ggc_mx_stmt_group (void *);



extern void gt_ggc_mx_vec_parm_attr_va_gc_ (void *);



extern void gt_ggc_mx_parm_attr_d (void *);



extern void gt_ggc_mx_vec_inline_summary_t_va_gc_ (void *);



extern void gt_ggc_mx_vec_size_time_entry_va_gc_ (void *);



extern void gt_ggc_mx_vec_condition_va_gc_ (void *);



extern void gt_ggc_mx_lto_in_decl_state (void *);



extern void gt_ggc_mx_vec_ipa_edge_args_t_va_gc_ (void *);



extern void gt_ggc_mx_vec_ipa_agg_replacement_value_p_va_gc_ (void *);



extern void gt_ggc_mx_vec_ipa_jump_func_t_va_gc_ (void *);



extern void gt_ggc_mx_vec_ipa_agg_jf_item_t_va_gc_ (void *);



extern void gt_ggc_mx_ssa_operand_memory_d (void *);



extern void gt_ggc_mx_scev_info_str (void *);



extern void gt_ggc_mx_vec_mem_addr_template_va_gc_ (void *);



extern void gt_ggc_mx_vec_gimple_va_gc_ (void *);



extern void gt_ggc_mx_tm_restart_node (void *);



extern void gt_ggc_mx_type_hash (void *);



extern void gt_ggc_mx_string_pool_data (void *);



extern void gt_ggc_mx_temp_slot_address_entry (void *);



extern void gt_ggc_mx_throw_stmt_node (void *);



extern void gt_ggc_mx_vec_eh_landing_pad_va_gc_ (void *);



extern void gt_ggc_mx_vec_eh_region_va_gc_ (void *);



extern void gt_ggc_mx_eh_catch_d (void *);



extern void gt_ggc_mx_eh_landing_pad_d (void *);



extern void gt_ggc_mx_eh_region_d (void *);



extern void gt_ggc_mx_vec_die_arg_entry_va_gc_ (void *);



extern void gt_ggc_mx_vec_macinfo_entry_va_gc_ (void *);



extern void gt_ggc_mx_vec_pubname_entry_va_gc_ (void *);



extern void gt_ggc_mx_vec_dw_line_info_table_p_va_gc_ (void *);



extern void gt_ggc_mx_cached_dw_loc_list_def (void *);



extern void gt_ggc_mx_call_arg_loc_node (void *);



extern void gt_ggc_mx_var_loc_list_def (void *);



extern void gt_ggc_mx_var_loc_node (void *);



extern void gt_ggc_mx_limbo_die_struct (void *);



extern void gt_ggc_mx_vec_dw_attr_node_va_gc_ (void *);



extern void gt_ggc_mx_dw_line_info_table_struct (void *);



extern void gt_ggc_mx_vec_dw_line_info_entry_va_gc_ (void *);



extern void gt_ggc_mx_comdat_type_struct (void *);



extern void gt_ggc_mx_dw_ranges_by_label_struct (void *);



extern void gt_ggc_mx_dw_ranges_struct (void *);



extern void gt_ggc_mx_vec_deferred_locations_va_gc_ (void *);



extern void gt_ggc_mx_vec_dw_fde_ref_va_gc_ (void *);



extern void gt_ggc_mx_reg_saved_in_data_struct (void *);



extern void gt_ggc_mx_dw_cfi_row_struct (void *);



extern void gt_ggc_mx_dwarf_file_data (void *);



extern void gt_ggc_mx_indirect_string_node (void *);



extern void gt_ggc_mx_addr_table_entry_struct (void *);



extern void gt_ggc_mx_vec_dw_cfi_ref_va_gc_ (void *);



extern void gt_ggc_mx_dw_loc_list_struct (void *);



extern void gt_ggc_mx_dw_loc_descr_struct (void *);



extern void gt_ggc_mx_dw_cfi_struct (void *);



extern void gt_ggc_mx_typeinfo (void *);



extern void gt_ggc_mx_ipa_agg_replacement_value (void *);



extern void gt_ggc_mx_vec_alias_set_entry_va_gc_ (void *);



extern void gt_ggc_mx_alias_set_entry_d (void *);



extern void gt_ggc_mx_constant_descriptor_tree (void *);



extern void gt_ggc_mx_asm_node (void *);



extern void gt_ggc_mx_cgraph_indirect_call_info (void *);



extern void gt_ggc_mx_cgraph_function_version_info (void *);



extern void gt_ggc_mx_cgraph_edge (void *);



extern void gt_ggc_mx_vec_ipa_replace_map_p_va_gc_ (void *);



extern void gt_ggc_mx_ipa_replace_map (void *);



extern void gt_ggc_mx_lto_file_decl_data (void *);



extern void gt_ggc_mx_vec_ipa_ref_t_va_gc_ (void *);



extern void gt_ggc_mx_symtab_node_def (void *);



extern void gt_ggc_mx_cgraph_node (void *);



extern void gt_ggc_mx_vec_basic_block_va_gc_ (void *);



extern void gt_ggc_mx_vec_edge_va_gc_ (void *);



extern void gt_ggc_mx_rtl_bb_info (void *);



extern void gt_ggc_mx_vec_loop_p_va_gc_ (void *);



extern void gt_ggc_mx_loop (void *);



extern void gt_ggc_mx_loop_exit (void *);



extern void gt_ggc_mx_nb_iter_bound (void *);



extern void gt_ggc_mx_types_used_by_vars_entry (void *);



extern void gt_ggc_mx_language_function (void *);



extern void gt_ggc_mx_loops (void *);



extern void gt_ggc_mx_control_flow_graph (void *);



extern void gt_ggc_mx_eh_status (void *);



extern void gt_ggc_mx_stack_usage (void *);



extern void gt_ggc_mx_vec_temp_slot_p_va_gc_ (void *);



extern void gt_ggc_mx_initial_value_struct (void *);



extern void gt_ggc_mx_frame_space (void *);



extern void gt_ggc_mx_rtx_constant_pool (void *);



extern void gt_ggc_mx_dw_fde_struct (void *);



extern void gt_ggc_mx_temp_slot (void *);



extern void gt_ggc_mx_gimple_df (void *);



extern void gt_ggc_mx_vec_call_site_record_va_gc_ (void *);



extern void gt_ggc_mx_vec_uchar_va_gc_ (void *);



extern void gt_ggc_mx_call_site_record_d (void *);



extern void gt_ggc_mx_sequence_stack (void *);



extern void gt_ggc_mx_libfunc_entry (void *);



extern void gt_ggc_mx_tree_vec_map (void *);



extern void gt_ggc_mx_tree_priority_map (void *);



extern void gt_ggc_mx_tree_int_map (void *);



extern void gt_ggc_mx_tree_decl_map (void *);



extern void gt_ggc_mx_tree_map (void *);



extern void gt_ggc_mx_lang_tree_node (void *);



extern void gt_ggc_mx_tree_statement_list_node (void *);



extern void gt_ggc_mx_lang_decl (void *);



extern void gt_ggc_mx_lang_type (void *);



extern void gt_ggc_mx_die_struct (void *);



extern void gt_ggc_mx_vec_tree_va_gc_ (void *);



extern void gt_ggc_mx_ptr_info_def (void *);



extern void gt_ggc_mx_vec_constructor_elt_va_gc_ (void *);



extern void gt_ggc_mx_vec_alias_pair_va_gc_ (void *);



extern void gt_ggc_mx_function (void *);



extern void gt_ggc_mx_constant_descriptor_rtx (void *);



extern void gt_ggc_mx_fixed_value (void *);



extern void gt_ggc_mx_real_value (void *);



extern void gt_ggc_mx_vec_rtx_va_gc_ (void *);



extern void gt_ggc_mx_object_block (void *);



extern void gt_ggc_mx_reg_attrs (void *);



extern void gt_ggc_mx_mem_attrs (void *);



extern void gt_ggc_mx_coverage_data (void *);



extern void gt_ggc_mx_bitmap_obstack (void *);



extern void gt_ggc_mx_bitmap_element_def (void *);



extern void gt_ggc_mx_machine_function (void *);



extern void gt_ggc_mx_stack_local_entry (void *);



extern void gt_ggc_mx_basic_block_def (void *);



extern void gt_ggc_mx_edge_def (void *);



extern void gt_ggc_mx_section (void *);



extern void gt_ggc_mx_gimple_statement_d (void *);



extern void gt_ggc_mx_rtvec_def (void *);



extern void gt_ggc_mx_rtx_def (void *);



extern void gt_ggc_mx_bitmap_head_def (void *);



extern void gt_ggc_mx_answer (void *);



extern void gt_ggc_mx_cpp_macro (void *);



extern void gt_ggc_mx_cpp_token (void *);



extern void gt_ggc_mx_line_maps (void *);




extern void gt_ggc_m_II17splay_tree_node_s (void *);
extern void gt_ggc_m_SP9tree_node17splay_tree_node_s (void *);
extern void gt_ggc_m_P9tree_nodeP9tree_node17splay_tree_node_s (void *);
extern void gt_ggc_m_P17string_descriptor4htab (void *);
extern void gt_ggc_m_P14type_assertion4htab (void *);
extern void gt_ggc_m_P18treetreehash_entry4htab (void *);
extern void gt_ggc_m_P17module_htab_entry4htab (void *);
extern void gt_ggc_m_P21pending_abstract_type4htab (void *);
extern void gt_ggc_m_P14constexpr_call4htab (void *);
extern void gt_ggc_m_P16constexpr_fundef4htab (void *);
extern void gt_ggc_m_P10spec_entry4htab (void *);
extern void gt_ggc_m_P16cxx_int_tree_map4htab (void *);
extern void gt_ggc_m_P17named_label_entry4htab (void *);
extern void gt_ggc_m_P13pad_type_hash4htab (void *);
extern void gt_ggc_m_P17lto_in_decl_state4htab (void *);
extern void gt_ggc_m_P9tree_nodeP9tree_node12splay_tree_s (void *);
extern void gt_ggc_m_P13scev_info_str4htab (void *);
extern void gt_ggc_m_P15tm_restart_node4htab (void *);
extern void gt_ggc_m_P12tree_int_map4htab (void *);
extern void gt_ggc_m_P8tree_map4htab (void *);
extern void gt_ggc_m_P23constant_descriptor_rtx4htab (void *);
extern void gt_ggc_m_P24constant_descriptor_tree4htab (void *);
extern void gt_ggc_m_P12object_block4htab (void *);
extern void gt_ggc_m_P7section4htab (void *);
extern void gt_ggc_m_P17tree_priority_map4htab (void *);
extern void gt_ggc_m_P12tree_vec_map4htab (void *);
extern void gt_ggc_m_P13tree_decl_map4htab (void *);
extern void gt_ggc_m_P9type_hash4htab (void *);
extern void gt_ggc_m_P23temp_slot_address_entry4htab (void *);
extern void gt_ggc_m_P15throw_stmt_node4htab (void *);
extern void gt_ggc_m_P9reg_attrs4htab (void *);
extern void gt_ggc_m_P9mem_attrs4htab (void *);
extern void gt_ggc_m_P7rtx_def4htab (void *);
extern void gt_ggc_m_P23addr_table_entry_struct4htab (void *);
extern void gt_ggc_m_P22cached_dw_loc_list_def4htab (void *);
extern void gt_ggc_m_P16var_loc_list_def4htab (void *);
extern void gt_ggc_m_P10die_struct4htab (void *);
extern void gt_ggc_m_P15dwarf_file_data4htab (void *);
extern void gt_ggc_m_P20indirect_string_node4htab (void *);
extern void gt_ggc_m_SP9tree_node12splay_tree_s (void *);
extern void gt_ggc_m_II12splay_tree_s (void *);
extern void gt_ggc_m_P15symtab_node_def4htab (void *);
extern void gt_ggc_m_P11cgraph_edge4htab (void *);
extern void gt_ggc_m_P9loop_exit4htab (void *);
extern void gt_ggc_m_P24types_used_by_vars_entry4htab (void *);
extern void gt_ggc_m_P9tree_node4htab (void *);
extern void gt_ggc_m_P13libfunc_entry4htab (void *);
# 3684 "./gtype-desc.h"
extern void gt_pch_nx_vec_ivarref_entry_va_gc_ (void *);



extern void gt_pch_nx_vec_prot_list_entry_va_gc_ (void *);



extern void gt_pch_nx_vec_msgref_entry_va_gc_ (void *);



extern void gt_pch_nx_vec_ident_data_tuple_va_gc_ (void *);



extern void gt_pch_nx_string_descriptor (void *);



extern void gt_pch_nx_imp_entry (void *);



extern void gt_pch_nx_hashed_attribute (void *);



extern void gt_pch_nx_hashed_entry (void *);



extern void gt_pch_nx_objc_map_private (void *);



extern void gt_pch_nx_gimple_type_leader_entry_s (void *);



extern void gt_pch_nx_vec_method_entry_va_gc_ (void *);



extern void gt_pch_nx_type_assertion (void *);



extern void gt_pch_nx_treetreehash_entry (void *);



extern void gt_pch_nx_CPool (void *);



extern void gt_pch_nx_JCF (void *);



extern void gt_pch_nx_module_htab_entry (void *);



extern void gt_pch_nx_binding_level (void *);



extern void gt_pch_nx_vec_pending_noexcept_va_gc_ (void *);



extern void gt_pch_nx_pending_abstract_type (void *);



extern void gt_pch_nx_vec_tree_int_va_gc_ (void *);



extern void gt_pch_nx_cp_parser (void *);



extern void gt_pch_nx_vec_cp_unparsed_functions_entry_va_gc_ (void *);



extern void gt_pch_nx_cp_parser_context (void *);



extern void gt_pch_nx_vec_cp_default_arg_entry_va_gc_ (void *);



extern void gt_pch_nx_cp_lexer (void *);



extern void gt_pch_nx_vec_cp_token_va_gc_ (void *);



extern void gt_pch_nx_tree_check (void *);



extern void gt_pch_nx_constexpr_call (void *);



extern void gt_pch_nx_constexpr_fundef (void *);



extern void gt_pch_nx_vec_deferred_access_va_gc_ (void *);



extern void gt_pch_nx_vec_deferred_access_check_va_gc_ (void *);



extern void gt_pch_nx_spec_entry (void *);



extern void gt_pch_nx_pending_template (void *);



extern void gt_pch_nx_vec_incomplete_var_va_gc_ (void *);



extern void gt_pch_nx_named_label_use_entry (void *);



extern void gt_pch_nx_vec_tree_pair_s_va_gc_ (void *);



extern void gt_pch_nx_named_label_entry (void *);



extern void gt_pch_nx_vec_cxx_saved_binding_va_gc_ (void *);



extern void gt_pch_nx_vec_qualified_typedef_usage_t_va_gc_ (void *);



extern void gt_pch_nx_cp_token_cache (void *);



extern void gt_pch_nx_saved_scope (void *);



extern void gt_pch_nx_cxx_int_tree_map (void *);



extern void gt_pch_nx_vec_cp_label_binding_va_gc_ (void *);



extern void gt_pch_nx_vec_cp_class_binding_va_gc_ (void *);



extern void gt_pch_nx_cp_binding_level (void *);



extern void gt_pch_nx_cxx_binding (void *);



extern void gt_pch_nx_binding_entry_s (void *);



extern void gt_pch_nx_binding_table_s (void *);



extern void gt_pch_nx_tinst_level (void *);



extern void gt_pch_nx_vec_tinfo_s_va_gc_ (void *);



extern void gt_pch_nx_c_parser (void *);



extern void gt_pch_nx_opt_stack (void *);



extern void gt_pch_nx_vec_pending_redefinition_va_gc_ (void *);



extern void gt_pch_nx_vec_pending_weak_va_gc_ (void *);



extern void gt_pch_nx_align_stack (void *);



extern void gt_pch_nx_vec_tree_gc_vec_va_gc_ (void *);



extern void gt_pch_nx_vec_const_char_p_va_gc_ (void *);



extern void gt_pch_nx_sorted_fields_type (void *);



extern void gt_pch_nx_c_inline_static (void *);



extern void gt_pch_nx_vec_c_goto_bindings_p_va_gc_ (void *);



extern void gt_pch_nx_c_goto_bindings (void *);



extern void gt_pch_nx_c_scope (void *);



extern void gt_pch_nx_c_binding (void *);



extern void gt_pch_nx_c_label_vars (void *);



extern void gt_pch_nx_pad_type_hash (void *);



extern void gt_pch_nx_gnat_binding_level (void *);



extern void gt_pch_nx_vec_loop_info_va_gc_ (void *);



extern void gt_pch_nx_loop_info_d (void *);



extern void gt_pch_nx_vec_range_check_info_va_gc_ (void *);



extern void gt_pch_nx_range_check_info_d (void *);



extern void gt_pch_nx_elab_info (void *);



extern void gt_pch_nx_stmt_group (void *);



extern void gt_pch_nx_vec_parm_attr_va_gc_ (void *);



extern void gt_pch_nx_parm_attr_d (void *);



extern void gt_pch_nx_vec_inline_summary_t_va_gc_ (void *);



extern void gt_pch_nx_vec_size_time_entry_va_gc_ (void *);



extern void gt_pch_nx_vec_condition_va_gc_ (void *);



extern void gt_pch_nx_lto_in_decl_state (void *);



extern void gt_pch_nx_vec_ipa_edge_args_t_va_gc_ (void *);



extern void gt_pch_nx_vec_ipa_agg_replacement_value_p_va_gc_ (void *);



extern void gt_pch_nx_vec_ipa_jump_func_t_va_gc_ (void *);



extern void gt_pch_nx_vec_ipa_agg_jf_item_t_va_gc_ (void *);



extern void gt_pch_nx_ssa_operand_memory_d (void *);



extern void gt_pch_nx_scev_info_str (void *);



extern void gt_pch_nx_vec_mem_addr_template_va_gc_ (void *);



extern void gt_pch_nx_vec_gimple_va_gc_ (void *);



extern void gt_pch_nx_tm_restart_node (void *);



extern void gt_pch_nx_type_hash (void *);



extern void gt_pch_nx_string_pool_data (void *);



extern void gt_pch_nx_temp_slot_address_entry (void *);



extern void gt_pch_nx_throw_stmt_node (void *);



extern void gt_pch_nx_vec_eh_landing_pad_va_gc_ (void *);



extern void gt_pch_nx_vec_eh_region_va_gc_ (void *);



extern void gt_pch_nx_eh_catch_d (void *);



extern void gt_pch_nx_eh_landing_pad_d (void *);



extern void gt_pch_nx_eh_region_d (void *);



extern void gt_pch_nx_vec_die_arg_entry_va_gc_ (void *);



extern void gt_pch_nx_vec_macinfo_entry_va_gc_ (void *);



extern void gt_pch_nx_vec_pubname_entry_va_gc_ (void *);



extern void gt_pch_nx_vec_dw_line_info_table_p_va_gc_ (void *);



extern void gt_pch_nx_cached_dw_loc_list_def (void *);



extern void gt_pch_nx_call_arg_loc_node (void *);



extern void gt_pch_nx_var_loc_list_def (void *);



extern void gt_pch_nx_var_loc_node (void *);



extern void gt_pch_nx_limbo_die_struct (void *);



extern void gt_pch_nx_vec_dw_attr_node_va_gc_ (void *);



extern void gt_pch_nx_dw_line_info_table_struct (void *);



extern void gt_pch_nx_vec_dw_line_info_entry_va_gc_ (void *);



extern void gt_pch_nx_comdat_type_struct (void *);



extern void gt_pch_nx_dw_ranges_by_label_struct (void *);



extern void gt_pch_nx_dw_ranges_struct (void *);



extern void gt_pch_nx_vec_deferred_locations_va_gc_ (void *);



extern void gt_pch_nx_vec_dw_fde_ref_va_gc_ (void *);



extern void gt_pch_nx_reg_saved_in_data_struct (void *);



extern void gt_pch_nx_dw_cfi_row_struct (void *);



extern void gt_pch_nx_dwarf_file_data (void *);



extern void gt_pch_nx_indirect_string_node (void *);



extern void gt_pch_nx_addr_table_entry_struct (void *);



extern void gt_pch_nx_vec_dw_cfi_ref_va_gc_ (void *);



extern void gt_pch_nx_dw_loc_list_struct (void *);



extern void gt_pch_nx_dw_loc_descr_struct (void *);



extern void gt_pch_nx_dw_cfi_struct (void *);



extern void gt_pch_nx_typeinfo (void *);



extern void gt_pch_nx_ipa_agg_replacement_value (void *);



extern void gt_pch_nx_vec_alias_set_entry_va_gc_ (void *);



extern void gt_pch_nx_alias_set_entry_d (void *);



extern void gt_pch_nx_constant_descriptor_tree (void *);



extern void gt_pch_nx_asm_node (void *);



extern void gt_pch_nx_cgraph_indirect_call_info (void *);



extern void gt_pch_nx_cgraph_function_version_info (void *);



extern void gt_pch_nx_cgraph_edge (void *);



extern void gt_pch_nx_vec_ipa_replace_map_p_va_gc_ (void *);



extern void gt_pch_nx_ipa_replace_map (void *);



extern void gt_pch_nx_lto_file_decl_data (void *);



extern void gt_pch_nx_vec_ipa_ref_t_va_gc_ (void *);



extern void gt_pch_nx_symtab_node_def (void *);



extern void gt_pch_nx_cgraph_node (void *);



extern void gt_pch_nx_vec_basic_block_va_gc_ (void *);



extern void gt_pch_nx_vec_edge_va_gc_ (void *);



extern void gt_pch_nx_rtl_bb_info (void *);



extern void gt_pch_nx_vec_loop_p_va_gc_ (void *);



extern void gt_pch_nx_loop (void *);



extern void gt_pch_nx_loop_exit (void *);



extern void gt_pch_nx_nb_iter_bound (void *);



extern void gt_pch_nx_types_used_by_vars_entry (void *);



extern void gt_pch_nx_language_function (void *);



extern void gt_pch_nx_loops (void *);



extern void gt_pch_nx_control_flow_graph (void *);



extern void gt_pch_nx_eh_status (void *);



extern void gt_pch_nx_stack_usage (void *);



extern void gt_pch_nx_vec_temp_slot_p_va_gc_ (void *);



extern void gt_pch_nx_initial_value_struct (void *);



extern void gt_pch_nx_frame_space (void *);



extern void gt_pch_nx_rtx_constant_pool (void *);



extern void gt_pch_nx_dw_fde_struct (void *);



extern void gt_pch_nx_temp_slot (void *);



extern void gt_pch_nx_gimple_df (void *);



extern void gt_pch_nx_vec_call_site_record_va_gc_ (void *);



extern void gt_pch_nx_vec_uchar_va_gc_ (void *);



extern void gt_pch_nx_call_site_record_d (void *);



extern void gt_pch_nx_sequence_stack (void *);



extern void gt_pch_nx_libfunc_entry (void *);



extern void gt_pch_nx_tree_vec_map (void *);



extern void gt_pch_nx_tree_priority_map (void *);



extern void gt_pch_nx_tree_int_map (void *);



extern void gt_pch_nx_tree_decl_map (void *);



extern void gt_pch_nx_tree_map (void *);



extern void gt_pch_nx_lang_tree_node (void *);



extern void gt_pch_nx_tree_statement_list_node (void *);



extern void gt_pch_nx_lang_decl (void *);



extern void gt_pch_nx_lang_type (void *);



extern void gt_pch_nx_die_struct (void *);



extern void gt_pch_nx_vec_tree_va_gc_ (void *);



extern void gt_pch_nx_ptr_info_def (void *);



extern void gt_pch_nx_vec_constructor_elt_va_gc_ (void *);



extern void gt_pch_nx_vec_alias_pair_va_gc_ (void *);



extern void gt_pch_nx_function (void *);



extern void gt_pch_nx_constant_descriptor_rtx (void *);



extern void gt_pch_nx_fixed_value (void *);



extern void gt_pch_nx_real_value (void *);



extern void gt_pch_nx_vec_rtx_va_gc_ (void *);



extern void gt_pch_nx_object_block (void *);



extern void gt_pch_nx_reg_attrs (void *);



extern void gt_pch_nx_mem_attrs (void *);



extern void gt_pch_nx_coverage_data (void *);



extern void gt_pch_nx_bitmap_obstack (void *);



extern void gt_pch_nx_bitmap_element_def (void *);



extern void gt_pch_nx_machine_function (void *);



extern void gt_pch_nx_stack_local_entry (void *);



extern void gt_pch_nx_basic_block_def (void *);



extern void gt_pch_nx_edge_def (void *);



extern void gt_pch_nx_section (void *);



extern void gt_pch_nx_gimple_statement_d (void *);



extern void gt_pch_nx_rtvec_def (void *);



extern void gt_pch_nx_rtx_def (void *);



extern void gt_pch_nx_bitmap_head_def (void *);



extern void gt_pch_nx_answer (void *);



extern void gt_pch_nx_cpp_macro (void *);



extern void gt_pch_nx_cpp_token (void *);



extern void gt_pch_nx_line_maps (void *);




extern void gt_pch_n_II17splay_tree_node_s (void *);
extern void gt_pch_n_SP9tree_node17splay_tree_node_s (void *);
extern void gt_pch_n_P9tree_nodeP9tree_node17splay_tree_node_s (void *);
extern void gt_pch_n_P17string_descriptor4htab (void *);
extern void gt_pch_n_P14type_assertion4htab (void *);
extern void gt_pch_n_P18treetreehash_entry4htab (void *);
extern void gt_pch_n_P17module_htab_entry4htab (void *);
extern void gt_pch_n_P21pending_abstract_type4htab (void *);
extern void gt_pch_n_P14constexpr_call4htab (void *);
extern void gt_pch_n_P16constexpr_fundef4htab (void *);
extern void gt_pch_n_P10spec_entry4htab (void *);
extern void gt_pch_n_P16cxx_int_tree_map4htab (void *);
extern void gt_pch_n_P17named_label_entry4htab (void *);
extern void gt_pch_n_P13pad_type_hash4htab (void *);
extern void gt_pch_n_P17lto_in_decl_state4htab (void *);
extern void gt_pch_n_P9tree_nodeP9tree_node12splay_tree_s (void *);
extern void gt_pch_n_P13scev_info_str4htab (void *);
extern void gt_pch_n_P15tm_restart_node4htab (void *);
extern void gt_pch_n_P12tree_int_map4htab (void *);
extern void gt_pch_n_P8tree_map4htab (void *);
extern void gt_pch_n_P23constant_descriptor_rtx4htab (void *);
extern void gt_pch_n_P24constant_descriptor_tree4htab (void *);
extern void gt_pch_n_P12object_block4htab (void *);
extern void gt_pch_n_P7section4htab (void *);
extern void gt_pch_n_P17tree_priority_map4htab (void *);
extern void gt_pch_n_P12tree_vec_map4htab (void *);
extern void gt_pch_n_P13tree_decl_map4htab (void *);
extern void gt_pch_n_P9type_hash4htab (void *);
extern void gt_pch_n_P23temp_slot_address_entry4htab (void *);
extern void gt_pch_n_P15throw_stmt_node4htab (void *);
extern void gt_pch_n_P9reg_attrs4htab (void *);
extern void gt_pch_n_P9mem_attrs4htab (void *);
extern void gt_pch_n_P7rtx_def4htab (void *);
extern void gt_pch_n_P23addr_table_entry_struct4htab (void *);
extern void gt_pch_n_P22cached_dw_loc_list_def4htab (void *);
extern void gt_pch_n_P16var_loc_list_def4htab (void *);
extern void gt_pch_n_P10die_struct4htab (void *);
extern void gt_pch_n_P15dwarf_file_data4htab (void *);
extern void gt_pch_n_P20indirect_string_node4htab (void *);
extern void gt_pch_n_SP9tree_node12splay_tree_s (void *);
extern void gt_pch_n_II12splay_tree_s (void *);
extern void gt_pch_n_P15symtab_node_def4htab (void *);
extern void gt_pch_n_P11cgraph_edge4htab (void *);
extern void gt_pch_n_P9loop_exit4htab (void *);
extern void gt_pch_n_P24types_used_by_vars_entry4htab (void *);
extern void gt_pch_n_P9tree_node4htab (void *);
extern void gt_pch_n_P13libfunc_entry4htab (void *);




extern void gt_pch_p_24vec_ivarref_entry_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_26vec_prot_list_entry_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_23vec_msgref_entry_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_27vec_ident_data_tuple_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17string_descriptor
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9imp_entry
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16hashed_attribute
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_12hashed_entry
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16objc_map_private
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_26gimple_type_leader_entry_s
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_23vec_method_entry_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_14type_assertion
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_18treetreehash_entry
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_5CPool
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_3JCF
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17module_htab_entry
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_13binding_level
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_27vec_pending_noexcept_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21pending_abstract_type
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_19vec_tree_int_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9cp_parser
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_38vec_cp_unparsed_functions_entry_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17cp_parser_context
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_31vec_cp_default_arg_entry_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_8cp_lexer
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_19vec_cp_token_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_10tree_check
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_14constexpr_call
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16constexpr_fundef
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_26vec_deferred_access_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_32vec_deferred_access_check_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_10spec_entry
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16pending_template
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_25vec_incomplete_var_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21named_label_use_entry
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_22vec_tree_pair_s_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17named_label_entry
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_28vec_cxx_saved_binding_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_36vec_qualified_typedef_usage_t_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_14cp_token_cache
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11saved_scope
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16cxx_int_tree_map
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_27vec_cp_label_binding_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_27vec_cp_class_binding_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16cp_binding_level
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11cxx_binding
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15binding_entry_s
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15binding_table_s
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11tinst_level
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_18vec_tinfo_s_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_8c_parser
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9opt_stack
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_31vec_pending_redefinition_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_23vec_pending_weak_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11align_stack
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_22vec_tree_gc_vec_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_23vec_const_char_p_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_18sorted_fields_type
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15c_inline_static
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_28vec_c_goto_bindings_p_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15c_goto_bindings
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_7c_scope
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9c_binding
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_12c_label_vars
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_13pad_type_hash
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_18gnat_binding_level
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_20vec_loop_info_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11loop_info_d
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_27vec_range_check_info_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_18range_check_info_d
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9elab_info
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_10stmt_group
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_20vec_parm_attr_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11parm_attr_d
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_27vec_inline_summary_t_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_26vec_size_time_entry_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_20vec_condition_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17lto_in_decl_state
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_26vec_ipa_edge_args_t_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_38vec_ipa_agg_replacement_value_p_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_26vec_ipa_jump_func_t_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_28vec_ipa_agg_jf_item_t_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_20ssa_operand_memory_d
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_13scev_info_str
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_28vec_mem_addr_template_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17vec_gimple_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15tm_restart_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9type_hash
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16string_pool_data
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_23temp_slot_address_entry
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15throw_stmt_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_25vec_eh_landing_pad_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_20vec_eh_region_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_10eh_catch_d
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16eh_landing_pad_d
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11eh_region_d
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_24vec_die_arg_entry_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_24vec_macinfo_entry_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_24vec_pubname_entry_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_31vec_dw_line_info_table_p_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_22cached_dw_loc_list_def
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17call_arg_loc_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16var_loc_list_def
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_12var_loc_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16limbo_die_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_23vec_dw_attr_node_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_25dw_line_info_table_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_29vec_dw_line_info_entry_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_18comdat_type_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_25dw_ranges_by_label_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16dw_ranges_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_29vec_deferred_locations_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21vec_dw_fde_ref_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_24reg_saved_in_data_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17dw_cfi_row_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15dwarf_file_data
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_20indirect_string_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_23addr_table_entry_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21vec_dw_cfi_ref_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_18dw_loc_list_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_19dw_loc_descr_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_13dw_cfi_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_8typeinfo
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_25ipa_agg_replacement_value
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_26vec_alias_set_entry_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17alias_set_entry_d
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_24constant_descriptor_tree
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_8asm_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_25cgraph_indirect_call_info
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_28cgraph_function_version_info
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11cgraph_edge
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_28vec_ipa_replace_map_p_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15ipa_replace_map
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_18lto_file_decl_data
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_20vec_ipa_ref_t_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15symtab_node_def
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11cgraph_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_22vec_basic_block_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15vec_edge_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11rtl_bb_info
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17vec_loop_p_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_4loop
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9loop_exit
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_13nb_iter_bound
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_24types_used_by_vars_entry
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17language_function
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_5loops
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_18control_flow_graph
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9eh_status
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11stack_usage
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_22vec_temp_slot_p_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_20initial_value_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11frame_space
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17rtx_constant_pool
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_13dw_fde_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9temp_slot
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9gimple_df
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_27vec_call_site_record_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16vec_uchar_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_18call_site_record_d
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_14sequence_stack
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_13libfunc_entry
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_12tree_vec_map
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17tree_priority_map
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_12tree_int_map
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_13tree_decl_map
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_8tree_map
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_14lang_tree_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_24tree_statement_list_node
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9lang_decl
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9lang_type
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_10die_struct
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15vec_tree_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_12ptr_info_def
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_26vec_constructor_elt_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_21vec_alias_pair_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_8function
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_23constant_descriptor_rtx
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_11fixed_value
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_10real_value
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_14vec_rtx_va_gc_
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_12object_block
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9reg_attrs
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9mem_attrs
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_13coverage_data
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_14bitmap_obstack
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_18bitmap_element_def
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_16machine_function
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_17stack_local_entry
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15basic_block_def
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_8edge_def
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_7section
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_18gimple_statement_d
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9rtvec_def
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_7rtx_def
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_15bitmap_head_def
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_6answer
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9cpp_macro
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9cpp_token
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_9line_maps
    (void *, void *, gt_pointer_operator, void *);

extern void gt_pch_p_II17splay_tree_node_s
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_SP9tree_node17splay_tree_node_s
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P9tree_nodeP9tree_node17splay_tree_node_s
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P17string_descriptor4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P14type_assertion4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P18treetreehash_entry4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P17module_htab_entry4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P21pending_abstract_type4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P14constexpr_call4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P16constexpr_fundef4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P10spec_entry4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P16cxx_int_tree_map4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P17named_label_entry4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P13pad_type_hash4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P17lto_in_decl_state4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P9tree_nodeP9tree_node12splay_tree_s
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P13scev_info_str4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P15tm_restart_node4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P12tree_int_map4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P8tree_map4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P23constant_descriptor_rtx4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P24constant_descriptor_tree4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P12object_block4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P7section4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P17tree_priority_map4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P12tree_vec_map4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P13tree_decl_map4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P9type_hash4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P23temp_slot_address_entry4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P15throw_stmt_node4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P9reg_attrs4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P9mem_attrs4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P7rtx_def4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P23addr_table_entry_struct4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P22cached_dw_loc_list_def4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P16var_loc_list_def4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P10die_struct4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P15dwarf_file_data4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P20indirect_string_node4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_SP9tree_node12splay_tree_s
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_II12splay_tree_s
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P15symtab_node_def4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P11cgraph_edge4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P9loop_exit4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P24types_used_by_vars_entry4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P9tree_node4htab
    (void *, void *, gt_pointer_operator, void *);
extern void gt_pch_p_P13libfunc_entry4htab
    (void *, void *, gt_pointer_operator, void *);


extern void * ggc_alloc_splay_tree_scalar_scalar_splay_tree_node_s (int, void *);
extern void * ggc_alloc_splay_tree_str_tree_node_splay_tree_node_s (int, void *);
extern void * ggc_alloc_splay_tree_tree_node_tree_node_splay_tree_node_s (int, void *);
extern void * ggc_alloc_splay_tree_string_descriptor_htab (int, void *);
extern void * ggc_alloc_splay_tree_type_assertion_htab (int, void *);
extern void * ggc_alloc_splay_tree_treetreehash_entry_htab (int, void *);
extern void * ggc_alloc_splay_tree_module_htab_entry_htab (int, void *);
extern void * ggc_alloc_splay_tree_pending_abstract_type_htab (int, void *);
extern void * ggc_alloc_splay_tree_constexpr_call_htab (int, void *);
extern void * ggc_alloc_splay_tree_constexpr_fundef_htab (int, void *);
extern void * ggc_alloc_splay_tree_spec_entry_htab (int, void *);
extern void * ggc_alloc_splay_tree_cxx_int_tree_map_htab (int, void *);
extern void * ggc_alloc_splay_tree_named_label_entry_htab (int, void *);
extern void * ggc_alloc_splay_tree_pad_type_hash_htab (int, void *);
extern void * ggc_alloc_splay_tree_lto_in_decl_state_htab (int, void *);
extern void * ggc_alloc_splay_tree_tree_node_tree_node_splay_tree_s (int, void *);
extern void * ggc_alloc_splay_tree_scev_info_str_htab (int, void *);
extern void * ggc_alloc_splay_tree_tm_restart_node_htab (int, void *);
extern void * ggc_alloc_splay_tree_tree_int_map_htab (int, void *);
extern void * ggc_alloc_splay_tree_tree_map_htab (int, void *);
extern void * ggc_alloc_splay_tree_constant_descriptor_rtx_htab (int, void *);
extern void * ggc_alloc_splay_tree_constant_descriptor_tree_htab (int, void *);
extern void * ggc_alloc_splay_tree_object_block_htab (int, void *);
extern void * ggc_alloc_splay_tree_section_htab (int, void *);
extern void * ggc_alloc_splay_tree_tree_priority_map_htab (int, void *);
extern void * ggc_alloc_splay_tree_tree_vec_map_htab (int, void *);
extern void * ggc_alloc_splay_tree_tree_decl_map_htab (int, void *);
extern void * ggc_alloc_splay_tree_type_hash_htab (int, void *);
extern void * ggc_alloc_splay_tree_temp_slot_address_entry_htab (int, void *);
extern void * ggc_alloc_splay_tree_throw_stmt_node_htab (int, void *);
extern void * ggc_alloc_splay_tree_reg_attrs_htab (int, void *);
extern void * ggc_alloc_splay_tree_mem_attrs_htab (int, void *);
extern void * ggc_alloc_splay_tree_rtx_def_htab (int, void *);
extern void * ggc_alloc_splay_tree_addr_table_entry_struct_htab (int, void *);
extern void * ggc_alloc_splay_tree_cached_dw_loc_list_def_htab (int, void *);
extern void * ggc_alloc_splay_tree_var_loc_list_def_htab (int, void *);
extern void * ggc_alloc_splay_tree_die_struct_htab (int, void *);
extern void * ggc_alloc_splay_tree_dwarf_file_data_htab (int, void *);
extern void * ggc_alloc_splay_tree_indirect_string_node_htab (int, void *);
extern void * ggc_alloc_splay_tree_str_tree_node_splay_tree_s (int, void *);
extern void * ggc_alloc_splay_tree_scalar_scalar_splay_tree_s (int, void *);
extern void * ggc_alloc_splay_tree_symtab_node_def_htab (int, void *);
extern void * ggc_alloc_splay_tree_cgraph_edge_htab (int, void *);
extern void * ggc_alloc_splay_tree_loop_exit_htab (int, void *);
extern void * ggc_alloc_splay_tree_types_used_by_vars_entry_htab (int, void *);
extern void * ggc_alloc_splay_tree_tree_node_htab (int, void *);
extern void * ggc_alloc_splay_tree_libfunc_entry_htab (int, void *);
# 35 "../../src/gcc/ggc.h" 2




typedef void (*gt_note_pointers) (void *, void *, gt_pointer_operator,
      void *);






typedef void (*gt_handle_reorder) (void *, void *, gt_pointer_operator,
       void *);


extern int gt_pch_note_object (void *, void *, gt_note_pointers);



extern void gt_pch_note_reorder (void *, void *, gt_handle_reorder);


typedef void (*gt_pointer_walker) (void *);



struct ggc_root_tab {
  void *base;
  size_t nelt;
  size_t stride;
  gt_pointer_walker cb;
  gt_pointer_walker pchw;
};


extern const struct ggc_root_tab * const gt_ggc_rtab[];
extern const struct ggc_root_tab * const gt_ggc_deletable_rtab[];
extern const struct ggc_root_tab * const gt_pch_cache_rtab[];
extern const struct ggc_root_tab * const gt_pch_scalar_rtab[];


struct htab;
struct ggc_cache_tab {
  struct htab * *base;
  size_t nelt;
  size_t stride;
  gt_pointer_walker cb;
  gt_pointer_walker pchw;
  int (*marked_p) (const void *);
};


extern const struct ggc_cache_tab * const gt_ggc_cache_rtab[];
# 107 "../../src/gcc/ggc.h"
extern int ggc_set_mark (const void *);




extern int ggc_marked_p (const void *);


extern void gt_pch_n_S (const void *);
extern void gt_ggc_m_S (const void *);




extern void init_stringpool (void);


extern void init_ggc (void);





extern bool ggc_protect_identifiers;


extern void gt_pch_save (FILE *f);





extern void *ggc_internal_alloc_stat (size_t )
  __attribute__ ((__malloc__));

extern size_t ggc_round_alloc_size (size_t requested_size);




extern void *ggc_internal_cleared_alloc_stat (size_t )
  __attribute__ ((__malloc__));


extern void *ggc_realloc_stat (void *, size_t );


extern void ggc_free (void *);

extern void dump_ggc_loc_statistics (bool);
# 165 "../../src/gcc/ggc.h"
static inline void *
ggc_internal_vec_alloc_stat (size_t s, size_t c )
{
    return ggc_internal_alloc_stat (c * s );
}

static inline void *
ggc_internal_cleared_vec_alloc_stat (size_t s, size_t c )
{
    return ggc_internal_cleared_alloc_stat (c * s );
}




static inline void *
ggc_alloc_atomic_stat (size_t s )
{
    return ggc_internal_alloc_stat (s );
}






extern void *ggc_cleared_alloc_htab_ignore_args (size_t, size_t)
  __attribute__ ((__malloc__));

extern void *ggc_cleared_alloc_ptr_array_two_args (size_t, size_t)
  __attribute__ ((__malloc__));
# 207 "../../src/gcc/ggc.h"
extern void *ggc_splay_alloc (int, void *)
  __attribute__ ((__malloc__));

extern void ggc_splay_dont_free (void *, void *);




extern const char *ggc_alloc_string_stat (const char *contents, int length
                                                       );
# 225 "../../src/gcc/ggc.h"
extern void ggc_collect (void);



extern void ggc_register_root_tab (const struct ggc_root_tab *);



extern void ggc_register_cache_tab (const struct ggc_cache_tab *);


extern void gt_pch_restore (FILE *f);




extern void ggc_print_statistics (void);

extern void stringpool_statistics (void);


extern void init_ggc_heuristics (void);







static inline struct rtx_def *
ggc_alloc_rtx_def_stat (size_t s )
{
  return (struct rtx_def *) ggc_internal_alloc_stat (s );
}

static inline union tree_node *
ggc_alloc_tree_node_stat (size_t s )
{
  return (union tree_node *) ggc_internal_alloc_stat (s );
}

static inline union tree_node *
ggc_alloc_cleared_tree_node_stat (size_t s )
{
  return (union tree_node *) ggc_internal_cleared_alloc_stat (s );
}

static inline union gimple_statement_d *
ggc_alloc_cleared_gimple_statement_d_stat (size_t s )
{
  return (union gimple_statement_d *)
    ggc_internal_cleared_alloc_stat (s );
}
# 33 "../../src/gcc/vec.c" 2
# 1 "../../src/gcc/vec.h" 1
# 208 "../../src/gcc/vec.h"
extern void dump_vec_loc_statistics (void);





struct vec_prefix
{




  void register_overhead (size_t, const char *, int, const char *);
  void release_overhead (void);
  static unsigned calculate_allocation (vec_prefix *, unsigned, bool);







  template <typename, typename, typename> friend struct vec;


  friend struct va_gc;
  friend struct va_gc_atomic;
  friend struct va_heap;
  friend struct va_stack;

  unsigned alloc_;
  unsigned num_;
};

template<typename, typename, typename> struct vec;






struct vl_embed { };
struct vl_ptr { };
# 262 "../../src/gcc/vec.h"
struct va_heap
{


  typedef vl_ptr default_layout;

  template<typename T>
  static void reserve (vec<T, va_heap, vl_embed> *&, unsigned, bool
                          );

  template<typename T>
  static void release (vec<T, va_heap, vl_embed> *&);
};







template<typename T>
inline void
va_heap::reserve (vec<T, va_heap, vl_embed> *&v, unsigned reserve, bool exact
                 )
{
  unsigned alloc
    = vec_prefix::calculate_allocation (v ? &v->vecpfx_ : 0, reserve, exact);
  if (!alloc)
    {
      release (v);
      return;
    }

  if (0 && v)
    v->vecpfx_.release_overhead ();

  size_t size = vec<T, va_heap, vl_embed>::embedded_size (alloc);
  unsigned nelem = v ? v->length () : 0;
  v = static_cast <vec<T, va_heap, vl_embed> *> (xrealloc (v, size));
  v->embedded_init (alloc, nelem);

  if (0)
    v->vecpfx_.register_overhead (size , 0,0,0);
}




template<typename T>
void
va_heap::release (vec<T, va_heap, vl_embed> *&v)
{
  if (v == __null)
    return;

  if (0)
    v->vecpfx_.release_overhead ();
  ::free (v);
  v = __null;
}





struct va_gc
{




  typedef vl_embed default_layout;

  template<typename T, typename A>
  static void reserve (vec<T, A, vl_embed> *&, unsigned, bool
                          );

  template<typename T, typename A>
  static void release (vec<T, A, vl_embed> *&v) { v = __null; }
};







template<typename T, typename A>
void
va_gc::reserve (vec<T, A, vl_embed> *&v, unsigned reserve, bool exact
               )
{
  unsigned alloc
    = vec_prefix::calculate_allocation (v ? &v->vecpfx_ : 0, reserve, exact);
  if (!alloc)
    {
      ::ggc_free (v);
      v = __null;
      return;
    }


  size_t size = vec<T, A, vl_embed>::embedded_size (alloc);


  size = ::ggc_round_alloc_size (size);


  size_t vec_offset = sizeof (vec_prefix);
  size_t elt_size = sizeof (T);
  alloc = (size - vec_offset) / elt_size;


  size = vec_offset + alloc * elt_size;

  unsigned nelem = v ? v->length () : 0;
  v = static_cast <vec<T, A, vl_embed> *> (::ggc_realloc_stat (v, size
                           ));
  v->embedded_init (alloc, nelem);
}





struct va_gc_atomic : va_gc
{
};



struct va_stack
{

  typedef vl_ptr default_layout;

  template<typename T>
  static void alloc (vec<T, va_stack, vl_ptr>&, unsigned,
       vec<T, va_stack, vl_embed> *);

  template <typename T>
  static void reserve (vec<T, va_stack, vl_embed> *&, unsigned, bool
                          );

  template <typename T>
  static void release (vec<T, va_stack, vl_embed> *&);
};


void register_stack_vec (void *);
int stack_vec_register_index (void *);
void unregister_stack_vec (unsigned);





template<typename T>
void
va_stack::alloc (vec<T, va_stack, vl_ptr> &v, unsigned nelems,
   vec<T, va_stack, vl_embed> *space)
{
  v.vec_ = space;
  register_stack_vec (static_cast<void *> (v.vec_));
  v.vec_->embedded_init (nelems, 0);
}
# 436 "../../src/gcc/vec.h"
template<typename T>
void
va_stack::reserve (vec<T, va_stack, vl_embed> *&v, unsigned nelems, bool exact
                  )
{
  int ix = stack_vec_register_index (static_cast<void *> (v));
  if (ix >= 0)
    unregister_stack_vec (ix);
  else
    {

      va_heap::reserve (reinterpret_cast<vec<T, va_heap, vl_embed> *&> (v),
   nelems, exact );
      return;
    }


  nelems += v->vecpfx_.num_;
  vec<T, va_stack, vl_embed> *oldvec = v;
  v = __null;
  va_heap::reserve (reinterpret_cast<vec<T, va_heap, vl_embed> *&>(v), nelems,
      exact );
  if (v && oldvec)
    {
      v->vecpfx_.num_ = oldvec->length ();
      memcpy (v->vecdata_,
       oldvec->vecdata_,
       oldvec->length () * sizeof (T));
    }
}





template<typename T>
void
va_stack::release (vec<T, va_stack, vl_embed> *&v)
{
  if (v == __null)
    return;

  int ix = stack_vec_register_index (static_cast<void *> (v));
  if (ix >= 0)
    {
      unregister_stack_vec (ix);
      v = __null;
    }
  else
    {


      va_heap::release (reinterpret_cast<vec<T, va_heap, vl_embed> *&> (v));
    }
}
# 504 "../../src/gcc/vec.h"
template<typename T,
         typename A = va_heap,
         typename L = typename A::default_layout>
struct vec
{
};





struct vnull
{
  template <typename T, typename A, typename L>
  operator vec<T, A, L> () { return vec<T, A, L>(); }
};
extern vnull vNULL;
# 549 "../../src/gcc/vec.h"
template<typename T, typename A>
struct vec<T, A, vl_embed>
{
public:
  unsigned allocated (void) const { return vecpfx_.alloc_; }
  unsigned length (void) const { return vecpfx_.num_; }
  bool is_empty (void) const { return vecpfx_.num_ == 0; }
  T *address (void) { return vecdata_; }
  const T *address (void) const { return vecdata_; }
  const T &operator[] (unsigned) const;
  T &operator[] (unsigned);
  T &last (void);
  bool space (unsigned) const;
  bool iterate (unsigned, T *) const;
  bool iterate (unsigned, T **) const;
  vec *copy () const;
  void splice (vec &);
  void splice (vec *src);
  T *quick_push (const T &);
  T &pop (void);
  void truncate (unsigned);
  void quick_insert (unsigned, const T &);
  void ordered_remove (unsigned);
  void unordered_remove (unsigned);
  void block_remove (unsigned, unsigned);
  void qsort (int (*) (const void *, const void *));
  unsigned lower_bound (T, bool (*)(const T &, const T &)) const;
  static size_t embedded_size (unsigned);
  void embedded_init (unsigned, unsigned = 0);
  void quick_grow (unsigned len);
  void quick_grow_cleared (unsigned len);


  template <typename, typename, typename> friend struct vec;


  friend struct va_gc;
  friend struct va_gc_atomic;
  friend struct va_heap;
  friend struct va_stack;



  vec_prefix vecpfx_;
  T vecdata_[1];
};
# 612 "../../src/gcc/vec.h"
template<typename T, typename A>
inline bool
vec_safe_space (const vec<T, A, vl_embed> *v, unsigned nelems)
{
  return v ? v->space (nelems) : nelems == 0;
}



template<typename T, typename A>
inline unsigned
vec_safe_length (const vec<T, A, vl_embed> *v)
{
  return v ? v->length () : 0;
}



template<typename T, typename A>
inline T *
vec_safe_address (vec<T, A, vl_embed> *v)
{
  return v ? v->address () : __null;
}



template<typename T, typename A>
inline bool
vec_safe_is_empty (vec<T, A, vl_embed> *v)
{
  return v ? v->is_empty () : true;
}




template<typename T, typename A>
inline bool
vec_safe_reserve (vec<T, A, vl_embed> *&v, unsigned nelems, bool exact = false
                     )
{
  bool extend = nelems ? !vec_safe_space (v, nelems) : false;
  if (extend)
    A::reserve (v, nelems, exact );
  return extend;
}

template<typename T, typename A>
inline bool
vec_safe_reserve_exact (vec<T, A, vl_embed> *&v, unsigned nelems
                    )
{
  return vec_safe_reserve (v, nelems, true );
}





template<typename T, typename A>
inline void
vec_alloc (vec<T, A, vl_embed> *&v, unsigned nelems )
{
  v = __null;
  vec_safe_reserve (v, nelems, false );
}




template<typename T, typename A>
inline void
vec_free (vec<T, A, vl_embed> *&v)
{
  A::release (v);
}



template<typename T, typename A>
inline void
vec_safe_grow (vec<T, A, vl_embed> *&v, unsigned len )
{
  unsigned oldlen = vec_safe_length (v);
  ((void)(0 && (len >= oldlen)));
  vec_safe_reserve_exact (v, len - oldlen );
  v->quick_grow (len);
}



template<typename T, typename A>
inline void
vec_safe_grow_cleared (vec<T, A, vl_embed> *&v, unsigned len )
{
  unsigned oldlen = vec_safe_length (v);
  vec_safe_grow (v, len );
  memset (&(v->address()[oldlen]), 0, sizeof (T) * (len - oldlen));
}



template<typename T, typename A>
inline bool
vec_safe_iterate (const vec<T, A, vl_embed> *v, unsigned ix, T **ptr)
{
  if (v)
    return v->iterate (ix, ptr);
  else
    {
      *ptr = 0;
      return false;
    }
}

template<typename T, typename A>
inline bool
vec_safe_iterate (const vec<T, A, vl_embed> *v, unsigned ix, T *ptr)
{
  if (v)
    return v->iterate (ix, ptr);
  else
    {
      *ptr = 0;
      return false;
    }
}




template<typename T, typename A>
inline T *
vec_safe_push (vec<T, A, vl_embed> *&v, const T &obj )
{
  vec_safe_reserve (v, 1, false );
  return v->quick_push (obj);
}




template<typename T, typename A>
inline void
vec_safe_insert (vec<T, A, vl_embed> *&v, unsigned ix, const T &obj
                    )
{
  vec_safe_reserve (v, 1, false );
  v->quick_insert (ix, obj);
}



template<typename T, typename A>
inline void
vec_safe_truncate (vec<T, A, vl_embed> *v, unsigned size)
{
  if (v)
    v->truncate (size);
}



template<typename T, typename A>
inline vec<T, A, vl_embed> *
vec_safe_copy (vec<T, A, vl_embed> *src)
{
  return src ? src->copy () : __null;
}



template<typename T, typename A>
inline void
vec_safe_splice (vec<T, A, vl_embed> *&dst, vec<T, A, vl_embed> *src
                    )
{
  unsigned src_len = vec_safe_length (src);
  if (src_len)
    {
      vec_safe_reserve_exact (dst, vec_safe_length (dst) + src_len
                      );
      dst->splice (*src);
    }
}





template<typename T, typename A>
inline const T &
vec<T, A, vl_embed>::operator[] (unsigned ix) const
{
  ((void)(0 && (ix < vecpfx_.num_)));
  return vecdata_[ix];
}

template<typename T, typename A>
inline T &
vec<T, A, vl_embed>::operator[] (unsigned ix)
{
  ((void)(0 && (ix < vecpfx_.num_)));
  return vecdata_[ix];
}




template<typename T, typename A>
inline T &
vec<T, A, vl_embed>::last (void)
{
  ((void)(0 && (vecpfx_.num_ > 0)));
  return (*this)[vecpfx_.num_ - 1];
}
# 837 "../../src/gcc/vec.h"
template<typename T, typename A>
inline bool
vec<T, A, vl_embed>::space (unsigned nelems) const
{
  return vecpfx_.alloc_ - vecpfx_.num_ >= nelems;
}
# 852 "../../src/gcc/vec.h"
template<typename T, typename A>
inline bool
vec<T, A, vl_embed>::iterate (unsigned ix, T *ptr) const
{
  if (ix < vecpfx_.num_)
    {
      *ptr = vecdata_[ix];
      return true;
    }
  else
    {
      *ptr = 0;
      return false;
    }
}
# 878 "../../src/gcc/vec.h"
template<typename T, typename A>
inline bool
vec<T, A, vl_embed>::iterate (unsigned ix, T **ptr) const
{
  if (ix < vecpfx_.num_)
    {
      *ptr = (const_cast<T *> ((&vecdata_[ix])));
      return true;
    }
  else
    {
      *ptr = 0;
      return false;
    }
}




template<typename T, typename A>
inline vec<T, A, vl_embed> *
vec<T, A, vl_embed>::copy (void) const
{
  vec<T, A, vl_embed> *new_vec = __null;
  unsigned len = length ();
  if (len)
    {
      vec_alloc (new_vec, len );
      new_vec->embedded_init (len, len);
      memcpy (new_vec->address(), vecdata_, sizeof (T) * len);
    }
  return new_vec;
}





template<typename T, typename A>
inline void
vec<T, A, vl_embed>::splice (vec<T, A, vl_embed> &src)
{
  unsigned len = src.length();
  if (len)
    {
      ((void)(0 && (space (len))));
      memcpy (address() + length(), src.address(), len * sizeof (T));
      vecpfx_.num_ += len;
    }
}

template<typename T, typename A>
inline void
vec<T, A, vl_embed>::splice (vec<T, A, vl_embed> *src)
{
  if (src)
    splice (*src);
}






template<typename T, typename A>
inline T *
vec<T, A, vl_embed>::quick_push (const T &obj)
{
  ((void)(0 && (space (1))));
  T *slot = &vecdata_[vecpfx_.num_++];
  *slot = obj;
  return slot;
}




template<typename T, typename A>
inline T &
vec<T, A, vl_embed>::pop (void)
{
  ((void)(0 && (length () > 0)));
  return vecdata_[--vecpfx_.num_];
}





template<typename T, typename A>
inline void
vec<T, A, vl_embed>::truncate (unsigned size)
{
  ((void)(0 && (length () >= size)));
  vecpfx_.num_ = size;
}





template<typename T, typename A>
inline void
vec<T, A, vl_embed>::quick_insert (unsigned ix, const T &obj)
{
  ((void)(0 && (length () < allocated ())));
  ((void)(0 && (ix <= length ())));
  T *slot = &vecdata_[ix];
  memmove (slot + 1, slot, (vecpfx_.num_++ - ix) * sizeof (T));
  *slot = obj;
}






template<typename T, typename A>
inline void
vec<T, A, vl_embed>::ordered_remove (unsigned ix)
{
  ((void)(0 && (ix < length())));
  T *slot = &vecdata_[ix];
  memmove (slot, slot + 1, (--vecpfx_.num_ - ix) * sizeof (T));
}





template<typename T, typename A>
inline void
vec<T, A, vl_embed>::unordered_remove (unsigned ix)
{
  ((void)(0 && (ix < length())));
  vecdata_[ix] = vecdata_[--vecpfx_.num_];
}





template<typename T, typename A>
inline void
vec<T, A, vl_embed>::block_remove (unsigned ix, unsigned len)
{
  ((void)(0 && (ix + len <= length())));
  T *slot = &vecdata_[ix];
  vecpfx_.num_ -= len;
  memmove (slot, slot + len, (vecpfx_.num_ - ix) * sizeof (T));
}





template<typename T, typename A>
inline void
vec<T, A, vl_embed>::qsort (int (*cmp) (const void *, const void *))
{
  ::qsort (address(), length(), sizeof (T), cmp);
}







template<typename T, typename A>
unsigned
vec<T, A, vl_embed>::lower_bound (T obj, bool (*lessthan)(const T &, const T &))
  const
{
  unsigned int len = length ();
  unsigned int half, middle;
  unsigned int first = 0;
  while (len > 0)
    {
      half = len / 2;
      middle = first;
      middle += half;
      T middle_elem = (*this)[middle];
      if (lessthan (middle_elem, obj))
 {
   first = middle;
   ++first;
   len = len - half - 1;
 }
      else
 len = half;
    }
  return first;
}
# 1086 "../../src/gcc/vec.h"
template<typename T, typename A>
inline size_t
vec<T, A, vl_embed>::embedded_size (unsigned alloc)
{
  typedef vec<T, A, vl_embed> vec_embedded;
  return __builtin_offsetof(vec_embedded, vecdata_) + alloc * sizeof (T);
}





template<typename T, typename A>
inline void
vec<T, A, vl_embed>::embedded_init (unsigned alloc, unsigned num)
{
  vecpfx_.alloc_ = alloc;
  vecpfx_.num_ = num;
}





template<typename T, typename A>
inline void
vec<T, A, vl_embed>::quick_grow (unsigned len)
{
  ((void)(0 && (length () <= len && len <= vecpfx_.alloc_)));
  vecpfx_.num_ = len;
}





template<typename T, typename A>
inline void
vec<T, A, vl_embed>::quick_grow_cleared (unsigned len)
{
  unsigned oldlen = length ();
  quick_grow (len);
  memset (&(address()[oldlen]), 0, sizeof (T) * (len - oldlen));
}




template<typename T>
void
gt_ggc_mx (vec<T, va_gc> *v)
{
  extern void gt_ggc_mx (T &);
  for (unsigned i = 0; i < v->length (); i++)
    gt_ggc_mx ((*v)[i]);
}

template<typename T>
void
gt_ggc_mx (vec<T, va_gc_atomic, vl_embed> *v __attribute__ ((__unused__)))
{


}




template<typename T, typename A>
void
gt_pch_nx (vec<T, A, vl_embed> *v)
{
  extern void gt_pch_nx (T &);
  for (unsigned i = 0; i < v->length (); i++)
    gt_pch_nx ((*v)[i]);
}

template<typename T, typename A>
void
gt_pch_nx (vec<T *, A, vl_embed> *v, gt_pointer_operator op, void *cookie)
{
  for (unsigned i = 0; i < v->length (); i++)
    op (&((*v)[i]), cookie);
}

template<typename T, typename A>
void
gt_pch_nx (vec<T, A, vl_embed> *v, gt_pointer_operator op, void *cookie)
{
  extern void gt_pch_nx (T *, gt_pointer_operator, void *);
  for (unsigned i = 0; i < v->length (); i++)
    gt_pch_nx (&((*v)[i]), op, cookie);
}
# 1209 "../../src/gcc/vec.h"
template<typename T, typename A>
struct vec<T, A, vl_ptr>
{
public:


  void create (unsigned nelems );
  void release (void);


  bool exists (void) const
  { return vec_ != __null; }

  bool is_empty (void) const
  { return vec_ ? vec_->is_empty() : true; }

  unsigned length (void) const
  { return vec_ ? vec_->length() : 0; }

  T *address (void)
  { return vec_ ? vec_->vecdata_ : __null; }

  const T *address (void) const
  { return vec_ ? vec_->vecdata_ : __null; }

  const T &operator[] (unsigned ix) const
  { return (*vec_)[ix]; }

  bool operator!=(const vec &other) const
  { return !(*this == other); }

  bool operator==(const vec &other) const
  { return address() == other.address(); }

  T &operator[] (unsigned ix)
  { return (*vec_)[ix]; }

  T &last (void)
  { return vec_->last(); }

  bool space (int nelems) const
  { return vec_ ? vec_->space (nelems) : nelems == 0; }

  bool iterate (unsigned ix, T *p) const;
  bool iterate (unsigned ix, T **p) const;
  vec copy () const;
  bool reserve (unsigned, bool = false );
  bool reserve_exact (unsigned );
  void splice (vec &);
  void safe_splice (vec & );
  T *quick_push (const T &);
  T *safe_push (const T &);
  T &pop (void);
  void truncate (unsigned);
  void safe_grow (unsigned );
  void safe_grow_cleared (unsigned );
  void quick_grow (unsigned);
  void quick_grow_cleared (unsigned);
  void quick_insert (unsigned, const T &);
  void safe_insert (unsigned, const T & );
  void ordered_remove (unsigned);
  void unordered_remove (unsigned);
  void block_remove (unsigned, unsigned);
  void qsort (int (*) (const void *, const void *));
  unsigned lower_bound (T, bool (*)(const T &, const T &)) const;

  template<typename T1>
  friend void va_stack::alloc(vec<T1, va_stack, vl_ptr>&, unsigned,
         vec<T1, va_stack, vl_embed> *);



  vec<T, A, vl_embed> *vec_;
};






template<typename T>
struct vec<T, va_gc, vl_ptr>
{
};






template<typename T>
inline void
vec_alloc (vec<T> *&v, unsigned nelems )
{
  v = new vec<T>;
  v->create (nelems );
}




template<typename T>
inline void
vec_check_alloc (vec<T, va_heap> *&vec, unsigned nelems )
{
  if (!vec)
    vec_alloc (vec, nelems );
}




template<typename T>
inline void
vec_free (vec<T> *&v)
{
  if (v == __null)
    return;

  v->release ();
  delete v;
  v = __null;
}
# 1380 "../../src/gcc/vec.h"
template<typename T, typename A>
inline bool
vec<T, A, vl_ptr>::iterate (unsigned ix, T *ptr) const
{
  if (vec_)
    return vec_->iterate (ix, ptr);
  else
    {
      *ptr = 0;
      return false;
    }
}
# 1403 "../../src/gcc/vec.h"
template<typename T, typename A>
inline bool
vec<T, A, vl_ptr>::iterate (unsigned ix, T **ptr) const
{
  if (vec_)
    return vec_->iterate (ix, ptr);
  else
    {
      *ptr = 0;
      return false;
    }
}
# 1442 "../../src/gcc/vec.h"
template<typename T, typename A>
inline vec<T, A, vl_ptr>
vec<T, A, vl_ptr>::copy (void) const
{
  vec<T, A, vl_ptr> new_vec = vNULL;
  if (length ())
    new_vec.vec_ = vec_->copy ();
  return new_vec;
}
# 1462 "../../src/gcc/vec.h"
template<typename T, typename A>
inline bool
vec<T, A, vl_ptr>::reserve (unsigned nelems, bool exact )
{
  bool extend = nelems ? !space (nelems) : false;
  if (extend)
    A::reserve (vec_, nelems, exact );
  return extend;
}







template<typename T, typename A>
inline bool
vec<T, A, vl_ptr>::reserve_exact (unsigned nelems )
{
  return reserve (nelems, true );
}







template<typename T, typename A>
inline void
vec<T, A, vl_ptr>::create (unsigned nelems )
{
  vec_ = __null;
  if (nelems > 0)
    reserve_exact (nelems );
}




template<typename T, typename A>
inline void
vec<T, A, vl_ptr>::release (void)
{
  if (vec_)
    A::release (vec_);
}







template<typename T, typename A>
inline void
vec<T, A, vl_ptr>::splice (vec<T, A, vl_ptr> &src)
{
  if (src.vec_)
    vec_->splice (*(src.vec_));
}







template<typename T, typename A>
inline void
vec<T, A, vl_ptr>::safe_splice (vec<T, A, vl_ptr> &src )
{
  if (src.length())
    {
      reserve_exact (src.length());
      splice (src);
    }
}






template<typename T, typename A>
inline T *
vec<T, A, vl_ptr>::quick_push (const T &obj)
{
  return vec_->quick_push (obj);
}






template<typename T, typename A>
inline T *
vec<T, A, vl_ptr>::safe_push (const T &obj )
{
  reserve (1, false );
  return quick_push (obj);
}




template<typename T, typename A>
inline T &
vec<T, A, vl_ptr>::pop (void)
{
  return vec_->pop ();
}





template<typename T, typename A>
inline void
vec<T, A, vl_ptr>::truncate (unsigned size)
{
  if (vec_)
    vec_->truncate (size);
  else
    ((void)(0 && (size == 0)));
}






template<typename T, typename A>
inline void
vec<T, A, vl_ptr>::safe_grow (unsigned len )
{
  unsigned oldlen = length ();
  ((void)(0 && (oldlen <= len)));
  reserve_exact (len - oldlen );
  vec_->quick_grow (len);
}






template<typename T, typename A>
inline void
vec<T, A, vl_ptr>::safe_grow_cleared (unsigned len )
{
  unsigned oldlen = length ();
  safe_grow (len );
  memset (&(address()[oldlen]), 0, sizeof (T) * (len - oldlen));
}





template<typename T, typename A>
inline void
vec<T, A, vl_ptr>::quick_grow (unsigned len)
{
  ((void)(0 && (vec_)));
  vec_->quick_grow (len);
}






template<typename T, typename A>
inline void
vec<T, A, vl_ptr>::quick_grow_cleared (unsigned len)
{
  ((void)(0 && (vec_)));
  vec_->quick_grow_cleared (len);
}





template<typename T, typename A>
inline void
vec<T, A, vl_ptr>::quick_insert (unsigned ix, const T &obj)
{
  vec_->quick_insert (ix, obj);
}





template<typename T, typename A>
inline void
vec<T, A, vl_ptr>::safe_insert (unsigned ix, const T &obj )
{
  reserve (1, false );
  quick_insert (ix, obj);
}






template<typename T, typename A>
inline void
vec<T, A, vl_ptr>::ordered_remove (unsigned ix)
{
  vec_->ordered_remove (ix);
}





template<typename T, typename A>
inline void
vec<T, A, vl_ptr>::unordered_remove (unsigned ix)
{
  vec_->unordered_remove (ix);
}





template<typename T, typename A>
inline void
vec<T, A, vl_ptr>::block_remove (unsigned ix, unsigned len)
{
  vec_->block_remove (ix, len);
}





template<typename T, typename A>
inline void
vec<T, A, vl_ptr>::qsort (int (*cmp) (const void *, const void *))
{
  if (vec_)
    vec_->qsort (cmp);
}







template<typename T, typename A>
inline unsigned
vec<T, A, vl_ptr>::lower_bound (T obj, bool (*lessthan)(const T &, const T &))
    const
{
  return vec_ ? vec_->lower_bound (obj, lessthan) : 0;
}
# 34 "../../src/gcc/vec.c" 2
# 1 "../../src/gcc/diagnostic-core.h" 1
# 25 "../../src/gcc/diagnostic-core.h"
# 1 "../../src/gcc/input.h" 1
# 24 "../../src/gcc/input.h"
# 1 "../../src/gcc/../libcpp/include/line-map.h" 1
# 36 "../../src/gcc/../libcpp/include/line-map.h"
enum lc_reason
{
  LC_ENTER = 0,
  LC_LEAVE,
  LC_RENAME,
  LC_RENAME_VERBATIM,
  LC_ENTER_MACRO

};


typedef unsigned int linenum_type;


typedef unsigned int source_location;


typedef void *(*line_map_realloc) (void *, size_t);



typedef size_t (*line_map_round_alloc_size_func) (size_t);
# 70 "../../src/gcc/../libcpp/include/line-map.h"
struct line_map_ordinary {
  const char *to_file;
  linenum_type to_line;




  int included_from;





  unsigned char sysp;


  unsigned int column_bits : 8;
};





struct cpp_hashnode;
# 104 "../../src/gcc/../libcpp/include/line-map.h"
struct line_map_macro {

  struct cpp_hashnode *


    macro;


  unsigned int n_tokens;
# 167 "../../src/gcc/../libcpp/include/line-map.h"
  source_location * macro_locations;






  source_location expansion;
};
# 203 "../../src/gcc/../libcpp/include/line-map.h"
struct line_map {
  source_location start_location;


  enum lc_reason reason : 8;

  union map_u {
    struct line_map_ordinary ordinary;
    struct line_map_macro macro;
  } d;
};
# 243 "../../src/gcc/../libcpp/include/line-map.h"
struct maps_info {





  struct line_map * maps;


  unsigned int allocated;



  unsigned int used;

  unsigned int cache;
};


struct location_adhoc_data {
  source_location locus;
  void * data;
};

struct htab;
# 279 "../../src/gcc/../libcpp/include/line-map.h"
struct location_adhoc_data_map {
  struct htab * htab;
  source_location curr_loc;
  unsigned int allocated;
  struct location_adhoc_data *data;
};


struct line_maps {

  struct maps_info info_ordinary;

  struct maps_info info_macro;


  unsigned int depth;


  bool trace_includes;


  source_location highest_location;


  source_location highest_line;



  unsigned int max_column_hint;



  line_map_realloc reallocator;



  line_map_round_alloc_size_func round_alloc_size;

  struct location_adhoc_data_map location_adhoc_data_map;
};
# 437 "../../src/gcc/../libcpp/include/line-map.h"
extern void location_adhoc_data_fini (struct line_maps *);
extern source_location get_combined_adhoc_loc (struct line_maps *,
            source_location, void *);
extern void *get_data_from_adhoc_loc (struct line_maps *, source_location);
extern source_location get_location_from_adhoc_loc (struct line_maps *,
          source_location);





extern void rebuild_location_adhoc_htab (struct line_maps *);


extern void linemap_init (struct line_maps *);



extern void linemap_check_files_exited (struct line_maps *);







extern source_location linemap_line_start
(struct line_maps *set, linenum_type to_line, unsigned int max_column_hint);
# 479 "../../src/gcc/../libcpp/include/line-map.h"
extern const struct line_map *linemap_add
  (struct line_maps *, enum lc_reason, unsigned int sysp,
   const char *to_file, linenum_type to_line);







extern const struct line_map *linemap_lookup
  (struct line_maps *, source_location);



bool linemap_tracks_macro_expansion_locs_p (struct line_maps *);



bool linemap_macro_expansion_map_p (const struct line_map *);


const char* linemap_map_get_macro_name (const struct line_map*);
# 512 "../../src/gcc/../libcpp/include/line-map.h"
int linemap_location_in_system_header_p (struct line_maps *,
      source_location);




bool linemap_location_from_macro_expansion_p (struct line_maps *,
           source_location);
# 589 "../../src/gcc/../libcpp/include/line-map.h"
extern source_location
linemap_position_for_column (struct line_maps *, unsigned int);



source_location linemap_position_for_line_and_column (struct line_map *,
            linenum_type,
            unsigned int);
# 616 "../../src/gcc/../libcpp/include/line-map.h"
int linemap_compare_locations (struct line_maps *set,
          source_location pre,
          source_location post);







typedef struct
{

  const char *file;


  int line;

  int column;

  void *data;


  bool sysp;
} expanded_location;




enum location_resolution_kind
{
  LRK_MACRO_EXPANSION_POINT,
  LRK_SPELLING_LOCATION,
  LRK_MACRO_DEFINITION_LOCATION
};
# 700 "../../src/gcc/../libcpp/include/line-map.h"
source_location linemap_resolve_location (struct line_maps *,
       source_location loc,
       enum location_resolution_kind lrk,
       const struct line_map **loc_map);
# 712 "../../src/gcc/../libcpp/include/line-map.h"
source_location linemap_unwind_toward_expansion (struct line_maps *,
       source_location loc,
       const struct line_map **loc_map);
# 730 "../../src/gcc/../libcpp/include/line-map.h"
source_location linemap_unwind_to_first_non_reserved_loc (struct line_maps *,
         source_location loc,
         const struct line_map **map);





expanded_location linemap_expand_location (struct line_maps *,
        const struct line_map *,
        source_location loc);



struct linemap_stats
{
  long num_ordinary_maps_allocated;
  long num_ordinary_maps_used;
  long ordinary_maps_allocated_size;
  long ordinary_maps_used_size;
  long num_expanded_macros;
  long num_macro_tokens;
  long num_macro_maps_used;
  long macro_maps_allocated_size;
  long macro_maps_used_size;
  long macro_maps_locations_size;
  long duplicated_macro_maps_locations_size;
};



void linemap_get_statistics (struct line_maps *, struct linemap_stats *);



void linemap_dump_location (struct line_maps *, source_location, FILE *);




void linemap_dump (FILE *, struct line_maps *, unsigned, bool);




void line_table_dump (FILE *, struct line_maps *, unsigned int, unsigned int);
# 25 "../../src/gcc/input.h" 2

extern struct line_maps *line_table;
# 36 "../../src/gcc/input.h"
extern char builtins_location_check[(((source_location) 1)
         < 2) ? 1 : -1];

extern expanded_location expand_location (source_location);
extern const char * location_get_source_line(expanded_location xloc);
extern expanded_location expand_location_to_spelling_point (source_location);
extern source_location expansion_point_location_if_in_system_header (source_location);



typedef source_location location_t;

extern location_t input_location;
# 65 "../../src/gcc/input.h"
void dump_line_table_statistics (void);
# 26 "../../src/gcc/diagnostic-core.h" 2
# 1 "./bversion.h" 1
# 27 "../../src/gcc/diagnostic-core.h" 2


typedef enum
{


# 1 "../../src/gcc/diagnostic.def" 1
# 25 "../../src/gcc/diagnostic.def"
DK_UNSPECIFIED,




DK_IGNORED,


DK_FATAL,
DK_ICE,
DK_ERROR,
DK_SORRY,
DK_WARNING,
DK_ANACHRONISM,
DK_NOTE,
DK_DEBUG,


DK_PEDWARN,
DK_PERMERROR,
# 33 "../../src/gcc/diagnostic-core.h" 2

  DK_LAST_DIAGNOSTIC_KIND,


  DK_POP
} diagnostic_t;

extern const char *progname;

extern const char *trim_filename (const char *);
# 57 "../../src/gcc/diagnostic-core.h"
extern void internal_error (const char *, ...) __attribute__ ((__nonnull__ (1)))
     __attribute__ ((__noreturn__));

extern bool warning (int, const char *, ...) __attribute__ ((__nonnull__ (2)));
extern bool warning_at (location_t, int, const char *, ...)
    __attribute__ ((__nonnull__ (3)));
extern void error (const char *, ...) __attribute__ ((__nonnull__ (1)));
extern void error_n (location_t, int, const char *, const char *, ...)
    __attribute__ ((__nonnull__ (3))) __attribute__ ((__nonnull__ (4)));
extern void error_at (location_t, const char *, ...) __attribute__ ((__nonnull__ (2)));
extern void fatal_error (const char *, ...) __attribute__ ((__nonnull__ (1)))
     __attribute__ ((__noreturn__));

extern bool pedwarn (location_t, int, const char *, ...)
     __attribute__ ((__nonnull__ (3)));
extern bool permerror (location_t, const char *, ...) __attribute__ ((__nonnull__ (2)));
extern void sorry (const char *, ...) __attribute__ ((__nonnull__ (1)));
extern void inform (location_t, const char *, ...) __attribute__ ((__nonnull__ (2)));
extern void inform_n (location_t, int, const char *, const char *, ...)
    __attribute__ ((__nonnull__ (3))) __attribute__ ((__nonnull__ (4)));
extern void verbatim (const char *, ...) __attribute__ ((__nonnull__ (1)));
extern bool emit_diagnostic (diagnostic_t, location_t, int,
        const char *, ...) __attribute__ ((__nonnull__ (4)));
extern bool seen_error (void);




extern void fnotice (FILE *, const char *, ...)
     __attribute__ ((__format__ (__printf__, 2, 3))) __attribute__ ((__nonnull__ (2)));
# 35 "../../src/gcc/vec.c" 2
# 45 "../../src/gcc/vec.c"
vnull vNULL;



struct vec_descriptor
{
  const char *function;
  const char *file;
  int line;
  size_t allocated;
  size_t times;
  size_t peak;
};



static htab_t vec_desc_hash;


static hashval_t
hash_descriptor (const void *p)
{
  const struct vec_descriptor *const d =
    (const struct vec_descriptor *) p;
  return htab_hash_pointer (d->file) + d->line;
}
static int
eq_descriptor (const void *p1, const void *p2)
{
  const struct vec_descriptor *const d = (const struct vec_descriptor *) p1;
  const struct vec_descriptor *const l = (const struct vec_descriptor *) p2;
  return d->file == l->file && d->function == l->function && d->line == l->line;
}


static htab_t ptr_hash;
struct ptr_hash_entry
{
  void *ptr;
  struct vec_descriptor *loc;
  size_t allocated;
};


static hashval_t
hash_ptr (const void *p)
{
  const struct ptr_hash_entry *const d = (const struct ptr_hash_entry *) p;

  return htab_hash_pointer (d->ptr);
}

static int
eq_ptr (const void *p1, const void *p2)
{
  const struct ptr_hash_entry *const p = (const struct ptr_hash_entry *) p1;

  return (p->ptr == p2);
}


static struct vec_descriptor *
vec_descriptor (const char *name, int line, const char *function)
{
  struct vec_descriptor loc;
  struct vec_descriptor **slot;

  loc.file = name;
  loc.line = line;
  loc.function = function;
  if (!vec_desc_hash)
    vec_desc_hash = htab_create (10, hash_descriptor, eq_descriptor, __null);

  slot = (struct vec_descriptor **) htab_find_slot (vec_desc_hash, &loc,
          INSERT);
  if (*slot)
    return *slot;
  *slot = ((struct vec_descriptor *) xcalloc (1, sizeof (struct vec_descriptor)));
  (*slot)->file = name;
  (*slot)->line = line;
  (*slot)->function = function;
  (*slot)->allocated = 0;
  (*slot)->peak = 0;
  return *slot;
}



void
vec_prefix::register_overhead (size_t size, const char *name, int line,
          const char *function)
{
  struct vec_descriptor *loc = vec_descriptor (name, line, function);
  struct ptr_hash_entry *p = ((struct ptr_hash_entry *) xmalloc (sizeof (struct ptr_hash_entry)));
  void * *slot;

  p->ptr = this;
  p->loc = loc;
  p->allocated = size;
  if (!ptr_hash)
    ptr_hash = htab_create (10, hash_ptr, eq_ptr, __null);
  slot = htab_find_slot_with_hash (ptr_hash, this, htab_hash_pointer (this),
       INSERT);
  ((void)(!(!*slot) ? fancy_abort ("../../src/gcc/vec.c", 148, __FUNCTION__), 0 : 0));
  *slot = p;

  loc->allocated += size;
  if (loc->peak < loc->allocated)
    loc->peak += loc->allocated;
  loc->times++;
}




void
vec_prefix::release_overhead (void)
{
  void * *slot = htab_find_slot_with_hash (ptr_hash, this,
     htab_hash_pointer (this),
     NO_INSERT);
  struct ptr_hash_entry *p = (struct ptr_hash_entry *) *slot;
  p->loc->allocated -= p->allocated;
  htab_clear_slot (ptr_hash, slot);
  ::free (p);
}






unsigned
vec_prefix::calculate_allocation (vec_prefix *pfx, unsigned reserve,
      bool exact)
{
  unsigned alloc = 0;
  unsigned num = 0;

  if (pfx)
    {
      alloc = pfx->alloc_;
      num = pfx->num_;
    }
  else if (!reserve)


    return 0;


  ((void)(!(alloc - num < reserve) ? fancy_abort ("../../src/gcc/vec.c", 195, __FUNCTION__), 0 : 0));

  if (exact)

    alloc = num + reserve;
  else
    {

      if (!alloc)
 alloc = 4;
      else if (alloc < 16)

 alloc = alloc * 2;
      else

 alloc = (alloc * 3 / 2);


      if (alloc < num + reserve)
 alloc = num + reserve;
    }
  return alloc;
}
# 230 "../../src/gcc/vec.c"
static vec<void *> stack_vecs;



void
register_stack_vec (void *vec)
{
  stack_vecs.safe_push (vec);
}





int
stack_vec_register_index (void *vec)
{
  for (unsigned ix = stack_vecs.length (); ix > 0; --ix)
    if (stack_vecs[ix - 1] == vec)
      return static_cast<int> (ix - 1);
  return -1;
}




void
unregister_stack_vec (unsigned ix)
{
  stack_vecs.unordered_remove (ix);
}




static int
cmp_statistic (const void *loc1, const void *loc2)
{
  const struct vec_descriptor *const l1 =
    *(const struct vec_descriptor *const *) loc1;
  const struct vec_descriptor *const l2 =
    *(const struct vec_descriptor *const *) loc2;
  long diff;
  diff = l1->allocated - l2->allocated;
  if (!diff)
    diff = l1->peak - l2->peak;
  if (!diff)
    diff = l1->times - l2->times;
  return diff > 0 ? 1 : diff < 0 ? -1 : 0;
}




static struct vec_descriptor **loc_array;
static int
add_statistics (void **slot, void *b)
{
  int *n = (int *)b;
  loc_array[*n] = (struct vec_descriptor *) *slot;
  (*n)++;
  return 1;
}



void
dump_vec_loc_statistics (void)
{
  int nentries = 0;
  char s[4096];
  size_t allocated = 0;
  size_t times = 0;
  int i;

  if (! 0)
    return;

  loc_array = ((struct vec_descriptor * *) xcalloc ((vec_desc_hash->n_elements), sizeof (struct vec_descriptor *)));
  fprintf (stderr, "Heap vectors:\n");
  fprintf (stderr, "\n%-48s %10s       %10s       %10s\n",
    "source location", "Leak", "Peak", "Times");
  fprintf (stderr, "-------------------------------------------------------\n");
  htab_traverse (vec_desc_hash, add_statistics, &nentries);
  qsort (loc_array, nentries, sizeof (*loc_array), cmp_statistic);
  for (i = 0; i < nentries; i++)
    {
      struct vec_descriptor *d = loc_array[i];
      allocated += d->allocated;
      times += d->times;
    }
  for (i = 0; i < nentries; i++)
    {
      struct vec_descriptor *d = loc_array[i];
      const char *s1 = d->file;
      const char *s2;
      while ((s2 = strstr (s1, "gcc/")))
 s1 = s2 + 4;
      sprintf (s, "%s:%i (%s)", s1, d->line, d->function);
      s[48] = 0;
      fprintf (stderr, "%-48s %10li:%4.1f%% %10li      %10li:%4.1f%% \n", s,
        (long)d->allocated,
        (d->allocated) * 100.0 / allocated,
        (long)d->peak,
        (long)d->times,
        (d->times) * 100.0 / times);
    }
  fprintf (stderr, "%-48s %10ld                        %10ld\n",
    "Total", (long)allocated, (long)times);
  fprintf (stderr, "\n%-48s %10s       %10s       %10s\n",
    "source location", "Leak", "Peak", "Times");
  fprintf (stderr, "-------------------------------------------------------\n");
}
