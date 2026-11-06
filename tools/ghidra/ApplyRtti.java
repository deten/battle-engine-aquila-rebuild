// ApplyRtti.java - pre-export fixup for BEA.exe.
// Reads ghidra_out/rtti_symbols.csv (produced by tools/make_rtti_symbols.py) with rows
//     kind,va,name
// where kind is "vtable" (label the address, type the slots as pointers) or
// "func" (make sure a function exists there and give it a name), then re-runs
// auto-analysis so the decompiler sees the new functions and their callees.
//@category BEA

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.PointerDataType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.SymbolTable;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.program.model.address.AddressSet;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;

public class ApplyRtti extends GhidraScript {

    private Namespace classNs(SymbolTable st, String cls) throws Exception {
        Namespace ns = currentProgram.getGlobalNamespace();
        for (String part : cls.split("::")) {
            Namespace existing = st.getNamespace(part, ns);
            if (existing == null) {
                existing = st.createClass(ns, part, SourceType.USER_DEFINED);
            }
            ns = existing;
        }
        return ns;
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File csv = new File(args.length > 0 ? args[0] : "ghidra_out/rtti_symbols.csv");
        SymbolTable st = currentProgram.getSymbolTable();
        Listing listing = currentProgram.getListing();
        int vt = 0, fn = 0, created = 0;
        try (BufferedReader r = new BufferedReader(new FileReader(csv))) {
            String line;
            while ((line = r.readLine()) != null) {
                if (line.startsWith("kind") || line.isBlank()) continue;
                String[] p = line.split(",", 3);
                String kind = p[0];
                Address a = toAddr(Long.parseLong(p[1].replace("0x", ""), 16));
                String full = p[2];
                int sep = full.lastIndexOf("::");
                String cls = sep > 0 ? full.substring(0, sep) : null;
                String leaf = sep > 0 ? full.substring(sep + 2) : full;
                Namespace ns = cls != null ? classNs(st, cls) : currentProgram.getGlobalNamespace();
                if (kind.equals("vtable")) {
                    st.createLabel(a, leaf, ns, SourceType.USER_DEFINED).setPrimary();
                    vt++;
                } else if (kind.equals("func")) {
                    Function f = listing.getFunctionAt(a);
                    if (f == null) {
                        if (listing.getInstructionAt(a) == null) {
                            new DisassembleCommand(a, null, true).applyTo(currentProgram, monitor);
                        }
                        CreateFunctionCmd cmd = new CreateFunctionCmd(a);
                        if (cmd.applyTo(currentProgram, monitor)) {
                            f = listing.getFunctionAt(a);
                            created++;
                        }
                    }
                    if (f != null) {
                        // only rename default FUN_ names; keep FID/CRT names
                        if (f.getSymbol().getSource() == SourceType.DEFAULT || f.getName().startsWith("FUN_")) {
                            f.setParentNamespace(ns);
                            f.setName(leaf, SourceType.USER_DEFINED);
                        }
                        fn++;
                    }
                }
            }
        }
        println("ApplyRtti: labelled " + vt + " vtables, " + fn + " virtual functions (" + created + " newly created)");
        println("ApplyRtti: re-running auto analysis");
        analyzeAll(currentProgram);
        println("ApplyRtti: done, functions=" + currentProgram.getFunctionManager().getFunctionCount());
    }
}
