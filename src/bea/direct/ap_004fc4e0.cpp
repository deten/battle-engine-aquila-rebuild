// auto-ported from 004fc4e0_vslot88.c (CUnit::vslot88, 510 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CUnit;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_Unit_cpp_00633b6c ((char*)0x00633b6c)
typedef uint32_t (BEA_THISCALL* FUN_0040d320_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d320_t> FUN_0040d320 = {(FUN_0040d320_t)0x0040d320};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef uint32_t (BEA_THISCALL* FUN_004fc6e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fc6e0_t> FUN_004fc6e0 = {(FUN_004fc6e0_t)0x004fc6e0};
typedef int * (BEA_THISCALL* FUN_00511bc0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00511bc0_t> FUN_00511bc0 = {(FUN_00511bc0_t)0x00511bc0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

// The original copies an unwritten stack dword, [esp-0x44] at its entry, into param_3[3]
// (Ghidra's local_44; NOTES A1-4/A1-6), and never writes that dword, so the next call
// at the same depth sees it again.  The level-741 replay depends on it: the hook enters
// through a stub that saves the dword before this function's frame covers it, and every
// return puts it back (2026-10-30).
extern "C" uint32_t g_stale_004fc4e0 __asm__("g_stale_004fc4e0");
uint32_t g_stale_004fc4e0 = 0;
// What the original leaves in its frame, [entry esp-0x64, -0x4) as dwords 0..24, for the
// next call at that depth to read as its own unwritten locals: written there by the
// entry stub after the port returns (mask: which dwords the original writes).
extern "C" uint32_t g_res_004fc4e0[25] __asm__("g_res_004fc4e0");
uint32_t g_res_004fc4e0[25];
extern "C" uint32_t g_resmask_004fc4e0 __asm__("g_resmask_004fc4e0");
uint32_t g_resmask_004fc4e0;
extern "C" uint32_t g_regs_004fc4e0[4] __asm__("g_regs_004fc4e0");   // edi esi ebp ebx at entry
uint32_t g_regs_004fc4e0[4];
extern "C" void BEA_THISCALL ap_004fc4e0_body(CUnit * this_, int param_1, int param_2, float *param_3, int *param_4)
    __asm__("ap_004fc4e0_body");

void BEA_THISCALL ap_004fc4e0_body(CUnit * this_, int param_1, int param_2, float *param_3, int *param_4)
{
  const uint32_t stale = g_stale_004fc4e0;
  struct Residue {
    uint32_t r[25] = {}; uint32_t mask = 0;
    void set(int i, uint32_t v) { r[i] = v; mask |= 1u << i; }
    ~Residue() { memcpy(g_res_004fc4e0, r, sizeof r); g_resmask_004fc4e0 = mask; }
  } res_;
  for (int i = 0; i < 4; ++i) res_.set(i, g_regs_004fc4e0[i]);
  res_.set(4, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(this_)));
  res_.set(8, stale);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  void *this_00;
  int *piVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;

  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  float &local_44 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x44);
  undefined1 (&local_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x50 - 0x30);
  if ((((*(int *)(this_ + 0x110) == 0) &&
       (this_00 = *(void **)(this_ + 0x164), this_00 != (void *)0x0)) &&
      (*(int *)((int)this_00 + 0x1a0) == 0)) &&
     (((param_1 != 0xf && (param_1 != 0x10)) &&
      ((param_1 != 0x11 && ((param_1 != 0x12 && (param_1 != 0x13)))))))) {
    piVar15 = (int *)FUN_00511bc0(bea_arg(this_00), bea_arg(param_1), bea_arg(param_2));
    if (piVar15 == (int *)0x0) {
      FUN_004fc6e0(bea_arg(this_), bea_arg(param_1), bea_arg(param_2), bea_arg(param_3), bea_arg(param_4), bea_arg(1), bea_arg(1));
      if (((*param_3 == 0.0f) && (param_3[1] == 0.0f)) && (param_3[2] == 0.0f)) {
        return;
      }
      piVar15 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x48), bea_arg(6), bea_arg(s_C__dev_ONSLAUGHT2_Unit_cpp_00633b6c), bea_arg(0x870));
      if (piVar15 == (int *)0x0) {
        piVar15 = (int *)0x0;
      }
      else {
        piVar15[1] = param_2;
        *piVar15 = param_1;
      }
      FUN_004e5a80(bea_arg((void *)(*(int *)(this_ + 0x164) + 0x6c)), bea_arg(piVar15));
      piVar15[2] = bea_piece32(*param_3);
      piVar15[3] = bea_piece32(param_3[1]);
      piVar15[4] = bea_piece32(param_3[2]);
      piVar15[5] = bea_piece32(param_3[3]);
      piVar17 = param_4;
      piVar18 = piVar15 + 6;
      for (iVar16 = 0xc; BEA_LOOP_GUARD((iVar16 != 0)); iVar16 = iVar16 + -1) {
        *piVar18 = *piVar17;
        piVar17 = piVar17 + 1;
        piVar18 = piVar18 + 1;
      }
    }
    fVar1 = *(float *)(this_ + 0x54);
    fVar2 = bea_fcast<float>(piVar15[4]);
    fVar3 = *(float *)(this_ + 0x50);
    fVar4 = bea_fcast<float>(piVar15[3]);
    fVar5 = *(float *)(this_ + 0x4c);
    fVar6 = bea_fcast<float>(piVar15[2]);
    fVar7 = *(float *)(this_ + 100);
    fVar8 = bea_fcast<float>(piVar15[4]);
    fVar9 = *(float *)(this_ + 0x60);
    fVar10 = bea_fcast<float>(piVar15[3]);
    fVar11 = *(float *)(this_ + 0x5c);
    fVar12 = bea_fcast<float>(piVar15[2]);
    fVar13 = *(float *)(this_ + 0x20);
    fVar14 = *(float *)(this_ + 0x24);
    // the asm's grouping, (m2*z + m1*y) + m0*x, then + the translation (Ghidra prints it
    // reversed; bug class 19, missed by check_fp_order because the asm moves ebx between
    // the terms: level 741 replay parted, 2026-10-30)
    *param_3 = *(float *)(this_ + 0x44) * bea_fcast<float>(piVar15[4]) +
               *(float *)(this_ + 0x40) * bea_fcast<float>(piVar15[3]) +
               bea_fcast<float>(piVar15[2]) * *(float *)(this_ + 0x3c) + *(float *)(this_ + 0x1c);
    {
      volatile float ysum = fVar1 * fVar2 + fVar3 * fVar4 + fVar5 * fVar6;   // the asm stores both sums
      volatile float zsum = fVar7 * fVar8 + fVar9 * fVar10 + fVar11 * fVar12;
      param_3[1] = ysum + fVar13;
      param_3[2] = zsum + fVar14;
      res_.set(10, bea_piece32((float)ysum));
      res_.set(11, bea_piece32((float)zsum));
      res_.set(5, bea_piece32(param_3[0])); res_.set(6, bea_piece32(param_3[1])); res_.set(7, bea_piece32(param_3[2]));
    }
    local_44 = bea_fcast<float>(stale);
    param_3[3] = local_44;
    piVar15 = (int *)FUN_0040d320(bea_arg(this_ + 0x3c), bea_arg(local_30), bea_arg(piVar15 + 6));
    for (int i = 0; i < 12; ++i) res_.set(13 + i, piVar15[i]);
    for (iVar16 = 0xc; BEA_LOOP_GUARD((iVar16 != 0)); iVar16 = iVar16 + -1) {
      *param_4 = *piVar15;
      piVar15 = piVar15 + 1;
      param_4 = param_4 + 1;
    }
    return;
  }
  FUN_004fc6e0(bea_arg(this_), bea_arg(param_1), bea_arg(param_2), bea_arg(param_3), bea_arg(param_4), bea_arg(0), bea_arg(1));
  return;
}

// the port runs on a copy of the arguments; then the original's frame contents are
// put below the caller's stack pointer and the stub returns as the original does.
// Level 741 needs dword 18, [entry esp-0x1c] = the matrix 0x40d320 left (BEA_RESMASK
// experiments, 2026-10-30); the rest are written for fidelity.
__attribute__((naked)) static void ap_004fc4e0()
{
    __asm__ volatile(
        "movl -0x44(%esp), %eax\n\t"
        "movl %eax, g_stale_004fc4e0\n\t"
        "movl %edi, g_regs_004fc4e0\n\t"
        "movl %esi, g_regs_004fc4e0+4\n\t"
        "movl %ebp, g_regs_004fc4e0+8\n\t"
        "movl %ebx, g_regs_004fc4e0+12\n\t"
        "pushl 0x10(%esp)\n\t"
        "pushl 0x10(%esp)\n\t"
        "pushl 0x10(%esp)\n\t"
        "pushl 0x10(%esp)\n\t"
        "call ap_004fc4e0_body\n\t"
        "movl g_resmask_004fc4e0, %edx\n\t"
        "btl $0, %edx\n\t"
        "jnc 100f\n\t"
        "movl g_res_004fc4e0+0, %eax\n\t"
        "movl %eax, -0x64(%esp)\n\t"
        "100:\n\t"
        "btl $1, %edx\n\t"
        "jnc 101f\n\t"
        "movl g_res_004fc4e0+4, %eax\n\t"
        "movl %eax, -0x60(%esp)\n\t"
        "101:\n\t"
        "btl $2, %edx\n\t"
        "jnc 102f\n\t"
        "movl g_res_004fc4e0+8, %eax\n\t"
        "movl %eax, -0x5c(%esp)\n\t"
        "102:\n\t"
        "btl $3, %edx\n\t"
        "jnc 103f\n\t"
        "movl g_res_004fc4e0+12, %eax\n\t"
        "movl %eax, -0x58(%esp)\n\t"
        "103:\n\t"
        "btl $4, %edx\n\t"
        "jnc 104f\n\t"
        "movl g_res_004fc4e0+16, %eax\n\t"
        "movl %eax, -0x54(%esp)\n\t"
        "104:\n\t"
        "btl $5, %edx\n\t"
        "jnc 105f\n\t"
        "movl g_res_004fc4e0+20, %eax\n\t"
        "movl %eax, -0x50(%esp)\n\t"
        "105:\n\t"
        "btl $6, %edx\n\t"
        "jnc 106f\n\t"
        "movl g_res_004fc4e0+24, %eax\n\t"
        "movl %eax, -0x4c(%esp)\n\t"
        "106:\n\t"
        "btl $7, %edx\n\t"
        "jnc 107f\n\t"
        "movl g_res_004fc4e0+28, %eax\n\t"
        "movl %eax, -0x48(%esp)\n\t"
        "107:\n\t"
        "btl $8, %edx\n\t"
        "jnc 108f\n\t"
        "movl g_res_004fc4e0+32, %eax\n\t"
        "movl %eax, -0x44(%esp)\n\t"
        "108:\n\t"
        "btl $9, %edx\n\t"
        "jnc 109f\n\t"
        "movl g_res_004fc4e0+36, %eax\n\t"
        "movl %eax, -0x40(%esp)\n\t"
        "109:\n\t"
        "btl $10, %edx\n\t"
        "jnc 110f\n\t"
        "movl g_res_004fc4e0+40, %eax\n\t"
        "movl %eax, -0x3c(%esp)\n\t"
        "110:\n\t"
        "btl $11, %edx\n\t"
        "jnc 111f\n\t"
        "movl g_res_004fc4e0+44, %eax\n\t"
        "movl %eax, -0x38(%esp)\n\t"
        "111:\n\t"
        "btl $12, %edx\n\t"
        "jnc 112f\n\t"
        "movl g_res_004fc4e0+48, %eax\n\t"
        "movl %eax, -0x34(%esp)\n\t"
        "112:\n\t"
        "btl $13, %edx\n\t"
        "jnc 113f\n\t"
        "movl g_res_004fc4e0+52, %eax\n\t"
        "movl %eax, -0x30(%esp)\n\t"
        "113:\n\t"
        "btl $14, %edx\n\t"
        "jnc 114f\n\t"
        "movl g_res_004fc4e0+56, %eax\n\t"
        "movl %eax, -0x2c(%esp)\n\t"
        "114:\n\t"
        "btl $15, %edx\n\t"
        "jnc 115f\n\t"
        "movl g_res_004fc4e0+60, %eax\n\t"
        "movl %eax, -0x28(%esp)\n\t"
        "115:\n\t"
        "btl $16, %edx\n\t"
        "jnc 116f\n\t"
        "movl g_res_004fc4e0+64, %eax\n\t"
        "movl %eax, -0x24(%esp)\n\t"
        "116:\n\t"
        "btl $17, %edx\n\t"
        "jnc 117f\n\t"
        "movl g_res_004fc4e0+68, %eax\n\t"
        "movl %eax, -0x20(%esp)\n\t"
        "117:\n\t"
        "btl $18, %edx\n\t"
        "jnc 118f\n\t"
        "movl g_res_004fc4e0+72, %eax\n\t"
        "movl %eax, -0x1c(%esp)\n\t"
        "118:\n\t"
        "btl $19, %edx\n\t"
        "jnc 119f\n\t"
        "movl g_res_004fc4e0+76, %eax\n\t"
        "movl %eax, -0x18(%esp)\n\t"
        "119:\n\t"
        "btl $20, %edx\n\t"
        "jnc 120f\n\t"
        "movl g_res_004fc4e0+80, %eax\n\t"
        "movl %eax, -0x14(%esp)\n\t"
        "120:\n\t"
        "btl $21, %edx\n\t"
        "jnc 121f\n\t"
        "movl g_res_004fc4e0+84, %eax\n\t"
        "movl %eax, -0x10(%esp)\n\t"
        "121:\n\t"
        "btl $22, %edx\n\t"
        "jnc 122f\n\t"
        "movl g_res_004fc4e0+88, %eax\n\t"
        "movl %eax, -0xc(%esp)\n\t"
        "122:\n\t"
        "btl $23, %edx\n\t"
        "jnc 123f\n\t"
        "movl g_res_004fc4e0+92, %eax\n\t"
        "movl %eax, -0x8(%esp)\n\t"
        "123:\n\t"
        "btl $24, %edx\n\t"
        "jnc 124f\n\t"
        "movl g_res_004fc4e0+96, %eax\n\t"
        "movl %eax, -0x4(%esp)\n\t"
        "124:\n\t"
        "ret $0x10\n\t"
    );
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fc4e0, ap_004fc4e0));
