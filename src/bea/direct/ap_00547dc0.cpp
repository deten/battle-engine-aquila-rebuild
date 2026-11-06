// auto-ported from 00547dc0_FUN_00547dc0.c (FUN_00547dc0, 252 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x110: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_Could_not_allocate_memory_for_wr_00650fa4 ((char*)0x00650fa4)
#define s_C__dev_ONSLAUGHT2_DXMemBuffer_cp_00650fd0 ((char*)0x00650fd0)
#define s_Membuffer_could_not_open_file_fo_00650f78 ((char*)0x00650f78)
#define s__s_crc_00650f70 ((char*)0x00650f70)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};
typedef char * (BEA_CDECL* _strncpy_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<_strncpy_t> _strncpy = {(_strncpy_t)0x0055e980};

static undefined4 BEA_THISCALL ap_00547dc0(void * this_, char *param_1, undefined4 param_2)
{
  char *_Dest;
  int iVar1;
  HANDLE pvVar2;

  alignas(16) uint8_t bea_frame_[0x110] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_104)[260] = *reinterpret_cast<undefined1 (*)[260]>(bea_frame_ + 0x110 - 0x104);
  iVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x100000), bea_arg(param_2), bea_arg(s_C__dev_ONSLAUGHT2_DXMemBuffer_cp_00650fd0), bea_arg(0xe3));
  *(int *)((int)this_ + 4) = iVar1;
  *(undefined4 *)((int)this_ + 0x130) = param_2;
  if (iVar1 == 0) {
    CRenderThing__vslot3(s_Could_not_allocate_memory_for_wr_00650fa4);
    return 0;
  }
  *(int *)((int)this_ + 8) = iVar1;
  _Dest = (char *)((int)this_ + 0x2c);
  *(undefined4 *)((int)this_ + 0x18) = 0x100000;
  *(undefined4 *)((int)this_ + 0x20) = 0;
  *(undefined4 *)((int)this_ + 0x24) = 0;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  *(undefined4 *)((int)this_ + 300) = 0;
  _strncpy(bea_arg(_Dest), bea_arg(param_1), bea_arg(0x100));
  pvVar2 = CreateFileA(_Dest,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  *(HANDLE *)this_ = pvVar2;
  if (pvVar2 == (HANDLE)0xffffffff) {
    CRenderThing__vslot3(s_Membuffer_could_not_open_file_fo_00650f78);
    if (*(int *)((int)this_ + 4) != 0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 4)));
      *(undefined4 *)((int)this_ + 4) = 0;
    }
    return 0;
  }
  FUN_0055de9b(local_104,s__s_crc_00650f70,_Dest);
  *(undefined4 *)((int)this_ + 0x14) = 0;
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00547dc0, ap_00547dc0));
