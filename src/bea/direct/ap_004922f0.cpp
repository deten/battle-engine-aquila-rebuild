// auto-ported from 004922f0_FUN_004922f0.c (FUN_004922f0, 436 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00492670_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00492670_t> FUN_00492670 = {(FUN_00492670_t)0x00492670};
typedef float10 (BEA_CDECL* FUN_0055dfe7_t)(double);
static const bea_guard<FUN_0055dfe7_t> FUN_0055dfe7 = {(FUN_0055dfe7_t)0x0055dfe7};

static undefined4 BEA_THISCALL ap_004922f0(void * this_)
{
  float *pfVar1;
  undefined2 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined2 *puVar8;
  float10 fVar9;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  longlong &local_18 = *reinterpret_cast<longlong *>(bea_frame_ + 0x20 - 0x18);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0xc);
  iVar7 = *(int *)((int)this_ + 0x24) + -1;
  *(int *)((int)this_ + 0x24) = iVar7;
  if (iVar7 < 0) {
    return 0;
  }
  *(undefined4 *)((int)this_ + 0x34) = 0;
  *(undefined4 *)((int)this_ + 0x58) = 0;
  iVar7 = 1 << ((byte)*(undefined4 *)((int)this_ + iVar7 * 4 + 0x94) & 0x1f);
  local_18 = CONCAT44((*(uint32_t*)((char*)&local_18 + 4)),iVar7);
  fVar5 = (float)iVar7;
  fVar3 = *(float *)((int)this_ + 0x48) - *(float *)((int)this_ + 0x38);
  local_c = *(float *)((int)this_ + 0x4c) - *(float *)((int)this_ + 0x3c);
  if ((fVar3 == 0.0f) && (local_c == 0.0f)) {
    *(float *)((int)this_ + 0x6c) = fVar5;
    *(undefined4 *)((int)this_ + 0x70) = 0;
    *(undefined4 *)((int)this_ + 0x74) = 2;
    *(undefined4 *)((int)this_ + 0x68) = 1;
  }
  else {
    fVar4 = ABS(fVar3);
    local_18 = CONCAT44((*(uint32_t*)((char*)&local_18 + 4)),fVar4);
    fVar6 = ABS(local_c);
    if (fVar4 <= fVar6) {
      *(undefined4 *)((int)this_ + 0x68) = 0;
      fVar4 = fVar5;
      if (local_c <= 0.0f) {
        fVar4 = -fVar5;
      }
      *(float *)((int)this_ + 0x70) = fVar4;
      *(float *)((int)this_ + 0x6c) = (fVar3 / fVar6) * fVar5;
      fVar9 = (float10)FUN_0055dfe7((double)(fVar6 / fVar5));
      local_18 = (longlong)ROUND(fVar9);
      *(int *)((int)this_ + 0x74) = (int)local_18 + 2;
    }
    else {
      *(undefined4 *)((int)this_ + 0x68) = 1;
      if (fVar3 <= 0.0f) {
        *(float *)((int)this_ + 0x6c) = -fVar5;
      }
      else {
        *(float *)((int)this_ + 0x6c) = fVar5;
      }
      *(float *)((int)this_ + 0x70) = (local_c / fVar4) * fVar5;
      fVar9 = (float10)FUN_0055dfe7((double)(fVar4 / fVar5));
      local_18 = (longlong)ROUND(fVar9);
      *(int *)((int)this_ + 0x74) = (int)local_18 + 2;
    }
  }
  pfVar1 = (float *)((int)this_ + 0x78);
  *pfVar1 = *(float *)((int)this_ + 0x38);
  *(undefined4 *)((int)this_ + 0x7c) = *(undefined4 *)((int)this_ + 0x3c);
  *(undefined4 *)((int)this_ + 0x80) = *(undefined4 *)((int)this_ + 0x40);
  *(undefined4 *)((int)this_ + 0x84) = *(undefined4 *)((int)this_ + 0x44);
  *pfVar1 = *pfVar1 - *(float *)((int)this_ + 0x6c);
  *(float *)((int)this_ + 0x7c) = *(float *)((int)this_ + 0x7c) - *(float *)((int)this_ + 0x70);
  puVar8 = (undefined2 *)FUN_00492670(bea_arg(this_), bea_arg(&local_18), bea_arg(pfVar1), bea_arg(*(undefined4 *)((int)this_ + 0x24)));
  uVar2 = *puVar8;
  *(undefined2 *)((int)this_ + 0x88) = uVar2;
  *(undefined2 *)((int)this_ + 0x8a) = puVar8[1];
  *(undefined4 *)((int)this_ + 0x8c) = *(undefined4 *)(puVar8 + 2);
  *(undefined2 *)((int)this_ + 0x5c) = uVar2;
  *(undefined2 *)((int)this_ + 0x5e) = *(undefined2 *)((int)this_ + 0x8a);
  *(undefined4 *)((int)this_ + 0x60) = *(undefined4 *)((int)this_ + 0x8c);
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004922f0, ap_004922f0));
