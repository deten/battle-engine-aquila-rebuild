// Exact replacements for trivial accessor functions, instantiated from
// trivial_generated.inc (see tools/gen_trivial.py).  Each template reproduces
// one VC6 code pattern bit-for-bit in effect; POP is the number of argument
// bytes the original pops (thiscall/stdcall `ret N`), modelled by declaring
// that many dword parameters.
//
// Names are generic on purpose: these functions are replaced for coverage and
// get real names in Phase 3 when their classes are recovered.
#include "bea/common.h"
#include "bea/hooks.h"

// A dummy-argument pack so that `ret N` is honoured: thiscall callee pops N.
template <uint32_t POP> struct Args;
template <> struct Args<0> { struct T {}; };
template <> struct Args<4> { struct T { uint32_t a; }; };
template <> struct Args<8> { struct T { uint32_t a, b; }; };
template <> struct Args<12> { struct T { uint32_t a, b, c; }; };
template <> struct Args<16> { struct T { uint32_t a, b, c, d; }; };
template <> struct Args<20> { struct T { uint32_t a, b, c, d, e; }; };

#define DEF_POP_VARIANTS(NAME, RET, BODY) \
    template <uint32_t V, uint32_t POP> struct NAME##_;                                   \
    template <uint32_t V> struct NAME##_<V, 0>  { static RET BEA_THISCALL f(void* self) BODY };                                        \
    template <uint32_t V> struct NAME##_<V, 4>  { static RET BEA_THISCALL f(void* self, uint32_t) BODY };                              \
    template <uint32_t V> struct NAME##_<V, 8>  { static RET BEA_THISCALL f(void* self, uint32_t, uint32_t) BODY };                    \
    template <uint32_t V> struct NAME##_<V, 12> { static RET BEA_THISCALL f(void* self, uint32_t, uint32_t, uint32_t) BODY };          \
    template <uint32_t V> struct NAME##_<V, 16> { static RET BEA_THISCALL f(void* self, uint32_t, uint32_t, uint32_t, uint32_t) BODY };\
    template <uint32_t V> struct NAME##_<V, 20> { static RET BEA_THISCALL f(void* self, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) BODY };

// one-parameter templates: V is the constant / offset / address
DEF_POP_VARIANTS(RetConst,  uint32_t, { return V; })
DEF_POP_VARIANTS(RetConst8, uint8_t,  { return (uint8_t)V; })
DEF_POP_VARIANTS(GetDword,  uint32_t, { return at<uint32_t>(self, V); })
DEF_POP_VARIANTS(GetByte,   uint8_t,  { return at<uint8_t>(self, V); })
DEF_POP_VARIANTS(GetByteZx, uint32_t, { return at<uint8_t>(self, V); })
DEF_POP_VARIANTS(GetWordZx, uint32_t, { return at<uint16_t>(self, V); })
DEF_POP_VARIANTS(GetWordSx, int32_t,  { return (int32_t)at<int16_t>(self, V); })
DEF_POP_VARIANTS(GetFloat,  f80,      { return (f80)at<float>(self, V); })
DEF_POP_VARIANTS(GetAddr,   void*,    { return static_cast<char*>(self) + V; })
DEF_POP_VARIANTS(GetGlobal, uint32_t, { return *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(V)); })

#define RetConst(V, POP)  RetConst_<V, POP>::f
#define RetConst8(V, POP) RetConst8_<V, POP>::f
#define GetDword(V, POP)  GetDword_<V, POP>::f
#define GetByte(V, POP)   GetByte_<V, POP>::f
#define GetByteZx(V, POP) GetByteZx_<V, POP>::f
#define GetWordZx(V, POP) GetWordZx_<V, POP>::f
#define GetWordSx(V, POP) GetWordSx_<V, POP>::f
#define GetFloat(V, POP)  GetFloat_<V, POP>::f
#define GetAddr(V, POP)   GetAddr_<V, POP>::f
#define GetGlobal(V, POP) GetGlobal_<V, POP>::f

template <uint32_t POP> struct Nop_;
template <> struct Nop_<0>  { static void BEA_THISCALL f(void*) {} };
template <> struct Nop_<4>  { static void BEA_THISCALL f(void*, uint32_t) {} };
template <> struct Nop_<8>  { static void BEA_THISCALL f(void*, uint32_t, uint32_t) {} };
template <> struct Nop_<12> { static void BEA_THISCALL f(void*, uint32_t, uint32_t, uint32_t) {} };
template <> struct Nop_<16> { static void BEA_THISCALL f(void*, uint32_t, uint32_t, uint32_t, uint32_t) {} };
template <> struct Nop_<20> { static void BEA_THISCALL f(void*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) {} };
#define Nop(POP) Nop_<POP>::f

template <uint32_t POP> struct RetThis_;
template <> struct RetThis_<0> { static void* BEA_THISCALL f(void* self) { return self; } };
template <> struct RetThis_<4> { static void* BEA_THISCALL f(void* self, uint32_t) { return self; } };
template <> struct RetThis_<8> { static void* BEA_THISCALL f(void* self, uint32_t, uint32_t) { return self; } };
#define RetThis(POP) RetThis_<POP>::f

template <uint32_t OFF, uint32_t V, uint32_t POP> struct SetConstDword_;
template <uint32_t OFF, uint32_t V> struct SetConstDword_<OFF, V, 0> { static void BEA_THISCALL f(void* self) { at<uint32_t>(self, OFF) = V; } };
template <uint32_t OFF, uint32_t V> struct SetConstDword_<OFF, V, 4> { static void BEA_THISCALL f(void* self, uint32_t) { at<uint32_t>(self, OFF) = V; } };
template <uint32_t OFF, uint32_t V> struct SetConstDword_<OFF, V, 8> { static void BEA_THISCALL f(void* self, uint32_t, uint32_t) { at<uint32_t>(self, OFF) = V; } };
#define SetConstDword(OFF, V, POP) SetConstDword_<OFF, V, POP>::f
template <uint32_t OFF, uint32_t V, uint32_t POP> struct SetConstByte_;
template <uint32_t OFF, uint32_t V> struct SetConstByte_<OFF, V, 0> { static void BEA_THISCALL f(void* self) { at<uint8_t>(self, OFF) = (uint8_t)V; } };
template <uint32_t OFF, uint32_t V> struct SetConstByte_<OFF, V, 4> { static void BEA_THISCALL f(void* self, uint32_t) { at<uint8_t>(self, OFF) = (uint8_t)V; } };
template <uint32_t OFF, uint32_t V> struct SetConstByte_<OFF, V, 8> { static void BEA_THISCALL f(void* self, uint32_t, uint32_t) { at<uint8_t>(self, OFF) = (uint8_t)V; } };
#define SetConstByte(OFF, V, POP) SetConstByte_<OFF, V, POP>::f

template <uint32_t OFF> static void BEA_THISCALL SetDword_t(void* self, uint32_t v) { at<uint32_t>(self, OFF) = v; }
template <uint32_t OFF> static void BEA_THISCALL SetByte_t(void* self, uint32_t v) { at<uint8_t>(self, OFF) = (uint8_t)v; }
template <uint32_t A, uint32_t B> static uint32_t BEA_THISCALL GetDword2_t(void* self) { return at<uint32_t>(at<void*>(self, A), B); }
template <uint32_t G, uint32_t B> static uint32_t BEA_THISCALL GetGlobal2_t(void* self) { return at<uint32_t>(*reinterpret_cast<void**>(static_cast<uintptr_t>(G)), B); }
#define SetDword(OFF)      SetDword_t<OFF>
#define SetByte(OFF)       SetByte_t<OFF>
#define GetDword2(A, B)    GetDword2_t<A, B>
#define GetGlobal2(G, B)   GetGlobal2_t<G, B>

// --- second tier ---------------------------------------------------------------
BEA_ORIG(void, BEA_THISCALL, MemoryManager_Free, 0x00549220, void* mm, void* p);
BEA_GLOBAL_PTR(void, g_memoryManager, 0x009c3df0);
typedef uint32_t (BEA_THISCALL* ThisFn1)(void*, uint32_t);
typedef void (BEA_THISCALL* ThisFn0)(void*);

DEF_POP_VARIANTS(RetFloatConst, f80, { return (f80)*reinterpret_cast<const float*>(static_cast<uintptr_t>(V)); })
#define RetFloatConst(V, POP) RetFloatConst_<V, POP>::f

// scalar deleting destructor that first runs base destructor BASE (original or hooked)
template <uint32_t BASE> static void* BEA_THISCALL DeletingDtorCall_t(void* self, uint32_t flags)
{
    reinterpret_cast<ThisFn0>(static_cast<uintptr_t>(BASE))(self);
    if (flags & 1) MemoryManager_Free(g_memoryManager, self);
    return self;
}
template <uint32_t VT> static void* BEA_THISCALL DeletingDtorInline_t(void* self, uint32_t flags)
{
    at<void*>(self, 0) = reinterpret_cast<void*>(static_cast<uintptr_t>(VT));
    if (flags & 1) MemoryManager_Free(g_memoryManager, self);
    return self;
}
template <uint32_t F, uint32_t K> static uint32_t BEA_THISCALL ForwardOr_t(void* self, uint32_t arg)
{ return reinterpret_cast<ThisFn1>(static_cast<uintptr_t>(F))(self, arg | K); }
template <uint32_t F> static uint32_t BEA_THISCALL Forward1_t(void* self, uint32_t arg)
{ return reinterpret_cast<ThisFn1>(static_cast<uintptr_t>(F))(self, arg); }
template <uint32_t OFF, uint32_t F> static uint32_t BEA_THISCALL ForwardField1_t(void* self, uint32_t arg)
{ return reinterpret_cast<ThisFn1>(static_cast<uintptr_t>(F))(at<void*>(self, OFF), arg); }
template <uint32_t OFF, uint32_t F> static uint32_t BEA_THISCALL ForwardAddr1_t(void* self, uint32_t arg)
{ return reinterpret_cast<ThisFn1>(static_cast<uintptr_t>(F))(static_cast<char*>(self) + OFF, arg); }
template <uint32_t OFF, uint32_t K> static void BEA_THISCALL SetDwordOr_t(void* self, uint32_t v)
{ at<uint32_t>(self, OFF) = v | K; }
template <uint32_t OFF, uint32_t V1, uint32_t V2> static void* BEA_THISCALL Ctor2_t(void* self)
{ at<uint32_t>(self, OFF) = V1; at<uint32_t>(self, 0) = V2; return self; }
template <uint32_t OFF> static void BEA_THISCALL FreeField_t(void* self)
{
    void* p = at<void*>(self, OFF);
    if (p) { MemoryManager_Free(g_memoryManager, p); at<void*>(self, OFF) = nullptr; }
}
template <uint32_t OFF> static uint32_t BEA_THISCALL IsFieldNonZero_t(void* self)
{ return at<uint32_t>(self, OFF) != 0 ? 1 : 0; }
template <uint32_t A, uint32_t B> static f80 BEA_THISCALL GetFloat2_t(void* self)
{ return (f80)at<float>(at<void*>(self, A), B); }
template <uint32_t A, uint32_t B, uint32_t DFLT> static uint32_t BEA_THISCALL GetDword2Default_t(void* self)
{
    void* p = at<void*>(self, A);
    return p ? at<uint32_t>(p, B) : DFLT;
}
template <uint32_t OFF, uint32_t N> static uint32_t* BEA_THISCALL GetBlock_t(void* self, uint32_t* out)
{
    const uint32_t* src = reinterpret_cast<const uint32_t*>(static_cast<char*>(self) + OFF);
    for (uint32_t i = 0; i < N; ++i) out[i] = src[i];
    return out;
}
#define DeletingDtorCall(B)        DeletingDtorCall_t<B>
#define DeletingDtorInline(V)      DeletingDtorInline_t<V>
#define ForwardOr(F, K)            ForwardOr_t<F, K>
#define Forward1(F)                Forward1_t<F>
#define ForwardField1(O, F)        ForwardField1_t<O, F>
#define ForwardAddr1(O, F)         ForwardAddr1_t<O, F>
#define SetDwordOr(O, K)           SetDwordOr_t<O, K>
#define Ctor2(O, V1, V2)           Ctor2_t<O, V1, V2>
#define FreeField(O)               FreeField_t<O>
#define IsFieldNonZero(O)          IsFieldNonZero_t<O>
#define GetFloat2(A, B)            GetFloat2_t<A, B>
#define GetDword2Default(A, B, D)  GetDword2Default_t<A, B, D>
#define GetBlock(O, N)             GetBlock_t<O, N>

// The generated file uses the macro spellings above:  Kind<args> is written
// as Kind<a, b>; turn that into the macro call form.
#define BEA_HOOK_TRIVIAL(addr, KIND, ...) { (addr), #KIND "<" #__VA_ARGS__ ">", reinterpret_cast<void*>(&KIND(__VA_ARGS__)), __FILE__ }

static const BeaHook bea_trivial_hooks_[] = {
#include "trivial_generated.inc"
};
static BeaHookRegistrar bea_trivial_registrar_(bea_trivial_hooks_,
    sizeof(bea_trivial_hooks_) / sizeof(bea_trivial_hooks_[0]));
