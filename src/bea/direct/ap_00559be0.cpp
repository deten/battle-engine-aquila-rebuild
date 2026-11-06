// auto-ported from 00559be0_FUN_00559be0.c (FUN_00559be0, 1154 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x180: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_0083d9b0 GLOBAL_AT(int, 0x0083d9b0)
#define s_Warning___Texture__s_in_resource_00652934 ((char*)0x00652934)
#define s_leaker__00652928 ((char*)0x00652928)
#define s_FrontEnd_v3_FE_BEA_title_nav_sym_0062a0f8 ((char*)0x0062a0f8)
#define s_C__dev_ONSLAUGHT2_DXTexture_cpp_0065269c ((char*)0x0065269c)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint (BEA_THISCALL* FUN_00423910_t)(uint32_t);
static const bea_guard<FUN_00423910_t> FUN_00423910 = {(FUN_00423910_t)0x00423910};
typedef bool (BEA_THISCALL* FUN_00423960_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00423960_t> FUN_00423960 = {(FUN_00423960_t)0x00423960};
typedef undefined4 (BEA_STDCALL* FUN_00513640_t)(uint32_t);
static const bea_guard<FUN_00513640_t> FUN_00513640 = {(FUN_00513640_t)0x00513640};
typedef uint32_t (BEA_THISCALL* FUN_00513a10_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513a10_t> FUN_00513a10 = {(FUN_00513a10_t)0x00513a10};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef void * (BEA_THISCALL* FUN_00556cc0_t)(uint32_t);
static const bea_guard<FUN_00556cc0_t> FUN_00556cc0 = {(FUN_00556cc0_t)0x00556cc0};
typedef int (BEA_THISCALL* FUN_00557300_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00557300_t> FUN_00557300 = {(FUN_00557300_t)0x00557300};
typedef uint32_t (BEA_THISCALL* FUN_00559410_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00559410_t> FUN_00559410 = {(FUN_00559410_t)0x00559410};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static undefined4 * BEA_CDECL ap_00559be0(undefined4 param_1, uint *param_2)
{
  char *v0;
  char cVar1;
  undefined4 *this_local;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  char *pcVar8;

  alignas(16) uint8_t bea_frame_[0x180] = {};   // the original stack frame (emulate_frame)
  int &local_178 = *reinterpret_cast<int *>(bea_frame_ + 0x180 - 0x178);
  int &local_174 = *reinterpret_cast<int *>(bea_frame_ + 0x180 - 0x174);
  undefined4 * &local_170 = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0x180 - 0x170);
  uint &uStack_16c = *reinterpret_cast<uint *>(bea_frame_ + 0x180 - 0x16c);
  void * &local_168 = *reinterpret_cast<void * *>(bea_frame_ + 0x180 - 0x168);
  undefined4 &local_164 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x180 - 0x164);
  undefined4 &local_160 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x180 - 0x160);
  uint &uStack_15c = *reinterpret_cast<uint *>(bea_frame_ + 0x180 - 0x15c);
  int &iStack_158 = *reinterpret_cast<int *>(bea_frame_ + 0x180 - 0x158);
  int &iStack_154 = *reinterpret_cast<int *>(bea_frame_ + 0x180 - 0x154);
  int &iStack_150 = *reinterpret_cast<int *>(bea_frame_ + 0x180 - 0x150);
  undefined1 (&local_14c)[32] = *reinterpret_cast<undefined1 (*)[32]>(bea_frame_ + 0x180 - 0x14c);
  _MEMORYSTATUS &local_12c = *reinterpret_cast<_MEMORYSTATUS *>(bea_frame_ + 0x180 - 0x12c);
  undefined1 (&local_10c)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x180 - 0x10c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x180 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x180 - 0x4);
  local_168 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x158), bea_arg(2), bea_arg(s_C__dev_ONSLAUGHT2_DXTexture_cpp_0065269c), bea_arg(0xc25));
  if (local_168 == (void *)0x0) {
    this_local = (undefined4 *)0x0;
  }
  else {
    this_local = (undefined4 *)FUN_00556cc0(bea_arg(local_168));
  }
  local_160 = this_local[0x28];
  local_164 = this_local[1];
  local_168 = (void *)*this_local;
  FUN_00423910(bea_arg(param_2));
  FUN_00423910(bea_arg(param_2));
  FUN_00423960(bea_arg(param_2), bea_arg(this_local), bea_arg(0x158), bea_arg(1));
  local_174 = 0;
  if (0 < (int)this_local[0x4e]) {
    puVar6 = this_local + 0x2e;
    do {
      local_170 = puVar6;
      FUN_00423910(bea_arg(param_2));
      FUN_00423960(bea_arg(param_2), bea_arg(&local_178), bea_arg(4), bea_arg(1));
      if (local_178 < 2) {
        local_178 = 1;
      }
      *(short *)((int)this_local + 0x156) = (short)local_178;
      iVar4 = 0;
      do {
        if ((int)this_local[0x2b] <= 1 << ((byte)iVar4 & 0x1f)) break;
        iVar4 = iVar4 + 1;
      } while (BEA_LOOP_GUARD((iVar4 < 0x20)));
      *(int *)(iVar4 * 4 + 0x9cc058) = *(int *)(iVar4 * 4 + 0x9cc058) + 1;
      if ((char)param_1 == '\0') {
        FUN_00557300(bea_arg(this_local), bea_arg(local_174));
      }
      else {
        switch(this_local[0x51]) {
        default:
          uVar7 = 0;
          break;
        case 1:
          uVar7 = 0x19;
          break;
        case 2:
          uVar7 = 0x1a;
          break;
        case 3:
          uVar7 = 0x16;
          break;
        case 4:
          uVar7 = 0x15;
          break;
        case 5:
          uVar7 = 0x17;
          break;
        case 6:
          uVar7 = 0x31545844;
          break;
        case 7:
          uVar7 = 0x32545844;
          break;
        case 8:
          uVar7 = 0x34545844;
          break;
        case 9:
          uVar7 = 0x3c;
          break;
        case 10:
          uVar7 = 0x3f;
        }
        iVar4 = FUN_00513a10(bea_arg(&DAT_00855bb0), bea_arg(this_local[0x2b]), bea_arg((int)*(short *)(this_local + 0x2c)), bea_arg(local_178), bea_arg(0), bea_arg(uVar7), bea_arg(this_local[0x54]), bea_arg(puVar6));
        if (iVar4 < 0) {
          FUN_00559410(bea_arg(this_local), bea_arg(param_2), bea_arg(local_174), bea_arg(local_178));
        }
        else {
          GlobalMemoryStatus(&local_12c);
          iVar4 = 0;
          if (0 < local_178) {
            do {
              FUN_00423910(bea_arg(param_2));
              bea_vcall<uint32_t>(*puVar6, 0x44, (int *)*puVar6,iVar4,local_14c);
              iVar2 = bea_vcall<uint32_t>(*puVar6, 0x4c, (int *)*puVar6,iVar4,&local_160,0,0);
              if (iVar2 < 0) {
                return (undefined4 *)(this_local);
              }
              uVar5 = (uint)(*(short *)(this_local + 0x2c) >> ((byte)iVar4 & 0x1f));
              uStack_15c = *param_2 / uVar5;
              iVar2 = 0;
              if (uVar5 != 0) {
                iStack_158 = 0;
                iVar2 = iStack_150;
                uStack_16c = uVar5;
                do {
                  FUN_00423960(bea_arg(param_2), bea_arg(iVar2), bea_arg(uStack_15c), bea_arg(1));
                  iVar2 = iVar2 + iStack_154;
                  uStack_16c = uStack_16c - 1;
                } while (BEA_LOOP_GUARD((uStack_16c != 0)));
                uStack_16c = 0;
                iVar2 = iStack_158;
              }
              bea_vcall<uint32_t>(this_local[iVar2 + 0x2e], 0x50, (int *)this_local[iVar2 + 0x2e],iVar4);
              iVar4 = iVar4 + 1;
              puVar6 = local_170;
            } while (BEA_LOOP_GUARD((iVar4 < local_178)));
          }
        }
      }
      local_174 = local_174 + 1;
      puVar6 = puVar6 + 1;
      local_170 = puVar6;
    } while (BEA_LOOP_GUARD((local_174 < (int)this_local[0x4e])));
  }
  this_local[0x28] = local_160;
  uVar7 = 0;
  this_local[1] = local_164;
  this_local[0x29] = 0;
  this_local[0x50] = 0;
  *this_local = local_168;
  switch(this_local[0x51]) {
  default:
    uVar3 = 0;
    break;
  case 1:
    uVar3 = 0x19;
    break;
  case 2:
    uVar3 = 0x1a;
    break;
  case 3:
    uVar3 = 0x16;
    break;
  case 4:
    uVar3 = 0x15;
    break;
  case 5:
    uVar3 = 0x17;
    break;
  case 6:
    uVar3 = 0x31545844;
    break;
  case 7:
    uVar3 = 0x32545844;
    break;
  case 8:
    uVar3 = 0x34545844;
    break;
  case 9:
    uVar3 = 0x3c;
    break;
  case 10:
    uVar3 = 0x3f;
  }
  switch(this_local[0x51]) {
  case 1:
    uVar7 = 0x19;
    break;
  case 2:
    uVar7 = 0x1a;
    break;
  case 3:
    uVar7 = 0x16;
    break;
  case 4:
    uVar7 = 0x15;
    break;
  case 5:
    uVar7 = 0x17;
    break;
  case 6:
    uVar7 = 0x31545844;
    break;
  case 7:
    uVar7 = 0x32545844;
    break;
  case 8:
    uVar7 = 0x34545844;
    break;
  case 9:
    uVar7 = 0x3c;
    break;
  case 10:
    uVar7 = 0x3f;
  }
  v0 = (char *)(this_local + 2);
  FUN_00513640(bea_arg(uVar3));
  FUN_00513640(bea_arg(uVar7));
  CRenderThing__vslot3(&DAT_009c3df0);
  puVar6 = DAT_0083d9b0;
  do {
    if ((puVar6 == (undefined4 *)0x0) || (this_local == (undefined4 *)0x0)) {
      iVar4 = FUN_00568390(bea_arg(v0), bea_arg(s_FrontEnd_v3_FE_BEA_title_nav_sym_0062a0f8));
      if (iVar4 == 0) {
        CRenderThing__vslot3(s_leaker__00652928);
      }
      return (undefined4 *)(this_local);
    }
    iVar4 = FUN_00568390(bea_arg(v0), bea_arg(puVar6 + 2));
    if (iVar4 == 0) {
      iVar4 = -1;
      pcVar8 = v0;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (BEA_LOOP_GUARD((cVar1 != '\0')));
      if ((((iVar4 != -2) && (*v0 != '*')) && (puVar6[0x2a] == this_local[0x2a])) && (puVar6 != this_local)) {
        FUN_0055de9b(local_10c,s_Warning___Texture__s_in_resource_00652934,v0);
        CRenderThing__vslot3(local_10c);
      }
    }
    puVar6 = (undefined4 *)puVar6[0x28];
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00559be0, ap_00559be0));
