// Global intrusive singly-linked list (next pointer at offset 0, head at
// 0x0082b3e8).  Owner class not yet identified; used by ~41 call sites.
#include "bea/common.h"
#include "bea/hooks.h"

struct IntrusiveNode {
    IntrusiveNode* next;
};

BEA_GLOBAL(IntrusiveNode*, g_intrusiveListHead, 0x0082b3e8);

// 0x004cb050  IntrusiveNode::Unlink(): removes this from the global list.
static void BEA_THISCALL IntrusiveNode_Unlink(IntrusiveNode* self)
{
    BEA_TRACE_ONCE();
    if (g_intrusiveListHead == self) {
        g_intrusiveListHead = self->next;
        return;
    }
    IntrusiveNode* p = g_intrusiveListHead;
    if (!p) return;
    while (p->next != self) {
        p = p->next;
        if (!p) return;
    }
    p->next = self->next;
}

BEA_HOOKS(
    BEA_HOOK(0x004cb050, IntrusiveNode_Unlink));
