// auto-ported from 004c4b00_vslot6.c (CPDMesh::vslot6, 226 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x400: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CPDMesh;
typedef void * (BEA_CDECL* FUN_004aa6e0_t)(void *, undefined4, ...);
static const bea_guard<FUN_004aa6e0_t> FUN_004aa6e0 = {(FUN_004aa6e0_t)0x004aa6e0};
typedef undefined4 (BEA_THISCALL* FUN_004f57b0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f57b0_t> FUN_004f57b0 = {(FUN_004f57b0_t)0x004f57b0};
typedef uint32_t (BEA_THISCALL* FUN_004f5b70_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f5b70_t> FUN_004f5b70 = {(FUN_004f5b70_t)0x004f5b70};
typedef char * (BEA_CDECL* _strrchr_t)(uint32_t, uint32_t);
static const bea_guard<_strrchr_t> _strrchr = {(_strrchr_t)0x0055f320};

static undefined4 BEA_THISCALL ap_004c4b00(CPDMesh * this_, void *param_1)
{
  char *pcVar1;
  undefined4 uVar2;

  alignas(16) uint8_t bea_frame_[0x400] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_3f4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x400 - 0x3f4);
  int &local_3f0 = *reinterpret_cast<int *>(bea_frame_ + 0x400 - 0x3f0);
  undefined4 &local_3ec = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x400 - 0x3ec);
  char (&local_3e8)[1000] = *reinterpret_cast<char (*)[1000]>(bea_frame_ + 0x400 - 0x3e8);
  do {
    FUN_004f57b0(bea_arg(param_1), bea_arg(&local_3f0), bea_arg(&local_3f4), bea_arg(&local_3ec), bea_arg(local_3e8));
    switch(local_3f0) {
    case 8:
      *(undefined4 *)(this_ + 0x60) = local_3f4;
      break;
    case 9:
      *(undefined4 *)(this_ + 0x68) = local_3f4;
      break;
    case 0x1b:
      *(undefined4 *)(this_ + 100) = local_3f4;
      break;
    case 0x22:
      *(undefined4 *)(this_ + 0x6c) = local_3f4;
      break;
    case 0x65:
      pcVar1 = _strrchr(bea_arg(local_3e8), bea_arg(0x5c));
      if (pcVar1 == (char *)0x0) {
        uVar2 = FUN_004aa6e0(local_3e8,1);
        *(undefined4 *)(this_ + 0x5c) = uVar2;
      }
      else {
        uVar2 = FUN_004aa6e0(pcVar1 + 1,1);
        *(undefined4 *)(this_ + 0x5c) = uVar2;
      }
      break;
    case 0x66:
      *(undefined4 *)(this_ + 0x70) = local_3ec;
      break;
    case 0x67:
      FUN_004f5b70(bea_arg(param_1), bea_arg(local_3f4), bea_arg(this_ + 0x78));
      break;
    case 0x68:
      *(undefined4 *)(this_ + 0x74) = local_3f4;
    }
  } while (BEA_LOOP_GUARD((local_3f0 != 5)));
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c4b00, ap_004c4b00));
