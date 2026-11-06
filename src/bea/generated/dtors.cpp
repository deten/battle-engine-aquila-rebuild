// Non-deleting destructors assembled from steps (see tools/gen_dtors.py).
// The original functions carry an SEH/C++ unwind frame so that a throwing
// member destructor still runs the remaining ones; game code never throws in
// practice, so the steps are simply executed in order.
#include "bea/common.h"
#include "bea/hooks.h"

BEA_ORIG(void, BEA_THISCALL, PtrList_Remove_orig, 0x004e5bd0, void* list, void* value);

template <uint32_t VT> struct SetVt {
    static inline void run(char* self) { at<void*>(self, 0) = reinterpret_cast<void*>(static_cast<uintptr_t>(VT)); }
};
// inline MonitorPtr::~MonitorPtr for the member at OFF: unregister from the
// target's listener list (CMonitor+4) if the target is still alive
template <uint32_t OFF> struct MPtr {
    static inline void run(char* self)
    {
        void* target = at<void*>(self, OFF);
        if (!target) return;
        void* listeners = at<void*>(target, 4);
        if (!listeners) return;
        PtrList_Remove_orig(listeners, self + OFF);
    }
};
// delete the polymorphic member pointer at OFF (scalar deleting destructor)
template <uint32_t OFF> struct DelMember {
    static inline void run(char* self)
    {
        void* obj = at<void*>(self, OFF);
        if (!obj) return;
        typedef void (BEA_THISCALL* Dtor)(void*, int);
        (*reinterpret_cast<Dtor*>(*reinterpret_cast<char**>(obj)))(obj, 1);
    }
};
// destructor F of the embedded member at OFF
template <uint32_t OFF, uint32_t F> struct CallAt {
    static inline void run(char* self)
    {
        typedef void (BEA_THISCALL* Fn)(void*);
        reinterpret_cast<Fn>(static_cast<uintptr_t>(F))(self + OFF);
    }
};
// base-class destructor F
template <uint32_t F> struct CallThis {
    static inline void run(char* self)
    {
        typedef void (BEA_THISCALL* Fn)(void*);
        reinterpret_cast<Fn>(static_cast<uintptr_t>(F))(self);
    }
};

template <typename... Steps> struct DtorSeq {
    static void BEA_THISCALL f(void* self)
    {
        char* p = static_cast<char*>(self);
        (Steps::run(p), ...);
    }
};

static const BeaHook bea_dtor_hooks_[] = {
#include "dtors_generated.inc"
};
static BeaHookRegistrar bea_dtor_registrar_(bea_dtor_hooks_,
    sizeof(bea_dtor_hooks_) / sizeof(bea_dtor_hooks_[0]));
