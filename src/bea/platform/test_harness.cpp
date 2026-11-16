// Test-harness behaviour (not a replacement of game code; not counted in
// PROGRESS.md).  The retail exe parses "-forcewindowed" only when the dev flag
// at 0x662f3e is set, so the switch is normally ignored and every test run
// took the display over in exclusive fullscreen.  When the command line holds
// "-forcewindowed" we set the windowed option (CGameOptions+0x38 = 0x662df0)
// after the original parser has run; the device setup (0x529350) then takes
// its own windowed path.  In that mode the game window is also kept from
// activating itself and is parked behind other windows, so test runs leave
// the desktop usable (DirectSound mutes non-foreground apps by default).
// See NOTES.md A1-9.
#include "bea/hooks.h"
#include "bea/common.h"
#include <windows.h>
#include <d3d9.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <set>
#include <map>
#include "MinHook.h"

extern volatile long g_bea_frames;   // hooks.cpp: presented frames
extern volatile bool g_bea_fptrap;              // hooks.cpp: NaN trap enabled (BEA_FPTRAP=1)

void bea_stalehunt_report();   // platform/stalehunt.cpp
void bea_stalehunt_poll();
void bea_capture_report();   // platform/capture.cpp

namespace {

typedef void (BEA_THISCALL *ParseArgs_t)(void* self, const char* cmdline);
ParseArgs_t g_ParseArgs_orig = nullptr;
ParseArgs_t g_ParseArgs_port = nullptr;     // the lifted ParseArgs, when there is one and it is on

void BEA_THISCALL ParseArgs_hook(void* self, const char* cmdline)
{
    (g_ParseArgs_port ? g_ParseArgs_port : g_ParseArgs_orig)(self, cmdline);
    if (strstr(GetCommandLineA(), "-forcewindowed")) {
        *reinterpret_cast<volatile int*>(0x00662df0) = 1;
        bea_log("harness: -forcewindowed honoured (windowed option set)");
    }
}

} // namespace

// ParseArgs is wrapped whether its port (src/bea/lifted/lift_00423bc0.cpp) is on or
// off (bea_harness_wrap); with no port registered, bea_harness_own_hooks hooks it alone
void bea_harness_own_hooks()
{
    if (g_ParseArgs_orig) return;
    MH_STATUS st = MH_CreateHook(reinterpret_cast<void*>(0x00423bc0), reinterpret_cast<void*>(&ParseArgs_hook),
                                 reinterpret_cast<void**>(&g_ParseArgs_orig));
    if (st != MH_OK) bea_log("FAIL  00423bc0 harness:ParseArgs: %s", MH_StatusToString(st));
}

namespace {

typedef BOOL (WINAPI *ShowWindow_t)(HWND, int);
typedef BOOL (WINAPI *SetWindowPos_t)(HWND, HWND, int, int, int, int, UINT);
SetWindowPos_t g_SetWindowPos_orig = nullptr;
typedef BOOL (WINAPI *SetForegroundWindow_t)(HWND);
typedef HWND (WINAPI *SetActiveWindow_t)(HWND);
ShowWindow_t g_ShowWindow_orig = nullptr;
SetForegroundWindow_t g_SetForegroundWindow_orig = nullptr;
SetActiveWindow_t g_SetActiveWindow_orig = nullptr;

BOOL WINAPI ShowWindow_hook(HWND h, int cmd)
{
    static bool parked = false;
    if (cmd == SW_SHOW || cmd == SW_SHOWNORMAL || cmd == SW_SHOWDEFAULT || cmd == SW_RESTORE)
        cmd = SW_SHOWNOACTIVATE;
    BOOL r = g_ShowWindow_orig(h, cmd);
    if (!parked && !GetParent(h) && IsWindowVisible(h)) {
        parked = true;
        (g_SetWindowPos_orig ? g_SetWindowPos_orig : SetWindowPos)(h, HWND_BOTTOM, 0, 0, 0, 0, SWP_NOSIZE | SWP_NOMOVE | SWP_NOACTIVATE);
        bea_log("harness: game window shown without activation, parked at the bottom of the z-order");
    }
    return r;
}
BOOL WINAPI SetForegroundWindow_hook(HWND) { return TRUE; }
volatile HWND g_game_hwnd = nullptr;
double g_fixed_step = 0;
volatile long g_fixed_frames = 0;

// Input recording and replay (BEA_RECORD=<file> / BEA_REPLAY=<file>, under the
// fixed clock).  A person plays a level once with BEA_RECORD; the run is paced
// to real time and every frame is shown.  What the game reads as input is
// logged against the presented-frame count: the input messages its window
// procedure receives (keys, mouse buttons, mouse moves, wheel), every
// GetCursorPos result (in client coordinates) and every DirectInput
// GetDeviceState buffer that changed.  BEA_REPLAY feeds the same input back at
// the same frames, so a test run plays the level the way the person did
// instead of gliding into the sea (the idle runs' coverage, 2026-10-23).
// Lines: `M frame msg wparam lparam`, `C call x y`, `D device call size hex`.
// Version 2 (a `P frame` line marks the frame play started, game state 3):
// what comes after play starts is counted from there - `N frame` messages
// (frames since play started), `K call` cursor reads and `E device call`
// device states with their counters reset.  The frame play starts on varied
// between runs (120..131 for level 500: the loading thread runs on real time),
// so inputs indexed from the start of the process landed a few frames off in
// a replay and level 500 played out three different ways (2026-10-27).
bool g_recording = false, g_replaying = false;
FILE* g_rec = nullptr;
long g_cursor_calls = 0;
long g_rep_mouse0[2] = { -1, -1 };  // the replay's mouse position at the start of play (play_started)
long g_play0 = -1;              // the frame play started on (-1: not yet)
// BEA_FPSCLOCK=1: the frame and game clock at which the game state last changed, taken on
// the game thread at Present; the outcome thread reports these instead of its own reading,
// which a 1 ms poll took up to ~16 frames late (2026-11-05, 1/30 s step: 64.75 / 65.3)
volatile int g_seen_state = -1;
volatile long g_state_frame = 0;
volatile float g_state_clock = 0;
bool g_rep_v2 = false;          // the replay file marks play start (phase-1 lines)
// "V 3" (recordings since 2026-10-30): DirectInput reads before play return no input,
// in the recording and in its replay (GetDeviceState_hook)
bool g_rep_v3 = false;
unsigned long g_play_marker = 0;
struct RecMsg { long frame; UINT msg; WPARAM wp; LPARAM lp; int phase; };
struct RecPoint { long call; LONG x, y; int phase; };
struct RecState { int dev; long call; DWORD size; unsigned char data[0x200]; int phase; };
RecMsg* g_rep_msgs = nullptr; long g_rep_nmsgs = 0, g_rep_next = 0, g_rep_next1 = 0;
RecPoint* g_rep_cursor = nullptr; long g_rep_ncursor = 0;
RecState* g_rep_states = nullptr; long g_rep_nstates = 0;
// `F device call hr` / `G ...` (after play start): a GetDeviceState that failed
// while recording - the window was not in the foreground (alt-tab) and
// DirectInput refused the read.  The game's mouse poll (0x42d4d0) then leaves
// its button and position state as it was; a replay answered such reads with
// the last recorded state (2026-10-29)
struct RecFail { int dev; long call; HRESULT hr; int phase; };
RecFail* g_rep_fails = nullptr; long g_rep_nfails = 0;
int phase_now() { return g_play0 >= 0 && (g_recording || g_rep_v2) ? 1 : 0; }

// BEA_STACKSCRUB=<hex byte>: the input hooks fill the stack below them with
// that byte before returning to the game.  A recording's hooks run deep (the
// real DirectInput call, fprintf) and a replay's shallow, so a game function
// that reads a local it never set would see different leftovers in each
// (level 100 win, 2026-10-29: replays part from the playthrough at 247 s
// with no input of the person's making any difference).
int g_stack_scrub = -1;
__attribute__((noinline)) void stack_scrub()
{
    if (g_stack_scrub < 0) return;
    volatile unsigned char buf[0x3000];
    memset(const_cast<unsigned char*>(buf), g_stack_scrub, sizeof buf);
    __asm__ volatile("" : : "r"(buf) : "memory");
}

bool is_input_msg(UINT m)
{
    return m == WM_KEYDOWN || m == WM_KEYUP || m == WM_SYSKEYDOWN || m == WM_SYSKEYUP || m == WM_MOUSEMOVE
        || m == WM_LBUTTONDOWN || m == WM_LBUTTONUP || m == WM_LBUTTONDBLCLK || m == WM_RBUTTONDOWN || m == WM_RBUTTONUP
        || m == WM_RBUTTONDBLCLK || m == WM_MBUTTONDOWN || m == WM_MBUTTONUP || m == WM_MOUSEWHEEL;
}

void load_replay(const char* path)
{
    FILE* f = fopen(path, "r");
    if (!f) { bea_log("replay: cannot open %s", path); return; }
    long nm = 0, nc = 0, nd = 0, nf = 0;
    char line[1200];
    while (fgets(line, sizeof line, f)) {
        if (line[0] == 'M' || line[0] == 'N') ++nm; else if (line[0] == 'C' || line[0] == 'K') ++nc;
        else if (line[0] == 'D' || line[0] == 'E') ++nd; else if (line[0] == 'P') g_rep_v2 = true; else if (line[0] == 'V' && atoi(line + 2) >= 3) g_rep_v3 = true;
        else if (line[0] == 'F' || line[0] == 'G') ++nf;
    }
    g_rep_msgs = static_cast<RecMsg*>(calloc(nm + 1, sizeof(RecMsg)));
    g_rep_cursor = static_cast<RecPoint*>(calloc(nc + 1, sizeof(RecPoint)));
    g_rep_states = static_cast<RecState*>(calloc(nd + 1, sizeof(RecState)));
    g_rep_fails = static_cast<RecFail*>(calloc(nf + 1, sizeof(RecFail)));
    rewind(f);
    while (fgets(line, sizeof line, f)) {
        int ph = (line[0] == 'N' || line[0] == 'K' || line[0] == 'E') ? 1 : 0;
        if (line[0] == 'M' || line[0] == 'N') {
            long fr; unsigned m; unsigned long wp, lp;
            if (sscanf(line + 2, "%ld %x %lx %lx", &fr, &m, &wp, &lp) == 4)
                g_rep_msgs[g_rep_nmsgs++] = { fr, m, (WPARAM)wp, (LPARAM)lp, ph };
        } else if (line[0] == 'C' || line[0] == 'K') {
            long call; long x, y;
            if (sscanf(line + 2, "%ld %ld %ld", &call, &x, &y) == 3) g_rep_cursor[g_rep_ncursor++] = { call, x, y, ph };
        } else if (line[0] == 'S') {
            sscanf(line + 2, "%ld %ld", &g_rep_mouse0[0], &g_rep_mouse0[1]);
        } else if (line[0] == 'F' || line[0] == 'G') {
            RecFail& x = g_rep_fails[g_rep_nfails];
            x.phase = line[0] == 'G' ? 1 : 0;
            unsigned long hr;
            if (sscanf(line + 2, "%d %ld %lx", &x.dev, &x.call, &hr) == 3) { x.hr = (HRESULT)hr; ++g_rep_nfails; }
        } else if (line[0] == 'D' || line[0] == 'E') {
            RecState& s = g_rep_states[g_rep_nstates];
            s.phase = ph;
            int n = 0;
            char hex[1100] = "";
            if (sscanf(line + 2, "%d %ld %lu %1099s%n", &s.dev, &s.call, &s.size, hex, &n) >= 4 && s.size <= sizeof s.data) {
                for (DWORD k = 0; k < s.size && hex[2 * k] && hex[2 * k + 1]; ++k) {
                    unsigned v; sscanf(hex + 2 * k, "%2x", &v); s.data[k] = (unsigned char)v;
                }
                ++g_rep_nstates;
            }
        }
    }
    fclose(f);
    bea_log("replay: %s: %ld messages, %ld cursor reads, %ld device states, %ld failed reads%s", path, g_rep_nmsgs, g_rep_ncursor,
            g_rep_nstates, g_rep_nfails, g_rep_v2 ? " (indexed from play start)" : "");
}

// called from Present on the game thread right after the frame count moved
// on: the messages the recording saw dispatched in this frame are posted now
// and dispatched by the game's next pump, as they were then
// A replay line with message REPLAY_RESIZE (WM_APP + 0xbea, never a real
// message) resizes the game window's client area to wp x lp, as a person
// dragging its frame would (tools/menu_test.py `resize W H`)
const UINT REPLAY_RESIZE = 0x8bea;

// BEA_TAPE_OUT=<file> (with BEA_REPLAY): the input a replay gives the game, written as an
// onslaught-ce tape ("# onslaught tape 2": K keys, W window mouse, M DirectInput mouse per
// frame), so the same playthrough can be replayed in that port (2026-11-06).  Frame F is the
// F-th Present; a frame's window messages are posted at Present F, and the mouse reads made
// while the game builds the next frame are frame F's M line, as in that port's replay.cpp.
FILE* g_tape = nullptr;
long g_tape_dx = 0, g_tape_dy = 0, g_tape_wheel = 0;
int g_tape_buttons = 0, g_tape_last_buttons = 0;
bool g_tape_moved = false;
int g_tape_reads = 0, g_tape_split_logs = 0;      // this frame's reads with motion; frames logged
// each mouse read of the frame (motion, wheel, buttons), for its R lines
struct TapeRead { long dx, dy, dz; int buttons; };
TapeRead g_tape_frame_reads[16];
int g_tape_nreads = 0;

void tape_open()
{
    static bool tried = false;
    if (tried) return;
    tried = true;
    char p[MAX_PATH];
    if (!GetEnvironmentVariableA("BEA_TAPE_OUT", p, sizeof p)) return;
    if (!(g_tape = fopen(p, "w"))) { bea_log("tape: cannot write %s", p); return; }
    // windowed test runs always draw a 640x480 back buffer
    fprintf(g_tape, "# onslaught tape 2\n# written by the original game's replay harness (BEA_TAPE_OUT)\nW_CLIENT 640 480\n");
    bea_log("tape: writing %s", p);
}

void tape_msg(UINT msg, WPARAM wp, LPARAM lp)
{
    if (!g_tape) return;
    long f = g_fixed_frames;
    const char* kind = nullptr;
    switch (msg) {
    case WM_KEYDOWN: case WM_SYSKEYDOWN:
        fprintf(g_tape, "K %ld down %x %x\n", f, (unsigned)wp, (unsigned)((lp >> 16) & 0xff)); return;
    case WM_KEYUP: case WM_SYSKEYUP:
        fprintf(g_tape, "K %ld up %x %x\n", f, (unsigned)wp, (unsigned)((lp >> 16) & 0xff)); return;
    case WM_MOUSEMOVE: kind = "move"; break;
    case WM_LBUTTONDOWN: case WM_LBUTTONDBLCLK: kind = "ldown"; break;
    case WM_LBUTTONUP: kind = "lup"; break;
    case WM_RBUTTONDOWN: case WM_RBUTTONDBLCLK: kind = "rdown"; break;
    case WM_RBUTTONUP: kind = "rup"; break;
    case WM_MBUTTONDOWN: kind = "mdown"; break;
    case WM_MBUTTONUP: kind = "mup"; break;
    case WM_MOUSEWHEEL: kind = "wheel"; break;
    default: return;
    }
    fprintf(g_tape, "W %ld %s %d %d %lx\n", f, kind, (int)(short)LOWORD(lp), (int)(short)HIWORD(lp), (unsigned long)wp);
}

// a DirectInput mouse state the replay returned (DIMOUSESTATE / DIMOUSESTATE2)
void tape_mouse(DWORD size, const void* data)
{
    if (!g_tape || (size != 16 && size != 20)) return;
    const LONG* v = static_cast<const LONG*>(data);
    const unsigned char* b = static_cast<const unsigned char*>(data) + 12;
    g_tape_dx += v[0]; g_tape_dy += v[1]; g_tape_wheel += v[2];
    if (v[0] || v[1] || v[2]) ++g_tape_reads;
    g_tape_buttons = ((b[0] & 0x80) ? 1 : 0) | ((b[1] & 0x80) ? 2 : 0) | ((b[2] & 0x80) ? 4 : 0);
    if (g_tape_nreads < 16) g_tape_frame_reads[g_tape_nreads++] = { v[0], v[1], v[2], g_tape_buttons };
    g_tape_moved = true;
}

// at Present F+1: frame F's mouse line, when it moved or a button changed
void tape_frame(long frame)
{
    if (!g_tape) return;
    if (g_tape_moved && (g_tape_dx || g_tape_dy || g_tape_wheel || g_tape_buttons != g_tape_last_buttons)) {
        fprintf(g_tape, "M %ld %ld %ld %ld %d\n", frame, g_tape_dx, g_tape_dy, g_tape_wheel, g_tape_buttons);
        g_tape_last_buttons = g_tape_buttons;
    }
    // the port gives a frame's motion to its first read: a frame whose motion came in several
    // reads here is not the same input there
    if (g_tape_reads > 1 && g_tape_split_logs++ < 40)
        bea_log("tape: frame %ld: motion in %d mouse reads, summed (%ld %ld)", frame, g_tape_reads, g_tape_dx, g_tape_dy);
    // R lines: when a read after the frame's first had motion or changed the buttons, the M
    // line's sum given to the first read is not what the game read, so each read of the
    // frame gets its own line, in order (a reader that does not know them ignores them)
    bool split = false;
    for (int k = 1; k < g_tape_nreads; ++k)
        if (g_tape_frame_reads[k].dx || g_tape_frame_reads[k].dy || g_tape_frame_reads[k].dz ||
            g_tape_frame_reads[k].buttons != g_tape_frame_reads[k - 1].buttons) split = true;
    if (split)
        for (int k = 0; k < g_tape_nreads; ++k)
            fprintf(g_tape, "R %ld %ld %ld %ld %d\n", frame, g_tape_frame_reads[k].dx, g_tape_frame_reads[k].dy,
                    g_tape_frame_reads[k].dz, g_tape_frame_reads[k].buttons);
    g_tape_reads = 0;
    g_tape_nreads = 0;
    g_tape_dx = g_tape_dy = g_tape_wheel = 0;
    g_tape_moved = false;
    if ((frame & 63) == 0) fflush(g_tape);
}

// BEA_PROBES=<file>: onslaught-ce's state probes (replay.cpp Probe: `P <frame> <NAME> <hex>`)
// every BEA_PROBE_EVERY (50) Presents, read from the original: EVT/EVN the event manager
// (0x672fc8: time +8, events processed +0xc), FT/SC/LVL the game (0x8a9a98 +0x398, +0xf4,
// +0x2a0), RNG its generator (+0x304, 8 bytes), POS/LIFE the player's Battle Engine (+0x1c,
// +0xf8).  A missing object gives zero bytes, as theirs does.
FILE* g_probes = nullptr;
long g_probe_every = 50;

void probe_hex(long frame, const char* name, const void* p, size_t n)
{
    static const unsigned char zero[16] = {};
    if (!p || IsBadReadPtr(p, n)) p = zero;
    fprintf(g_probes, "P %ld %s ", frame, name);
    for (size_t i = 0; i < n; ++i) fprintf(g_probes, "%02x", static_cast<const unsigned char*>(p)[i]);
    fputc('\n', g_probes);
}

extern "C" void bea_aim_flush();       // BEA_AIMTRACE's records, written at each Present
void probes_frame(long frame)
{
    bea_aim_flush();
    static bool tried = false;
    if (!tried) {
        tried = true;
        char p[MAX_PATH], e[16];
        if (GetEnvironmentVariableA("BEA_PROBES", p, sizeof p)) {
            if (!(g_probes = fopen(p, "w"))) bea_log("probes: cannot write %s", p);
            if (GetEnvironmentVariableA("BEA_PROBE_EVERY", e, sizeof e) && atol(e) > 0) g_probe_every = atol(e);
            if (g_probes) bea_log("probes: writing %s every %ld frames", p, g_probe_every);
        }
    }
    if (!g_probes) return;
    {
        // ELD: END_LEVEL_DATA (0x6728f8, 0x5cc bytes; CGame::FillOutEndLevelData fills it as the
        // level closes) at the first probe and whenever it changes, as theirs
        static unsigned char last[0x5cc];
        static bool seen = false;
        const void* eld = reinterpret_cast<const void*>(0x006728f8);
        if (!seen || memcmp(last, eld, sizeof last)) {
            memcpy(last, eld, sizeof last);
            seen = true;
            probe_hex(frame, "ELD", last, sizeof last);
            fflush(g_probes);
        }
    }
    if (frame % g_probe_every) return;
    const char* em = reinterpret_cast<const char*>(0x00672fc8);
    const char* game = reinterpret_cast<const char*>(0x008a9a98);
    probe_hex(frame, "EVT", em + 0x8, 4);
    probe_hex(frame, "EVN", em + 0xc, 4);
    probe_hex(frame, "FT", game + 0x398, 4);
    probe_hex(frame, "SC", game + 0xf4, 4);
    probe_hex(frame, "LVL", game + 0x2a0, 4);
    probe_hex(frame, "RFN", game + 0x14, 4);       // CGame::mRenderFrameNumber (not in the port's probe set)
    if (getenv("BEA_PROBE_FRC"))                   // CGame +0x388..+0x3b4: render frame length .. mFraction2
        probe_hex(frame, "FRC", game + 0x388, 44);
    const char* rng = *reinterpret_cast<const char* const*>(game + 0x304);
    probe_hex(frame, "RNG", rng, 8);
    const char* player = *reinterpret_cast<const char* const*>(game + 0x2a4);
    const char* be = player && !IsBadReadPtr(player + 0x1c, 4) ? *reinterpret_cast<const char* const*>(player + 0x1c) : nullptr;
    probe_hex(frame, "POS", be ? be + 0x1c : nullptr, 12);
    probe_hex(frame, "LIFE", be ? be + 0xf8 : nullptr, 8);
    // BEA_PROBE_OBJECTS=1: BEO/BEW/BEJ, the whole Battle Engine (0x63c bytes) and its walker
    // (+0x578, 0x4c bytes) and jet (+0x57c, 0x54 bytes) parts, as their BEA_PORT_PROBE_OBJECTS
    static int objects = -1;
    if (objects < 0) { char e[8]; objects = GetEnvironmentVariableA("BEA_PROBE_OBJECTS", e, sizeof e) && e[0] == '1'; }
    if (objects && be && !IsBadReadPtr(be, 0x63c)) {
        probe_hex(frame, "BEO", be, 0x63c);
        if (const char* walker = *reinterpret_cast<const char* const*>(be + 0x578)) probe_hex(frame, "BEW", walker, 0x4c);
        if (const char* jet = *reinterpret_cast<const char* const*>(be + 0x57c)) probe_hex(frame, "BEJ", jet, 0x54);
    }
    fflush(g_probes);
}

void replay_post(const RecMsg& m)
{
    if (!g_game_hwnd) return;
    if (m.msg != REPLAY_RESIZE) { tape_msg(m.msg, m.wp, m.lp); PostMessageA(g_game_hwnd, m.msg, m.wp, m.lp); return; }
    RECT r = { 0, 0, (LONG)m.wp, (LONG)m.lp };
    AdjustWindowRectEx(&r, (DWORD)GetWindowLongA(g_game_hwnd, GWL_STYLE), GetMenu(g_game_hwnd) != nullptr,
                       (DWORD)GetWindowLongA(g_game_hwnd, GWL_EXSTYLE));
    SetWindowPos(g_game_hwnd, nullptr, 0, 0, r.right - r.left, r.bottom - r.top, SWP_NOMOVE | SWP_NOZORDER | SWP_NOACTIVATE);
    RECT cr;
    GetClientRect(g_game_hwnd, &cr);
    bea_log("replay: window resized to client %ldx%ld (asked %lux%lu)", cr.right - cr.left, cr.bottom - cr.top,
            (unsigned long)m.wp, (unsigned long)m.lp);
}

void replay_frame(long frame)
{
    // phase 0 (and every line of a version-1 file): frames since the process started
    while (g_rep_next < g_rep_nmsgs && (g_rep_msgs[g_rep_next].phase == 1 || g_rep_msgs[g_rep_next].frame <= frame)) {
        const RecMsg& m = g_rep_msgs[g_rep_next++];
        if (m.phase == 0) replay_post(m);
    }
    // phase 1: frames since play started
    if (g_play0 < 0) return;
    while (g_rep_next1 < g_rep_nmsgs && (g_rep_msgs[g_rep_next1].phase == 0 || g_rep_msgs[g_rep_next1].frame <= frame - g_play0)) {
        const RecMsg& m = g_rep_msgs[g_rep_next1++];
        if (m.phase == 1) replay_post(m);
    }
}

// BEA_TAPE_IN=<file> (with the fixed clock): an onslaught-ce tape replayed in the original
// the way that port's replay.cpp replays it, so the two get the same input (2026-11-06:
// replayed from its recording, 110r's frame 269 had its mouse motion in two reads; the port
// gives a frame's motion to its first read, and parted from the original at frame 270).
// At Present F the tape's frame-F lines go out: K as WM_KEYDOWN/UP with lParam 1 | scan << 16
// (a key-up also 0xC0000000), W as its window message at the point, which GetCursorPos then
// answers (client pixels), M's motion added up for the next DirectInput mouse read, which
// takes all of it (later reads see none), buttons as a level.  C lines are left out, as the
// retail replay shim leaves them out.  BEA_REPLAY is not read with it.
// R lines (written by BEA_TAPE_OUT, not part of that port's format): a frame's mouse reads one
// by one; a frame that has them gives its k-th read the k-th line, and its M line is not used.
struct TapeEv { long frame; char kind; UINT msg; WPARAM wp; LPARAM lp; long dx, dy, dz; int buttons; };
TapeEv* g_tin = nullptr;
long g_tin_n = 0, g_tin_next = 0;
bool g_tapein = false;
long g_tin_dx = 0, g_tin_dy = 0, g_tin_dz = 0;
int g_tin_buttons = 0;
POINT g_tin_cursor = { 0, 0 };
TapeEv g_tin_reads[16];
int g_tin_nreads = 0, g_tin_read = 0;
long g_tin_rframes = 0;

void load_tape_in(const char* path)
{
    FILE* f = fopen(path, "r");
    if (!f) { bea_log("tape in: cannot open %s", path); return; }
    long n = 0, skipped = 0;
    char line[512];
    while (fgets(line, sizeof line, f)) ++n;
    g_tin = static_cast<TapeEv*>(calloc(n + 1, sizeof(TapeEv)));
    rewind(f);
    static const struct { const char* name; UINT msg; } kinds[] = {
        { "move", WM_MOUSEMOVE }, { "ldown", WM_LBUTTONDOWN }, { "lup", WM_LBUTTONUP }, { "rdown", WM_RBUTTONDOWN },
        { "rup", WM_RBUTTONUP }, { "mdown", WM_MBUTTONDOWN }, { "mup", WM_MBUTTONUP }, { "wheel", WM_MOUSEWHEEL } };
    while (fgets(line, sizeof line, f)) {
        TapeEv e = {};
        char word[16];
        unsigned a, b;
        int x, y;
        if (line[0] == 'K' && sscanf(line, "K %ld %15s %x %x", &e.frame, word, &a, &b) == 4) {
            e.kind = 'K';
            e.msg = strcmp(word, "down") ? WM_KEYUP : WM_KEYDOWN;
            e.wp = a;
            e.lp = 1 | ((LPARAM)(b & 0x1ff) << 16) | (e.msg == WM_KEYUP ? (LPARAM)0xC0000000 : 0);
        } else if (line[0] == 'M' && sscanf(line, "M %ld %ld %ld %ld %d", &e.frame, &e.dx, &e.dy, &e.dz, &e.buttons) == 5) {
            e.kind = 'M';
        } else if (line[0] == 'R' && sscanf(line, "R %ld %ld %ld %ld %d", &e.frame, &e.dx, &e.dy, &e.dz, &e.buttons) == 5) {
            e.kind = 'R';
            if (!g_tin_n || g_tin[g_tin_n - 1].kind != 'R' || g_tin[g_tin_n - 1].frame != e.frame) ++g_tin_rframes;
        } else if (line[0] == 'W' && line[1] == ' ' && sscanf(line, "W %ld %15s %d %d %x", &e.frame, word, &x, &y, &a) == 5) {
            for (const auto& k : kinds) if (!strcmp(word, k.name)) e.msg = k.msg;
            if (!e.msg) { ++skipped; continue; }
            e.kind = 'W';
            e.wp = a;
            e.lp = MAKELPARAM(x, y);
        } else {
            if (line[0] != '#' && strncmp(line, "W_CLIENT", 8)) ++skipped;
            continue;
        }
        g_tin[g_tin_n++] = e;
    }
    fclose(f);
    g_tapein = true;
    bea_log("tape in: %s: %ld events, %ld frames with R lines (%ld other lines left out)", path, g_tin_n, g_tin_rframes, skipped);
}

void tapein_frame(long frame)
{
    bool reads = false;
    for (long k = g_tin_next; k < g_tin_n && g_tin[k].frame <= frame; ++k)
        if (g_tin[k].frame == frame && g_tin[k].kind == 'R') reads = true;
    g_tin_nreads = g_tin_read = 0;
    for (; g_tin_next < g_tin_n && g_tin[g_tin_next].frame <= frame; ++g_tin_next) {
        const TapeEv& e = g_tin[g_tin_next];
        if (e.frame < frame) continue;      // before the first Present seen: not deliverable, as theirs
        if (e.kind == 'R') {
            if (g_tin_nreads < 16) g_tin_reads[g_tin_nreads++] = e;
            continue;
        }
        if (e.kind == 'M' && reads) continue;
        if (e.kind == 'M') {
            g_tin_dx += e.dx; g_tin_dy += e.dy; g_tin_dz += e.dz;
            g_tin_buttons = e.buttons;
            continue;
        }
        if (!g_game_hwnd) continue;
        PostMessageA(g_game_hwnd, e.msg, e.wp, e.lp);
        if (e.kind == 'W' && e.msg != WM_MOUSEWHEEL) g_tin_cursor = POINT{ (short)LOWORD(e.lp), (short)HIWORD(e.lp) };
    }
}

// BEA_RECORD_SCALE=<n>: a person plays in a window n times the game's size;
// the game keeps rendering (and is told it is) 640x480 and Present stretches
// the picture, so a recording replays in the usual small test windows
int g_rec_scale = 1;          // >1: the window is enlarged (0 in BEA_RECORD_SCALE=fit: to the screen)
bool g_rec_fit = false;
long g_bb_w = 640, g_bb_h = 480;   // the game's own client size (its back buffer)
// a client-area point of the enlarged (or user-resized) window in the game's 640x480 terms
void to_game_coords(LONG& x, LONG& y)
{
    RECT cr;
    if (!g_game_hwnd || !GetClientRect(g_game_hwnd, &cr) || cr.right <= 0 || cr.bottom <= 0) return;
    x = x * g_bb_w / cr.right; y = y * g_bb_h / cr.bottom;
}

// The game sizes its mouse mapping with GetClientRect.  In an enlarged
// recording window it saw the large client area while the mouse positions it
// got were already in 640x480 terms, so a playthrough with the in-level menu
// (level 500, 2026-10-27) replayed differently in the 640x480 test windows.
// The game window's client rectangle is reported as the game's own size
// (g_bb_w x g_bb_h) while recording enlarged; a replay of an older recording
// can be given the size it was recorded with (BEA_REPLAY_CLIENT=WxH).
long g_replay_client_w = 0, g_replay_client_h = 0;
// BEA_REPLAY_PACE=1: a replay paced to real time with every frame presented, as it was recorded
bool g_replay_pace = false;
BOOL WINAPI GetClientRect_rec(HWND h, LPRECT r)
{
    BOOL ok = GetClientRect(h, r);
    if (ok && r && h == g_game_hwnd) {
        if (g_recording && g_rec_scale > 1) { r->left = r->top = 0; r->right = g_bb_w; r->bottom = g_bb_h; }
        else if (g_replaying && g_replay_client_w > 0) { r->left = r->top = 0; r->right = g_replay_client_w; r->bottom = g_replay_client_h; }
    }
    return ok;
}

BOOL WINAPI GetCursorPos_rec(LPPOINT p)
{
    if (!p) return FALSE;
    long call = InterlockedIncrement(&g_cursor_calls);
    if (g_tapein) {
        // the tape's point as it is: in the port's replay the window stands at the screen's
        // origin (ScreenToClient is patched to match, ScreenToClient_tape).  ShutdownMouse
        // (0x42d3b0) puts this screen point into the mouse position flight steers by; turned
        // into the test window's screen position, 200r's tape parted from the port by frame 150
        *p = g_tin_cursor;
        return TRUE;
    }
    if (g_replaying) {
        // the recorded position for this read (client coordinates), the last one after the end
        // the newest recorded read of this phase at or before this one (a phase-1 read
        // before any phase-1 line keeps the last phase-0 position)
        int ph = phase_now();
        POINT c = { 320, 240 };
        for (long k = 0; k < g_rep_ncursor; ++k) {
            const RecPoint& q = g_rep_cursor[k];
            if (q.phase < ph || (q.phase == ph && q.call <= call)) c = POINT{ q.x, q.y };
            else if (q.phase > ph) break;
        }
        if (g_game_hwnd) ClientToScreen(g_game_hwnd, &c);
        *p = c;
        stack_scrub();
        return TRUE;
    }
    BOOL r = GetCursorPos(p);
    POINT c = *p;
    if (g_game_hwnd) ScreenToClient(g_game_hwnd, &c);
    if (g_rec_scale > 1) {
        // the window is shown enlarged: the game sees (and the log keeps) 640x480 coordinates
        to_game_coords(c.x, c.y);
        POINT s = c;
        if (g_game_hwnd) ClientToScreen(g_game_hwnd, &s);
        *p = s;
    }
    static LONG lx = -100000, ly = -100000;
    static unsigned long seen_marker = 0;
    if (seen_marker != g_play_marker) { seen_marker = g_play_marker; lx = ly = -100000; }
    if (g_rec && (c.x != lx || c.y != ly)) {
        fprintf(g_rec, "%c %ld %ld %ld\n", phase_now() ? 'K' : 'C', call, (long)c.x, (long)c.y); lx = c.x; ly = c.y;
    }
    stack_scrub();
    return r;
}

// BEA_TAPE_IN: the game's ScreenToClient leaves the point as it is, as the port's does while it
// replays a tape (the window at the screen's origin)
BOOL WINAPI ScreenToClient_tape(HWND, LPPOINT p) { return p != nullptr; }

// DirectInput: IDirectInput8::CreateDevice (slot 3) is hooked to find the
// devices, IDirectInputDevice8::GetDeviceState (slot 9) to record or replay
typedef HRESULT (WINAPI *GetDeviceState_t)(void*, DWORD, void*);
typedef HRESULT (WINAPI *CreateDevice8_t)(void*, const GUID&, void**, void*);
typedef HRESULT (WINAPI *DirectInput8Create_t)(HINSTANCE, DWORD, const GUID&, void**, void*);
GetDeviceState_t g_GetDeviceState_orig = nullptr;
CreateDevice8_t g_CreateDevice8_orig = nullptr;
DirectInput8Create_t g_DirectInput8Create_orig = nullptr;
// g_devices: every device object created; g_dev_logical: its logical number,
// shared by devices of the same kind (GUID).  Level 500 creates the mouse a
// second time near play frame 500 from another thread, and which object the
// game goes on reading was a race: in one replay of the same recording it
// switched to the new one, which then got none of the recorded states
// (2026-10-27).  Counting by kind makes the reads line up either way.
void* g_devices[8]; int g_ndevices = 0;
int g_dev_logical[8]; GUID g_dev_guid[8]; int g_nlogical = 0;
long g_dev_calls[8];
unsigned char g_dev_last[8][0x200];
DWORD g_dev_lastsize[8];

// play has started (game state 3, seen in Present): phase-1 counters start from zero
// The mouse position the game accumulates from DirectInput (0x42d4d0: x 0x89bda8,
// y 0x89bda4), at the start of play.  Mouse movement during loading adds to it,
// and loading takes a different number of frames in a recording and in its replay
// (level 800: 120 and 132), so it starts elsewhere unless set; flight steers by
// its distance from the screen centre (0x407540), and the level-800 and 522 wins
// of 2026-10-29 parted from their replays within 10 frames.  A recording keeps it
// in an "S x y" line; BEA_MOUSE0=x,y sets it for a recording made before that.
void play_started(long frame)
{
    g_play0 = frame;
    volatile long* mouse = reinterpret_cast<volatile long*>(0x0089bda4);   // [0] y, [1] x
    if (g_rec) fprintf(g_rec, "S %ld %ld\n", mouse[1], mouse[0]);
    if (g_replaying) {
        char mb[32];
        if (GetEnvironmentVariableA("BEA_MOUSE0", mb, sizeof mb)) sscanf(mb, "%ld,%ld", &g_rep_mouse0[0], &g_rep_mouse0[1]);
        if (g_rep_mouse0[0] >= 0) {
            bea_log("replay: mouse position at the start of play %ld %ld (was %ld %ld)", g_rep_mouse0[0], g_rep_mouse0[1], mouse[1], mouse[0]);
            mouse[1] = g_rep_mouse0[0];
            mouse[0] = g_rep_mouse0[1];
        }
    }
    // the players' invert-Y switches (walker 0x662ab8+4p, jet 0x662ac0+4p; the pause
    // menu's toggles 0x456080, read by 0x4d3110 and 0x407540): a replay must start
    // with the ones its recording had
    volatile int* inv = reinterpret_cast<volatile int*>(0x00662ab8);
    // BEA_INVERT="a b c d": the switches the recording started with (its log's line);
    // a recording made with a person's saved options had player 2's set (2026-11-01)
    char ib[32];
    int iv[4];
    if (g_replaying && GetEnvironmentVariableA("BEA_INVERT", ib, sizeof ib) &&
        sscanf(ib, "%d %d %d %d", &iv[0], &iv[1], &iv[2], &iv[3]) == 4) {
        for (int i = 0; i < 4; ++i) inv[i] = iv[i];
        bea_log("replay: invert switches set from the recording");
    }
    bea_log("controls: invert walker %d %d jet %d %d", inv[0], inv[1], inv[2], inv[3]);
    if (!(g_recording || g_rep_v2)) return;          // a version-1 replay keeps counting from the start
    g_cursor_calls = 0;
    for (long& c : g_dev_calls) c = 0;
    for (DWORD& n : g_dev_lastsize) n = 0;           // a recording logs every device's next state
    ++g_play_marker;
    if (g_rec) fprintf(g_rec, "P %ld\n", frame);
}

HRESULT WINAPI GetDeviceState_hook(void* dev, DWORD size, void* data)
{
    int d = 0;
    while (d < g_ndevices && g_devices[d] != dev) ++d;
    if (d == g_ndevices) return g_GetDeviceState_orig(dev, size, data);
    d = g_dev_logical[d];
    long call = ++g_dev_calls[d];
    if (g_tapein) {
        memset(data, 0, size);
        if (size == 16 || size == 20) {             // DIMOUSESTATE / DIMOUSESTATE2
            LONG* v = static_cast<LONG*>(data);
            unsigned char* b = static_cast<unsigned char*>(data) + 12;
            if (g_tin_read < g_tin_nreads) {
                const TapeEv& r = g_tin_reads[g_tin_read++];
                g_tin_dx += r.dx; g_tin_dy += r.dy; g_tin_dz += r.dz;
                g_tin_buttons = r.buttons;
            }
            v[0] = g_tin_dx; v[1] = g_tin_dy; v[2] = g_tin_dz;
            b[0] = (g_tin_buttons & 1) ? 0x80 : 0; b[1] = (g_tin_buttons & 2) ? 0x80 : 0; b[2] = (g_tin_buttons & 4) ? 0x80 : 0;
            g_tin_dx = g_tin_dy = g_tin_dz = 0;
        }
        return S_OK;
    }
    // Before play (loading and the level's opening seconds) the game is given no
    // DirectInput input, while recording and in a replay of such a recording.  Mouse
    // movement then reached play through the game's mouse position and the Battle
    // Engine's heading (level 800 starts in flight, steered during its opening
    // seconds), and loading takes a different number of frames, and so of reads, in
    // a recording and in its replay: the level-800 and 522 wins of 2026-10-29 parted
    // from their replays within 10 frames.
    if ((g_recording || (g_replaying && g_rep_v3)) && g_play0 < 0) {
        if (g_recording) g_GetDeviceState_orig(dev, size, data);
        memset(data, 0, size);
        stack_scrub();
        return S_OK;
    }
    if (g_replaying) {
        // the newest recorded state of this device at or before this read (in this
        // phase; a phase-1 read before any phase-1 state keeps the last phase-0 one)
        memset(data, 0, size);
        int ph = phase_now();
        for (long k = 0; k < g_rep_nfails; ++k) {
            const RecFail& x = g_rep_fails[k];
            if (x.dev == d && x.call == call && x.phase == ph) { stack_scrub(); return x.hr; }
        }
        for (long k = 0; k < g_rep_nstates; ++k) {
            const RecState& s = g_rep_states[k];
            if (s.dev != d) continue;
            if (s.phase < ph || (s.phase == ph && s.call <= call)) memcpy(data, s.data, s.size < size ? s.size : size);
            else if (s.phase > ph) break;
        }
        tape_mouse(size, data);
        stack_scrub();
        return S_OK;
    }
    HRESULT hr = g_GetDeviceState_orig(dev, size, data);
    if (g_rec && FAILED(hr))
        fprintf(g_rec, "%c %d %ld %lx\n", phase_now() ? 'G' : 'F', d, call, (unsigned long)hr);
    if (g_rec && SUCCEEDED(hr) && size <= 0x200 && (size != g_dev_lastsize[d] || memcmp(data, g_dev_last[d], size))) {
        fprintf(g_rec, "%c %d %ld %lu ", phase_now() ? 'E' : 'D', d, call, (unsigned long)size);
        for (DWORD k = 0; k < size; ++k) fprintf(g_rec, "%02x", static_cast<unsigned char*>(data)[k]);
        fputc('\n', g_rec);
        memcpy(g_dev_last[d], data, size); g_dev_lastsize[d] = size;
    }
    stack_scrub();
    return hr;
}

HRESULT WINAPI CreateDevice8_hook(void* di, const GUID& g, void** out, void* outer)
{
    HRESULT hr = g_CreateDevice8_orig(di, g, out, outer);
    if (SUCCEEDED(hr) && out && *out && g_ndevices < 8) {
        int lg = 0;
        while (lg < g_ndevices && memcmp(&g_dev_guid[lg], &g, sizeof(GUID)) != 0) ++lg;
        g_dev_guid[g_ndevices] = g;
        g_dev_logical[g_ndevices] = lg < g_ndevices ? g_dev_logical[lg] : g_nlogical++;
        g_devices[g_ndevices++] = *out;
        if (!g_GetDeviceState_orig) {
            void* gds = (*reinterpret_cast<void***>(*out))[9];
            if (MH_CreateHook(gds, reinterpret_cast<void*>(&GetDeviceState_hook), reinterpret_cast<void**>(&g_GetDeviceState_orig)) == MH_OK)
                MH_EnableHook(gds);
        }
        bea_log("input: DirectInput device %d created (logical device %d)", g_ndevices - 1, g_dev_logical[g_ndevices - 1]);
    }
    return hr;
}

HRESULT WINAPI DirectInput8Create_hook(HINSTANCE inst, DWORD ver, const GUID& iid, void** out, void* outer)
{
    HRESULT hr = g_DirectInput8Create_orig(inst, ver, iid, out, outer);
    if (SUCCEEDED(hr) && out && *out && !g_CreateDevice8_orig) {
        void* cd = (*reinterpret_cast<void***>(*out))[3];
        if (MH_CreateHook(cd, reinterpret_cast<void*>(&CreateDevice8_hook), reinterpret_cast<void**>(&g_CreateDevice8_orig)) == MH_OK)
            MH_EnableHook(cd);
    }
    return hr;
}

typedef HWND (WINAPI *CreateWindowExA_t)(DWORD, LPCSTR, LPCSTR, DWORD, int, int, int, int, HWND, HMENU, HINSTANCE, LPVOID);
CreateWindowExA_t g_CreateWindowExA_orig = nullptr;

// With the screen off the test game slowed to ~22 fps or stopped outright,
// waiting in its message pump (0x512630) as an inactive app (2026-10-19; the
// level 100 "HUNG (no frames)" had the same stack): CD3DApplication's window
// procedure clears its active flag (+0x32e48) on WM_SIZE SIZE_MINIMIZED or
// SIZE_MAXHIDE.  Subclass the game window: log the window-state messages and
// keep the minimise kinds of WM_SIZE from the game.
WNDPROC g_game_wndproc = nullptr;
LRESULT CALLBACK harness_wndproc(HWND h, UINT msg, WPARAM wp, LPARAM lp)
{
    switch (msg) {
    case WM_SIZE:
        if (wp == SIZE_MINIMIZED || wp == SIZE_MAXHIDE) {
            bea_log("harness: WM_SIZE %u swallowed (the game would stop as inactive)", (unsigned)wp);
            return 0;
        }
        break;
    case WM_ACTIVATEAPP: case WM_ACTIVATE: case WM_DISPLAYCHANGE: case WM_POWERBROADCAST:
    case WM_SHOWWINDOW: case WM_SYSCOMMAND:
        bea_log("harness: msg %04x wp=%08lx lp=%08lx", msg, (unsigned long)wp, (unsigned long)lp);
        break;
    }
    if (g_rec_scale > 1) {
        // the enlarged window: the game must not see its size change (its D3D
        // framework would reset the device at the new size) and gets mouse
        // positions in 640x480 terms
        if (msg == WM_SIZE || msg == WM_EXITSIZEMOVE) return 0;
        if (msg >= WM_MOUSEMOVE && msg <= WM_MBUTTONDBLCLK && msg != WM_MOUSEWHEEL)
            { LONG x = (short)LOWORD(lp), y = (short)HIWORD(lp); to_game_coords(x, y); lp = MAKELPARAM(x, y); }
    }
    if (g_rec && is_input_msg(msg))
        fprintf(g_rec, "%c %ld %x %lx %lx\n", phase_now() ? 'N' : 'M', (long)(phase_now() ? g_fixed_frames - g_play0 : g_fixed_frames),
                msg, (unsigned long)wp, (unsigned long)lp);
    return CallWindowProcA(g_game_wndproc, h, msg, wp, lp);
}

// The game creates its window with WS_VISIBLE, which activates it; create it
// hidden and show it without activation instead.
HWND WINAPI CreateWindowExA_hook(DWORD ex, LPCSTR cls, LPCSTR name, DWORD style, int x, int y, int w, int h,
                                 HWND parent, HMENU menu, HINSTANCE inst, LPVOID param)
{
    bool visible = (style & WS_VISIBLE) && !(style & WS_CHILD) && !g_recording;
    HWND hwnd = g_CreateWindowExA_orig(ex & ~WS_EX_TOPMOST, cls, name, visible ? (style & ~WS_VISIBLE) : style,
                                       x, y, w, h, parent, menu, inst, param);
    if (hwnd && visible) ShowWindow_hook(hwnd, SW_SHOWNOACTIVATE);
    if (hwnd && !parent && !(style & WS_CHILD) && !g_game_hwnd) {
        g_game_hwnd = hwnd;
        g_game_wndproc = reinterpret_cast<WNDPROC>(
            SetWindowLongPtrA(hwnd, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(&harness_wndproc)));
        bea_log("harness: game window %p class '%s' subclassed", (void*)hwnd,
                (reinterpret_cast<uintptr_t>(cls) >> 16) ? cls : "(atom)");
    }
    return hwnd;
}
BOOL WINAPI SetWindowPos_hook(HWND h, HWND after, int x, int y, int cx, int cy, UINT flags)
{
    flags |= SWP_NOACTIVATE;
    if (after == HWND_TOP || after == HWND_TOPMOST) flags |= SWP_NOZORDER;
    return g_SetWindowPos_orig(h, after, x, y, cx, cy, flags);
}
HWND WINAPI SetActiveWindow_hook(HWND) { return GetActiveWindow(); }

// The fatal-error path (0x42cfa0 -> CRT message box) waits for OK before it
// exits, so a port that fails that way held the test run open until the soak
// timer killed it, with the box on my screen.  Log the text and answer
// as if OK had been clicked; the game then exits (logged by the exit logger).
typedef int (WINAPI *MessageBoxA_t)(HWND, LPCSTR, LPCSTR, UINT);
MessageBoxA_t g_MessageBoxA_orig = nullptr;
// Fixed-step clock (BEA_FIXEDSTEP=<seconds per frame>, smoke_test.ps1
// -FixedStep): the game's QueryPerformanceCounter and timeGetTime imports
// are redirected to a clock that advances a fixed amount per presented frame,
// so a run's simulation does not depend on frame rate or on what else the
// machine is doing.  Without it level 211 with the ports ended three
// different ways in three runs (2026-10-20), and no A/B against the original
// could be trusted.  Each read also adds 0.1 us, so a wait on the clock inside
// one frame still ends; the count of reads is itself deterministic.  The
// DLL's own clock ports (time.cpp, fpstimer.cpp) read through bea_qpc /
// bea_timeGetTime below.  GetTickCount is left alone: only the harness uses it.
volatile long g_fixed_calls = 0;
LONGLONG g_real_freq = 1;

// BEA_FPSCLOCK=1 also counts each thread's reads apart: the shared count took the sound and
// streaming threads' real-time polls into the main thread's clock (2026-11-05, 1/30 s step)
static int g_own_counts = -1;
static thread_local long t_fixed_calls = 0;
long double fixed_seconds()
{
    if (g_own_counts < 0) {
        char b[16];
        g_own_counts = GetEnvironmentVariableA("BEA_FPSCLOCK", b, sizeof b) && b[0] == '1';
    }
    long c = g_own_counts ? ++t_fixed_calls : InterlockedIncrement(&g_fixed_calls);
    return (long double)g_fixed_frames * (long double)g_fixed_step + (long double)c * 1e-7L;
}

// BEA_CECLOCK=1 (with BEA_FIXEDSTEP): onslaught-ce's replay clock (its BEA_PORT_CLOCK=present,
// port/platform/common/clock.cpp there) in place of the one above, so the original and the port
// see the same times from one tape (2026-11-06: under the clock above, 110r's tape in the port
// parted from the original at frame 300, the frame time 0.8001 against 0.8000 from frame 50).
// 1,000 s plus the step in whole nanoseconds per Present, a 1 GHz counter; between Presents only
// the main thread (the first to read it) moves it: 1 ms every 4,096 of its reads since the last
// Present, and the milliseconds of its Sleep calls.  The file time runs from 2003-03-14 12:00 UTC.
static bool g_ceclock = false;
static unsigned long long g_ce_dtns = 0;
static volatile LONG64 g_ce_esc_ms = 0;
static volatile LONG g_ce_main = 0;
static thread_local unsigned t_ce_reads = 0;
static bool ce_main()
{
    InterlockedCompareExchange(&g_ce_main, (LONG)GetCurrentThreadId(), 0);
    return g_ce_main == (LONG)GetCurrentThreadId();
}
static unsigned long long ce_ns()
{
    if (ce_main() && ++t_ce_reads % 4096 == 0) InterlockedIncrement64(&g_ce_esc_ms);
    return 1000000000000ull + (unsigned long long)g_fixed_frames * g_ce_dtns + (unsigned long long)g_ce_esc_ms * 1000000ull;
}
static BOOL WINAPI QPF_ce(LARGE_INTEGER* out) { out->QuadPart = 1000000000ll; return TRUE; }
static void WINAPI Sleep_ce(DWORD ms)
{
    if (ce_main()) InterlockedExchangeAdd64(&g_ce_esc_ms, ms);
    Sleep(ms);
}
static void WINAPI GetSystemTimeAsFileTime_ce(LPFILETIME ft)
{
    unsigned long long t = 126921456000000000ull + (ce_ns() - 1000000000000ull) / 100;
    ft->dwLowDateTime = (DWORD)t;
    ft->dwHighDateTime = (DWORD)(t >> 32);
}

BOOL WINAPI QPC_fixed(LARGE_INTEGER* out)
{
    if (g_ceclock) { out->QuadPart = (LONGLONG)ce_ns(); return TRUE; }
    // never 0: the game spins while the counter reads 0 (fpstimer.cpp)
    out->QuadPart = (LONGLONG)(fixed_seconds() * (long double)g_real_freq) + g_real_freq;
    return TRUE;
}
DWORD WINAPI timeGetTime_fixed()
{
    if (g_ceclock) return (DWORD)(ce_ns() / 1000000ull);
    return (DWORD)(fixed_seconds() * 1000.0L) + 1000;
}

// Replace one named import in BEA.exe's import address table.
bool patch_import(const char* name, void* repl)
{
    auto base = reinterpret_cast<uint8_t*>(GetModuleHandleA(nullptr));
    auto dos = reinterpret_cast<IMAGE_DOS_HEADER*>(base);
    auto nt = reinterpret_cast<IMAGE_NT_HEADERS*>(base + dos->e_lfanew);
    auto& dir = nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT];
    for (auto imp = reinterpret_cast<IMAGE_IMPORT_DESCRIPTOR*>(base + dir.VirtualAddress); imp->Name; ++imp) {
        if (!imp->OriginalFirstThunk) continue;
        auto thunk = reinterpret_cast<IMAGE_THUNK_DATA*>(base + imp->FirstThunk);
        auto orig = reinterpret_cast<IMAGE_THUNK_DATA*>(base + imp->OriginalFirstThunk);
        for (; orig->u1.AddressOfData; ++orig, ++thunk) {
            if (orig->u1.Ordinal & IMAGE_ORDINAL_FLAG) continue;
            auto byname = reinterpret_cast<IMAGE_IMPORT_BY_NAME*>(base + orig->u1.AddressOfData);
            if (strcmp(reinterpret_cast<const char*>(byname->Name), name) != 0) continue;
            DWORD old;
            VirtualProtect(&thunk->u1.Function, sizeof thunk->u1.Function, PAGE_READWRITE, &old);
            thunk->u1.Function = reinterpret_cast<DWORD>(repl);
            VirtualProtect(&thunk->u1.Function, sizeof thunk->u1.Function, old, &old);
            return true;
        }
    }
    return false;
}

// The game reads the absolute cursor (0x42d3b0 into DAT_0089bda4/8, the
// window procedure 0x52aaf0): the pointer's position relative to each
// instance's window is a real-world input, so under the fixed clock it is
// the centre of the game window's client area.
BOOL WINAPI GetCursorPos_fixed(LPPOINT p)
{
    if (!p) return FALSE;
    RECT r;
    if (g_game_hwnd && GetClientRect(g_game_hwnd, &r)) {
        POINT c = { (r.right - r.left) / 2, (r.bottom - r.top) / 2 };
        ClientToScreen(g_game_hwnd, &c);
        *p = c;
    } else {
        p->x = p->y = 0;
    }
    return TRUE;
}

// BEA_CHEAT=1: the player's Battle Engine takes no lasting damage and its
// weapons never run dry or overheat - for recording long boss fights.  Applied
// once per frame (the same frames in the recording and in every replay, and
// the same for the original and the ports, so the comparison stays fair).
// The Battle Engine is the debug readout's (0x4714c0): the object at
// 0x8a9a98, +0x2a4 the player, whose +0x1c is the Battle Engine while +0x20
// is 0.  Health +0xf8 (float; 0x4f99f0 reads it unless +0x178 holds a
// sub-object), energy +0xfc.  Six weapon slots (0x412050, 0x411bf0): type
// +0x55c+4i (0: a pool of ammunition/charge at +0x52c+4i that shots use up;
// otherwise +0x52c+4i is heat rising to its limit, +0x544+4i the overheated
// flag).  Health, energy and pools are held at the highest value seen.
// BEA_GOODIES=<state>: every goodie of the career (CCareer at 0x660620, 300
// states at +0x1f44: 0 unknown, 1 instructions, 2 new, 3 old) is raised to
// that state each frame, so a menu tour can open the goodie viewers (models,
// art, videos, bonus levels) without a career that earned them.  The game's
// own update (0x41c470) only raises states, and a load or a new career that
// resets them is undone at the next frame.
static int g_goodies = -1;
static void goodies_frame()
{
    if (g_goodies < 0) {
        char b[16];
        g_goodies = GetEnvironmentVariableA("BEA_GOODIES", b, sizeof b) ? atoi(b) : 0;
        if (g_goodies) bea_log("harness: BEA_GOODIES - every goodie at state %d", g_goodies);
    }
    if (g_goodies <= 0) return;
    int* st = reinterpret_cast<int*>(0x00660620 + 0x1f44);
    for (int i = 0; i < 300; ++i)
        if (st[i] < g_goodies) st[i] = g_goodies;
}

// BEA_MPMAPS=1: the multiplayer screen's locked maps open (columns 4-6: 861-866);
// BEA_MPMAPS=2: every career node shown completed (the campaign's level select open).
// CFEPMultiplayer (0x51ccb0 picks, 0x51d160 draws) opens them once the career shows
// level 741 or 800 completed: the node (0x660624 + 0x40 i, level at +0x10) has its
// done flag (+4) set; only 0x41bd00 sets it, when a level is won.  Both are set each
// frame.  The title screen's camera (0x462640) also reads them, so a session made
// with this replays only with it.
static int g_mpmaps = -1;
static void mpmaps_frame()
{
    if (g_mpmaps < 0) {
        char b[8];
        g_mpmaps = GetEnvironmentVariableA("BEA_MPMAPS", b, sizeof b) ? atoi(b) : 0;
        if (g_mpmaps == 1) bea_log("harness: BEA_MPMAPS - levels 741 and 800 shown completed (every multiplayer map open)");
        if (g_mpmaps == 2) bea_log("harness: BEA_MPMAPS=2 - every campaign level shown completed (the whole level select open)");
    }
    if (!g_mpmaps) return;
    int n = *reinterpret_cast<volatile int*>(0x00624184);
    for (int i = 0; i < n && i < 64; ++i) {
        int* node = reinterpret_cast<int*>(0x00660624 + 0x40 * i);
        if ((g_mpmaps == 2 || node[4] == 741 || node[4] == 800) && node[1] == 0) node[1] = 1;
    }
}

// BEA_CONSOLE=<game clock>:<command>: the game's console runs the command once the game
// clock reaches that time (0x42b9c0, the per-line runner autoexec.con uses, on the console 0x663498).
// autoexec.con runs too early for BuildLandscapeCache (no landscape yet: the original
// crashes) and BuildStaticShadows (nothing to shadow yet) (2026-11-04)
static double g_console_at = -2;   // -2 not read yet, -1 none or done
static char g_console_cmd[256];
static void console_frame()
{
    if (g_console_at == -2) {
        char b[300];
        g_console_at = -1;
        if (GetEnvironmentVariableA("BEA_CONSOLE", b, sizeof b)) {
            char* colon = strchr(b, ':');
            if (colon) {
                *colon = 0;
                g_console_at = atof(b);
                strncpy(g_console_cmd, colon + 1, sizeof g_console_cmd - 1);
                bea_log("harness: console command \"%s\" at game clock %g (BEA_CONSOLE)", g_console_cmd, g_console_at);
            }
        }
    }
    if (g_console_at < 0 || *reinterpret_cast<volatile float*>(0x00672fd0) < g_console_at) return;
    bea_log("harness: console runs \"%s\" at frame %ld, clock %.3f", g_console_cmd, g_fixed_frames,
            (double)*reinterpret_cast<volatile float*>(0x00672fd0));
    g_console_at = -1;
    typedef void (BEA_THISCALL *exec_line_t)(void* console, const char* line);
    reinterpret_cast<exec_line_t>(0x0042b9c0)(reinterpret_cast<void*>(0x00663498), g_console_cmd);
    bea_log("harness: console command returned");
}

static int g_cheat = -1;           // 0 off, 1 from the start of play, 2 from the first frame the Battle Engine exists
static double g_cheat_clock = 0;  // BEA_CHEAT_CLOCK: "early" starts at this game clock
static void* g_cheat_be = nullptr;
static float g_cheat_max[8];
static void cheat_frame()
{
    if (g_cheat < 0) {
        char b[32];
        g_cheat = 0;
        if (GetEnvironmentVariableA("BEA_CHEAT", b, sizeof b))
            g_cheat = !_stricmp(b, "early") ? 2 : !_stricmp(b, "trace") ? 3 : b[0] == '1';
        if (g_cheat && GetEnvironmentVariableA("BEA_CHEAT_CLOCK", b, sizeof b)) g_cheat_clock = atof(b);
        if (g_cheat) bea_log("harness: BEA_CHEAT - no damage, no ammunition use, no overheating for the player (%s%s)",
                             g_cheat == 2 ? "from the first frame, as recorded before 2026-10-30" : "from the start of play",
                             g_cheat_clock > 0 ? ", from BEA_CHEAT_CLOCK" : "");
    }
    if (!g_cheat) return;
    if (g_cheat == 1 && g_play0 < 0) return;
    if (g_cheat == 2 && *reinterpret_cast<volatile float*>(0x00672fd0) < g_cheat_clock) return;
    uint8_t* player = *reinterpret_cast<uint8_t**>(0x008a9a98 + 0x2a4);
    if (!player || *reinterpret_cast<int*>(player + 0x20) != 0) return;
    uint8_t* be = *reinterpret_cast<uint8_t**>(player + 0x1c);
    if (!be) return;
    if (be != g_cheat_be) {           // a new Battle Engine (level start, respawn): forget the maxima
        g_cheat_be = be;
        for (float& m : g_cheat_max) m = -1e30f;
        bea_log("harness: cheat on Battle Engine %p at frame %ld, clock %.3f, health %g, energy %g", be, g_fixed_frames,
                (double)*reinterpret_cast<volatile float*>(0x00672fd0), (double)*reinterpret_cast<float*>(be + 0xf8),
                (double)*reinterpret_cast<float*>(be + 0xfc));
    }
    float* hp = reinterpret_cast<float*>(be + 0xf8);
    float* en = reinterpret_cast<float*>(be + 0xfc);
    if (g_cheat == 3) {               // BEA_CHEAT=trace: no cheat, the energy of each early frame logged
        if (g_play0 < 0 || g_fixed_frames - g_play0 < 30)
            bea_log("cheat trace: frame %ld clock %.3f energy %.9g", g_fixed_frames, (double)*reinterpret_cast<volatile float*>(0x00672fd0), (double)*en);
        return;
    }
    if (*hp > g_cheat_max[6]) g_cheat_max[6] = *hp; else *hp = g_cheat_max[6];
    if (*en > g_cheat_max[7]) g_cheat_max[7] = *en; else *en = g_cheat_max[7];
    for (int i = 0; i < 6; ++i) {
        float* v = reinterpret_cast<float*>(be + 0x52c + 4 * i);
        if (*reinterpret_cast<int*>(be + 0x55c + 4 * i) == 0) {
            if (*v > g_cheat_max[i]) g_cheat_max[i] = *v; else *v = g_cheat_max[i];
        } else {
            *v = 0.0f;
            *reinterpret_cast<int*>(be + 0x544 + 4 * i) = 0;
        }
    }
}

// BEA_PROTECT=<name>[;<name>...]: units whose "<class>|<type name>|side<n>"
// (e.g. "CBoat|FG-8 Packhorse|side0") contains one of the names (any case;
// "a&b&!c": a and b, not c) take no damage - the game's own switch, the one the
// mission scripts' SetVulnerable sets (CUnit +0x15c: 0x4f9a90 returns before
// any damage while it is 0; CUnit::vslot56/57 set and read it).  A replay of
// a win with, say, every transport kept alive reaches a mission's endings a
// loss of one does not (2026-10-31).  Applied in the damage call itself, slot
// 40 (+0xa0) of every CUnit class's vtable (rtti_classes.csv), the same for
// the original and the ports.  The type name: [[unit+0x164]+0xb0]
// (0x417390 compares it with "Forseti Repair Pad").
// BEA_UNITLOG=1: each unit's first damage and its death (health at or below
// 0 after a damage call) are logged with its class and type name.
static const uint32_t g_unit_vtables[] = {
    0x005d89c4, 0x005d8eb4, 0x005dd788, 0x005df998, 0x005e01dc, 0x005dfd3c, 0x005e2e20, 0x005e123c, 0x005e1b84,
    0x005e0b30, 0x005e0d8c, 0x005e0684, 0x005e272c, 0x005e2038, 0x005e1930, 0x005dff8c, 0x005e1490, 0x005e08e0,
    0x005e1dd8, 0x005e3074, 0x005e228c, 0x005e0430, 0x005e0fe0, 0x005e2bcc, 0x005e297c, 0x005e16e0, 0x005e24dc,
    0x005e32d4, 0x005e3524, 0x005e3778, 0x005e3f9c, 0x005e3d40, 0x005e41f8};
static const int g_n_unit_vt = sizeof g_unit_vtables / sizeof g_unit_vtables[0];
typedef void (__attribute__((thiscall)) *unit_damage_t)(void*, float, int, int, int);
static unit_damage_t g_unit_damage_orig[sizeof g_unit_vtables / sizeof g_unit_vtables[0]];
static char g_protect[512] = "";
static bool g_unitlog = false;
static bool g_unitlog_dump = false;
static std::set<void*> g_unit_seen;

static const char* unit_type_name(uint8_t* u)
{
    uint8_t* t = *reinterpret_cast<uint8_t**>(u + 0x164);
    const char* n = t ? *reinterpret_cast<const char**>(t + 0xb0) : nullptr;
    return n && !IsBadStringPtrA(n, 64) ? n : "?";
}
static const char* unit_class_name(uint8_t* u)
{
    // the vtable's RTTI: [vtable - 4] the complete object locator, +0xc its type descriptor, +8 the name
    uint8_t* col = (*reinterpret_cast<uint8_t***>(u))[-1];
    const char* n = col ? *reinterpret_cast<const char**>(col + 0xc) + 8 : nullptr;
    return n && !IsBadStringPtrA(n, 64) ? n : "?";
}
static bool unit_protected(const char* type)
{
    if (!g_protect[0]) return false;
    char t[192];
    int n = 0;
    for (; type[n] && n < 191; ++n) t[n] = (char)tolower((unsigned char)type[n]);
    t[n] = 0;
    for (const char* p = g_protect; *p;) {
        const char* e = strchr(p, ';');
        size_t len = e ? (size_t)(e - p) : strlen(p);
        char w[128];
        if (len && len < sizeof w) {
            for (size_t i = 0; i < len; ++i) w[i] = (char)tolower((unsigned char)p[i]);
            w[len] = 0;
            // "a&b&!c": every part a substring, a part with '!' not one
            bool all = true;
            for (char* q = w; q && all;) {
                char* amp = strchr(q, '&');
                if (amp) *amp = 0;
                bool neg = *q == '!';
                bool has = strstr(t, q + neg) != nullptr;
                all = neg ? !has : has;
                q = amp ? amp + 1 : nullptr;
            }
            if (all) return true;
        }
        if (!e) break;
        p = e + 1;
    }
    return false;
}
static void __attribute__((thiscall)) unit_damage_hook(void* self, float dmg, int src, int a3, int a4)
{
    uint8_t* u = static_cast<uint8_t*>(self);
    uint32_t vt = *reinterpret_cast<uint32_t*>(u);
    unit_damage_t orig = nullptr;
    for (int i = 0; i < g_n_unit_vt; ++i)
        if (g_unit_vtables[i] == vt) orig = g_unit_damage_orig[i];
    if (!orig) return;                // not one of ours (cannot happen: only these vtables point here)
    const char* type = unit_type_name(u);
    bool prot = false;
    if (dmg > 0 && g_protect[0]) {
        // matched against "<class>|<type>|side<n>", e.g. "CSimpleBuilding|Forseti City Building 3|side2";
        // the side is +0x138: 0 Forseti (the player's), 1 Muspell, 2 neutral (BEA_UNITLOG=2 dumps, 300)
        char ct[192];
        const char* c = unit_class_name(u);
        if (!strncmp(c, ".?AV", 4)) c += 4;
        snprintf(ct, sizeof ct, "%.*s|%s|side%d", (int)strcspn(c, "@"), c, type, *reinterpret_cast<int*>(u + 0x138));
        prot = unit_protected(ct);
    }
    if (prot) *reinterpret_cast<int*>(u + 0x15c) = 0;
    float before = *reinterpret_cast<float*>(u + 0xf8);
    orig(self, dmg, src, a3, a4);
    if (!g_unitlog) return;
    float after = *reinterpret_cast<float*>(u + 0xf8);
    if (g_unit_seen.insert(self).second) {
        bea_log("unitlog: frame %ld clock %.3f first damage %s \"%s\" %p side %d health %g -> %g%s", g_fixed_frames,
                (double)*reinterpret_cast<volatile float*>(0x00672fd0), unit_class_name(u), type, self,
                *reinterpret_cast<int*>(u + 0x138), (double)before, (double)after, prot ? " (protected)" : "");
        if (g_unitlog_dump) {           // BEA_UNITLOG=2: the unit's first 0x300 bytes, to find fields such as its side
            char line[1024];
            for (int o = 0; o < 0x300; o += 0x40) {
                int n = snprintf(line, sizeof line, "unitdump: %p +%03x", self, o);
                for (int k = 0; k < 0x40; k += 4)
                    n += snprintf(line + n, sizeof line - n, " %08lx", (unsigned long)*reinterpret_cast<uint32_t*>(u + o + k));
                bea_log("%s", line);
            }
        }
    }
    if (before > 0 && after <= 0)
        bea_log("unitlog: frame %ld clock %.3f died %s \"%s\" %p side %d (damage %g)", g_fixed_frames,
                (double)*reinterpret_cast<volatile float*>(0x00672fd0), unit_class_name(u), type, self,
                *reinterpret_cast<int*>(u + 0x138), (double)dmg);
}
static void install_protect()
{
    char v[8];
    g_unitlog = GetEnvironmentVariableA("BEA_UNITLOG", v, sizeof v) && (v[0] == '1' || v[0] == '2');
    g_unitlog_dump = g_unitlog && v[0] == '2';
    if (!GetEnvironmentVariableA("BEA_PROTECT", g_protect, sizeof g_protect)) g_protect[0] = 0;
    if (!g_unitlog && !g_protect[0]) return;
    for (int i = 0; i < g_n_unit_vt; ++i) {
        void** slot = reinterpret_cast<void**>(g_unit_vtables[i] + 0xa0);
        DWORD old;
        VirtualProtect(slot, sizeof *slot, PAGE_READWRITE, &old);
        g_unit_damage_orig[i] = reinterpret_cast<unit_damage_t>(*slot);
        *slot = reinterpret_cast<void*>(&unit_damage_hook);
        VirtualProtect(slot, sizeof *slot, old, &old);
    }
    bea_log("harness: unit damage hooked in %d vtables (BEA_PROTECT \"%s\", BEA_UNITLOG %d)", g_n_unit_vt, g_protect, g_unitlog);
}

// Background jobs made synchronous (BEA_SYNCJOBS=1 under the fixed clock;
// off by default, see syncjobs_on).  The game streams data on a
// worker thread (0x528b60): 0x528d50 sets the job's busy flag (+0x15),
// releases the mutex and signals the worker, and the main thread goes on
// while the job runs.  When the result lands depends on real time, so a
// recording (paced to real time) and its replay (about 12x faster) diverged
// - level 521 won at 247 s, replayed as a death at 231 - and replays moved
// with the machine's load (800r at 4 instances, 2026-10-29).  The wrapper
// waits for the worker to clear the busy flag, so a job is done before the
// main thread continues, at any speed.  It wraps the port when it is on and
// the original when it is off, so both play the same game.
static void* g_jobstart_port = nullptr;
static void* g_jobstart_orig = nullptr;
typedef uint32_t (__attribute__((thiscall)) *JobStart_t)(void*);
static uint32_t __attribute__((thiscall)) jobstart_sync(void* worker)
{
    JobStart_t f = reinterpret_cast<JobStart_t>(g_jobstart_port ? g_jobstart_port : g_jobstart_orig);
    uint32_t r = f(worker);
    while (*reinterpret_cast<volatile char*>(static_cast<char*>(worker) + 0x15)) Sleep(0);
    return r;
}

static bool syncjobs_on()
{
    static int on = -1;
    if (on < 0) {
        char b[16];
        // opt-in for now (BEA_SYNCJOBS=1): in this mode level 311 shows the
        // air units' vslot66 ports (0x402fa0, 0x428110, 0x4454c0, 0x447120)
        // apart from the original (NOTES A1-23); the baselines are async
        bool fixed = GetEnvironmentVariableA("BEA_FIXEDSTEP", b, sizeof b) > 0;
        on = fixed && GetEnvironmentVariableA("BEA_SYNCJOBS", b, sizeof b) && b[0] == '1';
        if (on) bea_log("harness: background jobs synchronous (BEA_SYNCJOBS; job start 0x528d50 waits for the worker)");
    }
    return on > 0;
}

}  // namespace: the two hooks.cpp calls

// BEA_MP_ONEPLAYER=1: in a split-screen game (levels 850-899) the keyboard and the
// mouse drive player 1 alone (recording and replaying multiplayer, 2026-11-01).
// The binding table (0x8892d8, 0x20 per action) has two columns, and the per-frame
// read CController::vslot15 (0x42db40) reads both in single player but only the
// controller's own column (+0x16c) in multiplayer (its 0x4725d0 check), so preset 1
// put the mouse and arrows on one Battle Engine and WASD on the other.  Player 1's
// read here starts at column 0 and its 0x4725d0 check answers "not multiplayer";
// player 2's is skipped (0x42d9d0 clears the action bits before every read).
static void* g_ctlread_port = nullptr;
static void* g_ctlread_orig = nullptr;
static void* g_ismp_port = nullptr;
static void* g_ismp_orig = nullptr;
static int g_ctl_p1 = 0;
typedef void (__attribute__((thiscall)) *CtlRead_t)(void*);
typedef int (__attribute__((thiscall)) *IsMp_t)(void*);

static bool mp_oneplayer_on()
{
    static int on = -1;
    if (on < 0) {
        char b[8];
        on = GetEnvironmentVariableA("BEA_MP_ONEPLAYER", b, sizeof b) && b[0] == '1';
        if (on) bea_log("harness: multiplayer keyboard and mouse drive player 1 alone (BEA_MP_ONEPLAYER)");
    }
    return on > 0;
}

static void __attribute__((thiscall)) ctlread_oneplayer(void* ctl)
{
    CtlRead_t f = reinterpret_cast<CtlRead_t>(g_ctlread_port ? g_ctlread_port : g_ctlread_orig);
    char* game = reinterpret_cast<char*>(0x008a9a98);
    int level = *reinterpret_cast<volatile int*>(game + 0x2a0);
    if (level <= 0x351 || level >= 900) { f(ctl); return; }
    char* c = static_cast<char*>(ctl);
    if (ctl == *reinterpret_cast<void**>(game + 0x2b8)) {
        *reinterpret_cast<int*>(c + 0x170) = *reinterpret_cast<volatile int*>(0x008a9ac4);
        return;
    }
    if (ctl != *reinterpret_cast<void**>(game + 0x2b4)) { f(ctl); return; }
    static bool said = false;
    if (!said) { said = true; bea_log("harness: player 1 reads both binding columns, player 2 none (level %d)", level); }
    int col = *reinterpret_cast<int*>(c + 0x16c);
    *reinterpret_cast<int*>(c + 0x16c) = 0;
    ++g_ctl_p1;
    f(ctl);
    --g_ctl_p1;
    *reinterpret_cast<int*>(c + 0x16c) = col;
}

static int __attribute__((thiscall)) ismp_oneplayer(void* game)
{
    // only the original read's own check (the port asks bea_mp_controller_check)
    uintptr_t ret = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
    if (g_ctl_p1 && ret >= 0x0042db40u && ret < 0x0042e340u) return 0;
    IsMp_t f = reinterpret_cast<IsMp_t>(g_ismp_port ? g_ismp_port : g_ismp_orig);
    return f(game);
}


// the multiplayer check of the ported 0x42db40 (src/bea/direct/ap_0042db40.cpp)
int bea_mp_controller_check(int is_mp)
{
    return g_ctl_p1 ? 0 : is_mp;
}

// BEA_FPSCLOCK=1 (with the fixed clock): the frame-rate meter FpsTimer::Update (0x423720)
// reports the fixed step's rate.  It measures real time (QueryPerformanceCounter), and game
// code scales by 60 / that rate (0x4b82b0, 0x4b93f0, 0x4714c0, 0x48f620 via 0x515950): at a
// 1/30 s step level 600 with no input ended at 65.8, 64.3 and 65.7 s in three runs of the
// original (2026-11-05).  Opt-in: the 60 fps recordings were made with the real meter.
static void* g_fps_port = nullptr;
static void* g_fps_orig = nullptr;
typedef void (__attribute__((thiscall)) *FpsUpdate_t)(void*);
static void __attribute__((thiscall)) fps_fixed(void* m)
{
    reinterpret_cast<FpsUpdate_t>(g_fps_port ? g_fps_port : g_fps_orig)(m);
    float fps = (float)(1.0 / g_fixed_step);
    *reinterpret_cast<float*>(static_cast<char*>(m) + 4) = fps;           // the smoothed rate
    *reinterpret_cast<float*>(static_cast<char*>(m) + 8) = 1.0f / fps;    // its inverse
}
static bool fpsclock_on()
{
    static int on = -1;
    if (on < 0) {
        char b[16];
        // not under BEA_CECLOCK: the port's meter measures its own clock, so the original's does too
        on = GetEnvironmentVariableA("BEA_FIXEDSTEP", b, sizeof b) > 0 &&
             GetEnvironmentVariableA("BEA_FPSCLOCK", b, sizeof b) && b[0] == '1' &&
             !(GetEnvironmentVariableA("BEA_CECLOCK", b, sizeof b) && b[0] == '1');
        if (on) bea_log("harness: the frame-rate meter reports the fixed step (BEA_FPSCLOCK)");
    }
    return on > 0;
}

void* bea_harness_wrap(uint32_t addr, void* port)
{
    if (addr == 0x00423720u && fpsclock_on()) { g_fps_port = port; return reinterpret_cast<void*>(&fps_fixed); }
    if (addr == 0x00423bc0u) { g_ParseArgs_port = reinterpret_cast<ParseArgs_t>(port); return reinterpret_cast<void*>(&ParseArgs_hook); }
    if (addr == 0x0042db40u && mp_oneplayer_on()) { g_ctlread_port = port; return reinterpret_cast<void*>(&ctlread_oneplayer); }
    if (addr == 0x004725d0u && mp_oneplayer_on()) { g_ismp_port = port; return reinterpret_cast<void*>(&ismp_oneplayer); }
    if (addr != 0x00528d50u || !syncjobs_on()) return nullptr;
    g_jobstart_port = port;
    return reinterpret_cast<void*>(&jobstart_sync);
}

void** bea_harness_wrap_tramp(uint32_t addr)
{
    if (addr == 0x00423bc0u) return reinterpret_cast<void**>(&g_ParseArgs_orig);
    if (addr == 0x0042db40u) return &g_ctlread_orig;
    if (addr == 0x004725d0u) return &g_ismp_orig;
    if (addr == 0x00423720u) return &g_fps_orig;
    return addr == 0x00528d50u ? &g_jobstart_orig : nullptr;
}

namespace {

// BEA_FILELOG=1: the game's own fatal "File not found" names no file; log every open that fails.
HANDLE WINAPI CreateFileA_log(LPCSTR name, DWORD acc, DWORD share, LPSECURITY_ATTRIBUTES sa, DWORD disp, DWORD flags, HANDLE tmpl)
{
    HANDLE h = CreateFileA(name, acc, share, sa, disp, flags, tmpl);
    if (h == INVALID_HANDLE_VALUE) {
        DWORD e = GetLastError();       // the CRT maps it to errno after the call
        bea_log("file: open failed (%lu): %s", e, name ? name : "(null)");
        SetLastError(e);
    }
    return h;
}

// BEA_RANDTRACE=<from>,<to> (play frames): every rand() (0x55dbfe) the game
// makes in that window is logged with its caller, so a replay and its run
// with ports show the first draw they part at (311, 2026-10-30: the seed
// parted at play frame 804 with the Battle Engine still exactly in place).
typedef int (__cdecl *rand_t)();
rand_t g_rand_orig = nullptr;
long g_rt_from = 0, g_rt_to = -1;
__attribute__((noinline)) int __cdecl rand_trace()
{
    void* ra = __builtin_return_address(0);
    int r = g_rand_orig();
    long f = g_play0 >= 0 ? g_fixed_frames - g_play0 : -1;
    if (f >= g_rt_from && f <= g_rt_to) {
        // and the callers above it: stack dwords that point just past a call
        // into BEA.exe (game code keeps no frame chain)
        char chain[160] = "";
        int n = 0, len = 0;
        const uint32_t* sp = static_cast<const uint32_t*>(__builtin_frame_address(0)) + 2;
        for (int i = 0; i < 0x200 && n < 6; ++i) {
            uint32_t v = sp[i];
            if (v < 0x401006 || v >= 0x5d0000) continue;
            const uint8_t* c = reinterpret_cast<const uint8_t*>(v);
            if (c[-5] != 0xe8 && c[-2] != 0xff && c[-3] != 0xff && c[-6] != 0xff) continue;
            // with the dword after it: the first argument pushed for that call
            len += snprintf(chain + len, sizeof chain - len, " %06lx(%lx)", (unsigned long)v, (unsigned long)sp[i + 1]);
            ++n;
        }
        bea_log("rand: frame %ld caller %08lx -> %04x <%s", f, (unsigned long)(uintptr_t)ra, r, chain);
    }
    return r;
}

// the BEA_RANDTRACE window for other tracers (Handle::Release, game_misc.cpp):
// one log line with the caller chain, like rand_trace's
extern "C" void bea_trace_call(const char* what, uint32_t a, uint32_t b)
{
    long f = g_play0 >= 0 ? g_fixed_frames - g_play0 : -1;
    if (f < g_rt_from || f > g_rt_to) return;
    char chain[160] = "";
    int n = 0, len = 0;
    const uint32_t* sp = static_cast<const uint32_t*>(__builtin_frame_address(0)) + 2;
    int most = what[0] == '.' ? 1 : 6;   // ".name": the nearest caller only (frequent calls)
    for (int i = 0; i < 0x200 && n < most; ++i) {
        uint32_t v = sp[i];
        if (v < 0x401006 || v >= 0x5d0000) continue;
        const uint8_t* c = reinterpret_cast<const uint8_t*>(v);
        if (c[-5] != 0xe8 && c[-2] != 0xff && c[-3] != 0xff && c[-6] != 0xff) continue;
        len += snprintf(chain + len, sizeof chain - len, " %06lx(%lx)", (unsigned long)v, (unsigned long)sp[i + 1]);
        ++n;
    }
    bea_log("%s: frame %ld %lx %lx <%s", what, f, (unsigned long)a, (unsigned long)b, chain);
}

// BEA_WATCHALLOC=<n>,<off> (n decimal, off hex): when the game allocator's
// n-th block (0x5490e0, counted from 1; blocks keep their order between runs
// but not their addresses) is returned, the dword at block + off gets a write
// watch (debug register 0, this thread); every write is logged with the
// instruction after it, the new value and the callers (311, 2026-10-31).
// The allocator port calls bea_alloc_hook (temporarily, while hunting).
extern "C" { long g_wa_n = 0, g_wa_count = 0; }
uint32_t g_wa_abs = 0, g_wa_lines = 0;   // BEA_WATCHABS=<addr>: that address, armed at hook install
// BEA_WATCHRING=1 (with BEA_WATCHABS): keep the last 64 writes instead of logging each, and log them when
// bea_watch_ring_dump is called (the first collision test of BEA_COLTRACE): who left a leftover there
extern uint32_t g_wa_addr;
struct WaRing { uint32_t eip, value, ebp; unsigned time; char chain[96]; };
static WaRing g_wa_ring[64];
static unsigned g_wa_ring_n = 0;
static int g_wa_ring_on = -1;
void bea_watch_ring_dump(const char* why)
{
    if (g_wa_ring_on != 1) return;
    g_wa_ring_on = 0;                            // once; the handler then logs nothing more
    unsigned n = g_wa_ring_n < 64 ? g_wa_ring_n : 64;
    bea_log("watchring: %s: the last %u of %u writes to %08lx", why, n, g_wa_ring_n, (unsigned long)g_wa_addr);
    for (unsigned i = g_wa_ring_n - n; i < g_wa_ring_n; ++i) {
        const WaRing& r = g_wa_ring[i % 64];
        bea_log("watchring: time %08x eip %08lx = %08lx ebp %08lx <%s", r.time, (unsigned long)r.eip, (unsigned long)r.value,
                (unsigned long)r.ebp, r.chain);
    }
}
uint32_t g_wa_off = 0, g_wa_addr = 0, g_wf_eip = 0, g_wf_off = 0, g_wa_follow = 0;
LONG CALLBACK wa_veh(EXCEPTION_POINTERS* ep)
{
    DWORD code = ep->ExceptionRecord->ExceptionCode;
    CONTEXT* c = ep->ContextRecord;
    if (code == 0xe0bea001) {                    // arm (raised by bea_alloc_hook)
        c->Dr0 = g_wa_addr;
        c->Dr7 = (c->Dr7 & ~0x000f0003u) | 1 | (1u << 16) | (3u << 18);   // L0, write, 4 bytes
        return EXCEPTION_CONTINUE_EXECUTION;
    }
    if (code == EXCEPTION_SINGLE_STEP && (c->Dr6 & 2) && g_wa_follow) {   // the followed field
        c->Dr6 = 0;
        long f = g_play0 >= 0 ? g_fixed_frames - g_play0 : -1;
        bea_log("watchfollow: frame %ld eip %08lx [%08lx] = %08lx", f, (unsigned long)c->Eip, (unsigned long)g_wa_follow,
                (unsigned long)*reinterpret_cast<uint32_t*>(g_wa_follow));
        return EXCEPTION_CONTINUE_EXECUTION;
    }
    if (code == EXCEPTION_SINGLE_STEP && (c->Dr6 & 1) && g_wa_addr) {
        c->Dr6 = 0;
        // BEA_WATCHFOLLOW=<eip>,<off> (hex): at the first write the instruction
        // before <eip> makes, also watch [ebp + off] (debug register 1)
        if (g_wf_eip && c->Eip == g_wf_eip && !g_wa_follow) {
            g_wa_follow = c->Ebp + g_wf_off;
            c->Dr1 = g_wa_follow;
            c->Dr7 = (c->Dr7 & ~0x00f0000cu) | 4 | (1u << 20) | (3u << 22);
            bea_log("watchfollow: ebp %08lx, watching %08lx = %08lx", (unsigned long)c->Ebp, (unsigned long)g_wa_follow,
                    (unsigned long)*reinterpret_cast<uint32_t*>(g_wa_follow));
        }
        long f = g_play0 >= 0 ? g_fixed_frames - g_play0 : -1;
        char chain[160] = "";
        int n = 0, len = 0;
        const uint32_t* sp = reinterpret_cast<const uint32_t*>(c->Esp);
        // (an absolute watch: often deep in Windows code; up to the stack's base)
        int lim = g_wa_abs ? (int)(((uintptr_t)reinterpret_cast<NT_TIB*>(NtCurrentTeb())->StackBase - c->Esp) / 4) : 0x200;
        if (lim > 0x1400) lim = 0x1400;
        for (int i = 0; i < lim && n < 6; ++i) {
            uint32_t v = sp[i];
            if (v < 0x401006 || v >= 0x5d0000) continue;
            const uint8_t* q = reinterpret_cast<const uint8_t*>(v);
            if (q[-5] != 0xe8 && q[-2] != 0xff && q[-3] != 0xff && q[-6] != 0xff) continue;
            len += snprintf(chain + len, sizeof chain - len, " %06lx", (unsigned long)v);
            ++n;
        }
        if (g_wa_ring_on < 0) { char rb[8]; g_wa_ring_on = GetEnvironmentVariableA("BEA_WATCHRING", rb, sizeof rb) && rb[0] == '1'; }
        if (g_wa_abs && g_wa_ring_on >= 0 && GetEnvironmentVariableA("BEA_WATCHRING", nullptr, 0)) {
            if (g_wa_ring_on == 1) {
                WaRing& r = g_wa_ring[g_wa_ring_n++ % 64];
                r.eip = c->Eip; r.value = *reinterpret_cast<uint32_t*>(g_wa_addr); r.ebp = c->Ebp;
                memcpy(&r.time, reinterpret_cast<const void*>(0x00672fc8 + 8), 4);
                snprintf(r.chain, sizeof r.chain, "%s", chain);
            }
            return EXCEPTION_CONTINUE_EXECUTION;
        }
        if (g_wa_abs && ++g_wa_lines > 20000) return EXCEPTION_CONTINUE_EXECUTION;
        bea_log("watchalloc: frame %ld eip %08lx [%08lx] = %08lx ebp %08lx <%s", f, (unsigned long)c->Eip, (unsigned long)g_wa_addr,
                (unsigned long)*reinterpret_cast<uint32_t*>(g_wa_addr), (unsigned long)c->Ebp, chain);
        return EXCEPTION_CONTINUE_EXECUTION;
    }
    return EXCEPTION_CONTINUE_SEARCH;
}

// BEA_WATCHALLOC=probe: each guide allocation (0x445250) logs its block, the
// block's region and the dword already at +0x70 (never initialised there)
extern "C" { long g_wa_probe = 0, g_wa_trace = 0; }
extern "C" void bea_alloc_probe(uint32_t block)
{
    static long k = 0;
    MEMORY_BASIC_INFORMATION m;
    uintptr_t base = VirtualQuery(reinterpret_cast<void*>(block), &m, sizeof m) ? reinterpret_cast<uintptr_t>(m.AllocationBase) : 0;
    long f = g_play0 >= 0 ? g_fixed_frames - g_play0 : -1;
    bea_log("allocprobe: guide %ld frame %ld block %08lx region %08lx +%lx [+0x70] = %08lx", ++k, f, (unsigned long)block,
            (unsigned long)base, (unsigned long)(block - base), block ? (unsigned long)*reinterpret_cast<uint32_t*>(block + 0x70) : 0ul);
}

// BEA_WATCHALLOC=region,<type>,<off> (hex): the first allocation of pool
// <type> arms the write watch at the allocation base of its region + <off>
extern "C" { long g_wa_type = 0; }
extern "C" void bea_alloc_region(uint32_t block)
{
    MEMORY_BASIC_INFORMATION m;
    if (!block || !VirtualQuery(reinterpret_cast<void*>(block), &m, sizeof m)) return;
    g_wa_type = 0;                       // once
    g_wa_addr = reinterpret_cast<uintptr_t>(m.AllocationBase) + g_wa_off;
    bea_log("watchalloc: region %08lx (first block %08lx), watching %08lx", (unsigned long)(uintptr_t)m.AllocationBase,
            (unsigned long)block, (unsigned long)g_wa_addr);
    RaiseException(0xe0bea001, 0, 0, nullptr);
}

extern "C" void bea_alloc_hook(uint32_t block)
{
    if (!block) return;
    g_wa_addr = g_wa_abs ? g_wa_abs : block + g_wa_off;
    bea_log("watchalloc: block %ld = %08lx, watching %08lx", g_wa_n, (unsigned long)block, (unsigned long)g_wa_addr);
    RaiseException(0xe0bea001, 0, 0, nullptr);
}

extern char g_el_spec[256];          // BEA_ENTRYLOG (below)
volatile long g_el_calls = 0;
extern "C" uint32_t g_el_tramp;
void entrylog_stub();

// BEA_WATCHABS: something clears the main thread's debug registers early in
// startup (2026-10-31: a watch armed at hook install saw 14 writes, then
// none), so a helper thread sets them again from outside every few ms; it
// never runs on the main thread's stack
DWORD WINAPI wa_rearm_thread(void* h)
{
    HANDLE main = static_cast<HANDLE>(h);
    long rearmed = 0;
    for (;;) {
        Sleep(2);
        if (SuspendThread(main) == (DWORD)-1) return 0;
        CONTEXT c = {};
        c.ContextFlags = CONTEXT_DEBUG_REGISTERS | CONTEXT_CONTROL;
        if (GetThreadContext(main, &c) && (c.Dr0 != g_wa_addr || !(c.Dr7 & 1))) {
            uint32_t eip = c.Eip;
            c.ContextFlags = CONTEXT_DEBUG_REGISTERS;
            c.Dr0 = g_wa_addr;
            c.Dr7 = (c.Dr7 & ~0x000f0003u) | 1 | (1u << 16) | (3u << 18);
            SetThreadContext(main, &c);
            if (++rearmed <= 20) bea_log("watchabs: re-armed (%ld), main thread at %08lx", rearmed, (unsigned long)eip);
        }
        ResumeThread(main);
    }
}

void install_rand_trace()
{
    {
        char el[300];
        if (GetEnvironmentVariableA("BEA_ENTRYLOG", el, sizeof el)) {
            char* semi = strchr(el, ';');
            unsigned addr = strtoul(el, nullptr, 16);
            if (semi) snprintf(g_el_spec, sizeof g_el_spec, "%s", semi + 1);
            MH_STATUS st = MH_CreateHook(reinterpret_cast<void*>(static_cast<uintptr_t>(addr)), reinterpret_cast<void*>(&entrylog_stub),
                                         reinterpret_cast<void**>(&g_el_tramp));
            if (st == MH_OK) st = MH_EnableHook(reinterpret_cast<void*>(static_cast<uintptr_t>(addr)));
            const uint8_t* t = reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(addr));
            bea_log("harness: entry log at %08x (%s): %s (tramp %08lx, stub %08lx, entry %02x %02x %02x %02x %02x)", addr, g_el_spec, MH_StatusToString(st),
                    (unsigned long)g_el_tramp, (unsigned long)(uintptr_t)&entrylog_stub, t[0], t[1], t[2], t[3], t[4]);
        }
    }
    {
        char w[32];
        if (GetEnvironmentVariableA("BEA_WATCHABS", w, sizeof w)) {
            g_wa_abs = strtoul(w, nullptr, 16);
            g_wa_n = 1;
            AddVectoredExceptionHandler(1, wa_veh);
            // armed now (hook install, main thread): a stack address is
            // written long before the first allocation the allocator port sees
            g_wa_addr = g_wa_abs;
            RaiseException(0xe0bea001, 0, 0, nullptr);
            HANDLE self = nullptr;
            DuplicateHandle(GetCurrentProcess(), GetCurrentThread(), GetCurrentProcess(), &self, 0, FALSE, DUPLICATE_SAME_ACCESS);
            CreateThread(nullptr, 0, wa_rearm_thread, self, 0, nullptr);
            bea_log("harness: write watch on %08lx from hook install", (unsigned long)g_wa_abs);
        }
        else if (GetEnvironmentVariableA("BEA_WATCHALLOC", w, sizeof w) && !strcmp(w, "probe+trace")) g_wa_probe = g_wa_trace = 1;
        else if (GetEnvironmentVariableA("BEA_WATCHALLOC", w, sizeof w) && !strcmp(w, "probe")) g_wa_probe = 1;
        else if (GetEnvironmentVariableA("BEA_WATCHALLOC", w, sizeof w) && sscanf(w, "region,%lx,%x", &g_wa_type, &g_wa_off) == 2) {
            AddVectoredExceptionHandler(1, wa_veh);
            g_wa_probe = 1;
            bea_log("harness: write watch at pool %lx's region + %x", g_wa_type, g_wa_off);
        }
        else if (GetEnvironmentVariableA("BEA_WATCHALLOC", w, sizeof w) && sscanf(w, "%ld,%x", &g_wa_n, &g_wa_off) == 2) {
            AddVectoredExceptionHandler(1, wa_veh);
            if (GetEnvironmentVariableA("BEA_WATCHFOLLOW", w, sizeof w)) sscanf(w, "%x,%x", &g_wf_eip, &g_wf_off);
            bea_log("harness: write watch on block %ld + %x", g_wa_n, g_wa_off);
        }
    }
    char v[32];
    if (!GetEnvironmentVariableA("BEA_RANDTRACE", v, sizeof v) || sscanf(v, "%ld,%ld", &g_rt_from, &g_rt_to) != 2) return;
    MH_STATUS st = MH_CreateHook(reinterpret_cast<void*>(0x0055dbfe), reinterpret_cast<void*>(&rand_trace), reinterpret_cast<void**>(&g_rand_orig));
    if (st == MH_OK) st = MH_EnableHook(reinterpret_cast<void*>(0x0055dbfe));
    bea_log("harness: rand() callers logged in play frames %ld..%ld: %s", g_rt_from, g_rt_to, MH_StatusToString(st));
}

// BEA_PEEK=<path>[;<path>...]: each inputsync checkpoint also logs the dword
// at the end of each pointer path, "a:o1:o2" = *(*(a + o1) + o2) (hex), with
// the pointers along the way ("^": the allocation base of the block the value
// points into, "+o": add o; heap blocks move between runs): a heap object's state in a replay and its run
// with ports, frame by frame (311, 2026-10-30)
char g_peek[256] = "";
int peek_paths(const char* spec, uintptr_t base, char* out, int len, int size, uintptr_t sbase = 0)
{
    for (const char* p = spec; *p && len < size - 40;) {
        char* e;
        uintptr_t v;
        if (*p == 'c') { v = base; e = const_cast<char*>(p) + 1; }   // "c:o...": from the hooked call's ECX
        else if (*p == 's') { v = sbase; e = const_cast<char*>(p) + 1; }   // "s...": from its entry ESP
        else v = strtoul(p, &e, 16);
        len += snprintf(out + len, size - len, " |");
        while (*e == ':' || *e == '^' || *e == '+') {
            if (*e == '^') {                // the allocation base of the block v points into
                MEMORY_BASIC_INFORMATION m;
                v = VirtualQuery(reinterpret_cast<void*>(v), &m, sizeof m) ? reinterpret_cast<uintptr_t>(m.AllocationBase) : 0;
                len += snprintf(out + len, size - len, " ^%lx", (unsigned long)v);
                ++e;
                continue;
            }
            if (*e == '+') { v += strtoul(e + 1, &e, 16); continue; }
            uintptr_t o = strtoul(e + 1, &e, 16);
            if (IsBadReadPtr(reinterpret_cast<void*>(v + o), 4)) { v = 0xbad0bad0; len += snprintf(out + len, size - len, " ?"); break; }
            v = *reinterpret_cast<uint32_t*>(v + o);
            len += snprintf(out + len, size - len, " %lx", (unsigned long)v);
        }
        p = *e == ';' ? e + 1 : e;
        if (!*e) break;
    }
    return len;
}

void peek_log(long f)
{
    if (g_el_spec[0] && f % 100 == 0) bea_log("entrylog: %ld calls so far", g_el_calls);
    if (!g_peek[0]) return;
    char out[512];
    int len = snprintf(out, sizeof out, "peek: frame %ld", f);
    peek_paths(g_peek, 0, out, len, sizeof out);
    bea_log("%s", out);
}

// BEA_ENTRYLOG=<addr>;<path>[;<path>...] (hex): every call of the original
// function at <addr> (no port there) logs the peek paths, "c:o1:o2" starting
// at its ECX, with the play frame (311, 2026-10-31: which input of 0x446150's
// distance test differs).  The stub keeps every register for the original.
char g_el_spec[256] = "";
extern "C" {
uint32_t g_el_tramp __asm__("g_el_tramp") = 0;
}
extern "C" __attribute__((used)) void __cdecl entrylog_body(uint32_t ecx, uint32_t esp) __asm__("entrylog_body");
extern "C" __attribute__((used)) void __cdecl entrylog_body(uint32_t ecx, uint32_t esp)
{
    ++g_el_calls;
    char out[512];
    long f = g_play0 >= 0 ? g_fixed_frames - g_play0 : -1;
    int len = snprintf(out, sizeof out, "entrylog: frame %ld ecx %08lx esp %08lx", f, (unsigned long)ecx, (unsigned long)esp);
    peek_paths(g_el_spec, ecx, out, len, sizeof out, esp);
    bea_log("%s", out);
}
__attribute__((naked)) void entrylog_stub()
{
    __asm__ volatile(
        "pushal\n\t"
        "pushfl\n\t"
        "leal 36(%esp), %eax\n\t"    // the entry ESP (8 registers + flags pushed)
        "pushl %eax\n\t"
        "pushl %ecx\n\t"
        "call entrylog_body\n\t"
        "addl $8, %esp\n\t"
        "popfl\n\t"
        "popal\n\t"
        "jmp *g_el_tramp");
}

void install_fixed_clock()
{
    GetEnvironmentVariableA("BEA_PEEK", g_peek, sizeof g_peek);
    char buf[32];
    if (!GetEnvironmentVariableA("BEA_FIXEDSTEP", buf, sizeof buf)) return;
    double step = atof(buf);
    if (step <= 0) return;
    LARGE_INTEGER f;
    QueryPerformanceFrequency(&f);
    g_real_freq = f.QuadPart ? f.QuadPart : 1;
    g_fixed_step = step;
    if (GetEnvironmentVariableA("BEA_CECLOCK", buf, sizeof buf) && buf[0] == '1') {
        g_ceclock = true;
        g_ce_dtns = (unsigned long long)(step * 1e9 + 0.5);
        bool q = patch_import("QueryPerformanceFrequency", reinterpret_cast<void*>(&QPF_ce));
        bool s = patch_import("Sleep", reinterpret_cast<void*>(&Sleep_ce));
        bool t = patch_import("GetSystemTimeAsFileTime", reinterpret_cast<void*>(&GetSystemTimeAsFileTime_ce));
        bea_log("harness: onslaught-ce's present clock, %llu ns per frame (BEA_CECLOCK; qpf=%d sleep=%d filetime=%d)", g_ce_dtns, q, s, t);
    }
    bool a = patch_import("QueryPerformanceCounter", reinterpret_cast<void*>(&QPC_fixed));
    bool b = patch_import("timeGetTime", reinterpret_cast<void*>(&timeGetTime_fixed));
    if (g_tapein) bea_log("tape in: ScreenToClient patched %d", patch_import("ScreenToClient", reinterpret_cast<void*>(&ScreenToClient_tape)));
    bool c = patch_import("GetCursorPos", g_recording || g_replaying || g_tapein ? reinterpret_cast<void*>(&GetCursorPos_rec) : reinterpret_cast<void*>(&GetCursorPos_fixed));
    install_rand_trace();
    bea_log("harness: fixed clock %g s per frame (imports patched: qpc=%d timeGetTime=%d cursor=%d)", step, a, b, c);
    if (g_recording || g_replaying) {
        char cs[32];
        if (g_replaying && GetEnvironmentVariableA("BEA_REPLAY_PACE", cs, sizeof cs) && cs[0] == '1') { g_replay_pace = true; bea_log("harness: replay paced to real time, every frame presented"); }
        if (GetEnvironmentVariableA("BEA_STACKSCRUB", cs, sizeof cs)) { g_stack_scrub = (int)strtol(cs, nullptr, 16) & 0xff; bea_log("harness: input hooks scrub the stack with %02x", g_stack_scrub); }
        if (g_replaying && GetEnvironmentVariableA("BEA_REPLAY_CLIENT", cs, sizeof cs))
            sscanf(cs, "%ldx%ld", &g_replay_client_w, &g_replay_client_h);
        bool d = patch_import("GetClientRect", reinterpret_cast<void*>(&GetClientRect_rec));
        bea_log("harness: GetClientRect patched %d (replay client %ldx%ld)", d, g_replay_client_w, g_replay_client_h);
    }
    if (GetEnvironmentVariableA("BEA_FILELOG", buf, sizeof buf) && buf[0] == '1')
        bea_log("harness: failed file opens logged (CreateFileA patched %d)", patch_import("CreateFileA", reinterpret_cast<void*>(&CreateFileA_log)));
}

int WINAPI MessageBoxA_hook(HWND, LPCSTR text, LPCSTR caption, UINT)
{
    bea_log("MSGBOX '%s': %s (answered OK)", caption ? caption : "", text ? text : "");
    return IDOK;
}

// With the screen off, IDirect3DDevice9::Present of a windowed swap chain
// waits for the desktop compositor (sampled in dwmapi / the driver under
// d3d9), and a soak ran at ~22 frames a second instead of ~300.  The game
// advances one 50 ms tick per frame at most, so it also covered a quarter of
// the game time (2026-10-19).  In test runs only every frame 50 ms after the
// last shown one is presented; the others are still rendered, then dropped.
// Hooked through the vtables: Direct3DCreate9 -> IDirect3D9::CreateDevice
// (slot 16) -> IDirect3DDevice9::Present (slot 17).
typedef HRESULT (WINAPI *Present_t)(void*, const RECT*, const RECT*, HWND, const void*);
typedef HRESULT (WINAPI *CreateDevice_t)(void*, UINT, int, HWND, DWORD, void*, void**);
typedef void* (WINAPI *Direct3DCreate9_t)(UINT);
Present_t g_Present_orig = nullptr;
CreateDevice_t g_CreateDevice_orig = nullptr;
Direct3DCreate9_t g_Direct3DCreate9_orig = nullptr;

// BEA_SHOTCLOCK=<seconds>: at the first frame presented once the game clock
// (0x672fd0) has reached that value, the back buffer is written as a 24-bit
// BMP (BEA_SHOTFILE, default bea_shot.bmp in the working directory) and its
// pixel hash logged ("shot: ...").  Under the fixed clock the frame at a
// given clock is the same in every run, so two runs' shots compare pixel for
// pixel: a rendering oracle the outcome gate lacks (visual artefacts noticed
// in the test windows, 2026-10-22).
double g_shot_clock = 0;
bool g_shot_done = false;
// BEA_SHOTFRAMES=<f1,f2,...>: shots at those presented-frame counts as well,
// written as <BEA_SHOTFILE without .bmp>_<frame>.bmp.  The front end has no
// game clock, so a scripted menu replay (tools/menu_test.py) compares its
// screens by frame; BEA_ENDFRAME=<n> quits after frame n so the run ends at
// the same point every time.
long g_shot_frames[64]; int g_nshot_frames = 0, g_next_shot_frame = 0;
// BEA_SHOTPLAY=1: BEA_SHOTFRAMES and BEA_ENDFRAME count from the start of play (g_play0), not from launch:
// level loading takes a varying number of frames (366-376 for level 100)
bool g_shot_play = false;
long g_end_frame = 0;

void shot_frame(IDirect3DDevice9* d, float clock, long at_frame = 0)
{
    char path[MAX_PATH];
    if (!GetEnvironmentVariableA("BEA_SHOTFILE", path, sizeof path)) strcpy(path, "bea_shot.bmp");
    if (at_frame) {
        size_t n = strlen(path);
        if (n > 4 && !_stricmp(path + n - 4, ".bmp")) path[n - 4] = 0;
        snprintf(path + strlen(path), sizeof path - strlen(path), "_%ld.bmp", at_frame);
    }
    IDirect3DSurface9* bb = nullptr;
    if (FAILED(d->GetBackBuffer(0, 0, D3DBACKBUFFER_TYPE_MONO, &bb)) || !bb) { bea_log("shot: no back buffer"); return; }
    D3DSURFACE_DESC desc;
    bb->GetDesc(&desc);
    if (desc.MultiSampleType != D3DMULTISAMPLE_NONE) {
        // anti-aliasing on (Video Options): GetRenderTargetData cannot read a
        // multisampled surface; resolve it into a plain render target first
        IDirect3DSurface9* rt = nullptr;
        if (FAILED(d->CreateRenderTarget(desc.Width, desc.Height, desc.Format, D3DMULTISAMPLE_NONE, 0, FALSE, &rt, nullptr))
            || FAILED(d->StretchRect(bb, nullptr, rt, nullptr, D3DTEXF_NONE))) {
            if (rt) rt->Release();
            bea_log("shot: cannot resolve the multisampled back buffer");
            bb->Release();
            return;
        }
        bb->Release();
        bb = rt;
    }
    IDirect3DSurface9* sys = nullptr;
    HRESULT hr = d->CreateOffscreenPlainSurface(desc.Width, desc.Height, desc.Format, D3DPOOL_SYSTEMMEM, &sys, nullptr);
    if (SUCCEEDED(hr) && sys) {
        hr = d->GetRenderTargetData(bb, sys);
        D3DLOCKED_RECT lr;
        if (SUCCEEDED(hr) && SUCCEEDED(sys->LockRect(&lr, nullptr, D3DLOCK_READONLY))) {
            unsigned w = desc.Width, h = desc.Height, row = (w * 3 + 3) & ~3u;
            unsigned char* out = static_cast<unsigned char*>(calloc(row, h));
            unsigned hash = 2166136261u;
            for (unsigned y = 0; y < h; ++y) {
                const unsigned char* s = static_cast<const unsigned char*>(lr.pBits) + y * lr.Pitch;
                unsigned char* o = out + (h - 1 - y) * row;             // BMP rows run bottom-up
                for (unsigned x = 0; x < w; ++x) {
                    unsigned char b, g, r;
                    if (desc.Format == D3DFMT_R5G6B5) {
                        unsigned v = s[2 * x] | (s[2 * x + 1] << 8);
                        b = (v & 31) << 3; g = ((v >> 5) & 63) << 2; r = ((v >> 11) & 31) << 3;
                    } else {                                             // X8R8G8B8 / A8R8G8B8
                        b = s[4 * x]; g = s[4 * x + 1]; r = s[4 * x + 2];
                    }
                    o[3 * x] = b; o[3 * x + 1] = g; o[3 * x + 2] = r;
                    hash = (hash ^ b) * 16777619u; hash = (hash ^ g) * 16777619u; hash = (hash ^ r) * 16777619u;
                }
            }
            sys->UnlockRect();
            FILE* f = fopen(path, "wb");
            if (f) {
                unsigned size = 54 + row * h;
                unsigned char hdr[54] = { 'B', 'M' };
                auto put32 = [&](int at, unsigned v) { hdr[at] = v; hdr[at + 1] = v >> 8; hdr[at + 2] = v >> 16; hdr[at + 3] = v >> 24; };
                put32(2, size); put32(10, 54); put32(14, 40); put32(18, w); put32(22, h);
                hdr[26] = 1; hdr[28] = 24; put32(34, row * h);
                fwrite(hdr, 1, 54, f); fwrite(out, 1, row * h, f); fclose(f);
            }
            bea_log("shot: clock %.3f frame %ld %ux%u fmt %d hash %08x file %s", (double)clock, (long)g_fixed_frames, w, h,
                    (int)desc.Format, hash, path);
            free(out);
        } else {
            bea_log("shot: GetRenderTargetData/LockRect failed (%08lx)", (unsigned long)hr);
        }
        sys->Release();
    } else {
        bea_log("shot: CreateOffscreenPlainSurface failed (%08lx)", (unsigned long)hr);
    }
    bb->Release();
}

HRESULT WINAPI Present_hook(void* dev, const RECT* src, const RECT* dst, HWND wnd, const void* dirty)
{
    static DWORD last = 0;
    static unsigned skipped = 0;
    if (g_shot_clock > 0 && !g_shot_done) {
        float clock = *reinterpret_cast<volatile float*>(0x00672fd0);
        if (clock >= g_shot_clock) {
            g_shot_done = true;
            shot_frame(static_cast<IDirect3DDevice9*>(dev), clock);
        }
    }
    if (g_bea_fptrap) {
        // NaN trap (hooks.cpp fp_trap): D3D9 resets the x87 control word at
        // device creation and the trap masks it again; unmask the invalid-
        // operation exception (IM, bit 0) at every frame, flags cleared first
        unsigned short cw;
        __asm__ volatile("fnclex\n\tfnstcw %0" : "=m"(cw));
        cw &= ~1u;
        __asm__ volatile("fldcw %0" : : "m"(cw));
    }
    long frame = InterlockedIncrement(&g_fixed_frames);
    t_ce_reads = 0;
    // the frame being presented is the one counted before this increment
    long shot_at = g_shot_play ? (g_play0 >= 0 ? frame - 1 - g_play0 : -1) : frame - 1;
    while (g_next_shot_frame < g_nshot_frames && shot_at >= 0 && g_shot_frames[g_next_shot_frame] <= shot_at)
        shot_frame(static_cast<IDirect3DDevice9*>(dev), *reinterpret_cast<volatile float*>(0x00672fd0), g_shot_frames[g_next_shot_frame++]);
    if (g_end_frame > 0 && (g_shot_play ? (g_play0 >= 0 ? frame - g_play0 : -1) : frame) > g_end_frame) {
        bea_log("endframe: frame %ld reached, exiting", g_end_frame);
        ExitProcess(0);
    }
    {
        int st = *reinterpret_cast<volatile int*>(0x008a9ac0);
        if (st != g_seen_state) {
            g_state_frame = frame;
            g_state_clock = *reinterpret_cast<volatile float*>(0x00672fd0);
            g_seen_state = st;
        }
    }
    // (and in any run with BEA_INPUTSYNC or BEA_RANDTRACE set: their play frames count from it)
    static int trace_play = -1;
    if (trace_play < 0) {
        char tb[16];
        trace_play = GetEnvironmentVariableA("BEA_INPUTSYNC", tb, sizeof tb) > 0 || GetEnvironmentVariableA("BEA_RANDTRACE", tb, sizeof tb) > 0;
    }
    if (g_play0 < 0 && (g_recording || g_replaying || g_tapein || trace_play) && *reinterpret_cast<volatile int*>(0x008a9ac0) == 3) play_started(frame);
    // input-read counts, to line a replay up with its recording (level 500, 2026-10-27:
    // ~1.3 mouse reads per frame, a replay that drifts from the playthrough)
    // (BEA_INPUTSYNC=N set: every N play frames in any run, an AI-only one included)
    static long sync_every = -1;
    static bool sync_forced = false;
    if (sync_every < 0) {
        char sb[16];
        sync_forced = GetEnvironmentVariableA("BEA_INPUTSYNC", sb, sizeof sb) > 0;
        sync_every = sync_forced ? atol(sb) : 100;
        if (sync_every < 1) sync_every = 100;
    }
    if (g_play0 >= 0 && (g_recording || g_replaying || sync_forced) && (frame - g_play0) % sync_every == 0)
    {
        // the player's Battle Engine (see cheat_frame): position +0x1c..+0x24 and
        // health, so a recording and its replay show the first frame they part
        uint8_t* pl = *reinterpret_cast<uint8_t**>(0x008a9a98 + 0x2a4);
        uint8_t* be = pl && *reinterpret_cast<int*>(pl + 0x20) == 0 ? *reinterpret_cast<uint8_t**>(pl + 0x1c) : nullptr;
        float bx = be ? *reinterpret_cast<float*>(be + 0x1c) : 0, by = be ? *reinterpret_cast<float*>(be + 0x20) : 0;
        float bz = be ? *reinterpret_cast<float*>(be + 0x24) : 0, bh = be ? *reinterpret_cast<float*>(be + 0xf8) : 0;
        // and the game thread's rand() seed (CRT _getptd 0x560b93, holdrand at
        // +0x14; the game never seeds it): AI choices, effects and damage draw
        // on it, so it parts as soon as the world does, long before the player
        // is pushed somewhere else (level 100 win: the replay's player stopped
        // against something 3 frames early at 249 s)
        typedef uint8_t* (__cdecl *getptd_t)();
        uint32_t rnd = *reinterpret_cast<uint32_t*>(reinterpret_cast<getptd_t>(0x00560b93)() + 0x14);
        // and the mouse position the game accumulates from DirectInput (0x42d4d0: x 0x89bda8,
        // y 0x89bda4; flight steers by its distance from the screen centre, 0x407540)
        long mx = *reinterpret_cast<volatile long*>(0x0089bda8), my = *reinterpret_cast<volatile long*>(0x0089bda4);
        bea_log("inputsync: play frame %ld device0 %ld device1 %ld cursor %ld clock %.3f be %.4f %.4f %.4f hp %.3f rnd %08x mouse %ld %ld", frame - g_play0,
                g_dev_calls[0], g_dev_calls[1], g_cursor_calls, (double)*reinterpret_cast<volatile float*>(0x00672fd0), bx, by, bz, bh, rnd, mx, my);
        peek_log(frame - g_play0);
    }
    probes_frame(frame);
    if (g_tapein) tapein_frame(frame);
    if (g_replaying) {
        tape_open();
        tape_frame(frame - 1);
        replay_frame(frame);
    }
    cheat_frame();
    console_frame();
    goodies_frame();
    mpmaps_frame();
    bea_snap_synth_frame();
    if (g_recording || g_replay_pace) {
        // enlarge the window once, after the game has sized it for its device
        static bool sized = false;
        if (!sized && g_rec_scale > 1 && g_game_hwnd) {
            sized = true;
            RECT cr;
            GetClientRect(g_game_hwnd, &cr);
            g_bb_w = cr.right - cr.left; g_bb_h = cr.bottom - cr.top;
            long cw = g_bb_w * g_rec_scale, ch = g_bb_h * g_rec_scale;
            RECT wa;
            if (g_rec_fit && SystemParametersInfoA(SPI_GETWORKAREA, 0, &wa, 0)) {
                // the largest 4:3 client area that fits the work area with the frame
                RECT fr = { 0, 0, 100, 100 };
                AdjustWindowRectEx(&fr, (DWORD)GetWindowLongA(g_game_hwnd, GWL_STYLE), FALSE, (DWORD)GetWindowLongA(g_game_hwnd, GWL_EXSTYLE));
                long aw = (wa.right - wa.left) - ((fr.right - fr.left) - 100), ah = (wa.bottom - wa.top) - ((fr.bottom - fr.top) - 100);
                ch = ah; cw = ch * g_bb_w / g_bb_h;
                if (cw > aw) { cw = aw; ch = cw * g_bb_h / g_bb_w; }
            }
            RECT wr = { 0, 0, cw, ch };
            AdjustWindowRectEx(&wr, (DWORD)GetWindowLongA(g_game_hwnd, GWL_STYLE), FALSE, (DWORD)GetWindowLongA(g_game_hwnd, GWL_EXSTYLE));
            int w = wr.right - wr.left, h = wr.bottom - wr.top;
            int sx = GetSystemMetrics(SM_CXSCREEN), sy = GetSystemMetrics(SM_CYSCREEN);
            // resizable and maximisable: the picture is stretched to the client area
            // and mouse positions are mapped back to 640x480 (to_game_coords)
            SetWindowLongA(g_game_hwnd, GWL_STYLE, GetWindowLongA(g_game_hwnd, GWL_STYLE) | WS_THICKFRAME | WS_MAXIMIZEBOX);
            SetWindowPos(g_game_hwnd, HWND_TOP, (sx - w) / 2 > 0 ? (sx - w) / 2 : 0, (sy - h) / 2 > 0 ? (sy - h) / 2 : 0, w, h, SWP_SHOWWINDOW | SWP_FRAMECHANGED);
            RECT nc;
            GetClientRect(g_game_hwnd, &nc);
            bea_log("harness: recording window enlarged %dx (client %ldx%ld shown at %dx%d, client now %ldx%ld)", g_rec_scale,
                    cr.right - cr.left, cr.bottom - cr.top, w, h, nc.right - nc.left, nc.bottom - nc.top);
        }
        // a person plays: every frame shown, paced to the fixed step in real time
        static LARGE_INTEGER t0 = {};
        static long f0 = 0;
        LARGE_INTEGER now_qpc, freq;
        QueryPerformanceCounter(&now_qpc); QueryPerformanceFrequency(&freq);
        if (!t0.QuadPart) { t0 = now_qpc; f0 = frame; }
        double due = (frame - f0) * g_fixed_step;
        // more than 0.1 s behind (a slow loading frame): start the schedule
        // again from now instead of running unpaced until it is met - the
        // first ~3 s of a session played at fast speed (2026-10-23, user)
        if ((double)(now_qpc.QuadPart - t0.QuadPart) / (double)freq.QuadPart - due > 0.1) { t0 = now_qpc; f0 = frame; due = 0; }
        for (;;) {
            QueryPerformanceCounter(&now_qpc);
            double el = (double)(now_qpc.QuadPart - t0.QuadPart) / (double)freq.QuadPart;
            if (el >= due) break;
            if (due - el > 0.002) Sleep(1);
        }
        if (g_rec && (frame & 63) == 0) fflush(g_rec);
        return g_Present_orig(dev, src, dst, wnd, dirty);
    }
    DWORD now = GetTickCount();
    if (now - last < 50) { ++skipped; return S_OK; }
    last = now;
    HRESULT hr = g_Present_orig(dev, src, dst, wnd, dirty);
    // A locked session (LockApp) loses the D3D9 device and the game waits
    // in its reset loop until the unlock: a "HUNG (no frames)" that no port
    // causes (2026-10-19 levels 100 and 700).  smoke_test.ps1 reports it.
    static bool lost = false;
    if (hr == (HRESULT)0x88760868 && !lost) bea_log("harness: DEVICE LOST (session locked or display change)");
    lost = hr == (HRESULT)0x88760868;
    return hr;
}

// BEA_FSLOG=1 without -forcewindowed (fullscreen tests, 2026-11-04): the rest of the harness
// stays off; the device's display mode is logged, and Present is counted (frames, device
// lost) but neither limited nor captured, so the game runs as for a player
static bool g_fslog = false;
static Present_t g_PresentCount_orig = nullptr;
static long g_fs_frames = 0, g_fs_lost = 0;
static HRESULT WINAPI PresentCount_hook(void* dev, const RECT* a, const RECT* b, HWND w, const void* r)
{
    HRESULT hr = g_PresentCount_orig(dev, a, b, w, r);
    long n = InterlockedIncrement(&g_fs_frames);
    if (FAILED(hr) && g_fs_lost++ < 5) bea_log("display: Present %08lx at frame %ld", (unsigned long)hr, n);
    if (n % 600 == 0) bea_log("display: %ld frames presented", n);
    return hr;
}

HRESULT WINAPI CreateDevice_hook(void* d3d, UINT adapter, int type, HWND focus, DWORD flags, void* pp, void** out)
{
    if (g_fslog && pp && !reinterpret_cast<const UINT*>(pp)[8] && focus) {
        // a fullscreen device whose window is not in front is lost at its first Present, and
        // the original then waits forever (0x512630, A1-20): a game started by the test
        // tools has no focus, so it is brought in front first (an Alt press lets
        // SetForegroundWindow through)
        HWND fg = GetForegroundWindow();
        DWORD fgt = fg ? GetWindowThreadProcessId(fg, nullptr) : 0, me = GetCurrentThreadId();
        if (fgt && fgt != me) AttachThreadInput(me, fgt, TRUE);
        keybd_event(VK_MENU, 0, 0, 0);
        keybd_event(VK_MENU, 0, KEYEVENTF_KEYUP, 0);
        ShowWindow(focus, SW_SHOW);
        SetForegroundWindow(focus);
        BringWindowToTop(focus);
        SetFocus(focus);
        if (fgt && fgt != me) AttachThreadInput(me, fgt, FALSE);
        bea_log("display: window %s in front", GetForegroundWindow() == focus ? "brought" : "NOT brought");
    }
    HRESULT hr = g_CreateDevice_orig(d3d, adapter, type, focus, flags, pp, out);
    if (pp) {
        const UINT* p = reinterpret_cast<const UINT*>(pp);     // D3DPRESENT_PARAMETERS
        bea_log("display: CreateDevice %08lx: %ux%u format %u %s, refresh %u", (unsigned long)hr, p[0], p[1], p[2],
                p[8] ? "windowed" : "fullscreen", p[12]);
    }
    if (g_fslog) {
        if (SUCCEEDED(hr) && out && *out && !g_PresentCount_orig) {
            void* present = (*reinterpret_cast<void***>(*out))[17];
            if (MH_CreateHook(present, reinterpret_cast<void*>(&PresentCount_hook), reinterpret_cast<void**>(&g_PresentCount_orig)) == MH_OK)
                MH_EnableHook(present);
        }
        return hr;
    }
    if (SUCCEEDED(hr) && out && *out && !g_Present_orig) {
        void* present = (*reinterpret_cast<void***>(*out))[17];
        if (MH_CreateHook(present, reinterpret_cast<void*>(&Present_hook), reinterpret_cast<void**>(&g_Present_orig)) == MH_OK &&
            MH_EnableHook(present) == MH_OK)
            bea_log("harness: Present limited to one shown frame per 50 ms");
    }
    return hr;
}

// BEA_FAKECARD=VVVV:DDDD[:driver version, 16 hex digits]: the adapter reports
// that vendor and device (and driver), so the game applies that card's
// cardid.txt tweaks and options (other render paths: no hardware T&L, other
// shadow and landscape methods, no mipmaps...) on whatever GPU runs the test
typedef HRESULT (WINAPI *GetAdapterIdentifier_t)(void*, UINT, DWORD, D3DADAPTER_IDENTIFIER9*);
GetAdapterIdentifier_t g_GetAdapterIdentifier_orig = nullptr;
DWORD g_fake_vendor = 0, g_fake_device = 0;
LONGLONG g_fake_driver = 0;
bool g_fake_card = false;

HRESULT WINAPI GetAdapterIdentifier_hook(void* d3d, UINT adapter, DWORD flags, D3DADAPTER_IDENTIFIER9* id)
{
    HRESULT hr = g_GetAdapterIdentifier_orig(d3d, adapter, flags, id);
    if (SUCCEEDED(hr) && id && g_fake_card) {
        static bool said = false;
        if (!said) {
            said = true;
            bea_log("harness: adapter %04lx:%04lx driver %016llx reported as %04lx:%04lx driver %016llx (BEA_FAKECARD)",
                    id->VendorId, id->DeviceId, (unsigned long long)id->DriverVersion.QuadPart,
                    g_fake_vendor, g_fake_device, (unsigned long long)(g_fake_driver ? g_fake_driver : id->DriverVersion.QuadPart));
        }
        id->VendorId = g_fake_vendor;
        id->DeviceId = g_fake_device;
        if (g_fake_driver) id->DriverVersion.QuadPart = g_fake_driver;
    }
    return hr;
}

void* WINAPI Direct3DCreate9_hook(UINT sdk)
{
    void* d3d = g_Direct3DCreate9_orig(sdk);
    if (d3d && !g_CreateDevice_orig) {
        void* create = (*reinterpret_cast<void***>(d3d))[16];
        if (MH_CreateHook(create, reinterpret_cast<void*>(&CreateDevice_hook), reinterpret_cast<void**>(&g_CreateDevice_orig)) == MH_OK)
            MH_EnableHook(create);
        char fc[64];
        if (GetEnvironmentVariableA("BEA_FAKECARD", fc, sizeof fc)) {
            unsigned long v = 0, d = 0;
            unsigned long long drv = 0;
            if (sscanf(fc, "%lx:%lx:%llx", &v, &d, &drv) >= 2) {
                g_fake_vendor = v; g_fake_device = d; g_fake_driver = (LONGLONG)drv; g_fake_card = true;
                void* gai = (*reinterpret_cast<void***>(d3d))[5];
                if (MH_CreateHook(gai, reinterpret_cast<void*>(&GetAdapterIdentifier_hook), reinterpret_cast<void**>(&g_GetAdapterIdentifier_orig)) == MH_OK)
                    MH_EnableHook(gai);
            }
        }
    }
    return d3d;
}

// Autopilot (BEA_AUTOPILOT=<seed>, in-level runs only): random player input,
// so soaks also run the code behind the player's actions (moving, firing,
// weapon switching, walker/jet transforms, retro thrusters, zoom), not only
// what the level does by itself.  The keyboard reaches the game as
// WM_KEYDOWN/WM_KEYUP (PCLTShell::vslot12, the window procedure, keeps a key
// table by scan code) and the mouse as WM_MOUSEMOVE/buttons/wheel, so posting those
// messages to the game window is the same path as a real player.  Controls
// are the manual's defaults; Escape (pause) is never pressed.

struct Key { UINT vk; UINT scan; };
const Key kMove[] = { {'W', 0x11}, {'S', 0x1f}, {'A', 0x1e}, {'D', 0x20} };
const Key kSpace = {VK_SPACE, 0x39}, kShift = {VK_SHIFT, 0x2a}, kTab = {VK_TAB, 0x0f};
const Key kUp = {VK_UP, 0x48}, kEnter = {VK_RETURN, 0x1c};

uint32_t g_rng = 1;
uint32_t rnd(uint32_t n) { g_rng = g_rng * 1103515245u + 12345u; return (g_rng >> 8) % n; }

void key(HWND h, Key k, bool down)
{
    LPARAM lp = 1 | (k.scan << 16) | (down ? 0 : 0xc0000000u);
    PostMessageA(h, down ? WM_KEYDOWN : WM_KEYUP, k.vk, lp);
}

DWORD WINAPI autopilot_thread(LPVOID)
{
    // wait for the level to be running: frames advancing for a few seconds
    while (!g_game_hwnd || g_bea_frames < 200) Sleep(250);
    HWND h = g_game_hwnd;
    bea_log("autopilot: started (seed %u)", g_rng);
    int move = -1, move_left = 0, fire_left = 0, shift_left = 0;
    int mx = 320, my = 240;
    RECT rc;
    DWORD over_since = 0;
    int retries = 0;
    for (unsigned tick = 0;; ++tick) {
        Sleep(100);
        if (!IsWindow(h)) return 0;
        // The mission-end screen (Defeat / Victory, then Retry and Quit) does
        // not react to random input, and the rest of the soak sat on it
        // (2026-10-20, user's screenshots: "Battle Engine fell in the sea").
        // The game's own state says when it is up: CGame (0x8a9a98) +0x28 is
        // 2 while loading, 3 in play and 4 once the mission is over (logged
        // over runs that reached the screen; CPauseMenu::vslot0 0x4d0e50 sets
        // it).  After 2 s in state 4, choose Retry (Up selects the first
        // item, Enter confirms); again every 5 s while it stays 4.  More play
        // per soak, and the level-restart path gets exercised.
        int state = *reinterpret_cast<volatile int*>(0x008a9ac0);
        if (state != 4) over_since = 0;
        else if (!over_since) over_since = GetTickCount();
        if (over_since && GetTickCount() - over_since >= 2000) {
            over_since = 0;
            if (move >= 0) { key(h, kMove[move], false); move = -1; }
            if (fire_left > 0) { PostMessageA(h, WM_LBUTTONUP, 0, MAKELPARAM(mx, my)); fire_left = 0; }
            if (shift_left > 0) { key(h, kShift, false); shift_left = 0; }
            for (int i = 0; i < 3; ++i) { key(h, kUp, true); key(h, kUp, false); Sleep(100); }
            key(h, kEnter, true); key(h, kEnter, false);
            bea_log("autopilot: mission over (game state 4): Retry #%d", ++retries);
            Sleep(3000);
            continue;
        }
        GetClientRect(h, &rc);
        int w = rc.right > 16 ? rc.right : 640, ht = rc.bottom > 16 ? rc.bottom : 480;
        // movement: hold one of W/S/A/D (or nothing) for 0.5-3 s
        if (--move_left <= 0) {
            if (move >= 0) key(h, kMove[move], false);
            move = (int)rnd(6) - 1;                   // -1 or 4: stand still
            if (move > 3) move = -1;
            if (move >= 0) key(h, kMove[move], true);
            move_left = 5 + (int)rnd(25);
        }
        // look: random walk of the mouse inside the client area
        mx += (int)rnd(81) - 40; my += (int)rnd(41) - 20;
        mx = mx < 0 ? 0 : mx >= w ? w - 1 : mx;
        my = my < 0 ? 0 : my >= ht ? ht - 1 : my;
        PostMessageA(h, WM_MOUSEMOVE, fire_left > 0 ? MK_LBUTTON : 0, MAKELPARAM(mx, my));
        // fire: bursts of 0.3-2 s, about a third of the time
        if (fire_left > 0 && --fire_left == 0) PostMessageA(h, WM_LBUTTONUP, 0, MAKELPARAM(mx, my));
        else if (fire_left == 0 && rnd(20) == 0) {
            fire_left = 3 + (int)rnd(17);
            PostMessageA(h, WM_LBUTTONDOWN, MK_LBUTTON, MAKELPARAM(mx, my));
        }
        // next weapon, about every 8 s
        if (rnd(80) == 0) {
            PostMessageA(h, WM_RBUTTONDOWN, MK_RBUTTON, MAKELPARAM(mx, my));
            PostMessageA(h, WM_RBUTTONUP, 0, MAKELPARAM(mx, my));
        }
        // walker/jet transform, about every 20 s
        if (rnd(200) == 0) { key(h, kSpace, true); key(h, kSpace, false); }
        // retro thrusters held 0.5-2 s, about every 15 s
        if (shift_left > 0 && --shift_left == 0) key(h, kShift, false);
        else if (shift_left == 0 && rnd(150) == 0) { shift_left = 5 + (int)rnd(15); key(h, kShift, true); }
        // special function, about every 25 s
        if (rnd(250) == 0) { key(h, kTab, true); key(h, kTab, false); }
        // zoom, about every 10 s
        if (rnd(100) == 0) {
            POINT p = {mx, my};
            ClientToScreen(h, &p);
            PostMessageA(h, WM_MOUSEWHEEL, MAKEWPARAM(0, rnd(2) ? WHEEL_DELTA : -WHEEL_DELTA), MAKELPARAM(p.x, p.y));
        }
    }
}

// Mission outcome logger (in-level runs): CGame (0x8a9a98) +0x28 leaves 3
// (playing) for 4 when the level is lost (0x46f430, which also stores the
// "level lost" message id at +0x114), 8 when it is won (0x46f3e0, called by
// the level script) and 6/7 when player 1/2 wins a two-player game
// (0x46f360).  BEA_ENDEXIT=1 quits the game once the outcome is logged, so a
// survey of which levels end by themselves (and how) does not sit on the
// end screen.
// Text of a string id, read from the game's string table (0x83d960) the way
// 0x4f2580 finds it for hashed ids, without calling into the game.
void string_text(unsigned id, char* out, int n)
{
    out[0] = 0;
    const int* tab = reinterpret_cast<const int*>(0x0083d960);
    int kind = tab[0], count = tab[4];
    const int* rows = reinterpret_cast<const int*>(tab[1]);
    const wchar_t* text = reinterpret_cast<const wchar_t*>(tab[2]);
    if (kind <= 0 || !rows || !text || id == 0) return;
    int stride = kind == 2 || kind == 3 ? 3 : 2;
    for (int i = 0; i < count; ++i)
        if (static_cast<unsigned>(rows[3 + i * stride]) == id) {
            WideCharToMultiByte(CP_ACP, 0, text + rows[4 + i * stride], -1, out, n, nullptr, nullptr);
            out[n - 1] = 0;
            return;
        }
}

DWORD WINAPI outcome_thread(LPVOID)
{
    char buf[8];
    bool exit_at_end = GetEnvironmentVariableA("BEA_ENDEXIT", buf, sizeof buf) && buf[0] == '1';
    bool frame_exact = GetEnvironmentVariableA("BEA_FPSCLOCK", buf, sizeof buf) && buf[0] == '1';
    int last = -1;
    DWORD playing_since = 0;
    long playing_frame = 0;
    // BEA_ENDCLOCK=<seconds>: a run with no outcome ends at that game clock
    // and logs "none" as its outcome, so a level the original never finishes
    // is compared at the same game time, not after the same real seconds
    // (at the fixed clock the ported build reaches a different game time in
    // 120 s real, and level 200 "changed" from none to an outcome at 188 s,
    // 2026-10-21)
    char ecb[16] = "";
    double end_clock = GetEnvironmentVariableA("BEA_ENDCLOCK", ecb, sizeof ecb) ? atof(ecb) : 0;
    for (;;) {
        Sleep(1);           // a 1 ms poll: the frame of the outcome is read at most a frame or two late
        bea_stalehunt_poll();
        int state = *reinterpret_cast<volatile int*>(0x008a9ac0);
        if (end_clock > 0 && state == 3 && *reinterpret_cast<volatile float*>(0x00672fd0) >= end_clock) {
            bea_stalehunt_report();
            bea_capture_report();
            bea_log("outcome: NONE (game state 3 after %us real time, frame %ld (+%ld in play), clock %.3f, lost message 0 \"none\")",
                    playing_since ? (GetTickCount() - playing_since) / 1000 : 0u, g_fixed_frames, g_fixed_frames - playing_frame,
                    frame_exact ? end_clock : (double)*reinterpret_cast<volatile float*>(0x00672fd0));   // (exact: the end itself)
            if (exit_at_end) { Sleep(500); ExitProcess(0); }
            end_clock = 0;
        }
        if (state == last) continue;
        long frame = g_fixed_frames;
        float clock = *reinterpret_cast<volatile float*>(0x00672fd0);   // the game clock, seconds
        if (frame_exact && g_seen_state == state) { frame = g_state_frame; clock = g_state_clock; }
        if (state == 3 && !playing_since) { playing_since = GetTickCount(); playing_frame = frame; }
        DWORD secs = playing_since ? (GetTickCount() - playing_since) / 1000 : 0;
        // state 5: every objective done (my level-500 win, 2026-10-27: all
        // objectives green, then a black frozen window in -level mode a few
        // seconds later); also seen when broken ports "won" an idle level 200
        const char* what = state == 4 ? "DEFEAT" : state == 8 ? "VICTORY" : state == 6 || state == 7 ? "PLAYER WON"
                         : state == 5 ? "MISSION_WON" : nullptr;
        if (what) {
            unsigned msg = *reinterpret_cast<volatile unsigned*>(0x008a9bac);
            char text[160];
            if (state == 5)
                lstrcpynA(text, "Objectives complete", sizeof text);
            else
                string_text(msg, text, sizeof text);
            bea_stalehunt_report();
            bea_capture_report();
            bea_log("outcome: %s (game state %d after %us real time, frame %ld (+%ld in play), clock %.3f, lost message %#x \"%s\")",
                    what, state, (unsigned)secs, frame, frame - playing_frame, (double)clock, msg, text);
        } else
            bea_log("outcome: game state %d -> %d", last, state);
        last = state;
        if (what && exit_at_end) {
            // a person playing (recording) sees the outcome screen first: it
            // closed before the player could see it (2026-10-23)
            Sleep(g_recording ? 6000 : 1000);
            ExitProcess(0);
        }
    }
}

void start_autopilot()
{
    if (strstr(GetCommandLineA(), "-level"))
        if (HANDLE t = CreateThread(nullptr, 0, outcome_thread, nullptr, 0, nullptr)) CloseHandle(t);
    char buf[32];
    if (!GetEnvironmentVariableA("BEA_AUTOPILOT", buf, sizeof buf) || !strstr(GetCommandLineA(), "-level")) return;
    g_rng = strtoul(buf, nullptr, 10);
    if (g_rng <= 1) g_rng = GetTickCount() ^ GetCurrentProcessId();   // "1": a fresh seed per run
    HANDLE t = CreateThread(nullptr, 0, autopilot_thread, nullptr, 0, nullptr);
    if (t) CloseHandle(t);
}

}  // namespace

// DINPUT8 keeps the devices acquired for exclusive use, across processes, in
// a one-page shared section: a count at +0, 0x1c-byte entries from +0xd0.
// A test run wrote image data over it (2026-10-30, count 0x3a3a3a3a; Steam
// kept the section alive), and every later game crashed in its first Acquire
// (0x42d466) scanning past the page.  A count that cannot fit is reset: a
// fresh section is all zeros (dinput only maps it).
void check_dinput_table()
{
    HANDLE m = OpenFileMappingW(FILE_MAP_READ | FILE_MAP_WRITE, FALSE, L"DirectInput.{5944E681-C92E-11CF-BFC7-444553540000}");
    if (!m) return;
    HANDLE mx = OpenMutexW(SYNCHRONIZE | MUTEX_MODIFY_STATE, FALSE, L"DirectInput.{5944E682-C92E-11CF-BFC7-444553540000}");
    if (mx && WaitForSingleObject(mx, 2000) != WAIT_OBJECT_0) { CloseHandle(mx); mx = nullptr; }
    if (auto* p = static_cast<uint8_t*>(MapViewOfFile(m, FILE_MAP_READ | FILE_MAP_WRITE, 0, 0, 0x1000))) {
        uint32_t n = *reinterpret_cast<uint32_t*>(p);
        if (n > (0x1000 - 0xd0) / 0x1c) {
            memset(p, 0, 0x1000);
            bea_log("harness: DirectInput shared table had count %08x (corrupt): reset", n);
        }
        UnmapViewOfFile(p);
    }
    if (mx) { ReleaseMutex(mx); CloseHandle(mx); }
    CloseHandle(m);
}

// ---------------------------------------------------------------------------
// BEA_SOUNDCLOCK=1 (with the fixed clock, BEA_FIXEDSTEP): DirectSound buffers play on game
// time. Mission scripts wait for a voice line to finish (GetStatus) and streams refill by the
// play cursor (GetCurrentPosition); on the sound card's real time a run with sound on parted
// from the next (2.11 lost at 190-198 s, 2026-10-31). Here every secondary buffer's position
// and playing state come from the fixed clock (frames x step), its size and byte rate (from
// CreateSoundBuffer, SetFrequency): a 4 s line ends 4 game seconds after Play, every run.
// The real calls still go to DirectSound, so the sound is heard (it may stutter) (2026-11-05)
struct SndBuf { uint32_t size, bps, block, rate0; bool playing, looping; double t0; uint32_t pos0; };
static std::map<void*, SndBuf> g_snd;
static CRITICAL_SECTION g_snd_cs;
static double snd_now() { return (double)g_fixed_frames * g_fixed_step; }
static uint32_t snd_pos(SndBuf& b)
{
    if (!b.playing) return b.pos0;
    uint64_t p = b.pos0 + (uint64_t)((snd_now() - b.t0) * b.bps);
    if (b.block > 1) p -= p % b.block;
    if (b.looping) return (uint32_t)(p % b.size);
    if (p >= b.size) { b.playing = false; b.pos0 = 0; return 0; }   // a one-shot buffer stops at its end
    return (uint32_t)p;
}
typedef HRESULT (WINAPI *DSCreate_t)(const GUID*, void**, void*);
typedef HRESULT (WINAPI *CreateSB_t)(void*, const void*, void**, void*);
typedef HRESULT (WINAPI *DupSB_t)(void*, void*, void**);
typedef HRESULT (WINAPI *GetPos_t)(void*, DWORD*, DWORD*);
typedef HRESULT (WINAPI *GetStatus_t)(void*, DWORD*);
typedef HRESULT (WINAPI *Play_t)(void*, DWORD, DWORD, DWORD);
typedef HRESULT (WINAPI *SetPos_t)(void*, DWORD);
typedef HRESULT (WINAPI *SetFreq_t)(void*, DWORD);
typedef HRESULT (WINAPI *Stop_t)(void*);
typedef ULONG (WINAPI *Release_t)(void*);
static DSCreate_t g_DSCreate8_orig = nullptr, g_DSCreate_orig = nullptr;
static CreateSB_t g_CreateSB_orig = nullptr;
static DupSB_t g_DupSB_orig = nullptr;
static GetPos_t g_GetPos_orig = nullptr;
static GetStatus_t g_GetStatus_orig = nullptr;
static Play_t g_Play_orig = nullptr;
static SetPos_t g_SetPos_orig = nullptr;
static SetFreq_t g_SetFreq_orig = nullptr;
static Stop_t g_Stop_orig = nullptr;
static Release_t g_SBRelease_orig = nullptr;

static HRESULT WINAPI GetPos_hook(void* b, DWORD* play, DWORD* write)
{
    EnterCriticalSection(&g_snd_cs);
    auto it = g_snd.find(b);
    if (it == g_snd.end()) {
        static long n = 0;
        if (n++ % 500 == 0) bea_log("soundclock: GetCurrentPosition on an unknown buffer %p (%ld)", b, n);
        LeaveCriticalSection(&g_snd_cs); return g_GetPos_orig(b, play, write);
    }
    SndBuf& s = it->second;
    uint32_t p = snd_pos(s);
    uint32_t lead = s.bps / 100;
    if (s.block > 1) lead -= lead % s.block;
    if (play) *play = p;
    if (write) *write = (p + lead) % s.size;
    LeaveCriticalSection(&g_snd_cs);
    return 0;
}
static HRESULT WINAPI GetStatus_hook(void* b, DWORD* st)
{
    EnterCriticalSection(&g_snd_cs);
    auto it = g_snd.find(b);
    if (it == g_snd.end()) {
        static long n = 0;
        if (n++ % 500 == 0) bea_log("soundclock: GetStatus on an unknown buffer %p (%ld)", b, n);
        LeaveCriticalSection(&g_snd_cs); return g_GetStatus_orig(b, st);
    }
    snd_pos(it->second);
    if (st) *st = it->second.playing ? (1u | (it->second.looping ? 4u : 0u)) : 0u;   // DSBSTATUS_PLAYING, _LOOPING
    LeaveCriticalSection(&g_snd_cs);
    return 0;
}
static HRESULT WINAPI Play_hook(void* b, DWORD r, DWORD prio, DWORD flags)
{
    HRESULT hr = g_Play_orig(b, r, prio, flags);
    EnterCriticalSection(&g_snd_cs);
    auto it = g_snd.find(b);
    if (it != g_snd.end()) {
        SndBuf& s = it->second;
        s.pos0 = snd_pos(s);
        s.playing = true;
        s.looping = (flags & 1) != 0;                           // DSBPLAY_LOOPING
        s.t0 = snd_now();
    }
    LeaveCriticalSection(&g_snd_cs);
    return hr;
}
static HRESULT WINAPI Stop_hook(void* b)
{
    EnterCriticalSection(&g_snd_cs);
    auto it = g_snd.find(b);
    if (it != g_snd.end()) { it->second.pos0 = snd_pos(it->second); it->second.playing = false; }
    LeaveCriticalSection(&g_snd_cs);
    return g_Stop_orig(b);
}
static HRESULT WINAPI SetPos_hook(void* b, DWORD pos)
{
    EnterCriticalSection(&g_snd_cs);
    auto it = g_snd.find(b);
    if (it != g_snd.end()) { it->second.pos0 = it->second.size ? pos % it->second.size : 0; it->second.t0 = snd_now(); }
    LeaveCriticalSection(&g_snd_cs);
    return g_SetPos_orig(b, pos);
}
static HRESULT WINAPI SetFreq_hook(void* b, DWORD f)
{
    EnterCriticalSection(&g_snd_cs);
    auto it = g_snd.find(b);
    if (it != g_snd.end()) {
        SndBuf& s = it->second;
        s.pos0 = snd_pos(s);
        s.t0 = snd_now();
        s.bps = f ? f * s.block : s.rate0;                      // 0: DSBFREQUENCY_ORIGINAL
    }
    LeaveCriticalSection(&g_snd_cs);
    return g_SetFreq_orig(b, f);
}
static ULONG WINAPI SBRelease_hook(void* b)
{
    ULONG n = g_SBRelease_orig(b);
    if (n == 0) {
        EnterCriticalSection(&g_snd_cs);
        g_snd.erase(b);
        LeaveCriticalSection(&g_snd_cs);
    }
    return n;
}
static void hook_buffer_vtable(void* buf)
{
    if (g_GetPos_orig) return;
    void** vt = *reinterpret_cast<void***>(buf);
    struct { int slot; void* fn; void** orig; } h[] = {
        {2, (void*)&SBRelease_hook, (void**)&g_SBRelease_orig}, {4, (void*)&GetPos_hook, (void**)&g_GetPos_orig},
        {9, (void*)&GetStatus_hook, (void**)&g_GetStatus_orig}, {12, (void*)&Play_hook, (void**)&g_Play_orig},
        {13, (void*)&SetPos_hook, (void**)&g_SetPos_orig}, {17, (void*)&SetFreq_hook, (void**)&g_SetFreq_orig},
        {18, (void*)&Stop_hook, (void**)&g_Stop_orig}};
    for (auto& x : h)
        if (MH_CreateHook(vt[x.slot], x.fn, x.orig) == MH_OK) MH_EnableHook(vt[x.slot]);
    bea_log("harness: sound buffers play on game time (BEA_SOUNDCLOCK)");
}
static HRESULT WINAPI CreateSB_hook(void* ds, const void* desc, void** out, void* outer)
{
    HRESULT hr = g_CreateSB_orig(ds, desc, out, outer);
    const DWORD* d = static_cast<const DWORD*>(desc);              // DSBUFFERDESC: size, flags, bytes, reserved, format
    if (SUCCEEDED(hr) && out && *out && d && !(d[1] & 1) && d[4]) { // not DSBCAPS_PRIMARYBUFFER
        const uint8_t* wf = reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(d[4]));   // WAVEFORMATEX
        SndBuf s{};
        s.size = d[2];
        memcpy(&s.bps, wf + 8, 4);                                  // nAvgBytesPerSec
        uint16_t ba;
        memcpy(&ba, wf + 12, 2);                                    // nBlockAlign
        s.block = ba ? ba : 1;
        s.rate0 = s.bps;
        if (s.size && s.bps) {
            hook_buffer_vtable(*out);
            EnterCriticalSection(&g_snd_cs);
            g_snd[*out] = s;
            LeaveCriticalSection(&g_snd_cs);
        }
    }
    return hr;
}
static HRESULT WINAPI DupSB_hook(void* ds, void* src, void** out)
{
    HRESULT hr = g_DupSB_orig(ds, src, out);
    if (SUCCEEDED(hr) && out && *out) {
        EnterCriticalSection(&g_snd_cs);
        auto it = g_snd.find(src);
        if (it != g_snd.end()) {
            SndBuf s = it->second;
            s.playing = false;
            s.pos0 = 0;
            g_snd[*out] = s;
        }
        LeaveCriticalSection(&g_snd_cs);
    }
    return hr;
}
static void hook_ds(void* ds)
{
    if (g_CreateSB_orig || !ds) return;
    void** vt = *reinterpret_cast<void***>(ds);                     // IDirectSound(8): 3 CreateSoundBuffer, 5 Duplicate
    if (MH_CreateHook(vt[3], (void*)&CreateSB_hook, (void**)&g_CreateSB_orig) == MH_OK) MH_EnableHook(vt[3]);
    if (MH_CreateHook(vt[5], (void*)&DupSB_hook, (void**)&g_DupSB_orig) == MH_OK) MH_EnableHook(vt[5]);
}
static HRESULT WINAPI DSCreate8_hook(const GUID* g, void** out, void* outer)
{
    HRESULT hr = g_DSCreate8_orig(g, out, outer);
    if (SUCCEEDED(hr) && out) hook_ds(*out);
    return hr;
}
static HRESULT WINAPI DSCreate_hook(const GUID* g, void** out, void* outer)
{
    HRESULT hr = g_DSCreate_orig(g, out, outer);
    if (SUCCEEDED(hr) && out) hook_ds(*out);
    return hr;
}
static void install_soundclock()
{
    char b[8];
    if (!GetEnvironmentVariableA("BEA_SOUNDCLOCK", b, sizeof b) || b[0] != '1') return;
    if (g_fixed_step <= 0) { bea_log("harness: BEA_SOUNDCLOCK needs the fixed clock (BEA_FIXEDSTEP): off"); return; }
    InitializeCriticalSection(&g_snd_cs);
    LoadLibraryW(L"dsound.dll");
    LPVOID t1 = nullptr, t2 = nullptr;
    if (MH_CreateHookApiEx(L"dsound", "DirectSoundCreate8", (void*)&DSCreate8_hook, (void**)&g_DSCreate8_orig, &t1) == MH_OK)
        MH_EnableHook(t1);
    if (MH_CreateHookApiEx(L"dsound", "DirectSoundCreate", (void*)&DSCreate_hook, (void**)&g_DSCreate_orig, &t2) == MH_OK)
        MH_EnableHook(t2);
    bea_log("harness: BEA_SOUNDCLOCK - DirectSound hooked");
}

// ---------------------------------------------------------------------------
// BEA_VIDEOCLOCK=1 (with the fixed clock): Bink videos play on game time.  The game asks
// BinkWait whether the next frame is due (0x541d30) and Bink answers from real time, so with
// movies on the front end's background video stood at another frame in every run, original
// included (2026-11-05).  Here a video's frame k is due k / (FrameRate / FrameRateDiv) game
// seconds after its first BinkWait; the frames BinkNextFrame advanced count k.  The Bink
// open runs on a worker thread (0x5412e0 -> job start 0x528d50): BEA_SYNCJOBS=1 too.
// The start-up movies play in a loop of their own before the frame loop, where game time
// stands still: a video asked 3 times at one game time gets its next frame (the start-up loop
// polls about every 17 ms; the frame loop asks once a frame).
struct VidClk { double t0; uint32_t k; double last; uint32_t same; };
static std::map<void*, VidClk> g_vid;
static bool g_vidlog = false;                                    // BEA_VIDEOLOG=1: every BinkWait / BinkNextFrame
typedef int (WINAPI *BinkWait_t)(void*);
typedef void (WINAPI *BinkNext_t)(void*);
typedef void (WINAPI *BinkClose_t)(void*);
static BinkWait_t g_BinkWait_orig = nullptr;
static BinkNext_t g_BinkNext_orig = nullptr;
static BinkClose_t g_BinkClose_orig = nullptr;

static int WINAPI BinkWait_hook(void* bk)
{
    const uint32_t* h = static_cast<const uint32_t*>(bk);      // BINK: Width, Height, Frames, FrameNum, LastFrameNum, FrameRate, FrameRateDiv
    if (!bk || !h[5] || !h[6]) return g_BinkWait_orig(bk);
    auto it = g_vid.find(bk);
    if (it == g_vid.end()) {
        it = g_vid.emplace(bk, VidClk{snd_now(), 0, snd_now(), 0}).first;
        bea_log("harness: video %p %ux%u, %u frames at %u/%u fps on game time", bk, h[0], h[1], h[2], h[5], h[6]);
    }
    VidClk& v = it->second;
    double now = snd_now();
    if (now != v.last) { v.last = now; v.same = 0; }
    else if (v.same < 3 && ++v.same == 3 && v.k < 3) bea_log("harness: video %p frame %u: game time stands still, frames on demand", bk, v.k);
    int r = v.same >= 3 ? 0                                       // a loop outside the frame loop
                        : now < v.t0 + (double)v.k * h[6] / h[5] ? 1 : 0;
    if (g_vidlog) bea_log("vid: wait %p frame %u k %u bink %u -> %d", bk, (unsigned)g_fixed_frames, v.k, h[3], r);
    return r;
}
static void WINAPI BinkNext_hook(void* bk)
{
    auto it = g_vid.find(bk);
    if (it != g_vid.end()) ++it->second.k;
    if (g_vidlog) bea_log("vid: next %p frame %u bink %u", bk, (unsigned)g_fixed_frames, static_cast<const uint32_t*>(bk)[3]);
    g_BinkNext_orig(bk);
}
static void WINAPI BinkClose_hook(void* bk)
{
    g_vid.erase(bk);
    g_BinkClose_orig(bk);
}
static void install_videoclock()
{
    char b[8];
    if (!GetEnvironmentVariableA("BEA_VIDEOCLOCK", b, sizeof b) || b[0] != '1') return;
    if (g_fixed_step <= 0) { bea_log("harness: BEA_VIDEOCLOCK needs the fixed clock (BEA_FIXEDSTEP): off"); return; }
    g_vidlog = GetEnvironmentVariableA("BEA_VIDEOLOG", b, sizeof b) && b[0] == '1';
    LoadLibraryW(L"binkw32.dll");
    struct { const char* name; void* fn; void** orig; } h[] = {
        {"_BinkWait@4", (void*)&BinkWait_hook, (void**)&g_BinkWait_orig},
        {"_BinkNextFrame@4", (void*)&BinkNext_hook, (void**)&g_BinkNext_orig},
        {"_BinkClose@4", (void*)&BinkClose_hook, (void**)&g_BinkClose_orig}};
    int n = 0;
    for (auto& x : h) {
        LPVOID t = nullptr;
        if (MH_CreateHookApiEx(L"binkw32", x.name, x.fn, x.orig, &t) == MH_OK && MH_EnableHook(t) == MH_OK) ++n;
    }
    bea_log("harness: BEA_VIDEOCLOCK - %d of 3 Bink calls hooked", n);
}

// BEA_EVTRACE=<file>: each event CEventManager::Flush (0x44b640) hands to its receiver, up to
// BEA_EVTRACE_MAX (10) seconds of event-manager time: `EV <manager time> <event number> <event
// time> <receiver's class>` (times as float bits, the class from the MSVC type information),
// the line a traced onslaught-ce build writes, to find the first event the two differ on
// (2026-11-07: level 720's pre-run processed 4 fewer events in the port by frame 3).  The two
// HandleEvent calls (0x44b687 buffers, 0x44b6ef overflow: load the vtable, push the event,
// call slot 0) jump to stubs that log and make the same call.
static FILE* g_evtrace = nullptr;
static unsigned g_evtrace_max = 0x41200000;     // 10.0f; times are positive, so their bits order like them
extern "C" void __cdecl bea_evtrace_log(const void* to, const unsigned char* ev)
{
    unsigned now;
    memcpy(&now, reinterpret_cast<const void*>(0x00672fc8 + 8), 4);
    if (now > g_evtrace_max) {
        static bool flushed = false;            // runs end in ExitProcess, which leaves the buffer unwritten
        if (!flushed) { flushed = true; fflush(g_evtrace); }
        return;
    }
    const char* name = "?";
    const void* const* vt = *static_cast<const void* const* const*>(to);
    const unsigned char* col = !IsBadReadPtr(vt - 1, 4) ? static_cast<const unsigned char*>(vt[-1]) : nullptr;
    if (col && !IsBadReadPtr(col + 12, 4)) {
        const char* td = *reinterpret_cast<const char* const*>(col + 12);
        if (td && !IsBadReadPtr(td + 8, 4)) name = td + 8;
    }
    unsigned t;
    memcpy(&t, ev + 0x10, 4);
    unsigned long count;                        // events processed before this one (the manager's +0xc)
    memcpy(&count, reinterpret_cast<const void*>(0x00672fc8 + 0xc), 4);
    fprintf(g_evtrace, "EV %08x %d %08x %s %lu\n", now, (int)*reinterpret_cast<const short*>(ev + 4), t, name, count);
}
extern "C" void bea_evtrace_stub1();
extern "C" void bea_evtrace_stub2();
__asm__(".text\n"
        ".globl _bea_evtrace_stub1\n_bea_evtrace_stub1:\n"
        "\tpushal\n\tpushfl\n\tpushl %eax\n\tpushl %ecx\n\tcall _bea_evtrace_log\n\taddl $8, %esp\n\tpopfl\n\tpopal\n"
        "\tmovl (%ecx), %edx\n\tpushl %eax\n\tcall *(%edx)\n\tpushl $0x0044b68c\n\tret\n"
        ".globl _bea_evtrace_stub2\n_bea_evtrace_stub2:\n"
        "\tpushal\n\tpushfl\n\tpushl %edx\n\tpushl %ecx\n\tcall _bea_evtrace_log\n\taddl $8, %esp\n\tpopfl\n\tpopal\n"
        "\tmovl (%ecx), %eax\n\tpushl %edx\n\tcall *(%eax)\n\tpushl $0x0044b6f4\n\tret\n");
// BEA_CCTRACE=<file>: each CHLCollisionDetector::ScheduleCollisionCheck (0x480ed0) logs its inputs up to
// BEA_EVTRACE_MAX seconds, as a traced onslaught-ce build does: `CC <class> <other's class>` and the
// manager time, both centres (GetCentrePos 0x4f3ac0), both radii (+0x1c), both top speeds
// (GetMaxVelocity, slot 15) as float bits, then the time it schedules (0: not computed here).
// 2026-11-07: level 720's pre-run scheduled a ground vehicles' check 0.0013 s earlier in the port.
static FILE* g_cctrace = nullptr;
typedef void (__attribute__((thiscall)) *SchedCC_t)(void*, void*);
static SchedCC_t g_schedcc_orig = nullptr;
static const char* rtti_name(const void* obj)
{
    const void* const* vt = *static_cast<const void* const* const*>(obj);
    if (IsBadReadPtr(vt - 1, 4)) return "?";
    const unsigned char* col = static_cast<const unsigned char*>(vt[-1]);
    if (!col || IsBadReadPtr(col + 12, 4)) return "?";
    const char* td = *reinterpret_cast<const char* const*>(col + 12);
    return td && !IsBadReadPtr(td + 8, 4) ? td + 8 : "?";
}
static void __attribute__((thiscall)) schedcc_hook(void* self, void* other)
{
    unsigned now;
    memcpy(&now, reinterpret_cast<const void*>(0x00672fc8 + 8), 4);
    if (g_cctrace && now <= g_evtrace_max) {
        typedef void (__attribute__((thiscall)) *Centre_t)(void*, float*);
        typedef float (__attribute__((thiscall)) *Speed_t)(void*);
        char* mine = *reinterpret_cast<char**>(static_cast<char*>(self) + 8);
        void* thing = *reinterpret_cast<void**>(mine + 8);
        void* othing = *reinterpret_cast<void**>(static_cast<char*>(other) + 8);
        float c[4], o[4], v[12];
        reinterpret_cast<Centre_t>(0x004f3ac0)(othing, o);
        reinterpret_cast<Centre_t>(0x004f3ac0)(thing, c);
        float s2 = reinterpret_cast<Speed_t>((*reinterpret_cast<void***>(othing))[15])(othing);
        float s1 = reinterpret_cast<Speed_t>((*reinterpret_cast<void***>(thing))[15])(thing);
        memcpy(&v[0], &now, 4);
        v[1] = c[0]; v[2] = c[1]; v[3] = c[2]; v[4] = o[0]; v[5] = o[1]; v[6] = o[2];
        memcpy(&v[7], mine + 0x1c, 4);
        memcpy(&v[8], static_cast<char*>(other) + 0x1c, 4);
        v[9] = s1; v[10] = s2; v[11] = 0;
        unsigned u[12];
        memcpy(u, v, sizeof u);
        fprintf(g_cctrace, "CC %s %s", rtti_name(thing), rtti_name(othing));
        for (unsigned x : u) fprintf(g_cctrace, " %08x", x);
        fputc('\n', g_cctrace);
    } else if (g_cctrace) {
        fflush(g_cctrace);
    }
    g_schedcc_orig(self, other);
}

// BEA_GVTRACE=<file>: each CGroundVehicle::Move (0x47d1c0) logs the object's bytes +0x1c..+0x13c (position to
// orientations) at entry (0) and exit (1) with its thing number (+0x2e), up to BEA_EVTRACE_MAX seconds, as a
// traced onslaught-ce build does (`GV <manager time> <number> <phase> <hex>`).
static FILE* g_gvtrace = nullptr;
typedef void (__attribute__((thiscall)) *GvMove_t)(void*);
static GvMove_t g_gvmove_orig = nullptr;
static void gv_log(const void* self, int phase)
{
    unsigned now;
    memcpy(&now, reinterpret_cast<const void*>(0x00672fc8 + 8), 4);
    if (now > g_evtrace_max) { fflush(g_gvtrace); return; }
    fprintf(g_gvtrace, "GV %08x %d %d ", now, (int)*reinterpret_cast<const short*>(static_cast<const char*>(self) + 0x2e), phase);
    const unsigned char* b = static_cast<const unsigned char*>(self) + 0x1c;
    for (int k = 0; k < 0x120; ++k) fprintf(g_gvtrace, "%02x", b[k]);
    fputc('\n', g_gvtrace);
}
static void __attribute__((thiscall)) gvmove_hook(void* self)
{
    gv_log(self, 0);
    g_gvmove_orig(self);
    gv_log(self, 1);
}

// BEA_HITTRACE=<file>: each CUnit::Hit (0x4fcc30) with a collision report logs the event time, the unit's thing
// number, the contact count (+0x80) and normals 0..2 (+0x08, 16 bytes apart) as float bits, up to
// BEA_EVTRACE_MAX seconds, as a traced onslaught-ce build does (`HIT ...`). Hit adds normals 1 and 2 whatever
// the count, so with two contacts normal 2 is whatever the stack held.
static FILE* g_hittrace = nullptr;
typedef void (__attribute__((thiscall)) *UnitHit_t)(void*, void*, void*);
static UnitHit_t g_unithit_orig = nullptr;
static void __attribute__((thiscall)) unithit_hook(void* self, void* other, void* report)
{
    unsigned now;
    memcpy(&now, reinterpret_cast<const void*>(0x00672fc8 + 8), 4);
    if (report && now <= g_evtrace_max) {
        const unsigned char* r = static_cast<const unsigned char*>(report);
        fprintf(g_hittrace, "HIT %08x %d %d", now, (int)*reinterpret_cast<const short*>(static_cast<const char*>(self) + 0x2e),
                *reinterpret_cast<const int*>(r + 0x80));
        for (int k = 0; k < 3; ++k)
            for (int c = 0; c < 3; ++c) fprintf(g_hittrace, " %08x", *reinterpret_cast<const unsigned*>(r + 8 + 16 * k + 4 * c));
        fputc('\n', g_hittrace);
    } else if (now > g_evtrace_max) {
        fflush(g_hittrace);
    }
    g_unithit_orig(self, other, report);
}

// BEA_COLTRACE=<file>: CCollisionSeekingThing::Unknown6 (0x4264a0) tests a pair through the volume's Collide
// (0x4267cb, call slot 5) into a report on its own stack (esp + 0x74). The call site jumps to a stub that logs the
// report before (what the stack held: Hit reads normal 2 even with two contacts) and after, and makes the same
// call at the same stack depth, so the frame it reads is not moved: `COL <time> <0 before|1 after> <report
// address> <result> <thing number> <contacts> <normals 0..2 as float bits>`.
static FILE* g_coltrace = nullptr;
extern "C" void __cdecl bea_col_log(int phase, const unsigned char* report, int result, const unsigned char* cs)
{
    unsigned now;
    memcpy(&now, reinterpret_cast<const void*>(0x00672fc8 + 8), 4);
    if (now > g_evtrace_max) { fflush(g_coltrace); return; }
    if (phase == 0) bea_watch_ring_dump("first collision test");
    const char* thing = cs ? *reinterpret_cast<const char* const*>(cs + 8) : nullptr;
    fprintf(g_coltrace, "COL %08x %d %p %d %d %d", now, phase, report, result,
            thing ? (int)*reinterpret_cast<const short*>(thing + 0x2e) : -1, *reinterpret_cast<const int*>(report + 0x80));
    for (int k = 0; k < 3; ++k)
        for (int c = 0; c < 3; ++c) fprintf(g_coltrace, " %08x", *reinterpret_cast<const unsigned*>(report + 8 + 16 * k + 4 * c));
    fputc('\n', g_coltrace);
}
extern "C" void bea_col_stub();
__asm__(".text\n"
        ".globl _bea_col_stub\n_bea_col_stub:\n"
        // before: the four arguments are pushed, so the report is at esp + 16 + 0x74
        "\tpushal\n\tpushfl\n"
        "\tpushl %ebp\n\tpushl $0\n\tleal 44+16+0x74(%esp), %eax\n\tpushl %eax\n\tpushl $0\n"
        "\tcall _bea_col_log\n\taddl $16, %esp\n\tpopfl\n\tpopal\n"
        "\tcall *0x14(%edx)\n"
        // after: the callee popped its arguments; the report is at esp + 0x74
        "\tpushl %eax\n\tpushal\n\tpushfl\n"
        "\tpushl %ebp\n\tpushl 40(%esp)\n\tleal 48+0x74(%esp), %ecx\n\tpushl %ecx\n\tpushl $1\n"
        "\tcall _bea_col_log\n\taddl $16, %esp\n\tpopfl\n\tpopal\n\tpopl %eax\n"
        "\tcmpl %ebx, %eax\n\tpushl $0x004267d0\n\tret\n");

// BEA_RDTRACE=<file>: CRound::Init (0x4d8410, at its end: phase 2) and each CRound::Move (0x4d8e40, entry 0 and exit
// 1) log the round's bytes +0x1c..+0x13c and thing number between BEA_RDTRACE_MIN and BEA_RDTRACE_MAX seconds, as a
// traced onslaught-ce build does (`RD <time> <number> <phase> <hex>`).
static FILE* g_rdtrace = nullptr;
static unsigned g_rd_lo = 0, g_rd_hi = 0x41200000;
typedef void (__attribute__((thiscall)) *RdInit_t)(void*, void*);
typedef void (__attribute__((thiscall)) *RdMove_t)(void*);
static RdInit_t g_rdinit_orig = nullptr;
static RdMove_t g_rdmove_orig = nullptr;
static void rd_log(const void* self, int phase)
{
    unsigned now;
    memcpy(&now, reinterpret_cast<const void*>(0x00672fc8 + 8), 4);
    if (now > g_rd_hi) { fflush(g_rdtrace); return; }
    if (now < g_rd_lo) return;
    unsigned short cw;                          // the x87 control word, in the phase's high bits
    __asm__ volatile("fnstcw %0" : "=m"(cw));
    fprintf(g_rdtrace, "RD %08x %d %d ", now, (int)*reinterpret_cast<const short*>(static_cast<const char*>(self) + 0x2e), phase | (cw << 8));
    const unsigned char* b = static_cast<const unsigned char*>(self) + 0x1c;
    for (int k = 0; k < 0x120; ++k) fprintf(g_rdtrace, "%02x", b[k]);
    fputc('\n', g_rdtrace);
}
static void __attribute__((thiscall)) rdinit_hook(void* self, void* init) { g_rdinit_orig(self, init); rd_log(self, 2); }
static void __attribute__((thiscall)) rdmove_hook(void* self) { rd_log(self, 0); g_rdmove_orig(self); rd_log(self, 1); }

// BEA_AIMTRACE=<file>: CBattleEngine::UpdateAutoAim's two pitch arcsines (call __CIasin at 0x40b3e3 and 0x40b5b6)
// jump to stubs that record the event time, the site, the aim vector (esp+0x44..0x4c), its length (esp+0xc) and the
// arcsine's 80-bit input and output, then make the same call at the same stack depth. The stubs only move memory (no
// C calls while the x87 state is live); the records are written out at each Present:
// `AIM <time> <site> <x> <y> <z> <length> <input 80-bit hex> <output 80-bit hex>`. Level 110 recorded with
// onslaught-ce (2026-11-10): the auto-aim pitch differed by one ulp at frame 462 first.
extern "C" {
unsigned char g_aim_ring[4096 * 48];
volatile unsigned g_aim_n = 0;
unsigned char* g_aim_cur = nullptr;
unsigned g_aim_eax = 0, g_aim_ecx = 0;
unsigned g_aim_asin = 0x0055dcb0;
}
static FILE* g_aimtrace = nullptr;
static unsigned g_aim_written = 0;
#define BEA_AIM_STUB(NAME, SITE, BACK) \
    ".globl _" NAME "\n_" NAME ":\n" \
    "\tmovl %eax, _g_aim_eax\n\tmovl %ecx, _g_aim_ecx\n" \
    "\tmovl _g_aim_n, %eax\n\tcmpl $4096, %eax\n\tjae 8f\n" \
    "\timull $48, %eax, %eax\n\taddl $_g_aim_ring, %eax\n\tmovl %eax, _g_aim_cur\n" \
    "\tmovl 0x00672fd0, %ecx\n\tmovl %ecx, 0(%eax)\n\tmovl $" SITE ", 4(%eax)\n" \
    "\tmovl 0x44(%esp), %ecx\n\tmovl %ecx, 8(%eax)\n\tmovl 0x48(%esp), %ecx\n\tmovl %ecx, 12(%eax)\n" \
    "\tmovl 0x4c(%esp), %ecx\n\tmovl %ecx, 16(%eax)\n\tmovl 0x0c(%esp), %ecx\n\tmovl %ecx, 20(%eax)\n" \
    "\tfld %st(0)\n\tfstpt 24(%eax)\n" \
    "\tmovl _g_aim_ecx, %ecx\n\tmovl _g_aim_eax, %eax\n" \
    "\tcall *_g_aim_asin\n" \
    "\tmovl %eax, _g_aim_eax\n\tmovl _g_aim_cur, %eax\n\tfld %st(0)\n\tfstpt 34(%eax)\n" \
    "\tincl _g_aim_n\n\tmovl _g_aim_eax, %eax\n\tpushl $" BACK "\n\tret\n" \
    "8:\tmovl _g_aim_ecx, %ecx\n\tmovl _g_aim_eax, %eax\n\tcall *_g_aim_asin\n\tpushl $" BACK "\n\tret\n"
extern "C" void bea_aim_stub1();
extern "C" void bea_aim_stub2();
__asm__(".text\n" BEA_AIM_STUB("bea_aim_stub1", "0x0040b3e3", "0x0040b3e8") BEA_AIM_STUB("bea_aim_stub2", "0x0040b5b6", "0x0040b5bb"));
// called at each Present (probes_frame): the records made since the last call
extern "C" void bea_aim_flush()
{
    if (!g_aimtrace) return;
    unsigned n = g_aim_n;
    for (; g_aim_written < n; ++g_aim_written) {
        const unsigned char* r = g_aim_ring + 48 * g_aim_written;
        unsigned u[6];
        memcpy(u, r, sizeof u);
        fprintf(g_aimtrace, "AIM %08x %06x %08x %08x %08x %08x ", u[0], u[1], u[2], u[3], u[4], u[5]);
        for (int k = 9; k >= 0; --k) fprintf(g_aimtrace, "%02x", r[24 + k]);
        fputc(' ', g_aimtrace);
        for (int k = 9; k >= 0; --k) fprintf(g_aimtrace, "%02x", r[34 + k]);
        fputc('\n', g_aimtrace);
    }
    fflush(g_aimtrace);
}

// BEA_PITCHTRACE=<file>: CBattleEngineWalkerPart::Pitch (0x4136e0, thiscall, float vy) logs the event time, vy, the
// main part's zoom (+0x2c8) and pitch velocity (+0x280) before and after:
// `PITCH <time> <vy> <zoom> <before> <after>` (float bits). Level 110 recorded with onslaught-ce (2026-11-10): with
// the auto-aim fixed, the pitch velocity parted first at frame 2199, a tick whose mouse moved one count up.
static FILE* g_pitchtrace = nullptr;
typedef void (__attribute__((thiscall)) *WalkerPitch_t)(void*, float);
static WalkerPitch_t g_wpitch_orig = nullptr;
static void __attribute__((thiscall)) wpitch_hook(void* self, float vy)
{
    char* mainpart = *reinterpret_cast<char**>(static_cast<char*>(self) + 0x20);
    unsigned t, v, z, b, a;
    memcpy(&t, reinterpret_cast<const void*>(0x00672fd0), 4);
    memcpy(&v, &vy, 4);
    memcpy(&z, mainpart + 0x2c8, 4);
    memcpy(&b, mainpart + 0x280, 4);
    g_wpitch_orig(self, vy);
    memcpy(&a, mainpart + 0x280, 4);
    fprintf(g_pitchtrace, "PITCH %08x %08x %08x %08x %08x\n", t, v, z, b, a);
}

// BEA_MLTRACE=<file>: CMeshCollisionVolume::CollideWithLine (0x4ad830, thiscall: a, move, line, report) between
// BEA_RDTRACE_MIN and BEA_RDTRACE_MAX seconds logs the event time, move->mPos, line->mStart, line->mEnd, the result,
// report->mContactPos, mDistance and mTriangleNormal: `ML <time> <hit> <13 floats>` (float bits), as a traced
// onslaught-ce build does. Level 110 recorded with onslaught-ce (2026-11-10): after the auto-aim and ground-pitch
// fixes, the crosshair line's distance parted at frame 3075 and the step-up line's at 3129.
static FILE* g_mltrace = nullptr;
typedef int (__attribute__((thiscall)) *MeshLine_t)(void*, void*, void*, void*, void*);
static MeshLine_t g_meshline_orig = nullptr;
static int __attribute__((thiscall)) meshline_hook(void* self, void* a, void* move, void* line, void* report)
{
    unsigned now;
    memcpy(&now, reinterpret_cast<const void*>(0x00672fd0), 4);
    void* caller = __builtin_return_address(0);
    int hit = g_meshline_orig(self, a, move, line, report);
    if (now > g_rd_hi) { fflush(g_mltrace); return hit; }
    if (now < g_rd_lo) return hit;
    unsigned u[16];
    memcpy(&u[0], static_cast<char*>(move) + 16, 12);
    memcpy(&u[3], static_cast<char*>(line) + 20, 12);
    memcpy(&u[6], static_cast<char*>(line) + 36, 12);
    memcpy(&u[9], static_cast<char*>(report) + 132, 12);
    memcpy(&u[12], static_cast<char*>(report) + 196, 4);
    memcpy(&u[13], static_cast<char*>(report) + 212, 12);
    fprintf(g_mltrace, "ML %08x %d", now, hit);
    for (int k = 0; k < 16; ++k) fprintf(g_mltrace, " %08x", u[k]);
    fprintf(g_mltrace, " @%p\n", caller);
    return hit;
}

// BEA_EMTRACE=<file>: CRTMesh::GetRTEmitter (0x4dd160, thiscall: name, index, pos&, ori&, a, b) between
// BEA_RDTRACE_MIN and BEA_RDTRACE_MAX seconds logs the event time, the name's first 4 bytes, the index, the output
// position, the part's cached pose position (rt->mPose->mPositions[part]), the thing's render position and render
// orientation: `EM <time> <name> <index> <3+3+3+9 floats>` (float bits), as a traced onslaught-ce build does. Level
// 110 recorded with onslaught-ce (2026-11-10): the second gun's round started 1 ulp lower in Z at 46.55 s.
static FILE* g_emtrace = nullptr;
typedef void (__attribute__((thiscall)) *RtEmitter_t)(void*, const char*, int, float*, float*, int, int);
typedef void* (__attribute__((thiscall)) *EmitterSubpart_t)(void*, const char*, int);
typedef void* (__attribute__((thiscall)) *RenderVec_t)(void*, void*);
static RtEmitter_t g_rtemitter_orig = nullptr;
static void __attribute__((thiscall)) rtemitter_hook(void* self, const char* name, int index, float* pos, float* ori, int a, int b)
{
    unsigned now;
    memcpy(&now, reinterpret_cast<const void*>(0x00672fd0), 4);
    g_rtemitter_orig(self, name, index, pos, ori, a, b);
    if (now > g_rd_hi) { fflush(g_emtrace); return; }
    if (now < g_rd_lo) return;
    char* rt = static_cast<char*>(self);
    void* mesh = *reinterpret_cast<void**>(rt + 0x14);
    void* thing = *reinterpret_cast<void**>(rt + 8);
    char* pose = *reinterpret_cast<char**>(rt + 0xc);
    unsigned u[18] = {};
    memcpy(&u[0], pos, 12);
    if (mesh && pose) {
        char* part = static_cast<char*>(reinterpret_cast<EmitterSubpart_t>(0x004aa820)(mesh, name, index));
        if (part) {
            int n = *reinterpret_cast<int*>(part + 0x88);
            memcpy(&u[3], *reinterpret_cast<char**>(pose + 4) + n * 16, 12);
        }
    }
    if (thing) {
        void** vt = *reinterpret_cast<void***>(thing);
        float rp[4], ro[12];
        reinterpret_cast<RenderVec_t>(vt[0])(thing, rp);
        reinterpret_cast<RenderVec_t>(vt[1])(thing, ro);
        memcpy(&u[6], rp, 12);
        memcpy(&u[9], &ro[0], 12);
        memcpy(&u[12], &ro[4], 12);
        memcpy(&u[15], &ro[8], 12);
    }
    unsigned nm = 0;
    strncpy(reinterpret_cast<char*>(&nm), name, 4);
    fprintf(g_emtrace, "EM %08x %08x %d", now, nm, index);
    for (int k = 0; k < 18; ++k) fprintf(g_emtrace, " %08x", u[k]);
    fputc('\n', g_emtrace);
}

// BEA_PTTRACE=<file>: CMeshCollisionVolume::CachePartTransform (0x4ad600, thiscall: mesh, part, frame) between
// BEA_RDTRACE_MIN and BEA_RDTRACE_MAX seconds logs the event time, the part, mUnknown1C, the cached transform
// (mOrientation, mPos), the render thing's cached pose for the part (position, orientation) and its thing's render
// position and orientation: `PT <time> <part> <1C> <9+3+3+9+3+9 floats>` (float bits), as a traced onslaught-ce build
// does. Level 110 recorded with onslaught-ce (2026-11-10): the crosshair line's contact parted at 54.25 s with the
// same line and triangle.
static FILE* g_pttrace = nullptr;
typedef void (__attribute__((thiscall)) *CachePart_t)(void*, void*, int, float);
static CachePart_t g_cachepart_orig = nullptr;
static void __attribute__((thiscall)) cachepart_hook(void* self, void* mesh, int part, float frame)
{
    unsigned now;
    memcpy(&now, reinterpret_cast<const void*>(0x00672fd0), 4);
    g_cachepart_orig(self, mesh, part, frame);
    if (now > g_rd_hi) { fflush(g_pttrace); return; }
    if (now < g_rd_lo) return;
    char* v = static_cast<char*>(self);
    char* rt = *reinterpret_cast<char**>(v + 0x14);
    char* t = *reinterpret_cast<char**>(v + 0x24) + part * 0x74;
    unsigned u[36] = {};
    memcpy(&u[0], t, 12); memcpy(&u[3], t + 16, 12); memcpy(&u[6], t + 32, 12);
    memcpy(&u[9], t + 96, 12);
    if (rt) {
        char* pose = *reinterpret_cast<char**>(rt + 0xc);
        void* thing = *reinterpret_cast<void**>(rt + 8);
        if (pose) {
            char* pp = *reinterpret_cast<char**>(pose + 4) + part * 16;
            char* po = *reinterpret_cast<char**>(pose) + part * 48;
            memcpy(&u[12], pp, 12);
            memcpy(&u[15], po, 12); memcpy(&u[18], po + 16, 12); memcpy(&u[21], po + 32, 12);
        }
        if (thing) {
            void** vt = *reinterpret_cast<void***>(thing);
            float rp[4], ro[12];
            reinterpret_cast<RenderVec_t>(vt[0])(thing, rp);
            reinterpret_cast<RenderVec_t>(vt[1])(thing, ro);
            memcpy(&u[24], rp, 12);
            memcpy(&u[27], &ro[0], 12); memcpy(&u[30], &ro[4], 12); memcpy(&u[33], &ro[8], 12);
        }
    }
    fprintf(g_pttrace, "PT %08x %d %d", now, part, *reinterpret_cast<int*>(v + 0x1c));
    for (int k = 0; k < 36; ++k) fprintf(g_pttrace, " %08x", u[k]);
    void* th = rt ? *reinterpret_cast<void**>(rt + 8) : nullptr;
    if (th) {   // the actor's raw mOrientation (+0x3c), mOldOrientation (+0x9c), mCurrentOrientation (+0x114)
        const char* base = static_cast<const char*>(th) - 8;
        const unsigned* o = reinterpret_cast<const unsigned*>(base);
        for (int k : {0x3c, 0x40, 0x44, 0x4c, 0x50, 0x54, 0x5c, 0x60, 0x64, 0x9c, 0xa0, 0xa4, 0xac, 0xb0, 0xb4, 0xbc, 0xc0, 0xc4, 0x114, 0x118, 0x11c})
            fprintf(g_pttrace, " %08x", o[k / 4]);
    }
    fprintf(g_pttrace, " vt%p\n", th ? *reinterpret_cast<void**>(th) : nullptr);
}

// BEA_ATTRACE=<file>: CMeshPart::EvaluateAnimatedTransform (0x4b5330, cdecl: thing, pos*, ori*, part, parent**,
// frame*) called from CMeshPose::Build (0x4b4ba0..0x4b4cc1), between BEA_RDTRACE_MIN and BEA_RDTRACE_MAX seconds: the
// event time, the part number, the frame in and out, pos and ori in and out:
// `AT <time> <part> <frame in> <frame out> <3+9+3+9 floats>` (float bits), as a traced onslaught-ce build does.
static FILE* g_attrace = nullptr;
typedef void (*AnimXform_t)(void*, float*, float*, char*, void*, int*);
static AnimXform_t g_animxform_orig = nullptr;
static void animxform_hook(void* thing, float* pos, float* ori, char* part, void* parent, int* frame)
{
    uintptr_t ra = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
    unsigned now;
    memcpy(&now, reinterpret_cast<const void*>(0x00672fd0), 4);
    bool on = g_attrace && ra >= 0x004b4ba0 && ra < 0x004b4cc1 && now >= g_rd_lo && now <= g_rd_hi;
    unsigned u[24];
    int fin = frame ? *frame : 0;
    if (on) { memcpy(&u[0], pos, 12); memcpy(&u[3], ori, 12); memcpy(&u[6], ori + 4, 12); memcpy(&u[9], ori + 8, 12); }
    g_animxform_orig(thing, pos, ori, part, parent, frame);
    if (g_attrace && now > g_rd_hi) fflush(g_attrace);
    if (!on) return;
    memcpy(&u[12], pos, 12); memcpy(&u[15], ori, 12); memcpy(&u[18], ori + 4, 12); memcpy(&u[21], ori + 8, 12);
    fprintf(g_attrace, "AT %08x %d %d %d", now, *reinterpret_cast<int*>(part + 0x88), fin, frame ? *frame : 0);
    for (int k = 0; k < 24; ++k) fprintf(g_attrace, " %08x", u[k]);
    fprintf(g_attrace, " vt%p\n", thing ? *reinterpret_cast<void**>(thing) : nullptr);
}

// BEA_GPTRACE=<file>: CMCGroundVehicle::GetPartTransform (0x496ac0, thiscall: part, pos*, ori*, world) between
// BEA_RDTRACE_MIN and BEA_RDTRACE_MAX seconds: the event time, the part number and name's first 4 bytes, the unit's
// fraction time (0x401b50), mUnknownE0/E4/E8/F0/F4, its orientation (+0x3c), ori in and out:
// `GP <time> <part> <name> <1+5+9+9+9 floats>` (float bits), as a traced onslaught-ce build does.
static FILE* g_gptrace = nullptr;
typedef void (__attribute__((thiscall)) *GvPart_t)(void*, char*, float*, float*, int);
typedef float (__attribute__((thiscall)) *FracTime_t)(void*);
static GvPart_t g_gvpart_orig = nullptr;
static void __attribute__((thiscall)) gvpart_hook(void* self, char* part, float* pos, float* ori, int world)
{
    unsigned now;
    memcpy(&now, reinterpret_cast<const void*>(0x00672fd0), 4);
    bool on = now >= g_rd_lo && now <= g_rd_hi;
    unsigned u[33];
    if (on) memcpy(&u[15], ori, 12), memcpy(&u[18], ori + 4, 12), memcpy(&u[21], ori + 8, 12);
    g_gvpart_orig(self, part, pos, ori, world);
    if (now > g_rd_hi) { fflush(g_gptrace); return; }
    if (!on) return;
    char* unit = *reinterpret_cast<char**>(static_cast<char*>(self) + 8) - 8;
    float frac = reinterpret_cast<FracTime_t>(0x00401b50)(unit);
    memcpy(&u[0], &frac, 4);
    memcpy(&u[1], unit + 0xe0, 12);
    memcpy(&u[4], unit + 0xf0, 8);
    memcpy(&u[6], unit + 0x3c, 12); memcpy(&u[9], unit + 0x4c, 12); memcpy(&u[12], unit + 0x5c, 12);
    memcpy(&u[24], ori, 12); memcpy(&u[27], ori + 4, 12); memcpy(&u[30], ori + 8, 12);
    unsigned nm = 0;
    memcpy(&nm, part + 220, 4);
    fprintf(g_gptrace, "GP %08x %d %08x", now, *reinterpret_cast<int*>(part + 0x88), nm);
    for (int k = 0; k < 33; ++k) fprintf(g_gptrace, " %08x", u[k]);
    fputc('\n', g_gptrace);
}

// BEA_UMTRACE=<file>: between BEA_RDTRACE_MIN and BEA_RDTRACE_MAX seconds, CUnit::Move (0x4fa8d0) logs the event
// time, the thing number (+0x2e), mUnknownE0/E4/E8/EC/F0/F4 before and after (`UM ...`), and
// CWeapon::CalculateDesiredPitch (0x5094b0, thiscall: FVector target by value) the target and the result rounded to a
// float (`CD ...`), as a traced onslaught-ce build does.
static FILE* g_umtrace = nullptr;
struct V4 { float x, y, z, w; };
typedef void (__attribute__((thiscall)) *UnitMove_t)(void*);
typedef float (__attribute__((thiscall)) *DesiredPitch_t)(void*, V4);
static UnitMove_t g_unitmove_orig = nullptr;
static DesiredPitch_t g_dpitch_orig = nullptr;
static void __attribute__((thiscall)) unitmove_hook(void* self)
{
    unsigned now;
    memcpy(&now, reinterpret_cast<const void*>(0x00672fd0), 4);
    bool on = now >= g_rd_lo && now <= g_rd_hi;
    char* u = static_cast<char*>(self);
    unsigned b[6];
    if (on) memcpy(b, u + 0xe0, 24);
    g_unitmove_orig(self);
    if (now > g_rd_hi) { fflush(g_umtrace); return; }
    if (!on) return;
    unsigned a[6];
    memcpy(a, u + 0xe0, 24);
    fprintf(g_umtrace, "UM %08x %d", now, (int)*reinterpret_cast<short*>(u + 0x2e));
    for (int k = 0; k < 6; ++k) fprintf(g_umtrace, " %08x", b[k]);
    for (int k = 0; k < 6; ++k) fprintf(g_umtrace, " %08x", a[k]);
    fputc('\n', g_umtrace);
}
static float __attribute__((thiscall)) dpitch_hook(void* self, V4 target)
{
    unsigned now;
    memcpy(&now, reinterpret_cast<const void*>(0x00672fd0), 4);
    uintptr_t ra = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
    float r = g_dpitch_orig(self, target);
    volatile float rf = r;
    if (now >= g_rd_lo && now <= g_rd_hi && ra >= 0x004fb280 && ra < 0x004fb3cd) {   // CUnit::Unknown4fb280 only
        unsigned t[3], ru;
        memcpy(t, &target, 12);
        float rr = rf;
        memcpy(&ru, &rr, 4);
        // the raw inputs: attached thing's position, mUnknown98, mode angles (+0x7c, +0x80), round speed, gravity,
        // flags (+0x2c, +0x3c, +0x50, +0x6c)
        char* w = static_cast<char*>(self);
        char* at = *reinterpret_cast<char**>(w + 8);
        char* mode = *reinterpret_cast<char**>(w + 0xa0);
        char* round = mode ? *reinterpret_cast<char**>(mode + 0x18) : nullptr;
        unsigned in[10] = {};
        if (at) memcpy(&in[0], at + 0x1c, 12);
        memcpy(&in[3], w + 0x98, 4);
        if (mode) { memcpy(&in[4], mode + 0x7c, 4); memcpy(&in[5], mode + 0x80, 4); }
        if (round) { memcpy(&in[6], round + 0x2c, 4); memcpy(&in[7], round + 0x3c, 4); memcpy(&in[8], round + 0x50, 4); memcpy(&in[9], round + 0x6c, 4); }
        fprintf(g_umtrace, "CD %08x %08x %08x %08x %08x", now, t[0], t[1], t[2], ru);
        for (int k = 0; k < 10; ++k) fprintf(g_umtrace, " %08x", in[k]);
        fputc('\n', g_umtrace);
    }
    return r;
}

// BEA_U77TRACE=<file>: CUnit::Unknown77 (0x4fa4b0, thiscall: cur*, target*, rate*, out&) between BEA_RDTRACE_MIN and
// BEA_RDTRACE_MAX seconds: the event time, the thing number, cur, target and rate in, cur out (Euler angles):
// `U7 <time> <number> <12 floats> vt<vtable>` (float bits), as a traced onslaught-ce build does (without the vtable).
static FILE* g_u77trace = nullptr;
typedef void (__attribute__((thiscall)) *U77_t)(void*, float*, float*, float*, float*);
static U77_t g_u77_orig = nullptr;
static void __attribute__((thiscall)) u77_hook(void* self, float* cur, float* target, float* rate, float* out)
{
    unsigned now;
    memcpy(&now, reinterpret_cast<const void*>(0x00672fd0), 4);
    unsigned u[12];
    memcpy(&u[0], cur, 12); memcpy(&u[3], target, 12); memcpy(&u[6], rate, 12);
    g_u77_orig(self, cur, target, rate, out);
    if (now > g_rd_hi) { fflush(g_u77trace); return; }
    if (now < g_rd_lo) return;
    memcpy(&u[9], cur, 12);
    fprintf(g_u77trace, "U7 %08x %d", now, (int)*reinterpret_cast<short*>(static_cast<char*>(self) + 0x2e));
    for (int k = 0; k < 12; ++k) fprintf(g_u77trace, " %08x", u[k]);
    fprintf(g_u77trace, " vt%p\n", *reinterpret_cast<void**>(self));
}

// BEA_WLTRACE=<file>: CWorld::FindFirstThingToHitLine (0x50b030, thiscall: CLine by value (52 bytes), ignore, out,
// firstOnly, mesh, level, ignoreTypes, mapFlag, allowedTypes) called from CBattleEngine::Move's step-up test
// (returns to 0x409553), between BEA_RDTRACE_MIN and BEA_RDTRACE_MAX seconds: the event time, the line's start and
// end, the result, out's hit type and distance and the hit thing's number:
// `WL <time> <6 floats> <result> <type> <dist> <number>`, as a traced onslaught-ce build does.
static FILE* g_wltrace = nullptr;
struct Line52 { unsigned w[13]; };
typedef int (__attribute__((thiscall)) *FirstHit_t)(void*, Line52, void*, char*, int, int, int, unsigned, int, int);
static FirstHit_t g_firsthit_orig = nullptr;
static int __attribute__((thiscall)) firsthit_hook(void* self, Line52 line, void* ignore, char* out, int a, int b, int c,
                                                   unsigned d, int e, int f)
{
    uintptr_t ra = reinterpret_cast<uintptr_t>(__builtin_return_address(0));
    unsigned now;
    memcpy(&now, reinterpret_cast<const void*>(0x00672fd0), 4);
    int r = g_firsthit_orig(self, line, ignore, out, a, b, c, d, e, f);
    if (now > g_rd_hi) { fflush(g_wltrace); return r; }
    if (ra != 0x00409553 || now < g_rd_lo) return r;
    char* hit = *reinterpret_cast<char**>(out);
    fprintf(g_wltrace, "WL %08x %08x %08x %08x %08x %08x %08x %d %d %08x %d\n", now, line.w[5], line.w[6], line.w[7],
            line.w[9], line.w[10], line.w[11], r, *reinterpret_cast<int*>(out + 8), *reinterpret_cast<unsigned*>(out + 12),
            (r == 3 && hit) ? (int)*reinterpret_cast<short*>(hit + 0x2e) : -1);
    return r;
}

// BEA_SPTRACE=<file>: CMeshCollisionVolume::CollideWithSphere (0x4ac6e0, thiscall: a, move, sphere, report) between
// BEA_RDTRACE_MIN and BEA_RDTRACE_MAX seconds: the event time, the result, move in (mMove, mPos), the sphere's radius
// (+0x14), move out (mMove, mPos, mStopped), the report's contact count, mContactPos, mDistance, mStuck and normals 0
// and 1: `SP <time> <hit> <25 words>`, as a traced onslaught-ce build does.
static FILE* g_sptrace = nullptr;
typedef int (__attribute__((thiscall)) *MeshSphere_t)(void*, void*, char*, char*, char*);
static MeshSphere_t g_meshsphere_orig = nullptr;
static int __attribute__((thiscall)) meshsphere_hook(void* self, void* a, char* move, char* sphere, char* report)
{
    unsigned now;
    memcpy(&now, reinterpret_cast<const void*>(0x00672fd0), 4);
    unsigned u[25] = {};
    memcpy(&u[0], move, 12); memcpy(&u[3], move + 16, 12); memcpy(&u[6], sphere + 0x14, 4);
    int hit = g_meshsphere_orig(self, a, move, sphere, report);
    if (now > g_rd_hi) { fflush(g_sptrace); return hit; }
    if (now < g_rd_lo) return hit;
    memcpy(&u[7], move, 12); memcpy(&u[10], move + 16, 12); memcpy(&u[13], move + 32, 4);
    memcpy(&u[14], report + 128, 4); memcpy(&u[15], report + 132, 12); memcpy(&u[18], report + 196, 4);
    memcpy(&u[19], report + 200, 4); memcpy(&u[20], report + 8, 12);
    if (hit) memcpy(&u[23], report + 24, 8);   // normal 1's X and Y (Z dropped for width)
    fprintf(g_sptrace, "SP %08x %d", now, hit);
    for (int k = 0; k < 25; ++k) fprintf(g_sptrace, " %08x", u[k]);
    fputc('\n', g_sptrace);
    return hit;
}

// BEA_DOTRACE=<file>: CBattleEngine::DeclareOnObject (0x40c720) and DeclareOnGround (0x40c750) between
// BEA_RDTRACE_MIN and BEA_RDTRACE_MAX seconds log the event time, which (O/G) and the return address:
// `DO <time> <O|G> <caller>` - original only, to find which code declares the contact.
static FILE* g_dotrace = nullptr;
typedef void (__attribute__((thiscall)) *DeclObj_t)(void*, void*);
typedef void (__attribute__((thiscall)) *DeclGnd_t)(void*);
static DeclObj_t g_declobj_orig = nullptr;
static DeclGnd_t g_declgnd_orig = nullptr;
static void do_log(char which, void* ra)
{
    unsigned now;
    memcpy(&now, reinterpret_cast<const void*>(0x00672fd0), 4);
    if (now > g_rd_hi) { fflush(g_dotrace); return; }
    if (now < g_rd_lo) return;
    fprintf(g_dotrace, "DO %08x %c %p\n", now, which, ra);
}
static void __attribute__((thiscall)) declobj_hook(void* self, void* obj)
{
    do_log('O', __builtin_return_address(0));
    g_declobj_orig(self, obj);
}
static void __attribute__((thiscall)) declgnd_hook(void* self)
{
    do_log('G', __builtin_return_address(0));
    g_declgnd_orig(self);
}

static void install_evtrace()
{
    {
        char dp[MAX_PATH], m[32];
        if (GetEnvironmentVariableA("BEA_DOTRACE", dp, sizeof dp) && (g_dotrace = fopen(dp, "w"))) {
            float f;
            if (GetEnvironmentVariableA("BEA_RDTRACE_MIN", m, sizeof m)) { f = (float)atof(m); memcpy(&g_rd_lo, &f, 4); }
            if (GetEnvironmentVariableA("BEA_RDTRACE_MAX", m, sizeof m)) { f = (float)atof(m); memcpy(&g_rd_hi, &f, 4); }
            MH_STATUS a = MH_CreateHook(reinterpret_cast<void*>(0x0040c720), reinterpret_cast<void*>(&declobj_hook), reinterpret_cast<void**>(&g_declobj_orig));
            MH_STATUS b = MH_CreateHook(reinterpret_cast<void*>(0x0040c750), reinterpret_cast<void*>(&declgnd_hook), reinterpret_cast<void**>(&g_declgnd_orig));
            if (a == MH_OK) a = MH_EnableHook(reinterpret_cast<void*>(0x0040c720));
            if (b == MH_OK) b = MH_EnableHook(reinterpret_cast<void*>(0x0040c750));
            bea_log("dotrace: writing %s: %s %s", dp, MH_StatusToString(a), MH_StatusToString(b));
        }
    }
    {
        char sp[MAX_PATH], m[32];
        if (GetEnvironmentVariableA("BEA_SPTRACE", sp, sizeof sp) && (g_sptrace = fopen(sp, "w"))) {
            float f;
            if (GetEnvironmentVariableA("BEA_RDTRACE_MIN", m, sizeof m)) { f = (float)atof(m); memcpy(&g_rd_lo, &f, 4); }
            if (GetEnvironmentVariableA("BEA_RDTRACE_MAX", m, sizeof m)) { f = (float)atof(m); memcpy(&g_rd_hi, &f, 4); }
            MH_STATUS st = MH_CreateHook(reinterpret_cast<void*>(0x004ac6e0), reinterpret_cast<void*>(&meshsphere_hook),
                                         reinterpret_cast<void**>(&g_meshsphere_orig));
            if (st == MH_OK) st = MH_EnableHook(reinterpret_cast<void*>(0x004ac6e0));
            bea_log("sptrace: writing %s: %s", sp, MH_StatusToString(st));
        }
    }
    {
        char wp[MAX_PATH], m[32];
        if (GetEnvironmentVariableA("BEA_WLTRACE", wp, sizeof wp) && (g_wltrace = fopen(wp, "w"))) {
            float f;
            if (GetEnvironmentVariableA("BEA_RDTRACE_MIN", m, sizeof m)) { f = (float)atof(m); memcpy(&g_rd_lo, &f, 4); }
            if (GetEnvironmentVariableA("BEA_RDTRACE_MAX", m, sizeof m)) { f = (float)atof(m); memcpy(&g_rd_hi, &f, 4); }
            MH_STATUS st = MH_CreateHook(reinterpret_cast<void*>(0x0050b030), reinterpret_cast<void*>(&firsthit_hook),
                                         reinterpret_cast<void**>(&g_firsthit_orig));
            if (st == MH_OK) st = MH_EnableHook(reinterpret_cast<void*>(0x0050b030));
            bea_log("wltrace: writing %s: %s", wp, MH_StatusToString(st));
        }
    }
    {
        char tp[MAX_PATH], m[32];
        if (GetEnvironmentVariableA("BEA_U77TRACE", tp, sizeof tp) && (g_u77trace = fopen(tp, "w"))) {
            float f;
            if (GetEnvironmentVariableA("BEA_RDTRACE_MIN", m, sizeof m)) { f = (float)atof(m); memcpy(&g_rd_lo, &f, 4); }
            if (GetEnvironmentVariableA("BEA_RDTRACE_MAX", m, sizeof m)) { f = (float)atof(m); memcpy(&g_rd_hi, &f, 4); }
            MH_STATUS st = MH_CreateHook(reinterpret_cast<void*>(0x004fa4b0), reinterpret_cast<void*>(&u77_hook),
                                         reinterpret_cast<void**>(&g_u77_orig));
            if (st == MH_OK) st = MH_EnableHook(reinterpret_cast<void*>(0x004fa4b0));
            bea_log("u77trace: writing %s: %s", tp, MH_StatusToString(st));
        }
    }
    {
        char up[MAX_PATH], m[32];
        if (GetEnvironmentVariableA("BEA_UMTRACE", up, sizeof up) && (g_umtrace = fopen(up, "w"))) {
            float f;
            if (GetEnvironmentVariableA("BEA_RDTRACE_MIN", m, sizeof m)) { f = (float)atof(m); memcpy(&g_rd_lo, &f, 4); }
            if (GetEnvironmentVariableA("BEA_RDTRACE_MAX", m, sizeof m)) { f = (float)atof(m); memcpy(&g_rd_hi, &f, 4); }
            MH_STATUS a = MH_CreateHook(reinterpret_cast<void*>(0x004fa8d0), reinterpret_cast<void*>(&unitmove_hook),
                                        reinterpret_cast<void**>(&g_unitmove_orig));
            MH_STATUS b = MH_CreateHook(reinterpret_cast<void*>(0x005094b0), reinterpret_cast<void*>(&dpitch_hook),
                                        reinterpret_cast<void**>(&g_dpitch_orig));
            if (a == MH_OK) a = MH_EnableHook(reinterpret_cast<void*>(0x004fa8d0));
            if (b == MH_OK) b = MH_EnableHook(reinterpret_cast<void*>(0x005094b0));
            bea_log("umtrace: writing %s: %s %s", up, MH_StatusToString(a), MH_StatusToString(b));
        }
    }
    {
        char gp[MAX_PATH], m[32];
        if (GetEnvironmentVariableA("BEA_GPTRACE", gp, sizeof gp) && (g_gptrace = fopen(gp, "w"))) {
            float f;
            if (GetEnvironmentVariableA("BEA_RDTRACE_MIN", m, sizeof m)) { f = (float)atof(m); memcpy(&g_rd_lo, &f, 4); }
            if (GetEnvironmentVariableA("BEA_RDTRACE_MAX", m, sizeof m)) { f = (float)atof(m); memcpy(&g_rd_hi, &f, 4); }
            MH_STATUS st = MH_CreateHook(reinterpret_cast<void*>(0x00496ac0), reinterpret_cast<void*>(&gvpart_hook),
                                         reinterpret_cast<void**>(&g_gvpart_orig));
            if (st == MH_OK) st = MH_EnableHook(reinterpret_cast<void*>(0x00496ac0));
            bea_log("gptrace: writing %s: %s", gp, MH_StatusToString(st));
        }
    }
    {
        char tp[MAX_PATH], m[32];
        if (GetEnvironmentVariableA("BEA_ATTRACE", tp, sizeof tp) && (g_attrace = fopen(tp, "w"))) {
            float f;
            if (GetEnvironmentVariableA("BEA_RDTRACE_MIN", m, sizeof m)) { f = (float)atof(m); memcpy(&g_rd_lo, &f, 4); }
            if (GetEnvironmentVariableA("BEA_RDTRACE_MAX", m, sizeof m)) { f = (float)atof(m); memcpy(&g_rd_hi, &f, 4); }
            MH_STATUS st = MH_CreateHook(reinterpret_cast<void*>(0x004b5330), reinterpret_cast<void*>(&animxform_hook),
                                         reinterpret_cast<void**>(&g_animxform_orig));
            if (st == MH_OK) st = MH_EnableHook(reinterpret_cast<void*>(0x004b5330));
            bea_log("attrace: writing %s: %s", tp, MH_StatusToString(st));
        }
    }
    {
        char tp[MAX_PATH], m[32];
        if (GetEnvironmentVariableA("BEA_PTTRACE", tp, sizeof tp) && (g_pttrace = fopen(tp, "w"))) {
            float f;
            if (GetEnvironmentVariableA("BEA_RDTRACE_MIN", m, sizeof m)) { f = (float)atof(m); memcpy(&g_rd_lo, &f, 4); }
            if (GetEnvironmentVariableA("BEA_RDTRACE_MAX", m, sizeof m)) { f = (float)atof(m); memcpy(&g_rd_hi, &f, 4); }
            MH_STATUS st = MH_CreateHook(reinterpret_cast<void*>(0x004ad600), reinterpret_cast<void*>(&cachepart_hook),
                                         reinterpret_cast<void**>(&g_cachepart_orig));
            if (st == MH_OK) st = MH_EnableHook(reinterpret_cast<void*>(0x004ad600));
            bea_log("pttrace: writing %s: %s", tp, MH_StatusToString(st));
        }
    }
    {
        char ep[MAX_PATH], m[32];
        if (GetEnvironmentVariableA("BEA_EMTRACE", ep, sizeof ep) && (g_emtrace = fopen(ep, "w"))) {
            float f;
            if (GetEnvironmentVariableA("BEA_RDTRACE_MIN", m, sizeof m)) { f = (float)atof(m); memcpy(&g_rd_lo, &f, 4); }
            if (GetEnvironmentVariableA("BEA_RDTRACE_MAX", m, sizeof m)) { f = (float)atof(m); memcpy(&g_rd_hi, &f, 4); }
            MH_STATUS st = MH_CreateHook(reinterpret_cast<void*>(0x004dd160), reinterpret_cast<void*>(&rtemitter_hook),
                                         reinterpret_cast<void**>(&g_rtemitter_orig));
            if (st == MH_OK) st = MH_EnableHook(reinterpret_cast<void*>(0x004dd160));
            bea_log("emtrace: writing %s: %s", ep, MH_StatusToString(st));
        }
    }
    {
        char mp[MAX_PATH], m[32];
        if (GetEnvironmentVariableA("BEA_MLTRACE", mp, sizeof mp) && (g_mltrace = fopen(mp, "w"))) {
            float f;
            if (GetEnvironmentVariableA("BEA_RDTRACE_MIN", m, sizeof m)) { f = (float)atof(m); memcpy(&g_rd_lo, &f, 4); }
            if (GetEnvironmentVariableA("BEA_RDTRACE_MAX", m, sizeof m)) { f = (float)atof(m); memcpy(&g_rd_hi, &f, 4); }
            MH_STATUS st = MH_CreateHook(reinterpret_cast<void*>(0x004ad830), reinterpret_cast<void*>(&meshline_hook),
                                         reinterpret_cast<void**>(&g_meshline_orig));
            if (st == MH_OK) st = MH_EnableHook(reinterpret_cast<void*>(0x004ad830));
            bea_log("mltrace: writing %s: %s", mp, MH_StatusToString(st));
        }
    }
    {
        char pp[MAX_PATH];
        if (GetEnvironmentVariableA("BEA_PITCHTRACE", pp, sizeof pp) && (g_pitchtrace = fopen(pp, "w"))) {
            MH_STATUS st = MH_CreateHook(reinterpret_cast<void*>(0x004136e0), reinterpret_cast<void*>(&wpitch_hook),
                                         reinterpret_cast<void**>(&g_wpitch_orig));
            if (st == MH_OK) st = MH_EnableHook(reinterpret_cast<void*>(0x004136e0));
            bea_log("pitchtrace: writing %s: %s", pp, MH_StatusToString(st));
        }
    }
    {
        char ap[MAX_PATH];
        unsigned char* s1 = reinterpret_cast<unsigned char*>(0x0040b3e3);
        unsigned char* s2 = reinterpret_cast<unsigned char*>(0x0040b5b6);
        auto is_asin_call = [](unsigned char* s) {
            return s[0] == 0xe8 && reinterpret_cast<uintptr_t>(s + 5) + *reinterpret_cast<int32_t*>(s + 1) == 0x0055dcb0;
        };
        if (GetEnvironmentVariableA("BEA_AIMTRACE", ap, sizeof ap) && is_asin_call(s1) && is_asin_call(s2) &&
            (g_aimtrace = fopen(ap, "w"))) {
            DWORD old;
            VirtualProtect(s1, 0x200, PAGE_EXECUTE_READWRITE, &old);
            *reinterpret_cast<int32_t*>(s1 + 1) = reinterpret_cast<intptr_t>(&bea_aim_stub1) - reinterpret_cast<intptr_t>(s1 + 5);
            s1[0] = 0xe9;
            *reinterpret_cast<int32_t*>(s2 + 1) = reinterpret_cast<intptr_t>(&bea_aim_stub2) - reinterpret_cast<intptr_t>(s2 + 5);
            s2[0] = 0xe9;
            VirtualProtect(s1, 0x200, old, &old);
            FlushInstructionCache(GetCurrentProcess(), s1, 0x200);
            bea_log("aimtrace: writing %s", ap);
        }
    }
    {
        char rp[MAX_PATH], m[32];
        if (GetEnvironmentVariableA("BEA_RDTRACE", rp, sizeof rp) && (g_rdtrace = fopen(rp, "w"))) {
            float f;
            if (GetEnvironmentVariableA("BEA_RDTRACE_MIN", m, sizeof m)) { f = (float)atof(m); memcpy(&g_rd_lo, &f, 4); }
            if (GetEnvironmentVariableA("BEA_RDTRACE_MAX", m, sizeof m)) { f = (float)atof(m); memcpy(&g_rd_hi, &f, 4); }
            MH_STATUS a = MH_CreateHook(reinterpret_cast<void*>(0x004d8410), reinterpret_cast<void*>(&rdinit_hook), reinterpret_cast<void**>(&g_rdinit_orig));
            MH_STATUS b = MH_CreateHook(reinterpret_cast<void*>(0x004d8e40), reinterpret_cast<void*>(&rdmove_hook), reinterpret_cast<void**>(&g_rdmove_orig));
            if (a == MH_OK) a = MH_EnableHook(reinterpret_cast<void*>(0x004d8410));
            if (b == MH_OK) b = MH_EnableHook(reinterpret_cast<void*>(0x004d8e40));
            bea_log("rdtrace: writing %s: %s %s", rp, MH_StatusToString(a), MH_StatusToString(b));
        }
    }
    {
        char cp[MAX_PATH], m[32];
        static const unsigned char want[5] = { 0xff, 0x52, 0x14, 0x3b, 0xc3 };
        unsigned char* site = reinterpret_cast<unsigned char*>(0x004267cb);
        if (GetEnvironmentVariableA("BEA_COLTRACE", cp, sizeof cp) && !memcmp(site, want, 5) && (g_coltrace = fopen(cp, "w"))) {
            if (GetEnvironmentVariableA("BEA_EVTRACE_MAX", m, sizeof m)) { float f = (float)atof(m); memcpy(&g_evtrace_max, &f, 4); }
            DWORD old;
            VirtualProtect(site, 5, PAGE_EXECUTE_READWRITE, &old);
            site[0] = 0xe9;
            *reinterpret_cast<int32_t*>(site + 1) = reinterpret_cast<intptr_t>(&bea_col_stub) - reinterpret_cast<intptr_t>(site + 5);
            VirtualProtect(site, 5, old, &old);
            FlushInstructionCache(GetCurrentProcess(), site, 5);
            bea_log("coltrace: writing %s", cp);
        }
    }
    {
        char hp[MAX_PATH], m[32];
        if (GetEnvironmentVariableA("BEA_HITTRACE", hp, sizeof hp) && (g_hittrace = fopen(hp, "w"))) {
            if (GetEnvironmentVariableA("BEA_EVTRACE_MAX", m, sizeof m)) { float f = (float)atof(m); memcpy(&g_evtrace_max, &f, 4); }
            MH_STATUS st = MH_CreateHook(reinterpret_cast<void*>(0x004fcc30), reinterpret_cast<void*>(&unithit_hook),
                                         reinterpret_cast<void**>(&g_unithit_orig));
            if (st == MH_OK) st = MH_EnableHook(reinterpret_cast<void*>(0x004fcc30));
            bea_log("hittrace: writing %s: %s", hp, MH_StatusToString(st));
        }
    }
    {
        char gp[MAX_PATH], m[32];
        if (GetEnvironmentVariableA("BEA_GVTRACE", gp, sizeof gp) && (g_gvtrace = fopen(gp, "w"))) {
            if (GetEnvironmentVariableA("BEA_EVTRACE_MAX", m, sizeof m)) { float f = (float)atof(m); memcpy(&g_evtrace_max, &f, 4); }
            MH_STATUS st = MH_CreateHook(reinterpret_cast<void*>(0x0047d1c0), reinterpret_cast<void*>(&gvmove_hook),
                                         reinterpret_cast<void**>(&g_gvmove_orig));
            if (st == MH_OK) st = MH_EnableHook(reinterpret_cast<void*>(0x0047d1c0));
            bea_log("gvtrace: writing %s: %s", gp, MH_StatusToString(st));
        }
    }
    {
        char cp[MAX_PATH], m[32];
        if (GetEnvironmentVariableA("BEA_CCTRACE", cp, sizeof cp) && (g_cctrace = fopen(cp, "w"))) {
            if (GetEnvironmentVariableA("BEA_EVTRACE_MAX", m, sizeof m)) { float f = (float)atof(m); memcpy(&g_evtrace_max, &f, 4); }
            MH_STATUS st = MH_CreateHook(reinterpret_cast<void*>(0x00480ed0), reinterpret_cast<void*>(&schedcc_hook),
                                         reinterpret_cast<void**>(&g_schedcc_orig));
            if (st == MH_OK) st = MH_EnableHook(reinterpret_cast<void*>(0x00480ed0));
            bea_log("cctrace: writing %s: %s", cp, MH_StatusToString(st));
        }
    }
    char p[MAX_PATH], m[32];
    if (!GetEnvironmentVariableA("BEA_EVTRACE", p, sizeof p)) return;
    if (GetEnvironmentVariableA("BEA_EVTRACE_MAX", m, sizeof m)) { float f = (float)atof(m); memcpy(&g_evtrace_max, &f, 4); }
    static const unsigned char want1[5] = { 0x8b, 0x11, 0x50, 0xff, 0x12 }, want2[5] = { 0x8b, 0x01, 0x52, 0xff, 0x10 };
    unsigned char* s1 = reinterpret_cast<unsigned char*>(0x0044b687);
    unsigned char* s2 = reinterpret_cast<unsigned char*>(0x0044b6ef);
    if (memcmp(s1, want1, 5) || memcmp(s2, want2, 5)) { bea_log("evtrace: Flush is not the retail code, off"); return; }
    if (!(g_evtrace = fopen(p, "w"))) { bea_log("evtrace: cannot write %s", p); return; }
    DWORD old;
    VirtualProtect(s1, 0x70, PAGE_EXECUTE_READWRITE, &old);
    s1[0] = 0xe9; *reinterpret_cast<int32_t*>(s1 + 1) = reinterpret_cast<intptr_t>(&bea_evtrace_stub1) - reinterpret_cast<intptr_t>(s1 + 5);
    s2[0] = 0xe9; *reinterpret_cast<int32_t*>(s2 + 1) = reinterpret_cast<intptr_t>(&bea_evtrace_stub2) - reinterpret_cast<intptr_t>(s2 + 5);
    VirtualProtect(s1, 0x70, old, &old);
    FlushInstructionCache(GetCurrentProcess(), s1, 0x70);
    bea_log("evtrace: writing %s", p);
}

void bea_install_harness()
{
    if (!strstr(GetCommandLineA(), "-forcewindowed")) {
        char fl[8];
        if (GetEnvironmentVariableA("BEA_FSLOG", fl, sizeof fl) && fl[0] == '1') {
            g_fslog = true;
            LPVOID target = nullptr;
            if (MH_CreateHookApiEx(L"d3d9", "Direct3DCreate9", reinterpret_cast<void*>(&Direct3DCreate9_hook),
                                   reinterpret_cast<void**>(&g_Direct3DCreate9_orig), &target) == MH_OK)
                MH_EnableHook(target);
            bea_log("harness: BEA_FSLOG - display mode and presented frames logged, nothing else");
        }
        return;
    }
    check_dinput_table();
    char fpt[8];
    if (GetEnvironmentVariableA("BEA_FPTRAP", fpt, sizeof fpt) && fpt[0] == '1') {
        g_bea_fptrap = true;
        bea_log("harness: NaN trap on (x87 invalid operation unmasked each frame)");
    }
    char scb[32];
    if (GetEnvironmentVariableA("BEA_SHOTCLOCK", scb, sizeof scb)) {
        g_shot_clock = atof(scb);
        bea_log("harness: back buffer shot at game clock %g (BEA_SHOTCLOCK)", g_shot_clock);
    }
    char sfb[512];
    if (GetEnvironmentVariableA("BEA_SHOTFRAMES", sfb, sizeof sfb)) {
        for (char* p = sfb; *p && g_nshot_frames < 64;) {
            long f = strtol(p, &p, 10);
            if (f > 0) g_shot_frames[g_nshot_frames++] = f;
            while (*p && (*p < '0' || *p > '9')) ++p;
        }
        g_shot_play = GetEnvironmentVariableA("BEA_SHOTPLAY", sfb, sizeof sfb) && sfb[0] == '1';
        bea_log("harness: %d back buffer shots by %s frame (BEA_SHOTFRAMES)", g_nshot_frames, g_shot_play ? "play" : "launch");
    }
    if (GetEnvironmentVariableA("BEA_ENDFRAME", sfb, sizeof sfb)) g_end_frame = atol(sfb);
    // Windows 11 throttles processes whose windows are invisible (screen off):
    // EcoQoS and ignored timer resolution dropped soaks from ~300 to ~25 fps
    // (2026-10-19).  Opt out: ProcessPowerThrottling (4), version 1,
    // control EXECUTION_SPEED|IGNORE_TIMER_RESOLUTION, state 0 (= off).
    struct { ULONG version, control, state; } pt = { 1, 0x1 | 0x4, 0 };
    typedef BOOL (WINAPI* SetPI_t)(HANDLE, int, LPVOID, DWORD);
    if (SetPI_t set_pi = reinterpret_cast<SetPI_t>(GetProcAddress(GetModuleHandleA("kernel32"), "SetProcessInformation")))
        bea_log("harness: power throttling off: %d", set_pi(GetCurrentProcess(), 4, &pt, sizeof pt));
    char rec[MAX_PATH];
    if (GetEnvironmentVariableA("BEA_RECORD", rec, sizeof rec)) {
        g_rec = fopen(rec, "w");
        g_recording = g_rec != nullptr;
        if (g_rec) fprintf(g_rec, "V 3\n");
        bea_log("harness: recording input to %s (%s)", rec, g_rec ? "open" : "cannot open");
        char sc[8];
        if (GetEnvironmentVariableA("BEA_RECORD_SCALE", sc, sizeof sc)) {
            if (!strcmp(sc, "fit")) { g_rec_fit = true; g_rec_scale = 2; }
            else if (atoi(sc) > 1 && atoi(sc) <= 8) g_rec_scale = atoi(sc);
        }
    } else if (GetEnvironmentVariableA("BEA_TAPE_IN", rec, sizeof rec)) {
        load_tape_in(rec);
    } else if (GetEnvironmentVariableA("BEA_REPLAY", rec, sizeof rec)) {
        load_replay(rec);
        g_replaying = true;
    }
    if (!g_recording) {
        // a test window must not take the focus from the desktop; a recording
        // is played by a person and needs it
        MH_CreateHookApi(L"user32", "ShowWindow", reinterpret_cast<void*>(&ShowWindow_hook),
                         reinterpret_cast<void**>(&g_ShowWindow_orig));
        MH_CreateHookApi(L"user32", "SetForegroundWindow", reinterpret_cast<void*>(&SetForegroundWindow_hook),
                         reinterpret_cast<void**>(&g_SetForegroundWindow_orig));
        MH_CreateHookApi(L"user32", "SetActiveWindow", reinterpret_cast<void*>(&SetActiveWindow_hook),
                         reinterpret_cast<void**>(&g_SetActiveWindow_orig));
        MH_CreateHookApi(L"user32", "SetWindowPos", reinterpret_cast<void*>(&SetWindowPos_hook),
                         reinterpret_cast<void**>(&g_SetWindowPos_orig));
    }
    MH_CreateHookApi(L"user32", "CreateWindowExA", reinterpret_cast<void*>(&CreateWindowExA_hook),
                     reinterpret_cast<void**>(&g_CreateWindowExA_orig));
    if (g_recording || g_replaying || g_tapein)
        MH_CreateHookApi(L"dinput8", "DirectInput8Create", reinterpret_cast<void*>(&DirectInput8Create_hook),
                         reinterpret_cast<void**>(&g_DirectInput8Create_orig));
    MH_CreateHookApi(L"user32", "MessageBoxA", reinterpret_cast<void*>(&MessageBoxA_hook),
                     reinterpret_cast<void**>(&g_MessageBoxA_orig));
    MH_STATUS d3d = MH_CreateHookApi(L"d3d9", "Direct3DCreate9", reinterpret_cast<void*>(&Direct3DCreate9_hook),
                                     reinterpret_cast<void**>(&g_Direct3DCreate9_orig));
    if (d3d != MH_OK) bea_log("harness: Direct3DCreate9 hook failed: %s", MH_StatusToString(d3d));
    MH_EnableHook(MH_ALL_HOOKS);
    install_fixed_clock();
    // Test runs (the fixed clock) use the US English keyboard layout, whatever this PC's active
    // layout is: the game names keys through Windows (Controller Options) and turns key presses
    // into typed characters with it.  With Norwegian active, fe_controls and fe_options showed
    // "MELLOMROM" for Space and differed from their shots, original included (2026-11-06).
    // KLF_SETFORPROCESS: this process only; no change to the PC's settings.
    if (g_fixed_step > 0) {
        HKL us = LoadKeyboardLayoutA("00000409", KLF_ACTIVATE | KLF_SETFORPROCESS);
        bea_log("harness: keyboard layout %s for this process (test run)", us ? "US English" : "unchanged (US English not available)");
    }
    install_evtrace();
    install_soundclock();
    install_videoclock();
    install_protect();
    start_autopilot();
}

// The clock as the game sees it: fixed-step when BEA_FIXEDSTEP is set.
extern "C" BOOL WINAPI bea_qpc(LARGE_INTEGER* out)
{
    return g_fixed_step > 0 ? QPC_fixed(out) : QueryPerformanceCounter(out);
}
extern "C" DWORD WINAPI bea_timeGetTime()
{
    return g_fixed_step > 0 ? timeGetTime_fixed() : timeGetTime();
}
