// Array element construction helper: calls a __thiscall method on each of
// `count` elements of `stride` bytes starting at `base` (the VC6
// "vector constructor iterator" pattern, 50 call sites).
#include "bea/common.h"
#include "bea/hooks.h"

typedef void (BEA_THISCALL* ElementFn)(void* element);

// 0x004011b0  Array_ForEachElement(base, stride, count, fn)  (stdcall)
static void BEA_STDCALL Array_ForEachElement(char* base, int stride, int count, ElementFn fn)
{
    BEA_TRACE_ONCE();
    if (count - 1 < 0) return;
    for (int i = 0; i < count; ++i) {
        fn(base);
        base += stride;
    }
}

BEA_HOOKS(
    BEA_HOOK(0x004011b0, Array_ForEachElement));
