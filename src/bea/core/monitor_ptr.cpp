// CMonitor / IListener observer plumbing (Monitor.h).
//
// A "monitor pointer" holds a CMonitor* and registers itself in the target's
// listener list (a PtrList stored at CMonitor+4) so the pointer is cleared when
// the target dies.  Assigning a new target unregisters from the old one.
#include "bea/common.h"
#include "bea/hooks.h"

struct PtrList;
BEA_ORIG(void, BEA_THISCALL, PtrList_Remove_orig, 0x004e5bd0, PtrList* list, void* value);   // replaced in sptrset.cpp; called through the hook
BEA_ORIG(void, BEA_THISCALL, CMonitor_AddListener, 0x00401040, void* monitor, void* listener); // still original

struct MonitorPtr {
    void* target;   // CMonitor*
};

// 0x00401000  MonitorPtr::Set(target)  (113 call sites)
static void BEA_THISCALL MonitorPtr_Set(MonitorPtr* self, void* target)
{
    BEA_TRACE_ONCE();
    void* old = self->target;
    if (target == old) return;
    if (old) {
        PtrList* listeners = at<PtrList*>(old, 4);
        if (listeners) PtrList_Remove_orig(listeners, self);
    }
    self->target = target;
    if (target) CMonitor_AddListener(target, self);
}

BEA_HOOKS(
    BEA_HOOK(0x00401000, MonitorPtr_Set));
