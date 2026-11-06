// auto-ported from 004a2460_FUN_004a2460.c (FUN_004a2460, 348 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x5f0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define DAT_009c2dd0 GLOBAL_AT(char, 0x009c2dd0)
#define s_Used___d_bytes_0062f658 ((char*)0x0062f658)
#define s_Free___d_bytes_0062f648 ((char*)0x0062f648)
#define s_Total___d_bytes_0062f6bc ((char*)0x0062f6bc)
#define s___32s____15d_bytes____15d_blocks_0062f610 ((char*)0x0062f610)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static uint BEA_THISCALL ap_004a2460(void * this_)
{
  int v1;
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;

  alignas(16) uint8_t bea_frame_[0x5f0] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_5ec)[1000] = *reinterpret_cast<undefined1 (*)[1000]>(bea_frame_ + 0x5f0 - 0x5ec);
  uint (&local_204)[129] = *reinterpret_cast<uint (*)[129]>(bea_frame_ + 0x5f0 - 0x204);
  FUN_0055de9b(local_5ec,s_Used___d_bytes_0062f658,*(int *)((int)this_ + 0x50));
  FUN_00441740(&DAT_0066f580,local_5ec);
  CRenderThing__vslot3(local_5ec);
  FUN_0055de9b(local_5ec,s_Free___d_bytes_0062f648,*(int *)((int)this_ + 0x54));
  FUN_00441740(&DAT_0066f580,local_5ec);
  CRenderThing__vslot3(local_5ec);
  FUN_0055de9b(local_5ec,s_Total___d_bytes_0062f6bc,*(int *)((int)this_ + 8));
  FUN_00441740(&DAT_0066f580,local_5ec);
  CRenderThing__vslot3(local_5ec);
  uVar2 = 0;
  puVar3 = local_204;
  do {
    *puVar3 = uVar2;
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (BEA_LOOP_GUARD((uVar2 < 0x81)));
  do {
    bVar1 = false;
    puVar3 = local_204;
    iVar4 = 0x80;
    do {
      puVar3 = puVar3 + 1;
      uVar2 = puVar3[-1];
      if (*(int *)((int)this_ + uVar2 * 4 + 0x58) < *(int *)((int)this_ + *puVar3 * 4 + 0x58)) {
        puVar3[-1] = *puVar3;
        bVar1 = true;
        *puVar3 = uVar2;
      }
      iVar4 = iVar4 + -1;
    } while (BEA_LOOP_GUARD((iVar4 != 0)));
  } while (BEA_LOOP_GUARD((bVar1)));
  puVar3 = local_204;
  iVar4 = 0x81;
  do {
    uVar2 = *puVar3;
    v1 = *(int *)((int)this_ + uVar2 * 4 + 0x58);
    if (0 < v1) {
      FUN_0055de9b(local_5ec,s___32s____15d_bytes____15d_blocks_0062f610,
                   (char *)((uint32_t *)&DAT_009c2dd0 + uVar2 * 8),v1,*(int *)((int)this_ + uVar2 * 4 + 0x670));
      FUN_00441740(&DAT_0066f580,local_5ec);
      uVar2 = CRenderThing__vslot3(local_5ec);
    }
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (BEA_LOOP_GUARD((iVar4 != 0)));
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a2460, ap_004a2460));
