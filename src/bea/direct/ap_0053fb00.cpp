// auto-ported from 0053fb00_FUN_0053fb00.c (FUN_0053fb00, 1281 bytes) by tools/autoport.py
// @hand-fixed 2026-10-28 compile: rewritten from the asm on the original frame ([esp+Y] -> bea_frame_+Y-8; caps buffer at +0xac, BITMAPINFOHEADER +0x80, SIZE +0x2c, glyph text +0x1a). Dropped the conflicting BITMAPINFO/HBITMAP/tagSIZE typedefs; GDI calls and MulDiv go through BEA.exe's IAT (0x5d8034..0x5d8070, 0x5d8104) since the DLL does not link gdi32; texture scale is fild qword/fidiv of the unsigned caps width (0x53fb89-0x53fb9b); point size llrint of dpi*scale via fistp qword (0x53fca6); the per-glyph u/v are fild qword of the unsigned x/y over fidiv of the int size (0x53fdf5..0x53fecb); vslot0 gets esi = (copy end pointer & 0xffff0000) | movsx si (0x53fe05)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x1e0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_006251e8 GLOBAL_AT(char, 0x006251e8)
#define s_C__dev_ONSLAUGHT2_DXFont_cpp_00650670 ((char*)0x00650670)
#define s_SystemFont_00650664 ((const char*)0x00650664)
typedef char* (BEA_CDECL* FUN_004f7c70_t)(uint32_t);
static const bea_guard<FUN_004f7c70_t> FUN_004f7c70 = {(FUN_004f7c70_t)0x004f7c70};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef void * (BEA_THISCALL* FUN_00556cc0_t)(uint32_t);
static const bea_guard<FUN_00556cc0_t> FUN_00556cc0 = {(FUN_00556cc0_t)0x00556cc0};
typedef undefined4 (BEA_THISCALL* FUN_00558690_t)(uint32_t);
static const bea_guard<FUN_00558690_t> FUN_00558690 = {(FUN_00558690_t)0x00558690};
#define AP_IAT(fn, addr) (*reinterpret_cast<decltype(&::fn)*>(static_cast<uintptr_t>(addr)))
#define ap_CreateCompatibleDC    AP_IAT(CreateCompatibleDC, 0x005d8034)
#define ap_CreateDIBSection      AP_IAT(CreateDIBSection, 0x005d8038)
#define ap_SetMapMode            AP_IAT(SetMapMode, 0x005d803c)
#define ap_GetDeviceCaps         AP_IAT(GetDeviceCaps, 0x005d8040)
#define ap_CreateFontA           AP_IAT(CreateFontA, 0x005d8044)
#define ap_SetTextColor          AP_IAT(SetTextColor, 0x005d8048)
#define ap_SetBkColor            AP_IAT(SetBkColor, 0x005d804c)
#define ap_SetTextAlign          AP_IAT(SetTextAlign, 0x005d8050)
#define ap_GetTextExtentPoint32A AP_IAT(GetTextExtentPoint32A, 0x005d8054)
#define ap_ExtTextOutA           AP_IAT(ExtTextOutA, 0x005d8058)
#define ap_SelectObject          AP_IAT(SelectObject, 0x005d805c)
#define ap_DeleteDC              AP_IAT(DeleteDC, 0x005d8068)
#define ap_DeleteObject          AP_IAT(DeleteObject, 0x005d8070)
#define ap_MulDiv                AP_IAT(MulDiv, 0x005d8104)

static void BEA_THISCALL ap_0053fb00(void * this_)
{
  alignas(16) uint8_t bea_frame_[0x1e0] = {};   // the original stack frame (emulate_frame)
#define AP_S(type, y) (*reinterpret_cast<type *>(bea_frame_ + (y) - 8))
  const uintptr_t self = (uintptr_t)this_;
  uint32_t &W = *reinterpret_cast<uint32_t *>(self + 0x160);
  uint32_t &H = *reinterpret_cast<uint32_t *>(self + 0x164);
  uint32_t sz;

  *(uint32_t *)(self + 0x17c) = 0x3f800000;
  if (*(uint32_t *)(self + 0x54) > 0x28) {
    sz = 0x400;
  }
  else {
    sz = (*(uint32_t *)(self + 0x54) > 0x14) ? 0x200 : 0x100;
  }
  H = sz;
  W = sz;
  bea_vcall<uint32_t>(DAT_00888a50, 0x1c, DAT_00888a50, &AP_S(uint8_t, 0xac));   // GetDeviceCaps(&caps)
  uint32_t oldW = W;
  uint32_t maxW = AP_S(uint32_t, 0x104);                                         // caps.MaxTextureWidth
  if (oldW > maxW) {
    AP_S(uint32_t, 0x20) = maxW;
    AP_S(uint32_t, 0x24) = 0;
    H = maxW;
    float10 fq = (float10)AP_S(long long, 0x20);                                 // fild qword
    AP_S(uint32_t, 0x20) = oldW;
    AP_S(uint32_t, 0x24) = 0;
    W = maxW;
    *(float *)(self + 0x17c) = (float)(fq / (float10)AP_S(int, 0x20));            // fidiv dword
  }
  int alloc = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x158), bea_arg(2), bea_arg(s_C__dev_ONSLAUGHT2_DXFont_cpp_00650670), bea_arg(0x108));
  AP_S(int, 0x20) = alloc;
  int *piTex = (alloc == 0) ? (int *)0 : (int *)FUN_00556cc0(bea_arg(alloc));
  *(int **)(self + 0x170) = piTex;
  bea_vcall<uint32_t>(piTex, 0x18, W, H, 4, 1, 0, 1);

  uint8_t *bmi = &AP_S(uint8_t, 0x80);
  __builtin_memset(bmi, 0, 0x28);                                                // rep stosd x10
  *(uint32_t *)(bmi + 0x0) = 0x28;
  *(uint32_t *)(bmi + 0x4) = W;
  *(int *)(bmi + 0x8) = -(int)H;
  *(uint16_t *)(bmi + 0xc) = 1;
  *(uint32_t *)(bmi + 0x10) = 0;
  *(uint16_t *)(bmi + 0xe) = 0x20;
  HDC hdc = ap_CreateCompatibleDC((HDC)0);
  AP_S(HBITMAP, 0x28) = ap_CreateDIBSection(hdc, (const BITMAPINFO *)bmi, 0, &AP_S(void *, 0x3c), (HANDLE)0, 0);
  ap_SetMapMode(hdc, 1);
  AP_S(int, 0x18) = ap_GetDeviceCaps(hdc, 0x5a);
  AP_S(long long, 0x38) = __builtin_llrintl((float10)AP_S(int, 0x18) * (float10)*(float *)(self + 0x17c));
  int iH = ap_MulDiv(*(int *)(self + 0x54), AP_S(int, 0x38), 0x48);
  uint32_t uFlags = *(uint32_t *)(self + 0x58);
  AP_S(uint32_t, 0x14) = (uFlags >> 1) & 1;
  int iWeight = (int)((-(uint32_t)((uFlags & 1) != 0) & 300) + 400);
  LPCSTR pszFace = (LPCSTR)FUN_004f7c70(bea_arg(self + 4));
  HFONT hFont = ap_CreateFontA(-iH, 0, 0, 0, iWeight, AP_S(uint32_t, 0x14), 0, 0, 1, 0, 0, 4, 2, pszFace);
  AP_S(HFONT, 0x20) = hFont;
  ap_SelectObject(hdc, AP_S(HBITMAP, 0x28));
  ap_SelectObject(hdc, hFont);
  ap_SetTextColor(hdc, 0xffffff);
  ap_SetBkColor(hdc, 0);
  ap_SetTextAlign(hdc, 0);
  AP_S(uint32_t, 0x14) = 0;                                                      // x
  AP_S(uint32_t, 0x1c) = 0;                                                      // y
  const char *pcSrc = (const char *)FUN_004f7c70(bea_arg(&DAT_006251e8));
  uint32_t uLen = (uint32_t)__builtin_strlen(pcSrc) + 1;
  AP_S(char, 0x13) = ' ';
  __builtin_memcpy(&AP_S(char, 0x1a), pcSrc, uLen);                              // repne scasb / rep movs
  // esi after the copy is the source end; the loop only rewrites its low 16 bits (movsx si)
  const uint32_t uEsiHi = (uint32_t)(uintptr_t)(pcSrc + uLen) & 0xffff0000u;
  do {
    AP_S(char, 0x1a) = AP_S(char, 0x13);
    ap_GetTextExtentPoint32A(hdc, &AP_S(char, 0x1a), 1, &AP_S(SIZE, 0x2c));
    uint32_t x = AP_S(uint32_t, 0x14);
    if ((uint32_t)AP_S(int, 0x2c) + x + 1 > W) {
      AP_S(uint32_t, 0x14) = 0;
      x = 0;
      AP_S(uint32_t, 0x1c) = AP_S(uint32_t, 0x1c) + (uint32_t)AP_S(int, 0x30) + 1;
    }
    ap_ExtTextOutA(hdc, (int)x, AP_S(int, 0x1c), 2, (const RECT *)0, &AP_S(char, 0x1a), 1, (const INT *)0);
    const uint32_t uArg = uEsiHi | (uint16_t)(int16_t)AP_S(signed char, 0x13);
    int idx;
    // u0 = x / W
    AP_S(uint32_t, 0x58) = x;
    AP_S(uint32_t, 0x5c) = 0;
    AP_S(uint32_t, 0x40) = W;
    AP_S(uint32_t, 0x44) = 0;
    AP_S(float, 0x14) = (float)((float10)AP_S(long long, 0x58) / (float10)AP_S(int, 0x40));
    idx = bea_vcall<uint32_t>(this_, 0x0, uArg);
    *(float *)(self + 0x180 + idx * 0x10) = AP_S(float, 0x14);
    // v0 = y / H
    AP_S(uint32_t, 0x50) = AP_S(uint32_t, 0x1c);
    AP_S(uint32_t, 0x54) = 0;
    AP_S(uint32_t, 0x68) = H;
    AP_S(uint32_t, 0x6c) = 0;
    AP_S(float, 0x14) = (float)((float10)AP_S(long long, 0x50) / (float10)AP_S(int, 0x68));
    idx = bea_vcall<uint32_t>(this_, 0x0, uArg);
    *(float *)(self + 0x184 + idx * 0x10) = AP_S(float, 0x14);
    // u1 = (x + cx) / W
    AP_S(uint32_t, 0x60) = (uint32_t)AP_S(int, 0x2c) + x;
    AP_S(uint32_t, 0x64) = 0;
    AP_S(uint32_t, 0x70) = W;
    AP_S(uint32_t, 0x74) = 0;
    AP_S(float, 0x14) = (float)((float10)AP_S(long long, 0x60) / (float10)AP_S(int, 0x70));
    idx = bea_vcall<uint32_t>(this_, 0x0, uArg);
    *(float *)(self + 0x188 + idx * 0x10) = AP_S(float, 0x14);
    // v1 = (y + cy) / H
    AP_S(uint32_t, 0x48) = (uint32_t)AP_S(int, 0x30) + AP_S(uint32_t, 0x1c);
    AP_S(uint32_t, 0x4c) = 0;
    AP_S(uint32_t, 0x34) = H;
    AP_S(uint32_t, 0x38) = 0;
    AP_S(float, 0x14) = (float)((float10)AP_S(long long, 0x48) / (float10)AP_S(int, 0x34));
    idx = bea_vcall<uint32_t>(this_, 0x0, uArg);
    *(float *)(self + 0x18c + idx * 0x10) = AP_S(float, 0x14);
    AP_S(uint32_t, 0x14) = x + (uint32_t)AP_S(int, 0x2c) + 1;
    AP_S(char, 0x13) = (char)(AP_S(char, 0x13) + 1);
  } while (BEA_LOOP_GUARD(AP_S(signed char, 0x13) < 0x7f));

  int *piSurf = (int *)FUN_00558690(bea_arg(*(uint32_t *)(self + 0x170)));
  int hr = bea_vcall<uint32_t>(piSurf, 0x4c, piSurf, 0, &AP_S(uint8_t, 0x78), 0, 0x800);   // LockRect
  if (-1 < hr) {
    uint32_t *puDst = AP_S(uint32_t *, 0x7c);                                    // locked pBits
    for (uint32_t y = 0; y < H; y++) {
      for (uint32_t x = 0; x < W; x++) {
        uint8_t b = *(const uint8_t *)((uintptr_t)AP_S(void *, 0x3c) + (W * y + x) * 4);
        AP_S(uint8_t, 0x14) = b;
        if (b == 0) {
          *puDst = 0;
        }
        else {
          *puDst = ((AP_S(uint32_t, 0x14) & 0xff) << 0x18) | 0xffffff;
        }
        puDst = puDst + 1;
      }
    }
    piSurf = (int *)FUN_00558690(bea_arg(*(uint32_t *)(self + 0x170)));
    bea_vcall<uint32_t>(piSurf, 0x50, piSurf, 0);                                 // UnlockRect
    ap_DeleteObject(AP_S(HBITMAP, 0x28));
    ap_DeleteDC(hdc);
    ap_DeleteObject(AP_S(HFONT, 0x20));
    __builtin_memcpy((char *)(*(uintptr_t *)(self + 0x170) + 8), s_SystemFont_00650664, __builtin_strlen(s_SystemFont_00650664) + 1);
  }
#undef AP_S
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053fb00, ap_0053fb00));
