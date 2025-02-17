/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define to 1 to allow running VLC as root (uid 0). */
/* #undef ALLOW_RUN_AS_ROOT */

/* Define to 1 if 3D Now! inline assembly is available. */
#define CAN_COMPILE_3DNOW 1

/* Define to 1 if AltiVec inline assembly is available. */
/* #undef CAN_COMPILE_ALTIVEC */

/* Define to 1 if AVX inline assembly is available. */
/* #undef CAN_COMPILE_AVX */

/* Define to 1 if AVX2 inline assembly is available. */
/* #undef CAN_COMPILE_AVX2 */

/* Define to 1 if C AltiVec extensions are available. */
/* #undef CAN_COMPILE_C_ALTIVEC */

/* Define to 1 inline MMX assembly is available. */
#define CAN_COMPILE_MMX 1

/* Define to 1 if MMX EXT inline assembly is available. */
#define CAN_COMPILE_MMXEXT 1

/* Define to 1 if SSE inline assembly is available. */
#define CAN_COMPILE_SSE 1

/* Define to 1 if SSE2 inline assembly is available. */
#define CAN_COMPILE_SSE2 1

/* Define to 1 if SSE3 inline assembly is available. */
#define CAN_COMPILE_SSE3 1

/* Define to 1 if SSE4A inline assembly is available. */
#define CAN_COMPILE_SSE4A 1

/* Define to 1 if SSE4_1 inline assembly is available. */
#define CAN_COMPILE_SSE4_1 1

/* Define to 1 if SSE4_2 inline assembly is available. */
#define CAN_COMPILE_SSE4_2 1

/* Define to 1 if SSSE3 inline assembly is available. */
#define CAN_COMPILE_SSSE3 1

/* The ./configure command line */
#define CONFIGURE_LINE "../extras/package/macosx/../../../configure  '--prefix=/Users/nlandsberg/vlc/build/vlc_install_dir' '--enable-macosx' '--enable-merge-ffmpeg' '--enable-osx-notifications' '--enable-faad' '--enable-flac' '--enable-theora' '--enable-shout' '--enable-ncurses' '--enable-twolame' '--enable-libass' '--enable-macosx-avfoundation' '--disable-skins2' '--disable-xcb' '--disable-caca' '--disable-pulse' '--disable-sdl-image' '--disable-vnc' '--with-macosx-version-min=10.11' '--enable-debug' '--host=x86_64-apple-darwin15' 'host_alias=x86_64-apple-darwin15' 'CFLAGS=' 'LDFLAGS='"

/* Copyright string */
#define COPYRIGHT_MESSAGE "Copyright © 1996-2019 the VideoLAN team"

/* The copyright years */
#define COPYRIGHT_YEARS "1996-2019"

/* Default font family */
/* #undef DEFAULT_FAMILY */

/* Default font */
/* #undef DEFAULT_FONT_FILE */

/* Default monospace font family */
/* #undef DEFAULT_MONOSPACE_FAMILY */

/* Default monospace font */
/* #undef DEFAULT_MONOSPACE_FONT_FILE */

/* Binary specific version */
/* #undef DISTRO_VERSION */

/* Define if you want the addons manager modules */
#define ENABLE_ADDONMANAGERMODULES 1

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
#define ENABLE_NLS 1

/* Define to 1 for stream output support. */
#define ENABLE_SOUT 1

/* Define if you want the VideoLAN manager support */
#define ENABLE_VLM 1

/* Enable compile-time and run-time bounds-checking, and some warnings,
   without upsetting glibc 2.15+ or toolchains predefining _FORTIFY_SOURCE */
#if !defined _FORTIFY_SOURCE && defined __OPTIMIZE__ && __OPTIMIZE__
# define _FORTIFY_SOURCE 2
#endif

/* Define to 1 if you have the <a52dec/a52.h> header file. */
#define HAVE_A52DEC_A52_H 1

/* Define to 1 if you have the `accept4' function. */
/* #undef HAVE_ACCEPT4 */

/* Define to 1 if you have the `aligned_alloc' function. */
/* #undef HAVE_ALIGNED_ALLOC */

/* Define to 1 if you have the <altivec.h> header file. */
/* #undef HAVE_ALTIVEC_H */

/* Define to 1 if you have the <ApplicationServices/ApplicationServices.h>
   header file. */
#define HAVE_APPLICATIONSERVICES_APPLICATIONSERVICES_H 1

/* Define if libaribb24 is available. */
#define HAVE_ARIBB24 1

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have asprintf function */
#define HAVE_ASPRINTF 1

/* Define to 1 if you have the `atof' function. */
#define HAVE_ATOF 1

/* Define to 1 if you have the `atoll' function. */
#define HAVE_ATOLL 1

/* Support for __attribute__((packed)) for structs */
#define HAVE_ATTRIBUTE_PACKED 1

/* Define to 1 if you have the <AudioToolbox/AudioToolbox.h> header file. */
#define HAVE_AUDIOTOOLBOX_AUDIOTOOLBOX_H 1

/* Define if the d3d11va module is built */
/* #undef HAVE_AVCODEC_D3D11VA */

/* Define to 1 if AVX2 intrinsics are available. */
#define HAVE_AVX2_INTRINSICS 1

/* Define to 1 if you have the `backtrace' function. */
#define HAVE_BACKTRACE 1

/* Defined to 1 if the qsort_r() prototype contradicts the upcoming POSIX
   standard. */
#define HAVE_BROKEN_QSORT_R 1

/* Define to 1 if you have the Mac OS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
#define HAVE_CFLOCALECOPYCURRENT 1

/* Define to 1 if you have the Mac OS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
#define HAVE_CFPREFERENCESCOPYAPPVALUE 1

/* Define if CSS engine is built */
#define HAVE_CSS 1

/* define if the compiler supports basic C++14 syntax */
/* #undef HAVE_CXX14 */

/* Define to 1 if C++ headers define locale_t */
#define HAVE_CXX_LOCALE_T 1

/* Define to 1 if you have the <d3d11.h> header file. */
/* #undef HAVE_D3D11_H */

/* Define to 1 if you have the <d3d9.h> header file. */
/* #undef HAVE_D3D9_H */

/* Define to 1 if you have the <d3dx9effect.h> header file. */
/* #undef HAVE_D3DX9EFFECT_H */

/* Define to 1 if you have the `daemon' function. */
#define HAVE_DAEMON 1

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
#define HAVE_DCGETTEXT 1

/* Define to 1 if you have the <DeckLinkAPIDispatch.cpp> header file. */
/* #undef HAVE_DECKLINKAPIDISPATCH_CPP */

/* Define to 1 if you have the `dirfd' function. */
#define HAVE_DIRFD 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <dxgi1_6.h> header file. */
/* #undef HAVE_DXGI1_6_H */

/* Define to 1 if you have the <dxgidebug.h> header file. */
/* #undef HAVE_DXGIDEBUG_H */

/* Define to 1 if you have the <dxva2api.h> header file. */
/* #undef HAVE_DXVA2API_H */

/* Define to 1 if you have the `eventfd' function. */
/* #undef HAVE_EVENTFD */

/* Define to 1 if you have the <execinfo.h> header file. */
#define HAVE_EXECINFO_H 1

/* Define to 1 if you have the `fcntl' function. */
#define HAVE_FCNTL 1

/* Define to 1 if you have the `fdopendir' function. */
#define HAVE_FDOPENDIR 1

/* Define to 1 if you have the <features.h> header file. */
/* #undef HAVE_FEATURES_H */

/* Define to 1 if you have the <ffnvcodec/dynlink_loader.h> header file. */
/* #undef HAVE_FFNVCODEC_DYNLINK_LOADER_H */

/* Define to 1 if you have the `flock' function. */
#define HAVE_FLOCK 1

/* Define to 1 if you have the `flockfile' function. */
#define HAVE_FLOCKFILE 1

/* Define to 1 if you have the <fluidlite.h> header file. */
#define HAVE_FLUIDLITE_H 1

/* Define to 1 if you have the `fork' function. */
#define HAVE_FORK 1

/* Define to 1 if you have the `fstatat' function. */
#define HAVE_FSTATAT 1

/* Define to 1 if you have the `fstatvfs' function. */
#define HAVE_FSTATVFS 1

/* Define to 1 if you have the `fsync' function. */
#define HAVE_FSYNC 1

/* Defined if having gcrypt */
#define HAVE_GCRYPT 1

/* Define to 1 if you have the `getdelim' function. */
#define HAVE_GETDELIM 1

/* Define to 1 if you have the `getenv' function. */
#define HAVE_GETENV 1

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the `getpid' function. */
#define HAVE_GETPID 1

/* Define to 1 if you have the `getpwuid_r' function. */
#define HAVE_GETPWUID_R 1

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Defined if having OpenGL */
/* #undef HAVE_GL */

/* Define to 1 if you have the <GL/glew.h> header file. */
/* #undef HAVE_GL_GLEW_H */

/* Define to 1 if you have the <GL/wglew.h> header file. */
/* #undef HAVE_GL_WGLEW_H */

/* Define to 1 if you have gmtime_r function */
#define HAVE_GMTIME_R 1

/* Define if you have the iconv() function and it works. */
#define HAVE_ICONV 1

/* Define to 1 if the system has the type `ID3D11VideoDecoder'. */
/* #undef HAVE_ID3D11VIDEODECODER */

/* Define to 1 if you have GNU libidn. */
/* #undef HAVE_IDN */

/* Define to 1 if you have the `if_nameindex' function. */
#define HAVE_IF_NAMEINDEX 1

/* Define to 1 if you have the `if_nametoindex' function. */
/* #undef HAVE_IF_NAMETOINDEX */

/* Define to 1 if you have inet_pton function */
#define HAVE_INET_PTON 1

/* Define to 1 if you have the <interface/mmal/mmal.h> header file. */
/* #undef HAVE_INTERFACE_MMAL_MMAL_H */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* For FreeBSD VCD support */
/* #undef HAVE_IOC_TOC_HEADER_IN_SYS_CDIO_H */

/* Define to 1 if you have the `isatty' function. */
#define HAVE_ISATTY 1

/* Define to 1 if the system has the type `ISpObjectToken'. */
/* #undef HAVE_ISPOBJECTTOKEN */

/* Define to 1 if you have the <jpeglib.h> header file. */
#define HAVE_JPEGLIB_H 1

/* Define to 1 if you have the <kai.h> header file. */
/* #undef HAVE_KAI_H */

/* Define to 1 if you have the <kva.h> header file. */
/* #undef HAVE_KVA_H */

/* Define to 1 if you have the <lauxlib.h> header file. */
#define HAVE_LAUXLIB_H 1

/* Define to 1 if you have the `lfind' function. */
#define HAVE_LFIND 1

/* Define to 1 if you have the anl library */
/* #undef HAVE_LIBANL */

/* Define to 1 if you have the <libavcodec/avcodec.h> header file. */
#define HAVE_LIBAVCODEC_AVCODEC_H 1

/* Define to 1 if you have the <libavcodec/d3d11va.h> header file. */
/* #undef HAVE_LIBAVCODEC_D3D11VA_H */

/* Define to 1 if you have the <libavcodec/dxva2.h> header file. */
/* #undef HAVE_LIBAVCODEC_DXVA2_H */

/* Define to 1 if you have the <libavcodec/vaapi.h> header file. */
/* #undef HAVE_LIBAVCODEC_VAAPI_H */

/* Define to 1 if you have the <libavformat/avformat.h> header file. */
#define HAVE_LIBAVFORMAT_AVFORMAT_H 1

/* Define to 1 if you have the <libavformat/avio.h> header file. */
#define HAVE_LIBAVFORMAT_AVIO_H 1

/* Define to 1 if you have the <libavutil/avutil.h> header file. */
#define HAVE_LIBAVUTIL_AVUTIL_H 1

/* Define to 1 if you have the <libbpg.h> header file. */
/* #undef HAVE_LIBBPG_H */

/* Define this if you have libcddb installed */
#define HAVE_LIBCDDB 1

/* Define to 1 if you have the <libcrystalhd/bc_drv_if.h> header file. */
/* #undef HAVE_LIBCRYSTALHD_BC_DRV_IF_H */

/* Define to 1 if you have the <libcrystalhd/bc_dts_defs.h> header file. */
/* #undef HAVE_LIBCRYSTALHD_BC_DTS_DEFS_H */

/* Define to 1 if you have the `mingw32' library (-lmingw32). */
/* #undef HAVE_LIBMINGW32 */

/* Define to 1 if libplacebo is enabled. */
/* #undef HAVE_LIBPLACEBO */

/* Define to 1 if you have the <libswscale/swscale.h> header file. */
#define HAVE_LIBSWSCALE_SWSCALE_H 1

/* Define to 1 if you have the <libtar.h> header file. */
/* #undef HAVE_LIBTAR_H */

/* Define to 1 if you have the libvorbis */
#define HAVE_LIBVORBIS 1

/* Define to 1 if you have the <linux/dccp.h> header file. */
/* #undef HAVE_LINUX_DCCP_H */

/* Define to 1 if you have the <linux/magic.h> header file. */
/* #undef HAVE_LINUX_MAGIC_H */

/* Define to 1 if you have the <linux/videodev2.h> header file. */
/* #undef HAVE_LINUX_VIDEODEV2_H */

/* Define to 1 if you have the `lldiv' function. */
#define HAVE_LLDIV 1

/* Define to 1 if you have localtime_r function */
#define HAVE_LOCALTIME_R 1

/* Define to 1 if you have the lrintf function */
#define HAVE_LRINTF 1

/* Define to 1 if you have the <lualib.h> header file. */
#define HAVE_LUALIB_H 1

/* Define to 1 if you have the <lua.h> header file. */
#define HAVE_LUA_H 1

/* Define to 1 if you have the <mad.h> header file. */
#define HAVE_MAD_H 1

/* Define to 1 if the system has the type `max_align_t'. */
#define HAVE_MAX_ALIGN_T 1

/* Define to 1 if you have the `memalign' function. */
/* #undef HAVE_MEMALIGN */

/* Define to 1 if you have the `memfd_create' function. */
/* #undef HAVE_MEMFD_CREATE */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memrchr' function. */
/* #undef HAVE_MEMRCHR */

/* Define to 1 if you have the `mkostemp' function. */
#define HAVE_MKOSTEMP 1

/* Define to 1 if you have the `mmap' function. */
#define HAVE_MMAP 1

/* Define to 1 if MMX intrinsics are available. */
#define HAVE_MMX_INTRINSICS 1

/* Define to 1 if you have the <mntent.h> header file. */
/* #undef HAVE_MNTENT_H */

/* Define to 1 if you have the <mpcdec/mpcdec.h> header file. */
/* #undef HAVE_MPCDEC_MPCDEC_H */

/* Define to 1 if you have the NANF function */
#define HAVE_NANF 1

/* Define to 1 if you have the <neaacdec.h> header file. */
#define HAVE_NEAACDEC_H 1

/* Define to 1 if you have the <netinet/tcp.h> header file. */
#define HAVE_NETINET_TCP_H 1

/* Define to 1 if you have the <netinet/udplite.h> header file. */
/* #undef HAVE_NETINET_UDPLITE_H */

/* Define to 1 if you have the <net/if.h> header file. */
#define HAVE_NET_IF_H 1

/* Define to 1 if you have the `newlocale' function. */
#define HAVE_NEWLOCALE 1

/* Define to 1 if you have the `nrand48' function. */
#define HAVE_NRAND48 1

/* Define to 1 if you have the `open_memstream' function. */
#define HAVE_OPEN_MEMSTREAM 1

/* Define to 1 if you have the `pathconf' function. */
#define HAVE_PATHCONF 1

/* Define to 1 if you have the `pipe2' function. */
/* #undef HAVE_PIPE2 */

/* Define to 1 if you have the <png.h> header file. */
#define HAVE_PNG_H 1

/* Define to 1 if you have the `poll' function. */
#define HAVE_POLL 1

/* Define to 1 if you have the `posix_fadvise' function. */
/* #undef HAVE_POSIX_FADVISE */

/* Define to 1 if you have the `posix_madvise' function. */
#define HAVE_POSIX_MADVISE 1

/* Define to 1 if you have the `posix_memalign' function. */
#define HAVE_POSIX_MEMALIGN 1

/* Define to 1 if you have the <postproc/postprocess.h> header file. */
/* #undef HAVE_POSTPROC_POSTPROCESS_H */

/* Define to 1 if you have the `pread' function. */
#define HAVE_PREAD 1

/* Define to 1 if the system has the type
   `PROCESS_MITIGATION_IMAGE_LOAD_POLICY'. */
/* #undef HAVE_PROCESS_MITIGATION_IMAGE_LOAD_POLICY */

/* Define to 1 if using libprojectM 2.x */
/* #undef HAVE_PROJECTM2 */

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Define to 1 if you have realpath function */
#define HAVE_REALPATH 1

/* Define to 1 if you have the `recvmmsg' function. */
/* #undef HAVE_RECVMMSG */

/* Define to 1 if you have the `recvmsg' function. */
#define HAVE_RECVMSG 1

/* Define to 1 if you have the `rewind' function. */
#define HAVE_REWIND 1

/* Define to 1 if you have the `sched_getaffinity' function. */
/* #undef HAVE_SCHED_GETAFFINITY */

/* For NetBSD VCD support */
/* #undef HAVE_SCSIREQ_IN_SYS_SCSIIO_H */

/* Define to 1 if you have the <search.h> header file. */
#define HAVE_SEARCH_H 1

/* Define to 1 if you have the `sendmsg' function. */
#define HAVE_SENDMSG 1

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the `setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the sincos function. */
/* #undef HAVE_SINCOS */

/* Define to 1 if you have the <SLES/OpenSLES.h> header file. */
/* #undef HAVE_SLES_OPENSLES_H */

/* Define to 1 if you have the <soundcard.h> header file. */
/* #undef HAVE_SOUNDCARD_H */

/* Define to 1 if sparkle is enabled. */
#define HAVE_SPARKLE 1

/* Define to 1 if SSE2 intrinsics are available. */
#define HAVE_SSE2_INTRINSICS 1

/* Define to 1 if <assert.h> defines static_assert. */
#define HAVE_STATIC_ASSERT 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strcasestr' function. */
#define HAVE_STRCASESTR 1

/* Define to 1 if you have the `strcoll' function and it is properly defined.
   */
#define HAVE_STRCOLL 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `stricmp' function. */
/* #undef HAVE_STRICMP */

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcpy' function. */
#define HAVE_STRLCPY 1

/* Define to 1 if you have the `strndup' function. */
#define HAVE_STRNDUP 1

/* Define to 1 if you have the `strnicmp' function. */
/* #undef HAVE_STRNICMP */

/* Define to 1 if you have the `strnlen' function. */
#define HAVE_STRNLEN 1

/* Define to 1 if you have the `strnstr' function. */
#define HAVE_STRNSTR 1

/* Define to 1 if you have the `strptime' function. */
#define HAVE_STRPTIME 1

/* Define to 1 if you have the `strsep' function. */
#define HAVE_STRSEP 1

/* Define to 1 if you have the `strtof' function. */
#define HAVE_STRTOF 1

/* Define to 1 if you have the `strtok_r' function. */
#define HAVE_STRTOK_R 1

/* Define to 1 if you have the `strtoll' function. */
#define HAVE_STRTOLL 1

/* Define to 1 if the system has the type `struct if_nameindex'. */
#define HAVE_STRUCT_IF_NAMEINDEX 1

/* Define to 1 if the system has the type `struct pollfd'. */
#define HAVE_STRUCT_POLLFD 1

/* Define to 1 if the system has the type `struct timespec'. */
#define HAVE_STRUCT_TIMESPEC 1

/* Define to 1 if you have the `strverscmp' function. */
/* #undef HAVE_STRVERSCMP */

/* Define to 1 if you have the `swab' function. */
#define HAVE_SWAB 1

/* Define to 1 if you have the <sys/eventfd.h> header file. */
/* #undef HAVE_SYS_EVENTFD_H */

/* Define to 1 if you have the <sys/mount.h> header file. */
#define HAVE_SYS_MOUNT_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/shm.h> header file. */
#define HAVE_SYS_SHM_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/soundcard.h> header file. */
/* #undef HAVE_SYS_SOUNDCARD_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#define HAVE_SYS_UIO_H 1

/* Define to 1 if you have the `tdestroy' function. */
/* #undef HAVE_TDESTROY */

/* Define to 1 if you have the `tfind' function. */
#define HAVE_TFIND 1

/* Define to 1 if you have the <threads.h> header file. */
/* #undef HAVE_THREADS_H */

/* Defined to 1 if C11 _Thread_local storage qualifier is supported */
#define HAVE_THREAD_LOCAL 1

/* Define if libtiger is available. */
/* #undef HAVE_TIGER */

/* Define to 1 if you have the `timegm' function. */
#define HAVE_TIMEGM 1

/* Define to 1 if you have the `timespec_get' function. */
/* #undef HAVE_TIMESPEC_GET */

/* Define to 1 if you have the <tremor/ivorbiscodec.h> header file. */
/* #undef HAVE_TREMOR_IVORBISCODEC_H */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `uselocale' function. */
#define HAVE_USELOCALE 1

/* Define to 1 if you have the <valgrind/valgrind.h> header file. */
/* #undef HAVE_VALGRIND_VALGRIND_H */

/* Define to 1 if you have vasprintf function */
#define HAVE_VASPRINTF 1

/* Define to 1 if you have the <VideoToolbox/VideoToolbox.h> header file. */
#define HAVE_VIDEOTOOLBOX_VIDEOTOOLBOX_H 1

/* Define to 1 if you have the `vmsplice' function. */
/* #undef HAVE_VMSPLICE */

/* Define to 1 if vulkan is enabled. */
/* #undef HAVE_VULKAN */

/* Define to 1 if you have the <X11/Xlib.h> header file. */
/* #undef HAVE_X11_XLIB_H */

/* Use external asm on x86. */
#define HAVE_X86ASM 1

/* Define to 1 if you have the <xlocale.h> header file. */
#define HAVE_XLOCALE_H 1

/* Define to 1 if you have the <zlib.h> header file. */
#define HAVE_ZLIB_H 1

/* Define to 1 if you have the `_lock_file' function. */
/* #undef HAVE__LOCK_FILE */

/* Define as const if the declaration of iconv() needs const. */
#define ICONV_CONST 

/* Dynamic object extension */
#define LIBEXT ".dylib"

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Define to 1 if debug code should NOT be compiled */
/* #undef NDEBUG */

/* Define if you want to optimize memory usage over performance */
/* #undef OPTIMIZE_MEMORY */

/* Name of package */
#define PACKAGE "vlc"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "vlc"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "vlc 4.0.0-dev"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "vlc"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "4.0.0-dev"

/* version development string */
#define PACKAGE_VERSION_DEV "dev"

/* version extra number */
#define PACKAGE_VERSION_EXTRA 0

/* version major number */
#define PACKAGE_VERSION_MAJOR 4

/* version minor number */
#define PACKAGE_VERSION_MINOR 0

/* version revision number */
#define PACKAGE_VERSION_REVISION 0

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 for Unicode (Wide Chars) APIs. */
/* #undef UNICODE */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Version number of package */
#define VERSION "4.0.0-dev"

/* Simple version string */
#define VERSION_MESSAGE "4.0.0-dev Otto Chriek"

/* compiler */
#define VLC_COMPILER "clang: warning: argument unused during compilation: '-mmacosx-version-min=10.11' [-Wunused-command-line-argument]"

/* user who ran configure */
#define VLC_COMPILE_BY "nlandsberg"

/* host which ran configure */
#define VLC_COMPILE_HOST "nlandsberg-mbp"

/* Define to 1 if you want to build for Windows Store apps */
#define VLC_WINSTORE_APP 0

/* Define to limit the scope of <windows.h>. */
#define WIN32_LEAN_AND_MEAN /**/

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define to 1 if the X Window System is missing or not being used. */
#define X_DISPLAY_MISSING 1

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#define YYTEXT_POINTER 1

/* Define if the zvbi module is built */
#define ZVBI_COMPILED 1

/* ISO C, POSIX, and 4.3BSD things. */
/* #undef _BSD_SOURCE */

/* Define to 64 for large files support. */
#define _FILE_OFFSET_BITS 64

/* Extensions to ISO C99 from ISO C11. */
/* #undef _ISOC11_SOURCE */

/* Extensions to ISO C89 from ISO C99. */
/* #undef _ISOC99_SOURCE */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* IEEE Std 1003.1. */
/* #undef _POSIX_C_SOURCE */

/* IEEE Std 1003.1. */
/* #undef _POSIX_SOURCE */

/* ISO C, POSIX, and SVID things. */
/* #undef _SVID_SOURCE */

/* Define to '0x0600' for IE 6.0 (and shell) APIs. */
/* #undef _WIN32_IE */

/* Define to '0x0601' for Windows 7 APIs. */
/* #undef _WIN32_WINNT */

/* POSIX and XPG 7th edition */
/* #undef _XOPEN_SOURCE */

/* XPG things and X/Open Unix extensions. */
/* #undef _XOPEN_SOURCE_EXTENDED */

/* Define within the LibVLC source code tree. */
#define __LIBVLC__ /**/

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Alias fdatasync() to fsync() if missing. */
/* #undef fdatasync */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#define restrict __restrict
/* Work around a bug in Sun C++: it does not support _Restrict or
   __restrict__, even though the corresponding Sun C compiler ends up with
   "#define restrict _Restrict" or "#define restrict __restrict__" in the
   previous line.  Perhaps some future version of Sun C++ will work with
   restrict; if so, hopefully it defines __RESTRICT like Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
# define __restrict__
#endif

/* Define to `sockaddr' if <sys/socket.h> does not define. */
/* #undef sockaddr_storage */

/* Define to `int' if <sys/socket.h> does not define. */
/* #undef socklen_t */

/* Define to `sa_family' if <sys/socket.h> does not define. */
/* #undef ss_family */

/* Define to `int' if <stddef.h> does not define. */
/* #undef ssize_t */

#include <vlc_fixups.h>


#if defined(_MSC_VER) && !defined(__clang__)
# pragma fenv_access(off)
# pragma fp_contract(on)
#elif defined(__GNUC__)
/* Not supported so far */
#else
# pragma STDC FENV_ACCESS OFF
# pragma STDC FP_CONTRACT ON
#endif

