// Direct3D render-state / texture-stage-state caches (PCPlatform / DXSurf).
// Both are __stdcall free functions that skip redundant SetRenderState /
// SetTextureStageState calls by remembering the last value sent.
#include "bea/common.h"
#include "bea/hooks.h"
#include <windows.h>

BEA_GLOBAL(void*, g_d3dDevice, 0x00888a50);                  // IDirect3DDevice9*
BEA_GLOBAL_PTR(uint32_t, g_renderStateCache, 0x00855540);     // [D3DRENDERSTATETYPE]
BEA_GLOBAL_PTR(uint32_t, g_textureStageCache, 0x008557f0);    // [stage * 30 + D3DTEXTURESTAGESTATETYPE]
BEA_GLOBAL(uint8_t, g_cullModeMirrored, 0x0089d680);          // swaps CW/CCW when set

typedef HRESULT (BEA_STDCALL* D3DDev_SetRenderState_t)(void* dev, uint32_t state, uint32_t value);
typedef HRESULT (BEA_STDCALL* D3DDev_SetTextureStageState_t)(void* dev, uint32_t stage, uint32_t type, uint32_t value);

template <typename Fn>
static inline Fn com_method(void* obj, size_t vtable_offset)
{
    return *reinterpret_cast<Fn*>(*reinterpret_cast<char**>(obj) + vtable_offset);
}

enum { D3DRS_CULLMODE = 22, D3DCULL_CW = 2, D3DCULL_CCW = 3 };

// 0x00513bc0  SetRenderStateCached(state, value)
// Note: the cache stores the requested value but D3D receives the mirrored
// cull mode when g_cullModeMirrored is set.
static void BEA_STDCALL D3D_SetRenderStateCached(uint32_t state, uint32_t value)
{
    BEA_TRACE_ONCE();
    if (g_renderStateCache[state] == value) return;
    g_renderStateCache[state] = value;
    uint32_t sent = value;
    if (state == D3DRS_CULLMODE && g_cullModeMirrored) {
        if (value == D3DCULL_CW) sent = D3DCULL_CCW;
        else if (value == D3DCULL_CCW) sent = D3DCULL_CW;
    }
    com_method<D3DDev_SetRenderState_t>(g_d3dDevice, 0xe4)(g_d3dDevice, state, sent);
}

// 0x00513820  SetTextureStageStateCached(stage, type, value)
static void BEA_STDCALL D3D_SetTextureStageStateCached(uint32_t stage, uint32_t type, uint32_t value)
{
    BEA_TRACE_ONCE();
    uint32_t& slot = g_textureStageCache[stage * 30 + type];
    if (slot == value) return;
    slot = value;
    com_method<D3DDev_SetTextureStageState_t>(g_d3dDevice, 0x10c)(g_d3dDevice, stage, type, value);
}

typedef HRESULT (BEA_STDCALL* D3DDev_SetTexture_t)(void* dev, uint32_t stage, void* texture);
typedef HRESULT (BEA_STDCALL* D3DDev_SetSamplerState_t)(void* dev, uint32_t sampler, uint32_t type, uint32_t value);

BEA_GLOBAL_PTR(void*, g_textureCache, 0x008554d0);          // [stage] last IDirect3DBaseTexture9*
BEA_GLOBAL(uint32_t, g_textureFilterCaps, 0x00888a78);       // D3DCAPS9::TextureFilterCaps
BEA_GLOBAL(uint32_t, g_maxAnisotropy, 0x00888ac0);           // D3DCAPS9::MaxAnisotropy

enum {
    D3DSAMP_MIPFILTER = 6, D3DSAMP_MIPMAPLODBIAS = 8, D3DSAMP_MAXANISOTROPY = 10,
    D3DTEXF_ANISOTROPIC = 3,
    D3DPTFILTERCAPS_MINFANISOTROPIC = 0x20000,
};

// 0x00513a50  PCLTShell::SetTextureCached(stage, texture)  (thiscall; the
// device pointer is the shell's copy at this+0x32ea0)
static void BEA_THISCALL Shell_SetTextureCached(void* shell, uint32_t stage, void* texture)
{
    BEA_TRACE_ONCE();
    if (g_textureCache[stage] == texture) return;
    g_textureCache[stage] = texture;
    void* dev = at<void*>(shell, 0x32ea0);
    com_method<D3DDev_SetTexture_t>(dev, 0x104)(dev, stage, texture);
}

// 0x00513930  SetSamplerStateChecked(sampler, type, value)  (stdcall, no cache)
// Filters requests against the device caps: anisotropic mip filtering only if
// supported, LOD bias never, max anisotropy clamped (1 when unsupported).
static void BEA_STDCALL D3D_SetSamplerStateChecked(uint32_t sampler, uint32_t type, uint32_t value)
{
    BEA_TRACE_ONCE();
    if (type == D3DSAMP_MIPFILTER) {
        if (value == D3DTEXF_ANISOTROPIC && !(g_textureFilterCaps & D3DPTFILTERCAPS_MINFANISOTROPIC)) return;
    } else if (type == D3DSAMP_MIPMAPLODBIAS) {
        return;
    } else if (type == D3DSAMP_MAXANISOTROPY) {
        uint32_t v = (g_textureFilterCaps & D3DPTFILTERCAPS_MINFANISOTROPIC) ? value : 1;
        value = v;
        if (g_maxAnisotropy < v) value = g_maxAnisotropy;
    }
    com_method<D3DDev_SetSamplerState_t>(g_d3dDevice, 0x114)(g_d3dDevice, sampler, type, value);
}

BEA_HOOKS(
    BEA_HOOK(0x00513bc0, D3D_SetRenderStateCached),
    BEA_HOOK(0x00513820, D3D_SetTextureStageStateCached),
    BEA_HOOK(0x00513a50, Shell_SetTextureCached),
    BEA_HOOK(0x00513930, D3D_SetSamplerStateChecked));
