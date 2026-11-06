// hand-ported from 00513f20_FUN_00513f20.c (FUN_00513f20, 195 bytes)
// @hand-fixed 2026-10-29 written from the disassembly: the indirect calls are COM (stdcall, the object pushed as the first argument, callee pops): ID3DXBuffer slot 0xc GetBufferPointer(buf) (00513f6d, 00513fa8), slot 8 Release (00513fc0, 00513fd6), IDirect3DDevice9 slot 0x1a8 (CreatePixelShader) (dev, code, param_2) with dev's vtable read before the GetBufferPointer call (00513fa3); D3DXAssembleShader 0x579a9a is stdcall with 7 arguments (src, strlen(src), 0, 0, 0, &shader, &errors); 0x40c640 is a cdecl print (fmt 0x622dbc, error text; add esp, 8); 0x42d080 is stdcall(0, 0xd2, 500) (the ECX = 0x663498 load is unused); returns the device call's EAX; thiscall, ret 8
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef int (BEA_STDCALL* FUN_00579a9a_t)(const char *, uint32_t, uint32_t, uint32_t, uint32_t, void **, void **);
static const bea_guard<FUN_00579a9a_t> FUN_00579a9a = {(FUN_00579a9a_t)0x00579a9a};
typedef uint32_t (BEA_CDECL* FUN_0040c640_t)(uint32_t, ...);
static const bea_guard<FUN_0040c640_t> FUN_0040c640 = {(FUN_0040c640_t)0x0040c640};
typedef uint32_t (BEA_STDCALL* FUN_0042d080_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042d080_t> FUN_0042d080 = {(FUN_0042d080_t)0x0042d080};

typedef uint32_t (BEA_STDCALL* com0_t)(void *);
typedef uint32_t (BEA_STDCALL* com2_t)(void *, uint32_t, uint32_t);

static inline void *slot(void *obj, unsigned off)
{
  return (*reinterpret_cast<void *const *const *>(obj))[off / 4];
}

static uint32_t BEA_THISCALL ap_00513f20(uint8_t *this_, const char *param_1, uint32_t param_2)
{
  void *shader = nullptr;                                                // [esp+8]
  void *errors = nullptr;                                                // [esp+0xc]
  uint32_t len = (uint32_t)strlen(param_1);                              // repne scasb; not; dec
  int hr = FUN_00579a9a(param_1, len, 0u, 0u, 0u, &shader, &errors);
  if (hr < 0) {
    if (errors != nullptr) {
      const bea_guard<com0_t> get = {(com0_t)slot(errors, 0xc)};
      uint32_t text = get(errors);
      FUN_0040c640(0x00622dbcu, text);
    }
    FUN_0042d080(0u, 0xd2u, 500u);
  }
  void *dev = *reinterpret_cast<void **>(this_ + 0x32ea0);
  const bea_guard<com2_t> create = {(com2_t)slot(dev, 0x1a8)};          // vtable read at 00513fa3
  const bea_guard<com0_t> get = {(com0_t)slot(shader, 0xc)};
  uint32_t code = get(shader);
  uint32_t r = create(dev, code, param_2);
  if (shader != nullptr) {
    const bea_guard<com0_t> rel = {(com0_t)slot(shader, 8)};
    rel(shader);
    shader = nullptr;
  }
  if (errors != nullptr) {
    const bea_guard<com0_t> rel = {(com0_t)slot(errors, 8)};
    rel(errors);
  }
  return r;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00513f20, ap_00513f20));
