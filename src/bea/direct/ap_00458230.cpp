// auto-ported from 00458230_vslot2.c (CFEPDevelopment::vslot2, 236 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CFEPDevelopment;
#define _DAT_008a9570 GLOBAL_AT(float, 0x008a9570)
#define DAT_0082b400 GLOBAL_AT(int, 0x0082b400)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define _DAT_008a956c GLOBAL_AT(int, 0x008a956c)
#define s_Firework_Effect_00629260 ((char*)0x00629260)
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};
typedef int (BEA_THISCALL* FUN_004cd7a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cd7a0_t> FUN_004cd7a0 = {(FUN_004cd7a0_t)0x004cd7a0};
typedef undefined1 (BEA_STDCALL* FUN_00515980_t)(uint32_t);
static const bea_guard<FUN_00515980_t> FUN_00515980 = {(FUN_00515980_t)0x00515980};
typedef int (BEA_CDECL* _rand_t)(void);
static const bea_guard<_rand_t> _rand = {(_rand_t)0x0055dbfe};

static void BEA_THISCALL ap_00458230(CFEPDevelopment * this_, int param_1)
{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_10;
  undefined4 local_4 = 0;
  
  if (param_1 != 3) {
    if ((float)*(int *)(this_ + 0xc) < _DAT_008a9570 - 40.0f) {
      iVar1 = _rand();
      if (iVar1 % 10000 < 100) {
        uVar2 = FUN_004cd7a0(bea_arg(&DAT_0082b400), bea_arg(s_Firework_Effect_00629260));
        uVar3 = _rand();
        FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(uVar2), bea_arg(0), bea_arg((float)(int)((uVar3 & 0xff) - 0x80) * 0.078125f), bea_arg(0), bea_arg(0x41000000), bea_arg(local_4), bea_arg(0), bea_arg(0));
        local_10 = (undefined4)(longlong)ROUND(_DAT_008a9570);
        *(undefined4 *)(this_ + 0xc) = local_10;
      }
    }
    iVar1 = FUN_00515980(bea_arg(1));
    if (iVar1 != 0) {
      _DAT_008a956c = 0xffffffff;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00458230, ap_00458230));
