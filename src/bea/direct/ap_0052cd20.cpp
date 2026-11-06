// auto-ported from 0052cd20_FUN_0052cd20.c (FUN_0052cd20, 796 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
// @hand-fixed 2026-10-28 compile: rewritten from the asm (LARGE_INTEGER .s -> .u/QuadPart); 64-bit counter math as signed qwords (fild qword, 0x52cde9/0x52cef5) not uint64 CONCAT44; QPF through import slot 0x5d81e0 (0x52cd3e); _alldiv freq/10 (0x52cec4); DAT_0089c2f8==0 test also taken when unordered (0x52cf18)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0089c2bc GLOBAL_AT(int, 0x0089c2bc)
#define DAT_0089c2c0 GLOBAL_AT(int, 0x0089c2c0)
#define DAT_0089c2c8 GLOBAL_AT(int, 0x0089c2c8)
#define DAT_0089c2cc GLOBAL_AT(int, 0x0089c2cc)
#define DAT_0089c2d0 GLOBAL_AT(int, 0x0089c2d0)
#define DAT_0089c2d4 GLOBAL_AT(int, 0x0089c2d4)
#define DAT_0089c2d8 GLOBAL_AT(int, 0x0089c2d8)
#define DAT_0089c2dc GLOBAL_AT(int, 0x0089c2dc)
#define DAT_0089c2e4 GLOBAL_AT(int, 0x0089c2e4)
#define DAT_0089c2e0 GLOBAL_AT(int, 0x0089c2e0)
#define _DAT_0089c2f8 GLOBAL_AT(double, 0x0089c2f8)
#define _DAT_0089c2e8 GLOBAL_AT(double, 0x0089c2e8)
#define _DAT_0089c2f0 GLOBAL_AT(double, 0x0089c2f0)

#define DAT_0089c2c8_q GLOBAL_AT(longlong, 0x0089c2c8)
#define DAT_0089c2d0_q GLOBAL_AT(longlong, 0x0089c2d0)
#define DAT_0089c2d8_q GLOBAL_AT(longlong, 0x0089c2d8)
#define DAT_0089c2e0_q GLOBAL_AT(longlong, 0x0089c2e0)
// QueryPerformanceFrequency through the game's import slot, as the original calls it (0x52cd3e)
#define QPF_import (*reinterpret_cast<decltype(&::QueryPerformanceFrequency)*>(0x005d81e0))

static float10 BEA_STDCALL ap_0052cd20(int param_1)
{
  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  LARGE_INTEGER &local_8 = *reinterpret_cast<LARGE_INTEGER *>(bea_frame_ + 0x10 - 0x8);
  float10 fVar12;
  longlong lNow;    // ecx:eax
  longlong lMark;   // esi:edi (DAT_0089c2d0/d4)

  if (DAT_0089c2bc == 0) {
    DAT_0089c2bc = 1;
    DAT_0089c2c0 = QPF_import(&local_8);
    if (DAT_0089c2c0 == 0) goto LAB_0052cf06;
    DAT_0089c2c8 = local_8.u.LowPart;
    DAT_0089c2cc = local_8.u.HighPart;
  }
  if (DAT_0089c2c0 == 0) goto LAB_0052cf06;
  lMark = DAT_0089c2d0_q;
  if ((lMark == 0) || (param_1 == 1) || (param_1 == 4)) {
    QueryPerformanceCounter(&local_8);
    lMark = DAT_0089c2d0_q;
    lNow = local_8.QuadPart;
  }
  else {
    lNow = lMark;
    local_8.QuadPart = lMark;
  }
  if (param_1 == 6) {
    local_8.QuadPart = (longlong)((ulonglong)lNow - (ulonglong)DAT_0089c2d8_q);
    DAT_0089c2d8_q = lNow;
    return (float10)local_8.QuadPart / (float10)DAT_0089c2c8_q;
  }
  if (param_1 == 5) {
    local_8.QuadPart = (longlong)((ulonglong)lNow - (ulonglong)DAT_0089c2e0_q);
    return (float10)local_8.QuadPart / (float10)DAT_0089c2c8_q;
  }
  if (param_1 == 0) {
    DAT_0089c2e0_q = lNow;
  }
  else if (param_1 == 1) {
    DAT_0089c2d0 = 0;
    DAT_0089c2e0_q = (longlong)((ulonglong)DAT_0089c2e0_q + ((ulonglong)lNow - (ulonglong)lMark));
    DAT_0089c2d4 = 0;
  }
  else if (param_1 == 2) {
    DAT_0089c2d0_q = lNow;
  }
  else if (param_1 == 3) {
    // _alldiv (0x55fcc0): signed 64-bit frequency / 10
    DAT_0089c2d0_q = (longlong)((ulonglong)(DAT_0089c2c8_q / 10) + (ulonglong)lMark);
    return (float10)0.0f;
  }
  else if (param_1 == 4) {
    return (float10)local_8.QuadPart / (float10)DAT_0089c2c8_q;
  }
  else {
    return (float10)-1.0f;
  }
  // LAB_0052ce43
  DAT_0089c2d8_q = lNow;
  return (float10)0.0f;

LAB_0052cf06:
  // fcomp qword 0.0; test ah,0x40: equal or unordered reads the clock (0x52cf0c)
  if ((_DAT_0089c2f8 == 0.0) || bea_isnan(_DAT_0089c2f8) || (param_1 == 1) || (param_1 == 4)) {
    local_8.u.LowPart = timeGetTime();
    local_8.u.HighPart = 0;
    fVar12 = (float10)local_8.QuadPart * (float10)GLOBAL_AT(double, 0x005d8bc8);
  }
  else {
    fVar12 = (float10)_DAT_0089c2f8;
  }
  if (param_1 == 6) {
    double dDelta = (double)(fVar12 - (float10)_DAT_0089c2e8);
    _DAT_0089c2e8 = (double)fVar12;
    return (float10)dDelta;
  }
  if (param_1 == 5) {
    return fVar12 - (float10)_DAT_0089c2f0;
  }
  if (param_1 == 0) {
    _DAT_0089c2f0 = (double)fVar12;
    _DAT_0089c2e8 = (double)fVar12;
    return (float10)0.0f;
  }
  if (param_1 == 1) {
    float10 fVar2 = fVar12 - (float10)_DAT_0089c2f8;
    _DAT_0089c2f8 = 0.0;
    _DAT_0089c2f0 = (double)(fVar2 + (float10)_DAT_0089c2f0);
    _DAT_0089c2e8 = (double)fVar12;
    return (float10)0.0f;
  }
  if (param_1 == 2) {
    _DAT_0089c2f8 = (double)fVar12;
    return (float10)0.0f;
  }
  if (param_1 == 3) {
    _DAT_0089c2f8 = (double)((float10)_DAT_0089c2f8 + (float10)GLOBAL_AT(double, 0x005d8c38));
    return (float10)0.0f;
  }
  if (param_1 == 4) {
    return fVar12;
  }
  return (float10)-1.0f;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0052cd20, ap_0052cd20));
