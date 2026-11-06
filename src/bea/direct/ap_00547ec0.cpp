// auto-ported from 00547ec0_FUN_00547ec0.c (FUN_00547ec0, 1009 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x120: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char IAT;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00650f6c GLOBAL_AT(int, 0x00650f6c)
#define DAT_006318a0 GLOBAL_AT(int, 0x006318a0)
#define DAT_008c029c GLOBAL_AT(int, 0x008c029c)
#define s_Could_not_allocate_memory_for_re_00650ff4 ((char*)0x00650ff4)
#define s_C__dev_ONSLAUGHT2_DXMemBuffer_cp_00650fd0 ((char*)0x00650fd0)
#define s__s_crc_00650f70 ((char*)0x00650f70)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint32_t (BEA_STDCALL* FUN_0042c750_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042c750_t> FUN_0042c750 = {(FUN_0042c750_t)0x0042c750};
typedef int (BEA_THISCALL* FUN_005482d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005482d0_t> FUN_005482d0 = {(FUN_005482d0_t)0x005482d0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};
typedef char * (BEA_CDECL* _strncpy_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<_strncpy_t> _strncpy = {(_strncpy_t)0x0055e980};
typedef uint32_t (BEA_CDECL* uncompress_t)(...);
#define uncompress (*(uncompress_t*)0x005d83b8)   /* ZLIB.DLL import, via the IAT */

static undefined4 BEA_THISCALL ap_00547ec0(void * this_, LPCSTR param_1, undefined4 param_2, undefined4 param_3, uint param_4)
{
  uint *puVar1;
  char cVar2;
  int iVar3;
  HANDLE pvVar4;
  BOOL BVar5;
  uint uVar6;
  char *pcVar7;
  LPVOID lpBuffer;
  DWORD DVar8;
  char *pcVar9;

  alignas(16) uint8_t bea_frame_[0x120] = {};   // the original stack frame (emulate_frame)
  DWORD &local_114 = *reinterpret_cast<DWORD *>(bea_frame_ + 0x120 - 0x114);
  DWORD &local_110 = *reinterpret_cast<DWORD *>(bea_frame_ + 0x120 - 0x110);
  DWORD &local_10c = *reinterpret_cast<DWORD *>(bea_frame_ + 0x120 - 0x10c);
  uint &local_108 = *reinterpret_cast<uint *>(bea_frame_ + 0x120 - 0x108);
  DWORD &local_104 = *reinterpret_cast<DWORD *>(bea_frame_ + 0x120 - 0x104);
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x120 - 0x100);
  pcVar7 = (char *)((int)this_ + 0x2c);
  _strncpy(bea_arg(pcVar7), bea_arg(param_1), bea_arg(0x100));
  iVar3 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(DAT_00650f6c), bea_arg(param_2), bea_arg(s_C__dev_ONSLAUGHT2_DXMemBuffer_cp_00650fd0), bea_arg(0x11f));
  *(undefined4 *)((int)this_ + 0x130) = param_2;
  *(int *)((int)this_ + 4) = iVar3;
  if (iVar3 == 0) {
    CRenderThing__vslot3(s_Could_not_allocate_memory_for_re_00650ff4);
    return 0;
  }
  *(int *)((int)this_ + 8) = iVar3;
  *(uint *)((int)this_ + 0x18) = DAT_00650f6c;
  *(undefined4 *)((int)this_ + 0x20) = 1;
  *(undefined4 *)((int)this_ + 0x24) = 0;
  *(undefined4 *)((int)this_ + 0x28) = 0;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  *(undefined4 *)((int)this_ + 300) = 0;
  pvVar4 = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  *(HANDLE *)this_ = pvVar4;
  FUN_0055de9b(local_100,s__s_crc_00650f70,param_1);
  if (*(int *)this_ == -1) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 4)));
    *(undefined4 *)((int)this_ + 4) = 0;
    return 0;
  }
  if (param_4 == 0) {
LAB_005481f8:
    local_110 = 0;
  }
  else {
    uVar6 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (BEA_LOOP_GUARD((cVar2 != '\0')));
    if (3 < ~uVar6 - 1) {
      uVar6 = 0xffffffff;
      pcVar9 = pcVar7;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (BEA_LOOP_GUARD((cVar2 != '\0')));
      iVar3 = FUN_00568390(bea_arg(pcVar7 + (~uVar6 - 5)), bea_arg(&DAT_006318a0));
      if (iVar3 == 0) goto LAB_005481f8;
    }
    pvVar4 = *(HANDLE *)this_;
    pcVar7 = (char *)((int)this_ + 0x2c);
    DVar8 = (param_4 / DAT_00650f6c) * DAT_00650f6c;
    uVar6 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (BEA_LOOP_GUARD((cVar2 != '\0')));
    if (~uVar6 - 1 < 4) {
LAB_005480ae:
      local_110 = SetFilePointer(pvVar4,DVar8,(PLONG)0x0,0);
    }
    else {
      uVar6 = 0xffffffff;
      pcVar9 = pcVar7;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (BEA_LOOP_GUARD((cVar2 != '\0')));
      iVar3 = FUN_00568390(bea_arg(pcVar7 + (~uVar6 - 5)), bea_arg(&DAT_006318a0));
      if (iVar3 != 0) goto LAB_005480ae;
      for (; BEA_LOOP_GUARD((local_110 = DVar8, 0xfffff < (int)DVar8)); DVar8 = DVar8 - 0x100000) {
        BVar5 = ReadFile(pvVar4,&local_10c,4,&local_114,(LPOVERLAPPED)0x0);
        if ((((BVar5 == 0) || (local_114 != 4)) ||
            (BVar5 = ReadFile(pvVar4,&DAT_008c029c,local_10c,&local_114,(LPOVERLAPPED)0x0),
            BVar5 == 0)) || (local_114 != local_10c)) {
          local_110 = 0;
          goto LAB_005480d5;
        }
      }
    }
    if (local_110 == 0xffffffff) {
      FUN_0042c750(bea_arg((int)this_ + 0x2c), bea_arg(0xffffffff));
    }
  }
LAB_005480d5:
  uVar6 = 0xffffffff;
  *(DWORD *)((int)this_ + 300) = *(int *)((int)this_ + 300) + local_110;
  local_108 = DAT_00650f6c;
  pcVar7 = (char *)((int)this_ + 0x2c);
  pcVar9 = pcVar7;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (BEA_LOOP_GUARD((cVar2 != '\0')));
  lpBuffer = *(LPVOID *)((int)this_ + 4);
  pvVar4 = *(HANDLE *)this_;
  if (3 < ~uVar6 - 1) {
    uVar6 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (BEA_LOOP_GUARD((cVar2 != '\0')));
    iVar3 = FUN_00568390(bea_arg(pcVar7 + (~uVar6 - 5)), bea_arg(&DAT_006318a0));
    if (iVar3 == 0) {
      puVar1 = (uint *)((int)this_ + 0x1c);
      *puVar1 = 0;
      local_10c = 0;
      iVar3 = ReadFile(pvVar4,&local_104,4,&local_114,(LPOVERLAPPED)0x0);
      while (BEA_LOOP_GUARD((((DVar8 = local_10c, iVar3 != 0 && (local_114 == 4)) &&
             ((BVar5 = ReadFile(pvVar4,&DAT_008c029c,local_104,&local_114,(LPOVERLAPPED)0x0),
              DVar8 = local_10c, BVar5 != 0 && (local_114 == local_104))))))) {
        local_108 = 0x102927;
        iVar3 = uncompress(lpBuffer,&local_108,&DAT_008c029c,local_104);
        if (iVar3 != 0) goto LAB_00548218;
        uVar6 = *puVar1;
        lpBuffer = (LPVOID)((int)lpBuffer + local_108);
        *puVar1 = uVar6 + local_108;
        local_10c = 1;
        if (DAT_00650f6c <= uVar6 + local_108) goto LAB_00548239;
        iVar3 = ReadFile(pvVar4,&local_104,4,&local_114,(LPOVERLAPPED)0x0);
      }
      goto LAB_00548214;
    }
  }
  DVar8 = ReadFile(pvVar4,lpBuffer,local_108,(LPDWORD)((int)this_ + 0x1c),(LPOVERLAPPED)0x0);
LAB_00548214:
  if (DVar8 == 0) {
LAB_00548218:
    DVar8 = GetLastError();
    if (DVar8 != 0x26) {
      FUN_0042c750(bea_arg((int)this_ + 0x2c), bea_arg(0xffffffff));
    }
    *(undefined4 *)((int)this_ + 0x1c) = 0;
  }
LAB_00548239:
  iVar3 = *(int *)((int)this_ + 0x1c);
  if (iVar3 != *(int *)((int)this_ + 0x18)) {
    *(undefined4 *)((int)this_ + 0x28) = 1;
  }
  pcVar7 = *(char **)((int)this_ + 4);
  *(char **)((int)this_ + 8) = pcVar7;
  if (*(int *)((int)this_ + 0xc) != 0) {
    cVar2 = '\0';
    for (; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
      cVar2 = cVar2 + *pcVar7;
      pcVar7 = pcVar7 + 1;
    }
    if (cVar2 != **(char **)((int)this_ + 0x10)) {
      FUN_0042c750(bea_arg((int)this_ + 0x2c), bea_arg(0xffffffff));
    }
  }
  *(int *)((int)this_ + 0x10) = *(int *)((int)this_ + 0x10) + 1;
  *(undefined4 *)((int)this_ + 8) = *(undefined4 *)((int)this_ + 4);
  if (param_4 - local_110 != 0) {
    FUN_005482d0(bea_arg(this_), bea_arg(param_4 - local_110));
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00547ec0, ap_00547ec0));
