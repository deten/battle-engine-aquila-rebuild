// Base-class constructors for steering guides and motion controllers.
#include "bea/common.h"
#include "bea/hooks.h"

BEA_GLOBAL_PTR(void, CGuide_vftable, 0x005dbdc4);
BEA_GLOBAL_PTR(void, CMotionController_vftable, 0x005dc778);

// CGuide layout: +0 vtable, +4 = 0, +8..+0x14 = actor position quad (copied
// from CActor+0x1c..+0x28 at construction), +0x18 = actor, +0x1c = 0.
struct CGuide {
    void* vftable;
    uint32_t unknown4;
    uint32_t pos[4];
    void* actor;
    uint32_t unknown1c;
};

// 0x0047e290  CGuide::CGuide(CActor* actor); returns this
static CGuide* BEA_THISCALL CGuide_Construct(CGuide* self, void* actor)
{
    BEA_TRACE_ONCE();
    self->actor = actor;
    self->unknown4 = 0;
    self->vftable = CGuide_vftable;
    self->pos[0] = at<uint32_t>(actor, 0x1c);
    self->pos[1] = at<uint32_t>(actor, 0x20);
    self->pos[2] = at<uint32_t>(actor, 0x24);
    uint32_t w = at<uint32_t>(actor, 0x28);
    self->unknown1c = 0;
    self->pos[3] = w;
    return self;
}

struct CMotionController {
    void* vftable;
    uint32_t unknown4;
    uint32_t unknown8;
};

// 0x004bae30  CMotionController::CMotionController(); returns this
static CMotionController* BEA_THISCALL CMotionController_Construct(CMotionController* self)
{
    BEA_TRACE_ONCE();
    self->unknown4 = 0;
    self->vftable = CMotionController_vftable;
    self->unknown8 = 0;
    return self;
}

BEA_HOOKS(
    BEA_HOOK(0x0047e290, CGuide_Construct),
    BEA_HOOK(0x004bae30, CMotionController_Construct));
