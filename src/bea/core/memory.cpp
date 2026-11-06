// Memory manager entry points (MemoryManager.cpp).  The manager itself is a
// singleton object at 0x009c3df0; its methods are still original code.
#include "bea/common.h"
#include "bea/hooks.h"

// MemoryManager::Free(void* p)  (thiscall, 465 call sites) — still original.
BEA_ORIG(void, BEA_THISCALL, MemoryManager_Free, 0x00549220, void* self, void* p);
BEA_GLOBAL_PTR(void, g_memoryManager, 0x009c3df0);

// 0x00449d40  operator delete(void*) — forwards to the singleton (584 call sites).
static void BEA_CDECL Mem_Free(void* p)
{
    BEA_TRACE_ONCE();
    MemoryManager_Free(g_memoryManager, p);
}

BEA_HOOKS(
    BEA_HOOK(0x00449d40, Mem_Free));
