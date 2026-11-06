// auto-ported from 0053a010_vslot1.c (CBLTexture::vslot1, 38 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CDXTexture;
#define DAT_008aa518 GLOBAL_AT(int, 0x008aa518)
typedef int (BEA_THISCALL* CDXTexture__vslot1_t)(uint32_t);
static const bea_guard<CDXTexture__vslot1_t> CDXTexture__vslot1 = {(CDXTexture__vslot1_t)0x00557a90};
typedef uint32_t (BEA_THISCALL* FUN_0053a390_t)(uint32_t);
static const bea_guard<FUN_0053a390_t> FUN_0053a390 = {(FUN_0053a390_t)0x0053a390};
typedef uint32_t (BEA_THISCALL* FUN_0053a930_t)(uint32_t);
static const bea_guard<FUN_0053a930_t> FUN_0053a930 = {(FUN_0053a930_t)0x0053a930};

static int BEA_THISCALL ap_0053a010(CDXTexture * this_)
{
  int iVar1;

  iVar1 = CDXTexture__vslot1(bea_arg(this_));
  if (-1 < iVar1) {
    FUN_0053a930(bea_arg(DAT_008aa518));
    FUN_0053a390(bea_arg(DAT_008aa518));
  }
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053a010, ap_0053a010));
