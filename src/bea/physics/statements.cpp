// Physics-script statement classes (CPhysicsScript.cpp,
// CPhysicsScriptStatements.cpp, WorldPhysicsManager.h).
//
// `default physics.dat` is a list of definitions (units, weapons, rounds,
// explosions, spawners, features, hazards, components).  Each attribute line
// is parsed into a tiny statement object { vtable; ?; value @ +8 } whose
// virtuals are:
//   [0] ~dtor(flags)        (shared per family, see DeletingDtor<VT>)
//   [1] Apply(target)       stores the value into the definition.  Two forms:
//                           "direct"  - target is the definition itself
//                           "lookup"  - target is a name; the definition is
//                                       found in a global list by name
//   [2] GetTypeId()         shared `return N` stubs (hooked elsewhere)
//   [3] Parse(reader)       reads N bytes of value from the token stream
//
// tools/gen_statements.py matches every class against these templates and
// writes statements_generated.inc; the templates below are the only code.
#include "bea/common.h"
#include "bea/hooks.h"
#include <string.h>

BEA_ORIG(void*, BEA_THISCALL, MemoryManager_Alloc, 0x005490e0, void* mm, uint32_t size, uint32_t tag, const char* file, uint32_t line);
BEA_ORIG(void, BEA_THISCALL, MemoryManager_Free, 0x00549220, void* mm, void* p);
BEA_ORIG(void, BEA_THISCALL, TokenReader_Read, 0x00548570, void* reader, void* dst, uint32_t size);
BEA_GLOBAL_PTR(void, g_memoryManager, 0x009c3df0);
static const char* const kFileWorldPhysicsManagerH = (const char*)0x00625850;

struct Statement {
    void* vftable;
    uint32_t unknown4;
    union {
        uint32_t u;
        float f;
        char s[4];
    } value;                                   // +8 (strings are stored inline)
};

struct DefNode {
    void* def;
    DefNode* next;
};
struct DefList {                               // the global per-family list iterators
    DefNode* head;
    uint32_t unknown4;
    DefNode* cur;
};

// Finds the definition whose name (a char* at nameOff) equals `name`, walking
// the list exactly as the original does (it also leaves list->cur pointing at
// the match or at the end).
static void* find_definition(uint32_t listPtrAddr, uint32_t nameOff, const char* name)
{
    // the global holds a pointer to the iterator object (mov edx,[G]; mov eax,[edx])
    DefList* list = *reinterpret_cast<DefList**>(static_cast<uintptr_t>(listPtrAddr));
    DefNode* node = list->head;
    list->cur = node;
    void* def = node ? node->def : nullptr;
    while (def) {
        if (strcmp(name, at<char*>(def, nameOff)) == 0) return def;
        node = list->cur->next;
        list->cur = node;
        def = node ? node->def : nullptr;
    }
    return nullptr;
}

// Frees the old string at *slot and stores a fresh copy of src (tag 4,
// WorldPhysicsManager.h, per-class line number).
static void replace_string(char** slot, const char* src, uint32_t line)
{
    MemoryManager_Free(g_memoryManager, *slot);
    uint32_t n = (uint32_t)strlen(src) + 1;
    char* copy = (char*)MemoryManager_Alloc(g_memoryManager, n, 4, kFileWorldPhysicsManagerH, line);
    *slot = copy;
    memcpy(copy, src, n);
}

// x87 `fcomp 0.0 ; test ah, 0x40` is true for equal *and* unordered.
static inline bool is_zero_or_nan(float v)
{
    return !(v < 0.0f) && !(v > 0.0f);
}

// --- direct forms (target = definition) ------------------------------------
template <uint32_t DST>
static void BEA_THISCALL DirectDword(Statement* s, char* def)
{
    BEA_TRACE_ONCE();
    at<uint32_t>(def, DST) = s->value.u;
}
template <uint32_t DST>
static void BEA_THISCALL DirectBool(Statement* s, char* def)
{
    BEA_TRACE_ONCE();
    at<uint32_t>(def, DST) = s->value.u != 0 ? 1 : 0;
}
template <uint32_t DST>
static void BEA_THISCALL DirectRound(Statement* s, char* def)
{
    BEA_TRACE_ONCE();
    at<int32_t>(def, DST) = (int32_t)__builtin_llrintl((f80)s->value.f);
}
template <uint32_t DST, uint32_t LINE>
static void BEA_THISCALL DirectString(Statement* s, char* def)
{
    BEA_TRACE_ONCE();
    replace_string(&at<char*>(def, DST), s->value.s, LINE);
}

// --- lookup forms (target = definition name) --------------------------------
template <uint32_t LIST, uint32_t NAME, uint32_t DST>
static void BEA_THISCALL LookupDword(Statement* s, const char* name)
{
    BEA_TRACE_ONCE();
    if (!name) return;
    void* def = find_definition(LIST, NAME, name);
    if (def) at<uint32_t>(def, DST) = s->value.u;
}
template <uint32_t LIST, uint32_t NAME, uint32_t DST>
static void BEA_THISCALL LookupBool(Statement* s, const char* name)
{
    BEA_TRACE_ONCE();
    if (!name) return;
    void* def = find_definition(LIST, NAME, name);
    if (def) at<uint32_t>(def, DST) = is_zero_or_nan(s->value.f) ? 0 : 1;
}
template <uint32_t LIST, uint32_t NAME, uint32_t DST, uint32_t LINE>
static void BEA_THISCALL LookupString(Statement* s, const char* name)
{
    BEA_TRACE_ONCE();
    if (!name) return;
    void* def = find_definition(LIST, NAME, name);
    if (def) replace_string(&at<char*>(def, DST), s->value.s, LINE);
}

template <uint32_t LIST, uint32_t NAME, uint32_t DST>
static void BEA_THISCALL LookupDwordNonZero(Statement* s, const char* name)
{
    BEA_TRACE_ONCE();
    if (!name) return;
    void* def = find_definition(LIST, NAME, name);
    if (def) {
        uint32_t v = s->value.u;
        if (v != 0) at<uint32_t>(def, DST) = v;
    }
}

// --- less common direct forms ------------------------------------------------
// value > 0.0f stored as 1, otherwise (including NaN) 0
template <uint32_t DST>
static void BEA_THISCALL DirectBoolPositive(Statement* s, char* def)
{
    BEA_TRACE_ONCE();
    at<uint32_t>(def, DST) = (s->value.f > 0.0f) ? 1 : 0;
}
// def->+BASE[index at this+0xc] = value
template <uint32_t BASE>
static void BEA_THISCALL DirectIndexedDword(Statement* s, char* def)
{
    BEA_TRACE_ONCE();
    uint32_t index = at<uint32_t>(s, 0xc);
    at<uint32_t>(def, BASE + index * 4) = s->value.u;
}
// if (value ptr) def->+DST = value->vslot1()
template <uint32_t DST>
static void BEA_THISCALL DirectVirtual1(Statement* s, char* def)
{
    BEA_TRACE_ONCE();
    void* obj = reinterpret_cast<void*>(s->value.u);
    if (!obj) return;
    typedef uint32_t (BEA_THISCALL* Fn)(void*);
    uint32_t r = (*reinterpret_cast<Fn*>(*reinterpret_cast<char**>(obj) + 4))(obj);
    at<uint32_t>(def, DST) = r;
}
// def->Method(&value)  — a definition method still in the original image
template <uint32_t FN>
static void BEA_THISCALL CallDef1(Statement* s, void* def)
{
    BEA_TRACE_ONCE();
    typedef void (BEA_THISCALL* Fn)(void*, void*);
    reinterpret_cast<Fn>(static_cast<uintptr_t>(FN))(def, &s->value);
}
// def->Method(&value, this+0x108, this+0x208)
template <uint32_t FN>
static void BEA_THISCALL CallDef3(Statement* s, void* def)
{
    BEA_TRACE_ONCE();
    typedef void (BEA_THISCALL* Fn)(void*, void*, void*, uint32_t);
    reinterpret_cast<Fn>(static_cast<uintptr_t>(FN))(def, &s->value, reinterpret_cast<char*>(s) + 0x108, at<uint32_t>(s, 0x208));
}

// --- parse / destructors -----------------------------------------------------
template <uint32_t SIZE>
static void BEA_THISCALL Parse(Statement* s, void* reader)
{
    BEA_TRACE_ONCE();
    TokenReader_Read(reader, &s->value, SIZE);
}
// reads SIZE bytes into a temporary and stores FN(temp) (a cdecl converter)
template <uint32_t SIZE, uint32_t FN>
static void BEA_THISCALL ParseConvert(Statement* s, void* reader)
{
    BEA_TRACE_ONCE();
    uint32_t tmp = 0;
    TokenReader_Read(reader, &tmp, SIZE);
    typedef uint32_t (BEA_CDECL* Fn)(uint32_t);
    s->value.u = reinterpret_cast<Fn>(static_cast<uintptr_t>(FN))(tmp);
}
template <uint32_t VT>
static void BEA_THISCALL BaseDtor(Statement* s)
{
    BEA_TRACE_ONCE();
    s->vftable = reinterpret_cast<void*>(static_cast<uintptr_t>(VT));
}
template <uint32_t VT>
static Statement* BEA_THISCALL DeletingDtor(Statement* s, uint8_t flags)
{
    BEA_TRACE_ONCE();
    s->vftable = reinterpret_cast<void*>(static_cast<uintptr_t>(VT));
    if (flags & 1) MemoryManager_Free(g_memoryManager, s);
    return s;
}
// deleting destructor that runs a (possibly still original) base destructor
template <uint32_t BASE>
static Statement* BEA_THISCALL DeletingDtorCall(Statement* s, uint8_t flags)
{
    BEA_TRACE_ONCE();
    typedef void (BEA_THISCALL* Fn)(Statement*);
    reinterpret_cast<Fn>(static_cast<uintptr_t>(BASE))(s);
    if (flags & 1) MemoryManager_Free(g_memoryManager, s);
    return s;
}
// base destructor owning a polymorphic child at +8: delete it, then settle on
// the family vtable (VT1 during destruction, VT2 afterwards)
template <uint32_t VT1, uint32_t VT2>
static void BEA_THISCALL DtorDeleteChild(Statement* s)
{
    BEA_TRACE_ONCE();
    s->vftable = reinterpret_cast<void*>(static_cast<uintptr_t>(VT1));
    void* child = reinterpret_cast<void*>(s->value.u);
    if (child) {
        typedef void (BEA_THISCALL* Dtor)(void*, int);
        (*reinterpret_cast<Dtor*>(*reinterpret_cast<char**>(child)))(child, 1);
    }
    s->vftable = reinterpret_cast<void*>(static_cast<uintptr_t>(VT2));
}

static const BeaHook bea_statement_hooks_[] = {
#include "statements_generated.inc"
};
static BeaHookRegistrar bea_statement_registrar_(bea_statement_hooks_,
    sizeof(bea_statement_hooks_) / sizeof(bea_statement_hooks_[0]));
