#ifndef H04A51ED8_FFBD_11E6_B35A_A45E60C4B579
#define H04A51ED8_FFBD_11E6_B35A_A45E60C4B579

#include <tlpbook/tlpbook.h>
#include <string.h>

TLPBOOK_NS_BEGIN

template<typename T>
T max(const T& a, const T& b)
{
    return a > b ? a : b;
}

const char* max(const char* a, const char* b)
{
     return strcmp(a, b) > 0 ? a : b;
}

template<typename T1, typename T2>
T1 sum(T1 x, T2 y)
{
    T1 total(0);
    total = x + y;
    return total;
}

TLPBOOK_NS_END

#endif
