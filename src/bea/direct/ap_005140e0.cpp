// auto-ported from 005140e0_FUN_005140e0.c (FUN_005140e0, 260 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char IAT;
#define DAT_008892d5 GLOBAL_AT(char, 0x008892d5)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_00888a08 GLOBAL_AT(int, 0x00888a08)
#define DAT_00889180 GLOBAL_AT(int, 0x00889180)
#define DAT_00888a0c GLOBAL_AT(int, 0x00888a0c)
#define DAT_008891bc GLOBAL_AT(int, 0x008891bc)
#define DAT_00889188 GLOBAL_AT(int, 0x00889188)
#define DAT_00889184 GLOBAL_AT(int, 0x00889184)
#define s_AVIStreamWrite___failed__0063df40 ((char*)0x0063df40)
typedef uint32_t (BEA_CDECL* AVIStreamWrite_t)(...);
#define AVIStreamWrite (*(AVIStreamWrite_t*)0x005d8018)   /* AVIFIL32.DLL import, via the IAT */
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};

static void BEA_CDECL ap_005140e0(void)
{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  int * &local_30 = *reinterpret_cast<int * *>(bea_frame_ + 0x30 - 0x30);
  int &iStack_2c = *reinterpret_cast<int *>(bea_frame_ + 0x30 - 0x2c);
  undefined1 (&auStack_28)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x30 - 0x28);
  undefined4 * &puStack_24 = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0x30 - 0x24);
  undefined1 (&auStack_20)[32] = *reinterpret_cast<undefined1 (*)[32]>(bea_frame_ + 0x30 - 0x20);
  if (DAT_008892d5 != '\0') {
    iVar2 = bea_vcall<uint32_t>(DAT_00888a50, 0x98, DAT_00888a50,0,&local_30);
    if (-1 < iVar2) {
      bea_vcall<uint32_t>(local_30, 0x30, local_30,auStack_20);
      iVar2 = bea_vcall<uint32_t>(local_30, 0x34, local_30,auStack_28,0,0x10);
      uVar1 = DAT_00888a08;
      if (-1 < iVar2) {
        puVar4 = (undefined4 *)(DAT_00889180 + (DAT_00888a0c + -1) * DAT_00888a08 * 4);
        if (0 < DAT_00888a0c) {
          iStack_2c = DAT_00888a0c;
          do {
            puVar5 = puStack_24;
            puVar6 = puVar4;
            for (uVar3 = uVar1 & 0x3fffffff; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
            puStack_24 = puStack_24 + uVar1;
            puVar4 = puVar4 + -uVar1;
            for (iVar2 = 0; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
              *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
              puVar5 = (undefined4 *)((int)puVar5 + 1);
              puVar6 = (undefined4 *)((int)puVar6 + 1);
            }
            iStack_2c = iStack_2c + -1;
          } while (BEA_LOOP_GUARD((iStack_2c != 0)));
          iStack_2c = 0;
        }
        iVar2 = AVIStreamWrite(DAT_008891bc,DAT_00889188,1,DAT_00889180,
                               *(undefined4 *)(DAT_00889184 + 0x14),0x10,0,0);
        if (iVar2 < 0) {
          CRenderThing__vslot3(s_AVIStreamWrite___failed__0063df40);
        }
        bea_vcall<uint32_t>(local_30, 0x38, local_30);
        bea_vcall<uint32_t>(local_30, 0x8, local_30);
        DAT_00889188 = DAT_00889188 + 1;
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005140e0, ap_005140e0));
