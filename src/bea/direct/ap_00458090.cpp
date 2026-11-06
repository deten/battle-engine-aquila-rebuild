// auto-ported from 00458090_vslot0.c (CFEPDevelopment::vslot0, 334 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x160: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CFEPDevelopment;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_data_worlds_world____wrd_00629244 ((char*)0x00629244)
#define s_C__dev_ONSLAUGHT2_FEPDevelopment_0062921c ((char*)0x0062921c)
typedef char* (BEA_CDECL* FUN_004f7c70_t)(uint32_t);
static const bea_guard<FUN_004f7c70_t> FUN_004f7c70 = {(FUN_004f7c70_t)0x004f7c70};
typedef undefined1 * (BEA_CDECL* FUN_004f7cd0_t)(void *, ...);
static const bea_guard<FUN_004f7cd0_t> FUN_004f7cd0 = {(FUN_004f7cd0_t)0x004f7cd0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_CDECL* FUN_0055e7ae_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055e7ae_t> FUN_0055e7ae = {(FUN_0055e7ae_t)0x0055e7ae};
typedef char * (BEA_CDECL* _strncpy_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<_strncpy_t> _strncpy = {(_strncpy_t)0x0055e980};

static undefined4 BEA_THISCALL ap_00458090(CFEPDevelopment * this_)
{
  LPCSTR pCVar1;
  HANDLE pvVar2;
  BOOL BVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  _WIN32_FIND_DATAA *p_Var8;
  size_t _Count;

  alignas(16) uint8_t bea_frame_[0x160] = {};   // the original stack frame (emulate_frame)
  char (&local_15c)[28] = *reinterpret_cast<char (*)[28]>(bea_frame_ + 0x160 - 0x15c);
  _WIN32_FIND_DATAA &local_140 = *reinterpret_cast<_WIN32_FIND_DATAA *>(bea_frame_ + 0x160 - 0x140);
  p_Var8 = &local_140;
  *(undefined4 *)(this_ + 0xc) = 0;
  *(undefined4 *)(this_ + 0x10) = 0;
  pcVar7 = s_data_worlds_world____wrd_00629244;
  pcVar5 = local_15c;
  for (iVar6 = 6; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar5 = pcVar5 + 4;
  }
  *pcVar5 = *pcVar7;
  pCVar1 = (LPCSTR)FUN_004f7c70(bea_arg(local_15c));
  pvVar2 = FindFirstFileA(pCVar1,p_Var8);
  if (pvVar2 != (HANDLE)0xffffffff) {
    do {
      if (((byte)local_140.dwFileAttributes & 0x10) == 0) {
        *(int *)(this_ + 8) = *(int *)(this_ + 8) + 1;
      }
      BVar3 = FindNextFileA(pvVar2,&local_140);
    } while (BEA_LOOP_GUARD((BVar3 != 0)));
    FindClose(pvVar2);
  }
  iVar6 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(*(int *)(this_ + 8) << 2), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_FEPDevelopment_0062921c), bea_arg(0x35));
  *(int *)(this_ + 4) = iVar6;
  if (iVar6 == 0) {
    return 0;
  }
  iVar6 = 0;
  if (0 < *(int *)(this_ + 8)) {
    do {
      uVar4 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(100), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_FEPDevelopment_0062921c), bea_arg(0x3c));
      iVar6 = iVar6 + 1;
      *(undefined4 *)(*(int *)(this_ + 4) + -4 + iVar6 * 4) = uVar4;
    } while (BEA_LOOP_GUARD((iVar6 < *(int *)(this_ + 8))));
  }
  p_Var8 = &local_140;
  pCVar1 = (LPCSTR)FUN_004f7c70(bea_arg(local_15c));
  pvVar2 = FindFirstFileA(pCVar1,p_Var8);
  if (pvVar2 != (HANDLE)0xffffffff) {
    iVar6 = 0;
    do {
      if (((byte)local_140.dwFileAttributes & 0x10) == 0) {
        _Count = 99;
        pcVar7 = *(char **)(*(int *)(this_ + 4) + iVar6);
        iVar6 = iVar6 + 4;
        pcVar5 = (char *)FUN_004f7cd0(local_140.cFileName);
        _strncpy(bea_arg(pcVar7), bea_arg(pcVar5), bea_arg(_Count));
      }
      BVar3 = FindNextFileA(pvVar2,&local_140);
    } while (BEA_LOOP_GUARD((BVar3 != 0)));
    FindClose(pvVar2);
  }
  FUN_0055e7ae(bea_arg(*(undefined4 *)(this_ + 4)), bea_arg(*(undefined4 *)(this_ + 8)), bea_arg(4), bea_arg(((void*)0x00458050)));
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00458090, ap_00458090));
