// auto-ported from 004c5d50_FUN_004c5d50.c (FUN_004c5d50, 6971 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit this_00: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-frame 0x560: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char Mat34;
typedef char Vec3;
typedef char fStack_2c8;
typedef char fStack_2d0;
typedef char fStack_2d8;
typedef char fStack_2e0;
typedef char fStack_2e8;
typedef char fStack_360;
typedef char fStack_4e0;
typedef char fStack_4e4;
typedef char fStack_4fc;
typedef char fStack_508;
typedef char fStack_50c;
typedef char fStack_510;
typedef char fStack_518;
typedef char fStack_51c;
typedef char fStack_520;
typedef char iStack_558;
typedef char lStack_45c;
#define DAT_0082b39c GLOBAL_AT(int, 0x0082b39c)
#define DAT_0089c9a4 GLOBAL_AT(int, 0x0089c9a4)
#define DAT_0089ce4c GLOBAL_AT(int, 0x0089ce4c)
#define DAT_009c63ec GLOBAL_AT(int, 0x009c63ec)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00829e58 GLOBAL_AT(int, 0x00829e58)
#define DAT_00829e5c GLOBAL_AT(int, 0x00829e5c)
#define DAT_00829e60 GLOBAL_AT(int, 0x00829e60)
#define DAT_00829e64 GLOBAL_AT(int, 0x00829e64)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Vec3* (BEA_THISCALL* FUN_00401ee0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ee0_t> FUN_00401ee0 = {(FUN_00401ee0_t)0x00401ee0};
typedef Mat34* (BEA_THISCALL* FUN_00401f10_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401f10_t> FUN_00401f10 = {(FUN_00401f10_t)0x00401f10};
typedef f80 (BEA_THISCALL* FUN_004026b0_t)(uint32_t);
static const bea_guard<FUN_004026b0_t> FUN_004026b0 = {(FUN_004026b0_t)0x004026b0};
typedef Vec3* (BEA_THISCALL* FUN_0040d120_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d120_t> FUN_0040d120 = {(FUN_0040d120_t)0x0040d120};
typedef Vec3* (BEA_THISCALL* FUN_0040d150_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d150_t> FUN_0040d150 = {(FUN_0040d150_t)0x0040d150};
typedef float10 (BEA_THISCALL* FUN_0040d180_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0040d180_t> FUN_0040d180 = {(FUN_0040d180_t)0x0040d180};
typedef Vec3* (BEA_THISCALL* FUN_0040d2c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d2c0_t> FUN_0040d2c0 = {(FUN_0040d2c0_t)0x0040d2c0};
typedef uint32_t (BEA_THISCALL* FUN_0040d320_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d320_t> FUN_0040d320 = {(FUN_0040d320_t)0x0040d320};
typedef Vec3* (BEA_THISCALL* FUN_00411a60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00411a60_t> FUN_00411a60 = {(FUN_00411a60_t)0x00411a60};
typedef uint32_t (BEA_THISCALL* FUN_0041ad10_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0041ad10_t> FUN_0041ad10 = {(FUN_0041ad10_t)0x0041ad10};
typedef uint32_t (BEA_THISCALL* FUN_004944b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004944b0_t> FUN_004944b0 = {(FUN_004944b0_t)0x004944b0};
typedef float10 (BEA_THISCALL* FUN_004c10c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004c10c0_t> FUN_004c10c0 = {(FUN_004c10c0_t)0x004c10c0};
typedef uint32_t (BEA_THISCALL* FUN_004c5c50_t)(uint32_t);
static const bea_guard<FUN_004c5c50_t> FUN_004c5c50 = {(FUN_004c5c50_t)0x004c5c50};
typedef uint32_t (BEA_THISCALL* FUN_004c78b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004c78b0_t> FUN_004c78b0 = {(FUN_004c78b0_t)0x004c78b0};
typedef float10 (BEA_THISCALL* FUN_004c78d0_t)(uint32_t);
static const bea_guard<FUN_004c78d0_t> FUN_004c78d0 = {(FUN_004c78d0_t)0x004c78d0};
typedef uint32_t (BEA_THISCALL* FUN_004c7900_t)(uint32_t);
static const bea_guard<FUN_004c7900_t> FUN_004c7900 = {(FUN_004c7900_t)0x004c7900};
typedef float10 (BEA_THISCALL* FUN_004c7950_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004c7950_t> FUN_004c7950 = {(FUN_004c7950_t)0x004c7950};
typedef uint32_t (BEA_THISCALL* FUN_004c7d90_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004c7d90_t> FUN_004c7d90 = {(FUN_004c7d90_t)0x004c7d90};
typedef uint32_t (BEA_CDECL* FUN_004c7db0_t)(void);
static const bea_guard<FUN_004c7db0_t> FUN_004c7db0 = {(FUN_004c7db0_t)0x004c7db0};
typedef uint32_t (BEA_THISCALL* FUN_005501b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005501b0_t> FUN_005501b0 = {(FUN_005501b0_t)0x005501b0};
typedef uint32_t (BEA_THISCALL* FUN_00550200_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550200_t> FUN_00550200 = {(FUN_00550200_t)0x00550200};

static void BEA_THISCALL ap_004c5d50(void * this_, undefined4 param_1)
{
  ushort uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  void *pvVar14;
  void *pvVar15;
  short *psVar16;
  void *this_00 = 0;
  int iVar17;
  uint uVar18;
  uint uVar19;
  float *pfVar20;
  void *this_01;
  float *pfVar21;
  void *this_02;
  float10 fVar22;
  float10 fVar23;
  undefined1 *puVar24;
  float fVar25;
  void *pvVar26;

  alignas(16) uint8_t bea_frame_[0x560] = {};   // the original stack frame (emulate_frame)
  int &iStack_558 = *reinterpret_cast<int *>(bea_frame_ + 0x560 - 0x558);
  uint &uStack_550 = *reinterpret_cast<uint *>(bea_frame_ + 0x560 - 0x550);
  uint &uStack_54c = *reinterpret_cast<uint *>(bea_frame_ + 0x560 - 0x54c);
  void * &pvStack_548 = *reinterpret_cast<void * *>(bea_frame_ + 0x560 - 0x548);
  void * &local_544 = *reinterpret_cast<void * *>(bea_frame_ + 0x560 - 0x544);
  undefined4 &uStack_540 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x540);
  uint &uStack_53c = *reinterpret_cast<uint *>(bea_frame_ + 0x560 - 0x53c);
  uint &uStack_538 = *reinterpret_cast<uint *>(bea_frame_ + 0x560 - 0x538);
  int &iStack_534 = *reinterpret_cast<int *>(bea_frame_ + 0x560 - 0x534);
  float (&afStack_530)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x560 - 0x530);
  float &fStack_520 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x520);
  float &fStack_51c = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x51c);
  float &fStack_518 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x518);
  float &fStack_510 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x510);
  float &fStack_50c = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x50c);
  float &fStack_508 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x508);
  undefined4 &uStack_500 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x500);
  float &fStack_4fc = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x4fc);
  float &fStack_4f8 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x4f8);
  float &fStack_4f4 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x4f4);
  float &fStack_4f0 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x4f0);
  undefined4 &uStack_4ec = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x4ec);
  float &fStack_4e8 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x4e8);
  float &fStack_4e4 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x4e4);
  float &fStack_4e0 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x4e0);
  undefined4 &uStack_4dc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x4dc);
  float &fStack_4d8 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x4d8);
  uint &uStack_4d4 = *reinterpret_cast<uint *>(bea_frame_ + 0x560 - 0x4d4);
  undefined4 &uStack_4d0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x4d0);
  undefined4 &uStack_4cc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x4cc);
  undefined4 &uStack_4c8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x4c8);
  undefined4 &uStack_4c4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x4c4);
  float &fStack_4c0 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x4c0);
  float &fStack_4bc = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x4bc);
  float &fStack_4b8 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x4b8);
  undefined4 &uStack_4b4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x4b4);
  float (&afStack_4b0)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x560 - 0x4b0);
  float &fStack_4a0 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x4a0);
  float &fStack_49c = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x49c);
  float &fStack_498 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x498);
  float &fStack_490 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x490);
  float &fStack_48c = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x48c);
  float &fStack_488 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x488);
  float &fStack_480 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x480);
  float &fStack_47c = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x47c);
  float &fStack_478 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x478);
  undefined4 &uStack_474 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x474);
  float &local_470 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x470);
  float &fStack_46c = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x46c);
  float &fStack_468 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x468);
  uint &uStack_460 = *reinterpret_cast<uint *>(bea_frame_ + 0x560 - 0x460);
  longlong &lStack_45c = *reinterpret_cast<longlong *>(bea_frame_ + 0x560 - 0x45c);
  uint &uStack_454 = *reinterpret_cast<uint *>(bea_frame_ + 0x560 - 0x454);
  float &fStack_450 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x450);
  float &fStack_44c = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x44c);
  float &fStack_448 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x448);
  undefined4 &uStack_444 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x444);
  float &fStack_440 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x440);
  float &fStack_43c = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x43c);
  float &fStack_438 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x438);
  undefined4 &uStack_434 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x434);
  undefined4 &uStack_430 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x430);
  undefined4 &uStack_42c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x42c);
  undefined4 &uStack_428 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x428);
  undefined4 &uStack_424 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x424);
  undefined4 &uStack_420 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x420);
  undefined4 &uStack_41c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x41c);
  undefined4 &uStack_418 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x418);
  undefined4 &uStack_414 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x414);
  undefined4 &uStack_410 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x410);
  undefined4 &uStack_40c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x40c);
  undefined4 &uStack_408 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x408);
  undefined4 &uStack_404 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x404);
  undefined4 &uStack_400 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x400);
  undefined4 &uStack_3fc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x3fc);
  undefined4 &uStack_3f8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x3f8);
  undefined4 &uStack_3f4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x3f4);
  undefined4 &uStack_3f0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x3f0);
  undefined4 &uStack_3ec = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x3ec);
  undefined4 &uStack_3e8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x3e8);
  undefined4 &uStack_3e4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x3e4);
  undefined4 &uStack_3e0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x3e0);
  undefined4 &uStack_3dc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x3dc);
  undefined4 &uStack_3d8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x3d8);
  undefined4 &uStack_3d4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x3d4);
  undefined4 &uStack_3d0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x3d0);
  undefined4 &uStack_3cc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x3cc);
  undefined4 &uStack_3c8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x3c8);
  undefined4 &uStack_3c4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x3c4);
  undefined1 (&auStack_3c0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x3c0);
  undefined4 &uStack_3b0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x3b0);
  undefined4 &uStack_3ac = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x3ac);
  undefined4 &uStack_3a8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x3a8);
  float &fStack_3a0 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x3a0);
  float &fStack_39c = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x39c);
  float &fStack_398 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x398);
  float &fStack_390 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x390);
  float &fStack_38c = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x38c);
  float &fStack_388 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x388);
  float &fStack_380 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x380);
  float &fStack_37c = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x37c);
  float &fStack_378 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x378);
  undefined4 &uStack_370 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x370);
  undefined4 &uStack_36c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x36c);
  undefined4 &uStack_368 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x368);
  float &fStack_360 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x360);
  float &fStack_35c = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x35c);
  float &fStack_358 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x358);
  undefined4 &uStack_350 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x350);
  undefined4 &uStack_34c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x34c);
  undefined4 &uStack_348 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x348);
  float &fStack_340 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x340);
  float &fStack_33c = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x33c);
  float &fStack_338 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x338);
  float &fStack_330 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x330);
  float &fStack_32c = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x32c);
  float &fStack_328 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x328);
  undefined4 &uStack_320 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x320);
  float &fStack_31c = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x31c);
  float &fStack_318 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x318);
  undefined4 &uStack_310 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x310);
  float &fStack_30c = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x30c);
  float &fStack_308 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x308);
  undefined4 &uStack_300 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x300);
  float &fStack_2fc = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x2fc);
  float &fStack_2f8 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x2f8);
  float (&afStack_2f0)[2] = *reinterpret_cast<float (*)[2]>(bea_frame_ + 0x560 - 0x2f0);
  float &fStack_2e8 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x2e8);
  float &fStack_2e0 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x2e0);
  float &fStack_2d8 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x2d8);
  float &fStack_2d0 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x2d0);
  float &fStack_2c8 = *reinterpret_cast<float *>(bea_frame_ + 0x560 - 0x2c8);
  undefined4 &uStack_2c0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x2c0);
  undefined4 &uStack_2bc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x2bc);
  undefined4 &uStack_2b0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x2b0);
  undefined4 &uStack_2ac = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x2ac);
  undefined4 &uStack_2a0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x2a0);
  undefined4 &uStack_29c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x560 - 0x29c);
  undefined1 (&auStack_290)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x290);
  undefined1 (&auStack_280)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x280);
  undefined1 (&auStack_270)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x270);
  undefined1 (&auStack_260)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x260);
  undefined1 (&auStack_250)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x250);
  undefined1 (&auStack_240)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x240);
  undefined1 (&auStack_230)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x230);
  undefined1 (&auStack_220)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x220);
  undefined1 (&auStack_210)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x210);
  undefined1 (&auStack_200)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x200);
  undefined1 (&auStack_1f0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x1f0);
  undefined1 (&auStack_1e0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x1e0);
  undefined1 (&auStack_1d0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x1d0);
  undefined1 (&auStack_1c0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x1c0);
  undefined1 (&auStack_1b0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x1b0);
  undefined1 (&auStack_1a0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x1a0);
  undefined1 (&auStack_190)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x190);
  undefined1 (&auStack_180)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x180);
  undefined1 (&auStack_170)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x170);
  undefined1 (&auStack_160)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x160);
  undefined1 (&auStack_150)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x150);
  undefined1 (&auStack_140)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x140);
  undefined1 (&auStack_130)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x130);
  undefined1 (&auStack_120)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x120);
  undefined1 (&auStack_110)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x110);
  undefined1 (&auStack_100)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x100);
  undefined1 (&auStack_f0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0xf0);
  undefined1 (&auStack_e0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0xe0);
  undefined1 (&auStack_d0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0xd0);
  undefined1 (&auStack_c0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0xc0);
  undefined1 (&auStack_b0)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x560 - 0xb0);
  undefined1 (&auStack_80)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x80);
  undefined4 (&auStack_70)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x560 - 0x70);
  undefined1 (&auStack_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x560 - 0x40);
  float (&afStack_30)[12] = *reinterpret_cast<float (*)[12]>(bea_frame_ + 0x560 - 0x30);
  local_544 = this_;
  FUN_004c7db0();
  iVar2 = *(int *)((int)this_ + 0x54);
  if (DAT_0082b39c == 0) {
    FUN_004c5c50(bea_arg(this_00));
  }
  bea_vcall<uint32_t>((&DAT_0089c9a4)[DAT_0089ce4c], 0x0, &local_470);
  bea_vcall<uint32_t>((&DAT_0089c9a4)[DAT_0089ce4c], 0x4, &uStack_320);
  uStack_454 = DAT_009c63ec & 0xf;
  uVar18 = (-(uint)(DAT_0089ce4c != 0) & 0x10) + 0x10;
  uStack_4d4 = (-(uint)(DAT_0089ce4c != 0) & 0x40) + 0x40;
  if ((float)*(int *)((int)this_ + 0x70) == 0.0f) {
    fStack_4fc = 0.0f;
  }
  else {
    fStack_4fc = 1.0f / (float)*(int *)((int)this_ + 0x70);
  }
  lStack_45c = (longlong)ROUND(fStack_4fc * 65536.0f);
  fStack_4c0 = -fStack_318;
  fStack_4bc = -fStack_308;
  fStack_4b8 = -fStack_2f8;
  uStack_460 = uVar18;
  fStack_4e8 = fStack_31c;
  fStack_4e4 = fStack_30c;
  fStack_4e0 = fStack_2fc;
  uStack_4d0 = uStack_320;
  uStack_4cc = uStack_310;
  uStack_4c8 = uStack_300;
  do {
    if (iVar2 == 0) {
      return;
    }
    iVar7 = *(int *)(iVar2 + 0x58);
    if ((iVar7 == 0) || (iStack_534 = 1, *(int *)(iVar7 + 0xa0) == 0)) {
      iStack_534 = 0;
    }
    if (iVar7 != 0) {
      fStack_480 = *(float *)(iVar7 + 0x80);
      fStack_47c = *(float *)(iVar7 + 0x84);
      fStack_478 = *(float *)(iVar7 + 0x88);
      uStack_474 = *(undefined4 *)(iVar7 + 0x8c);
    }
    uVar19 = 0;
    if (((0.0f <= *(float *)(iVar2 + 0x60)) || (*(int *)(iVar2 + 0x60) == -0x40000000)) &&
       ((iVar7 == 0 ||
        ((*(int *)(iVar7 + 0xac) == -0x40800000 ||
         (DAT_00672fd0 - 0.09999f <= *(float *)(iVar7 + 0xac))))))) {
      uVar1 = *(ushort *)(iVar2 + 0x7e);
      uVar6 = (uint)(short)uVar1;
      if (((uVar6 & 0xf) == uStack_454) || ((uStack_4d4 & uVar6) != 0)) {
        fStack_4f8 = *(float *)(iVar2 + 0x38);
        fStack_4f4 = *(float *)(iVar2 + 0x3c);
        fStack_4f0 = *(float *)(iVar2 + 0x40);
        uStack_4ec = *(undefined4 *)(iVar2 + 0x44);
        fVar25 = fStack_4f8;
        if (iVar7 != 0) {
          fStack_4f4 = fStack_4f4 + fStack_47c;
          fStack_4f0 = fStack_4f0 + fStack_478;
          fVar25 = fStack_480 + fStack_4f8;
        }
        if ((9.765625e-06f <
             (*(float *)(iVar2 + 0x74) * *(float *)(iVar2 + 0x74)) /
             // class 19: the asm's order
             ((fStack_468 - fStack_4f0) * (fStack_468 - fStack_4f0) +
             (fStack_46c - fStack_4f4) * (fStack_46c - fStack_4f4) +
             (local_470 - fVar25) * (local_470 - fVar25))) ||
           (*(int *)((int)local_544 + 0xa0) != 0)) {
          uVar19 = 1;
          *(ushort *)(iVar2 + 0x7e) = uVar1 | (ushort)uVar18;
        }
        else {
          *(ushort *)(iVar2 + 0x7e) = ~(ushort)uVar18 & uVar1;
        }
        *(ushort *)(iVar2 + 0x7e) = *(ushort *)(iVar2 + 0x7e) & ~(ushort)uStack_4d4;
      }
      else {
        uVar19 = uVar6 & uVar18;
      }
      if (uVar19 == 0) goto LAB_004c7873;
      if (iVar7 != 0) {
        pfVar20 = (float *)(iVar7 + 0x10);
        pfVar21 = afStack_530;
        for (iVar17 = 0xc; BEA_LOOP_GUARD((iVar17 != 0)); iVar17 = iVar17 + -1) {
          *pfVar21 = *pfVar20;
          pfVar20 = pfVar20 + 1;
          pfVar21 = pfVar21 + 1;
        }
      }
      fStack_4d8 = *(float *)(iVar2 + 0x74);
      *(float *)(iVar2 + 0x94) = fStack_4d8;
      if ((*(int *)((int)local_544 + 0xa0) != 0) &&
         (fVar25 = local_470 - *(float *)(iVar2 + 0x38),
         fVar3 = fStack_46c - *(float *)(iVar2 + 0x3c),
         fVar4 = fStack_468 - *(float *)(iVar2 + 0x40),
         fVar25 = fVar25 * fVar25 + fVar4 * fVar4 + fVar3 * fVar3, 1.0f < fVar25)) {   // class 19: the asm's order
        *(float *)(iVar2 + 0x94) = SQRT(fVar25) * fStack_4d8;
      }
      pfVar20 = (float *)(iVar2 + 0x98);
      *pfVar20 = *(float *)(iVar2 + 0x38);
      *(undefined4 *)(iVar2 + 0x9c) = *(undefined4 *)(iVar2 + 0x3c);
      *(undefined4 *)(iVar2 + 0xa0) = *(undefined4 *)(iVar2 + 0x40);
      *(undefined4 *)(iVar2 + 0xa4) = *(undefined4 *)(iVar2 + 0x44);
      if (iVar7 != 0) {
        if (iStack_534 != 0) {
          // class 19: the asm's order (3 sums)
          fStack_450 = afStack_530[1] * *(float *)(iVar2 + 0x9c) +
                       afStack_530[0] * *pfVar20 + afStack_530[2] * *(float *)(iVar2 + 0xa0);
          fStack_44c = fStack_520 * *pfVar20 +
                       fStack_51c * *(float *)(iVar2 + 0x9c) + fStack_518 * *(float *)(iVar2 + 0xa0);
          fVar25 = *pfVar20;
          *pfVar20 = fStack_450;
          fStack_448 = fStack_510 * fVar25 +
                       fStack_50c * *(float *)(iVar2 + 0x9c) + fStack_508 * *(float *)(iVar2 + 0xa0);
          *(float *)(iVar2 + 0x9c) = fStack_44c;
          *(float *)(iVar2 + 0xa0) = fStack_448;
          *(undefined4 *)(iVar2 + 0xa4) = uStack_444;
        }
        *pfVar20 = fStack_480 + *pfVar20;
        *(float *)(iVar2 + 0x9c) = fStack_47c + *(float *)(iVar2 + 0x9c);
        *(float *)(iVar2 + 0xa0) = fStack_478 + *(float *)(iVar2 + 0xa0);
      }
      if (*(int *)((int)local_544 + 0xa4) != 0) {
        iStack_558 = (int)(longlong)ROUND(*(float *)(iVar2 + 0x78) - 0.5f);
        iVar7 = iStack_558 + *(int *)((int)local_544 + 0xac) * 0x10 +
                *(int *)((int)local_544 + 0x8c);
        *(undefined4 *)(iVar2 + 200) = (&DAT_00829e58)[iVar7 * 4];
        *(undefined4 *)(iVar2 + 0xcc) = (&DAT_00829e5c)[iVar7 * 4];
        *(undefined4 *)(iVar2 + 0xd0) = (&DAT_00829e60)[iVar7 * 4];
        *(undefined4 *)(iVar2 + 0xd4) = (&DAT_00829e64)[iVar7 * 4];
      }
      iVar7 = *(int *)((int)local_544 + 0x84);
      if (iVar7 == 0) {
        uVar18 = 0xff;
        uStack_550 = 0xff;
        uStack_54c = 0xff;
      }
      else {
        if (*(int *)((int)local_544 + 0x70) == 0) {
          if (*(int *)(iVar7 + 0xa8) == 0) {
            if (*(int *)(iVar7 + 0xa4) == 0) {
              fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x5c)), bea_arg(0x3f800000), bea_arg(iVar2));
              (*(uint8_t*)((char*)&iStack_558 + 0)) = (byte)(longlong)ROUND(fVar22 * (float10)255.0f);
              uStack_53c = CONCAT31(((*(uint32_t*)((char*)&uStack_53c) >> 8) & 0xffffffu),(byte)iStack_558);
              fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 100)), bea_arg(0x3f800000), bea_arg(iVar2));
              (*(uint8_t*)((char*)&iStack_558 + 0)) = (byte)(longlong)ROUND(fVar22 * (float10)255.0f);
              uStack_538 = CONCAT31(((*(uint32_t*)((char*)&uStack_538) >> 8) & 0xffffffu),(byte)iStack_558);
              fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x6c)), bea_arg(0x3f800000), bea_arg(iVar2));
              (*(uint8_t*)((char*)&iStack_558 + 0)) = (byte)(longlong)ROUND(fVar22 * (float10)255.0f);
            }
            else {
              FUN_004c10c0(bea_arg((void *)(iVar7 + 0x5c)), bea_arg(0x3f800000), bea_arg(iVar2));
              fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x74)), bea_arg(0x3f800000), bea_arg(iVar2));
              (*(uint8_t*)((char*)&iStack_558 + 0)) = (byte)(longlong)ROUND(fVar22 * (float10)255.0f);
              uStack_53c = CONCAT31(((*(uint32_t*)((char*)&uStack_53c) >> 8) & 0xffffffu),(byte)iStack_558);
              FUN_004c10c0(bea_arg((void *)(iVar7 + 100)), bea_arg(0x3f800000), bea_arg(iVar2));
              fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x7c)), bea_arg(0x3f800000), bea_arg(iVar2));
              (*(uint8_t*)((char*)&iStack_558 + 0)) = (byte)(longlong)ROUND(fVar22 * (float10)255.0f);
              uStack_538 = CONCAT31(((*(uint32_t*)((char*)&uStack_538) >> 8) & 0xffffffu),(byte)iStack_558);
              FUN_004c10c0(bea_arg((void *)(iVar7 + 0x6c)), bea_arg(0x3f800000), bea_arg(iVar2));
              fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x84)), bea_arg(0x3f800000), bea_arg(iVar2));
              (*(uint8_t*)((char*)&iStack_558 + 0)) = (byte)(longlong)ROUND(fVar22 * (float10)255.0f);
            }
          }
          else if (*(float *)(iVar7 + 0xac) <= 1.0f) {
            fVar25 = 1.0f - *(float *)(iVar7 + 0xac);
            fVar25 = fVar25 / fVar25;
            fVar3 = 1.0f - fVar25;
            fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x8c)), bea_arg(fVar25), bea_arg(iVar2));
            fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x74)), bea_arg(fVar25), bea_arg(iVar2));
            (*(uint8_t*)((char*)&iStack_558 + 0)) =
                 (byte)(longlong)
                       ROUND((fVar23 * (float10)fVar25 + (float10)(float)(fVar22 * (float10)fVar3))
                             * (float10)255.0f);
            uStack_53c = CONCAT31(((*(uint32_t*)((char*)&uStack_53c) >> 8) & 0xffffffu),(byte)iStack_558);
            fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x94)), bea_arg(fVar25), bea_arg(iVar2));
            fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x7c)), bea_arg(fVar25), bea_arg(iVar2));
            (*(uint8_t*)((char*)&iStack_558 + 0)) =
                 (byte)(longlong)
                       ROUND((fVar23 * (float10)fVar25 + (float10)(float)(fVar22 * (float10)fVar3))
                             * (float10)255.0f);
            uStack_538 = CONCAT31(((*(uint32_t*)((char*)&uStack_538) >> 8) & 0xffffffu),(byte)iStack_558);
            fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x9c)), bea_arg(fVar25), bea_arg(iVar2));
            fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x84)), bea_arg(fVar25), bea_arg(iVar2));
            (*(uint8_t*)((char*)&iStack_558 + 0)) =
                 (byte)(longlong)
                       ROUND((fVar23 * (float10)fVar25 + (float10)(float)(fVar22 * (float10)fVar3))
                             * (float10)255.0f);
          }
          else {
            fVar25 = 1.0f / *(float *)(iVar7 + 0xac);
            fVar3 = 1.0f - fVar25;
            fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x8c)), bea_arg(fVar25), bea_arg(iVar2));
            fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x5c)), bea_arg(fVar25), bea_arg(iVar2));
            (*(uint8_t*)((char*)&iStack_558 + 0)) =
                 (byte)(longlong)
                       ROUND((fVar23 * (float10)fVar3 + (float10)(float)(fVar22 * (float10)fVar25))
                             * (float10)255.0f);
            uStack_53c = CONCAT31(((*(uint32_t*)((char*)&uStack_53c) >> 8) & 0xffffffu),(byte)iStack_558);
            fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x94)), bea_arg(fVar25), bea_arg(iVar2));
            fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 100)), bea_arg(fVar25), bea_arg(iVar2));
            (*(uint8_t*)((char*)&iStack_558 + 0)) =
                 (byte)(longlong)
                       ROUND((fVar23 * (float10)fVar3 + (float10)(float)(fVar22 * (float10)fVar25))
                             * (float10)255.0f);
            uStack_538 = CONCAT31(((*(uint32_t*)((char*)&uStack_538) >> 8) & 0xffffffu),(byte)iStack_558);
            fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x9c)), bea_arg(fVar25), bea_arg(iVar2));
            fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x6c)), bea_arg(fVar25), bea_arg(iVar2));
            (*(uint8_t*)((char*)&iStack_558 + 0)) =
                 (byte)(longlong)
                       ROUND((fVar23 * (float10)fVar3 + (float10)(float)(fVar22 * (float10)fVar25))
                             * (float10)255.0f);
          }
        }
        else {
          fVar25 = ((float)*(int *)((int)local_544 + 0x70) - *(float *)(iVar2 + 0x60)) * fStack_4fc;
          if (*(int *)(iVar7 + 0xa8) == 0) {
            if (*(int *)(iVar7 + 0xa4) == 0) {
              fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x5c)), bea_arg(fVar25), bea_arg(iVar2));
              (*(uint8_t*)((char*)&iStack_558 + 0)) = (byte)(longlong)ROUND(fVar22 * (float10)255.0f);
              uStack_53c = CONCAT31(((*(uint32_t*)((char*)&uStack_53c) >> 8) & 0xffffffu),(byte)iStack_558);
              fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 100)), bea_arg(fVar25), bea_arg(iVar2));
              (*(uint8_t*)((char*)&iStack_558 + 0)) = (byte)(longlong)ROUND(fVar22 * (float10)255.0f);
              uStack_538 = CONCAT31(((*(uint32_t*)((char*)&uStack_538) >> 8) & 0xffffffu),(byte)iStack_558);
              fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x6c)), bea_arg(fVar25), bea_arg(iVar2));
              (*(uint8_t*)((char*)&iStack_558 + 0)) = (byte)(longlong)ROUND(fVar22 * (float10)255.0f);
            }
            else {
              fVar3 = 1.0f - fVar25;
              fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x5c)), bea_arg(fVar25), bea_arg(iVar2));
              fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x74)), bea_arg(fVar25), bea_arg(iVar2));
              (*(uint8_t*)((char*)&iStack_558 + 0)) =
                   (byte)(longlong)
                         ROUND((fVar23 * (float10)fVar25 + (float10)(float)(fVar22 * (float10)fVar3)
                               ) * (float10)255.0f);
              uStack_53c = CONCAT31(((*(uint32_t*)((char*)&uStack_53c) >> 8) & 0xffffffu),(byte)iStack_558);
              fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 100)), bea_arg(fVar25), bea_arg(iVar2));
              fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x7c)), bea_arg(fVar25), bea_arg(iVar2));
              (*(uint8_t*)((char*)&iStack_558 + 0)) =
                   (byte)(longlong)
                         ROUND((fVar23 * (float10)fVar25 + (float10)(float)(fVar22 * (float10)fVar3)
                               ) * (float10)255.0f);
              uStack_538 = CONCAT31(((*(uint32_t*)((char*)&uStack_538) >> 8) & 0xffffffu),(byte)iStack_558);
              fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x6c)), bea_arg(fVar25), bea_arg(iVar2));
              fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x84)), bea_arg(fVar25), bea_arg(iVar2));
              (*(uint8_t*)((char*)&iStack_558 + 0)) =
                   (byte)(longlong)
                         ROUND((fVar23 * (float10)fVar25 + (float10)(float)(fVar22 * (float10)fVar3)
                               ) * (float10)255.0f);
            }
          }
          else if (*(float *)(iVar7 + 0xac) <= fVar25) {
            fVar25 = (fVar25 - *(float *)(iVar7 + 0xac)) / (1.0f - *(float *)(iVar7 + 0xac));
            fVar3 = 1.0f - fVar25;
            fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x8c)), bea_arg(fVar25), bea_arg(iVar2));
            fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x74)), bea_arg(fVar25), bea_arg(iVar2));
            (*(uint8_t*)((char*)&iStack_558 + 0)) =
                 (byte)(longlong)
                       ROUND((fVar23 * (float10)fVar25 + (float10)(float)(fVar22 * (float10)fVar3))
                             * (float10)255.0f);
            uStack_53c = CONCAT31(((*(uint32_t*)((char*)&uStack_53c) >> 8) & 0xffffffu),(byte)iStack_558);
            fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x94)), bea_arg(fVar25), bea_arg(iVar2));
            fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x7c)), bea_arg(fVar25), bea_arg(iVar2));
            (*(uint8_t*)((char*)&iStack_558 + 0)) =
                 (byte)(longlong)
                       ROUND((fVar23 * (float10)fVar25 + (float10)(float)(fVar22 * (float10)fVar3))
                             * (float10)255.0f);
            uStack_538 = CONCAT31(((*(uint32_t*)((char*)&uStack_538) >> 8) & 0xffffffu),(byte)iStack_558);
            fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x9c)), bea_arg(fVar25), bea_arg(iVar2));
            fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x84)), bea_arg(fVar25), bea_arg(iVar2));
            (*(uint8_t*)((char*)&iStack_558 + 0)) =
                 (byte)(longlong)
                       ROUND((fVar23 * (float10)fVar25 + (float10)(float)(fVar22 * (float10)fVar3))
                             * (float10)255.0f);
          }
          else {
            fVar25 = fVar25 / *(float *)(iVar7 + 0xac);
            fVar3 = 1.0f - fVar25;
            fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x8c)), bea_arg(fVar25), bea_arg(iVar2));
            fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x5c)), bea_arg(fVar25), bea_arg(iVar2));
            (*(uint8_t*)((char*)&iStack_558 + 0)) =
                 (byte)(longlong)
                       ROUND((fVar23 * (float10)fVar3 + (float10)(float)(fVar22 * (float10)fVar25))
                             * (float10)255.0f);
            uStack_53c = CONCAT31(((*(uint32_t*)((char*)&uStack_53c) >> 8) & 0xffffffu),(byte)iStack_558);
            fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x94)), bea_arg(fVar25), bea_arg(iVar2));
            fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 100)), bea_arg(fVar25), bea_arg(iVar2));
            (*(uint8_t*)((char*)&iStack_558 + 0)) =
                 (byte)(longlong)
                       ROUND((fVar23 * (float10)fVar3 + (float10)(float)(fVar22 * (float10)fVar25))
                             * (float10)255.0f);
            uStack_538 = CONCAT31(((*(uint32_t*)((char*)&uStack_538) >> 8) & 0xffffffu),(byte)iStack_558);
            fVar22 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x9c)), bea_arg(fVar25), bea_arg(iVar2));
            fVar23 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x6c)), bea_arg(fVar25), bea_arg(iVar2));
            (*(uint8_t*)((char*)&iStack_558 + 0)) =
                 (byte)(longlong)
                       ROUND((fVar23 * (float10)fVar3 + (float10)(float)(fVar22 * (float10)fVar25))
                             * (float10)255.0f);
          }
        }
        uStack_540 = CONCAT31(((*(uint32_t*)((char*)&uStack_540) >> 8) & 0xffffffu),(byte)iStack_558);
        uVar18 = uStack_53c & 0xff;
        uStack_54c = uStack_538 & 0xff;
        uStack_550 = (uint)(byte)iStack_558;
      }
      if (*(int *)((int)local_544 + 0x90) == 5) {
        pfVar20 = (float *)(iVar2 + 8);
        pfVar21 = afStack_4b0;
        for (iVar7 = 0xc; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
          *pfVar21 = *pfVar20;
          pfVar20 = pfVar20 + 1;
          pfVar21 = pfVar21 + 1;
        }
        if (iStack_534 != 0) {
          // class 19: the asm's order (all 9 sums)
          uVar8 = FUN_00401ec0(bea_arg(auStack_120), bea_arg(afStack_4b0[0] * fStack_510 +
                               fStack_508 * fStack_490 + fStack_50c * fStack_4a0), bea_arg(fStack_508 * fStack_48c +
                               fStack_50c * fStack_49c + fStack_510 * afStack_4b0[1]), bea_arg(fStack_508 * fStack_488 +
                               fStack_50c * fStack_498 + fStack_510 * afStack_4b0[2]));
          uVar9 = FUN_00401ec0(bea_arg(auStack_150), bea_arg(afStack_4b0[0] * fStack_520 +
                               fStack_518 * fStack_490 + fStack_51c * fStack_4a0), bea_arg(fStack_518 * fStack_48c +
                               fStack_51c * fStack_49c + fStack_520 * afStack_4b0[1]), bea_arg(fStack_518 * fStack_488 +
                               fStack_51c * fStack_498 + fStack_520 * afStack_4b0[2]));
          uVar10 = FUN_00401ec0(bea_arg(auStack_130), bea_arg(afStack_4b0[0] * afStack_530[0] +
                                afStack_530[2] * fStack_490 + afStack_530[1] * fStack_4a0), bea_arg(afStack_530[0] * afStack_4b0[1] +
                                afStack_530[2] * fStack_48c + afStack_530[1] * fStack_49c), bea_arg(afStack_530[0] * afStack_4b0[2] +
                                afStack_530[2] * fStack_488 + afStack_530[1] * fStack_498));
          FUN_00401f10(bea_arg(afStack_30), bea_arg(uVar10), bea_arg(uVar9), bea_arg(uVar8));
          pfVar20 = afStack_30;
          pfVar21 = afStack_4b0;
          for (iVar7 = 0xc; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
            *pfVar21 = *pfVar20;
            pfVar20 = pfVar20 + 1;
            pfVar21 = pfVar21 + 1;
          }
        }
        FUN_00401ec0(bea_arg(&fStack_3a0), bea_arg(afStack_4b0[1]), bea_arg(fStack_49c), bea_arg(fStack_48c));
        FUN_00401ec0(bea_arg(&fStack_360), bea_arg(-fStack_3a0), bea_arg(-fStack_39c), bea_arg(-fStack_398));
        fVar25 = fStack_360 * fStack_4e8 + fStack_4e0 * fStack_358 + fStack_4e4 * fStack_35c;   // class 19: the asm's order
        if (fVar25 < 0.0f) {
          fVar25 = 0.0f;
        }
        *(float *)(iVar2 + 0x94) = fVar25 * *(float *)(iVar2 + 0x74);
        iStack_558 = (int)(longlong)ROUND(fVar25 * 255.0f);
        uVar18 = (int)(iStack_558 * uVar18) >> 8;
        uStack_54c = (int)(iStack_558 * uStack_54c) >> 8;
        uStack_550 = (int)(iStack_558 * uStack_550) >> 8;
      }
      if (*(int *)((int)local_544 + 0x7c) == 0) {
        if (*(int *)((int)local_544 + 0x88) == 1) {
          uVar18 = uVar18 + 0xff00;
        }
        *(uint *)(iVar2 + 0x90) = (uVar18 * 0x100 + uStack_54c) * 0x100 + uStack_550;
      }
      else {
        if (*(int *)((int)local_544 + 0x70) < 1) {
          iVar7 = 0xff;
LAB_004c6b15:
          iVar7 = 0x100 - (0xc784 - (iVar7 + -0x1e) * (iVar7 + -0x1e)) / 0xe2;
        }
        else {
          iStack_558 = (int)(longlong)ROUND(*(float *)(iVar2 + 0x60));
          iVar7 = iStack_558 * (int)lStack_45c * 0xff >> 0x10;
          if (0x1e < iVar7) goto LAB_004c6b15;
        }
        iVar17 = *(int *)((int)local_544 + 0x88);
        if (iVar17 == 0) {
          *(int *)(iVar2 + 0x90) =
               (((int)(iVar7 * uVar18) >> 8) * 0x100 + ((int)(iVar7 * uStack_54c) >> 8)) * 0x100 +
               ((int)(iVar7 * uStack_550) >> 8);
        }
        else if (iVar17 == 1) {
          *(uint *)(iVar2 + 0x90) =
               ((iVar7 * 0x100 + uVar18) * 0x100 + uStack_54c) * 0x100 + uStack_550;
        }
        else if (iVar17 == 2) {
          if (iVar7 < 0x80) {
            iVar17 = iVar7 * 8;
          }
          else {
            iVar17 = (0xff - iVar7) * 2;
          }
          if (0xff < iVar17) {
            iVar17 = 0xff;
          }
          *(int *)(iVar2 + 0x90) =
               ((iVar17 * 0x100 + ((int)(iVar7 * uVar18) >> 8)) * 0x100 +
               ((int)(iVar7 * uStack_54c) >> 8)) * 0x100 + ((int)(iVar7 * uStack_550) >> 8);
        }
      }
      switch(*(undefined4 *)((int)local_544 + 0x90)) {
      case 1:
        if (iStack_534 == 0) {
          FUN_00401ec0(bea_arg(&fStack_390), bea_arg(*(undefined4 *)(iVar2 + 8)), bea_arg(*(undefined4 *)(iVar2 + 0x18)), bea_arg(*(undefined4 *)(iVar2 + 0x28)));
          FUN_00401ec0(bea_arg(&uStack_3f0), bea_arg(-fStack_390), bea_arg(-fStack_38c), bea_arg(-fStack_388));
          *(undefined4 *)(iVar2 + 0xa8) = uStack_3f0;
          *(undefined4 *)(iVar2 + 0xac) = uStack_3ec;
          *(undefined4 *)(iVar2 + 0xb0) = uStack_3e8;
          *(undefined4 *)(iVar2 + 0xb4) = uStack_3e4;
          FUN_00401ec0(bea_arg(&fStack_340), bea_arg(*(undefined4 *)(iVar2 + 0xc)), bea_arg(*(undefined4 *)(iVar2 + 0x1c)), bea_arg(*(undefined4 *)(iVar2 + 0x2c)));
          FUN_00401ec0(bea_arg(&uStack_3e0), bea_arg(-fStack_340), bea_arg(-fStack_33c), bea_arg(-fStack_338));
          *(undefined4 *)(iVar2 + 0xb8) = uStack_3e0;
          *(undefined4 *)(iVar2 + 0xbc) = uStack_3dc;
          *(undefined4 *)(iVar2 + 0xc0) = uStack_3d8;
          *(undefined4 *)(iVar2 + 0xc4) = uStack_3d4;
        }
        else {
          // class 19: the asm's order (all 9 sums)
          uVar8 = FUN_00401ec0(bea_arg(auStack_110), bea_arg(fStack_510 * *(float *)(iVar2 + 8) +
                               fStack_50c * *(float *)(iVar2 + 0x18) +
                               fStack_508 * *(float *)(iVar2 + 0x28)), bea_arg(fStack_510 * *(float *)(iVar2 + 0xc) +
                               fStack_50c * *(float *)(iVar2 + 0x1c) +
                               fStack_508 * *(float *)(iVar2 + 0x2c)), bea_arg(fStack_510 * *(float *)(iVar2 + 0x10) +
                               fStack_50c * *(float *)(iVar2 + 0x20) +
                               fStack_508 * *(float *)(iVar2 + 0x30)));
          uVar9 = FUN_00401ec0(bea_arg(auStack_f0), bea_arg(fStack_520 * *(float *)(iVar2 + 8) +
                               fStack_51c * *(float *)(iVar2 + 0x18) +
                               fStack_518 * *(float *)(iVar2 + 0x28)), bea_arg(fStack_520 * *(float *)(iVar2 + 0xc) +
                               fStack_51c * *(float *)(iVar2 + 0x1c) +
                               fStack_518 * *(float *)(iVar2 + 0x2c)), bea_arg(fStack_520 * *(float *)(iVar2 + 0x10) +
                               fStack_51c * *(float *)(iVar2 + 0x20) +
                               fStack_518 * *(float *)(iVar2 + 0x30)));
          uVar10 = FUN_00401ec0(bea_arg(auStack_d0), bea_arg(afStack_530[0] * *(float *)(iVar2 + 8) +
                                afStack_530[1] * *(float *)(iVar2 + 0x18) +
                                afStack_530[2] * *(float *)(iVar2 + 0x28)), bea_arg(afStack_530[1] * *(float *)(iVar2 + 0x1c) +
                                afStack_530[2] * *(float *)(iVar2 + 0x2c) +
                                afStack_530[0] * *(float *)(iVar2 + 0xc)), bea_arg(afStack_530[0] * *(float *)(iVar2 + 0x10) +
                                afStack_530[1] * *(float *)(iVar2 + 0x20) +
                                afStack_530[2] * *(float *)(iVar2 + 0x30)));
          FUN_00401f10(bea_arg(&uStack_2c0), bea_arg(uVar10), bea_arg(uVar9), bea_arg(uVar8));
          FUN_00401ec0(bea_arg(&fStack_330), bea_arg(uStack_2c0), bea_arg(uStack_2b0), bea_arg(uStack_2a0));
          FUN_00401ec0(bea_arg(&uStack_3d0), bea_arg(-fStack_330), bea_arg(-fStack_32c), bea_arg(-fStack_328));
          *(undefined4 *)(iVar2 + 0xa8) = uStack_3d0;
          *(undefined4 *)(iVar2 + 0xac) = uStack_3cc;
          *(undefined4 *)(iVar2 + 0xb0) = uStack_3c8;
          *(undefined4 *)(iVar2 + 0xb4) = uStack_3c4;
          FUN_00401ec0(bea_arg(&fStack_380), bea_arg(uStack_2bc), bea_arg(uStack_2ac), bea_arg(uStack_29c));
          FUN_00401ec0(bea_arg(&uStack_400), bea_arg(-fStack_380), bea_arg(-fStack_37c), bea_arg(-fStack_378));
          *(undefined4 *)(iVar2 + 0xb8) = uStack_400;
          *(undefined4 *)(iVar2 + 0xbc) = uStack_3fc;
          *(undefined4 *)(iVar2 + 0xc0) = uStack_3f8;
          *(undefined4 *)(iVar2 + 0xc4) = uStack_3f4;
        }
        break;
      case 2:
        if (iStack_534 == 0) {
          FUN_00401ec0(bea_arg(&uStack_410), bea_arg(*(float *)(iVar2 + 8) * -1.0f), bea_arg(*(float *)(iVar2 + 0x18) * -1.0f), bea_arg(*(float *)(iVar2 + 0x28) * -1.0f));
          uStack_370 = 0;
          uStack_36c = 0;
          uStack_368 = 0xbf800000;
          *(undefined4 *)(iVar2 + 0xa8) = uStack_410;
          *(undefined4 *)(iVar2 + 0xac) = uStack_40c;
          *(undefined4 *)(iVar2 + 0xb0) = uStack_408;
          *(undefined4 *)(iVar2 + 0xb4) = uStack_404;
          puVar11 = (undefined4 *)FUN_0040d2c0(bea_arg((float *)(iVar2 + 8)), bea_arg(auStack_240), bea_arg(&uStack_370));
          *(undefined4 *)(iVar2 + 0xb8) = *puVar11;
          *(undefined4 *)(iVar2 + 0xbc) = puVar11[1];
          *(undefined4 *)(iVar2 + 0xc0) = puVar11[2];
          *(undefined4 *)(iVar2 + 0xc4) = puVar11[3];
        }
        else {
          // class 19: the asm's order (all 9 sums)
          uVar8 = FUN_00401ec0(bea_arg(auStack_40), bea_arg(fStack_510 * *(float *)(iVar2 + 8) +
                               fStack_50c * *(float *)(iVar2 + 0x18) +
                               fStack_508 * *(float *)(iVar2 + 0x28)), bea_arg(fStack_510 * *(float *)(iVar2 + 0xc) +
                               fStack_50c * *(float *)(iVar2 + 0x1c) +
                               fStack_508 * *(float *)(iVar2 + 0x2c)), bea_arg(fStack_50c * *(float *)(iVar2 + 0x20) +
                               fStack_508 * *(float *)(iVar2 + 0x30) +
                               fStack_510 * *(float *)(iVar2 + 0x10)));
          uVar9 = FUN_00401ec0(bea_arg(auStack_260), bea_arg(fStack_520 * *(float *)(iVar2 + 8) +
                               fStack_51c * *(float *)(iVar2 + 0x18) +
                               fStack_518 * *(float *)(iVar2 + 0x28)), bea_arg(fStack_520 * *(float *)(iVar2 + 0xc) +
                               fStack_51c * *(float *)(iVar2 + 0x1c) +
                               fStack_518 * *(float *)(iVar2 + 0x2c)), bea_arg(fStack_51c * *(float *)(iVar2 + 0x20) +
                               fStack_518 * *(float *)(iVar2 + 0x30) +
                               fStack_520 * *(float *)(iVar2 + 0x10)));
          uVar10 = FUN_00401ec0(bea_arg(auStack_160), bea_arg(afStack_530[1] * *(float *)(iVar2 + 0x18) +
                                afStack_530[2] * *(float *)(iVar2 + 0x28) +
                                afStack_530[0] * *(float *)(iVar2 + 8)), bea_arg(afStack_530[0] * *(float *)(iVar2 + 0xc) +
                                afStack_530[1] * *(float *)(iVar2 + 0x1c) +
                                afStack_530[2] * *(float *)(iVar2 + 0x2c)), bea_arg(afStack_530[1] * *(float *)(iVar2 + 0x20) +
                                afStack_530[2] * *(float *)(iVar2 + 0x30) +
                                afStack_530[0] * *(float *)(iVar2 + 0x10)));
          FUN_00401f10(bea_arg(afStack_2f0), bea_arg(uVar10), bea_arg(uVar9), bea_arg(uVar8));
          FUN_00401ec0(bea_arg(&uStack_430), bea_arg(afStack_2f0[0] * -1.0f), bea_arg(fStack_2e0 * -1.0f), bea_arg(fStack_2d0 * -1.0f));
          *(undefined4 *)(iVar2 + 0xa8) = uStack_430;
          *(undefined4 *)(iVar2 + 0xac) = uStack_42c;
          *(undefined4 *)(iVar2 + 0xb0) = uStack_428;
          *(undefined4 *)(iVar2 + 0xb4) = uStack_424;
          FUN_00401ec0(bea_arg(&uStack_420), bea_arg(fStack_2e8 * -1.0f), bea_arg(fStack_2d8 * -1.0f), bea_arg(fStack_2c8 * -1.0f));
          *(undefined4 *)(iVar2 + 0xb8) = uStack_420;
          *(undefined4 *)(iVar2 + 0xbc) = uStack_41c;
          *(undefined4 *)(iVar2 + 0xc0) = uStack_418;
          *(undefined4 *)(iVar2 + 0xc4) = uStack_414;
        }
        break;
      case 3:
        if (iStack_534 == 0) {
          puVar11 = (undefined4 *)(iVar2 + 8);
          puVar12 = auStack_70;
          for (iVar7 = 0xc; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          uVar8 = FUN_00401ec0(bea_arg(auStack_140), bea_arg(0), bea_arg(0), bea_arg(0x3f800000));
          puVar11 = (undefined4 *)FUN_0040d2c0(bea_arg(auStack_70), bea_arg(auStack_200), bea_arg(uVar8));
          *(undefined4 *)(iVar2 + 0xa8) = *puVar11;
          *(undefined4 *)(iVar2 + 0xac) = puVar11[1];
          *(undefined4 *)(iVar2 + 0xb0) = puVar11[2];
          *(undefined4 *)(iVar2 + 0xb4) = puVar11[3];
          uVar8 = FUN_00401ec0(bea_arg(auStack_80), bea_arg(0), bea_arg(0xbf800000), bea_arg(0));
          puVar11 = (undefined4 *)FUN_0040d2c0(bea_arg(auStack_70), bea_arg(auStack_1e0), bea_arg(uVar8));
          *(undefined4 *)(iVar2 + 0xb8) = *puVar11;
          *(undefined4 *)(iVar2 + 0xbc) = puVar11[1];
          *(undefined4 *)(iVar2 + 0xc0) = puVar11[2];
          *(undefined4 *)(iVar2 + 0xc4) = puVar11[3];
          break;
        }
        FUN_0040d320(bea_arg(afStack_530), bea_arg(auStack_b0), bea_arg(iVar2 + 8));
        uStack_350 = 0;
        uStack_34c = 0;
        uStack_348 = 0x3f800000;
        puVar11 = (undefined4 *)FUN_0040d2c0(bea_arg(auStack_b0), bea_arg(auStack_e0), bea_arg(&uStack_350));
        *(undefined4 *)(iVar2 + 0xa8) = *puVar11;
        *(undefined4 *)(iVar2 + 0xac) = puVar11[1];
        *(undefined4 *)(iVar2 + 0xb0) = puVar11[2];
        uStack_3b0 = 0;
        *(undefined4 *)(iVar2 + 0xb4) = puVar11[3];
        uStack_3ac = 0xbf800000;
        uStack_3a8 = 0;
        puVar11 = (undefined4 *)FUN_0040d2c0(bea_arg(auStack_b0), bea_arg(auStack_220), bea_arg(&uStack_3b0));
LAB_004c74c0:
        *(undefined4 *)(iVar2 + 0xb8) = *puVar11;
        *(undefined4 *)(iVar2 + 0xbc) = puVar11[1];
        *(undefined4 *)(iVar2 + 0xc0) = puVar11[2];
        uVar8 = puVar11[3];
        goto LAB_004c7665;
      case 4:
      case 5:
        FUN_0040d120(bea_arg((void *)(iVar2 + 0x98)), bea_arg(auStack_3c0), bea_arg(&local_470));
        fVar22 = (float10)FUN_004c78d0(bea_arg(auStack_3c0));
        if ((float10)0.0625f < fVar22 * (float10)*(float *)(iVar2 + 0x74)) {
          fStack_43c = fStack_4e4;
          fStack_440 = fStack_4e8;
          fStack_438 = fStack_4e0;
          uStack_434 = uStack_4dc;
          fVar22 = (float10)FUN_0040d180(bea_arg(auStack_3c0), bea_arg(&fStack_440));
          FUN_004c78b0(bea_arg(&fStack_440), bea_arg((float)fVar22));
          puVar11 = (undefined4 *)(iVar2 + 0xa8);
          puVar12 = (undefined4 *)FUN_0040d120(bea_arg(&fStack_440), bea_arg(auStack_290), bea_arg(auStack_3c0));
          *puVar11 = *puVar12;
          *(undefined4 *)(iVar2 + 0xac) = puVar12[1];
          *(undefined4 *)(iVar2 + 0xb0) = puVar12[2];
          *(undefined4 *)(iVar2 + 0xb4) = puVar12[3];
          FUN_004c7900(bea_arg(puVar11));
          puVar11 = (undefined4 *)FUN_00411a60(bea_arg(puVar11), bea_arg(auStack_1c0), bea_arg(&fStack_4e8));
          goto LAB_004c74c0;
        }
      default:
        *(undefined4 *)(iVar2 + 0xa8) = uStack_4d0;
        *(undefined4 *)(iVar2 + 0xac) = uStack_4cc;
        *(undefined4 *)(iVar2 + 0xb0) = uStack_4c8;
        *(undefined4 *)(iVar2 + 0xb4) = uStack_4c4;
        *(float *)(iVar2 + 0xb8) = fStack_4c0;
        *(float *)(iVar2 + 0xbc) = fStack_4bc;
        *(float *)(iVar2 + 0xc0) = fStack_4b8;
        uVar8 = uStack_4b4;
LAB_004c7665:
        *(undefined4 *)(iVar2 + 0xc4) = uVar8;
        break;
      case 6:
        fVar22 = (float10)FUN_004c7950(bea_arg((void *)((int)local_544 + 0x98)), bea_arg(*(undefined4 *)(iVar2 + 0x60)), bea_arg((float)*(int *)((int)local_544 + 0x70)), bea_arg(iVar2));
        fVar25 = (float)fVar22;
        puVar24 = auStack_c0;
        puVar11 = (undefined4 *)(iVar2 + 0xa8);
        uVar8 = FUN_00401ec0(bea_arg(auStack_1a0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
        pvVar15 = (void *)FUN_0040d2c0(bea_arg((void *)(iVar2 + 8)), bea_arg(auStack_100), bea_arg(uVar8));
        puVar12 = (undefined4 *)(uintptr_t)bea_piece32(FUN_0040d150(bea_arg(pvVar15), bea_arg(puVar24), bea_arg(fVar25)));
        *puVar11 = *puVar12;
        *(undefined4 *)(iVar2 + 0xac) = puVar12[1];
        *(undefined4 *)(iVar2 + 0xb0) = puVar12[2];
        *(undefined4 *)(iVar2 + 0xb4) = puVar12[3];
        if (iStack_534 != 0) {
          puVar12 = (undefined4 *)FUN_0040d2c0(bea_arg(afStack_530), bea_arg(auStack_180), bea_arg(puVar11));
          *puVar11 = *puVar12;
          *(undefined4 *)(iVar2 + 0xac) = puVar12[1];
          *(undefined4 *)(iVar2 + 0xb0) = puVar12[2];
          *(undefined4 *)(iVar2 + 0xb4) = puVar12[3];
        }
        puVar12 = (undefined4 *)(iVar2 + 0xb8);
        puVar13 = (undefined4 *)FUN_00411a60(bea_arg(puVar11), bea_arg(auStack_280), bea_arg(&fStack_4e8));
        *puVar12 = *puVar13;
        *(undefined4 *)(iVar2 + 0xbc) = puVar13[1];
        *(undefined4 *)(iVar2 + 0xc0) = puVar13[2];
        *(undefined4 *)(iVar2 + 0xc4) = puVar13[3];
        fVar22 = (float10)FUN_004026b0(bea_arg(puVar12));
        if ((float10)0.001f < fVar22) {
          FUN_004944b0(bea_arg(puVar12), bea_arg((float)fVar22));
        }
        uVar8 = FUN_0040d150(bea_arg(puVar11), bea_arg(auStack_270), bea_arg(0x3f000000));
        FUN_0041ad10(bea_arg((void *)(iVar2 + 0x98)), bea_arg(uVar8));
        FUN_004944b0(bea_arg(puVar11), bea_arg(*(undefined4 *)(iVar2 + 0x94)));
      }
      this_02 = (void *)(iVar2 + 0xb8);
      this_01 = (void *)(iVar2 + 0xa8);
      FUN_00550200(bea_arg(*(void **)((int)local_544 + 0x6c)), bea_arg(4), bea_arg(&pvStack_548), bea_arg(&uStack_500));
      FUN_004c78b0(bea_arg(this_01), bea_arg(*(undefined4 *)(iVar2 + 0x94)));
      FUN_004c78b0(bea_arg(this_02), bea_arg(*(undefined4 *)(iVar2 + 0x94)));
      *(undefined4 *)(iVar2 + 0xc4) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0xb4) = 0x3f800000;
      puVar24 = auStack_250;
      pvVar15 = (void *)(iVar2 + 0x98);
      pvVar26 = this_02;
      pvVar14 = (void *)FUN_0040d120(bea_arg(pvVar15), bea_arg(auStack_230), bea_arg(this_01));
      uVar8 = FUN_00401ee0(bea_arg(pvVar14), bea_arg(puVar24), bea_arg(pvVar26));
      FUN_004c7d90(bea_arg(pvStack_548), bea_arg(uVar8));
      *(undefined4 *)((int)pvStack_548 + 0x10) = *(undefined4 *)(iVar2 + 200);
      *(undefined4 *)((int)pvStack_548 + 0x14) = *(undefined4 *)(iVar2 + 0xcc);
      *(undefined4 *)((int)pvStack_548 + 0xc) = *(undefined4 *)(iVar2 + 0x90);
      pvStack_548 = (void *)((int)pvStack_548 + 0x18);
      puVar24 = auStack_210;
      pvVar26 = this_02;
      pvVar14 = (void *)FUN_00401ee0(bea_arg(pvVar15), bea_arg(auStack_1f0), bea_arg(this_01));
      uVar8 = FUN_00401ee0(bea_arg(pvVar14), bea_arg(puVar24), bea_arg(pvVar26));
      FUN_004c7d90(bea_arg(pvStack_548), bea_arg(uVar8));
      *(undefined4 *)((int)pvStack_548 + 0x10) = *(undefined4 *)(iVar2 + 0xd0);
      *(undefined4 *)((int)pvStack_548 + 0x14) = *(undefined4 *)(iVar2 + 0xcc);
      *(undefined4 *)((int)pvStack_548 + 0xc) = *(undefined4 *)(iVar2 + 0x90);
      pvStack_548 = (void *)((int)pvStack_548 + 0x18);
      puVar24 = auStack_1d0;
      pvVar26 = this_02;
      pvVar14 = (void *)FUN_0040d120(bea_arg(pvVar15), bea_arg(auStack_1b0), bea_arg(this_01));
      uVar8 = FUN_0040d120(bea_arg(pvVar14), bea_arg(puVar24), bea_arg(pvVar26));
      FUN_004c7d90(bea_arg(pvStack_548), bea_arg(uVar8));
      *(undefined4 *)((int)pvStack_548 + 0x10) = *(undefined4 *)(iVar2 + 200);
      *(undefined4 *)((int)pvStack_548 + 0x14) = *(undefined4 *)(iVar2 + 0xd4);
      *(undefined4 *)((int)pvStack_548 + 0xc) = *(undefined4 *)(iVar2 + 0x90);
      pvStack_548 = (void *)((int)pvStack_548 + 0x18);
      puVar24 = auStack_190;
      pvVar15 = (void *)FUN_00401ee0(bea_arg(pvVar15), bea_arg(auStack_170), bea_arg(this_01));
      uVar8 = FUN_0040d120(bea_arg(pvVar15), bea_arg(puVar24), bea_arg(this_02));
      FUN_004c7d90(bea_arg(pvStack_548), bea_arg(uVar8));
      *(undefined4 *)((int)pvStack_548 + 0x10) = *(undefined4 *)(iVar2 + 0xd0);
      *(undefined4 *)((int)pvStack_548 + 0x14) = *(undefined4 *)(iVar2 + 0xd4);
      *(undefined4 *)((int)pvStack_548 + 0xc) = *(undefined4 *)(iVar2 + 0x90);
      pvStack_548 = (void *)((int)pvStack_548 + 0x18);
      psVar16 = (short *)FUN_005501b0(bea_arg(*(void **)((int)local_544 + 0x6c)), bea_arg(6));
      sVar5 = (short)uStack_500;
      *psVar16 = sVar5 + 1;
      psVar16[1] = sVar5;
      psVar16[2] = sVar5 + 2;
      psVar16[3] = sVar5 + 1;
      psVar16[4] = sVar5 + 2;
      psVar16[5] = sVar5 + 3;
      uVar18 = uStack_460;
    }
LAB_004c7873:
    iVar2 = *(int *)(iVar2 + 4);
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c5d50, ap_004c5d50));
