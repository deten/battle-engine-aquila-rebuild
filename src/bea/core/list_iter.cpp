// Iterator over a PtrList (see sptrset.cpp): { PtrList* list; ?; PtrNode* cur }.
#include "bea/common.h"
#include "bea/hooks.h"

struct PtrNode {
    void* value;
    PtrNode* next;
};

struct PtrListIter {
    void* list;
    uint32_t unknown4;
    PtrNode* cur;
};

// 0x00406d30  PtrListIter::Next(): advances and returns the new value, 0 at end.
static void* BEA_THISCALL PtrListIter_Next(PtrListIter* self)
{
    BEA_TRACE_ONCE();
    PtrNode* node = self->cur->next;
    self->cur = node;
    return node ? node->value : nullptr;
}

BEA_HOOKS(
    BEA_HOOK(0x00406d30, PtrListIter_Next));
