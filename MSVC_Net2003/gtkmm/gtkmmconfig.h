/* gtk/gtkmmconfig.h.  Generated by configure.  */
#ifndef _GTKMM_CONFIG_H
#define _GTKMM_CONFIG_H 1

#include <gdkmmconfig.h>

/* version numbers */
#define GTKMM_MAJOR_VERSION 2
#define GTKMM_MINOR_VERSION 4
#define GTKMM_MICRO_VERSION 6

// detect common platforms
#if defined(_WIN32)
// Win32 compilers have a lot of varation
  #if defined(_MSC_VER)
    #define GTKMM_MSC
    #define GTKMM_WIN32
    #define GTKMM_DLL
  #elif defined(__CYGWIN__)
    #define GTKMM_CONFIGURE
  #elif defined(__MINGW32__)
    #define GTKMM_WIN32
    #define GTKMM_CONFIGURE
  #else
    #warning "Unknown architecture (send me gcc --dumpspecs or equiv)"
  #endif
#else
    #define GTKMM_CONFIGURE
#endif /* _WIN32 */

#ifdef GTKMM_CONFIGURE
/* compiler feature tests that are used during compile time and run-time
   by gtkmm only. */

#endif

#ifdef GTKMM_DLL
  #if defined(GTKMM_BUILD) && defined(_WINDLL)
    // Do not dllexport as it is handled by gendef on MSVC
    #define GTKMM_API
  #elif !defined(GTKMM_BUILD)
    #define GTKMM_API __declspec(dllimport)
  #else
    /* Build a static library */
    #define GTKMM_API
  #endif /* GTKMM_BUILD - _WINDLL */
#else
  #define GTKMM_API
#endif /* GTKMM_DLL */

#endif /* _GTKMM_CONFIG_H */

