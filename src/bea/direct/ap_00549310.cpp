// auto-ported from 00549310_FUN_00549310.c (FUN_00549310, 230 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x200: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c4260 GLOBAL_AT(int, 0x009c4260)
#define DAT_009c400c GLOBAL_AT(int, 0x009c400c)
#define s___Heap_Info___00651124 ((char*)0x00651124)
#define s___________________________00651144 ((char*)0x00651144)
#define s_Thing_heap___Peak__d__Size__d_006510e0 ((char*)0x006510e0)
#define s_Done_Logging_Stats_006510cc ((char*)0x006510cc)
#define s_Default_heap___Peak__d__Size__d_00651100 ((char*)0x00651100)
#define s_Logging_Stats_00651134 ((char*)0x00651134)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint (BEA_THISCALL* FUN_004a2460_t)(uint32_t);
static const bea_guard<FUN_004a2460_t> FUN_004a2460 = {(FUN_004a2460_t)0x004a2460};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static uint32_t BEA_THISCALL ap_00549310(void * this_)
{
  alignas(16) uint8_t bea_frame_[0x200] = {};   // the original stack frame (emulate_frame)

  undefined1 (&local_1f4)[500] = *reinterpret_cast<undefined1 (*)[500]>(bea_frame_ + 0x200 - 0x1f4);
  CRenderThing__vslot3(s___________________________00651144);
  CRenderThing__vslot3(s_Logging_Stats_00651134);
  CRenderThing__vslot3(s___________________________00651144);
  FUN_004a2460(bea_arg((void *)((int)this_ + 0x214)));
  FUN_004a2460(bea_arg((void *)((int)this_ + 0xae0)));
  FUN_004a2460(bea_arg((void *)((int)this_ + 0x13ac)));
  CRenderThing__vslot3(s___Heap_Info___00651124);
  FUN_0055de9b(local_1f4,s_Default_heap___Peak__d__Size__d_00651100,DAT_009c4260,DAT_009c400c);
  CRenderThing__vslot3(local_1f4);
  FUN_0055de9b(local_1f4,s_Thing_heap___Peak__d__Size__d_006510e0,*(int *)((int)this_ + 0x1608),
               *(int *)((int)this_ + 0x13b4));
  CRenderThing__vslot3(local_1f4);
  CRenderThing__vslot3(s___________________________00651144);
  CRenderThing__vslot3(s_Done_Logging_Stats_006510cc);
  return CRenderThing__vslot3(s___________________________00651144);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00549310, ap_00549310));
