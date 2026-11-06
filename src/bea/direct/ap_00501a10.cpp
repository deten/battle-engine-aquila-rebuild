// auto-ported from 00501a10_vslot2.c (CVertexShader::vslot2, 333 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x130: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CVertexShader;
#define DAT_00888c8c GLOBAL_AT(int, 0x00888c8c)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_00854e6c GLOBAL_AT(char, 0x00854e6c)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define s_Could_not_create_shader_from_cod_0063cf3c ((char*)0x0063cf3c)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef int (BEA_STDCALL* FUN_005027f0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005027f0_t> FUN_005027f0 = {(FUN_005027f0_t)0x005027f0};
typedef undefined4 (BEA_THISCALL* FUN_00513ca0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513ca0_t> FUN_00513ca0 = {(FUN_00513ca0_t)0x00513ca0};
typedef uint32_t (BEA_THISCALL* FUN_00513ff0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513ff0_t> FUN_00513ff0 = {(FUN_00513ff0_t)0x00513ff0};

static undefined4 BEA_THISCALL ap_00501a10(CVertexShader * this_)
{
  CVertexShader CVar1;
  undefined4 uVar2;
  int iVar3;
  CVertexShader *pCVar4;

  alignas(16) uint8_t bea_frame_[0x130] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_130)[196] = *reinterpret_cast<undefined1 (*)[196]>(bea_frame_ + 0x130 - 0x130);
  uint &uStack_6c = *reinterpret_cast<uint *>(bea_frame_ + 0x130 - 0x6c);
  if (DAT_00888c8c != 0) {
    bea_vcall<uint32_t>(DAT_00888a50, 0x1c, DAT_00888a50,local_130);
    if (uStack_6c < 0xfffe0101) {
      DAT_00854e6c = '\x01';
      FUN_00513ca0(bea_arg(&DAT_00855bb0), bea_arg(1));
    }
    else {
      DAT_00854e6c = '\0';
    }
    if (this_[0x34] == (CVertexShader)0x0) {
      if (*(int *)(this_ + 0x50) == 0) {
        iVar3 = -1;
        uVar2 = 0;
        pCVar4 = this_ + 8;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          CVar1 = *pCVar4;
          pCVar4 = pCVar4 + 1;
        } while (BEA_LOOP_GUARD((CVar1 != (CVertexShader)0x0)));
        if (iVar3 != -2) {
          if (DAT_00854e6c != '\0') {
            uVar2 = 0x10;
          }
          iVar3 = FUN_005027f0(bea_arg(this_ + 8), bea_arg(uVar2), bea_arg(this_ + 0x28));
          if (iVar3 < 0) {
            return 0x80004005;
          }
        }
      }
      else {
        uVar2 = 0;
        if (DAT_00854e6c != '\0') {
          uVar2 = 0x10;
        }
        iVar3 = FUN_00513ff0(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(*(int *)(this_ + 0x50)), bea_arg(this_ + 0x28), bea_arg(uVar2));
        if (iVar3 < 0) {
          CRenderThing__vslot3(s_Could_not_create_shader_from_cod_0063cf3c);
          return 0x80004005;
        }
      }
    }
    else {
      uVar2 = 0;
      if (DAT_00854e6c != '\0') {
        uVar2 = 0x10;
      }
      if (*(int *)(this_ + 0x50) == 0) {
        return 0x80004005;
      }
      iVar3 = FUN_00513ff0(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(*(int *)(this_ + 0x50)), bea_arg(this_ + 0x28), bea_arg(uVar2));
      if (iVar3 < 0) {
        CRenderThing__vslot3(s_Could_not_create_shader_from_cod_0063cf3c);
        return 0x80004005;
      }
    }
    if (DAT_00854e6c != '\0') {
      FUN_00513ca0(bea_arg(&DAT_00855bb0), bea_arg(0));
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00501a10, ap_00501a10));
