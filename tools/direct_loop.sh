#!/bin/sh
# Run tools/direct_batch.py repeatedly until the candidate directory is
# exhausted (or a batch fails fatally), committing after every successful batch.
#   sh tools/direct_loop.sh <census dir> [count] [seconds] [max batches]
cd "$(dirname "$0")/.."
src=$1; count=${2:-120}; secs=${3:-90}; max=${4:-20}
# two windowed instances at a time (four until the 2026-10-18 disk stall, NOTES A1-13), game clock x4
export BEA_PARALLEL=${BEA_PARALLEL:-2}
export BEA_TIMESCALE=${BEA_TIMESCALE:-4}
# random player input during the soaks (test_harness.cpp); BEA_AUTOPILOT= (empty) turns it off
export BEA_AUTOPILOT=${BEA_AUTOPILOT-1}
i=0
while [ $i -lt $max ]; do
    i=$((i+1))
    # every level (plus the front end, added by coverage.sh), fastest-to-crash first: the
    # eight-level set let ports that broke 211/221/500/700 through (2026-10-19 deep soak)
    out=$(python -I tools/direct_batch.py --from "$src" --count "$count" --seconds "$secs" --levels "500 221 700 100 200 211 511 400 110 231 300 311 321 411 600" 2>&1)
    echo "$out" | grep -v "^+ \|Building CXX\|^\[" | tail -14
    if echo "$out" | grep -q "nothing to install"; then echo "loop: candidates exhausted"; break; fi
    if ! echo "$out" | grep -q "batch OK"; then echo "loop: batch $i failed, stopping"; exit 1; fi
    n=$(python -I tools/progress.py | tail -1)
    git add -A >/dev/null 2>&1
    git commit -q -F - <<EOF
Phase 1: direct-port batch $i ($n)

Auto-ported replacements for functions that cannot be shadow-tested
(NOTES A1-10), verified by tools/check_ret.py and the windowed soak;
culprits found by bisect are in tools/direct_quarantine/.
EOF
    echo "loop: committed batch $i: $n"
done
