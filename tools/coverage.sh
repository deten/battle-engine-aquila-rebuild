#!/bin/sh
# Soak the given levels, up to $BEA_PARALLEL (default 4) game instances at a
# time (windowed, unfocused, below-normal priority), each for N seconds, and
# print one summary line per level.  Each instance keeps its own hook log
# (bea_hook<i>.log); the log of every run is saved as build/soak_<level>.log
# so a crash can be mapped to a port afterwards (tools/crashmap.py).
# Shadow reports accumulate in the game folder for tools/promote.py.
# The first failing level ends the soak: the other instances of its round are
# cancelled ("cancelled level N") and later levels are not started, since one
# failure already sends the batch to bisect (BEA_SOAK_ALL=1 runs every level).
# The front end (no -level) runs as the last item, `level frontend`, and fails
# the soak like a level does (it used to run alone afterwards and its result
# was ignored by tools/direct_batch.py).
#   sh tools/coverage.sh [seconds] [levels...]          (BEA_TIMESCALE=k to speed game time up)
cd "$(dirname "$0")/.."
secs=${1:-45}; shift 2>/dev/null
levels=${*:-"100 110 200 211 221 231 300 311 321 400 411 500 511 600 700"}
par=${BEA_PARALLEL:-4}
ts=${BEA_TIMESCALE:-}
game="Battle Engine Aquila"
mkdir -p build
rm -f build/soak_failed "$game"/bea_cancel*.txt
run_one() {   # $1 = level (or frontend), $2 = instance
    if [ "$1" = frontend ]; then ga="-forcewindowed -skipfmv"; else ga="-forcewindowed -skipfmv -level $1"; fi
    out=$(powershell -ExecutionPolicy Bypass -File tools/smoke_test.ps1 -Seconds "$secs" -Instance "$2" -TimeScale "$ts" \
          -SaveLog "build/soak_$1.log" -GameArgs "$ga" 2>&1)
    if echo "$out" | grep -q "^CANCELLED"; then
        echo "$out" | grep -q "KILL FAILED" && { echo "level $1: STALLED (process could not be killed)"; return; }
        echo "cancelled level $1 (another level failed first)"; return
    fi
    st=$(echo "$out" | grep -oE "ALIVE after [0-9]+s|EXITED after [0-9]+s with code -?[0-9]+" | head -1)
    hb=$(grep "heartbeat" "build/soak_$1.log" 2>/dev/null | tail -1 | grep -oE "\+[0-9]+ in 5s")
    cr=$(grep -c "CRASH code" "build/soak_$1.log" 2>/dev/null)
    # alive but not rendering is a hang (a port spinning): report it as a failure
    case "$hb" in "+0 in 5s"|"") [ "${st#ALIVE}" != "$st" ] && st="HUNG after ${secs}s (no frames)";; esac
    # ...unless the D3D9 device was lost (a locked session): untested, not failed
    case "$st" in HUNG*) grep -q "DEVICE LOST" "build/soak_$1.log" 2>/dev/null && st="DEVICE LOST after ${secs}s (session locked?), untested";; esac
    # with the autopilot a mission can end and the game quit by itself (the
    # unmodified game exited with 0 and 100 on 2026-10-19): a pass
    if [ -n "$BEA_AUTOPILOT" ] && [ "$cr" = 0 ]; then
        case "$st" in "EXITED after "*" with code 0"|"EXITED after "*" with code 100") st="ALIVE (mission ended: $st)";; esac
    fi
    # an unkillable process means the machine (disk) is stalling, not the port: abort, do not bisect
    echo "$out" | grep -q "KILL FAILED" && st="STALLED (process could not be killed)"
    echo "level $1: $st  last $hb  crash-lines=$cr"
    case "$st" in
        ALIVE*|DEVICE*) ;;
        *) if [ -z "$BEA_SOAK_ALL" ]; then
               : > build/soak_failed
               k=1; while [ $k -le "$par" ]; do [ "$k" = "$2" ] || : > "$game/bea_cancel$k.txt"; k=$((k+1)); done
           fi;;
    esac
}
i=0
for lv in $levels frontend; do
    [ -e build/soak_failed ] && break
    i=$((i % par + 1))
    run_one "$lv" "$i" &
    [ $((i % par)) -eq 0 ] && wait
done
wait
rm -f "$game"/bea_cancel*.txt build/soak_failed
