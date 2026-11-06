// auto-ported from 00501730_FUN_00501730.c (FUN_00501730, 195 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x100: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00854e68 GLOBAL_AT(int, 0x00854e68)
#define s__________________________________0063ce7c ((char*)0x0063ce7c)
#define s_No_shader_leaks_0063ce34 ((char*)0x0063ce34)
#define s______________0063ce48 ((char*)0x0063ce48)
#define s_Shader_leaks__I_ll_be_deleting_t_0063ceb4 ((char*)0x0063ceb4)
#define s__________________________________0063cee8 ((char*)0x0063cee8)
#define s_Shader___s__leaked__refcount__d_0063ce58 ((char*)0x0063ce58)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_CDECL ap_00501730(void)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;

  alignas(16) uint8_t bea_frame_[0x100] = {};   // the original stack frame (emulate_frame)
  undefined1 (&auStack_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x100 - 0x100);
  puVar1 = DAT_00854e68;
  puVar3 = DAT_00854e68;
  while (BEA_LOOP_GUARD((puVar2 = puVar1, DAT_00854e68 = puVar3, puVar2 != (undefined4 *)0x0))) {
    puVar1 = (undefined4 *)puVar2[0x16];
    if ((puVar2[0xc] == 0) && (puVar2 != (undefined4 *)0x0)) {
      bea_vcall<uint32_t>(puVar2, 0x0, 1);
      puVar3 = DAT_00854e68;
    }
  }
  if (puVar3 == (undefined4 *)0x0) {
    pcVar4 = s_No_shader_leaks_0063ce34;
  }
  else {
    CRenderThing__vslot3(s__________________________________0063cee8);
    CRenderThing__vslot3(s_Shader_leaks__I_ll_be_deleting_t_0063ceb4);
    CRenderThing__vslot3(s__________________________________0063ce7c);
    do {
      FUN_0055de9b(auStack_100,s_Shader___s__leaked__refcount__d_0063ce58,(char *)(puVar3 + 2),
                   puVar3[0xc]);
      CRenderThing__vslot3(auStack_100);
      puVar3 = (undefined4 *)puVar3[0x16];
    } while (BEA_LOOP_GUARD((puVar3 != (undefined4 *)0x0)));
    pcVar4 = s______________0063ce48;
  }
  CRenderThing__vslot3(pcVar4);
  puVar1 = DAT_00854e68;
  while (BEA_LOOP_GUARD((puVar3 = puVar1, puVar3 != (undefined4 *)0x0))) {
    puVar1 = (undefined4 *)puVar3[0x16];
    if (puVar3 != (undefined4 *)0x0) {
      bea_vcall<uint32_t>(puVar3, 0x0, 1);
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00501730, ap_00501730));
