// VarargOverrides.java - give each call to the game's printf-style functions a
// call-site signature with the arguments its format string needs.  Ghidra only
// shows the fixed parameters of a variadic callee, so ports called the logger
// 0x441740, sprintf 0x55de9b, 0x42b840 and 0x472240 with the format alone and
// the callee read stack garbage (NOTES A1-13, 2026-10-19: 48 ports
// quarantined by tools/check_varargs.py).  With the override the decompiler
// shows every argument, typed from the format: %f/%e/%g double, %s char *,
// everything else int.
//
// The format string is the second argument: the second PUSH before the call
// (VC6 pushes right to left, so the push nearest the call is the first
// argument).  When the call is followed directly by `add esp, N` and N is
// smaller than the argument bytes the format implies, the original itself
// passes too few (a bug in the game: the port must do the same); the site is
// left alone and listed in the file given as the script argument (read by
// tools/check_varargs.py).  A larger N is VC6 deferring an earlier call's
// stack cleanup into this one.
//@category BEA
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.*;
import ghidra.program.model.lang.OperandType;
import ghidra.program.model.listing.*;
import ghidra.program.model.pcode.HighFunctionDBUtil;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.SourceType;

import java.util.ArrayList;
import java.util.List;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class VarargOverrides extends GhidraScript {
    static final long[] TARGETS = { 0x441740L, 0x55de9bL, 0x42b840L, 0x472240L };
    static final Pattern SPEC = Pattern.compile("%(?!%)[-+ #0-9.*]*(?:I64|ll|[hlL])?([a-zA-Z])");

    @Override
    public void run() throws Exception {
        int done = 0, skipped = 0, nofmt = 0;
        String[] args = getScriptArgs();
        java.io.PrintWriter shortList = args.length > 0 ? new java.io.PrintWriter(args[0]) : null;
        for (long t : TARGETS) {
            Function target = getFunctionAt(toAddr(t));
            if (target == null) { println("VarargOverrides: no function at " + Long.toHexString(t)); continue; }
            for (Reference ref : getReferencesTo(target.getEntryPoint())) {
                if (!ref.getReferenceType().isCall()) continue;
                Address callAt = ref.getFromAddress();
                Function caller = getFunctionContaining(callAt);
                Instruction call = getInstructionAt(callAt);
                if (caller == null || call == null) continue;
                // the pushes before the call, nearest first
                List<Instruction> pushes = new ArrayList<>();
                Instruction ins = call.getPrevious();
                for (int i = 0; ins != null && i < 40 && pushes.size() < 2; i++, ins = ins.getPrevious()) {
                    if (ins.getFlowType().isCall() || ins.getFlowType().isJump()) break;
                    if (ins.getMnemonicString().equalsIgnoreCase("PUSH")) pushes.add(ins);
                }
                String fmt = pushes.size() == 2 ? stringPushed(pushes.get(1)) : null;
                if (fmt == null) { nofmt++; continue; }
                List<DataType> extra = new ArrayList<>();
                int bytes = 8;
                Matcher m = SPEC.matcher(fmt);
                while (m.find()) {
                    char c = Character.toLowerCase(m.group(1).charAt(0));
                    if (m.group().contains("*")) { extra.add(IntegerDataType.dataType); bytes += 4; }
                    if (c == 'f' || c == 'e' || c == 'g') { extra.add(DoubleDataType.dataType); bytes += 8; }
                    else if (c == 's') { extra.add(new PointerDataType(CharDataType.dataType)); bytes += 4; }
                    else if (m.group().contains("I64") || m.group().contains("ll")) { extra.add(LongLongDataType.dataType); bytes += 8; }
                    else { extra.add(IntegerDataType.dataType); bytes += 4; }
                }
                if (extra.isEmpty()) continue;
                Instruction after = call.getNext();
                if (after != null && after.getMnemonicString().equalsIgnoreCase("ADD")
                        && after.getDefaultOperandRepresentation(0).equalsIgnoreCase("ESP")
                        && after.getScalar(1) != null && after.getScalar(1).getValue() < bytes) {
                    println("VarargOverrides: " + callAt + " add esp " + after.getScalar(1).getValue()
                            + " < " + bytes + " for \"" + fmt + "\"; the original passes too few, left alone");
                    if (shortList != null)
                        shortList.println(String.format("%08x %08x %d", caller.getEntryPoint().getOffset(),
                                callAt.getOffset(), after.getScalar(1).getValue() / 4));
                    skipped++;
                    continue;
                }
                FunctionDefinitionDataType sig = new FunctionDefinitionDataType("bea_vararg_" + callAt);
                List<ParameterDefinition> ps = new ArrayList<>();
                Parameter[] fixed = target.getParameters();
                for (int i = 0; i < 2; i++) {
                    DataType dt = i < fixed.length ? fixed[i].getDataType() : Undefined4DataType.dataType;
                    if (i == 1) dt = new PointerDataType(CharDataType.dataType);
                    ps.add(new ParameterDefinitionImpl("p" + i, dt, null));
                }
                for (int i = 0; i < extra.size(); i++) ps.add(new ParameterDefinitionImpl("v" + i, extra.get(i), null));
                sig.setArguments(ps.toArray(new ParameterDefinition[0]));
                sig.setReturnType(target.getReturnType());
                sig.setCallingConvention("__cdecl");
                HighFunctionDBUtil.writeOverride(caller, callAt, sig);
                done++;
            }
        }
        if (shortList != null) shortList.close();
        println("VarargOverrides: " + done + " call sites overridden, " + skipped + " skipped (original passes too few), "
                + nofmt + " without a literal format");
    }

    /** The string a `push imm32` (or `push reg` after `mov reg, imm32`) pushes, or null. */
    String stringPushed(Instruction push) throws Exception {
        Long addr = null;
        if ((push.getOperandType(0) & OperandType.SCALAR) != 0 || (push.getOperandType(0) & OperandType.ADDRESS) != 0) {
            Scalar s = push.getScalar(0);
            if (s != null) addr = s.getUnsignedValue();
            else if (push.getAddress(0) != null) addr = push.getAddress(0).getOffset();
        } else if ((push.getOperandType(0) & OperandType.REGISTER) != 0) {
            String reg = push.getDefaultOperandRepresentation(0);
            Instruction p = push.getPrevious();
            for (int i = 0; p != null && i < 8; i++, p = p.getPrevious()) {
                if (p.getMnemonicString().equalsIgnoreCase("MOV") && p.getDefaultOperandRepresentation(0).equalsIgnoreCase(reg)) {
                    Scalar s = p.getScalar(1);
                    if (s != null) addr = s.getUnsignedValue();
                    break;
                }
            }
        }
        if (addr == null || addr < 0x400000L || addr > 0x1000000L) return null;
        Data d = getDataAt(toAddr(addr));
        if (d != null && d.getValue() instanceof String) return (String) d.getValue();
        // undefined bytes: read a C string
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < 512; i++) {
            byte b = getByte(toAddr(addr + i));
            if (b == 0) return sb.toString();
            sb.append((char) (b & 0xff));
        }
        return null;
    }
}
