// hand-ported from 004be420_FUN_004be420.c (FUN_004be420; functions.csv says 1052 bytes, the code runs to 0x4be94b)
// @hand-fixed 2026-10-29 written from the disassembly: Ghidra lost the loop. The function is a depth-first grid walk: two locals (depth d at [esp], step count n at [esp+4], both 0 at 004be423) and a loop head at 004be42d (n++, d++, grid[Y][X] = (short)d, return 1 at the target), a 500-step limit (004be471, return 0 at 004be946, the block Ghidra removed as unreachable), the direction choice (0..4) dispatched through the jump table 0x4be94c (004be826): 1-4 move X-/Y-/X+/Y+, widen the bounds 0x829dc4/0x829dc8/0x630ab4/0x630ab8, record the direction in the int array 0x80959c[d] and loop to 004be42d; 0 backtracks (004be82d: return 0 when d <= 1, else d--, undo 0x80959c[d] through the table 0x4be960 and choose again from 004be471). FUN_004be970 is thiscall on the dword at 0x809db8 with (row, col), ret 8; the four neighbour tests 0x4be9b0/0x4bea10/0x4bea70/0x4bead0 are cdecl with no arguments
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef int (BEA_THISCALL* FUN_004be970_t)(uint32_t, int, int);
static const bea_guard<FUN_004be970_t> FUN_004be970 = {(FUN_004be970_t)0x004be970};
typedef int (BEA_CDECL* FUN_004be9b0_t)(void);
static const bea_guard<FUN_004be9b0_t> FUN_004be9b0 = {(FUN_004be9b0_t)0x004be9b0};   // up    (2)
typedef int (BEA_CDECL* FUN_004bea10_t)(void);
static const bea_guard<FUN_004bea10_t> FUN_004bea10 = {(FUN_004bea10_t)0x004bea10};   // left  (1)
typedef int (BEA_CDECL* FUN_004bea70_t)(void);
static const bea_guard<FUN_004bea70_t> FUN_004bea70 = {(FUN_004bea70_t)0x004bea70};   // down  (4)
typedef int (BEA_CDECL* FUN_004bead0_t)(void);
static const bea_guard<FUN_004bead0_t> FUN_004bead0 = {(FUN_004bead0_t)0x004bead0};   // right (3)

#define GX   GLOBAL_AT(int, 0x00809dbc)     // column
#define GY   GLOBAL_AT(int, 0x00829dc0)     // row
#define TX   GLOBAL_AT(int, 0x00809db0)
#define TY   GLOBAL_AT(int, 0x00809db4)
#define MAP  GLOBAL_AT(uint32_t, 0x00809db8)
#define MINX GLOBAL_AT(int, 0x00829dc4)
#define MINY GLOBAL_AT(int, 0x00829dc8)
#define MAXX GLOBAL_AT(int, 0x00630ab4)
#define MAXY GLOBAL_AT(int, 0x00630ab8)
// the short grid at 0x809dc0, 256 per row; base - 0x200 is the row above,
// base + 0x200 the row below, base -/+ 2 the left/right neighbour
#define CELL(base, y, x) (*reinterpret_cast<int16_t *>((uintptr_t)(base) + ((((uint32_t)(y) << 8) + (uint32_t)(x)) * 2u)))
#define PATH(d) (*reinterpret_cast<int *>((uintptr_t)0x0080959c + (uint32_t)(d) * 4u))

static int BEA_CDECL ap_004be420(void)
{
  int d = 0;
  int n = 0;
  int dir;
  int y, x;

head:                                                                    // 004be42d
  n = n + 1;
  y = GY;
  x = GX;
  d = d + 1;
  CELL(0x00809dc0, y, x) = (int16_t)d;
  if (GY == TY && x == TX) {
    return 1;
  }
choose:                                                                  // 004be471
  if (n >= 500) {
    return 0;
  }
  {
    int ay = GY - TY;
    if (ay < 0) ay = -ay;
    int ax = GX - TX;
    if (ax < 0) ax = -ax;
    if (ay > ax) {
      y = GY;
      if (y > TY) {
        if (y > 0 && CELL(0x00809bc0, y, GX) == -1 && FUN_004be970(MAP, y - 1, GX) != 0) { dir = 2; goto go; }
        x = GX;
        if (x > TX) {
          if (x > 0 && CELL(0x00809dbe, GY, x) == -1 && FUN_004be970(MAP, GY, x - 1) != 0) { dir = 1; goto go; }
          x = GX;
          if (x < 0xff && CELL(0x00809dc2, GY, x) == -1 && FUN_004be970(MAP, GY, x + 1) != 0) { dir = 3; goto go; }
        } else {
          if (x < 0xff && CELL(0x00809dc2, GY, x) == -1 && FUN_004be970(MAP, GY, x + 1) != 0) { dir = 3; goto go; }
          x = GX;
          if (x > 0 && CELL(0x00809dbe, GY, x) == -1 && FUN_004be970(MAP, GY, x - 1) != 0) { dir = 1; goto go; }
        }
        y = GY;                                                          // 004be609
        if (y < 0xff && CELL(0x00809fc0, y, GX) == -1 && FUN_004be970(MAP, y + 1, GX) != 0) { dir = 4; goto go; }
        dir = 0;
        goto go;
      }
      // 004be656: y <= TY
      if (y < 0xff && CELL(0x00809fc0, y, GX) == -1 && FUN_004be970(MAP, y + 1, GX) != 0) { dir = 4; goto go; }
      x = GX;
      if (x > TX) {
        if (x > 0 && CELL(0x00809dbe, GY, x) == -1 && FUN_004be970(MAP, GY, x - 1) != 0) { dir = 1; goto go; }
        if (FUN_004bead0() != 0) { dir = 3; goto go; }
      } else {
        if (FUN_004bead0() != 0) { dir = 3; goto go; }
        if (FUN_004bea10() != 0) { dir = 1; goto go; }
      }
      if (FUN_004be9b0() != 0) { dir = 2; goto go; }                    // 004be711
      dir = 0;
      goto go;
    }
    // 004be728: ay <= ax
    if (GX > TX) {
      if (FUN_004bea10() != 0) { dir = 1; goto go; }
      if (GY > TY) {
        if (FUN_004be9b0() != 0) { dir = 2; goto go; }
        if (FUN_004bea70() != 0) { dir = 4; goto go; }
      } else {
        if (FUN_004bea70() != 0) { dir = 4; goto go; }
        if (FUN_004be9b0() != 0) { dir = 2; goto go; }
      }
      if (FUN_004bead0() != 0) { dir = 3; goto go; }                    // 004be7a5
      dir = 0;
      goto go;
    }
    // 004be7b5
    if (FUN_004bead0() != 0) { dir = 3; goto go; }
    if (GY > TY) {
      if (FUN_004be9b0() != 0) { dir = 2; goto go; }
      if (FUN_004bea70() != 0) { dir = 4; goto go; }
    } else {
      if (FUN_004bea70() != 0) { dir = 4; goto go; }
      if (FUN_004be9b0() != 0) { dir = 2; goto go; }
    }
    if (FUN_004bea10() != 0) { dir = 1; goto go; }                      // 004be814
    dir = 0;
  }

go:                                                                      // 004be826
  switch (dir) {
  case 1: {                                                              // 004be883
    int v = GX - 1;
    GX = v;
    if (v < MINX) MINX = v;
    PATH(d) = 1;
    goto head;
  }
  case 2: {                                                              // 004be8b1
    int v = GY - 1;
    GY = v;
    if (v < MINY) MINY = v;
    PATH(d) = 2;
    goto head;
  }
  case 3: {                                                              // 004be8df
    int v = GX + 1;
    GX = v;
    if (v + 1 > MAXX) MAXX = v + 1;
    PATH(d) = 3;
    goto head;
  }
  case 4: {                                                              // 004be90e
    int v = GY + 1;
    GY = v;
    if (v + 1 > MAXY) MAXY = v + 1;
    PATH(d) = 4;
    goto head;
  }
  default: {                                                             // 004be82d: back up one step
    if (d <= 1) {
      return 0;
    }
    d = d - 1;
    uint32_t e = (uint32_t)(PATH(d) - 1);
    if (e > 3) {
      return 0;
    }
    switch (e) {                                                         // table 0x4be960
    case 0: GX = GX + 1; break;                                          // 004be857
    case 1: GY = GY + 1; break;                                          // 004be86d
    case 2: GX = GX - 1; break;                                          // 004be862
    default: GY = GY - 1; break;                                         // 004be878
    }
    goto choose;
  }
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004be420, ap_004be420));
