// Singly-linked pointer list with a global node free-list (SPtrSet.cpp).
//
//   struct Node { void* value; Node* next; };
//   struct List { Node* head; Node* tail; uint32 unknown8; int count; };
// Freed nodes are pushed on the global free list at 0x0083d130.
#include "bea/common.h"
#include "bea/hooks.h"

struct PtrNode {
    void* value;
    PtrNode* next;
};

struct PtrList {
    PtrNode* head;
    PtrNode* tail;
    uint32_t unknown8;
    int count;
};

BEA_GLOBAL(PtrNode*, g_ptrNodeFreeList, 0x0083d130);

// 0x004e5bd0  PtrList::Remove(value): unlinks the first node holding value.
static void BEA_THISCALL PtrList_Remove(PtrList* self, void* value)
{
    BEA_TRACE_ONCE();
    PtrNode* node = self->head;
    PtrNode* prev = nullptr;
    if (!node) return;
    while (node->value != value) {
        prev = node;
        node = node->next;
        if (!node) return;
    }
    if (self->head == node) {
        self->head = node->next;
        if (!self->head) self->tail = nullptr;
    } else {
        prev->next = node->next;
        if (!node->next) self->tail = prev;
    }
    node->next = g_ptrNodeFreeList;
    g_ptrNodeFreeList = node;
    self->count--;
}

// 0x004e5c60  PtrList::Clear(): returns every node to the free list.
static void BEA_THISCALL PtrList_Clear(PtrList* self)
{
    BEA_TRACE_ONCE();
    if (self->count == 0) return;
    if (self->tail) self->tail->next = g_ptrNodeFreeList;
    g_ptrNodeFreeList = self->head;
    self->head = nullptr;
    self->tail = nullptr;
    self->count = 0;
}

// 0x004e5c90  PtrList::At(index): value of the index-th node (clamped to the
// last node).  Like the original, an empty list dereferences null.
static void* BEA_THISCALL PtrList_At(PtrList* self, int index)
{
    BEA_TRACE_ONCE();
    PtrNode* node = self->head;
    while (node && index > 0) {
        node = node->next;
        --index;
    }
    return node->value;
}

BEA_HOOKS(
    BEA_HOOK(0x004e5bd0, PtrList_Remove),
    BEA_HOOK(0x004e5c60, PtrList_Clear),
    BEA_HOOK(0x004e5c90, PtrList_At));
