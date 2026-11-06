// auto-ported from 00501450_FUN_00501450.c (FUN_00501450, 228 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00854e00 GLOBAL_AT(int, 0x00854e00)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s____________________________00633ff0 ((char*)0x00633ff0)
#define s_VBufTexture_for_NULL_texture_lea_00633ee4 ((char*)0x00633ee4)
#define s____________________________00634010 ((char*)0x00634010)
#define s_No_VBufTexture_resource_leaks_00633fd0 ((char*)0x00633fd0)
#define s_VBufTexture_for_texture___s__lea_00633f18 ((char*)0x00633f18)
#define s____________________________0063404c ((char*)0x0063404c)
#define s_VBufTexture_resource_leaks_00634030 ((char*)0x00634030)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint32_t (BEA_THISCALL* FUN_00500460_t)(uint32_t);
static const bea_guard<FUN_00500460_t> FUN_00500460 = {(FUN_00500460_t)0x00500460};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static uint32_t BEA_CDECL ap_00501450(void)
{
  int *piVar1;
  int *this_local;
  int *piVar2;
  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x100 - 0x100);
  piVar1 = DAT_00854e00;
  piVar2 = DAT_00854e00;
  while (BEA_LOOP_GUARD((this_local = piVar1, DAT_00854e00 = piVar2, this_local != (int *)0x0))) {
    piVar1 = (int *)this_local[0x16];
    if ((this_local[0x18] == 0) && (this_local != (int *)0x0)) {
      FUN_00500460(bea_arg(this_local));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_local));
      piVar2 = DAT_00854e00;
    }
  }
  if (piVar2 == (int *)0x0) {
    return CRenderThing__vslot3(s_No_VBufTexture_resource_leaks_00633fd0);
  }
  CRenderThing__vslot3(s____________________________0063404c);
  CRenderThing__vslot3(s_VBufTexture_resource_leaks_00634030);
  CRenderThing__vslot3(s____________________________00634010);
  do {
    if (*piVar2 == 0) {
      FUN_0055de9b(local_100,s_VBufTexture_for_NULL_texture_lea_00633ee4,piVar2[0x18]);
    }
    else {
      FUN_0055de9b(local_100,s_VBufTexture_for_texture___s__lea_00633f18,(char *)(*piVar2 + 8),
                   piVar2[0x18]);
    }
    CRenderThing__vslot3(local_100);
    piVar2 = (int *)piVar2[0x16];
  } while (BEA_LOOP_GUARD((piVar2 != (int *)0x0)));
  return CRenderThing__vslot3(s____________________________00633ff0);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00501450, ap_00501450));
