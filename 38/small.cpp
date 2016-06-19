# 1 "seqencoder.cc"
# 1 "seqencoder.cc" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 141 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "seqencoder.cc" 2
# 43 "seqencoder.cc"
# 1 "../config.h" 1
# 44 "seqencoder.cc" 2
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




# 1 "/home/regehr/z/compiler-install/llvm-r110244-install/lib/clang/2.8/include/stddef.h" 1 3 4
# 29 "/home/regehr/z/compiler-install/llvm-r110244-install/lib/clang/2.8/include/stddef.h" 3 4
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;


typedef __typeof__(sizeof(int)) size_t;
# 34 "/usr/include/stdio.h" 2 3 4

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
# 49 "/usr/include/libio.h" 3 4
# 1 "/home/regehr/z/compiler-install/llvm-r110244-install/lib/clang/2.8/include/stdarg.h" 1 3 4
# 30 "/home/regehr/z/compiler-install/llvm-r110244-install/lib/clang/2.8/include/stdarg.h" 3 4
typedef __builtin_va_list va_list;
# 48 "/home/regehr/z/compiler-install/llvm-r110244-install/lib/clang/2.8/include/stdarg.h" 3 4
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
# 45 "seqencoder.cc" 2
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
# 64 "/usr/include/bits/waitstatus.h" 3 4
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
# 46 "seqencoder.cc" 2
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
# 47 "seqencoder.cc" 2
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
# 48 "seqencoder.cc" 2
# 1 "/usr/include/c++/4.4/cassert" 1 3

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
# 3 "/usr/include/c++/4.4/cassert" 2 3
# 45 "/usr/include/c++/4.4/cassert" 3
# 45 "/usr/include/c++/4.4/cassert" 3


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
# 48 "/usr/include/c++/4.4/cassert" 2 3
# 49 "seqencoder.cc" 2
# 1 "../utils/mjpeg_types.h" 1
# 25 "../utils/mjpeg_types.h"
# 1 "/home/regehr/z/compiler-install/llvm-r110244-install/lib/clang/2.8/include/stdint.h" 1 3 4
# 33 "/home/regehr/z/compiler-install/llvm-r110244-install/lib/clang/2.8/include/stdint.h" 3 4
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
# 34 "/home/regehr/z/compiler-install/llvm-r110244-install/lib/clang/2.8/include/stdint.h" 2 3 4
# 26 "../utils/mjpeg_types.h" 2
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
  throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern __inline __attribute__ ((__gnu_inline__)) intmax_t
strtoimax (const char *__restrict nptr, char **__restrict endptr, int base) throw ()

{
  return __strtol_internal (nptr, endptr, base, 0);
}

extern unsigned long int __strtoul_internal (const char *__restrict __nptr,
          char ** __restrict __endptr,
          int __base, int __group)
  throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern __inline __attribute__ ((__gnu_inline__)) uintmax_t
strtoumax (const char *__restrict nptr, char **__restrict endptr, int base) throw ()

{
  return __strtoul_internal (nptr, endptr, base, 0);
}

extern long int __wcstol_internal (const wchar_t * __restrict __nptr,
       wchar_t **__restrict __endptr,
       int __base, int __group)
  throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

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
  throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__warn_unused_result__));

extern __inline __attribute__ ((__gnu_inline__)) uintmax_t
wcstoumax (const wchar_t *__restrict nptr, wchar_t **__restrict endptr, int base) throw ()

{
  return __wcstoul_internal (nptr, endptr, base, 0);
}
# 432 "/usr/include/inttypes.h" 3 4
}
# 27 "../utils/mjpeg_types.h" 2
# 50 "seqencoder.cc" 2
# 1 "../utils/mjpeg_logging.h" 1
# 27 "../utils/mjpeg_logging.h"
typedef int log_level_t;
# 37 "../utils/mjpeg_logging.h"
extern "C" {

void
mjpeg_log(log_level_t level, const char format[], ...) __attribute__((format (printf, 2, 3)));

typedef int(*mjpeg_log_filter_t)(log_level_t level);

typedef void(*mjpeg_log_handler_t)(log_level_t level, const char message[]);

mjpeg_log_handler_t
mjpeg_log_set_handler(mjpeg_log_handler_t new_handler);

int
mjpeg_default_handler_identifier(const char *new_id);

int
mjpeg_default_handler_verbosity(int verbosity);

void
mjpeg_debug(const char format[], ...) __attribute__((format (printf, 1, 2)));

void
mjpeg_info(const char format[], ...) __attribute__((format (printf, 1, 2)));

void
mjpeg_warn(const char format[], ...) __attribute__((format (printf, 1, 2)));

void
mjpeg_error(const char format[], ...) __attribute__((format (printf, 1, 2)));

void
mjpeg_error_exit1(const char format[], ...) __attribute__((format (printf, 1, 2)));

log_level_t
mjpeg_loglev_t(const char *str);


}
# 51 "seqencoder.cc" 2
# 1 "./mpeg2syntaxcodes.h" 1
# 46 "./mpeg2syntaxcodes.h"
enum PICTURE_CODING
{
    I_TYPE=1,
    P_TYPE=2,
    B_TYPE=3,
    NUM_PICT_TYPES
};






enum PICTURE_STRUCT
{
    TOP_FIELD=1,
    BOTTOM_FIELD=2,
    FRAME_PICTURE=3
};


enum MACROBLOCK_CODING_BITS
{
    MB_INTRA=1,
    MB_PATTERN=2,
    MB_BACKWARD=4,
    MB_FORWARD=8,
    MB_QUANT=16
};
# 52 "seqencoder.cc" 2
# 1 "./mpeg2encoder.hh" 1
# 26 "./mpeg2encoder.hh"
# 1 "./mpeg2encoptions.hh" 1
# 25 "./mpeg2encoptions.hh"
# 1 "./mpeg2encparams.h" 1
# 26 "./mpeg2encparams.h"
struct MPEG2EncParams
{
    int in_img_width;
    int in_img_height;
    int display_hsize;
    int display_vsize;
    int level;
    int format;
    int bitrate;
    int target_bitrate;
    int nonvid_bitrate;
    unsigned int stream_frames;
    double stream_Xhi;
    int quant;
    int searchrad;
    int mpeg;
    unsigned int aspect_ratio;
    unsigned int frame_rate;
    int fieldenc;





    int norm;
    int me44_red ;
    int me22_red ;
    int hf_quant;
    double hf_q_boost;
    double act_boost;
    double boost_var_ceil;
    int rate_control;
    int video_buffer_size;
    int seq_length_limit;
    int min_GOP_size;
    int max_GOP_size;
    int closed_GOPs;
    int preserve_B;
    int Bgrp_size;
    int num_cpus;
    int vid32_pulldown;
    int svcd_scan_data;
    int seq_hdr_every_gop;
    int seq_end_every_gop;
    int still_size;
    int pad_stills_to_vbv_buffer_size;
    int vbv_buffer_still_size;
    int force_interlacing;
    int input_interlacing;
    int hack_svcd_hds_bug;
    int hack_altscan_bug;
    int hack_dualprime;
    int mpeg2_dc_prec;
    int ignore_constraints;
    int unit_coeff_elim;
    int force_cbr;
    int verbose;
};
# 26 "./mpeg2encoptions.hh" 2
# 1 "../utils/mpegconsts.h" 1
# 26 "../utils/mpegconsts.h"
# 1 "../utils/yuv4mpeg.h" 1
# 97 "../utils/yuv4mpeg.h"
typedef struct _y4m_ratio {
  int n;
  int d;
} y4m_ratio_t;





extern const y4m_ratio_t y4m_fps_UNKNOWN;
extern const y4m_ratio_t y4m_fps_NTSC_FILM;
extern const y4m_ratio_t y4m_fps_FILM;
extern const y4m_ratio_t y4m_fps_PAL;
extern const y4m_ratio_t y4m_fps_NTSC;
extern const y4m_ratio_t y4m_fps_30;
extern const y4m_ratio_t y4m_fps_PAL_FIELD;
extern const y4m_ratio_t y4m_fps_NTSC_FIELD;
extern const y4m_ratio_t y4m_fps_60;




extern const y4m_ratio_t y4m_sar_UNKNOWN;
extern const y4m_ratio_t y4m_sar_SQUARE;
extern const y4m_ratio_t y4m_sar_NTSC_CCIR601;
extern const y4m_ratio_t y4m_sar_NTSC_16_9;
extern const y4m_ratio_t y4m_sar_NTSC_SVCD_4_3;
extern const y4m_ratio_t y4m_sar_NTSC_SVCD_16_9;
extern const y4m_ratio_t y4m_sar_PAL_CCIR601;
extern const y4m_ratio_t y4m_sar_PAL_16_9;
extern const y4m_ratio_t y4m_sar_PAL_SVCD_4_3;
extern const y4m_ratio_t y4m_sar_PAL_SVCD_16_9;
extern const y4m_ratio_t y4m_sar_SQR_ANA16_9;





extern const y4m_ratio_t y4m_dar_UNKNOWN;
extern const y4m_ratio_t y4m_dar_4_3;
extern const y4m_ratio_t y4m_dar_16_9;
extern const y4m_ratio_t y4m_dar_221_100;





typedef struct _y4m_xtag_list y4m_xtag_list_t;
typedef struct _y4m_stream_info y4m_stream_info_t;
typedef struct _y4m_frame_info y4m_frame_info_t;
# 157 "../utils/yuv4mpeg.h"
extern "C" {






void y4m_ratio_reduce(y4m_ratio_t *r);


int y4m_parse_ratio(y4m_ratio_t *r, const char *s);
# 184 "../utils/yuv4mpeg.h"
y4m_ratio_t y4m_guess_sar(int width, int height, y4m_ratio_t dar);
# 197 "../utils/yuv4mpeg.h"
y4m_ratio_t y4m_chroma_ss_x_ratio(int chroma_mode);
y4m_ratio_t y4m_chroma_ss_y_ratio(int chroma_mode);







int y4m_chroma_parse_keyword(const char *s);



const char *y4m_chroma_keyword(int chroma_mode);



const char *y4m_chroma_description(int chroma_mode);
# 229 "../utils/yuv4mpeg.h"
void y4m_init_xtag_list(y4m_xtag_list_t *xtags);


void y4m_fini_xtag_list(y4m_xtag_list_t *xtags);


void y4m_copy_xtag_list(y4m_xtag_list_t *dest, const y4m_xtag_list_t *src);


int y4m_xtag_count(const y4m_xtag_list_t *xtags);


const char *y4m_xtag_get(const y4m_xtag_list_t *xtags, int n);




int y4m_xtag_add(y4m_xtag_list_t *xtags, const char *tag);




int y4m_xtag_remove(y4m_xtag_list_t *xtags, int n);



int y4m_xtag_clearlist(y4m_xtag_list_t *xtags);




int y4m_xtag_addlist(y4m_xtag_list_t *dest, const y4m_xtag_list_t *src);
# 279 "../utils/yuv4mpeg.h"
void y4m_init_stream_info(y4m_stream_info_t *i);


void y4m_fini_stream_info(y4m_stream_info_t *i);


void y4m_clear_stream_info(y4m_stream_info_t *info);


void y4m_copy_stream_info(y4m_stream_info_t *dest,
     const y4m_stream_info_t *src);



int y4m_si_get_width(const y4m_stream_info_t *si);
int y4m_si_get_height(const y4m_stream_info_t *si);
int y4m_si_get_interlace(const y4m_stream_info_t *si);
y4m_ratio_t y4m_si_get_framerate(const y4m_stream_info_t *si);
y4m_ratio_t y4m_si_get_sampleaspect(const y4m_stream_info_t *si);
void y4m_si_set_width(y4m_stream_info_t *si, int width);
void y4m_si_set_height(y4m_stream_info_t *si, int height);
void y4m_si_set_interlace(y4m_stream_info_t *si, int interlace);
void y4m_si_set_framerate(y4m_stream_info_t *si, y4m_ratio_t framerate);
void y4m_si_set_sampleaspect(y4m_stream_info_t *si, y4m_ratio_t sar);

void y4m_si_set_chroma(y4m_stream_info_t *si, int chroma_mode);
int y4m_si_get_chroma(const y4m_stream_info_t *si);



int y4m_si_get_framelength(const y4m_stream_info_t *si);

int y4m_si_get_plane_count(const y4m_stream_info_t *si);
int y4m_si_get_plane_width(const y4m_stream_info_t *si, int plane);
int y4m_si_get_plane_height(const y4m_stream_info_t *si, int plane);
int y4m_si_get_plane_length(const y4m_stream_info_t *si, int plane);



y4m_xtag_list_t *y4m_si_xtags(y4m_stream_info_t *si);



void y4m_init_frame_info(y4m_frame_info_t *i);


void y4m_fini_frame_info(y4m_frame_info_t *i);


void y4m_clear_frame_info(y4m_frame_info_t *info);


void y4m_copy_frame_info(y4m_frame_info_t *dest,
    const y4m_frame_info_t *src);



int y4m_fi_get_presentation(const y4m_frame_info_t *fi);
int y4m_fi_get_temporal(const y4m_frame_info_t *fi);
int y4m_fi_get_spatial(const y4m_frame_info_t *fi);

void y4m_fi_set_presentation(y4m_frame_info_t *fi, int pres);
void y4m_fi_set_temporal(y4m_frame_info_t *fi, int sampling);
void y4m_fi_set_spatial(y4m_frame_info_t *fi, int sampling);



y4m_xtag_list_t *y4m_fi_xtags(y4m_frame_info_t *fi);
# 361 "../utils/yuv4mpeg.h"
ssize_t y4m_read(int fd, void *buf, size_t len);


ssize_t y4m_write(int fd, const void *buf, size_t len);
# 377 "../utils/yuv4mpeg.h"
typedef struct y4m_cb_reader_s
  {
  void * data;
  ssize_t (*read)(void * data, void *buf, size_t len);
  } y4m_cb_reader_t;

typedef struct y4m_cb_writer_s
  {
  void * data;
  ssize_t (*write)(void * data, const void *buf, size_t len);
  } y4m_cb_writer_t;


ssize_t y4m_read_cb(y4m_cb_reader_t * fd, void *buf, size_t len);


ssize_t y4m_write_cb(y4m_cb_writer_t * fd, const void *buf, size_t len);
# 406 "../utils/yuv4mpeg.h"
int y4m_parse_stream_tags(char *s, y4m_stream_info_t *i);



int y4m_read_stream_header(int fd, y4m_stream_info_t *i);



int y4m_read_stream_header_cb(y4m_cb_reader_t * fd, y4m_stream_info_t *i);


int y4m_write_stream_header(int fd, const y4m_stream_info_t *i);


int y4m_write_stream_header_cb(y4m_cb_writer_t * fd, const y4m_stream_info_t *i);
# 433 "../utils/yuv4mpeg.h"
int y4m_write_frame_header(int fd,
      const y4m_stream_info_t *si,
      const y4m_frame_info_t *fi);


int y4m_write_frame_header_cb(y4m_cb_writer_t * fd,
      const y4m_stream_info_t *si,
      const y4m_frame_info_t *fi);



int y4m_write_frame(int fd, const y4m_stream_info_t *si,
      const y4m_frame_info_t *fi, uint8_t * const *planes);



int y4m_write_frame_cb(y4m_cb_writer_t * fd, const y4m_stream_info_t *si,
                       const y4m_frame_info_t *fi, uint8_t * const *planes);






int y4m_write_fields(int fd, const y4m_stream_info_t *si,
       const y4m_frame_info_t *fi,
       uint8_t * const *upper_field,
       uint8_t * const *lower_field);






int y4m_write_fields_cb(y4m_cb_writer_t * fd, const y4m_stream_info_t *si,
                        const y4m_frame_info_t *fi,
                        uint8_t * const *upper_field,
                        uint8_t * const *lower_field);



int y4m_read_frame_header(int fd,
     const y4m_stream_info_t *si,
     y4m_frame_info_t *fi);



int y4m_read_frame_header_cb(y4m_cb_reader_t * fd,
                             const y4m_stream_info_t *si,
                             y4m_frame_info_t *fi);




int y4m_read_frame_data(int fd, const y4m_stream_info_t *si,
                        y4m_frame_info_t *fi, uint8_t * const *planes);




int y4m_read_frame_data_cb(y4m_cb_reader_t * fd, const y4m_stream_info_t *si,
                           y4m_frame_info_t *fi, uint8_t * const *planes);







int y4m_read_fields_data(int fd, const y4m_stream_info_t *si,
                         y4m_frame_info_t *fi,
                         uint8_t * const *upper_field,
                         uint8_t * const *lower_field);







int y4m_read_fields_data_cb(y4m_cb_reader_t * fd,
                            const y4m_stream_info_t *si,
                            y4m_frame_info_t *fi,
                            uint8_t * const *upper_field,
                            uint8_t * const *lower_field);



int y4m_read_frame(int fd, const y4m_stream_info_t *si,
     y4m_frame_info_t *fi, uint8_t * const *planes);



int y4m_read_frame_cb(y4m_cb_reader_t * fd, const y4m_stream_info_t *si,
                      y4m_frame_info_t *fi, uint8_t * const *planes);






int y4m_read_fields(int fd, const y4m_stream_info_t *si,
      y4m_frame_info_t *fi,
      uint8_t * const *upper_field,
      uint8_t * const *lower_field);






int y4m_read_fields_cb(y4m_cb_reader_t * fd, const y4m_stream_info_t *si,
                       y4m_frame_info_t *fi,
                       uint8_t * const *upper_field,
                       uint8_t * const *lower_field);
# 556 "../utils/yuv4mpeg.h"
void y4m_log_stream_info(log_level_t level, const char *prefix,
    const y4m_stream_info_t *i);


const char *y4m_strerr(int err);
# 570 "../utils/yuv4mpeg.h"
int y4m_allow_unknown_tags(int yn);
# 582 "../utils/yuv4mpeg.h"
int y4m_accept_extensions(int level);


}
# 706 "../utils/yuv4mpeg.h"
struct _y4m_xtag_list {
  int PRIVATEcount;
  char *PRIVATEtags[32];
};
# 720 "../utils/yuv4mpeg.h"
struct _y4m_stream_info {

  int PRIVATEwidth;
  int PRIVATEheight;
  int PRIVATEinterlace;
  y4m_ratio_t PRIVATEframerate;
  y4m_ratio_t PRIVATEsampleaspect;
  int PRIVATEchroma;


  y4m_xtag_list_t PRIVATEx_tags;
};
# 743 "../utils/yuv4mpeg.h"
struct _y4m_frame_info {
  int PRIVATEspatial;
  int PRIVATEtemporal;
  int PRIVATEpresentation;

  y4m_xtag_list_t PRIVATEx_tags;
};
# 27 "../utils/mpegconsts.h" 2

typedef unsigned int mpeg_framerate_code_t;
typedef unsigned int mpeg_aspect_code_t;
# 39 "../utils/mpegconsts.h"
extern "C" {







y4m_ratio_t
mpeg_framerate( mpeg_framerate_code_t code );







int
mpeg_valid_framerate_code( mpeg_framerate_code_t code );







mpeg_framerate_code_t
mpeg_framerate_code( y4m_ratio_t framerate );
# 75 "../utils/mpegconsts.h"
y4m_ratio_t
mpeg_conform_framerate( double fps );
# 89 "../utils/mpegconsts.h"
y4m_ratio_t
mpeg_aspect_ratio( int mpeg_version, mpeg_aspect_code_t code );







int
mpeg_valid_aspect_code( int mpeg_version, mpeg_aspect_code_t code );
# 113 "../utils/mpegconsts.h"
mpeg_aspect_code_t
mpeg_frame_aspect_code( int mpeg_version, y4m_ratio_t aspect_ratio );







const char *
mpeg_aspect_code_definition( int mpeg_version, mpeg_aspect_code_t code );







const char *
mpeg_framerate_code_definition( mpeg_framerate_code_t code );

const char *
mpeg_interlace_code_definition( int yuv4m_interlace_code );
# 146 "../utils/mpegconsts.h"
mpeg_aspect_code_t
mpeg_guess_mpeg_aspect_code(int mpeg_version, y4m_ratio_t sampleaspect,
       int frame_width, int frame_height);
# 158 "../utils/mpegconsts.h"
y4m_ratio_t
mpeg_guess_sample_aspect_ratio(int mpeg_version,
          mpeg_aspect_code_t code,
          int frame_width, int frame_height);





const char *mpeg_format_code_defintion( int format_code );

};
# 27 "./mpeg2encoptions.hh" 2

# 1 "/usr/include/c++/4.4/deque" 1 3
# 58 "/usr/include/c++/4.4/deque" 3
# 58 "/usr/include/c++/4.4/deque" 3


# 1 "/usr/include/c++/4.4/bits/stl_algobase.h" 1 3
# 60 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
# 1 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++config.h" 1 3
# 243 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++config.h" 3
# 1 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/os_defines.h" 1 3
# 244 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++config.h" 2 3


# 1 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/cpu_defines.h" 1 3
# 247 "/usr/include/c++/4.4/x86_64-linux-gnu/bits/c++config.h" 2 3
# 61 "/usr/include/c++/4.4/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 40 "/usr/include/c++/4.4/cstddef" 3
# 40 "/usr/include/c++/4.4/cstddef" 3








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
# 193 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
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
# 416 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
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
# 35 "/usr/include/c++/4.4/bits/move.h" 2 3
# 1 "/usr/include/c++/4.4/bits/concept_check.h" 1 3
# 32 "/usr/include/c++/4.4/bits/concept_check.h" 3
# 32 "/usr/include/c++/4.4/bits/concept_check.h" 3
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
# 62 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
# 62 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3



# 1 "/usr/include/c++/4.4/cstddef" 1 3
# 40 "/usr/include/c++/4.4/cstddef" 3
# 40 "/usr/include/c++/4.4/cstddef" 3
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
# 194 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
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
# 61 "/usr/include/c++/4.4/deque" 2 3
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
# 62 "/usr/include/c++/4.4/deque" 2 3
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
# 63 "/usr/include/c++/4.4/deque" 2 3
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
# 64 "/usr/include/c++/4.4/deque" 2 3
# 1 "/usr/include/c++/4.4/bits/stl_deque.h" 1 3
# 63 "/usr/include/c++/4.4/bits/stl_deque.h" 3
# 1 "/usr/include/c++/4.4/initializer_list" 1 3
# 64 "/usr/include/c++/4.4/bits/stl_deque.h" 2 3

namespace std __attribute__ ((__visibility__ ("default"))) {
# 77 "/usr/include/c++/4.4/bits/stl_deque.h" 3
  inline size_t
  __deque_buf_size(size_t __size)
  { return __size < 512 ? size_t(512 / __size) : size_t(1); }
# 93 "/usr/include/c++/4.4/bits/stl_deque.h" 3
  template<typename _Tp, typename _Ref, typename _Ptr>
    struct _Deque_iterator
    {
      typedef _Deque_iterator<_Tp, _Tp&, _Tp*> iterator;
      typedef _Deque_iterator<_Tp, const _Tp&, const _Tp*> const_iterator;

      static size_t _S_buffer_size()
      { return __deque_buf_size(sizeof(_Tp)); }

      typedef std::random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef _Ptr pointer;
      typedef _Ref reference;
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp** _Map_pointer;
      typedef _Deque_iterator _Self;

      _Tp* _M_cur;
      _Tp* _M_first;
      _Tp* _M_last;
      _Map_pointer _M_node;

      _Deque_iterator(_Tp* __x, _Map_pointer __y)
      : _M_cur(__x), _M_first(*__y),
        _M_last(*__y + _S_buffer_size()), _M_node(__y) { }

      _Deque_iterator()
      : _M_cur(0), _M_first(0), _M_last(0), _M_node(0) { }

      _Deque_iterator(const iterator& __x)
      : _M_cur(__x._M_cur), _M_first(__x._M_first),
        _M_last(__x._M_last), _M_node(__x._M_node) { }

      reference
      operator*() const
      { return *_M_cur; }

      pointer
      operator->() const
      { return _M_cur; }

      _Self&
      operator++()
      {
 ++_M_cur;
 if (_M_cur == _M_last)
   {
     _M_set_node(_M_node + 1);
     _M_cur = _M_first;
   }
 return *this;
      }

      _Self
      operator++(int)
      {
 _Self __tmp = *this;
 ++*this;
 return __tmp;
      }

      _Self&
      operator--()
      {
 if (_M_cur == _M_first)
   {
     _M_set_node(_M_node - 1);
     _M_cur = _M_last;
   }
 --_M_cur;
 return *this;
      }

      _Self
      operator--(int)
      {
 _Self __tmp = *this;
 --*this;
 return __tmp;
      }

      _Self&
      operator+=(difference_type __n)
      {
 const difference_type __offset = __n + (_M_cur - _M_first);
 if (__offset >= 0 && __offset < difference_type(_S_buffer_size()))
   _M_cur += __n;
 else
   {
     const difference_type __node_offset =
       __offset > 0 ? __offset / difference_type(_S_buffer_size())
                    : -difference_type((-__offset - 1)
           / _S_buffer_size()) - 1;
     _M_set_node(_M_node + __node_offset);
     _M_cur = _M_first + (__offset - __node_offset
     * difference_type(_S_buffer_size()));
   }
 return *this;
      }

      _Self
      operator+(difference_type __n) const
      {
 _Self __tmp = *this;
 return __tmp += __n;
      }

      _Self&
      operator-=(difference_type __n)
      { return *this += -__n; }

      _Self
      operator-(difference_type __n) const
      {
 _Self __tmp = *this;
 return __tmp -= __n;
      }

      reference
      operator[](difference_type __n) const
      { return *(*this + __n); }






      void
      _M_set_node(_Map_pointer __new_node)
      {
 _M_node = __new_node;
 _M_first = *__new_node;
 _M_last = _M_first + difference_type(_S_buffer_size());
      }
    };




  template<typename _Tp, typename _Ref, typename _Ptr>
    inline bool
    operator==(const _Deque_iterator<_Tp, _Ref, _Ptr>& __x,
        const _Deque_iterator<_Tp, _Ref, _Ptr>& __y)
    { return __x._M_cur == __y._M_cur; }

  template<typename _Tp, typename _RefL, typename _PtrL,
    typename _RefR, typename _PtrR>
    inline bool
    operator==(const _Deque_iterator<_Tp, _RefL, _PtrL>& __x,
        const _Deque_iterator<_Tp, _RefR, _PtrR>& __y)
    { return __x._M_cur == __y._M_cur; }

  template<typename _Tp, typename _Ref, typename _Ptr>
    inline bool
    operator!=(const _Deque_iterator<_Tp, _Ref, _Ptr>& __x,
        const _Deque_iterator<_Tp, _Ref, _Ptr>& __y)
    { return !(__x == __y); }

  template<typename _Tp, typename _RefL, typename _PtrL,
    typename _RefR, typename _PtrR>
    inline bool
    operator!=(const _Deque_iterator<_Tp, _RefL, _PtrL>& __x,
        const _Deque_iterator<_Tp, _RefR, _PtrR>& __y)
    { return !(__x == __y); }

  template<typename _Tp, typename _Ref, typename _Ptr>
    inline bool
    operator<(const _Deque_iterator<_Tp, _Ref, _Ptr>& __x,
       const _Deque_iterator<_Tp, _Ref, _Ptr>& __y)
    { return (__x._M_node == __y._M_node) ? (__x._M_cur < __y._M_cur)
                                          : (__x._M_node < __y._M_node); }

  template<typename _Tp, typename _RefL, typename _PtrL,
    typename _RefR, typename _PtrR>
    inline bool
    operator<(const _Deque_iterator<_Tp, _RefL, _PtrL>& __x,
       const _Deque_iterator<_Tp, _RefR, _PtrR>& __y)
    { return (__x._M_node == __y._M_node) ? (__x._M_cur < __y._M_cur)
                                   : (__x._M_node < __y._M_node); }

  template<typename _Tp, typename _Ref, typename _Ptr>
    inline bool
    operator>(const _Deque_iterator<_Tp, _Ref, _Ptr>& __x,
       const _Deque_iterator<_Tp, _Ref, _Ptr>& __y)
    { return __y < __x; }

  template<typename _Tp, typename _RefL, typename _PtrL,
    typename _RefR, typename _PtrR>
    inline bool
    operator>(const _Deque_iterator<_Tp, _RefL, _PtrL>& __x,
       const _Deque_iterator<_Tp, _RefR, _PtrR>& __y)
    { return __y < __x; }

  template<typename _Tp, typename _Ref, typename _Ptr>
    inline bool
    operator<=(const _Deque_iterator<_Tp, _Ref, _Ptr>& __x,
        const _Deque_iterator<_Tp, _Ref, _Ptr>& __y)
    { return !(__y < __x); }

  template<typename _Tp, typename _RefL, typename _PtrL,
    typename _RefR, typename _PtrR>
    inline bool
    operator<=(const _Deque_iterator<_Tp, _RefL, _PtrL>& __x,
        const _Deque_iterator<_Tp, _RefR, _PtrR>& __y)
    { return !(__y < __x); }

  template<typename _Tp, typename _Ref, typename _Ptr>
    inline bool
    operator>=(const _Deque_iterator<_Tp, _Ref, _Ptr>& __x,
        const _Deque_iterator<_Tp, _Ref, _Ptr>& __y)
    { return !(__x < __y); }

  template<typename _Tp, typename _RefL, typename _PtrL,
    typename _RefR, typename _PtrR>
    inline bool
    operator>=(const _Deque_iterator<_Tp, _RefL, _PtrL>& __x,
        const _Deque_iterator<_Tp, _RefR, _PtrR>& __y)
    { return !(__x < __y); }





  template<typename _Tp, typename _Ref, typename _Ptr>
    inline typename _Deque_iterator<_Tp, _Ref, _Ptr>::difference_type
    operator-(const _Deque_iterator<_Tp, _Ref, _Ptr>& __x,
       const _Deque_iterator<_Tp, _Ref, _Ptr>& __y)
    {
      return typename _Deque_iterator<_Tp, _Ref, _Ptr>::difference_type
 (_Deque_iterator<_Tp, _Ref, _Ptr>::_S_buffer_size())
 * (__x._M_node - __y._M_node - 1) + (__x._M_cur - __x._M_first)
 + (__y._M_last - __y._M_cur);
    }

  template<typename _Tp, typename _RefL, typename _PtrL,
    typename _RefR, typename _PtrR>
    inline typename _Deque_iterator<_Tp, _RefL, _PtrL>::difference_type
    operator-(const _Deque_iterator<_Tp, _RefL, _PtrL>& __x,
       const _Deque_iterator<_Tp, _RefR, _PtrR>& __y)
    {
      return typename _Deque_iterator<_Tp, _RefL, _PtrL>::difference_type
 (_Deque_iterator<_Tp, _RefL, _PtrL>::_S_buffer_size())
 * (__x._M_node - __y._M_node - 1) + (__x._M_cur - __x._M_first)
 + (__y._M_last - __y._M_cur);
    }

  template<typename _Tp, typename _Ref, typename _Ptr>
    inline _Deque_iterator<_Tp, _Ref, _Ptr>
    operator+(ptrdiff_t __n, const _Deque_iterator<_Tp, _Ref, _Ptr>& __x)
    { return __x + __n; }

  template<typename _Tp>
    void
    fill(const _Deque_iterator<_Tp, _Tp&, _Tp*>& __first,
  const _Deque_iterator<_Tp, _Tp&, _Tp*>& __last, const _Tp& __value);
# 360 "/usr/include/c++/4.4/bits/stl_deque.h" 3
  template<typename _Tp, typename _Alloc>
    class _Deque_base
    {
    public:
      typedef _Alloc allocator_type;

      allocator_type
      get_allocator() const
      { return allocator_type(_M_get_Tp_allocator()); }

      typedef _Deque_iterator<_Tp, _Tp&, _Tp*> iterator;
      typedef _Deque_iterator<_Tp, const _Tp&, const _Tp*> const_iterator;

      _Deque_base()
      : _M_impl()
      { _M_initialize_map(0); }

      _Deque_base(const allocator_type& __a, size_t __num_elements)
      : _M_impl(__a)
      { _M_initialize_map(__num_elements); }

      _Deque_base(const allocator_type& __a)
      : _M_impl(__a)
      { }
# 400 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      ~_Deque_base();

    protected:



      typedef typename _Alloc::template rebind<_Tp*>::other _Map_alloc_type;

      typedef typename _Alloc::template rebind<_Tp>::other _Tp_alloc_type;

      struct _Deque_impl
      : public _Tp_alloc_type
      {
 _Tp** _M_map;
 size_t _M_map_size;
 iterator _M_start;
 iterator _M_finish;

 _Deque_impl()
 : _Tp_alloc_type(), _M_map(0), _M_map_size(0),
   _M_start(), _M_finish()
 { }

 _Deque_impl(const _Tp_alloc_type& __a)
 : _Tp_alloc_type(__a), _M_map(0), _M_map_size(0),
   _M_start(), _M_finish()
 { }
      };

      _Tp_alloc_type&
      _M_get_Tp_allocator()
      { return *static_cast<_Tp_alloc_type*>(&this->_M_impl); }

      const _Tp_alloc_type&
      _M_get_Tp_allocator() const
      { return *static_cast<const _Tp_alloc_type*>(&this->_M_impl); }

      _Map_alloc_type
      _M_get_map_allocator() const
      { return _Map_alloc_type(_M_get_Tp_allocator()); }

      _Tp*
      _M_allocate_node()
      {
 return _M_impl._Tp_alloc_type::allocate(__deque_buf_size(sizeof(_Tp)));
      }

      void
      _M_deallocate_node(_Tp* __p)
      {
 _M_impl._Tp_alloc_type::deallocate(__p, __deque_buf_size(sizeof(_Tp)));
      }

      _Tp**
      _M_allocate_map(size_t __n)
      { return _M_get_map_allocator().allocate(__n); }

      void
      _M_deallocate_map(_Tp** __p, size_t __n)
      { _M_get_map_allocator().deallocate(__p, __n); }

    protected:
      void _M_initialize_map(size_t);
      void _M_create_nodes(_Tp** __nstart, _Tp** __nfinish);
      void _M_destroy_nodes(_Tp** __nstart, _Tp** __nfinish);
      enum { _S_initial_map_size = 8 };

      _Deque_impl _M_impl;
    };

  template<typename _Tp, typename _Alloc>
    _Deque_base<_Tp, _Alloc>::
    ~_Deque_base()
    {
      if (this->_M_impl._M_map)
 {
   _M_destroy_nodes(this->_M_impl._M_start._M_node,
      this->_M_impl._M_finish._M_node + 1);
   _M_deallocate_map(this->_M_impl._M_map, this->_M_impl._M_map_size);
 }
    }
# 490 "/usr/include/c++/4.4/bits/stl_deque.h" 3
  template<typename _Tp, typename _Alloc>
    void
    _Deque_base<_Tp, _Alloc>::
    _M_initialize_map(size_t __num_elements)
    {
      const size_t __num_nodes = (__num_elements/ __deque_buf_size(sizeof(_Tp))
      + 1);

      this->_M_impl._M_map_size = std::max((size_t) _S_initial_map_size,
        size_t(__num_nodes + 2));
      this->_M_impl._M_map = _M_allocate_map(this->_M_impl._M_map_size);






      _Tp** __nstart = (this->_M_impl._M_map
   + (this->_M_impl._M_map_size - __num_nodes) / 2);
      _Tp** __nfinish = __nstart + __num_nodes;

      try
 { _M_create_nodes(__nstart, __nfinish); }
      catch(...)
 {
   _M_deallocate_map(this->_M_impl._M_map, this->_M_impl._M_map_size);
   this->_M_impl._M_map = 0;
   this->_M_impl._M_map_size = 0;
   throw;
 }

      this->_M_impl._M_start._M_set_node(__nstart);
      this->_M_impl._M_finish._M_set_node(__nfinish - 1);
      this->_M_impl._M_start._M_cur = _M_impl._M_start._M_first;
      this->_M_impl._M_finish._M_cur = (this->_M_impl._M_finish._M_first
     + __num_elements
     % __deque_buf_size(sizeof(_Tp)));
    }

  template<typename _Tp, typename _Alloc>
    void
    _Deque_base<_Tp, _Alloc>::
    _M_create_nodes(_Tp** __nstart, _Tp** __nfinish)
    {
      _Tp** __cur;
      try
 {
   for (__cur = __nstart; __cur < __nfinish; ++__cur)
     *__cur = this->_M_allocate_node();
 }
      catch(...)
 {
   _M_destroy_nodes(__nstart, __cur);
   throw;
 }
    }

  template<typename _Tp, typename _Alloc>
    void
    _Deque_base<_Tp, _Alloc>::
    _M_destroy_nodes(_Tp** __nstart, _Tp** __nfinish)
    {
      for (_Tp** __n = __nstart; __n < __nfinish; ++__n)
 _M_deallocate_node(*__n);
    }
# 637 "/usr/include/c++/4.4/bits/stl_deque.h" 3
  template<typename _Tp, typename _Alloc = std::allocator<_Tp> >
    class deque : protected _Deque_base<_Tp, _Alloc>
    {

      typedef typename _Alloc::value_type _Alloc_value_type;



      typedef _Deque_base<_Tp, _Alloc> _Base;
      typedef typename _Base::_Tp_alloc_type _Tp_alloc_type;

    public:
      typedef _Tp value_type;
      typedef typename _Tp_alloc_type::pointer pointer;
      typedef typename _Tp_alloc_type::const_pointer const_pointer;
      typedef typename _Tp_alloc_type::reference reference;
      typedef typename _Tp_alloc_type::const_reference const_reference;
      typedef typename _Base::iterator iterator;
      typedef typename _Base::const_iterator const_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
      typedef std::reverse_iterator<iterator> reverse_iterator;
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Alloc allocator_type;

    protected:
      typedef pointer* _Map_pointer;

      static size_t _S_buffer_size()
      { return __deque_buf_size(sizeof(_Tp)); }


      using _Base::_M_initialize_map;
      using _Base::_M_create_nodes;
      using _Base::_M_destroy_nodes;
      using _Base::_M_allocate_node;
      using _Base::_M_deallocate_node;
      using _Base::_M_allocate_map;
      using _Base::_M_deallocate_map;
      using _Base::_M_get_Tp_allocator;





      using _Base::_M_impl;

    public:





      deque()
      : _Base() { }





      explicit
      deque(const allocator_type& __a)
      : _Base(__a, 0) { }
# 709 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      explicit
      deque(size_type __n, const value_type& __value = value_type(),
     const allocator_type& __a = allocator_type())
      : _Base(__a, __n)
      { _M_fill_initialize(__value); }
# 722 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      deque(const deque& __x)
      : _Base(__x._M_get_Tp_allocator(), __x.size())
      { std::__uninitialized_copy_a(__x.begin(), __x.end(),
        this->_M_impl._M_start,
        _M_get_Tp_allocator()); }
# 774 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      template<typename _InputIterator>
        deque(_InputIterator __first, _InputIterator __last,
       const allocator_type& __a = allocator_type())
 : _Base(__a)
        {

   typedef typename std::__is_integer<_InputIterator>::__type _Integral;
   _M_initialize_dispatch(__first, __last, _Integral());
 }






      ~deque()
      { _M_destroy_data(begin(), end(), _M_get_Tp_allocator()); }
# 799 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      deque&
      operator=(const deque& __x);
# 848 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      void
      assign(size_type __n, const value_type& __val)
      { _M_fill_assign(__n, __val); }
# 864 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      template<typename _InputIterator>
        void
        assign(_InputIterator __first, _InputIterator __last)
        {
   typedef typename std::__is_integer<_InputIterator>::__type _Integral;
   _M_assign_dispatch(__first, __last, _Integral());
 }
# 890 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      allocator_type
      get_allocator() const
      { return _Base::get_allocator(); }






      iterator
      begin()
      { return this->_M_impl._M_start; }





      const_iterator
      begin() const
      { return this->_M_impl._M_start; }






      iterator
      end()
      { return this->_M_impl._M_finish; }






      const_iterator
      end() const
      { return this->_M_impl._M_finish; }






      reverse_iterator
      rbegin()
      { return reverse_iterator(this->_M_impl._M_finish); }






      const_reverse_iterator
      rbegin() const
      { return const_reverse_iterator(this->_M_impl._M_finish); }






      reverse_iterator
      rend()
      { return reverse_iterator(this->_M_impl._M_start); }






      const_reverse_iterator
      rend() const
      { return const_reverse_iterator(this->_M_impl._M_start); }
# 1004 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      size_type
      size() const
      { return this->_M_impl._M_finish - this->_M_impl._M_start; }


      size_type
      max_size() const
      { return _M_get_Tp_allocator().max_size(); }
# 1024 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      void
      resize(size_type __new_size, value_type __x = value_type())
      {
 const size_type __len = size();
 if (__new_size < __len)
   _M_erase_at_end(this->_M_impl._M_start + difference_type(__new_size));
 else
   insert(this->_M_impl._M_finish, __new_size - __len, __x);
      }





      bool
      empty() const
      { return this->_M_impl._M_finish == this->_M_impl._M_start; }
# 1054 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      reference
      operator[](size_type __n)
      { return this->_M_impl._M_start[difference_type(__n)]; }
# 1069 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      const_reference
      operator[](size_type __n) const
      { return this->_M_impl._M_start[difference_type(__n)]; }

    protected:

      void
      _M_range_check(size_type __n) const
      {
 if (__n >= this->size())
   __throw_out_of_range(("deque::_M_range_check"));
      }

    public:
# 1094 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      reference
      at(size_type __n)
      {
 _M_range_check(__n);
 return (*this)[__n];
      }
# 1112 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      const_reference
      at(size_type __n) const
      {
 _M_range_check(__n);
 return (*this)[__n];
      }





      reference
      front()
      { return *begin(); }





      const_reference
      front() const
      { return *begin(); }





      reference
      back()
      {
 iterator __tmp = end();
 --__tmp;
 return *__tmp;
      }





      const_reference
      back() const
      {
 const_iterator __tmp = end();
 --__tmp;
 return *__tmp;
      }
# 1169 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      void
      push_front(const value_type& __x)
      {
 if (this->_M_impl._M_start._M_cur != this->_M_impl._M_start._M_first)
   {
     this->_M_impl.construct(this->_M_impl._M_start._M_cur - 1, __x);
     --this->_M_impl._M_start._M_cur;
   }
 else
   _M_push_front_aux(__x);
      }
# 1200 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      void
      push_back(const value_type& __x)
      {
 if (this->_M_impl._M_finish._M_cur
     != this->_M_impl._M_finish._M_last - 1)
   {
     this->_M_impl.construct(this->_M_impl._M_finish._M_cur, __x);
     ++this->_M_impl._M_finish._M_cur;
   }
 else
   _M_push_back_aux(__x);
      }
# 1231 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      void
      pop_front()
      {
 if (this->_M_impl._M_start._M_cur
     != this->_M_impl._M_start._M_last - 1)
   {
     this->_M_impl.destroy(this->_M_impl._M_start._M_cur);
     ++this->_M_impl._M_start._M_cur;
   }
 else
   _M_pop_front_aux();
      }
# 1252 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      void
      pop_back()
      {
 if (this->_M_impl._M_finish._M_cur
     != this->_M_impl._M_finish._M_first)
   {
     --this->_M_impl._M_finish._M_cur;
     this->_M_impl.destroy(this->_M_impl._M_finish._M_cur);
   }
 else
   _M_pop_back_aux();
      }
# 1289 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      iterator
      insert(iterator __position, const value_type& __x);
# 1329 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      void
      insert(iterator __position, size_type __n, const value_type& __x)
      { _M_fill_insert(__position, __n, __x); }
# 1343 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      template<typename _InputIterator>
        void
        insert(iterator __position, _InputIterator __first,
        _InputIterator __last)
        {

   typedef typename std::__is_integer<_InputIterator>::__type _Integral;
   _M_insert_dispatch(__position, __first, __last, _Integral());
 }
# 1366 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      iterator
      erase(iterator __position);
# 1385 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      iterator
      erase(iterator __first, iterator __last);
# 1397 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      void



      swap(deque& __x)

      {
 std::swap(this->_M_impl._M_start, __x._M_impl._M_start);
 std::swap(this->_M_impl._M_finish, __x._M_impl._M_finish);
 std::swap(this->_M_impl._M_map, __x._M_impl._M_map);
 std::swap(this->_M_impl._M_map_size, __x._M_impl._M_map_size);



 std::__alloc_swap<_Tp_alloc_type>::_S_do_it(_M_get_Tp_allocator(),
          __x._M_get_Tp_allocator());
      }







      void
      clear()
      { _M_erase_at_end(begin()); }

    protected:






      template<typename _Integer>
        void
        _M_initialize_dispatch(_Integer __n, _Integer __x, __true_type)
        {
   _M_initialize_map(static_cast<size_type>(__n));
   _M_fill_initialize(__x);
 }


      template<typename _InputIterator>
        void
        _M_initialize_dispatch(_InputIterator __first, _InputIterator __last,
          __false_type)
        {
   typedef typename std::iterator_traits<_InputIterator>::
     iterator_category _IterCategory;
   _M_range_initialize(__first, __last, _IterCategory());
 }
# 1463 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      template<typename _InputIterator>
        void
        _M_range_initialize(_InputIterator __first, _InputIterator __last,
       std::input_iterator_tag);


      template<typename _ForwardIterator>
        void
        _M_range_initialize(_ForwardIterator __first, _ForwardIterator __last,
       std::forward_iterator_tag);
# 1485 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      void
      _M_fill_initialize(const value_type& __value);
# 1495 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      template<typename _Integer>
        void
        _M_assign_dispatch(_Integer __n, _Integer __val, __true_type)
        { _M_fill_assign(__n, __val); }


      template<typename _InputIterator>
        void
        _M_assign_dispatch(_InputIterator __first, _InputIterator __last,
      __false_type)
        {
   typedef typename std::iterator_traits<_InputIterator>::
     iterator_category _IterCategory;
   _M_assign_aux(__first, __last, _IterCategory());
 }


      template<typename _InputIterator>
        void
        _M_assign_aux(_InputIterator __first, _InputIterator __last,
        std::input_iterator_tag);


      template<typename _ForwardIterator>
        void
        _M_assign_aux(_ForwardIterator __first, _ForwardIterator __last,
        std::forward_iterator_tag)
        {
   const size_type __len = std::distance(__first, __last);
   if (__len > size())
     {
       _ForwardIterator __mid = __first;
       std::advance(__mid, size());
       std::copy(__first, __mid, begin());
       insert(end(), __mid, __last);
     }
   else
     _M_erase_at_end(std::copy(__first, __last, begin()));
 }



      void
      _M_fill_assign(size_type __n, const value_type& __val)
      {
 if (__n > size())
   {
     std::fill(begin(), end(), __val);
     insert(end(), __n - size(), __val);
   }
 else
   {
     _M_erase_at_end(begin() + difference_type(__n));
     std::fill(begin(), end(), __val);
   }
      }




      void _M_push_back_aux(const value_type&);

      void _M_push_front_aux(const value_type&);
# 1566 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      void _M_pop_back_aux();

      void _M_pop_front_aux();
# 1578 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      template<typename _Integer>
        void
        _M_insert_dispatch(iterator __pos,
      _Integer __n, _Integer __x, __true_type)
        { _M_fill_insert(__pos, __n, __x); }


      template<typename _InputIterator>
        void
        _M_insert_dispatch(iterator __pos,
      _InputIterator __first, _InputIterator __last,
      __false_type)
        {
   typedef typename std::iterator_traits<_InputIterator>::
     iterator_category _IterCategory;
          _M_range_insert_aux(__pos, __first, __last, _IterCategory());
 }


      template<typename _InputIterator>
        void
        _M_range_insert_aux(iterator __pos, _InputIterator __first,
       _InputIterator __last, std::input_iterator_tag);


      template<typename _ForwardIterator>
        void
        _M_range_insert_aux(iterator __pos, _ForwardIterator __first,
       _ForwardIterator __last, std::forward_iterator_tag);




      void
      _M_fill_insert(iterator __pos, size_type __n, const value_type& __x);



      iterator
      _M_insert_aux(iterator __pos, const value_type& __x);







      void
      _M_insert_aux(iterator __pos, size_type __n, const value_type& __x);


      template<typename _ForwardIterator>
        void
        _M_insert_aux(iterator __pos,
        _ForwardIterator __first, _ForwardIterator __last,
        size_type __n);




      void
      _M_destroy_data_aux(iterator __first, iterator __last);



      template<typename _Alloc1>
        void
        _M_destroy_data(iterator __first, iterator __last, const _Alloc1&)
        { _M_destroy_data_aux(__first, __last); }

      void
      _M_destroy_data(iterator __first, iterator __last,
        const std::allocator<_Tp>&)
      {
 if (!__has_trivial_destructor(value_type))
   _M_destroy_data_aux(__first, __last);
      }


      void
      _M_erase_at_begin(iterator __pos)
      {
 _M_destroy_data(begin(), __pos, _M_get_Tp_allocator());
 _M_destroy_nodes(this->_M_impl._M_start._M_node, __pos._M_node);
 this->_M_impl._M_start = __pos;
      }



      void
      _M_erase_at_end(iterator __pos)
      {
 _M_destroy_data(__pos, end(), _M_get_Tp_allocator());
 _M_destroy_nodes(__pos._M_node + 1,
    this->_M_impl._M_finish._M_node + 1);
 this->_M_impl._M_finish = __pos;
      }



      iterator
      _M_reserve_elements_at_front(size_type __n)
      {
 const size_type __vacancies = this->_M_impl._M_start._M_cur
                               - this->_M_impl._M_start._M_first;
 if (__n > __vacancies)
   _M_new_elements_at_front(__n - __vacancies);
 return this->_M_impl._M_start - difference_type(__n);
      }

      iterator
      _M_reserve_elements_at_back(size_type __n)
      {
 const size_type __vacancies = (this->_M_impl._M_finish._M_last
           - this->_M_impl._M_finish._M_cur) - 1;
 if (__n > __vacancies)
   _M_new_elements_at_back(__n - __vacancies);
 return this->_M_impl._M_finish + difference_type(__n);
      }

      void
      _M_new_elements_at_front(size_type __new_elements);

      void
      _M_new_elements_at_back(size_type __new_elements);
# 1714 "/usr/include/c++/4.4/bits/stl_deque.h" 3
      void
      _M_reserve_map_at_back(size_type __nodes_to_add = 1)
      {
 if (__nodes_to_add + 1 > this->_M_impl._M_map_size
     - (this->_M_impl._M_finish._M_node - this->_M_impl._M_map))
   _M_reallocate_map(__nodes_to_add, false);
      }

      void
      _M_reserve_map_at_front(size_type __nodes_to_add = 1)
      {
 if (__nodes_to_add > size_type(this->_M_impl._M_start._M_node
           - this->_M_impl._M_map))
   _M_reallocate_map(__nodes_to_add, true);
      }

      void
      _M_reallocate_map(size_type __nodes_to_add, bool __add_at_front);

    };
# 1746 "/usr/include/c++/4.4/bits/stl_deque.h" 3
  template<typename _Tp, typename _Alloc>
    inline bool
    operator==(const deque<_Tp, _Alloc>& __x,
                         const deque<_Tp, _Alloc>& __y)
    { return __x.size() == __y.size()
             && std::equal(__x.begin(), __x.end(), __y.begin()); }
# 1764 "/usr/include/c++/4.4/bits/stl_deque.h" 3
  template<typename _Tp, typename _Alloc>
    inline bool
    operator<(const deque<_Tp, _Alloc>& __x,
       const deque<_Tp, _Alloc>& __y)
    { return std::lexicographical_compare(__x.begin(), __x.end(),
       __y.begin(), __y.end()); }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator!=(const deque<_Tp, _Alloc>& __x,
        const deque<_Tp, _Alloc>& __y)
    { return !(__x == __y); }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator>(const deque<_Tp, _Alloc>& __x,
       const deque<_Tp, _Alloc>& __y)
    { return __y < __x; }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator<=(const deque<_Tp, _Alloc>& __x,
        const deque<_Tp, _Alloc>& __y)
    { return !(__y < __x); }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator>=(const deque<_Tp, _Alloc>& __x,
        const deque<_Tp, _Alloc>& __y)
    { return !(__x < __y); }


  template<typename _Tp, typename _Alloc>
    inline void
    swap(deque<_Tp,_Alloc>& __x, deque<_Tp,_Alloc>& __y)
    { __x.swap(__y); }
# 1817 "/usr/include/c++/4.4/bits/stl_deque.h" 3
}
# 65 "/usr/include/c++/4.4/deque" 2 3


# 1 "/usr/include/c++/4.4/bits/deque.tcc" 1 3
# 60 "/usr/include/c++/4.4/bits/deque.tcc" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  template <typename _Tp, typename _Alloc>
    deque<_Tp, _Alloc>&
    deque<_Tp, _Alloc>::
    operator=(const deque& __x)
    {
      const size_type __len = size();
      if (&__x != this)
 {
   if (__len >= __x.size())
     _M_erase_at_end(std::copy(__x.begin(), __x.end(),
          this->_M_impl._M_start));
   else
     {
       const_iterator __mid = __x.begin() + difference_type(__len);
       std::copy(__x.begin(), __mid, this->_M_impl._M_start);
       insert(this->_M_impl._M_finish, __mid, __x.end());
     }
 }
      return *this;
    }
# 118 "/usr/include/c++/4.4/bits/deque.tcc" 3
  template <typename _Tp, typename _Alloc>
    typename deque<_Tp, _Alloc>::iterator
    deque<_Tp, _Alloc>::
    insert(iterator __position, const value_type& __x)
    {
      if (__position._M_cur == this->_M_impl._M_start._M_cur)
 {
   push_front(__x);
   return this->_M_impl._M_start;
 }
      else if (__position._M_cur == this->_M_impl._M_finish._M_cur)
 {
   push_back(__x);
   iterator __tmp = this->_M_impl._M_finish;
   --__tmp;
   return __tmp;
 }
      else
        return _M_insert_aux(__position, __x);
    }
# 163 "/usr/include/c++/4.4/bits/deque.tcc" 3
  template <typename _Tp, typename _Alloc>
    typename deque<_Tp, _Alloc>::iterator
    deque<_Tp, _Alloc>::
    erase(iterator __position)
    {
      iterator __next = __position;
      ++__next;
      const difference_type __index = __position - begin();
      if (static_cast<size_type>(__index) < (size() >> 1))
 {
   if (__position != begin())
     std::copy_backward(begin(), __position, __next);
   pop_front();
 }
      else
 {
   if (__next != end())
     std::copy(__next, end(), __position);
   pop_back();
 }
      return begin() + __index;
    }

  template <typename _Tp, typename _Alloc>
    typename deque<_Tp, _Alloc>::iterator
    deque<_Tp, _Alloc>::
    erase(iterator __first, iterator __last)
    {
      if (__first == begin() && __last == end())
 {
   clear();
   return end();
 }
      else
 {
   const difference_type __n = __last - __first;
   const difference_type __elems_before = __first - begin();
   if (static_cast<size_type>(__elems_before) <= (size() - __n) / 2)
     {
       if (__first != begin())
  std::copy_backward(begin(), __first, __last);
       _M_erase_at_begin(begin() + __n);
     }
   else
     {
       if (__last != end())
  std::copy(__last, end(), __first);
       _M_erase_at_end(end() - __n);
     }
   return begin() + __elems_before;
 }
    }

  template <typename _Tp, class _Alloc>
    template <typename _InputIterator>
      void
      deque<_Tp, _Alloc>::
      _M_assign_aux(_InputIterator __first, _InputIterator __last,
      std::input_iterator_tag)
      {
        iterator __cur = begin();
        for (; __first != __last && __cur != end(); ++__cur, ++__first)
          *__cur = *__first;
        if (__first == __last)
          _M_erase_at_end(__cur);
        else
          insert(end(), __first, __last);
      }

  template <typename _Tp, typename _Alloc>
    void
    deque<_Tp, _Alloc>::
    _M_fill_insert(iterator __pos, size_type __n, const value_type& __x)
    {
      if (__pos._M_cur == this->_M_impl._M_start._M_cur)
 {
   iterator __new_start = _M_reserve_elements_at_front(__n);
   try
     {
       std::__uninitialized_fill_a(__new_start, this->_M_impl._M_start,
       __x, _M_get_Tp_allocator());
       this->_M_impl._M_start = __new_start;
     }
   catch(...)
     {
       _M_destroy_nodes(__new_start._M_node,
          this->_M_impl._M_start._M_node);
       throw;
     }
 }
      else if (__pos._M_cur == this->_M_impl._M_finish._M_cur)
 {
   iterator __new_finish = _M_reserve_elements_at_back(__n);
   try
     {
       std::__uninitialized_fill_a(this->_M_impl._M_finish,
       __new_finish, __x,
       _M_get_Tp_allocator());
       this->_M_impl._M_finish = __new_finish;
     }
   catch(...)
     {
       _M_destroy_nodes(this->_M_impl._M_finish._M_node + 1,
          __new_finish._M_node + 1);
       throw;
     }
 }
      else
        _M_insert_aux(__pos, __n, __x);
    }

  template <typename _Tp, typename _Alloc>
    void
    deque<_Tp, _Alloc>::
    _M_fill_initialize(const value_type& __value)
    {
      _Map_pointer __cur;
      try
        {
          for (__cur = this->_M_impl._M_start._M_node;
        __cur < this->_M_impl._M_finish._M_node;
        ++__cur)
            std::__uninitialized_fill_a(*__cur, *__cur + _S_buffer_size(),
     __value, _M_get_Tp_allocator());
          std::__uninitialized_fill_a(this->_M_impl._M_finish._M_first,
          this->_M_impl._M_finish._M_cur,
          __value, _M_get_Tp_allocator());
        }
      catch(...)
        {
          std::_Destroy(this->_M_impl._M_start, iterator(*__cur, __cur),
   _M_get_Tp_allocator());
          throw;
        }
    }

  template <typename _Tp, typename _Alloc>
    template <typename _InputIterator>
      void
      deque<_Tp, _Alloc>::
      _M_range_initialize(_InputIterator __first, _InputIterator __last,
                          std::input_iterator_tag)
      {
        this->_M_initialize_map(0);
        try
          {
            for (; __first != __last; ++__first)
              push_back(*__first);
          }
        catch(...)
          {
            clear();
            throw;
          }
      }

  template <typename _Tp, typename _Alloc>
    template <typename _ForwardIterator>
      void
      deque<_Tp, _Alloc>::
      _M_range_initialize(_ForwardIterator __first, _ForwardIterator __last,
                          std::forward_iterator_tag)
      {
        const size_type __n = std::distance(__first, __last);
        this->_M_initialize_map(__n);

        _Map_pointer __cur_node;
        try
          {
            for (__cur_node = this->_M_impl._M_start._M_node;
                 __cur_node < this->_M_impl._M_finish._M_node;
                 ++__cur_node)
       {
  _ForwardIterator __mid = __first;
  std::advance(__mid, _S_buffer_size());
  std::__uninitialized_copy_a(__first, __mid, *__cur_node,
         _M_get_Tp_allocator());
  __first = __mid;
       }
            std::__uninitialized_copy_a(__first, __last,
     this->_M_impl._M_finish._M_first,
     _M_get_Tp_allocator());
          }
        catch(...)
          {
            std::_Destroy(this->_M_impl._M_start,
     iterator(*__cur_node, __cur_node),
     _M_get_Tp_allocator());
            throw;
          }
      }


  template<typename _Tp, typename _Alloc>






      void
      deque<_Tp, _Alloc>::
      _M_push_back_aux(const value_type& __t)

      {
 _M_reserve_map_at_back();
 *(this->_M_impl._M_finish._M_node + 1) = this->_M_allocate_node();
 try
   {




     this->_M_impl.construct(this->_M_impl._M_finish._M_cur, __t);

     this->_M_impl._M_finish._M_set_node(this->_M_impl._M_finish._M_node
      + 1);
     this->_M_impl._M_finish._M_cur = this->_M_impl._M_finish._M_first;
   }
 catch(...)
   {
     _M_deallocate_node(*(this->_M_impl._M_finish._M_node + 1));
     throw;
   }
      }


  template<typename _Tp, typename _Alloc>






      void
      deque<_Tp, _Alloc>::
      _M_push_front_aux(const value_type& __t)

      {
 _M_reserve_map_at_front();
 *(this->_M_impl._M_start._M_node - 1) = this->_M_allocate_node();
 try
   {
     this->_M_impl._M_start._M_set_node(this->_M_impl._M_start._M_node
            - 1);
     this->_M_impl._M_start._M_cur = this->_M_impl._M_start._M_last - 1;




     this->_M_impl.construct(this->_M_impl._M_start._M_cur, __t);

   }
 catch(...)
   {
     ++this->_M_impl._M_start;
     _M_deallocate_node(*(this->_M_impl._M_start._M_node - 1));
     throw;
   }
      }


  template <typename _Tp, typename _Alloc>
    void deque<_Tp, _Alloc>::
    _M_pop_back_aux()
    {
      _M_deallocate_node(this->_M_impl._M_finish._M_first);
      this->_M_impl._M_finish._M_set_node(this->_M_impl._M_finish._M_node - 1);
      this->_M_impl._M_finish._M_cur = this->_M_impl._M_finish._M_last - 1;
      this->_M_impl.destroy(this->_M_impl._M_finish._M_cur);
    }






  template <typename _Tp, typename _Alloc>
    void deque<_Tp, _Alloc>::
    _M_pop_front_aux()
    {
      this->_M_impl.destroy(this->_M_impl._M_start._M_cur);
      _M_deallocate_node(this->_M_impl._M_start._M_first);
      this->_M_impl._M_start._M_set_node(this->_M_impl._M_start._M_node + 1);
      this->_M_impl._M_start._M_cur = this->_M_impl._M_start._M_first;
    }

  template <typename _Tp, typename _Alloc>
    template <typename _InputIterator>
      void
      deque<_Tp, _Alloc>::
      _M_range_insert_aux(iterator __pos,
                          _InputIterator __first, _InputIterator __last,
                          std::input_iterator_tag)
      { std::copy(__first, __last, std::inserter(*this, __pos)); }

  template <typename _Tp, typename _Alloc>
    template <typename _ForwardIterator>
      void
      deque<_Tp, _Alloc>::
      _M_range_insert_aux(iterator __pos,
                          _ForwardIterator __first, _ForwardIterator __last,
                          std::forward_iterator_tag)
      {
        const size_type __n = std::distance(__first, __last);
        if (__pos._M_cur == this->_M_impl._M_start._M_cur)
   {
     iterator __new_start = _M_reserve_elements_at_front(__n);
     try
       {
  std::__uninitialized_copy_a(__first, __last, __new_start,
         _M_get_Tp_allocator());
  this->_M_impl._M_start = __new_start;
       }
     catch(...)
       {
  _M_destroy_nodes(__new_start._M_node,
     this->_M_impl._M_start._M_node);
  throw;
       }
   }
        else if (__pos._M_cur == this->_M_impl._M_finish._M_cur)
   {
     iterator __new_finish = _M_reserve_elements_at_back(__n);
     try
       {
  std::__uninitialized_copy_a(__first, __last,
         this->_M_impl._M_finish,
         _M_get_Tp_allocator());
  this->_M_impl._M_finish = __new_finish;
       }
     catch(...)
       {
  _M_destroy_nodes(this->_M_impl._M_finish._M_node + 1,
     __new_finish._M_node + 1);
  throw;
       }
   }
        else
          _M_insert_aux(__pos, __first, __last, __n);
      }

  template<typename _Tp, typename _Alloc>
# 514 "/usr/include/c++/4.4/bits/deque.tcc" 3
    typename deque<_Tp, _Alloc>::iterator
      deque<_Tp, _Alloc>::
      _M_insert_aux(iterator __pos, const value_type& __x)
      {
 value_type __x_copy = __x;

 difference_type __index = __pos - this->_M_impl._M_start;
 if (static_cast<size_type>(__index) < size() / 2)
   {
     push_front((front()));
     iterator __front1 = this->_M_impl._M_start;
     ++__front1;
     iterator __front2 = __front1;
     ++__front2;
     __pos = this->_M_impl._M_start + __index;
     iterator __pos1 = __pos;
     ++__pos1;
     std::copy(__front2, __pos1, __front1);
   }
 else
   {
     push_back((back()));
     iterator __back1 = this->_M_impl._M_finish;
     --__back1;
     iterator __back2 = __back1;
     --__back2;
     __pos = this->_M_impl._M_start + __index;
     std::copy_backward(__pos, __back2, __back1);
   }
 *__pos = (__x_copy);
 return __pos;
      }

  template <typename _Tp, typename _Alloc>
    void
    deque<_Tp, _Alloc>::
    _M_insert_aux(iterator __pos, size_type __n, const value_type& __x)
    {
      const difference_type __elems_before = __pos - this->_M_impl._M_start;
      const size_type __length = this->size();
      value_type __x_copy = __x;
      if (__elems_before < difference_type(__length / 2))
 {
   iterator __new_start = _M_reserve_elements_at_front(__n);
   iterator __old_start = this->_M_impl._M_start;
   __pos = this->_M_impl._M_start + __elems_before;
   try
     {
       if (__elems_before >= difference_type(__n))
  {
    iterator __start_n = (this->_M_impl._M_start
     + difference_type(__n));
    std::__uninitialized_move_a(this->_M_impl._M_start,
           __start_n, __new_start,
           _M_get_Tp_allocator());
    this->_M_impl._M_start = __new_start;
    std::copy(__start_n, __pos, __old_start);
    std::fill(__pos - difference_type(__n), __pos, __x_copy);
  }
       else
  {
    std::__uninitialized_move_fill(this->_M_impl._M_start,
       __pos, __new_start,
       this->_M_impl._M_start,
       __x_copy,
       _M_get_Tp_allocator());
    this->_M_impl._M_start = __new_start;
    std::fill(__old_start, __pos, __x_copy);
  }
     }
   catch(...)
     {
       _M_destroy_nodes(__new_start._M_node,
          this->_M_impl._M_start._M_node);
       throw;
     }
 }
      else
 {
   iterator __new_finish = _M_reserve_elements_at_back(__n);
   iterator __old_finish = this->_M_impl._M_finish;
   const difference_type __elems_after =
     difference_type(__length) - __elems_before;
   __pos = this->_M_impl._M_finish - __elems_after;
   try
     {
       if (__elems_after > difference_type(__n))
  {
    iterator __finish_n = (this->_M_impl._M_finish
      - difference_type(__n));
    std::__uninitialized_move_a(__finish_n,
           this->_M_impl._M_finish,
           this->_M_impl._M_finish,
           _M_get_Tp_allocator());
    this->_M_impl._M_finish = __new_finish;
    std::copy_backward(__pos, __finish_n, __old_finish);
    std::fill(__pos, __pos + difference_type(__n), __x_copy);
  }
       else
  {
    std::__uninitialized_fill_move(this->_M_impl._M_finish,
       __pos + difference_type(__n),
       __x_copy, __pos,
       this->_M_impl._M_finish,
       _M_get_Tp_allocator());
    this->_M_impl._M_finish = __new_finish;
    std::fill(__pos, __old_finish, __x_copy);
  }
     }
   catch(...)
     {
       _M_destroy_nodes(this->_M_impl._M_finish._M_node + 1,
          __new_finish._M_node + 1);
       throw;
     }
 }
    }

  template <typename _Tp, typename _Alloc>
    template <typename _ForwardIterator>
      void
      deque<_Tp, _Alloc>::
      _M_insert_aux(iterator __pos,
                    _ForwardIterator __first, _ForwardIterator __last,
                    size_type __n)
      {
        const difference_type __elemsbefore = __pos - this->_M_impl._M_start;
        const size_type __length = size();
        if (static_cast<size_type>(__elemsbefore) < __length / 2)
   {
     iterator __new_start = _M_reserve_elements_at_front(__n);
     iterator __old_start = this->_M_impl._M_start;
     __pos = this->_M_impl._M_start + __elemsbefore;
     try
       {
  if (__elemsbefore >= difference_type(__n))
    {
      iterator __start_n = (this->_M_impl._M_start
       + difference_type(__n));
      std::__uninitialized_move_a(this->_M_impl._M_start,
      __start_n, __new_start,
      _M_get_Tp_allocator());
      this->_M_impl._M_start = __new_start;
      std::copy(__start_n, __pos, __old_start);
      std::copy(__first, __last, __pos - difference_type(__n));
    }
  else
    {
      _ForwardIterator __mid = __first;
      std::advance(__mid, difference_type(__n) - __elemsbefore);
      std::__uninitialized_move_copy(this->_M_impl._M_start,
         __pos, __first, __mid,
         __new_start,
         _M_get_Tp_allocator());
      this->_M_impl._M_start = __new_start;
      std::copy(__mid, __last, __old_start);
    }
       }
     catch(...)
       {
  _M_destroy_nodes(__new_start._M_node,
     this->_M_impl._M_start._M_node);
  throw;
       }
   }
        else
        {
          iterator __new_finish = _M_reserve_elements_at_back(__n);
          iterator __old_finish = this->_M_impl._M_finish;
          const difference_type __elemsafter =
            difference_type(__length) - __elemsbefore;
          __pos = this->_M_impl._M_finish - __elemsafter;
          try
            {
              if (__elemsafter > difference_type(__n))
  {
    iterator __finish_n = (this->_M_impl._M_finish
      - difference_type(__n));
    std::__uninitialized_move_a(__finish_n,
           this->_M_impl._M_finish,
           this->_M_impl._M_finish,
           _M_get_Tp_allocator());
    this->_M_impl._M_finish = __new_finish;
    std::copy_backward(__pos, __finish_n, __old_finish);
    std::copy(__first, __last, __pos);
  }
              else
  {
    _ForwardIterator __mid = __first;
    std::advance(__mid, __elemsafter);
    std::__uninitialized_copy_move(__mid, __last, __pos,
       this->_M_impl._M_finish,
       this->_M_impl._M_finish,
       _M_get_Tp_allocator());
    this->_M_impl._M_finish = __new_finish;
    std::copy(__first, __mid, __pos);
  }
            }
          catch(...)
            {
              _M_destroy_nodes(this->_M_impl._M_finish._M_node + 1,
          __new_finish._M_node + 1);
              throw;
            }
        }
      }

   template<typename _Tp, typename _Alloc>
     void
     deque<_Tp, _Alloc>::
     _M_destroy_data_aux(iterator __first, iterator __last)
     {
       for (_Map_pointer __node = __first._M_node + 1;
     __node < __last._M_node; ++__node)
  std::_Destroy(*__node, *__node + _S_buffer_size(),
         _M_get_Tp_allocator());

       if (__first._M_node != __last._M_node)
  {
    std::_Destroy(__first._M_cur, __first._M_last,
    _M_get_Tp_allocator());
    std::_Destroy(__last._M_first, __last._M_cur,
    _M_get_Tp_allocator());
  }
       else
  std::_Destroy(__first._M_cur, __last._M_cur,
         _M_get_Tp_allocator());
     }

  template <typename _Tp, typename _Alloc>
    void
    deque<_Tp, _Alloc>::
    _M_new_elements_at_front(size_type __new_elems)
    {
      if (this->max_size() - this->size() < __new_elems)
 __throw_length_error(("deque::_M_new_elements_at_front"));

      const size_type __new_nodes = ((__new_elems + _S_buffer_size() - 1)
         / _S_buffer_size());
      _M_reserve_map_at_front(__new_nodes);
      size_type __i;
      try
        {
          for (__i = 1; __i <= __new_nodes; ++__i)
            *(this->_M_impl._M_start._M_node - __i) = this->_M_allocate_node();
        }
      catch(...)
        {
          for (size_type __j = 1; __j < __i; ++__j)
            _M_deallocate_node(*(this->_M_impl._M_start._M_node - __j));
          throw;
        }
    }

  template <typename _Tp, typename _Alloc>
    void
    deque<_Tp, _Alloc>::
    _M_new_elements_at_back(size_type __new_elems)
    {
      if (this->max_size() - this->size() < __new_elems)
 __throw_length_error(("deque::_M_new_elements_at_back"));

      const size_type __new_nodes = ((__new_elems + _S_buffer_size() - 1)
         / _S_buffer_size());
      _M_reserve_map_at_back(__new_nodes);
      size_type __i;
      try
        {
          for (__i = 1; __i <= __new_nodes; ++__i)
            *(this->_M_impl._M_finish._M_node + __i) = this->_M_allocate_node();
        }
      catch(...)
        {
          for (size_type __j = 1; __j < __i; ++__j)
            _M_deallocate_node(*(this->_M_impl._M_finish._M_node + __j));
          throw;
        }
    }

  template <typename _Tp, typename _Alloc>
    void
    deque<_Tp, _Alloc>::
    _M_reallocate_map(size_type __nodes_to_add, bool __add_at_front)
    {
      const size_type __old_num_nodes
 = this->_M_impl._M_finish._M_node - this->_M_impl._M_start._M_node + 1;
      const size_type __new_num_nodes = __old_num_nodes + __nodes_to_add;

      _Map_pointer __new_nstart;
      if (this->_M_impl._M_map_size > 2 * __new_num_nodes)
 {
   __new_nstart = this->_M_impl._M_map + (this->_M_impl._M_map_size
      - __new_num_nodes) / 2
                  + (__add_at_front ? __nodes_to_add : 0);
   if (__new_nstart < this->_M_impl._M_start._M_node)
     std::copy(this->_M_impl._M_start._M_node,
        this->_M_impl._M_finish._M_node + 1,
        __new_nstart);
   else
     std::copy_backward(this->_M_impl._M_start._M_node,
          this->_M_impl._M_finish._M_node + 1,
          __new_nstart + __old_num_nodes);
 }
      else
 {
   size_type __new_map_size = this->_M_impl._M_map_size
                              + std::max(this->_M_impl._M_map_size,
      __nodes_to_add) + 2;

   _Map_pointer __new_map = this->_M_allocate_map(__new_map_size);
   __new_nstart = __new_map + (__new_map_size - __new_num_nodes) / 2
                  + (__add_at_front ? __nodes_to_add : 0);
   std::copy(this->_M_impl._M_start._M_node,
      this->_M_impl._M_finish._M_node + 1,
      __new_nstart);
   _M_deallocate_map(this->_M_impl._M_map, this->_M_impl._M_map_size);

   this->_M_impl._M_map = __new_map;
   this->_M_impl._M_map_size = __new_map_size;
 }

      this->_M_impl._M_start._M_set_node(__new_nstart);
      this->_M_impl._M_finish._M_set_node(__new_nstart + __old_num_nodes - 1);
    }



  template<typename _Tp>
    void
    fill(const _Deque_iterator<_Tp, _Tp&, _Tp*>& __first,
  const _Deque_iterator<_Tp, _Tp&, _Tp*>& __last, const _Tp& __value)
    {
      typedef typename _Deque_iterator<_Tp, _Tp&, _Tp*>::_Self _Self;

      for (typename _Self::_Map_pointer __node = __first._M_node + 1;
           __node < __last._M_node; ++__node)
 std::fill(*__node, *__node + _Self::_S_buffer_size(), __value);

      if (__first._M_node != __last._M_node)
 {
   std::fill(__first._M_cur, __first._M_last, __value);
   std::fill(__last._M_first, __last._M_cur, __value);
 }
      else
 std::fill(__first._M_cur, __last._M_cur, __value);
    }

}
# 68 "/usr/include/c++/4.4/deque" 2 3
# 29 "./mpeg2encoptions.hh" 2

using std::deque;


struct MPEG2EncInVidParams
{
    int horizontal_size;
    int vertical_size;
    mpeg_aspect_code_t aspect_ratio_code;
    mpeg_framerate_code_t frame_rate_code;
    int interlacing_code;
};


class MPEG2EncOptions : public MPEG2EncParams
{
public:
    MPEG2EncOptions();
    bool SetFormatPresets( const MPEG2EncInVidParams &strm );
    int InferStreamDataParams( const MPEG2EncInVidParams &strm );
    int CheckBasicConstraints();

    uint16_t custom_intra_quantizer_matrix[64];
    uint16_t custom_nonintra_quantizer_matrix[64];

    deque<int> chapter_points;
};
# 27 "./mpeg2encoder.hh" 2
# 1 "./encoderparams.hh" 1
# 57 "./encoderparams.hh"
# 1 "./syntaxconsts.h" 1
# 36 "./syntaxconsts.h"
enum PROFILES
{
    HIGH_PROFILE=1,
    SPATIAL_PROFILE=2,
    SNR_PROFILE=3,
    MAIN_PROFILE=4,
    SIMPLE_PROFILE=5
};


enum LEVELS
{
    HIGH_LEVEL = 4,
    HIGH1440_LEVEL = 6,
    MAIN_LEVEL = 8,
    LOW_LEVEL = 10
};
# 58 "./encoderparams.hh" 2



using std::deque;
# 74 "./encoderparams.hh"
struct motion_data {
 unsigned int forw_hor_f_code,forw_vert_f_code;
 unsigned int sxf,syf;
 unsigned int back_hor_f_code,back_vert_f_code;
 unsigned int sxb,syb;
};


struct RateCtl;
class MPEG2EncOptions;

class EncoderParams
{
public:
 EncoderParams( const MPEG2EncOptions &options);
 void Init(const MPEG2EncOptions &options);

private:
 void InitQuantMatrices(const class MPEG2EncOptions &options);
 void InitEncodingControls(const class MPEG2EncOptions &options);
 void RangeChecks();
 void ProfileAndLevelChecks();
public:
# 105 "./encoderparams.hh"
 unsigned int horizontal_size, vertical_size;

 unsigned int aspectratio;
 unsigned int frame_rate_code;

 int dctsatlim;
 double frame_rate;



 double bit_rate;
 double target_bitrate;
 unsigned int stream_frames;
 double stream_Xhi;
 bool seq_hdr_every_gop;
 bool seq_end_every_gop;
 bool svcd_scan_data;
 unsigned int vbv_buffer_code;

 double vbv_buffer_size;

 unsigned int still_size;


 unsigned int vbv_buffer_still_size;



 bool constrparms;
 bool load_iquant;
 bool load_niquant;



    int profile, level;
 bool ignore_constraints;


    bool dualprime;


 bool prog_seq;
 int low_delay;







 unsigned int video_format;
 unsigned int color_primaries;
 unsigned int transfer_characteristics;
 unsigned int matrix_coefficients;
 unsigned int display_horizontal_size;
 unsigned int display_vertical_size;


 bool mpeg1;
 bool fieldpic;
 bool pulldown_32;
 bool topfirst;







 int frame_pred_dct_tab[3];

 int qscale_tab[3];
 int intravlc_tab[3];
 int altscan_tab[3];
 unsigned int dc_prec;





 int enc_width,
  enc_height;

 int phy_width,
  phy_height;


 int enc_chrom_width,enc_chrom_height;
 int phy_chrom_width,phy_chrom_height;

 int lum_buffer_size, chrom_buffer_size;

 int mb_width, mb_height;


 int phy_width2, phy_height2, enc_height2,
  mb_height2, phy_chrom_width2;
 int qsubsample_offset,
  fsubsample_offset;
 int mb_per_pict;


 struct motion_data *motion_data;




 uint16_t *intra_q, *inter_q;





    double decode_frame_rate;




    int video_buffer_size;

    unsigned int N_max;
    unsigned int N_min;
    int M;

    int M_min;

    bool closed_GOPs;



    int me44_red;

    int me22_red;
    int seq_length_limit;
    double nonvid_bit_rate;


    double quant_floor;



    double act_boost;


    double boost_var_ceil;



    int encoding_parallelism;


    int unit_coeff_elim;





    double coding_tolerance;




    deque<int> chapter_points;

};
# 28 "./mpeg2encoder.hh" 2


class EncoderParams;
class PictureReader;
class Pass1RateCtl;
class Pass2RateCtl;
class SeqEncoder;
class Quantizer;
class Transformer;
class MPEG2CodingBuf;
class BitStreamWriter;
class ElemStrmWriter;

class MPEG2Encoder
{
public:
    MPEG2Encoder( MPEG2EncOptions &options );
    ~MPEG2Encoder();

    static void SIMDInitOnce();
    static bool simd_init;
    MPEG2EncOptions &options;
    EncoderParams parms;
    PictureReader *reader;
    ElemStrmWriter *writer;
    Quantizer *quantizer;
    MPEG2CodingBuf *coder;
    Pass1RateCtl *pass1ratectl;
    Pass2RateCtl *pass2ratectl;
    SeqEncoder *seqencoder;
};
# 53 "seqencoder.cc" 2
# 1 "./elemstrmwriter.hh" 1
# 25 "./elemstrmwriter.hh"
class EncoderParams;

class ElemStrmWriter
{
public:
    ElemStrmWriter( );
    virtual ~ElemStrmWriter() = 0;
    virtual void WriteOutBufferUpto( const uint8_t *buffer, const uint32_t flush_upto ) = 0;
    inline uint64_t Flushed() const { return flushed; }

    virtual uint64_t BitCount() = 0;
protected:
    uint64_t flushed;
};
# 49 "./elemstrmwriter.hh"
class OutputFragBuf
{
public:
 OutputFragBuf();
    virtual ~OutputFragBuf();
# 62 "./elemstrmwriter.hh"
    virtual void FlushBuffer() = 0;







    virtual void ResetBuffer() = 0;






    virtual void PutBits( uint32_t val, int n) = 0;

    inline void AlignBits()
    {
     if (outcnt!=8)
      PutBits(0,outcnt);
    }
    inline bool Aligned() const { return outcnt == 8; }
    inline int ByteCount() const { return unflushed; }

protected:
    int unflushed;
    int outcnt;
    uint32_t pendingbits;
};
# 101 "./elemstrmwriter.hh"
class ElemStrmFragBuf : public OutputFragBuf
{
public:
 ElemStrmFragBuf( ElemStrmWriter &outstrm);
    ~ElemStrmFragBuf();
# 114 "./elemstrmwriter.hh"
    virtual void FlushBuffer();







    virtual void ResetBuffer();






    virtual void PutBits( uint32_t val, int n);

private:
    void AdjustBuffer();

protected:
    ElemStrmWriter &writer;
    uint8_t *buffer;


    int buffer_size;
};
# 150 "./elemstrmwriter.hh"
class CountOnlyFragBuf : public OutputFragBuf
{
public:
 CountOnlyFragBuf();
    ~CountOnlyFragBuf();
# 163 "./elemstrmwriter.hh"
    virtual void FlushBuffer();







    virtual void ResetBuffer();






    virtual void PutBits( uint32_t val, int n);

};
# 54 "seqencoder.cc" 2
# 1 "./picturereader.hh" 1
# 24 "./picturereader.hh"
# 1 "/usr/include/pthread.h" 1 3 4
# 23 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/sched.h" 1 3 4
# 32 "/usr/include/sched.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 33 "/usr/include/sched.h" 2 3 4








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
# 25 "./picturereader.hh" 2


# 1 "./picture.hh" 1
# 27 "./picture.hh"
# 1 "./synchrolib.h" 1
# 36 "./synchrolib.h"
typedef struct _sync_guard {
 pthread_mutex_t mutex;
 pthread_cond_t cond;
 volatile int predicate;
} sync_guard_t;

typedef struct _semaphore {
 pthread_mutex_t mutex;
 pthread_cond_t raised;
 volatile int count;
} mp_semaphore_t;
# 56 "./synchrolib.h"
void sync_guard_init( sync_guard_t *guard, int init );

void sync_guard_test( sync_guard_t *guard);

void sync_guard_update( sync_guard_t *guard, int predicate );


void mp_semaphore_init( mp_semaphore_t *sema, int init_count );

void mp_semaphore_wait( mp_semaphore_t *sema);

void mp_semaphore_signal( mp_semaphore_t *sema, int count );

void mp_semaphore_set( mp_semaphore_t *sema );
# 28 "./picture.hh" 2
# 1 "./macroblock.hh" 1
# 51 "./macroblock.hh"
# 1 "/usr/include/c++/4.4/vector" 1 3
# 58 "/usr/include/c++/4.4/vector" 3
# 58 "/usr/include/c++/4.4/vector" 3






# 1 "/usr/include/c++/4.4/bits/stl_vector.h" 1 3
# 65 "/usr/include/c++/4.4/bits/stl_vector.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {


  template<typename _Tp, typename _Alloc>
    struct _Vector_base
    {
      typedef typename _Alloc::template rebind<_Tp>::other _Tp_alloc_type;

      struct _Vector_impl
      : public _Tp_alloc_type
      {
 typename _Tp_alloc_type::pointer _M_start;
 typename _Tp_alloc_type::pointer _M_finish;
 typename _Tp_alloc_type::pointer _M_end_of_storage;

 _Vector_impl()
 : _Tp_alloc_type(), _M_start(0), _M_finish(0), _M_end_of_storage(0)
 { }

 _Vector_impl(_Tp_alloc_type const& __a)
 : _Tp_alloc_type(__a), _M_start(0), _M_finish(0), _M_end_of_storage(0)
 { }
      };

    public:
      typedef _Alloc allocator_type;

      _Tp_alloc_type&
      _M_get_Tp_allocator()
      { return *static_cast<_Tp_alloc_type*>(&this->_M_impl); }

      const _Tp_alloc_type&
      _M_get_Tp_allocator() const
      { return *static_cast<const _Tp_alloc_type*>(&this->_M_impl); }

      allocator_type
      get_allocator() const
      { return allocator_type(_M_get_Tp_allocator()); }

      _Vector_base()
      : _M_impl() { }

      _Vector_base(const allocator_type& __a)
      : _M_impl(__a) { }

      _Vector_base(size_t __n, const allocator_type& __a)
      : _M_impl(__a)
      {
 this->_M_impl._M_start = this->_M_allocate(__n);
 this->_M_impl._M_finish = this->_M_impl._M_start;
 this->_M_impl._M_end_of_storage = this->_M_impl._M_start + __n;
      }
# 131 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      ~_Vector_base()
      { _M_deallocate(this->_M_impl._M_start, this->_M_impl._M_end_of_storage
        - this->_M_impl._M_start); }

    public:
      _Vector_impl _M_impl;

      typename _Tp_alloc_type::pointer
      _M_allocate(size_t __n)
      { return __n != 0 ? _M_impl.allocate(__n) : 0; }

      void
      _M_deallocate(typename _Tp_alloc_type::pointer __p, size_t __n)
      {
 if (__p)
   _M_impl.deallocate(__p, __n);
      }
    };
# 169 "/usr/include/c++/4.4/bits/stl_vector.h" 3
  template<typename _Tp, typename _Alloc = std::allocator<_Tp> >
    class vector : protected _Vector_base<_Tp, _Alloc>
    {

      typedef typename _Alloc::value_type _Alloc_value_type;



      typedef _Vector_base<_Tp, _Alloc> _Base;
      typedef typename _Base::_Tp_alloc_type _Tp_alloc_type;

    public:
      typedef _Tp value_type;
      typedef typename _Tp_alloc_type::pointer pointer;
      typedef typename _Tp_alloc_type::const_pointer const_pointer;
      typedef typename _Tp_alloc_type::reference reference;
      typedef typename _Tp_alloc_type::const_reference const_reference;
      typedef __gnu_cxx::__normal_iterator<pointer, vector> iterator;
      typedef __gnu_cxx::__normal_iterator<const_pointer, vector>
      const_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
      typedef std::reverse_iterator<iterator> reverse_iterator;
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Alloc allocator_type;

    protected:
      using _Base::_M_allocate;
      using _Base::_M_deallocate;
      using _Base::_M_impl;
      using _Base::_M_get_Tp_allocator;

    public:





      vector()
      : _Base() { }





      explicit
      vector(const allocator_type& __a)
      : _Base(__a) { }
# 226 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      explicit
      vector(size_type __n, const value_type& __value = value_type(),
      const allocator_type& __a = allocator_type())
      : _Base(__n, __a)
      { _M_fill_initialize(__n, __value); }
# 241 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      vector(const vector& __x)
      : _Base(__x.size(), __x._M_get_Tp_allocator())
      { this->_M_impl._M_finish =
   std::__uninitialized_copy_a(__x.begin(), __x.end(),
          this->_M_impl._M_start,
          _M_get_Tp_allocator());
      }
# 296 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      template<typename _InputIterator>
        vector(_InputIterator __first, _InputIterator __last,
        const allocator_type& __a = allocator_type())
 : _Base(__a)
        {

   typedef typename std::__is_integer<_InputIterator>::__type _Integral;
   _M_initialize_dispatch(__first, __last, _Integral());
 }







      ~vector()
      { std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish,
        _M_get_Tp_allocator()); }
# 324 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      vector&
      operator=(const vector& __x);
# 373 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      void
      assign(size_type __n, const value_type& __val)
      { _M_fill_assign(__n, __val); }
# 389 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      template<typename _InputIterator>
        void
        assign(_InputIterator __first, _InputIterator __last)
        {

   typedef typename std::__is_integer<_InputIterator>::__type _Integral;
   _M_assign_dispatch(__first, __last, _Integral());
 }
# 416 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      using _Base::get_allocator;







      iterator
      begin()
      { return iterator(this->_M_impl._M_start); }






      const_iterator
      begin() const
      { return const_iterator(this->_M_impl._M_start); }






      iterator
      end()
      { return iterator(this->_M_impl._M_finish); }






      const_iterator
      end() const
      { return const_iterator(this->_M_impl._M_finish); }






      reverse_iterator
      rbegin()
      { return reverse_iterator(end()); }






      const_reverse_iterator
      rbegin() const
      { return const_reverse_iterator(end()); }






      reverse_iterator
      rend()
      { return reverse_iterator(begin()); }






      const_reverse_iterator
      rend() const
      { return const_reverse_iterator(begin()); }
# 531 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      size_type
      size() const
      { return size_type(this->_M_impl._M_finish - this->_M_impl._M_start); }


      size_type
      max_size() const
      { return _M_get_Tp_allocator().max_size(); }
# 551 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      void
      resize(size_type __new_size, value_type __x = value_type())
      {
 if (__new_size < size())
   _M_erase_at_end(this->_M_impl._M_start + __new_size);
 else
   insert(end(), __new_size - size(), __x);
      }





      size_type
      capacity() const
      { return size_type(this->_M_impl._M_end_of_storage
    - this->_M_impl._M_start); }





      bool
      empty() const
      { return begin() == end(); }
# 594 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      void
      reserve(size_type __n);
# 609 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      reference
      operator[](size_type __n)
      { return *(this->_M_impl._M_start + __n); }
# 624 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      const_reference
      operator[](size_type __n) const
      { return *(this->_M_impl._M_start + __n); }

    protected:

      void
      _M_range_check(size_type __n) const
      {
 if (__n >= this->size())
   __throw_out_of_range(("vector::_M_range_check"));
      }

    public:
# 649 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      reference
      at(size_type __n)
      {
 _M_range_check(__n);
 return (*this)[__n];
      }
# 667 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      const_reference
      at(size_type __n) const
      {
 _M_range_check(__n);
 return (*this)[__n];
      }





      reference
      front()
      { return *begin(); }





      const_reference
      front() const
      { return *begin(); }





      reference
      back()
      { return *(end() - 1); }





      const_reference
      back() const
      { return *(end() - 1); }
# 713 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      pointer
      data()
      { return pointer(this->_M_impl._M_start); }

      const_pointer
      data() const
      { return const_pointer(this->_M_impl._M_start); }
# 732 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      void
      push_back(const value_type& __x)
      {
 if (this->_M_impl._M_finish != this->_M_impl._M_end_of_storage)
   {
     this->_M_impl.construct(this->_M_impl._M_finish, __x);
     ++this->_M_impl._M_finish;
   }
 else
   _M_insert_aux(end(), __x);
      }
# 763 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      void
      pop_back()
      {
 --this->_M_impl._M_finish;
 this->_M_impl.destroy(this->_M_impl._M_finish);
      }
# 799 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      iterator
      insert(iterator __position, const value_type& __x);
# 849 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      void
      insert(iterator __position, size_type __n, const value_type& __x)
      { _M_fill_insert(__position, __n, __x); }
# 867 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      template<typename _InputIterator>
        void
        insert(iterator __position, _InputIterator __first,
        _InputIterator __last)
        {

   typedef typename std::__is_integer<_InputIterator>::__type _Integral;
   _M_insert_dispatch(__position, __first, __last, _Integral());
 }
# 892 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      iterator
      erase(iterator __position);
# 913 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      iterator
      erase(iterator __first, iterator __last);
# 925 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      void



      swap(vector& __x)

      {
 std::swap(this->_M_impl._M_start, __x._M_impl._M_start);
 std::swap(this->_M_impl._M_finish, __x._M_impl._M_finish);
 std::swap(this->_M_impl._M_end_of_storage,
    __x._M_impl._M_end_of_storage);



 std::__alloc_swap<_Tp_alloc_type>::_S_do_it(_M_get_Tp_allocator(),
          __x._M_get_Tp_allocator());
      }







      void
      clear()
      { _M_erase_at_end(this->_M_impl._M_start); }

    protected:




      template<typename _ForwardIterator>
        pointer
        _M_allocate_and_copy(size_type __n,
        _ForwardIterator __first, _ForwardIterator __last)
        {
   pointer __result = this->_M_allocate(__n);
   try
     {
       std::__uninitialized_copy_a(__first, __last, __result,
       _M_get_Tp_allocator());
       return __result;
     }
   catch(...)
     {
       _M_deallocate(__result, __n);
       throw;
     }
 }
# 984 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      template<typename _Integer>
        void
        _M_initialize_dispatch(_Integer __n, _Integer __value, __true_type)
        {
   this->_M_impl._M_start = _M_allocate(static_cast<size_type>(__n));
   this->_M_impl._M_end_of_storage =
     this->_M_impl._M_start + static_cast<size_type>(__n);
   _M_fill_initialize(static_cast<size_type>(__n), __value);
 }


      template<typename _InputIterator>
        void
        _M_initialize_dispatch(_InputIterator __first, _InputIterator __last,
          __false_type)
        {
   typedef typename std::iterator_traits<_InputIterator>::
     iterator_category _IterCategory;
   _M_range_initialize(__first, __last, _IterCategory());
 }


      template<typename _InputIterator>
        void
        _M_range_initialize(_InputIterator __first,
       _InputIterator __last, std::input_iterator_tag)
        {
   for (; __first != __last; ++__first)
     push_back(*__first);
 }


      template<typename _ForwardIterator>
        void
        _M_range_initialize(_ForwardIterator __first,
       _ForwardIterator __last, std::forward_iterator_tag)
        {
   const size_type __n = std::distance(__first, __last);
   this->_M_impl._M_start = this->_M_allocate(__n);
   this->_M_impl._M_end_of_storage = this->_M_impl._M_start + __n;
   this->_M_impl._M_finish =
     std::__uninitialized_copy_a(__first, __last,
     this->_M_impl._M_start,
     _M_get_Tp_allocator());
 }



      void
      _M_fill_initialize(size_type __n, const value_type& __value)
      {
 std::__uninitialized_fill_n_a(this->_M_impl._M_start, __n, __value,
          _M_get_Tp_allocator());
 this->_M_impl._M_finish = this->_M_impl._M_end_of_storage;
      }
# 1048 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      template<typename _Integer>
        void
        _M_assign_dispatch(_Integer __n, _Integer __val, __true_type)
        { _M_fill_assign(__n, __val); }


      template<typename _InputIterator>
        void
        _M_assign_dispatch(_InputIterator __first, _InputIterator __last,
      __false_type)
        {
   typedef typename std::iterator_traits<_InputIterator>::
     iterator_category _IterCategory;
   _M_assign_aux(__first, __last, _IterCategory());
 }


      template<typename _InputIterator>
        void
        _M_assign_aux(_InputIterator __first, _InputIterator __last,
        std::input_iterator_tag);


      template<typename _ForwardIterator>
        void
        _M_assign_aux(_ForwardIterator __first, _ForwardIterator __last,
        std::forward_iterator_tag);



      void
      _M_fill_assign(size_type __n, const value_type& __val);
# 1088 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      template<typename _Integer>
        void
        _M_insert_dispatch(iterator __pos, _Integer __n, _Integer __val,
      __true_type)
        { _M_fill_insert(__pos, __n, __val); }


      template<typename _InputIterator>
        void
        _M_insert_dispatch(iterator __pos, _InputIterator __first,
      _InputIterator __last, __false_type)
        {
   typedef typename std::iterator_traits<_InputIterator>::
     iterator_category _IterCategory;
   _M_range_insert(__pos, __first, __last, _IterCategory());
 }


      template<typename _InputIterator>
        void
        _M_range_insert(iterator __pos, _InputIterator __first,
   _InputIterator __last, std::input_iterator_tag);


      template<typename _ForwardIterator>
        void
        _M_range_insert(iterator __pos, _ForwardIterator __first,
   _ForwardIterator __last, std::forward_iterator_tag);



      void
      _M_fill_insert(iterator __pos, size_type __n, const value_type& __x);



      void
      _M_insert_aux(iterator __position, const value_type& __x);







      size_type
      _M_check_len(size_type __n, const char* __s) const
      {
 if (max_size() - size() < __n)
   __throw_length_error((__s));

 const size_type __len = size() + std::max(size(), __n);
 return (__len < size() || __len > max_size()) ? max_size() : __len;
      }





      void
      _M_erase_at_end(pointer __pos)
      {
 std::_Destroy(__pos, this->_M_impl._M_finish, _M_get_Tp_allocator());
 this->_M_impl._M_finish = __pos;
      }
    };
# 1166 "/usr/include/c++/4.4/bits/stl_vector.h" 3
  template<typename _Tp, typename _Alloc>
    inline bool
    operator==(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y)
    { return (__x.size() == __y.size()
       && std::equal(__x.begin(), __x.end(), __y.begin())); }
# 1183 "/usr/include/c++/4.4/bits/stl_vector.h" 3
  template<typename _Tp, typename _Alloc>
    inline bool
    operator<(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y)
    { return std::lexicographical_compare(__x.begin(), __x.end(),
       __y.begin(), __y.end()); }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator!=(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y)
    { return !(__x == __y); }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator>(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y)
    { return __y < __x; }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator<=(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y)
    { return !(__y < __x); }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator>=(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y)
    { return !(__x < __y); }


  template<typename _Tp, typename _Alloc>
    inline void
    swap(vector<_Tp, _Alloc>& __x, vector<_Tp, _Alloc>& __y)
    { __x.swap(__y); }
# 1231 "/usr/include/c++/4.4/bits/stl_vector.h" 3
}
# 65 "/usr/include/c++/4.4/vector" 2 3
# 1 "/usr/include/c++/4.4/bits/stl_bvector.h" 1 3
# 62 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  typedef unsigned long _Bit_type;
  enum { _S_word_bit = int(8 * sizeof(_Bit_type)) };

  struct _Bit_reference
  {
    _Bit_type * _M_p;
    _Bit_type _M_mask;

    _Bit_reference(_Bit_type * __x, _Bit_type __y)
    : _M_p(__x), _M_mask(__y) { }

    _Bit_reference() : _M_p(0), _M_mask(0) { }

    operator bool() const
    { return !!(*_M_p & _M_mask); }

    _Bit_reference&
    operator=(bool __x)
    {
      if (__x)
 *_M_p |= _M_mask;
      else
 *_M_p &= ~_M_mask;
      return *this;
    }

    _Bit_reference&
    operator=(const _Bit_reference& __x)
    { return *this = bool(__x); }

    bool
    operator==(const _Bit_reference& __x) const
    { return bool(*this) == bool(__x); }

    bool
    operator<(const _Bit_reference& __x) const
    { return !bool(*this) && bool(__x); }

    void
    flip()
    { *_M_p ^= _M_mask; }
  };

  struct _Bit_iterator_base
  : public std::iterator<std::random_access_iterator_tag, bool>
  {
    _Bit_type * _M_p;
    unsigned int _M_offset;

    _Bit_iterator_base(_Bit_type * __x, unsigned int __y)
    : _M_p(__x), _M_offset(__y) { }

    void
    _M_bump_up()
    {
      if (_M_offset++ == int(_S_word_bit) - 1)
 {
   _M_offset = 0;
   ++_M_p;
 }
    }

    void
    _M_bump_down()
    {
      if (_M_offset-- == 0)
 {
   _M_offset = int(_S_word_bit) - 1;
   --_M_p;
 }
    }

    void
    _M_incr(ptrdiff_t __i)
    {
      difference_type __n = __i + _M_offset;
      _M_p += __n / int(_S_word_bit);
      __n = __n % int(_S_word_bit);
      if (__n < 0)
 {
   __n += int(_S_word_bit);
   --_M_p;
 }
      _M_offset = static_cast<unsigned int>(__n);
    }

    bool
    operator==(const _Bit_iterator_base& __i) const
    { return _M_p == __i._M_p && _M_offset == __i._M_offset; }

    bool
    operator<(const _Bit_iterator_base& __i) const
    {
      return _M_p < __i._M_p
      || (_M_p == __i._M_p && _M_offset < __i._M_offset);
    }

    bool
    operator!=(const _Bit_iterator_base& __i) const
    { return !(*this == __i); }

    bool
    operator>(const _Bit_iterator_base& __i) const
    { return __i < *this; }

    bool
    operator<=(const _Bit_iterator_base& __i) const
    { return !(__i < *this); }

    bool
    operator>=(const _Bit_iterator_base& __i) const
    { return !(*this < __i); }
  };

  inline ptrdiff_t
  operator-(const _Bit_iterator_base& __x, const _Bit_iterator_base& __y)
  {
    return (int(_S_word_bit) * (__x._M_p - __y._M_p)
     + __x._M_offset - __y._M_offset);
  }

  struct _Bit_iterator : public _Bit_iterator_base
  {
    typedef _Bit_reference reference;
    typedef _Bit_reference* pointer;
    typedef _Bit_iterator iterator;

    _Bit_iterator() : _Bit_iterator_base(0, 0) { }

    _Bit_iterator(_Bit_type * __x, unsigned int __y)
    : _Bit_iterator_base(__x, __y) { }

    reference
    operator*() const
    { return reference(_M_p, 1UL << _M_offset); }

    iterator&
    operator++()
    {
      _M_bump_up();
      return *this;
    }

    iterator
    operator++(int)
    {
      iterator __tmp = *this;
      _M_bump_up();
      return __tmp;
    }

    iterator&
    operator--()
    {
      _M_bump_down();
      return *this;
    }

    iterator
    operator--(int)
    {
      iterator __tmp = *this;
      _M_bump_down();
      return __tmp;
    }

    iterator&
    operator+=(difference_type __i)
    {
      _M_incr(__i);
      return *this;
    }

    iterator&
    operator-=(difference_type __i)
    {
      *this += -__i;
      return *this;
    }

    iterator
    operator+(difference_type __i) const
    {
      iterator __tmp = *this;
      return __tmp += __i;
    }

    iterator
    operator-(difference_type __i) const
    {
      iterator __tmp = *this;
      return __tmp -= __i;
    }

    reference
    operator[](difference_type __i) const
    { return *(*this + __i); }
  };

  inline _Bit_iterator
  operator+(ptrdiff_t __n, const _Bit_iterator& __x)
  { return __x + __n; }

  struct _Bit_const_iterator : public _Bit_iterator_base
  {
    typedef bool reference;
    typedef bool const_reference;
    typedef const bool* pointer;
    typedef _Bit_const_iterator const_iterator;

    _Bit_const_iterator() : _Bit_iterator_base(0, 0) { }

    _Bit_const_iterator(_Bit_type * __x, unsigned int __y)
    : _Bit_iterator_base(__x, __y) { }

    _Bit_const_iterator(const _Bit_iterator& __x)
    : _Bit_iterator_base(__x._M_p, __x._M_offset) { }

    const_reference
    operator*() const
    { return _Bit_reference(_M_p, 1UL << _M_offset); }

    const_iterator&
    operator++()
    {
      _M_bump_up();
      return *this;
    }

    const_iterator
    operator++(int)
    {
      const_iterator __tmp = *this;
      _M_bump_up();
      return __tmp;
    }

    const_iterator&
    operator--()
    {
      _M_bump_down();
      return *this;
    }

    const_iterator
    operator--(int)
    {
      const_iterator __tmp = *this;
      _M_bump_down();
      return __tmp;
    }

    const_iterator&
    operator+=(difference_type __i)
    {
      _M_incr(__i);
      return *this;
    }

    const_iterator&
    operator-=(difference_type __i)
    {
      *this += -__i;
      return *this;
    }

    const_iterator
    operator+(difference_type __i) const
    {
      const_iterator __tmp = *this;
      return __tmp += __i;
    }

    const_iterator
    operator-(difference_type __i) const
    {
      const_iterator __tmp = *this;
      return __tmp -= __i;
    }

    const_reference
    operator[](difference_type __i) const
    { return *(*this + __i); }
  };

  inline _Bit_const_iterator
  operator+(ptrdiff_t __n, const _Bit_const_iterator& __x)
  { return __x + __n; }

  inline void
  __fill_bvector(_Bit_iterator __first, _Bit_iterator __last, bool __x)
  {
    for (; __first != __last; ++__first)
      *__first = __x;
  }

  inline void
  fill(_Bit_iterator __first, _Bit_iterator __last, const bool& __x)
  {
    if (__first._M_p != __last._M_p)
      {
 std::fill(__first._M_p + 1, __last._M_p, __x ? ~0 : 0);
 __fill_bvector(__first, _Bit_iterator(__first._M_p + 1, 0), __x);
 __fill_bvector(_Bit_iterator(__last._M_p, 0), __last, __x);
      }
    else
      __fill_bvector(__first, __last, __x);
  }

  template<typename _Alloc>
    struct _Bvector_base
    {
      typedef typename _Alloc::template rebind<_Bit_type>::other
        _Bit_alloc_type;

      struct _Bvector_impl
      : public _Bit_alloc_type
      {
 _Bit_iterator _M_start;
 _Bit_iterator _M_finish;
 _Bit_type* _M_end_of_storage;

 _Bvector_impl()
 : _Bit_alloc_type(), _M_start(), _M_finish(), _M_end_of_storage(0)
 { }

 _Bvector_impl(const _Bit_alloc_type& __a)
 : _Bit_alloc_type(__a), _M_start(), _M_finish(), _M_end_of_storage(0)
 { }
      };

    public:
      typedef _Alloc allocator_type;

      _Bit_alloc_type&
      _M_get_Bit_allocator()
      { return *static_cast<_Bit_alloc_type*>(&this->_M_impl); }

      const _Bit_alloc_type&
      _M_get_Bit_allocator() const
      { return *static_cast<const _Bit_alloc_type*>(&this->_M_impl); }

      allocator_type
      get_allocator() const
      { return allocator_type(_M_get_Bit_allocator()); }

      _Bvector_base()
      : _M_impl() { }

      _Bvector_base(const allocator_type& __a)
      : _M_impl(__a) { }
# 429 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
      ~_Bvector_base()
      { this->_M_deallocate(); }

    protected:
      _Bvector_impl _M_impl;

      _Bit_type*
      _M_allocate(size_t __n)
      { return _M_impl.allocate((__n + int(_S_word_bit) - 1)
    / int(_S_word_bit)); }

      void
      _M_deallocate()
      {
 if (_M_impl._M_start._M_p)
   _M_impl.deallocate(_M_impl._M_start._M_p,
        _M_impl._M_end_of_storage - _M_impl._M_start._M_p);
      }
    };

}




namespace std __attribute__ ((__visibility__ ("default"))) {
# 473 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
template<typename _Alloc>
  class vector<bool, _Alloc> : protected _Bvector_base<_Alloc>
  {
    typedef _Bvector_base<_Alloc> _Base;

  public:
    typedef bool value_type;
    typedef size_t size_type;
    typedef ptrdiff_t difference_type;
    typedef _Bit_reference reference;
    typedef bool const_reference;
    typedef _Bit_reference* pointer;
    typedef const bool* const_pointer;
    typedef _Bit_iterator iterator;
    typedef _Bit_const_iterator const_iterator;
    typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
    typedef std::reverse_iterator<iterator> reverse_iterator;
    typedef _Alloc allocator_type;

    allocator_type get_allocator() const
    { return _Base::get_allocator(); }

  protected:
    using _Base::_M_allocate;
    using _Base::_M_deallocate;
    using _Base::_M_get_Bit_allocator;

  public:
    vector()
    : _Base() { }

    explicit
    vector(const allocator_type& __a)
    : _Base(__a) { }

    explicit
    vector(size_type __n, const bool& __value = bool(),
    const allocator_type& __a = allocator_type())
    : _Base(__a)
    {
      _M_initialize(__n);
      std::fill(this->_M_impl._M_start._M_p, this->_M_impl._M_end_of_storage,
  __value ? ~0 : 0);
    }

    vector(const vector& __x)
    : _Base(__x._M_get_Bit_allocator())
    {
      _M_initialize(__x.size());
      _M_copy_aligned(__x.begin(), __x.end(), this->_M_impl._M_start);
    }
# 538 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
    template<typename _InputIterator>
      vector(_InputIterator __first, _InputIterator __last,
      const allocator_type& __a = allocator_type())
      : _Base(__a)
      {
 typedef typename std::__is_integer<_InputIterator>::__type _Integral;
 _M_initialize_dispatch(__first, __last, _Integral());
      }

    ~vector() { }

    vector&
    operator=(const vector& __x)
    {
      if (&__x == this)
 return *this;
      if (__x.size() > capacity())
 {
   this->_M_deallocate();
   _M_initialize(__x.size());
 }
      this->_M_impl._M_finish = _M_copy_aligned(__x.begin(), __x.end(),
      begin());
      return *this;
    }
# 586 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
    void
    assign(size_type __n, const bool& __x)
    { _M_fill_assign(__n, __x); }

    template<typename _InputIterator>
      void
      assign(_InputIterator __first, _InputIterator __last)
      {
 typedef typename std::__is_integer<_InputIterator>::__type _Integral;
 _M_assign_dispatch(__first, __last, _Integral());
      }







    iterator
    begin()
    { return this->_M_impl._M_start; }

    const_iterator
    begin() const
    { return this->_M_impl._M_start; }

    iterator
    end()
    { return this->_M_impl._M_finish; }

    const_iterator
    end() const
    { return this->_M_impl._M_finish; }

    reverse_iterator
    rbegin()
    { return reverse_iterator(end()); }

    const_reverse_iterator
    rbegin() const
    { return const_reverse_iterator(end()); }

    reverse_iterator
    rend()
    { return reverse_iterator(begin()); }

    const_reverse_iterator
    rend() const
    { return const_reverse_iterator(begin()); }
# 654 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
    size_type
    size() const
    { return size_type(end() - begin()); }

    size_type
    max_size() const
    {
      const size_type __isize =
 __gnu_cxx::__numeric_traits<difference_type>::__max
 - int(_S_word_bit) + 1;
      const size_type __asize = _M_get_Bit_allocator().max_size();
      return (__asize <= __isize / int(_S_word_bit)
       ? __asize * int(_S_word_bit) : __isize);
    }

    size_type
    capacity() const
    { return size_type(const_iterator(this->_M_impl._M_end_of_storage, 0)
         - begin()); }

    bool
    empty() const
    { return begin() == end(); }

    reference
    operator[](size_type __n)
    {
      return *iterator(this->_M_impl._M_start._M_p
         + __n / int(_S_word_bit), __n % int(_S_word_bit));
    }

    const_reference
    operator[](size_type __n) const
    {
      return *const_iterator(this->_M_impl._M_start._M_p
        + __n / int(_S_word_bit), __n % int(_S_word_bit));
    }

  protected:
    void
    _M_range_check(size_type __n) const
    {
      if (__n >= this->size())
        __throw_out_of_range(("vector<bool>::_M_range_check"));
    }

  public:
    reference
    at(size_type __n)
    { _M_range_check(__n); return (*this)[__n]; }

    const_reference
    at(size_type __n) const
    { _M_range_check(__n); return (*this)[__n]; }

    void
    reserve(size_type __n);

    reference
    front()
    { return *begin(); }

    const_reference
    front() const
    { return *begin(); }

    reference
    back()
    { return *(end() - 1); }

    const_reference
    back() const
    { return *(end() - 1); }






    void
    data() { }

    void
    push_back(bool __x)
    {
      if (this->_M_impl._M_finish._M_p != this->_M_impl._M_end_of_storage)
        *this->_M_impl._M_finish++ = __x;
      else
        _M_insert_aux(end(), __x);
    }

    void



    swap(vector& __x)

    {
      std::swap(this->_M_impl._M_start, __x._M_impl._M_start);
      std::swap(this->_M_impl._M_finish, __x._M_impl._M_finish);
      std::swap(this->_M_impl._M_end_of_storage,
  __x._M_impl._M_end_of_storage);



      std::__alloc_swap<typename _Base::_Bit_alloc_type>::
 _S_do_it(_M_get_Bit_allocator(), __x._M_get_Bit_allocator());
    }


    static void
    swap(reference __x, reference __y)
    {
      bool __tmp = __x;
      __x = __y;
      __y = __tmp;
    }

    iterator
    insert(iterator __position, const bool& __x = bool())
    {
      const difference_type __n = __position - begin();
      if (this->_M_impl._M_finish._M_p != this->_M_impl._M_end_of_storage
   && __position == end())
        *this->_M_impl._M_finish++ = __x;
      else
        _M_insert_aux(__position, __x);
      return begin() + __n;
    }

    template<typename _InputIterator>
      void
      insert(iterator __position,
      _InputIterator __first, _InputIterator __last)
      {
 typedef typename std::__is_integer<_InputIterator>::__type _Integral;
 _M_insert_dispatch(__position, __first, __last, _Integral());
      }

    void
    insert(iterator __position, size_type __n, const bool& __x)
    { _M_fill_insert(__position, __n, __x); }






    void
    pop_back()
    { --this->_M_impl._M_finish; }

    iterator
    erase(iterator __position)
    {
      if (__position + 1 != end())
        std::copy(__position + 1, end(), __position);
      --this->_M_impl._M_finish;
      return __position;
    }

    iterator
    erase(iterator __first, iterator __last)
    {
      _M_erase_at_end(std::copy(__last, end(), __first));
      return __first;
    }

    void
    resize(size_type __new_size, bool __x = bool())
    {
      if (__new_size < size())
        _M_erase_at_end(begin() + difference_type(__new_size));
      else
        insert(end(), __new_size - size(), __x);
    }

    void
    flip()
    {
      for (_Bit_type * __p = this->_M_impl._M_start._M_p;
    __p != this->_M_impl._M_end_of_storage; ++__p)
        *__p = ~*__p;
    }

    void
    clear()
    { _M_erase_at_end(begin()); }


  protected:

    iterator
    _M_copy_aligned(const_iterator __first, const_iterator __last,
      iterator __result)
    {
      _Bit_type* __q = std::copy(__first._M_p, __last._M_p, __result._M_p);
      return std::copy(const_iterator(__last._M_p, 0), __last,
         iterator(__q, 0));
    }

    void
    _M_initialize(size_type __n)
    {
      _Bit_type* __q = this->_M_allocate(__n);
      this->_M_impl._M_end_of_storage = (__q
      + ((__n + int(_S_word_bit) - 1)
         / int(_S_word_bit)));
      this->_M_impl._M_start = iterator(__q, 0);
      this->_M_impl._M_finish = this->_M_impl._M_start + difference_type(__n);
    }





    template<typename _Integer>
      void
      _M_initialize_dispatch(_Integer __n, _Integer __x, __true_type)
      {
 _M_initialize(static_cast<size_type>(__n));
 std::fill(this->_M_impl._M_start._M_p,
    this->_M_impl._M_end_of_storage, __x ? ~0 : 0);
      }

    template<typename _InputIterator>
      void
      _M_initialize_dispatch(_InputIterator __first, _InputIterator __last,
        __false_type)
      { _M_initialize_range(__first, __last,
       std::__iterator_category(__first)); }

    template<typename _InputIterator>
      void
      _M_initialize_range(_InputIterator __first, _InputIterator __last,
     std::input_iterator_tag)
      {
 for (; __first != __last; ++__first)
   push_back(*__first);
      }

    template<typename _ForwardIterator>
      void
      _M_initialize_range(_ForwardIterator __first, _ForwardIterator __last,
     std::forward_iterator_tag)
      {
 const size_type __n = std::distance(__first, __last);
 _M_initialize(__n);
 std::copy(__first, __last, this->_M_impl._M_start);
      }



    template<typename _Integer>
      void
      _M_assign_dispatch(_Integer __n, _Integer __val, __true_type)
      { _M_fill_assign(__n, __val); }

    template<class _InputIterator>
      void
      _M_assign_dispatch(_InputIterator __first, _InputIterator __last,
    __false_type)
      { _M_assign_aux(__first, __last, std::__iterator_category(__first)); }

    void
    _M_fill_assign(size_t __n, bool __x)
    {
      if (__n > size())
 {
   std::fill(this->_M_impl._M_start._M_p,
      this->_M_impl._M_end_of_storage, __x ? ~0 : 0);
   insert(end(), __n - size(), __x);
 }
      else
 {
   _M_erase_at_end(begin() + __n);
   std::fill(this->_M_impl._M_start._M_p,
      this->_M_impl._M_end_of_storage, __x ? ~0 : 0);
 }
    }

    template<typename _InputIterator>
      void
      _M_assign_aux(_InputIterator __first, _InputIterator __last,
      std::input_iterator_tag)
      {
 iterator __cur = begin();
 for (; __first != __last && __cur != end(); ++__cur, ++__first)
   *__cur = *__first;
 if (__first == __last)
   _M_erase_at_end(__cur);
 else
   insert(end(), __first, __last);
      }

    template<typename _ForwardIterator>
      void
      _M_assign_aux(_ForwardIterator __first, _ForwardIterator __last,
      std::forward_iterator_tag)
      {
 const size_type __len = std::distance(__first, __last);
 if (__len < size())
   _M_erase_at_end(std::copy(__first, __last, begin()));
 else
   {
     _ForwardIterator __mid = __first;
     std::advance(__mid, size());
     std::copy(__first, __mid, begin());
     insert(end(), __mid, __last);
   }
      }





    template<typename _Integer>
      void
      _M_insert_dispatch(iterator __pos, _Integer __n, _Integer __x,
    __true_type)
      { _M_fill_insert(__pos, __n, __x); }

    template<typename _InputIterator>
      void
      _M_insert_dispatch(iterator __pos,
    _InputIterator __first, _InputIterator __last,
    __false_type)
      { _M_insert_range(__pos, __first, __last,
   std::__iterator_category(__first)); }

    void
    _M_fill_insert(iterator __position, size_type __n, bool __x);

    template<typename _InputIterator>
      void
      _M_insert_range(iterator __pos, _InputIterator __first,
        _InputIterator __last, std::input_iterator_tag)
      {
 for (; __first != __last; ++__first)
   {
     __pos = insert(__pos, *__first);
     ++__pos;
   }
      }

    template<typename _ForwardIterator>
      void
      _M_insert_range(iterator __position, _ForwardIterator __first,
        _ForwardIterator __last, std::forward_iterator_tag);

    void
    _M_insert_aux(iterator __position, bool __x);

    size_type
    _M_check_len(size_type __n, const char* __s) const
    {
      if (max_size() - size() < __n)
 __throw_length_error((__s));

      const size_type __len = size() + std::max(size(), __n);
      return (__len < size() || __len > max_size()) ? max_size() : __len;
    }

    void
    _M_erase_at_end(iterator __pos)
    { this->_M_impl._M_finish = __pos; }
  };

}
# 66 "/usr/include/c++/4.4/vector" 2 3


# 1 "/usr/include/c++/4.4/bits/vector.tcc" 1 3
# 60 "/usr/include/c++/4.4/bits/vector.tcc" 3
namespace std __attribute__ ((__visibility__ ("default"))) {

  template<typename _Tp, typename _Alloc>
    void
    vector<_Tp, _Alloc>::
    reserve(size_type __n)
    {
      if (__n > this->max_size())
 __throw_length_error(("vector::reserve"));
      if (this->capacity() < __n)
 {
   const size_type __old_size = size();
   pointer __tmp = _M_allocate_and_copy(__n,
   (this->_M_impl._M_start),
   (this->_M_impl._M_finish));
   std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish,
   _M_get_Tp_allocator());
   _M_deallocate(this->_M_impl._M_start,
   this->_M_impl._M_end_of_storage
   - this->_M_impl._M_start);
   this->_M_impl._M_start = __tmp;
   this->_M_impl._M_finish = __tmp + __old_size;
   this->_M_impl._M_end_of_storage = this->_M_impl._M_start + __n;
 }
    }
# 104 "/usr/include/c++/4.4/bits/vector.tcc" 3
  template<typename _Tp, typename _Alloc>
    typename vector<_Tp, _Alloc>::iterator
    vector<_Tp, _Alloc>::
    insert(iterator __position, const value_type& __x)
    {
      const size_type __n = __position - begin();
      if (this->_M_impl._M_finish != this->_M_impl._M_end_of_storage
   && __position == end())
 {
   this->_M_impl.construct(this->_M_impl._M_finish, __x);
   ++this->_M_impl._M_finish;
 }
      else
 {
# 126 "/usr/include/c++/4.4/bits/vector.tcc" 3
     _M_insert_aux(__position, __x);
 }
      return iterator(this->_M_impl._M_start + __n);
    }

  template<typename _Tp, typename _Alloc>
    typename vector<_Tp, _Alloc>::iterator
    vector<_Tp, _Alloc>::
    erase(iterator __position)
    {
      if (__position + 1 != end())
 std::copy(__position + 1, end(), __position);
      --this->_M_impl._M_finish;
      this->_M_impl.destroy(this->_M_impl._M_finish);
      return __position;
    }

  template<typename _Tp, typename _Alloc>
    typename vector<_Tp, _Alloc>::iterator
    vector<_Tp, _Alloc>::
    erase(iterator __first, iterator __last)
    {
      if (__last != end())
 std::copy(__last, end(), __first);
      _M_erase_at_end(__first.base() + (end() - __last));
      return __first;
    }

  template<typename _Tp, typename _Alloc>
    vector<_Tp, _Alloc>&
    vector<_Tp, _Alloc>::
    operator=(const vector<_Tp, _Alloc>& __x)
    {
      if (&__x != this)
 {
   const size_type __xlen = __x.size();
   if (__xlen > capacity())
     {
       pointer __tmp = _M_allocate_and_copy(__xlen, __x.begin(),
         __x.end());
       std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish,
       _M_get_Tp_allocator());
       _M_deallocate(this->_M_impl._M_start,
       this->_M_impl._M_end_of_storage
       - this->_M_impl._M_start);
       this->_M_impl._M_start = __tmp;
       this->_M_impl._M_end_of_storage = this->_M_impl._M_start + __xlen;
     }
   else if (size() >= __xlen)
     {
       std::_Destroy(std::copy(__x.begin(), __x.end(), begin()),
       end(), _M_get_Tp_allocator());
     }
   else
     {
       std::copy(__x._M_impl._M_start, __x._M_impl._M_start + size(),
   this->_M_impl._M_start);
       std::__uninitialized_copy_a(__x._M_impl._M_start + size(),
       __x._M_impl._M_finish,
       this->_M_impl._M_finish,
       _M_get_Tp_allocator());
     }
   this->_M_impl._M_finish = this->_M_impl._M_start + __xlen;
 }
      return *this;
    }

  template<typename _Tp, typename _Alloc>
    void
    vector<_Tp, _Alloc>::
    _M_fill_assign(size_t __n, const value_type& __val)
    {
      if (__n > capacity())
 {
   vector __tmp(__n, __val, _M_get_Tp_allocator());
   __tmp.swap(*this);
 }
      else if (__n > size())
 {
   std::fill(begin(), end(), __val);
   std::__uninitialized_fill_n_a(this->_M_impl._M_finish,
     __n - size(), __val,
     _M_get_Tp_allocator());
   this->_M_impl._M_finish += __n - size();
 }
      else
        _M_erase_at_end(std::fill_n(this->_M_impl._M_start, __n, __val));
    }

  template<typename _Tp, typename _Alloc>
    template<typename _InputIterator>
      void
      vector<_Tp, _Alloc>::
      _M_assign_aux(_InputIterator __first, _InputIterator __last,
      std::input_iterator_tag)
      {
 pointer __cur(this->_M_impl._M_start);
 for (; __first != __last && __cur != this->_M_impl._M_finish;
      ++__cur, ++__first)
   *__cur = *__first;
 if (__first == __last)
   _M_erase_at_end(__cur);
 else
   insert(end(), __first, __last);
      }

  template<typename _Tp, typename _Alloc>
    template<typename _ForwardIterator>
      void
      vector<_Tp, _Alloc>::
      _M_assign_aux(_ForwardIterator __first, _ForwardIterator __last,
      std::forward_iterator_tag)
      {
 const size_type __len = std::distance(__first, __last);

 if (__len > capacity())
   {
     pointer __tmp(_M_allocate_and_copy(__len, __first, __last));
     std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish,
     _M_get_Tp_allocator());
     _M_deallocate(this->_M_impl._M_start,
     this->_M_impl._M_end_of_storage
     - this->_M_impl._M_start);
     this->_M_impl._M_start = __tmp;
     this->_M_impl._M_finish = this->_M_impl._M_start + __len;
     this->_M_impl._M_end_of_storage = this->_M_impl._M_finish;
   }
 else if (size() >= __len)
   _M_erase_at_end(std::copy(__first, __last, this->_M_impl._M_start));
 else
   {
     _ForwardIterator __mid = __first;
     std::advance(__mid, size());
     std::copy(__first, __mid, this->_M_impl._M_start);
     this->_M_impl._M_finish =
       std::__uninitialized_copy_a(__mid, __last,
       this->_M_impl._M_finish,
       _M_get_Tp_allocator());
   }
      }
# 293 "/usr/include/c++/4.4/bits/vector.tcc" 3
  template<typename _Tp, typename _Alloc>
    void
    vector<_Tp, _Alloc>::
    _M_insert_aux(iterator __position, const _Tp& __x)

    {
      if (this->_M_impl._M_finish != this->_M_impl._M_end_of_storage)
 {
   this->_M_impl.construct(this->_M_impl._M_finish,
      (*(this->_M_impl._M_finish - 1)));

   ++this->_M_impl._M_finish;

   _Tp __x_copy = __x;

   std::copy_backward(__position.base(), this->_M_impl._M_finish - 2, this->_M_impl._M_finish - 1);



   *__position = __x_copy;



 }
      else
 {
   const size_type __len =
     _M_check_len(size_type(1), "vector::_M_insert_aux");
   const size_type __elems_before = __position - begin();
   pointer __new_start(this->_M_allocate(__len));
   pointer __new_finish(__new_start);
   try
     {




       this->_M_impl.construct(__new_start + __elems_before,



                               __x);

       __new_finish = 0;

       __new_finish =
  std::__uninitialized_move_a(this->_M_impl._M_start,
         __position.base(), __new_start,
         _M_get_Tp_allocator());
       ++__new_finish;

       __new_finish =
  std::__uninitialized_move_a(__position.base(),
         this->_M_impl._M_finish,
         __new_finish,
         _M_get_Tp_allocator());
     }
          catch(...)
     {
       if (!__new_finish)
  this->_M_impl.destroy(__new_start + __elems_before);
       else
  std::_Destroy(__new_start, __new_finish, _M_get_Tp_allocator());
       _M_deallocate(__new_start, __len);
       throw;
     }
   std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish,
   _M_get_Tp_allocator());
   _M_deallocate(this->_M_impl._M_start,
   this->_M_impl._M_end_of_storage
   - this->_M_impl._M_start);
   this->_M_impl._M_start = __new_start;
   this->_M_impl._M_finish = __new_finish;
   this->_M_impl._M_end_of_storage = __new_start + __len;
 }
    }

  template<typename _Tp, typename _Alloc>
    void
    vector<_Tp, _Alloc>::
    _M_fill_insert(iterator __position, size_type __n, const value_type& __x)
    {
      if (__n != 0)
 {
   if (size_type(this->_M_impl._M_end_of_storage
   - this->_M_impl._M_finish) >= __n)
     {
       value_type __x_copy = __x;
       const size_type __elems_after = end() - __position;
       pointer __old_finish(this->_M_impl._M_finish);
       if (__elems_after > __n)
  {
    std::__uninitialized_move_a(this->_M_impl._M_finish - __n,
           this->_M_impl._M_finish,
           this->_M_impl._M_finish,
           _M_get_Tp_allocator());
    this->_M_impl._M_finish += __n;
    std::copy_backward(__position.base(), __old_finish - __n, __old_finish);

    std::fill(__position.base(), __position.base() + __n,
       __x_copy);
  }
       else
  {
    std::__uninitialized_fill_n_a(this->_M_impl._M_finish,
      __n - __elems_after,
      __x_copy,
      _M_get_Tp_allocator());
    this->_M_impl._M_finish += __n - __elems_after;
    std::__uninitialized_move_a(__position.base(), __old_finish,
           this->_M_impl._M_finish,
           _M_get_Tp_allocator());
    this->_M_impl._M_finish += __elems_after;
    std::fill(__position.base(), __old_finish, __x_copy);
  }
     }
   else
     {
       const size_type __len =
  _M_check_len(__n, "vector::_M_fill_insert");
       const size_type __elems_before = __position - begin();
       pointer __new_start(this->_M_allocate(__len));
       pointer __new_finish(__new_start);
       try
  {

    std::__uninitialized_fill_n_a(__new_start + __elems_before,
      __n, __x,
      _M_get_Tp_allocator());
    __new_finish = 0;

    __new_finish =
      std::__uninitialized_move_a(this->_M_impl._M_start,
      __position.base(),
      __new_start,
      _M_get_Tp_allocator());
    __new_finish += __n;

    __new_finish =
      std::__uninitialized_move_a(__position.base(),
      this->_M_impl._M_finish,
      __new_finish,
      _M_get_Tp_allocator());
  }
       catch(...)
  {
    if (!__new_finish)
      std::_Destroy(__new_start + __elems_before,
      __new_start + __elems_before + __n,
      _M_get_Tp_allocator());
    else
      std::_Destroy(__new_start, __new_finish,
      _M_get_Tp_allocator());
    _M_deallocate(__new_start, __len);
    throw;
  }
       std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish,
       _M_get_Tp_allocator());
       _M_deallocate(this->_M_impl._M_start,
       this->_M_impl._M_end_of_storage
       - this->_M_impl._M_start);
       this->_M_impl._M_start = __new_start;
       this->_M_impl._M_finish = __new_finish;
       this->_M_impl._M_end_of_storage = __new_start + __len;
     }
 }
    }

  template<typename _Tp, typename _Alloc>
    template<typename _InputIterator>
      void
      vector<_Tp, _Alloc>::
      _M_range_insert(iterator __pos, _InputIterator __first,
        _InputIterator __last, std::input_iterator_tag)
      {
 for (; __first != __last; ++__first)
   {
     __pos = insert(__pos, *__first);
     ++__pos;
   }
      }

  template<typename _Tp, typename _Alloc>
    template<typename _ForwardIterator>
      void
      vector<_Tp, _Alloc>::
      _M_range_insert(iterator __position, _ForwardIterator __first,
        _ForwardIterator __last, std::forward_iterator_tag)
      {
 if (__first != __last)
   {
     const size_type __n = std::distance(__first, __last);
     if (size_type(this->_M_impl._M_end_of_storage
     - this->_M_impl._M_finish) >= __n)
       {
  const size_type __elems_after = end() - __position;
  pointer __old_finish(this->_M_impl._M_finish);
  if (__elems_after > __n)
    {
      std::__uninitialized_move_a(this->_M_impl._M_finish - __n,
      this->_M_impl._M_finish,
      this->_M_impl._M_finish,
      _M_get_Tp_allocator());
      this->_M_impl._M_finish += __n;
      std::copy_backward(__position.base(), __old_finish - __n, __old_finish);

      std::copy(__first, __last, __position);
    }
  else
    {
      _ForwardIterator __mid = __first;
      std::advance(__mid, __elems_after);
      std::__uninitialized_copy_a(__mid, __last,
      this->_M_impl._M_finish,
      _M_get_Tp_allocator());
      this->_M_impl._M_finish += __n - __elems_after;
      std::__uninitialized_move_a(__position.base(),
      __old_finish,
      this->_M_impl._M_finish,
      _M_get_Tp_allocator());
      this->_M_impl._M_finish += __elems_after;
      std::copy(__first, __mid, __position);
    }
       }
     else
       {
  const size_type __len =
    _M_check_len(__n, "vector::_M_range_insert");
  pointer __new_start(this->_M_allocate(__len));
  pointer __new_finish(__new_start);
  try
    {
      __new_finish =
        std::__uninitialized_move_a(this->_M_impl._M_start,
        __position.base(),
        __new_start,
        _M_get_Tp_allocator());
      __new_finish =
        std::__uninitialized_copy_a(__first, __last,
        __new_finish,
        _M_get_Tp_allocator());
      __new_finish =
        std::__uninitialized_move_a(__position.base(),
        this->_M_impl._M_finish,
        __new_finish,
        _M_get_Tp_allocator());
    }
  catch(...)
    {
      std::_Destroy(__new_start, __new_finish,
      _M_get_Tp_allocator());
      _M_deallocate(__new_start, __len);
      throw;
    }
  std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish,
         _M_get_Tp_allocator());
  _M_deallocate(this->_M_impl._M_start,
         this->_M_impl._M_end_of_storage
         - this->_M_impl._M_start);
  this->_M_impl._M_start = __new_start;
  this->_M_impl._M_finish = __new_finish;
  this->_M_impl._M_end_of_storage = __new_start + __len;
       }
   }
      }




  template<typename _Alloc>
    void
    vector<bool, _Alloc>::
    reserve(size_type __n)
    {
      if (__n > this->max_size())
 __throw_length_error(("vector::reserve"));
      if (this->capacity() < __n)
 {
   _Bit_type* __q = this->_M_allocate(__n);
   this->_M_impl._M_finish = _M_copy_aligned(begin(), end(),
          iterator(__q, 0));
   this->_M_deallocate();
   this->_M_impl._M_start = iterator(__q, 0);
   this->_M_impl._M_end_of_storage = (__q + (__n + int(_S_word_bit) - 1)
          / int(_S_word_bit));
 }
    }

  template<typename _Alloc>
    void
    vector<bool, _Alloc>::
    _M_fill_insert(iterator __position, size_type __n, bool __x)
    {
      if (__n == 0)
 return;
      if (capacity() - size() >= __n)
 {
   std::copy_backward(__position, end(),
        this->_M_impl._M_finish + difference_type(__n));
   std::fill(__position, __position + difference_type(__n), __x);
   this->_M_impl._M_finish += difference_type(__n);
 }
      else
 {
   const size_type __len =
     _M_check_len(__n, "vector<bool>::_M_fill_insert");
   _Bit_type * __q = this->_M_allocate(__len);
   iterator __i = _M_copy_aligned(begin(), __position,
      iterator(__q, 0));
   std::fill(__i, __i + difference_type(__n), __x);
   this->_M_impl._M_finish = std::copy(__position, end(),
           __i + difference_type(__n));
   this->_M_deallocate();
   this->_M_impl._M_end_of_storage = (__q + ((__len
           + int(_S_word_bit) - 1)
          / int(_S_word_bit)));
   this->_M_impl._M_start = iterator(__q, 0);
 }
    }

  template<typename _Alloc>
    template<typename _ForwardIterator>
      void
      vector<bool, _Alloc>::
      _M_insert_range(iterator __position, _ForwardIterator __first,
        _ForwardIterator __last, std::forward_iterator_tag)
      {
 if (__first != __last)
   {
     size_type __n = std::distance(__first, __last);
     if (capacity() - size() >= __n)
       {
  std::copy_backward(__position, end(),
       this->_M_impl._M_finish
       + difference_type(__n));
  std::copy(__first, __last, __position);
  this->_M_impl._M_finish += difference_type(__n);
       }
     else
       {
  const size_type __len =
    _M_check_len(__n, "vector<bool>::_M_insert_range");
  _Bit_type * __q = this->_M_allocate(__len);
  iterator __i = _M_copy_aligned(begin(), __position,
            iterator(__q, 0));
  __i = std::copy(__first, __last, __i);
  this->_M_impl._M_finish = std::copy(__position, end(), __i);
  this->_M_deallocate();
  this->_M_impl._M_end_of_storage = (__q
         + ((__len
             + int(_S_word_bit) - 1)
            / int(_S_word_bit)));
  this->_M_impl._M_start = iterator(__q, 0);
       }
   }
      }

  template<typename _Alloc>
    void
    vector<bool, _Alloc>::
    _M_insert_aux(iterator __position, bool __x)
    {
      if (this->_M_impl._M_finish._M_p != this->_M_impl._M_end_of_storage)
 {
   std::copy_backward(__position, this->_M_impl._M_finish,
        this->_M_impl._M_finish + 1);
   *__position = __x;
   ++this->_M_impl._M_finish;
 }
      else
 {
   const size_type __len =
     _M_check_len(size_type(1), "vector<bool>::_M_insert_aux");
   _Bit_type * __q = this->_M_allocate(__len);
   iterator __i = _M_copy_aligned(begin(), __position,
      iterator(__q, 0));
   *__i++ = __x;
   this->_M_impl._M_finish = std::copy(__position, end(), __i);
   this->_M_deallocate();
   this->_M_impl._M_end_of_storage = (__q + ((__len
           + int(_S_word_bit) - 1)
          / int(_S_word_bit)));
   this->_M_impl._M_start = iterator(__q, 0);
 }
    }

}
# 69 "/usr/include/c++/4.4/vector" 2 3
# 52 "./macroblock.hh" 2

# 1 "./encodertypes.h" 1
# 30 "./encodertypes.h"
class Parity
{
public:
    inline static int Invert( int x ) { return 1-x;}
    static const int top = 0;
    static const int bot = 1;
    static const int dim = 2;
    typedef int type;
};

class FieldOrder
{
public:
    static const int botfirst = 0;
    static const int topfirst = 1;
    static const int dim = 2;
    typedef int type;
};

class Dim
{
public:
    static const int X = 0;
    static const int Y = 1;
    static const int dim = 2;
    typedef int type;
};

class Coord;
class MotionVector
{
public:
 inline MotionVector() {}
 inline MotionVector( int x, int y )
 {
  val[Dim::X] = x; val[Dim::Y] = y;
 }
    inline static MotionVector
  Frame( const Coord &ref, const Coord &pred );
 inline static MotionVector
  Field( const Coord &ref, const Coord &pred );
    inline int &operator [] (int i) { return val[i]; }
    inline const int &operator [] (int i) const { return val[i]; }
 inline int CodingPenaltyForSAD() const
 {
  return (abs(val[Dim::X]) + abs(val[Dim::Y]))<<3;
 }

 inline void Zero() { val[Dim::Y] = val[Dim::X] = 0; }

private:
  int val[Dim::dim];
};


class Coord
{
public:
 inline Coord() {}

    inline Coord( int _x, int _y ) : x(_x), y(_y) {}

 inline Coord( const Coord &pred, const MotionVector &mv ) :
  x( pred.x + mv[Dim::X] ),
  y( pred.y + mv[Dim::Y] )
 {
 }

  inline void ToField() { y >>= 1; }
  inline void ToFrame() { y <<= 1; }
  inline void ToHalfPel() { x <<= 1; y <<= 1; }
  inline void ToFullPel() { x >>= 1; y >>= 1; }

 static inline Coord Field(const Coord &base)
 {
  return Coord( base.x, base.y >> 1 );
 }

 static inline Coord Frame(const Coord &base)
 {
  return Coord( base.x, base.y << 1 );
 }

 static inline Coord HalfPel(const Coord &base)
 {
  return Coord( base.x << 1, base.y << 1 );
 }

 static inline Coord FullPel(const Coord &base)
 {
  return Coord( base.x >> 1, base.y >> 1 );
 }

 int x;
 int y;
};



inline MotionVector
MotionVector::Frame( const Coord &ref, const Coord &pred )
{
 return MotionVector( ref.x - pred.x, ref.y - pred.y );
}

inline MotionVector
MotionVector::Field( const Coord &ref, const Coord &pred )
{
 return MotionVector(ref.x - pred.x,(ref.y<<1) - pred.y );
}

struct Rectangle
{
    Coord toplft;
    Coord botrgt;
};
# 54 "./macroblock.hh" 2

using namespace std;

class Picture;


typedef int16_t DCTblock[64];


class MotionEst
{
public:
    enum Direction { fwd = 0, bwd =1 };

 int mb_type;
 int motion_type;
 MotionVector MV[2][2];
 int field_sel[2][2];
 MotionVector dualprimeMV;
 int var;

};

class Quantizer;
class MotionCand;


class SubSampledImg;

class MacroBlock
{
public:
    MacroBlock(Picture &_picture,
               const unsigned int _i,
               const unsigned int _j,
               DCTblock *_dctblocks,
               DCTblock *_qdctblocks
               ) :
        picture(&_picture),
        i(_i),
        j(_j),
        pel( _i, _j ),
        hpel( _i<<1, _j<<1 ),
        dctblocks(_dctblocks),
        qdctblocks(_qdctblocks)
        {
        }

    inline Picture &ParentPicture() const { return *picture; }
    inline int BaseLumVariance() const { return best_me->var; }
    inline double Activity() const { return act; }
    inline const int TopleftX() const { return i; }
    inline const int TopleftY() const { return j; }
    inline DCTblock *RawDCTblocks() const { return dctblocks; }
    inline DCTblock *QuantDCTblocks() const { return qdctblocks; }


    void Encode();
    void MotionEstimateAndModeSelect();
    void ForceIFrame();
    void ForcePFrame();
    void Quantize( Quantizer &quant);
    void IQuantize( Quantizer &quant);
    void Transform();
    void ITransform();

protected:
    void MotionEstimate();
    void SelectCodingModeOnVariance();
    void FrameME();
    void FrameMEs();
    void FieldME();
    void Predict();



private:
    bool FrameDualPrimeCand(uint8_t *ref,
                            const SubSampledImg &ssmb,
                            const MotionCand (&best_fieldmcs)[2][2],
                            MotionCand &best_mc,
                            MotionVector &min_dpmv);

private:

    Picture *picture;
    unsigned int i,j;
    Coord pel;
    Coord hpel;
    int row_start;


    DCTblock *dctblocks;
    DCTblock *qdctblocks;

    uint32_t lum_mean;
    uint32_t lum_variance;





public:
 bool field_dct;
 int mquant;
 int cbp;
 bool skipped;
 double act;
 int i_act;
 int p_act;
 int b_act;
    vector<MotionEst> best_of_kind_me;


    MotionEst *best_me;
    MotionEst *best_fwd_me;





};
# 29 "./picture.hh" 2



using namespace std;




typedef int MotionVecPred[2][2][2];
typedef int DC_DctPred[3];

class CodingPredictors
{
public:

    void Reset_DC_DCT_Pred()
        {
            int cc;
            for (cc=0; cc<3; cc++)
                dc_dct_pred[cc] = 0;

        }
    void Reset_MV_Pred()
        {
            int *base=&PMV[0][0][0];
            int v;
            for( v = 0; v < 2*2*2; ++v)
                base[v]=0;
        }

    DC_DctPred dc_dct_pred;
    MotionVecPred PMV;
    MacroBlock *prev_mb;

};

class RateCtl;
class Quantizer;
class StreamState;
class ElemStrmWriter;
class MPEG2CodingBuf;
class ImagePlanes;

class Picture : public CodingPredictors
{
public:


    Picture( EncoderParams &_encparams,
             ElemStrmWriter &writer,
             Quantizer &_quantizer );
    ~Picture();

    void QuantiseAndCode(RateCtl &ratecontrol);

    void MotionSubSampledLum();
    void ITransform();
    void IQuantize();
    void CalcSNR();
    void Stats();
    void Reconstruct();
    void CommitCoding();
    void DiscardCoding();

    void SetFrameParams( const StreamState &ss, int field );



    inline double Complexity() const { return Xhi; }
    void SetComplexity( double _Xhi ) { Xhi = _Xhi; }
    int EncodedSize() const;
    double IntraCodedBlocks() const;


    void PutHeaders();
    void PutTrailers( int padding );

    void PutHeader();

    double ActivityBestMotionComp();
    double VarSumBestMotionComp();
    double VarSumBestFwdMotionComp();
    double MinVarBestMotionComp();


    inline bool Legal( const MotionVector &mv ) const
        {
            return mv[Dim::X] >= -sxf && mv[Dim::X] < sxf
                && mv[Dim::Y] >= -syf && mv[Dim::Y] < syf;
        }


    inline bool InRangeFrameMVRef( const Coord &crd ) const
        {
            return crd.x >= 0 && crd.x <= (encparams.enc_width-16)*2
                && crd.y >= 0 && crd.y <= (encparams.enc_height-16)*2;

        }

    inline bool InRangeFieldMVRef( const Coord &crd ) const
        {
            return crd.x >= 0 && crd.x <= (encparams.enc_width-16)*2
                && crd.y >= 0 && crd.y <= (encparams.enc_height/2-16)*2;

        }

    inline bool FinalFieldOfRefFrame() const
        {
            return pict_type != B_TYPE && finalfield;
        }
protected:

    void SetFieldParams(int field);
    void PutSliceHdr( int slice_mb_y, int mquant );
    void PutMVs( MotionEst &me, bool back );
    void PutDCTBlocks( MacroBlock &mb, int mb_type );
    void PutCodingExt();
    bool SkippableMotionMode( MotionEst &cur_mb_mm, MotionEst &prev_mb_mm);

public:







    EncoderParams &encparams;
    Quantizer &quantizer;
    MPEG2CodingBuf *coding;



 DCTblock *blocks;
 DCTblock *qblocks;


 vector<MacroBlock> mbinfo;
# 175 "./picture.hh"
 int decode;
 int present;


    bool last_picture;
    bool finalfield;




    Picture *fwd_ref_frame;
    Picture *bwd_ref_frame;


 ImagePlanes *fwd_org, *bwd_org;

 ImagePlanes *fwd_rec, *bwd_rec;

 ImagePlanes *org_img, *rec_img;


 ImagePlanes *pred;
 int sxf, syf, sxb, syb;
 bool secondfield;
 bool ipflag;



 int temp_ref;
    PICTURE_CODING frame_type;
    int gop_decode;
    int bgrp_decode;
    PICTURE_CODING pict_type;
 int vbv_delay;
 int forw_hor_f_code, forw_vert_f_code;
 int back_hor_f_code, back_vert_f_code;
 int dc_prec;
    PICTURE_STRUCT pict_struct;
 int topfirst;
 bool frame_pred_dct;
 int intravlc;
 int q_scale_type;
 bool altscan;
    const uint8_t *scan_pattern;
 bool repeatfirst;
 bool prog_frame;

    int unit_coeff_threshold;

    int unit_coeff_first;


 bool gop_start;
    bool closed_gop;
 int nb;
 int np;
 bool new_seq;
    bool end_seq;

    double Xhi;



    double AQ;
    double ABQ;



 int pad;


 double SQ;
 double avg_act;
 double sum_avg_act;


};
# 28 "./picturereader.hh" 2

class EncoderParams;
class ImagePlanes;
struct MPEG2EncInVidParams;

class PictureReader
{
public:
 PictureReader(EncoderParams &encoder );
    virtual ~PictureReader();
    void Init();
    void ReadPictureData( int num_frame, ImagePlanes &frame);
    virtual void StreamPictureParams( MPEG2EncInVidParams &strm ) = 0;
    ImagePlanes *ReadFrame( int num_frame );
    void ReleaseFrame( int num_frame );
    void FillBufferUpto( int num_frame );
    inline int NumberOfFrames() { return istrm_nframes; }
protected:
    void ReadChunkSequential( int num_frame );
    void AllocateBufferUpto( int buffer_slot );
    virtual bool LoadFrame( ImagePlanes &image ) = 0;

protected:
    EncoderParams &encparams;

 int frames_read;
    int frames_released;
    std::deque<ImagePlanes *> input_imgs_buf;
    std::deque<ImagePlanes *> unused;
    int istrm_nframes;

};
# 55 "seqencoder.cc" 2
# 1 "./seqencoder.hh" 1
# 27 "./seqencoder.hh"
# 1 "./streamstate.h" 1
# 34 "./streamstate.h"
class EncoderParams;
class PictureReader;

class StreamState
{
public:
    StreamState( EncoderParams &encparams, PictureReader &reader );
    void Init( );
    void Next( uint64_t bits_after_mux );
    void ForceIFrame();
    void SuppressBFrames();



    inline bool EndOfStream() const { return end_stream; }
    inline int BGroupLength() const { return bigrp_length; }
    inline int TemporalReference() const { return temp_ref; }
    inline int PresentationNum() const { return frame_num+temp_ref-g_idx; }
    inline int DecodeNum() const { return frame_num; }

    bool NextGopClosed() const;
    bool CanSplitHere(int offset=0) const;

protected:
    void GopStart();

    void SetTempRef();

    int GetNextChapter() const;

public:

    int frame_num;
    int s_idx;
    int g_idx;
    int b_idx;
    int frame_type;
    int temp_ref;



    int seq_start_frame;
    int gop_start_frame;


    int gop_length;
    int bigrp_length;
    int bs_short;


    bool suppress_b_frames;
    int np;
    int nb;
    double next_b_drop;
    bool closed_gop;


    bool gop_end_seq;
    bool end_seq;
    bool new_seq;
    bool end_stream;

private:
    uint64_t next_split_point;
    uint64_t seq_split_length;
    EncoderParams &encparams;
    PictureReader &reader;
};
# 28 "./seqencoder.hh" 2

class MPEG2Encoder;
class EncoderParams;
class MPEG2CodingBuf;
class PictureReader;
class Despatcher;
class RateCtlState;
class Pass1RateCtl;
class Pass2RateCtl;

class SeqEncoder
{
public:
 SeqEncoder( EncoderParams &encparams,
                PictureReader &reader,
                Quantizer &quantizer,
                ElemStrmWriter &writer,
                Pass1RateCtl &pass1ratectl,
                Pass2RateCtl &pass2ratectl
        );
 ~SeqEncoder();
# 58 "./seqencoder.hh"
    void Init();







    void EncodeStream();
# 76 "./seqencoder.hh"
 void EncodeStreamOneStep();
# 89 "./seqencoder.hh"
 bool EncodeStreamWhile();
# 98 "./seqencoder.hh"
 void StreamEnd();


private:
# 110 "./seqencoder.hh"
    Picture *GetFreshPicture();
    void ReleasePicture( Picture *);
# 120 "./seqencoder.hh"
    void Pass1Process();
# 130 "./seqencoder.hh"
    void Pass2Process();

    void Pass1RateCtlSetup( Picture &picture );
    void Pass2RateCtlSetup( Picture &picture );

    Picture *NextFramePicture0();
    Picture *NextFramePicture1(Picture *picture0);
    void EncodePicture( Picture &picture, RateCtl &ratectl);
    void RetainPicture( Picture &picture, RateCtl &ratectl);

    void Pass1GopSplitting( Picture &picture);
    void Pass1EncodePicture( Picture &picture, int field );
    void Pass1ReEncodePicture0( Picture &picture, void (MacroBlock::*modeMotionAdjustFunc)() );
    bool Pass2EncodePicture( Picture &picture, bool force_reencode );

    uint64_t BitsAfterMux() const;

    EncoderParams &encparams;
    PictureReader &reader;
    Quantizer &quantizer;
    ElemStrmWriter &writer;
    Pass1RateCtl &pass1ratectl;
    Pass2RateCtl &pass2ratectl;




    Despatcher &p1_despatcher;





    RateCtlState *pass1_rcstate;



    std::deque<Picture *> pass1coded;


    std::deque<Picture*> pass2queue;






    std::deque<Picture*> released_pictures;



    int released_ref_frames;


    std::vector<Picture *> free_pictures;



 StreamState pass1_ss;


 Picture *new_ref_picture, *old_ref_picture;

};
# 56 "seqencoder.cc" 2
# 1 "./ratectl.hh" 1
# 27 "./ratectl.hh"
class MacroBlock;
class EncoderParams;
class Picture;
# 41 "./ratectl.hh"
class RateCtlState
{
public:
 virtual ~RateCtlState() {}
 virtual RateCtlState *New() const = 0;
 virtual void Set( const RateCtlState &state) = 0;
 virtual const RateCtlState &Get() const = 0;
};

class RateCtl
{
public:
    RateCtl( EncoderParams &_encparams, RateCtlState &_state );

    virtual ~RateCtl() {}
# 64 "./ratectl.hh"
    virtual void Init() = 0;
# 75 "./ratectl.hh"
    virtual void PictSetup (Picture &picture);






    virtual void PictUpdate (Picture &picture, int &padding_needed ) = 0;


    virtual int MacroBlockQuant( const MacroBlock &mb) = 0;
    virtual int InitialMacroBlockQuant() = 0;

    inline RateCtlState *NewState() const { return state.New(); }
    inline void SetState( const RateCtlState &toset) { state.Set( toset ); }
    inline const RateCtlState &GetState() const { return state.Get(); }


    virtual double SumAvgActivity() = 0;

    static double ClipQuant( int q_scale_type, double quant );
    static double InvScaleQuant( int q_scale_type, int raw_code );
    static int ScaleQuant( int q_scale_type, double quant );
protected:







    virtual void InitSeq( ) = 0;







    virtual void InitGOP( ) = 0;
# 124 "./ratectl.hh"
    virtual void InitPict( Picture &picture ) = 0;


    double ScaleQuantf( int q_scale_type, double quant );
    EncoderParams &encparams;
    RateCtlState &state;
};

class Pass1RateCtl : public RateCtl
{
public:
    Pass1RateCtl( EncoderParams &encoder, RateCtlState &state );







    virtual void GopSetup( int nb, int np ) = 0;

};

class Pass2RateCtl : public RateCtl
{
public:
    Pass2RateCtl( EncoderParams &encoder, RateCtlState &state );






    virtual void GopSetup( std::deque<Picture *>::iterator gop_begin,
                           std::deque<Picture *>::iterator gop_end ) = 0;







    virtual bool ReencodeRequired() const = 0;


    virtual unsigned int getEncodedFrames() const = 0;

    virtual double getStreamComplexity() const = 0;
};
# 57 "seqencoder.cc" 2
# 1 "./tables.h" 1
# 44 "./tables.h"
extern "C" const char version[];

extern "C" const char author[];


extern "C" const uint8_t zig_zag_scan[64];

extern "C" const uint8_t alternate_scan[64];


extern "C" const uint16_t default_intra_quantizer_matrix[64];

extern "C" const uint16_t hires_intra_quantizer_matrix[64];

extern "C" const uint16_t default_nonintra_quantizer_matrix[64];

extern "C" const uint16_t kvcd_intra_quantizer_matrix[64];

extern "C" const uint16_t kvcd_nonintra_quantizer_matrix[64];

extern "C" const uint16_t flat_intra_quantizer_matrix[64];

extern "C" const uint16_t flat_nonintra_quantizer_matrix[64];

extern "C" const uint16_t tmpgenc_intra_quantizer_matrix[64];

extern "C" const uint16_t tmpgenc_nonintra_quantizer_matrix[64];



extern "C" const uint16_t *hires_nonintra_quantizer_matrix;


extern "C" const char pict_type_char[6];





extern "C" const uint8_t dummy_svcd_scan_data[14];


extern "C" const uint8_t map_non_linear_mquant[113];
extern "C" const uint8_t non_linear_mquant_table[32];
# 58 "seqencoder.cc" 2
# 1 "./channel.hh" 1
# 31 "./channel.hh"
template<class T, unsigned int size = 1>
class Channel
{
public:
    Channel() :
            fullness(0),
            read(0),
            write(0),
            consumers_waiting(0),
            producers_waiting(0)
    {
# 50 "./channel.hh"
        pthread_mutexattr_t *p_attr = __null;


        pthread_mutex_init( &atomic, p_attr );
        pthread_cond_init( &addition, __null );
        pthread_cond_init( &removal, __null );
        pthread_cond_init( &waiting, __null );
    }

    void Put( const T &in )
    {
        int e;

        e = pthread_mutex_lock( &atomic);

        if ( e != 0)
        {
            fprintf(stderr, "1 pthread_mutex_lock=%d\n", e);
            abort();
        }

        if( fullness == size )
        {
            ++producers_waiting;
            pthread_cond_signal( &waiting );
            while( fullness == size )
            {
                pthread_cond_wait( &removal, &atomic);
            }

            --producers_waiting;
        }
        ++fullness;
        buffer[write] = in;
        write = (write + 1) % size;
        pthread_cond_signal( &addition );
        e = pthread_mutex_unlock( &atomic );

        if (e != 0)
        {
            fprintf(stderr, "1 pthread_mutex_unlock=%d\n", e);
            abort();
        }

    }

    void Get( T &out )
    {
        int e;

        e = pthread_mutex_lock( &atomic);

        if ( e != 0)
        {
            fprintf(stderr, "2 pthread_mutex_lock=%d\n", e);
            abort();
        }

        if( fullness == 0 )
        {
            ++consumers_waiting;
            pthread_cond_signal( &waiting );
            while( fullness == 0 )
            {
                pthread_cond_wait( &addition, &atomic );
            }
            --consumers_waiting;
        }
        --fullness;
        out = buffer[read];
        read = (read + 1) % size;
        pthread_cond_signal( &removal );
        e = pthread_mutex_unlock( &atomic );

        if (e != 0)
        {
            fprintf(stderr, "2 pthread_mutex_unlock=%d\n", e);
            abort();
        }

    }

    void WaitForNewConsumers()
    {
        int e;
        e = pthread_mutex_lock( &atomic);

        if ( e != 0)
        {
            fprintf(stderr, "5 pthread_mutex_lock=%d\n", e);
            abort();
        }

        unsigned int wait_for = consumers_waiting+1;
        while( fullness > 0 || consumers_waiting < wait_for )
        {
            pthread_cond_wait( &waiting, &atomic);
        }
        e = pthread_mutex_unlock( &atomic );

        if ( e != 0)
        {
            fprintf(stderr, "5 pthread_mutex_unlock=%d\n", e);
            abort();
        }

    }

    void WaitUntilConsumersWaitingAtLeast( unsigned int wait_for )
    {
        int e;

        e = pthread_mutex_lock( &atomic);

        if ( e != 0)
        {
            fprintf(stderr, "3 pthread_mutex_lock=%d\n", e);
            abort();
        }

        while( fullness > 0 || consumers_waiting < wait_for )
        {
            pthread_cond_wait( &waiting, &atomic);
        }
        e = pthread_mutex_unlock( &atomic );

        if (e != 0)
        {
            fprintf(stderr, "3 pthread_mutex_unlock=%d\n", e);
            abort();
        }

    }

    void WaitUntilProducersWaitingAtLeast( unsigned int wait_for )
    {
        int e;

        e = pthread_mutex_lock( &atomic);

        if ( e != 0)
        {
            fprintf(stderr, "4 pthread_mutex_lock=%d\n", e);
            abort();
        }

        while( fullness < size || producers_waiting < wait_for )
        {
            pthread_cond_wait( &waiting, &atomic);
        }
        e = pthread_mutex_unlock( &atomic );

        if (e != 0)
        {
            fprintf(stderr, "4 pthread_mutex_unlock=%d\n", e);
            abort();
        }

    }
private:
    pthread_cond_t addition;
    pthread_cond_t removal;
    pthread_cond_t waiting;
    pthread_mutex_t atomic;
    volatile unsigned int fullness;
    volatile unsigned int read;
    volatile unsigned int write;
    volatile unsigned int consumers_waiting;
    volatile unsigned int producers_waiting;
    T buffer[size];
};
# 59 "seqencoder.cc" 2
# 75 "seqencoder.cc"
struct EncoderJob
{
    enum JobPattern { ENCODE_ORDER, INTERLEAVED };

    EncoderJob() : shutdown( false ),working(false) {}
    void (MacroBlock::*encodingFunc)();
    Picture *picture;
    JobPattern pattern;
    unsigned int stripe;
    bool shutdown;
    volatile bool working;
};

class ShutdownJob : public EncoderJob
{
public:
    ShutdownJob()
        {
            shutdown = true;
        }
};



class Despatcher
{
public:
    Despatcher();
    ~Despatcher();
    void Init( unsigned int parallelism );
    void Despatch( Picture &picture, void (MacroBlock::*encodingFunc)(),
                   EncoderJob::JobPattern pattern = EncoderJob::INTERLEAVED );
    void ParallelWorker();
    void WaitForCompletion();
private:
    static void *ParallelPerformWrapper(void *despatcher);

    unsigned int parallelism;

    Channel<EncoderJob *> jobstodo;
    vector<EncoderJob> jobpool;
    pthread_t *worker_threads;
};

Despatcher::Despatcher() :
    worker_threads(0)
{}

void Despatcher::Init( unsigned int _parallelism )

{
    parallelism = _parallelism;
    mjpeg_debug( "PAR = %d\n", parallelism );
    if( parallelism > 0 )
    {
        jobpool.resize(parallelism);
        pthread_attr_t *pattr = 0;
        EncoderJob job;






        pthread_attr_t attr;
        size_t stacksize;

        pthread_attr_init(&attr);
        pthread_attr_getstacksize(&attr, &stacksize);

        if (stacksize < 200000)
        {
            pthread_attr_setstacksize(&attr, 200000);
        }

        pattr = &attr;

        worker_threads = new pthread_t[parallelism];
        for( unsigned int i = 0; i < parallelism; ++i )
        {
            jobpool[i].working = false;
            jobpool[i].stripe = i;
            mjpeg_debug("Creating worker thread %d", i );
            if( pthread_create( &worker_threads[i], pattr,
                                &Despatcher::ParallelPerformWrapper,
                                this ) != 0 )
            {
                mjpeg_error_exit1( "worker thread creation failed: %s", strerror((*__errno_location ())) );
            }
        }
    }
}

Despatcher::~Despatcher()
{
    if( worker_threads != 0 )
    {
        WaitForCompletion();
        unsigned int i;
        ShutdownJob shutdownjob;

        for( i = 0; i < parallelism; ++i )
        {
            jobstodo.Put( &shutdownjob );
        }
        for( i = 0; i < parallelism; ++i )
        {
            pthread_join( worker_threads[i], __null );
        }
        delete [] worker_threads;
    }
}

void *Despatcher::ParallelPerformWrapper(void *despatcher)
{
    static_cast<Despatcher *>(despatcher)->ParallelWorker();
    return 0;
}

void Despatcher::ParallelWorker()
{
 EncoderJob *job;
 mjpeg_debug( "Worker thread started" );
    pthread_setcanceltype( PTHREAD_CANCEL_ASYNCHRONOUS, __null );

 for(;;)
 {

     mjpeg_debug( "Worker: getting" );

        jobstodo.Get( job );
        if( job->shutdown )
        {
            mjpeg_debug("SHUTDOWN worker" );
            pthread_exit( 0 );
        }
        mjpeg_debug( "Working: stripe %d/%d %d", job->stripe, parallelism, job->pattern );
        Picture *picture = job->picture;
        vector<MacroBlock>::iterator macroblocks_begin;
        vector<MacroBlock>::iterator macroblocks_end;
        switch( picture->pict_struct )
        {
            case FRAME_PICTURE :
                macroblocks_begin = picture->mbinfo.begin();
                macroblocks_end = picture->mbinfo.end();
                break;
            case TOP_FIELD :
                macroblocks_begin = picture->mbinfo.begin();
                macroblocks_end = picture->mbinfo.begin() + picture->mbinfo.size()/2;
                break;
            case BOTTOM_FIELD :
                macroblocks_begin = picture->mbinfo.begin() + picture->mbinfo.size()/2;
                macroblocks_end = picture->mbinfo.end();
                break;
        }

        int macroblocks = macroblocks_end-macroblocks_begin;

        vector<MacroBlock>::iterator stripe_begin;
        vector<MacroBlock>::iterator stripe_end;
        vector<MacroBlock>::iterator mbi;
        int stripe_step;

        switch( job->pattern )
        {
            case EncoderJob::ENCODE_ORDER :
                stripe_step = 1;
                stripe_begin = macroblocks_begin + job->stripe* macroblocks/parallelism;
                stripe_end = macroblocks_begin + (job->stripe+1)* macroblocks/parallelism;
                break;
            default :
            case EncoderJob::INTERLEAVED :
                stripe_step = parallelism;
                stripe_begin = macroblocks_begin+job->stripe;
                stripe_end = macroblocks_end;
                break;
        }

        for( mbi = stripe_begin; mbi < stripe_end; mbi += stripe_step )
        {
            (*mbi.*job->encodingFunc)();
        }
        mjpeg_debug( "Worker: stripe %d done", job->stripe );
        job->working = false;
    }
}

void Despatcher::Despatch( Picture &picture,
                            void (MacroBlock::*encodingFunc)(),
                            EncoderJob::JobPattern pattern
                         )
{
    if( parallelism > 0 )
    {
        for( unsigned int stripe = 0; stripe < parallelism; ++stripe )
        {
            EncoderJob *job = &jobpool[stripe];

            while( job->working )
            {
                jobstodo.WaitForNewConsumers();
            }

            job->working = true;
            job->pattern = pattern;
            job->encodingFunc = encodingFunc;
            job->picture = &picture;
            jobstodo.Put( job );
        }
    }
    else
    {
        vector<MacroBlock>::iterator mbi;
        for( mbi = picture.mbinfo.begin(); mbi < picture.mbinfo.end(); ++mbi )
        {
            (*mbi.*encodingFunc)();
        }
    }
}

void Despatcher::WaitForCompletion()
{





    if( parallelism > 0 )
    {
        jobstodo.WaitUntilConsumersWaitingAtLeast( parallelism );
    }
}
# 319 "seqencoder.cc"
SeqEncoder::SeqEncoder( EncoderParams &_encparams,
                        PictureReader &_reader,
                        Quantizer &_quantizer,
                        ElemStrmWriter &_writer,
                        Pass1RateCtl &_p1ratectl,
                        Pass2RateCtl &_p2ratectl
                       ) :
    encparams( _encparams ),
    reader( _reader ),
    quantizer( _quantizer ),
    writer( _writer ),
    pass1ratectl( _p1ratectl ),
    pass2ratectl( _p2ratectl ),
    p1_despatcher( *new Despatcher ),
    pass1_rcstate( pass1ratectl.NewState() ),
    pass1_ss( _encparams, _reader )
{
}

SeqEncoder::~SeqEncoder()
{
    delete &p1_despatcher;
}
# 350 "seqencoder.cc"
void SeqEncoder::Init()
{




    p1_despatcher.Init( encparams.encoding_parallelism );

    pass1ratectl.Init();
    pass2ratectl.Init();
    pass1_ss.Init( );
    old_ref_picture = 0;




    new_ref_picture = GetFreshPicture();
    free_pictures.push_back( new_ref_picture );

    released_ref_frames = 0;
}
# 385 "seqencoder.cc"
void SeqEncoder::EncodePicture( Picture &picture,
                                RateCtl &ratecontrol)
{
    mjpeg_debug("Start  %d %c(%s) %d %d",
                picture.decode,
                pict_type_char[picture.pict_type],
                picture.pict_struct == FRAME_PICTURE
                ? "prg"
                : ( (picture.pict_struct == TOP_FIELD) ? "top" : "bot"),
                picture.temp_ref,
                picture.present);

    p1_despatcher.Despatch( picture, &MacroBlock::Encode );
    p1_despatcher.WaitForCompletion();

    int padding_needed;
    picture.PutHeaders();

    picture.QuantiseAndCode(ratecontrol);
    ratecontrol.PictUpdate( picture, padding_needed);
    picture.PutTrailers(padding_needed);

    picture.Reconstruct();

}
# 424 "seqencoder.cc"
void SeqEncoder::RetainPicture( Picture &picture, RateCtl &ratecontrol)
{
    mjpeg_debug("Retain %d %c(%s) %d %d",
                picture.decode,
                pict_type_char[picture.pict_type],
                picture.pict_struct == FRAME_PICTURE
                ? "prg"
                : ( (picture.pict_struct == TOP_FIELD) ? "top" : "bot"),
                picture.temp_ref,
                picture.present);


      int dummy;
      pass2ratectl.PictUpdate( picture, dummy );
}

void SeqEncoder::EncodeStreamOneStep()
{



 if( !pass1_ss.EndOfStream() )
 {
  Pass1Process();




  pass1_ss.Next( BitsAfterMux() );
 }

 if( pass2queue.size() > 0 )
 {
  Pass2Process();
 }
}

bool SeqEncoder::EncodeStreamWhile()
{
 return (pass1coded.size() > 0 || pass2queue.size() > 0);
}
# 496 "seqencoder.cc"
void SeqEncoder::EncodeStream()
{




    do
    {
     EncodeStreamOneStep();
    } while( EncodeStreamWhile() );

    StreamEnd();
}


Picture *SeqEncoder::GetFreshPicture()
{
    Picture *fresh;
    if( free_pictures.size() == 0 )
        fresh = new Picture(encparams, writer , quantizer);
    else
    {
        fresh = free_pictures.back();
        free_pictures.pop_back();
    }
    return fresh;
}


void SeqEncoder::ReleasePicture( Picture *picture )
{







    if( picture->FinalFieldOfRefFrame() )
    {
        ++released_ref_frames;
        released_pictures.push_back( picture );
        if( released_ref_frames > 2 )
        {
            Picture *nolonger_refd;
            do
            {
                nolonger_refd = released_pictures.front();
                released_pictures.pop_front();
                if( nolonger_refd->finalfield )
                    reader.ReleaseFrame( nolonger_refd->present );
                free_pictures.push_back( nolonger_refd );
            }
            while( !nolonger_refd->FinalFieldOfRefFrame() );
        }
    }
    else
    {
        released_pictures.push_back( picture );
    }
}
# 566 "seqencoder.cc"
void SeqEncoder::Pass1EncodePicture(Picture &picture, int field)
{


    pass1_rcstate->Set( pass1ratectl.GetState() );


    picture.SetFrameParams( pass1_ss, field );


    picture.MotionSubSampledLum();

    p1_despatcher.Despatch( picture, &MacroBlock::MotionEstimateAndModeSelect );
    p1_despatcher.WaitForCompletion();



    if( pass1_ss.g_idx == 0 )
      pass1ratectl.GopSetup( pass1_ss.np, pass1_ss.nb );


    pass1ratectl.PictSetup(picture);


    EncodePicture( picture, pass1ratectl);


    mjpeg_info("Enc1  %5d %5d(%2d) %c q=%3.2f %s [%.0f%% Intra]",
               picture.decode,
               picture.present,
               picture.temp_ref,
               pict_type_char[pass1_ss.frame_type],
               picture.ABQ,
               picture.pad ? "PAD" : "   ",
               picture.IntraCodedBlocks() * 100.0
        );

}
# 613 "seqencoder.cc"
void SeqEncoder::Pass1ReEncodePicture0(Picture &picture, void (MacroBlock::*modeMotionAdjustFunc)())
{

    picture.DiscardCoding();


    pass1ratectl.SetState( pass1_rcstate->Get() );


    picture.SetFrameParams( pass1_ss, 0 );






    p1_despatcher.Despatch( picture, modeMotionAdjustFunc );
    p1_despatcher.WaitForCompletion();



    if( pass1_ss.g_idx == 0 )
      pass1ratectl.GopSetup( pass1_ss.np, pass1_ss.nb );


    pass1ratectl.PictSetup(picture);



    EncodePicture( picture, pass1ratectl);
    mjpeg_info("Renc1 %5d %5d(%2d) %c q=%3.2f %s",
               picture.decode,
               picture.present,
               picture.temp_ref,
               pict_type_char[pass1_ss.frame_type],
               picture.AQ,
               picture.pad ? "PAD" : "   ");

}



Picture *SeqEncoder::NextFramePicture0()
{

    Picture *frame_pic;

    if ( pass1_ss.b_idx == 0 )
    {
        old_ref_picture = new_ref_picture;
        new_ref_picture = frame_pic = GetFreshPicture();
        frame_pic->fwd_org = old_ref_picture->org_img;
        frame_pic->fwd_rec = old_ref_picture->rec_img;
        frame_pic->fwd_ref_frame = old_ref_picture;
        frame_pic->bwd_ref_frame = 0;
    }
    else
    {
        frame_pic = GetFreshPicture();
        frame_pic->fwd_org = old_ref_picture->org_img;
        frame_pic->fwd_rec = old_ref_picture->rec_img;
        frame_pic->bwd_org = new_ref_picture->org_img;
        frame_pic->bwd_rec = new_ref_picture->rec_img;
        frame_pic->fwd_ref_frame = old_ref_picture;
        frame_pic->bwd_ref_frame = new_ref_picture;
    }


    frame_pic->org_img = reader.ReadFrame( pass1_ss.PresentationNum() );
    return frame_pic;
}

Picture *SeqEncoder::NextFramePicture1(Picture *frame_pic0)
{
  Picture *frame_pic1;
  frame_pic1 = GetFreshPicture();
  frame_pic1->fwd_org = frame_pic0->fwd_org;
  frame_pic1->fwd_rec = frame_pic0->fwd_rec;
  frame_pic1->bwd_org = frame_pic0->bwd_org;
  frame_pic1->bwd_rec = frame_pic0->bwd_rec;
  frame_pic1->fwd_ref_frame = frame_pic0->fwd_ref_frame;
  frame_pic1->bwd_ref_frame = frame_pic0->bwd_ref_frame;
  frame_pic1->org_img = frame_pic0->org_img;
  return frame_pic1;
}

void SeqEncoder::Pass1GopSplitting( Picture &picture)
{

    ((! picture.secondfield) ? static_cast<void> (0) : __assert_fail ("! picture.secondfield", "seqencoder.cc", 702, __PRETTY_FUNCTION__));

    if( pass1_ss.b_idx ==0 && picture.IntraCodedBlocks() > 0.6 && pass1_ss.CanSplitHere() )
    {

        int old_present = picture.present;
        if( (!pass1_ss.NextGopClosed() || pass1_ss.BGroupLength() == 1) )
        {
            mjpeg_debug( "GOP split point found here... %d %d %.0f%% intra coded",
                        pass1_ss.NextGopClosed(), pass1_ss.BGroupLength(),
                        picture.IntraCodedBlocks() * 100.0 );
            pass1_ss.ForceIFrame();
            ((picture.present == old_present) ? static_cast<void> (0) : __assert_fail ("picture.present == old_present", "seqencoder.cc", 714, __PRETTY_FUNCTION__));
            Pass1ReEncodePicture0( picture, &MacroBlock::ForceIFrame );
        }
        else if( encparams.M_min == 1 )
        {





            mjpeg_debug( "GOP split forces P-frames only... %.0f%% intra coded",
                        picture.IntraCodedBlocks() * 100.0 );
            pass1_ss.SuppressBFrames();
            picture.org_img = reader.ReadFrame( pass1_ss.PresentationNum() );
            Pass1ReEncodePicture0( picture, &MacroBlock::MotionEstimateAndModeSelect );
        }
    }
}
# 751 "seqencoder.cc"
void SeqEncoder::Pass1Process()
{
    Picture *frame_pic[2], *last_pic;
    frame_pic[0] = NextFramePicture0();
    Pass1EncodePicture( *frame_pic[0], 0 );
    Pass1GopSplitting( *frame_pic[0] );
    pass1coded.push_back( frame_pic[0] );

    if( encparams.fieldpic )
    {
      frame_pic[1] = NextFramePicture1( frame_pic[0] );
      Pass1EncodePicture( *frame_pic[1], 1 );
      pass1coded.push_back( frame_pic[1] );
      last_pic = frame_pic[1];
    }
    else
    {
      last_pic = frame_pic[0];
    }



    unsigned int to_queue = 0;
    unsigned int i;

    if( last_pic->end_seq )
    {
        mjpeg_info( "Sequence end reached");

        to_queue = pass1coded.size();
    }
    else if( pass1_ss.b_idx == 0 )
    {


        for( i = 0; i < pass1coded.size(); ++i )
        {
            if( pass1coded[i] == old_ref_picture)
                break;
        }
        to_queue = i == pass1coded.size() ? 0 : i;
    }


    for( i = 0; i < to_queue; ++i )
    {
        pass2queue.push_back( pass1coded.front() );
        pass1coded.pop_front();
    }

}
# 811 "seqencoder.cc"
uint64_t SeqEncoder::BitsAfterMux() const
{
    double frame_periods;
    uint64_t bits_after_mux;
    if( encparams.pulldown_32 )
        frame_periods = (double)pass1_ss.DecodeNum()*(5.0/4.0);
    else
        frame_periods = (double)pass1_ss.DecodeNum();






    if( encparams.quant_floor > 0.0 )
        bits_after_mux =
            writer.BitCount() + (uint64_t)((frame_periods / encparams.frame_rate) * encparams.nonvid_bit_rate);
    else
        bits_after_mux =
            (uint64_t)((frame_periods / encparams.frame_rate) * (encparams.nonvid_bit_rate + encparams.bit_rate));
    return bits_after_mux;
}
# 841 "seqencoder.cc"
bool SeqEncoder::Pass2EncodePicture(Picture &picture, bool force_reencode)
{

    pass2ratectl.PictSetup(picture);
    bool reencode = pass2ratectl.ReencodeRequired() || force_reencode;
    if( reencode )
    {

      picture.DiscardCoding();




      EncodePicture( picture, pass2ratectl);
    }
    else
    {
      RetainPicture( picture, pass2ratectl );
    }

    mjpeg_info("Pass2 %5d %5d(%2d) %c q=%3.2f %s",
               picture.decode,
               picture.present,
               picture.temp_ref,
               pict_type_char[picture.pict_type],
               picture.ABQ,
               reencode ? "RECODED" : "RETAINED" );
    return reencode;
}
# 887 "seqencoder.cc"
void SeqEncoder::Pass2Process()
{


    deque<Picture *>::iterator i = pass2queue.begin()+1;
    while( i < pass2queue.end() )
    {
        if( (*i)->pict_type == I_TYPE )
            break;
        ++i;
    }



    if( i == pass2queue.end() && !pass2queue.back()->end_seq)
    {
            return;
    }






    pass2ratectl.GopSetup( pass2queue.begin(), i );
    bool reference_reencoded = false;
    int gop_size = i-pass2queue.begin();
    for( int p =0; p < gop_size; ++p )
    {
        Picture *pic = pass2queue.front();
        bool reencoded = Pass2EncodePicture( *pic, reference_reencoded );
        reference_reencoded |= reencoded && pic->pict_type != B_TYPE;
        pic->CommitCoding();

        ReleasePicture( pic );
        pass2queue.pop_front();
    }
}

void SeqEncoder::StreamEnd()
{
    uint64_t bits_after_mux = BitsAfterMux();
    mjpeg_info( "Parameters for 2nd pass (stream frames, stream frames): -L %u -Z %.0f",
           pass2ratectl.getEncodedFrames(), pass2ratectl.getStreamComplexity() );
    mjpeg_info( "Guesstimated final muxed size = %lld\n", bits_after_mux/8 );

    unsigned int i;
    for( i = 0; i < free_pictures.size(); ++i )
    {
        delete free_pictures[i];
    }
    for( i = 0; i < released_pictures.size(); ++i )
    {
        delete released_pictures[i];
    }
}
