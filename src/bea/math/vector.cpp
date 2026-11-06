// Vector / matrix primitives (original: inline-expanded helpers near the start
// of .text, probably from a Vector.h / Matrix.h header).
#include "bea/common.h"
#include "bea/hooks.h"
#include <string.h>

struct Vec3 {
    float x, y, z;
};

// Three rows of four floats: the 3x4 matrix layout used by the engine
// (rotation rows with a trailing component; exact meaning recovered later).
struct Mat34 {
    float row[3][4];
};

// 0x00401ec0  Vec3& Vec3::Set(x, y, z)  (thiscall, 3 dword args copied verbatim;
// returns *this in EAX — callers chain on it, see NOTES A1-2)
static Vec3* BEA_THISCALL Vector3_Set(Vec3* self, float x, float y, float z)
{
    BEA_TRACE_ONCE();
    self->x = x;
    self->y = y;
    self->z = z;
    return self;
}

// 0x00401ee0  Vec3& Vec3::Add(out, rhs): out = *this + rhs; returns out.
// The original reads all six operands before writing, so `out` may alias
// `this` or `rhs`; the component order (z, y, x) is kept for fidelity.
static Vec3* BEA_THISCALL Vector3_Add(const Vec3* self, Vec3* out, const Vec3* rhs)
{
    BEA_TRACE_ONCE();
    float z = rhs->z + self->z;
    float y = rhs->y + self->y;
    float x = rhs->x + self->x;
    out->x = x;
    out->y = y;
    out->z = z;
    return out;
}

// 0x00401f10  Mat34& Mat34::SetRows(r0, r1, r2): copies three 16-byte rows,
// returns *this.
static Mat34* BEA_THISCALL Matrix34_SetRows(Mat34* self, const float* r0, const float* r1, const float* r2)
{
    BEA_TRACE_ONCE();
    memcpy(self->row[0], r0, 16);
    memcpy(self->row[1], r1, 16);
    memcpy(self->row[2], r2, 16);
    return self;
}

// 0x004026b0  Vec3::Length(): sqrt(x*x + y*y + z*z), left in ST(0) at full
// precision (the original never rounds to float).  Summation order x, y, z.
static f80 BEA_THISCALL Vector3_Length(const Vec3* self)
{
    BEA_TRACE_ONCE();
    f80 xx = (f80)self->x * (f80)self->x;
    f80 yy = (f80)self->y * (f80)self->y;
    f80 zz = (f80)self->z * (f80)self->z;
    return __builtin_sqrtl(xx + yy + zz);
}

// 0x0040d120  Vec3& Vec3::Sub(out, rhs): out = *this - rhs (z, y, x order; returns out)
static Vec3* BEA_THISCALL Vector3_Sub(const Vec3* self, Vec3* out, const Vec3* rhs)
{
    BEA_TRACE_ONCE();
    float z = self->z - rhs->z;
    float y = self->y - rhs->y;
    float x = self->x - rhs->x;
    out->x = x;
    out->y = y;
    out->z = z;
    return out;
}

// 0x0040d150  Vec3& Vec3::Scale(out, s): out = s * *this (returns out)
static Vec3* BEA_THISCALL Vector3_Scale(const Vec3* self, Vec3* out, float s)
{
    BEA_TRACE_ONCE();
    float z = s * self->z;
    float y = s * self->y;
    float x = s * self->x;
    out->x = x;
    out->y = y;
    out->z = z;
    return out;
}

// 0x00406d50  Vec3::Normalise(): divides by the length unless it is exactly 0.
// Length and reciprocal stay at 80 bits; each component is rounded once.
static void BEA_THISCALL Vector3_Normalise(Vec3* self)
{
    BEA_TRACE_ONCE();
    f80 xx = (f80)self->x * (f80)self->x;
    f80 yy = (f80)self->y * (f80)self->y;
    f80 zz = (f80)self->z * (f80)self->z;
    f80 len = __builtin_sqrtl(xx + yy + zz);
    if (len == (f80)0.0f) return;
    f80 inv = (f80)1.0f / len;
    self->x = (float)(inv * (f80)self->x);
    self->y = (float)(inv * (f80)self->y);
    self->z = (float)(inv * (f80)self->z);
}

// 0x0040d2c0  Vec3& Mat34::Rotate(out, v): out = M * v using the 3x3 part.
// Each component accumulates z, then y, then x (as the original does) before a
// single rounding to float; returns out.
static Vec3* BEA_THISCALL Matrix34_Rotate(const Mat34* self, Vec3* out, const Vec3* v)
{
    BEA_TRACE_ONCE();
    const float (*m)[4] = self->row;
    f80 z = (f80)m[2][2] * (f80)v->z;
    z = (f80)m[2][1] * (f80)v->y + z;
    z = (f80)m[2][0] * (f80)v->x + z;
    f80 y = (f80)m[1][2] * (f80)v->z;
    y = (f80)m[1][1] * (f80)v->y + y;
    y = (f80)m[1][0] * (f80)v->x + y;
    f80 x = (f80)m[0][2] * (f80)v->z;
    x = (f80)m[0][1] * (f80)v->y + x;
    x = (f80)v->x * (f80)m[0][0] + x;
    out->x = (float)x;
    out->y = (float)y;
    out->z = (float)z;
    return out;
}

// 0x00411a60  Vec3& Vec3::Cross(out, rhs): out = *this x rhs (returns out).
// Component order z, y, x; each is (product - product) rounded once.
static Vec3* BEA_THISCALL Vector3_Cross(const Vec3* self, Vec3* out, const Vec3* rhs)
{
    BEA_TRACE_ONCE();
    f80 z = (f80)self->x * (f80)rhs->y - (f80)self->y * (f80)rhs->x;
    f80 y = (f80)self->z * (f80)rhs->x - (f80)rhs->z * (f80)self->x;
    f80 x = (f80)self->y * (f80)rhs->z - (f80)self->z * (f80)rhs->y;
    out->x = (float)x;
    out->y = (float)y;
    out->z = (float)z;
    return out;
}

// 0x0041ad10  Vec3::operator+=(rhs)  (x, y, z order, no return value)
static void BEA_THISCALL Vector3_AddInPlace(Vec3* self, const Vec3* rhs)
{
    BEA_TRACE_ONCE();
    self->x = rhs->x + self->x;
    self->y = rhs->y + self->y;
    self->z = rhs->z + self->z;
}

BEA_HOOKS(
    BEA_HOOK(0x00411a60, Vector3_Cross),
    BEA_HOOK(0x0041ad10, Vector3_AddInPlace),
    BEA_HOOK(0x00401ec0, Vector3_Set),
    BEA_HOOK(0x00401ee0, Vector3_Add),
    BEA_HOOK(0x00401f10, Matrix34_SetRows),
    BEA_HOOK(0x004026b0, Vector3_Length),
    BEA_HOOK(0x0040d120, Vector3_Sub),
    BEA_HOOK(0x0040d150, Vector3_Scale),
    BEA_HOOK(0x00406d50, Vector3_Normalise),
    BEA_HOOK(0x0040d2c0, Matrix34_Rotate));
