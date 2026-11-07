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
    g_tape_buttons = ((b[0] & 0x80) ? 1 : 0) | ((b[1] & 0x80) ? 2 : 0) | ((b[2] & 0x80) ? 4 : 0);
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

void probes_frame(long frame)
{
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
    if (!g_probes || frame % g_probe_every) return;
    const char* em = reinterpret_cast<const char*>(0x00672fc8);
    const char* game = reinterpret_cast<const char*>(0x008a9a98);
    probe_hex(frame, "EVT", em + 0x8, 4);
    probe_hex(frame, "EVN", em + 0xc, 4);
    probe_hex(frame, "FT", game + 0x398, 4);
    probe_hex(frame, "SC", game + 0xf4, 4);
    probe_hex(frame, "LVL", game + 0x2a0, 4);
    const char* rng = *reinterpret_cast<const char* const*>(game + 0x304);
    probe_hex(frame, "RNG", rng, 8);
    const char* player = *reinterpret_cast<const char* const*>(game + 0x2a4);
    const char* be = player && !IsBadReadPtr(player + 0x1c, 4) ? *reinterpret_cast<const char* const*>(player + 0x1c) : nullptr;
    probe_hex(frame, "POS", be ? be + 0x1c : nullptr, 12);
    probe_hex(frame, "LIFE", be ? be + 0xf8 : nullptr, 8);
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
BOOL WINAPI QPC_fixed(LARGE_INTEGER* out)
{
    // never 0: the game spins while the counter reads 0 (fpstimer.cpp)
    out->QuadPart = (LONGLONG)(fixed_seconds() * (long double)g_real_freq) + g_real_freq;
    return TRUE;
}
DWORD WINAPI timeGetTime_fixed()
{
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
        on = GetEnvironmentVariableA("BEA_FIXEDSTEP", b, sizeof b) > 0 &&
             GetEnvironmentVariableA("BEA_FPSCLOCK", b, sizeof b) && b[0] == '1';
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
    bool a = patch_import("QueryPerformanceCounter", reinterpret_cast<void*>(&QPC_fixed));
    bool b = patch_import("timeGetTime", reinterpret_cast<void*>(&timeGetTime_fixed));
    bool c = patch_import("GetCursorPos", g_recording || g_replaying ? reinterpret_cast<void*>(&GetCursorPos_rec) : reinterpret_cast<void*>(&GetCursorPos_fixed));
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
    if (g_play0 < 0 && (g_recording || g_replaying || trace_play) && *reinterpret_cast<volatile int*>(0x008a9ac0) == 3) play_started(frame);
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
    if (g_recording || g_replaying)
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
