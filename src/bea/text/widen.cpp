// ANSI -> 16-bit string conversion into one of four rotating 4096-entry
// buffers (text.cpp).  Characters with the high bit set are sign-extended and
// then offset by 0x100, which yields their unsigned code; kept as written.
#include "bea/common.h"
#include "bea/hooks.h"
#include <string.h>

BEA_GLOBAL_PTR(int16_t, g_widenBuffers, 0x0084cd40);   // [4][0x1000]
BEA_GLOBAL(int, g_widenBufferIndex, 0x00854d40);

// 0x004f7bf0  Text_Widen(const char*) -> int16_t* (cdecl)
static int16_t* BEA_CDECL Text_Widen(const char* text)
{
    BEA_TRACE_ONCE();
    int len = (int)strlen(text);
    int idx = g_widenBufferIndex + 1;
    if (idx >= 4) idx = 0;
    g_widenBufferIndex = idx;
    int16_t* buf = g_widenBuffers + idx * 0x1000;
    for (int i = 0; i < len; ++i) {
        int16_t c = (int16_t)(int8_t)text[i];
        if (text[i] & 0x80) c += 0x100;
        buf[i] = c;
    }
    buf[len] = 0;
    return buf;
}

BEA_GLOBAL_PTR(char, g_copyBuffers, 0x00848d40);      // [4][0x1000]
BEA_GLOBAL(int, g_copyBufferIndex, 0x00854d44);

// 0x004f7c70  Text_Copy(const char*) -> char* (cdecl): copies into one of four
// rotating 4096-byte buffers (used for temporary C strings, 15 call sites).
static char* BEA_CDECL Text_Copy(const char* text)
{
    BEA_TRACE_ONCE();
    int len = (int)strlen(text);
    int idx = g_copyBufferIndex + 1;
    if (idx >= 4) idx = 0;
    g_copyBufferIndex = idx;
    char* buf = g_copyBuffers + idx * 0x1000;
    for (int i = 0; i < len; ++i) buf[i] = text[i];
    buf[len] = 0;
    return buf;
}

BEA_HOOKS(
    BEA_HOOK(0x004f7bf0, Text_Widen),
    BEA_HOOK(0x004f7c70, Text_Copy));
