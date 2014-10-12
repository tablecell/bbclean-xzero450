#pragma once
#include "bblibapi.h"
#include <tchar.h>
#include <shlwapi.h>

#ifdef UNICODE
# define tmemcpy wmemcpy
# define tmemmove wmemmove
# define tmemset wmemset
# define tmemcmp wmemcmp
# define tmemchr wmemchr
#else
# define tmemcpy memcpy
# define tmemmove memmove
# define tmemset memset
# define tmemcmp memcmp
# define tmemchr memchr
#endif

inline TCHAR * extract_string (TCHAR * dst, TCHAR const * src, int n)
{
    _tcsncpy_s(dst, n, src, _TRUNCATE);
    return dst;
}

inline TCHAR * strcpy_max (TCHAR * dst, TCHAR const * src, int maxlen)
{
    return extract_string(dst, src, maxlen);
}

inline TCHAR * stristr (const TCHAR * aa, const TCHAR * bb)
{
    return StrStrI(aa, bb);
}
