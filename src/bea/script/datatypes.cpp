// Mission-script value classes (MissionScript\DataType.cpp / DataType.h).
//
// CDataType vtable (20 slots):
//   [0]  ~dtor(flags)             [10] LessEq(o)      (0x28)
//   [1]  Add(o) -> new            [11] GreaterEq(o)   (0x2c)
//   [2]  Sub(o) -> new            [12] GetInt()       (0x30)
//   [3]  Mul(o) -> new            [13] GetFloat()     (0x34, ST0)
//   [4]  Div(o) -> new            [14] GetString()    (0x38)
//   [5]  Assign(o)                [15] GetBool()      (0x3c, AL)
//   [6]  Equals(o)      (0x18)    [16] GetPointer()   (0x40)
//   [7]  NotEquals(o)   (0x1c)    [17] GetPosition(float out[4]) -> out (0x44)
//   [8]  Less(o)        (0x20)    [18] Clone()        (0x48)
//   [9]  Greater(o)     (0x24)    [19] GetTypeId()    (0x4c)
// Layout: { vtable; value } — int at +4, float at +4, bool byte at +4,
// char* at +4, CThing* at +4 (with a MonitorPtr), position float[4] at +4.
//
// Not replaced here: CStringDataType / CThingPtrDataType destructors and
// CThingPtrDataType::Clone (they call into the string/monitor subsystems).
#include "bea/common.h"
#include "bea/hooks.h"
#include <string.h>

BEA_ORIG(void*, BEA_THISCALL, MemoryManager_Alloc, 0x005490e0, void* mm, uint32_t size, uint32_t tag, const char* file, uint32_t line);
BEA_ORIG(void, BEA_THISCALL, MemoryManager_Free, 0x00549220, void* mm, void* p);
BEA_ORIG(void, BEA_THISCALL, MonitorPtr_Set_orig, 0x00401000, void* ptr, void* target);
BEA_GLOBAL_PTR(void, g_memoryManager, 0x009c3df0);

static const char* const kFileDataTypeCpp = (const char*)0x0064c628;   // MissionScript\DataType.cpp
static const char* const kFileDataTypeH   = (const char*)0x0064cc80;   // MissionScript\DataType.h
BEA_GLOBAL_PTR(void, CDataType_vftable, 0x005e4b4c);
BEA_GLOBAL_PTR(void, CIntDataType_vftable, 0x005e4af8);
BEA_GLOBAL_PTR(void, CBoolDataType_vftable, 0x005e4d50);
BEA_GLOBAL_PTR(void, CFloatDataType_vftable, 0x005e4ea4);
BEA_GLOBAL_PTR(void, CStringDataType_vftable, 0x005e4e4c);
BEA_GLOBAL_PTR(void, CPositionDataType_vftable, 0x005e4da4);

struct DataType { void* vftable; };
struct IntValue { void* vftable; int value; };
struct FloatValue { void* vftable; float value; };
struct BoolValue { void* vftable; uint8_t value; };
struct StringValue { void* vftable; char* value; };
struct ThingPtrValue { void* vftable; void* thing; };          // +4 is a MonitorPtr
struct PositionValue { void* vftable; float v[4]; };

typedef int    (BEA_THISCALL* DT_GetInt)(DataType*);
typedef f80    (BEA_THISCALL* DT_GetFloat)(DataType*);
typedef const char* (BEA_THISCALL* DT_GetString)(DataType*);
typedef char   (BEA_THISCALL* DT_GetBool)(DataType*);
typedef void*  (BEA_THISCALL* DT_GetPointer)(DataType*);
typedef float* (BEA_THISCALL* DT_GetPosition)(DataType*, float*);
typedef char   (BEA_THISCALL* DT_Compare)(DataType*, DataType*);

template <typename Fn>
static inline Fn vcall(const void* obj, size_t off)
{
    return *reinterpret_cast<Fn*>(*reinterpret_cast<char* const*>(obj) + off);
}
static inline int o_int(DataType* o) { return vcall<DT_GetInt>(o, 0x30)(o); }
static inline f80 o_float(DataType* o) { return vcall<DT_GetFloat>(o, 0x34)(o); }
static inline char o_bool(DataType* o) { return vcall<DT_GetBool>(o, 0x3c)(o); }
static inline void* alloc_value(uint32_t size, uint32_t line)
{
    return MemoryManager_Alloc(g_memoryManager, size, 0x76, kFileDataTypeCpp, line);
}

// ---------------------------------------------------------------------------
// CDataType base
// 0x0052d390  CDataType::~CDataType()
static void BEA_THISCALL CDataType_Destruct(DataType* self)
{
    BEA_TRACE_ONCE();
    self->vftable = CDataType_vftable;
}
// 0x0052d3a0  CDataType::`scalar deleting destructor'(flags)
static void BEA_THISCALL CDataType_DeletingDestruct(DataType* self, uint8_t flags)
{
    BEA_TRACE_ONCE();
    self->vftable = CDataType_vftable;
    if (flags & 1) MemoryManager_Free(g_memoryManager, self);
}
// default implementations (shared stubs)
static int   BEA_THISCALL Stub_Ret0_Arg1(void*, uint32_t) { return 0; }          // 0x00405940  Add/Sub/... -> null
static char  BEA_THISCALL Stub_RetFalse_Arg1(void*, uint32_t) { return 0; }      // 0x004dbc00  Equals -> false
static f80   BEA_THISCALL Stub_RetFloat0(void*) { return (f80)0.0f; }            // 0x004bfc60  GetFloat -> 0
static char  BEA_THISCALL Stub_RetTrue(void*) { return 1; }                      // 0x00401480  GetBool -> true
static uint32_t* BEA_THISCALL Stub_ZeroVec3(void*, uint32_t* out)               // 0x00405e80  GetPosition -> zeros
{
    out[0] = 0; out[1] = 0; out[2] = 0;
    return out;
}
static uint32_t BEA_THISCALL Stub_GetDword4(void* self) { return at<uint32_t>(self, 4); }  // 0x0052f540 GetInt/CImageLoader::vslot3

// ---------------------------------------------------------------------------
// CIntDataType
static IntValue* new_int_value(uint32_t line, int v)
{
    IntValue* n = (IntValue*)alloc_value(8, line);
    if (!n) return nullptr;
    n->vftable = CIntDataType_vftable;
    n->value = v;
    return n;
}
static IntValue* BEA_THISCALL Int_Add(IntValue* self, DataType* o) { BEA_TRACE_ONCE();
    IntValue* n = (IntValue*)alloc_value(8, 0x6b); if (!n) return nullptr;
    int b = o_int(o); int a = self->value; n->vftable = CIntDataType_vftable; n->value = b + a; return n; }
static IntValue* BEA_THISCALL Int_Sub(IntValue* self, DataType* o) { BEA_TRACE_ONCE();
    IntValue* n = (IntValue*)alloc_value(8, 0x6c); if (!n) return nullptr;
    int b = o_int(o); int a = self->value; n->vftable = CIntDataType_vftable; n->value = a - b; return n; }
static IntValue* BEA_THISCALL Int_Mul(IntValue* self, DataType* o) { BEA_TRACE_ONCE();
    IntValue* n = (IntValue*)alloc_value(8, 0x6d); if (!n) return nullptr;
    int b = o_int(o); n->value = (int)((uint32_t)b * (uint32_t)self->value); n->vftable = CIntDataType_vftable; return n; }
static IntValue* BEA_THISCALL Int_Div(IntValue* self, DataType* o) { BEA_TRACE_ONCE();
    IntValue* n = (IntValue*)alloc_value(8, 0x6e); if (!n) return nullptr;
    int b = o_int(o); int a = self->value; n->vftable = CIntDataType_vftable; n->value = a / b; return n; }
static void BEA_THISCALL Int_Assign(IntValue* self, DataType* o) { BEA_TRACE_ONCE(); self->value = o_int(o); }
static char BEA_THISCALL Int_Equals(IntValue* self, DataType* o)    { BEA_TRACE_ONCE(); int b = o_int(o); return self->value == b; }
static char BEA_THISCALL Int_NotEquals(IntValue* self, DataType* o) { BEA_TRACE_ONCE(); int b = o_int(o); return self->value != b; }
static char BEA_THISCALL Int_Less(IntValue* self, DataType* o)      { BEA_TRACE_ONCE(); int b = o_int(o); return self->value < b; }
static char BEA_THISCALL Int_Greater(IntValue* self, DataType* o)   { BEA_TRACE_ONCE(); int b = o_int(o); return b < self->value; }
static char BEA_THISCALL Int_LessEq(IntValue* self, DataType* o)    { BEA_TRACE_ONCE(); int b = o_int(o); return self->value <= b; }
static char BEA_THISCALL Int_GreaterEq(IntValue* self, DataType* o) { BEA_TRACE_ONCE(); int b = o_int(o); return b <= self->value; }
static f80  BEA_THISCALL Int_GetFloat(IntValue* self) { BEA_TRACE_ONCE(); return (f80)self->value; }
static char BEA_THISCALL Int_GetBool(IntValue* self)  { BEA_TRACE_ONCE(); return self->value != 0; }
static IntValue* BEA_THISCALL Int_Clone(IntValue* self) { BEA_TRACE_ONCE(); return new_int_value(0x7b, self->value); }

// ---------------------------------------------------------------------------
// CFloatDataType.  Arithmetic happens at 80 bits (the other operand arrives in
// ST0) and is rounded once when stored.
static FloatValue* new_float_value(uint32_t line, float v)
{
    FloatValue* n = (FloatValue*)alloc_value(8, line);
    if (!n) return nullptr;
    n->vftable = CFloatDataType_vftable;
    n->value = v;
    return n;
}
static FloatValue* BEA_THISCALL Float_Add(FloatValue* self, DataType* o) { BEA_TRACE_ONCE();
    FloatValue* n = (FloatValue*)alloc_value(8, 0xa3); if (!n) return nullptr;
    f80 b = o_float(o); n->vftable = CFloatDataType_vftable; n->value = (float)(b + (f80)self->value); return n; }
static FloatValue* BEA_THISCALL Float_Sub(FloatValue* self, DataType* o) { BEA_TRACE_ONCE();
    FloatValue* n = (FloatValue*)alloc_value(8, 0xa4); if (!n) return nullptr;
    f80 b = o_float(o); n->vftable = CFloatDataType_vftable; n->value = (float)((f80)self->value - b); return n; }
static FloatValue* BEA_THISCALL Float_Mul(FloatValue* self, DataType* o) { BEA_TRACE_ONCE();
    FloatValue* n = (FloatValue*)alloc_value(8, 0xa5); if (!n) return nullptr;
    f80 b = o_float(o); n->vftable = CFloatDataType_vftable; n->value = (float)(b * (f80)self->value); return n; }
static FloatValue* BEA_THISCALL Float_Div(FloatValue* self, DataType* o) { BEA_TRACE_ONCE();
    FloatValue* n = (FloatValue*)alloc_value(8, 0xa6); if (!n) return nullptr;
    f80 b = o_float(o); n->vftable = CFloatDataType_vftable; n->value = (float)((f80)self->value / b); return n; }
static void BEA_THISCALL Float_Assign(FloatValue* self, DataType* o) { BEA_TRACE_ONCE(); self->value = (float)o_float(o); }
static uint32_t BEA_THISCALL Float_Equals(FloatValue* self, DataType* o)    { BEA_TRACE_ONCE(); f80 b = o_float(o); return b == (f80)self->value ? 1 : 0; }
static uint32_t BEA_THISCALL Float_NotEquals(FloatValue* self, DataType* o) { BEA_TRACE_ONCE(); f80 b = o_float(o); return b != (f80)self->value ? 1 : 0; }
static uint32_t BEA_THISCALL Float_Less(FloatValue* self, DataType* o)      { BEA_TRACE_ONCE(); f80 b = o_float(o); return (f80)self->value < b ? 1 : 0; }
static uint32_t BEA_THISCALL Float_Greater(FloatValue* self, DataType* o)   { BEA_TRACE_ONCE(); f80 b = o_float(o); return b < (f80)self->value ? 1 : 0; }
static uint32_t BEA_THISCALL Float_LessEq(FloatValue* self, DataType* o)    { BEA_TRACE_ONCE(); f80 b = o_float(o); return (f80)self->value <= b ? 1 : 0; }
static uint32_t BEA_THISCALL Float_GreaterEq(FloatValue* self, DataType* o) { BEA_TRACE_ONCE(); f80 b = o_float(o); return b <= (f80)self->value ? 1 : 0; }
// 0x0052f290  GetInt(): fistp with the default (nearest-even) rounding
static int BEA_THISCALL Float_GetInt(FloatValue* self) { BEA_TRACE_ONCE(); return (int)__builtin_llrintl((f80)self->value); }
static f80 BEA_THISCALL Float_GetFloat(FloatValue* self) { BEA_TRACE_ONCE(); return (f80)self->value; }
static FloatValue* BEA_THISCALL Float_Clone(FloatValue* self) { BEA_TRACE_ONCE(); return new_float_value(0xb4, self->value); }

// ---------------------------------------------------------------------------
// CBoolDataType
static void BEA_THISCALL Bool_DeletingDestruct(BoolValue* self, uint8_t flags) { BEA_TRACE_ONCE();
    self->vftable = CDataType_vftable;
    if (flags & 1) MemoryManager_Free(g_memoryManager, self); }
static void BEA_THISCALL Bool_Assign(BoolValue* self, DataType* o) { BEA_TRACE_ONCE(); self->value = (uint8_t)o_bool(o); }
static char BEA_THISCALL Bool_Equals(BoolValue* self, DataType* o)    { BEA_TRACE_ONCE(); char b = o_bool(o); return (char)self->value == b; }
static char BEA_THISCALL Bool_NotEquals(BoolValue* self, DataType* o) { BEA_TRACE_ONCE(); char b = o_bool(o); return (char)self->value != b; }
static char BEA_THISCALL Bool_GetBool(BoolValue* self) { BEA_TRACE_ONCE(); return (char)self->value; }
static BoolValue* BEA_THISCALL Bool_Clone(BoolValue* self) { BEA_TRACE_ONCE();
    BoolValue* n = (BoolValue*)alloc_value(8, 0x95); if (!n) return nullptr;
    n->vftable = CBoolDataType_vftable; n->value = self->value; return n; }

// ---------------------------------------------------------------------------
// CStringDataType  (comparisons return the full EAX: NOTES A1-8 rule 13)
static uint32_t BEA_THISCALL String_Equals(StringValue* self, DataType* o) { BEA_TRACE_ONCE();
    const char* b = vcall<DT_GetString>(o, 0x38)(o);
    return strcmp(self->value, b) == 0; }
static uint32_t BEA_THISCALL String_NotEquals(StringValue* self, DataType* o) { BEA_TRACE_ONCE();
    return vcall<DT_Compare>(self, 0x18)(reinterpret_cast<DataType*>(self), o) == 0; }
// 0x0052f3c0  CStringDataType::EqualsText(const char*)
static uint32_t BEA_THISCALL String_EqualsText(StringValue* self, const char* text) { BEA_TRACE_ONCE();
    return strcmp(self->value, text) == 0; }
static StringValue* BEA_THISCALL String_Clone(StringValue* self) { BEA_TRACE_ONCE();
    StringValue* n = (StringValue*)alloc_value(8, 200); if (!n) return nullptr;
    const char* src = self->value;
    n->vftable = CStringDataType_vftable;
    size_t len = strlen(src);
    char* copy = (char*)MemoryManager_Alloc(g_memoryManager, (uint32_t)len + 1, 0x18, kFileDataTypeH, 0x2b);
    n->value = copy;
    strncpy(copy, src, len);
    n->value[len] = 0;
    return n; }

// ---------------------------------------------------------------------------
// CThingPtrDataType
static void BEA_THISCALL ThingPtr_Assign(ThingPtrValue* self, DataType* o) { BEA_TRACE_ONCE();
    void* p = vcall<DT_GetPointer>(o, 0x40)(o);
    MonitorPtr_Set_orig(&self->thing, p); }
static char BEA_THISCALL ThingPtr_Equals(ThingPtrValue* self, DataType* o) { BEA_TRACE_ONCE();
    void* a = self->thing; void* b = vcall<DT_GetPointer>(o, 0x40)(o); return a == b; }

// ---------------------------------------------------------------------------
// CPositionDataType.  Add/Sub leave the fourth component uninitialised in the
// original (stack garbage); we store 0 — NOTES A1-6.
static PositionValue* BEA_THISCALL Position_Add(PositionValue* self, DataType* o) { BEA_TRACE_ONCE();
    float tmp[4]; float* p = vcall<DT_GetPosition>(o, 0x44)(o, tmp);
    float x = self->v[0] + p[0]; float y = p[1] + self->v[1]; float z = p[2] + self->v[2];
    PositionValue* n = (PositionValue*)MemoryManager_Alloc(g_memoryManager, 0x14, 0x18, kFileDataTypeH, 0x87);
    if (!n) return nullptr;
    n->vftable = CPositionDataType_vftable; n->v[0] = x; n->v[1] = y; n->v[2] = z; n->v[3] = 0.0f; return n; }
static PositionValue* BEA_THISCALL Position_Sub(PositionValue* self, DataType* o) { BEA_TRACE_ONCE();
    float tmp[4]; float* p = vcall<DT_GetPosition>(o, 0x44)(o, tmp);
    float x = self->v[0] - p[0]; float y = self->v[1] - p[1]; float z = self->v[2] - p[2];
    PositionValue* n = (PositionValue*)MemoryManager_Alloc(g_memoryManager, 0x14, 0x18, kFileDataTypeH, 0x8f);
    if (!n) return nullptr;
    n->vftable = CPositionDataType_vftable; n->v[0] = x; n->v[1] = y; n->v[2] = z; n->v[3] = 0.0f; return n; }
static PositionValue* BEA_THISCALL Position_Mul(PositionValue* self, DataType* o) { BEA_TRACE_ONCE();
    f80 s = o_float(o);
    float x = self->v[0], y = self->v[1], z = self->v[2];
    PositionValue* n = (PositionValue*)MemoryManager_Alloc(g_memoryManager, 0x14, 0x18, kFileDataTypeH, 0x97);
    if (!n) return nullptr;
    n->vftable = CPositionDataType_vftable;
    n->v[0] = (float)(s * (f80)x); n->v[1] = (float)(s * (f80)y); n->v[2] = (float)(s * (f80)z); n->v[3] = 0.0f; return n; }
static void BEA_THISCALL Position_Assign(PositionValue* self, DataType* o) { BEA_TRACE_ONCE();
    float tmp[4]; float* p = vcall<DT_GetPosition>(o, 0x44)(o, tmp);
    self->v[0] = p[0]; self->v[1] = p[1]; self->v[2] = p[2]; self->v[3] = p[3]; }
static PositionValue* BEA_THISCALL Position_Clone(PositionValue* self) { BEA_TRACE_ONCE();
    PositionValue* n = (PositionValue*)alloc_value(0x14, 0xfc); if (!n) return nullptr;
    n->vftable = CDataType_vftable;
    n->v[0] = self->v[0]; n->v[1] = self->v[1]; n->v[2] = self->v[2];
    float w = self->v[3];
    n->vftable = CPositionDataType_vftable; n->v[3] = w; return n; }

BEA_HOOKS(
    BEA_HOOK(0x0052d390, CDataType_Destruct),
    BEA_HOOK(0x0052d3a0, CDataType_DeletingDestruct),
    BEA_HOOK(0x00405940, Stub_Ret0_Arg1),
    BEA_HOOK(0x004dbc00, Stub_RetFalse_Arg1),
    BEA_HOOK(0x004bfc60, Stub_RetFloat0),
    BEA_HOOK(0x00401480, Stub_RetTrue),
    BEA_HOOK(0x00405e80, Stub_ZeroVec3),
    BEA_HOOK(0x0052f540, Stub_GetDword4),
    BEA_HOOK(0x0052d0a0, Int_Add),
    BEA_HOOK(0x0052d110, Int_Sub),
    BEA_HOOK(0x0052d180, Int_Mul),
    BEA_HOOK(0x0052d1f0, Int_Div),
    BEA_HOOK(0x0052d2a0, Int_Assign),
    BEA_HOOK(0x0052d260, Int_Equals),
    BEA_HOOK(0x0052d280, Int_NotEquals),
    BEA_HOOK(0x0052d2c0, Int_Less),
    BEA_HOOK(0x0052d2e0, Int_Greater),
    BEA_HOOK(0x0052d300, Int_LessEq),
    BEA_HOOK(0x0052d320, Int_GreaterEq),
    BEA_HOOK(0x0052d370, Int_GetFloat),
    BEA_HOOK(0x0052d380, Int_GetBool),
    BEA_HOOK(0x0052d340, Int_Clone),
    BEA_HOOK(0x0052ef50, Float_Add),
    BEA_HOOK(0x0052efc0, Float_Sub),
    BEA_HOOK(0x0052f030, Float_Mul),
    BEA_HOOK(0x0052f0a0, Float_Div),
    BEA_HOOK(0x0052f170, Float_Assign),
    BEA_HOOK(0x0052f110, Float_Equals),
    BEA_HOOK(0x0052f140, Float_NotEquals),
    BEA_HOOK(0x0052f190, Float_Less),
    BEA_HOOK(0x0052f1c0, Float_Greater),
    BEA_HOOK(0x0052f1f0, Float_LessEq),
    BEA_HOOK(0x0052f220, Float_GreaterEq),
    BEA_HOOK(0x0052f290, Float_GetInt),
    BEA_HOOK(0x0052f2b0, Float_GetFloat),
    BEA_HOOK(0x0052f250, Float_Clone),
    BEA_HOOK(0x0052f670, Bool_DeletingDestruct),
    BEA_HOOK(0x0052e460, Bool_Assign),
    BEA_HOOK(0x0052e420, Bool_Equals),
    BEA_HOOK(0x0052e440, Bool_NotEquals),
    BEA_HOOK(0x0052e480, Bool_GetBool),
    BEA_HOOK(0x0052e490, Bool_Clone),
    BEA_HOOK(0x0052f360, String_Equals),
    BEA_HOOK(0x0052f410, String_NotEquals),
    BEA_HOOK(0x0052f3c0, String_EqualsText),
    BEA_HOOK(0x0052f2c0, String_Clone),
    BEA_HOOK(0x0052f430, ThingPtr_Assign),
    BEA_HOOK(0x0052f450, ThingPtr_Equals),
    BEA_HOOK(0x0052f820, Position_Add),
    BEA_HOOK(0x0052f8a0, Position_Sub),
    BEA_HOOK(0x0052f920, Position_Mul),
    BEA_HOOK(0x0052f5d0, Position_Assign),
    BEA_HOOK(0x0052f610, Position_Clone));
