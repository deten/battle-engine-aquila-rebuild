// auto-ported from 00548c00_FUN_00548c00.c (FUN_00548c00, 303 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char IAT;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_006318a0 GLOBAL_AT(int, 0x006318a0)
#define DAT_008c029c GLOBAL_AT(undefined, 0x008c029c)
#define s_Write_failed_00651030 ((char*)0x00651030)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};
typedef uint32_t (BEA_CDECL* compress_t)(...);
#define compress (*(compress_t*)0x005d83bc)   /* ZLIB.DLL import, via the IAT */

static undefined4 BEA_THISCALL ap_00548c00(void * this_)
{
  char *pcVar1;
  char cVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  DWORD nNumberOfBytesToWrite;
  undefined *lpBuffer;
  char *pcVar6;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  DWORD &local_c = *reinterpret_cast<DWORD *>(bea_frame_ + 0x10 - 0xc);
  HANDLE &local_8 = *reinterpret_cast<HANDLE *>(bea_frame_ + 0x10 - 0x8);
  DWORD &local_4 = *reinterpret_cast<DWORD *>(bea_frame_ + 0x10 - 0x4);
  lpBuffer = *(undefined **)((int)this_ + 4);
  if (lpBuffer == (undefined *)0x0) {
    return 0;
  }
  if (*(int *)((int)this_ + 0x20) != 0) {
    CloseHandle(*(HANDLE *)this_);
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 4)));
    *(undefined4 *)((int)this_ + 4) = 0;
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0xc)));
    *(undefined4 *)((int)this_ + 0xc) = 0;
    return 1;
  }
  local_8 = *(HANDLE *)this_;
  pcVar1 = (char *)((int)this_ + 0x2c);
  uVar5 = 0xffffffff;
  pcVar6 = pcVar1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (BEA_LOOP_GUARD((cVar2 != '\0')));
  nNumberOfBytesToWrite = *(DWORD *)((int)this_ + 0x1c);
  if (~uVar5 - 1 < 4) {
LAB_00548cd6:
    BVar4 = WriteFile(local_8,lpBuffer,nNumberOfBytesToWrite,&local_4,(LPOVERLAPPED)0x0);
    if (BVar4 != 0) goto LAB_00548cfb;
  }
  else {
    uVar5 = 0xffffffff;
    pcVar6 = pcVar1;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (BEA_LOOP_GUARD((cVar2 != '\0')));
    iVar3 = FUN_00568390(bea_arg(pcVar1 + (~uVar5 - 5)), bea_arg(&DAT_006318a0));
    if (iVar3 != 0) goto LAB_00548cd6;
    local_c = 0x102927;
    compress(&DAT_008c029c,&local_c,lpBuffer,nNumberOfBytesToWrite);
    nNumberOfBytesToWrite = local_c;
    lpBuffer = &DAT_008c029c;
    BVar4 = WriteFile(local_8,&local_c,4,&local_4,(LPOVERLAPPED)0x0);
    if (BVar4 != 0) goto LAB_00548cd6;
  }
  CRenderThing__vslot3(s_Write_failed_00651030);
LAB_00548cfb:
  CloseHandle(*(HANDLE *)this_);
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 4)));
  *(undefined4 *)((int)this_ + 4) = 0;
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00548c00, ap_00548c00));
