// auto-ported from 00503ac0_FUN_00503ac0.c (FUN_00503ac0, 771 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x270: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00634204 GLOBAL_AT(int, 0x00634204)
#define DAT_009c68c8 GLOBAL_AT(char, 0x009c68c8)
#define DAT_0063424c GLOBAL_AT(int, 0x0063424c)
#define DAT_00634324 GLOBAL_AT(int, 0x00634324)
#define DAT_009c68b4 GLOBAL_AT(char, 0x009c68b4)
#define DAT_00634228 GLOBAL_AT(int, 0x00634228)
#define DAT_006342e8 GLOBAL_AT(int, 0x006342e8)
#define DAT_009c73f0 GLOBAL_AT(int, 0x009c73f0)
#define DAT_006342f4 GLOBAL_AT(int, 0x006342f4)
#define DAT_00634264 GLOBAL_AT(int, 0x00634264)
#define DAT_009c68b6 GLOBAL_AT(char, 0x009c68b6)
#define DAT_0063430c GLOBAL_AT(int, 0x0063430c)
#define DAT_00634270 GLOBAL_AT(int, 0x00634270)
#define DAT_009c68e8 GLOBAL_AT(char, 0x009c68e8)
#define DAT_00634300 GLOBAL_AT(int, 0x00634300)
#define DAT_00634210 GLOBAL_AT(int, 0x00634210)
#define DAT_009c68b5 GLOBAL_AT(char, 0x009c68b5)
#define DAT_009c68ad GLOBAL_AT(char, 0x009c68ad)
#define DAT_009c68a0 GLOBAL_AT(int, 0x009c68a0)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_0063418c GLOBAL_AT(int, 0x0063418c)
#define DAT_006341a4 GLOBAL_AT(int, 0x006341a4)
#define DAT_00634120 GLOBAL_AT(int, 0x00634120)
#define DAT_00634144 GLOBAL_AT(int, 0x00634144)
#define DAT_00634198 GLOBAL_AT(int, 0x00634198)
#define DAT_00634234 GLOBAL_AT(int, 0x00634234)
#define DAT_00634330 GLOBAL_AT(int, 0x00634330)
#define DAT_00634240 GLOBAL_AT(int, 0x00634240)
#define DAT_009c68e0 GLOBAL_AT(int, 0x009c68e0)
#define DAT_00634318 GLOBAL_AT(int, 0x00634318)
#define DAT_00634174 GLOBAL_AT(int, 0x00634174)
#define DAT_006342a0 GLOBAL_AT(int, 0x006342a0)
#define DAT_0063427c GLOBAL_AT(int, 0x0063427c)
#define DAT_0063415c GLOBAL_AT(int, 0x0063415c)
#define DAT_006342dc GLOBAL_AT(int, 0x006342dc)
#define DAT_009c73d8 GLOBAL_AT(int, 0x009c73d8)
#define s_RenderInfo_shader__custom_declar_0063d0a4 ((char*)0x0063d0a4)
#define s_RenderInfo_shader_0063d0cc ((char*)0x0063d0cc)
typedef uint32_t (BEA_THISCALL* FUN_0044a5f0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044a5f0_t> FUN_0044a5f0 = {(FUN_0044a5f0_t)0x0044a5f0};
typedef int * (BEA_CDECL* FUN_00502060_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00502060_t> FUN_00502060 = {(FUN_00502060_t)0x00502060};

static uint32_t BEA_CDECL ap_00503ac0(void)
{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  alignas(16) uint8_t bea_frame_[0x270] = {};   // the original stack frame (emulate_frame)
  int &local_270 = *reinterpret_cast<int *>(bea_frame_ + 0x270 - 0x270);
  char * &local_26c = *reinterpret_cast<char * *>(bea_frame_ + 0x270 - 0x26c);
  int * &local_268 = *reinterpret_cast<int * *>(bea_frame_ + 0x270 - 0x268);
  int &local_264 = *reinterpret_cast<int *>(bea_frame_ + 0x270 - 0x264);
  int &local_260 = *reinterpret_cast<int *>(bea_frame_ + 0x270 - 0x260);
  int &local_25c = *reinterpret_cast<int *>(bea_frame_ + 0x270 - 0x25c);
  undefined1 (&local_258)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x270 - 0x258);
  undefined4 &local_248 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x270 - 0x248);
  undefined4 &local_244 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x270 - 0x244);
  undefined4 &local_240 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x270 - 0x240);
  undefined4 &local_238 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x270 - 0x238);
  undefined4 &local_234 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x270 - 0x234);
  undefined4 &local_230 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x270 - 0x230);
  undefined4 &local_22c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x270 - 0x22c);
  undefined4 &local_228 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x270 - 0x228);
  undefined4 &local_224 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x270 - 0x224);
  undefined4 &local_220 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x270 - 0x220);
  undefined4 &local_21c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x270 - 0x21c);
  undefined4 &local_218 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x270 - 0x218);
  undefined4 &local_214 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x270 - 0x214);
  undefined1 (&local_210)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x270 - 0x210);
  undefined4 (&local_200)[4] = *reinterpret_cast<undefined4 (*)[4]>(bea_frame_ + 0x270 - 0x200);
  undefined4 (&auStack_1f0)[124] = *reinterpret_cast<undefined4 (*)[124]>(bea_frame_ + 0x270 - 0x1f0);
  local_200[0] = DAT_00634204;
  if (DAT_009c68c8 == '\0') {
    local_200[1] = DAT_0063424c;
  }
  else {
    local_200[1] = DAT_00634324;
  }
  if (DAT_009c68b4 == '\0') {
    local_200[2] = DAT_00634228;
  }
  else {
    local_200[2] = DAT_006342e8;
  }
  iVar3 = 3;
  if (DAT_009c73f0 != 0) {
    iVar3 = 4;
    local_200[3] = DAT_006342f4;
  }
  local_200[iVar3] = DAT_00634264;
  iVar4 = iVar3 + 1;
  if (DAT_009c68b6 != '\0') {
    local_200[iVar4] = DAT_0063430c;
    iVar4 = iVar3 + 2;
  }
  local_200[iVar4] = DAT_00634270;
  iVar3 = iVar4 + 1;
  if (DAT_009c68e8 != '\0') {
    local_200[iVar3] = DAT_00634300;
    iVar3 = iVar4 + 2;
  }
  local_260 = 4;
  local_200[iVar3] = DAT_00634210;
  iVar4 = iVar3 + 1;
  if (DAT_009c68c8 != '\0') {
    local_260 = 2;
  }
  local_270 = 0;
  if (DAT_009c68b5 == '\0') {
    if (DAT_009c68ad != '\0') {
      local_26c = (char*)&DAT_009c68a0;
      puVar2 = local_200 + iVar4;
      local_268 = &DAT_009c65c0;
      local_264 = 8;
      do {
        if (*local_26c != '\0') {
          if (local_270 < local_260) {
            local_25c = 0;
            local_248 = 0;
            local_244 = 0;
            local_240 = 0;
            local_238 = 0;
            local_234 = 0;
            local_230 = 0;
            local_22c = 0;
            FUN_0044a5f0(bea_arg(local_258), bea_arg(0), bea_arg(0), bea_arg(0));
            local_228 = 0;
            local_224 = 0;
            local_220 = 0;
            local_21c = 0;
            local_218 = 0;
            local_214 = 0;
            FUN_0044a5f0(bea_arg(local_210), bea_arg(0), bea_arg(0), bea_arg(0));
            piVar5 = local_268;
            piVar6 = &local_25c;
            for (iVar3 = 0x17; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
              *piVar6 = *piVar5;
              piVar5 = piVar5 + 1;
              piVar6 = piVar6 + 1;
            }
            uVar1 = DAT_0063418c;
            if ((local_25c == 0) || (uVar1 = DAT_006341a4, local_25c == 1)) {
              *puVar2 = uVar1;
              puVar2[1] = DAT_00634120;
              iVar4 = iVar4 + 2;
              puVar2 = puVar2 + 2;
              *puVar2 = DAT_00634144;
            }
            else {
              if (local_25c != 2) goto LAB_00503cd3;
              *puVar2 = DAT_00634198;
            }
            iVar4 = iVar4 + 1;
            puVar2 = puVar2 + 1;
          }
LAB_00503cd3:
          local_270 = local_270 + 1;
        }
        local_26c = local_26c + 1;
        local_268 = local_268 + 0x17;
        local_264 = local_264 + -1;
      } while (BEA_LOOP_GUARD((local_264 != 0)));
      goto LAB_00503d10;
    }
    local_200[iVar4] = DAT_00634234;
  }
  else {
    local_200[iVar4] = DAT_00634330;
  }
  iVar4 = iVar3 + 2;
LAB_00503d10:
  local_200[iVar4] = DAT_00634240;
  iVar3 = iVar4 + 1;
  if (DAT_009c68e0 != 0) {
    local_200[iVar3] = DAT_00634318;
    iVar3 = iVar4 + 2;
  }
  local_200[iVar3] = DAT_00634174;
  local_200[iVar3 + 1] = DAT_006342a0;
  local_200[iVar3 + 2] = DAT_0063427c;
  local_200[iVar3 + 3] = DAT_0063415c;
  iVar4 = iVar3 + 4;
  if (DAT_009c68b5 == '\0') {
    local_200[iVar4] = DAT_006342dc;
    iVar4 = iVar3 + 5;
  }
  local_200[iVar4] = 0;
  iVar3 = iVar4 * 4 + 4;
  if (DAT_009c73d8 != 0) {
    return FUN_00502060(bea_arg(s_RenderInfo_shader__custom_declar_0063d0a4), bea_arg(0), bea_arg(DAT_009c73d8), bea_arg(local_200), bea_arg(iVar3), bea_arg(0));
  }
  return FUN_00502060(bea_arg(s_RenderInfo_shader_0063d0cc), bea_arg(0), bea_arg(0), bea_arg(local_200), bea_arg(iVar3), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00503ac0, ap_00503ac0));
