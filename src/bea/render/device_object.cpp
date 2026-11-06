// DeviceObject: base of every D3D resource that must survive device loss
// (CDXTexture, CDXMeshVB, CDXLandscape, CDXWater, CDXFrontEndVideo mix it in).
// Instances sit on two global singly-linked lists (next pointer at +4).
#include "bea/common.h"
#include "bea/hooks.h"

struct DeviceObject {
    void* vftable;
    DeviceObject* next;
};

BEA_GLOBAL(DeviceObject*, g_deviceObjectListA, 0x00889074);
BEA_GLOBAL(DeviceObject*, g_deviceObjectListB, 0x00889078);
BEA_GLOBAL_PTR(void, DeviceObject_vftable, 0x005e48c8);

// Unlinks `self` from a list, returning whether it was found.  Mirrors the
// original quirk exactly: after the node is unlinked the scan carries on from
// self->next with prev == self.
static bool unlink_from(DeviceObject*& head, DeviceObject* self)
{
    bool found = false;
    DeviceObject* prev = nullptr;
    for (DeviceObject* n = head; n != nullptr; n = n->next) {
        if (n == self) {
            if (prev) prev->next = self->next;
            else head = self->next;
            found = true;
        }
        prev = n;
    }
    return found;
}

// 0x00512cc0  DeviceObject_Unregister(obj)  (stdcall): removes obj from both
// lists; returns non-zero if it was on either.
static uint32_t BEA_STDCALL DeviceObject_Unregister(DeviceObject* obj)
{
    BEA_TRACE_ONCE();
    uint32_t a = unlink_from(g_deviceObjectListA, obj) ? 1 : 0;
    uint32_t b = unlink_from(g_deviceObjectListB, obj) ? 1 : 0;
    return b | a;
}

// 0x00512d50  DeviceObject::~DeviceObject() body: restores the base vtable and
// removes the object from both global lists.
static void BEA_THISCALL DeviceObject_Destruct(DeviceObject* self)
{
    BEA_TRACE_ONCE();
    self->vftable = DeviceObject_vftable;
    unlink_from(g_deviceObjectListA, self);
    unlink_from(g_deviceObjectListB, self);
}

BEA_HOOKS(
    BEA_HOOK(0x00512d50, DeviceObject_Destruct),
    BEA_HOOK(0x00512cc0, DeviceObject_Unregister));
