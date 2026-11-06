// hand-ported from 004ebfb0_FUN_004ebfb0.c (FUN_004ebfb0, 672 bytes)
// @hand-fixed 2026-10-29 written from the disassembly: param_1's slots 0x2c and the sub-object's 0x70, and slot 0x24 of *(param_1+0x30), take no stack argument (nothing pushed before 004ec007, 004ec01e, 004ec05e); slot 0x18 of the 0x70 result takes (key, &flag) and pops both (004ec080-004ec084, no add esp); slot 0x30 takes one (push 0); the clock gate keeps the asm's NaN behaviour: go on when !(clock > last) (fcom, test ah,0x41, jne at 004ebfd8), else when clock >= last + 0.5 unrounded (fcompp, test ah,1 at 004ebfec), else only when param_2 != 0; the per-entry value is (~flag) & 1 (not dl; movsx; and 1); the 0x200-byte clear re-reads the buffer pointer for each dword (004ec16d); block bounds and the two callees' arguments follow 004ec0e7-004ec218 (FUN_004ee0f0(x0, y0, w, h) ret 0x10, FUN_005473b0 on the dword at 0x89c9b0 (x0*8, y0*8, x1*8, (y0+h)*8, 0) ret 0x14)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef uint32_t (BEA_THISCALL* FUN_004ee0f0_t)(void *, int, int, int, int);
static const bea_guard<FUN_004ee0f0_t> FUN_004ee0f0 = {(FUN_004ee0f0_t)0x004ee0f0};
typedef uint32_t (BEA_THISCALL* FUN_005473b0_t)(uint32_t, int, int, int, int, int);
static const bea_guard<FUN_005473b0_t> FUN_005473b0 = {(FUN_005473b0_t)0x005473b0};

#define U32(p, k) (*reinterpret_cast<uint32_t *>((uint8_t *)(p) + (k)))
#define I32(p, k) (*reinterpret_cast<int32_t *>((uint8_t *)(p) + (k)))
#define PTR(p, k) (*reinterpret_cast<uint8_t **>((uint8_t *)(p) + (k)))

static inline int add32(int a, int b) { return (int)((uint32_t)a + (uint32_t)b); }
static inline int sub32(int a, int b) { return (int)((uint32_t)a - (uint32_t)b); }

static void BEA_THISCALL ap_004ebfb0(uint8_t *this_, uint8_t *param_1, int param_2)
{
  if (param_1 == nullptr) {
    return;
  }
  {
    float10 t = (float10)GLOBAL_AT(float, 0x00672fd0);
    float10 last = (float10)GLOBAL_AT(float, 0x00632970);
    if (t > last) {                                                      // test ah, 0x41; jne
      float10 s = last + (float10)0.5f;
      if (!(t >= s) && param_2 == 0) {                                   // test ah, 1; je
        return;                                                          // 004ec244: fstp st(0)
      }
    }
    GLOBAL_AT(float, 0x00632970) = (float)t;                             // fstp [0x632970]
  }
  uint8_t *pv = bea_vcall<uint8_t *>(param_1, 0x2c);                     // 004ec007
  if (pv == nullptr) {
    return;
  }
  void *pc = bea_vcall<void *>(param_1 + 8, 0x70);                       // 004ec01e
  bool changed = false;
  for (int i = 0; i < I32(pv, 0xc); ++i) {
    uint32_t off = (uint32_t)i * 0x1c;
    if (U32(PTR(pv, 8) + off, 0x14) != 0) {
      uint32_t v;
      if (param_2 != 0) {
        v = 0;
      } else {
        void *c = *reinterpret_cast<void **>(param_1 + 0x30);
        uint32_t o = (c != nullptr) ? bea_vcall<uint32_t>(c, 0x24) : 0u;      // 004ec05e (0 when none)
        uint32_t tab = *reinterpret_cast<volatile uint32_t *>((uintptr_t)(o + 0x160u));
        uint32_t key = *reinterpret_cast<volatile uint32_t *>((uintptr_t)(tab + (uint32_t)i * 4u));
        uint32_t flag = 0;                                               // [esp+0x14]
        if (pc != nullptr) {
          bea_vcall<uint32_t>(pc, 0x18, key, &flag);                     // 004ec084
        }
        v = (uint32_t)(int)(int8_t)(uint8_t)~(uint8_t)flag & 1u;
      }
      uint32_t *e = reinterpret_cast<uint32_t *>(PTR(pv, 8) + off + 0x18);
      if (v != *e) {
        changed = true;
        *e = v;
      }
    }
  }
  if (!changed) {
    if (param_2 == 0) {
      return;
    }
    U32(pv, 0) = 0;
    bea_vcall<uint32_t>(param_1, 0x30, 0u);
    return;
  }

  int x0 = I32(pv, 0x10);
  int w = I32(pv, 0x18);
  int h = I32(pv, 0x1c);
  int y0 = I32(pv, 0x14);
  if (x0 < 0) x0 = 0;
  if (y0 < 0) y0 = 0;
  if (add32(w, x0) >= 0x40) w = sub32(0x3f, x0);
  if (add32(y0, h) >= 0x40) h = sub32(0x3f, y0);
  int x1 = add32(w, x0);
  if (x0 < x1) {
    int rows = sub32(x1, x0);
    uint32_t row = (uint32_t)(uintptr_t)this_ + ((uint32_t)x0 * 64u + (uint32_t)y0) * 4u + 0x18u;
    do {
      int y1 = add32(y0, h);
      if (y0 < y1) {
        int n = sub32(y1, y0);
        uint32_t *slotp = reinterpret_cast<uint32_t *>((uintptr_t)row);
        do {
          if (*slotp != 0) {
            for (uint32_t k = 0; k < 0x200; k += 4) {
              *reinterpret_cast<uint32_t *>((uintptr_t)(*slotp + k)) = 0;    // pointer re-read each store
            }
          }
          ++slotp;
          --n;
        } while (n != 0);
      }
      row += 0x100;
      --rows;
    } while (rows != 0);
  }
  for (uint8_t *s = PTR(this_, 0); s != nullptr; s = PTR(s, 0x20)) {
    if (I32(s, 0x10) < x1 && add32(I32(s, 0x18), I32(s, 0x10)) > x0 &&
        I32(s, 0x14) < add32(y0, h) && add32(I32(s, 0x1c), I32(s, 0x14)) > y0) {
      FUN_004ee0f0(s, x0, y0, w, h);
    }
  }
  FUN_005473b0(GLOBAL_AT(uint32_t, 0x0089c9b0), (int)((uint32_t)x0 * 8u), (int)((uint32_t)y0 * 8u),
               (int)((uint32_t)x1 * 8u), (int)((uint32_t)add32(h, y0) * 8u), 0);
  if (param_2 == 0) {
    return;
  }
  U32(pv, 0) = 0;
  bea_vcall<uint32_t>(param_1, 0x30, 0u);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ebfb0, ap_004ebfb0));
