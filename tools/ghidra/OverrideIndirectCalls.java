// OverrideIndirectCalls.java - give every vtable call site a prototype so the
// decompiler pops its arguments (NOTES A1-15, bug class 18).
//
// Ghidra does not know the callee of `call dword ptr [reg + off]`, so it models
// the call with the program's default convention and pops nothing; every
// MSVC vtable call in BEA.exe is __thiscall and pops what the caller pushed
// since the previous call.  The stack depth Ghidra tracks afterwards is too
// deep by those bytes, a later `lea reg, [esp+K]` is named too deep
// (`&stack0xffffffec`, `local_24` in the saved-EDI slot), and a float read
// from a local comes out as `unaff_ESI`.
//
// For each game function (below 0x55a420) the instructions are walked in
// address order with the push/call/esp bookkeeping of tools/check_uninit.py:
// pushes since the previous call (or esp adjustment) are the call's arguments;
// register saves in the prologue (a callee-saved register not written before
// it is pushed, before the first call or jump) are not.  A call through
// `[reg + off]` or `[reg]` gets an override signature `undefined4
// __stdcall f(undefined4 x N)`: stdcall pops the same bytes as thiscall and
// keeps the decompiler printing the stack arguments only, the shape
// tools/autoport.py's rewrite_vcalls reads (with __thiscall it would print
// the receiver as a first argument, and a COM call with `this` on the stack
// would get a wrong one).  No override when
//   - an `add esp, N` follows the call (a cdecl callee, the caller cleans),
//   - a jump or a branch target lies between the first pending push and the
//     call (the pushes may belong to another path),
//   - the call is through a bare register (`call esi`: a callback of unknown
//     convention) or an IAT slot (an import Ghidra knows),
//   - anywhere in the function an `add esp, N` after a call exceeds the pushes
//     since the previous call (arguments collected across intermediate calls,
//     0x4bc3e0: then every override in the function would be a guess) - the
//     whole function is skipped.
// Writes <outdir>/indirect_overrides.csv (function,callsite,args) and prints a
// summary.  Idempotent: an existing override at a call site is replaced.
//   analyzeHeadless ... -postScript OverrideIndirectCalls.java <outdir>
//@category BEA

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.Float10DataType;
import ghidra.program.model.data.FunctionDefinitionDataType;
import ghidra.program.model.data.ParameterDefinition;
import ghidra.program.model.data.ParameterDefinitionImpl;
import ghidra.program.model.data.Undefined4DataType;
import ghidra.program.model.lang.Register;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.pcode.HighFunctionDBUtil;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.ReferenceManager;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolTable;

import java.io.File;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class OverrideIndirectCalls extends GhidraScript {
    static final long GAME_END = 0x55a420L;
    static final Set<String> SAVED = Set.of("EBX", "ESI", "EDI", "EBP");

    static class Site { Address at; int args; boolean fp; Site(Address a, int n) { at = a; args = n; } }

    /** the call's result is a float in ST0: the first x87 instruction after it,
     *  before any other call or jump, consumes ST0 without loading first (fstp,
     *  fmul [mem], fcomp ...).  Without this the undefined4 prototype makes the
     *  decompiler print the result as extraout_ST0 attached to whatever call
     *  follows (0x418ef0: a float read after `operator new`, 2026-10-21). */
    private boolean floatResult(List<Instruction> ins, int i) {
        for (int k = i + 1; k < ins.size() && k <= i + 12; k++) {
            Instruction in = ins.get(k);
            String m = in.getMnemonicString().toUpperCase();
            if (in.getFlowType().isCall() || in.getFlowType().isJump() || m.startsWith("RET")) return false;
            if (!m.startsWith("F")) continue;
            if (m.startsWith("FLD") || m.startsWith("FILD") || m.equals("FNSTCW") || m.equals("FSTCW") || m.equals("FLDCW")
                    || m.equals("FWAIT") || m.equals("FNINIT") || m.equals("FNCLEX") || m.equals("FNSTSW")) return false;
            return true;
        }
        return false;
    }

    private boolean isMem(Instruction ins, int op) {
        return ins.getDefaultOperandRepresentation(op).contains("[");
    }

    private Register opReg(Instruction ins, int op) {
        for (Object o : ins.getOpObjects(op)) if (o instanceof Register) return (Register) o;
        return null;
    }

    private Scalar opScalar(Instruction ins, int op) {
        for (Object o : ins.getOpObjects(op)) if (o instanceof Scalar) return (Scalar) o;
        return null;
    }

    private boolean isEsp(Register r) {
        return r != null && r.getName().equals("ESP");
    }

    /** the call sites of one function and their argument counts, or null when the function is inconsistent */
    private List<Site> analyse(Function f, ReferenceManager refs) {
        List<Site> sites = new ArrayList<>();
        InstructionIterator it = currentProgram.getListing().getInstructions(f.getBody(), true);
        List<Instruction> ins = new ArrayList<>();
        while (it.hasNext()) ins.add(it.next());
        boolean prologue = true;
        int pending = 0;               // bytes pushed since the previous call / esp adjustment
        boolean pendingTainted = false; // a jump or branch target since the first pending push
        Set<String> written = new HashSet<>();
        for (int i = 0; i < ins.size(); i++) {
            Instruction in = ins.get(i);
            String m = in.getMnemonicString().toUpperCase();
            boolean isCall = in.getFlowType().isCall();
            boolean isJump = in.getFlowType().isJump() || m.equals("RET") || m.startsWith("RET");
            if (prologue && (isCall || isJump)) prologue = false;
            if (pending > 0 && refs.hasReferencesTo(in.getAddress())) {
                // a branch target between the pushes and the call: another path may arrive here
                pendingTainted = true;
            }
            if (m.equals("PUSH")) {
                Register r = opReg(in, 0);
                boolean save = prologue && r != null && SAVED.contains(r.getName()) && !written.contains(r.getName());
                if (!save) {
                    pending += 4;
                }
            } else if (m.equals("POP")) {
                // a pop between calls undoes a push (rare outside epilogues)
                if (pending >= 4) pending -= 4;
            } else if (m.equals("SUB") && isEsp(opReg(in, 0)) && opScalar(in, 1) != null && !prologue) {
                // `sub esp, N; mov ecx, esp; <copy N bytes>; call [vtbl+off]`: a struct
                // passed by value (0x4e81d0's 16-byte argument) - argument space the
                // callee pops like pushes
                pending += (int) opScalar(in, 1).getUnsignedValue();
            } else if ((m.equals("SUB") || m.equals("ADD")) && isEsp(opReg(in, 0)) && opScalar(in, 1) != null) {
                if (m.equals("ADD") && i > 0 && ins.get(i - 1).getFlowType().isCall()) {
                    // cdecl cleanup: it must not exceed what was pushed for that call
                    long n = opScalar(in, 1).getUnsignedValue();
                    if (n > lastPending) return null;
                }
                pending = 0; pendingTainted = false;
            } else if (isCall) {
                lastPending = pending;
                boolean next_add = i + 1 < ins.size() && ins.get(i + 1).getMnemonicString().toUpperCase().equals("ADD")
                        && isEsp(opReg(ins.get(i + 1), 0));
                boolean computed = in.getFlowType().isComputed();
                if (computed && isMem(in, 0) && opReg(in, 0) != null && !next_add && !pendingTainted) {
                    // `call dword ptr [reg + off]` / `[reg]` (not an IAT slot, which has no register)
                    // VC6 pushes a later call's argument early: 0x428110 pushes "Activate",
                    // calls slot 0x24, then `mov ecx, eax; call 0x4aa630` which takes the
                    // string.  Pushes the next direct call needs beyond what is pushed
                    // between the two calls were made before this one and are not its own.
                    int deficit = nextCallDeficit(ins, i);
                    Site s = new Site(in.getAddress(), Math.max(0, pending - deficit) / 4);
                    s.fp = floatResult(ins, i);
                    sites.add(s);
                }
                pending = 0; pendingTainted = false;
            } else if (isJump) {
                if (pending > 0) pendingTainted = true;
                if (m.startsWith("RET")) { pending = 0; pendingTainted = false; }
            }
            for (Object o : in.getResultObjects()) {
                if (o instanceof Register) written.add(((Register) o).getName());
            }
        }
        return sites;
    }

    private long lastPending = 0;

    /** bytes the next call in the straight-line block needs that are not pushed
     *  between the call at i and it: a direct callee's stack purge (`ret N`), or
     *  the `add esp, N` after a cdecl call; 0 when the next call is indirect, a
     *  jump or branch target intervenes, or nothing is missing */
    private int nextCallDeficit(List<Instruction> ins, int i) {
        int between = 0;
        for (int k = i + 1; k < ins.size(); k++) {
            Instruction in = ins.get(k);
            String m = in.getMnemonicString().toUpperCase();
            if (in.getFlowType().isJump() || m.startsWith("RET")) return 0;
            if (k > i + 1 && currentProgram.getReferenceManager().hasReferencesTo(in.getAddress())) return 0;
            if (m.equals("PUSH")) between += 4;
            else if (m.equals("SUB") && isEsp(opReg(in, 0)) && opScalar(in, 1) != null) between += (int) opScalar(in, 1).getUnsignedValue();
            else if (in.getFlowType().isCall()) {
                if (in.getFlowType().isComputed()) return 0;
                Address[] flows = in.getFlows();
                if (flows.length != 1) return 0;
                Function callee = getFunctionAt(flows[0]);
                int need = 0;
                if (callee != null && callee.getStackPurgeSize() > 0 && callee.getStackPurgeSize() < 0x1000) {
                    need = callee.getStackPurgeSize();
                } else if (k + 1 < ins.size()) {
                    Instruction nx = ins.get(k + 1);
                    if (nx.getMnemonicString().toUpperCase().equals("ADD") && isEsp(opReg(nx, 0)) && opScalar(nx, 1) != null)
                        need = (int) opScalar(nx, 1).getUnsignedValue();
                }
                return Math.max(0, need - between);
            }
        }
        return 0;
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File out = new File(args.length > 0 ? args[0] : "ghidra_out");
        ReferenceManager refs = currentProgram.getReferenceManager();
        SymbolTable st = currentProgram.getSymbolTable();
        DataType u4 = Undefined4DataType.dataType;
        int funcs = 0, skipped = 0, overrides = 0, failed = 0;
        try (PrintWriter w = new PrintWriter(new File(out, "indirect_overrides.csv"))) {
            w.println("function,callsite,args");
            FunctionIterator fi = currentProgram.getFunctionManager().getFunctions(true);
            while (fi.hasNext()) {
                Function f = fi.next();
                if (f.getEntryPoint().getOffset() >= GAME_END || f.isThunk()) continue;
                funcs++;
                // overrides from an earlier run of this script (they live as symbols in
                // the function's "override" namespace): drop them so a function this
                // version skips does not keep stale ones
                // ... but only those at indirect calls: VarargOverrides.java keeps its
                // printf-style prototypes in the same namespace (pass 5a/5b deleted
                // them, and every logger call lost its format arguments)
                Namespace ov = st.getNamespace("override", f);
                if (ov != null) {
                    List<Symbol> old = new ArrayList<>();
                    for (Symbol s : st.getSymbols(ov)) {
                        Instruction at = currentProgram.getListing().getInstructionAt(s.getAddress());
                        if (at != null && at.getFlowType().isCall() && at.getFlowType().isComputed()) old.add(s);
                    }
                    for (Symbol s : old) s.delete();
                }
                lastPending = 0;
                List<Site> sites = analyse(f, refs);
                if (sites == null) { skipped++; continue; }
                for (Site s : sites) {
                    FunctionDefinitionDataType fd = new FunctionDefinitionDataType((s.fp ? "fvcall" : "vcall") + s.args);
                    fd.setReturnType(s.fp ? Float10DataType.dataType : u4);
                    ParameterDefinition[] pd = new ParameterDefinition[s.args];
                    for (int k = 0; k < s.args; k++) pd[k] = new ParameterDefinitionImpl("a" + (k + 1), u4, null);
                    fd.setArguments(pd);
                    try {
                        fd.setCallingConvention("__stdcall");
                        HighFunctionDBUtil.writeOverride(f, s.at, fd);
                        overrides++;
                        w.println(f.getEntryPoint() + "," + s.at + "," + s.args + (s.fp ? ",float" : ""));
                    } catch (Exception e) {
                        failed++;
                        if (failed < 10) printerr("OverrideIndirectCalls: " + s.at + " " + e);
                    }
                }
            }
        }
        println("OverrideIndirectCalls: " + overrides + " call sites in " + funcs + " functions (" + skipped
                + " functions skipped as inconsistent, " + failed + " failed)");
    }
}
