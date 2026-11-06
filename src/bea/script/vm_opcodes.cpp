// Mission-script virtual machine: value stack, variable access and the 27
// CInstructionOP_* opcode classes (MissionScript\AsmInstruction.cpp,
// ScriptObjectCode.cpp).
//
// Every opcode is a CAsmInstruction { vtable; int operand; (8 bytes unused) }
// with three virtuals:
//   [0] void Execute(ScriptContext* ctx, ValueStack* stack, VarTable* vars)
//   [1] CAsmInstruction* Clone()
//   [2] int GetOpcode()
//
// Values are heap CDataType objects (CIntDataType, CBoolDataType, ...) whose
// vtable slots used here are:
//   +0x00 ~dtor(flag)   +0x04 Add   +0x08 Sub   +0x0c Mul   +0x10 Div
//   +0x14 Assign(src)   +0x18 Equals  +0x1c NotEquals  +0x20 Less
//   +0x24 Greater  +0x28 LessEq  +0x2c GreaterEq  +0x30 GetInt
//   +0x38 GetName  +0x3c GetBool  +0x40 GetPointer  +0x48 Clone
//
// CInstructionOP_CALL::Execute (native function dispatch, 511 bytes) is not
// replaced yet.
#include "bea/common.h"
#include "bea/hooks.h"

// ---------------------------------------------------------------------------
// originals still in use
BEA_ORIG(void, BEA_CDECL, DebugLog_Printf, 0x00441740, void* log, const char* fmt, ...);
BEA_ORIG(void*, BEA_THISCALL, MemoryManager_Alloc, 0x005490e0, void* mm, uint32_t size, uint32_t tag, const char* file, uint32_t line);
BEA_GLOBAL_PTR(void, g_memoryManager, 0x009c3df0);
BEA_GLOBAL_PTR(void, g_debugLog, 0x0066f580);

// string literals and vtables inside BEA.exe (addresses must stay identical so
// allocation tags and log output match the original)
static const char* const kFileScriptObjectCode = (const char*)0x0064c5c4;   // MissionScript\ScriptObjectCode.cpp
static const char* const kFileAsmInstruction   = (const char*)0x0064cae4;   // MissionScript\AsmInstruction.cpp
static const char* const kMsgPopEmpty        = (const char*)0x0065009c;     // FATAL ERROR: Pop called on empty stack
static const char* const kMsgStackFull       = (const char*)0x00650078;     // FATAL ERROR: Stack out of memory
static const char* const kMsgRemoveTopEmpty  = (const char*)0x006500c4;     // FATAL ERROR: RemoveTop called on empty stack
static const char* const kMsgStackItem       = (const char*)0x006500f4;     // FATAL ERROR: Stack item does not exist (%d)
static const char* const kMsgNoDataSet       = (const char*)0x0064c5f8;     // FATAL ERROR: no data set for attribute %s
BEA_GLOBAL_PTR(void, CIntDataType_vftable, 0x005e4af8);
BEA_GLOBAL_PTR(void, CBoolDataType_vftable, 0x005e4d50);

// ---------------------------------------------------------------------------
// object layouts
struct DataType;                                   // CDataType, polymorphic
struct Instr {
    void* vftable;
    int operand;
    uint32_t unused8;
};
struct ValueStack {
    DataType* entries[128];
    int count;                                     // +0x200
};
struct Variable {                                  // polymorphic
    void* vftable;
    uint32_t unknown4;
    DataType* value;                               // +8
};
struct VarTable {
    Variable** vars;                               // +0
};
struct ScriptContext {
    uint32_t unknown0;
    uint32_t unknown4;
    void* script;                                  // +8  -> +0x68 -> +0x10 pointer target
    uint8_t pad[0x214 - 0xc];
    int pc;                                        // +0x214
    uint32_t flags;                                // +0x218, bit 0 = last CMP result
    uint32_t unknown21c;
    uint32_t unknown220;
    int callDepth;                                 // +0x224
};

// virtual call helpers on CDataType
typedef void      (BEA_THISCALL* DT_Dtor)(DataType*, int);
typedef DataType* (BEA_THISCALL* DT_Binary)(DataType*, DataType*);
typedef char      (BEA_THISCALL* DT_Compare)(DataType*, DataType*);
typedef int       (BEA_THISCALL* DT_GetInt)(DataType*);
typedef char      (BEA_THISCALL* DT_GetBool)(DataType*);
typedef void*     (BEA_THISCALL* DT_GetPointer)(DataType*);
typedef DataType* (BEA_THISCALL* DT_Clone)(DataType*);
typedef void      (BEA_THISCALL* DT_Assign)(DataType*, DataType*);
typedef const char* (BEA_THISCALL* Var_GetName)(Variable*);

template <typename Fn>
static inline Fn vcall(const void* obj, size_t off)
{
    return *reinterpret_cast<Fn*>(*reinterpret_cast<char* const*>(obj) + off);
}
static inline void dt_delete(DataType* v)
{
    if (v) vcall<DT_Dtor>(v, 0x00)(v, 1);
}
static inline DataType* new_int(uint32_t line, int value)
{
    DataType* v = (DataType*)MemoryManager_Alloc(g_memoryManager, 8, 0x18, kFileScriptObjectCode, line);
    if (!v) return nullptr;
    at<void*>(v, 0) = CIntDataType_vftable;
    at<int>(v, 4) = value;
    return v;
}
static inline DataType* new_bool(uint32_t line, uint8_t value)
{
    DataType* v = (DataType*)MemoryManager_Alloc(g_memoryManager, 8, 0x18, kFileScriptObjectCode, line);
    if (!v) return nullptr;
    at<void*>(v, 0) = CBoolDataType_vftable;
    at<uint8_t>(v, 4) = value;
    return v;
}

// ---------------------------------------------------------------------------
// value stack (ScriptObjectCode.cpp)

// 0x00539420  ValueStack::Push(v).  Reproduces the original overflow quirk
// exactly: entry 128 aliases the count field.
static void BEA_THISCALL ValueStack_Push(ValueStack* self, DataType* v)
{
    BEA_TRACE_ONCE();
    at<DataType*>(self, (size_t)self->count * 4) = v;
    int n = self->count + 1;
    self->count = n;
    if (n > 0x80) {
        DebugLog_Printf(g_debugLog, kMsgStackFull);
        self->count = self->count - 1;
    }
}

// 0x00539470  ValueStack::Pop()
static DataType* BEA_THISCALL ValueStack_Pop(ValueStack* self)
{
    BEA_TRACE_ONCE();
    if (self->count == 0) {
        DebugLog_Printf(g_debugLog, kMsgPopEmpty);
        return nullptr;
    }
    int n = self->count - 1;
    self->count = n;
    return self->entries[n];
}

// 0x005394a0  ValueStack::RemoveTop(): pops and deletes
static void BEA_THISCALL ValueStack_RemoveTop(ValueStack* self)
{
    BEA_TRACE_ONCE();
    if (self->count == 0) {
        DebugLog_Printf(g_debugLog, kMsgRemoveTopEmpty);
        return;
    }
    int n = self->count - 1;
    self->count = n;
    dt_delete(self->entries[n]);
}

// 0x005394e0  ValueStack::Peek(depth): 0 = top
static DataType* BEA_THISCALL ValueStack_Peek(ValueStack* self, int depth)
{
    BEA_TRACE_ONCE();
    int idx = self->count - depth;
    if (idx < 1) {
        DebugLog_Printf(g_debugLog, kMsgStackItem, depth);
        return nullptr;
    }
    return self->entries[idx - 1];
}

// 0x00539760  VarTable::Get(index)
static Variable* BEA_THISCALL VarTable_Get(VarTable* self, int index)
{
    BEA_TRACE_ONCE();
    return self->vars[index];
}

// 0x0052d040  CAsmInstruction::CloneVariableValue(var): a copy of the
// variable's value, or a new int 0 (with an error) when it has none.
static DataType* BEA_THISCALL Instr_CloneVariableValue(Instr* self, Variable* var)
{
    BEA_TRACE_ONCE();
    if (var->value) return vcall<DT_Clone>(var->value, 0x48)(var->value);
    const char* name = vcall<Var_GetName>(var, 0x38)(var);
    DebugLog_Printf(g_debugLog, kMsgNoDataSet, name);
    return new_int(0x38, 0);
}

// ---------------------------------------------------------------------------
// opcode Execute implementations

// arithmetic: right = pop, left = pop, push left OP right, delete both
static inline void exec_binary(ValueStack* stack, size_t slot)
{
    DataType* right = ValueStack_Pop(stack);
    DataType* left = ValueStack_Pop(stack);
    DataType* result = vcall<DT_Binary>(left, slot)(left, right);
    dt_delete(right);
    dt_delete(left);
    ValueStack_Push(stack, result);
}

// comparison: a = pop, b = pop, push bool(a CMP b), delete a then b
static inline void exec_compare(ValueStack* stack, size_t slot, uint32_t lineTrue, uint32_t lineFalse)
{
    DataType* a = ValueStack_Pop(stack);
    DataType* b = ValueStack_Pop(stack);
    char r = vcall<DT_Compare>(a, slot)(a, b);
    DataType* out = r ? new_bool(lineTrue, 1) : new_bool(lineFalse, 0);
    ValueStack_Push(stack, out);
    dt_delete(a);
    dt_delete(b);
}

#define EXEC(Name) static void BEA_THISCALL Name##_Execute(Instr* self, ScriptContext* ctx, ValueStack* stack, VarTable* vars)

EXEC(OP_PLUS)     { BEA_TRACE_ONCE(); exec_binary(stack, 0x04); }
EXEC(OP_MINUS)    { BEA_TRACE_ONCE(); exec_binary(stack, 0x08); }
EXEC(OP_MULTIPLY) { BEA_TRACE_ONCE(); exec_binary(stack, 0x0c); }
EXEC(OP_DIVIDE)   { BEA_TRACE_ONCE(); exec_binary(stack, 0x10); }

// Relational ops pop the right operand first, then the left, and call
// left->op(right); the result is pushed before the operands are deleted
// (right first).
EXEC(OP_GREAT_THAN)    { BEA_TRACE_ONCE();
    DataType* right = ValueStack_Pop(stack); DataType* left = ValueStack_Pop(stack);
    char r = vcall<DT_Compare>(left, 0x24)(left, right);
    ValueStack_Push(stack, r ? new_bool(0x13d, 1) : new_bool(0x141, 0));
    dt_delete(right); dt_delete(left); }
EXEC(OP_LESS_THAN)     { BEA_TRACE_ONCE();
    DataType* right = ValueStack_Pop(stack); DataType* left = ValueStack_Pop(stack);
    char r = vcall<DT_Compare>(left, 0x20)(left, right);
    ValueStack_Push(stack, r ? new_bool(0x150, 1) : new_bool(0x154, 0));
    dt_delete(right); dt_delete(left); }
EXEC(OP_GREAT_EQ_THAN) { BEA_TRACE_ONCE();
    DataType* right = ValueStack_Pop(stack); DataType* left = ValueStack_Pop(stack);
    char r = vcall<DT_Compare>(left, 0x2c)(left, right);
    ValueStack_Push(stack, r ? new_bool(0x162, 1) : new_bool(0x166, 0));
    dt_delete(right); dt_delete(left); }
EXEC(OP_LESS_EQ_THAN)  { BEA_TRACE_ONCE();
    DataType* right = ValueStack_Pop(stack); DataType* left = ValueStack_Pop(stack);
    char r = vcall<DT_Compare>(left, 0x28)(left, right);
    ValueStack_Push(stack, r ? new_bool(0x174, 1) : new_bool(0x178, 0));
    dt_delete(right); dt_delete(left); }
// CMPB / CMPNEB call first-popped->Equals/NotEquals(second-popped)
EXEC(OP_CMPB)   { BEA_TRACE_ONCE(); exec_compare(stack, 0x18, 0x106, 0x10a); }
EXEC(OP_CMPNEB) { BEA_TRACE_ONCE(); exec_compare(stack, 0x1c, 0x186, 0x18a); }

EXEC(OP_OR) { BEA_TRACE_ONCE();
    DataType* a = ValueStack_Pop(stack); DataType* b = ValueStack_Pop(stack);
    DataType* out;
    if (vcall<DT_GetBool>(a, 0x3c)(a) || vcall<DT_GetBool>(b, 0x3c)(b)) out = new_bool(0x118, 1);
    else out = new_bool(0x11c, 0);
    ValueStack_Push(stack, out);
    dt_delete(a); dt_delete(b); }
EXEC(OP_AND) { BEA_TRACE_ONCE();
    DataType* a = ValueStack_Pop(stack); DataType* b = ValueStack_Pop(stack);
    DataType* out;
    if (vcall<DT_GetBool>(a, 0x3c)(a) && vcall<DT_GetBool>(b, 0x3c)(b)) out = new_bool(299, 1);
    else out = new_bool(0x12f, 0);
    ValueStack_Push(stack, out);
    dt_delete(a); dt_delete(b); }

// CMP: flag bit 0 = (top == second), nothing popped
EXEC(OP_CMP) { BEA_TRACE_ONCE();
    DataType* top = ValueStack_Peek(stack, 0);
    void* topVt = *reinterpret_cast<void**>(top);
    DataType* second = ValueStack_Peek(stack, 1);
    char r = (*reinterpret_cast<DT_Compare*>(static_cast<char*>(topVt) + 0x18))(top, second);
    if (r) ctx->flags |= 1; else ctx->flags &= ~1u; }

EXEC(OP_PUSH) { BEA_TRACE_ONCE();
    Variable* var = VarTable_Get(vars, self->operand);
    ValueStack_Push(stack, Instr_CloneVariableValue(self, var)); }
EXEC(OP_POP) { BEA_TRACE_ONCE();
    Variable* var = VarTable_Get(vars, self->operand);
    dt_delete(var->value);
    var->value = ValueStack_Pop(stack); }
EXEC(OP_REMOVE_TOP) { BEA_TRACE_ONCE(); ValueStack_RemoveTop(stack); }
EXEC(OP_GETTOP) { BEA_TRACE_ONCE();
    Variable* var = VarTable_Get(vars, self->operand);
    if (!var->value) {
        DataType* top = ValueStack_Peek(stack, 0);
        var->value = vcall<DT_Clone>(top, 0x48)(top);
    } else {
        void* vt = *reinterpret_cast<void**>(var->value);
        DataType* top = ValueStack_Peek(stack, 0);
        (*reinterpret_cast<DT_Assign*>(static_cast<char*>(vt) + 0x14))(var->value, top);
    } }
EXEC(OP_PUSHPC) { BEA_TRACE_ONCE(); ValueStack_Push(stack, new_int(0x8f, self->operand)); }
EXEC(OP_POINTER) { BEA_TRACE_ONCE();
    DataType* v = ValueStack_Pop(stack);
    void* p = vcall<DT_GetPointer>(v, 0x40)(v);
    at<void*>(at<void*>(ctx->script, 0x68), 0x10) = p;
    dt_delete(v); }

EXEC(OP_JMP)      { BEA_TRACE_ONCE(); ctx->pc = self->operand; }
EXEC(OP_JMPNE)    { BEA_TRACE_ONCE(); if (!(ctx->flags & 1)) ctx->pc = self->operand; }
EXEC(OP_JMPFALSE) { BEA_TRACE_ONCE();
    DataType* v = ValueStack_Pop(stack);
    if (!vcall<DT_GetBool>(v, 0x3c)(v)) ctx->pc = self->operand;
    dt_delete(v); }
EXEC(OP_CALLLOCAL) { BEA_TRACE_ONCE(); ctx->pc = self->operand; ctx->callDepth++; }
EXEC(OP_RETURN) { BEA_TRACE_ONCE();
    if (ctx->callDepth > 0) {
        ctx->callDepth--;
        DataType* v = ValueStack_Pop(stack);
        ctx->pc = vcall<DT_GetInt>(v, 0x30)(v);
        dt_delete(v);
        ValueStack_Push(stack, new_int(0x9e, 1));
    } }
// 0x00453ac0: shared empty 3-argument method (NOP/LABEL Execute and one
// CControllerDefinition virtual)
static void BEA_THISCALL Empty3_Execute(void* self, void* a, void* b, void* c) { }

// ---------------------------------------------------------------------------
// Clone / GetOpcode, one pair per class
static inline Instr* clone_instr(const Instr* self, void* vftable, uint32_t line)
{
    Instr* n = (Instr*)MemoryManager_Alloc(g_memoryManager, 0xc, 0x1a, kFileAsmInstruction, line);
    if (!n) return nullptr;
    n->vftable = vftable;
    n->operand = self->operand;
    return n;
}
#define OPCODE_CLASS(Name, vtaddr, opcode, cloneLine) \
    static Instr* BEA_THISCALL Name##_Clone(Instr* self) { BEA_TRACE_ONCE(); return clone_instr(self, (void*)(vtaddr), (cloneLine)); } \
    static int BEA_THISCALL Name##_GetOpcode(Instr*) { return (opcode); }

OPCODE_CLASS(OP_NOP,           0x005e4d40, 0x00, 0x142)
OPCODE_CLASS(OP_PLUS,          0x005e4d30, 0x01, 0x127)
OPCODE_CLASS(OP_MINUS,         0x005e4d20, 0x02, 0x11e)
OPCODE_CLASS(OP_MULTIPLY,      0x005e4d10, 0x03, 0x130)
OPCODE_CLASS(OP_DIVIDE,        0x005e4d00, 0x04, 0x139)
OPCODE_CLASS(OP_PUSH,          0x005e4cf0, 0x05, 0x115)
OPCODE_CLASS(OP_POP,           0x005e4ce0, 0x06, 0x10c)
OPCODE_CLASS(OP_OR,            0x005e4cd0, 0x07, 0x103)
OPCODE_CLASS(OP_AND,           0x005e4cc0, 0x08, 0x0fa)
OPCODE_CLASS(OP_GREAT_THAN,    0x005e4cb0, 0x09, 0x0f1)
OPCODE_CLASS(OP_LESS_THAN,     0x005e4ca0, 0x0a, 0x0e8)
OPCODE_CLASS(OP_GREAT_EQ_THAN, 0x005e4c90, 0x0b, 0x0df)
OPCODE_CLASS(OP_LESS_EQ_THAN,  0x005e4c80, 0x0c, 0x0d6)
OPCODE_CLASS(OP_LABEL,         0x005e4c70, 0x0d, 0x0cd)
OPCODE_CLASS(OP_REMOVE_TOP,    0x005e4c60, 0x0e, 0x0c4)
OPCODE_CLASS(OP_CMP,           0x005e4c50, 0x0f, 0x0bb)
OPCODE_CLASS(OP_CMPB,          0x005e4c40, 0x10, 0x0b2)
OPCODE_CLASS(OP_CMPNEB,        0x005e4c30, 0x11, 0x0a9)
OPCODE_CLASS(OP_JMPNE,         0x005e4c20, 0x12, 0x0a0)
OPCODE_CLASS(OP_JMPFALSE,      0x005e4c10, 0x13, 0x097)
OPCODE_CLASS(OP_JMP,           0x005e4c00, 0x14, 0x08e)
OPCODE_CLASS(OP_GETTOP,        0x005e4bf0, 0x15, 0x085)
OPCODE_CLASS(OP_POINTER,       0x005e4be0, 0x16, 0x07b)
OPCODE_CLASS(OP_RETURN,        0x005e4bd0, 0x17, 0x072)
OPCODE_CLASS(OP_CALL,          0x005e4bc0, 0x18, 0x058)
OPCODE_CLASS(OP_CALLLOCAL,     0x005e4bb0, 0x19, 0x067)
OPCODE_CLASS(OP_PUSHPC,        0x005e4ba0, 0x1a, 0x14b)

BEA_HOOKS(
    // stack / variables
    BEA_HOOK(0x00539420, ValueStack_Push),
    BEA_HOOK(0x00539470, ValueStack_Pop),
    BEA_HOOK(0x005394a0, ValueStack_RemoveTop),
    BEA_HOOK(0x005394e0, ValueStack_Peek),
    BEA_HOOK(0x00539760, VarTable_Get),
    BEA_HOOK(0x0052d040, Instr_CloneVariableValue),
    // Execute
    BEA_HOOK(0x0052e180, OP_PLUS_Execute),
    BEA_HOOK(0x0052e1d0, OP_MINUS_Execute),
    BEA_HOOK(0x0052e220, OP_MULTIPLY_Execute),
    BEA_HOOK(0x0052e270, OP_DIVIDE_Execute),
    BEA_HOOK(0x0052e630, OP_GREAT_THAN_Execute),
    BEA_HOOK(0x0052e6d0, OP_LESS_THAN_Execute),
    BEA_HOOK(0x0052e770, OP_GREAT_EQ_THAN_Execute),
    BEA_HOOK(0x0052e810, OP_LESS_EQ_THAN_Execute),
    BEA_HOOK(0x0052e380, OP_CMPB_Execute),
    BEA_HOOK(0x0052e8b0, OP_CMPNEB_Execute),
    BEA_HOOK(0x0052e4d0, OP_OR_Execute),
    BEA_HOOK(0x0052e580, OP_AND_Execute),
    BEA_HOOK(0x0052e330, OP_CMP_Execute),
    BEA_HOOK(0x0052e2c0, OP_PUSH_Execute),
    BEA_HOOK(0x0052e2f0, OP_POP_Execute),
    BEA_HOOK(0x0052e320, OP_REMOVE_TOP_Execute),
    BEA_HOOK(0x0052e9c0, OP_GETTOP_Execute),
    BEA_HOOK(0x0052e0a0, OP_PUSHPC_Execute),
    BEA_HOOK(0x0052ea10, OP_POINTER_Execute),
    BEA_HOOK(0x0052e9b0, OP_JMP_Execute),
    BEA_HOOK(0x0052e990, OP_JMPNE_Execute),
    BEA_HOOK(0x0052e950, OP_JMPFALSE_Execute),
    BEA_HOOK(0x0052ec40, OP_CALLLOCAL_Execute),
    BEA_HOOK(0x0052e0f0, OP_RETURN_Execute),
    BEA_HOOK(0x00453ac0, Empty3_Execute),
    // Clone
    BEA_HOOK(0x0052e020, OP_NOP_Clone),
    BEA_HOOK(0x0052df60, OP_PLUS_Clone),
    BEA_HOOK(0x0052df20, OP_MINUS_Clone),
    BEA_HOOK(0x0052dfa0, OP_MULTIPLY_Clone),
    BEA_HOOK(0x0052dfe0, OP_DIVIDE_Clone),
    BEA_HOOK(0x0052dee0, OP_PUSH_Clone),
    BEA_HOOK(0x0052dea0, OP_POP_Clone),
    BEA_HOOK(0x0052de50, OP_OR_Clone),
    BEA_HOOK(0x0052de10, OP_AND_Clone),
    BEA_HOOK(0x0052ddc0, OP_GREAT_THAN_Clone),
    BEA_HOOK(0x0052dd70, OP_LESS_THAN_Clone),
    BEA_HOOK(0x0052dd30, OP_GREAT_EQ_THAN_Clone),
    BEA_HOOK(0x0052dce0, OP_LESS_EQ_THAN_Clone),
    BEA_HOOK(0x0052dc90, OP_LABEL_Clone),
    BEA_HOOK(0x0052dc40, OP_REMOVE_TOP_Clone),
    BEA_HOOK(0x0052dc00, OP_CMP_Clone),
    BEA_HOOK(0x0052dbb0, OP_CMPB_Clone),
    BEA_HOOK(0x0052db70, OP_CMPNEB_Clone),
    BEA_HOOK(0x0052db20, OP_JMPNE_Clone),
    BEA_HOOK(0x0052dad0, OP_JMPFALSE_Clone),
    BEA_HOOK(0x0052da80, OP_JMP_Clone),
    BEA_HOOK(0x0052da40, OP_GETTOP_Clone),
    BEA_HOOK(0x0052da10, OP_POINTER_Clone),
    BEA_HOOK(0x0052d9d0, OP_RETURN_Clone),
    BEA_HOOK(0x0052d960, OP_CALL_Clone),
    BEA_HOOK(0x0052d9a0, OP_CALLLOCAL_Clone),
    BEA_HOOK(0x0052e060, OP_PUSHPC_Clone),
    // GetOpcode.  The linker folded identical `return N` bodies (/OPT:ICF), so
    // several of these addresses are shared with unrelated classes' virtuals;
    // the replacement is the same constant either way.
    BEA_HOOK(0x004175b0, OP_AND_GetOpcode),
    BEA_HOOK(0x0052d950, OP_CALL_GetOpcode),
    BEA_HOOK(0x0052d990, OP_CALLLOCAL_GetOpcode),
    BEA_HOOK(0x004ead60, OP_CMP_GetOpcode),
    BEA_HOOK(0x0052dbf0, OP_CMPB_GetOpcode),
    BEA_HOOK(0x00418410, OP_CMPNEB_GetOpcode),
    BEA_HOOK(0x004db8c0, OP_DIVIDE_GetOpcode),
    BEA_HOOK(0x004df500, OP_GETTOP_GetOpcode),
    BEA_HOOK(0x004c4a40, OP_GREAT_EQ_THAN_GetOpcode),
    BEA_HOOK(0x0052de00, OP_GREAT_THAN_GetOpcode),
    BEA_HOOK(0x0052dac0, OP_JMP_GetOpcode),
    BEA_HOOK(0x0052db10, OP_JMPFALSE_GetOpcode),
    BEA_HOOK(0x0052db60, OP_JMPNE_GetOpcode),
    BEA_HOOK(0x0052dcd0, OP_LABEL_GetOpcode),
    BEA_HOOK(0x0052dd20, OP_LESS_EQ_THAN_GetOpcode),
    BEA_HOOK(0x0052ddb0, OP_LESS_THAN_GetOpcode),
    BEA_HOOK(0x004059c0, OP_MINUS_GetOpcode),
    BEA_HOOK(0x00405ee0, OP_MULTIPLY_GetOpcode),
    BEA_HOOK(0x00405930, OP_NOP_GetOpcode),
    BEA_HOOK(0x0052de90, OP_OR_GetOpcode),
    BEA_HOOK(0x004014a0, OP_PLUS_GetOpcode),
    BEA_HOOK(0x0050ffc0, OP_POINTER_GetOpcode),
    BEA_HOOK(0x0052f660, OP_POP_GetOpcode),
    BEA_HOOK(0x004dbc20, OP_PUSH_GetOpcode),
    BEA_HOOK(0x0043ea50, OP_PUSHPC_GetOpcode),
    BEA_HOOK(0x0052dc80, OP_REMOVE_TOP_GetOpcode),
    BEA_HOOK(0x0052da00, OP_RETURN_GetOpcode));
