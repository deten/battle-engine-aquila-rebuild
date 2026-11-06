// auto-ported from 005055b0_vslot1.c (CWaveSoundRead::vslot1, 194 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CWaveSoundRead;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef char* (BEA_CDECL* FUN_004f7c70_t)(uint32_t);
static const bea_guard<FUN_004f7c70_t> FUN_004f7c70 = {(FUN_004f7c70_t)0x004f7c70};
typedef undefined4 (BEA_CDECL* FUN_00505210_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00505210_t> FUN_00505210 = {(FUN_00505210_t)0x00505210};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static int BEA_THISCALL ap_005055b0(CWaveSoundRead * this_, undefined4 param_1)
{
  LPSTR pszFileName;
  HMMIO hmmio;
  int iVar1;
  LONG LVar2;
  MMRESULT MVar3;
  
  if (*(int *)(this_ + 4) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)(this_ + 4)));
    *(undefined4 *)(this_ + 4) = 0;
  }
  pszFileName = (LPSTR)FUN_004f7c70(bea_arg(param_1));
  hmmio = mmioOpenA(pszFileName,(LPMMIOINFO)0x0,0x10000);
  if (hmmio == (HMMIO)0x0) {
    return -0x7fffbffb;
  }
  iVar1 = FUN_00505210(bea_arg(hmmio), bea_arg((MMCKINFO *)(this_ + 0x20)), bea_arg(this_ + 4));
  if (iVar1 < 0) {
    mmioClose(hmmio,0);
    return iVar1;
  }
  *(HMMIO *)(this_ + 8) = hmmio;
  LVar2 = mmioSeek(*(HMMIO *)(this_ + 8),*(int *)(this_ + 0x2c) + 4,0);
  if (LVar2 != -1) {
    ((LPMMCKINFO)(this_ + 0xc))->ckid = 0x61746164;
    MVar3 = mmioDescend(*(HMMIO *)(this_ + 8),(LPMMCKINFO)(this_ + 0xc),(MMCKINFO *)(this_ + 0x20),0x10
                       );
    if (MVar3 == 0) {
      return 0;
    }
  }
  return -0x7fffbffb;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005055b0, ap_005055b0));
