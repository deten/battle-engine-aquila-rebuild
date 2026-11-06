// Chunk reader/writer state (chunker.cpp / TokenArchive.cpp).
#include "bea/common.h"
#include "bea/hooks.h"

// 0x00547d70  ChunkState::Reset(): clears +4, +0xc, +0x10, +0x14; returns this
// (allocated with 0x134 bytes by the chunker constructor at 0x4237d0).
static void* BEA_THISCALL ChunkState_Reset(void* self)
{
    BEA_TRACE_ONCE();
    at<uint32_t>(self, 0x04) = 0;
    at<uint32_t>(self, 0x0c) = 0;
    at<uint32_t>(self, 0x10) = 0;
    at<uint32_t>(self, 0x14) = 0;
    return self;
}

BEA_HOOKS(
    BEA_HOOK(0x00547d70, ChunkState_Reset));
