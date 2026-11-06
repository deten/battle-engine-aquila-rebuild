// ExportAll.java - Ghidra headless post-analysis export script for BEA.exe
// Usage: analyzeHeadless <proj> <name> -import BEA.exe -postScript ExportAll.java <outdir>
//
// Writes into <outdir>:
//   functions.csv    one row per function (address, name, namespace, size, callers, callees, flags)
//   calls.csv        call-graph edges (caller -> callee)
//   imports.txt      external symbols with their IAT addresses
//   strings.txt      defined string data (address, length, text)
//   vtables.txt      every vftable symbol with its slots
//   decompiled.c     decompiled C for every non-thunk function
//   per_function/    one .c file per function, named <addr>_<name>.c
//@category BEA

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.Pointer;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.DataIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.listing.Program;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceManager;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;
import ghidra.program.model.symbol.SymbolTable;
import ghidra.program.model.symbol.SymbolType;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.Set;

public class ExportAll extends GhidraScript {

    private static String csv(String s) {
        if (s == null) return "";
        if (s.contains(",") || s.contains("\"") || s.contains("\n")) {
            return "\"" + s.replace("\"", "\"\"") + "\"";
        }
        return s;
    }

    private static String safeName(String s) {
        StringBuilder b = new StringBuilder();
        for (char c : s.toCharArray()) {
            b.append(Character.isLetterOrDigit(c) || c == '_' ? c : '_');
        }
        String r = b.toString();
        return r.length() > 80 ? r.substring(0, 80) : r;
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        File out = new File(args.length > 0 ? args[0] : "ghidra_out");
        out.mkdirs();
        File perFn = new File(out, "per_function");
        perFn.mkdirs();

        Program p = currentProgram;
        Listing listing = p.getListing();
        FunctionManager fm = p.getFunctionManager();
        SymbolTable st = p.getSymbolTable();
        ReferenceManager rm = p.getReferenceManager();
        Memory mem = p.getMemory();

        println("ExportAll: program " + p.getName() + " functions=" + fm.getFunctionCount());

        // ---- functions.csv and calls.csv
        try (PrintWriter w = new PrintWriter(new BufferedWriter(new FileWriter(new File(out, "functions.csv"))));
             PrintWriter c = new PrintWriter(new BufferedWriter(new FileWriter(new File(out, "calls.csv"))))) {
            w.println("address,name,namespace,size,callers,callees,is_thunk,is_external,source,calling_convention,signature");
            c.println("caller,callee");
            for (Function f : fm.getFunctions(true)) {
                if (monitor.isCancelled()) break;
                long size = f.getBody().getNumAddresses();
                Set<Function> callers = f.getCallingFunctions(monitor);
                Set<Function> callees = f.getCalledFunctions(monitor);
                w.printf("%s,%s,%s,%d,%d,%d,%b,%b,%s,%s,%s%n",
                        f.getEntryPoint(), csv(f.getName()), csv(f.getParentNamespace().getName(true)),
                        size, callers.size(), callees.size(), f.isThunk(), f.isExternal(),
                        f.getSymbol().getSource(), f.getCallingConventionName(),
                        csv(f.getPrototypeString(false, false)));
                for (Function cf : callees) {
                    c.printf("%s,%s%n", f.getEntryPoint(), cf.getEntryPoint());
                }
            }
        }
        println("ExportAll: wrote functions.csv / calls.csv");

        // ---- imports.txt
        try (PrintWriter w = new PrintWriter(new BufferedWriter(new FileWriter(new File(out, "imports.txt"))))) {
            SymbolIterator it = st.getExternalSymbols();
            while (it.hasNext()) {
                Symbol s = it.next();
                String lib = s.getParentNamespace().getName();
                StringBuilder refs = new StringBuilder();
                for (Reference r : rm.getReferencesTo(s.getAddress())) {
                    refs.append(' ').append(r.getFromAddress());
                }
                w.printf("%s!%s\t%s\t%s%n", lib, s.getName(), s.getAddress(), refs.toString().trim());
            }
        }

        // ---- strings.txt
        try (PrintWriter w = new PrintWriter(new BufferedWriter(new FileWriter(new File(out, "strings.txt"))))) {
            DataIterator di = listing.getDefinedData(true);
            while (di.hasNext()) {
                Data d = di.next();
                if (d.hasStringValue()) {
                    Object v = d.getValue();
                    String s = v == null ? "" : v.toString().replace("\r", "\\r").replace("\n", "\\n").replace("\t", "\\t");
                    int nrefs = rm.getReferenceCountTo(d.getAddress());
                    w.printf("%s\t%d\t%d\t%s%n", d.getAddress(), d.getLength(), nrefs, s);
                }
            }
        }

        // ---- vtables.txt (symbols named vftable, created by the RTTI analyzer, plus any `??_7` leftovers)
        try (PrintWriter w = new PrintWriter(new BufferedWriter(new FileWriter(new File(out, "vtables.txt"))))) {
            SymbolIterator it = st.getAllSymbols(true);
            int count = 0;
            while (it.hasNext()) {
                Symbol s = it.next();
                if (s.getSymbolType() != SymbolType.LABEL) continue;
                String n = s.getName();
                if (!(n.startsWith("vftable") || n.startsWith("??_7"))) continue;
                Address a = s.getAddress();
                w.printf("== %s %s%n", a, s.getName(true));
                count++;
                // walk pointer slots until we hit something that is not a pointer into a function
                Address cur = a;
                for (int i = 0; i < 512; i++) {
                    try {
                        long v = mem.getInt(cur) & 0xffffffffL;
                        Address target = a.getNewAddress(v);
                        Function tf = fm.getFunctionAt(target);
                        if (tf == null) {
                            // first slot may be a thunk-less code pointer not yet a function; stop at non-code
                            if (i == 0 && mem.contains(target) && mem.getBlock(target) != null && mem.getBlock(target).isExecute()) {
                                w.printf("  [%3d] %s %s%n", i, target, "<code, no function>");
                            } else {
                                break;
                            }
                        } else {
                            w.printf("  [%3d] %s %s%n", i, target, tf.getName(true));
                        }
                        cur = cur.add(4);
                        // stop if next address has its own symbol (start of the next vtable / data)
                        Symbol next = st.getPrimarySymbol(cur);
                        if (next != null) break;
                    } catch (Exception e) {
                        break;
                    }
                }
            }
            println("ExportAll: vtables=" + count);
        }

        // ---- decompile everything
        DecompInterface ifc = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        ifc.setOptions(opts);
        ifc.toggleCCode(true);
        ifc.toggleSyntaxTree(false);
        ifc.setSimplificationStyle("decompile");
        if (!ifc.openProgram(p)) {
            printerr("Decompiler failed to open: " + ifc.getLastMessage());
            return;
        }
        int done = 0, failed = 0;
        int total = fm.getFunctionCount();
        try (PrintWriter all = new PrintWriter(new BufferedWriter(new FileWriter(new File(out, "decompiled.c")), 1 << 20))) {
            for (Function f : fm.getFunctions(true)) {
                if (monitor.isCancelled()) break;
                if (f.isThunk() || f.isExternal()) continue;
                DecompileResults r = ifc.decompileFunction(f, 120, monitor);
                String header = "// ===== " + f.getEntryPoint() + " " + f.getName(true) + " size=" + f.getBody().getNumAddresses();
                String body;
                if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                    body = r.getDecompiledFunction().getC();
                } else {
                    body = "// DECOMPILE FAILED: " + (r == null ? "null" : r.getErrorMessage()) + "\n";
                    failed++;
                }
                all.println(header);
                all.println(body);
                File pf = new File(perFn, f.getEntryPoint().toString() + "_" + safeName(f.getName()) + ".c");
                try (PrintWriter w = new PrintWriter(new BufferedWriter(new FileWriter(pf)))) {
                    w.println(header);
                    w.println(body);
                }
                done++;
                if (done % 500 == 0) println("ExportAll: decompiled " + done + "/" + total + " failed=" + failed);
            }
        }
        ifc.dispose();
        println("ExportAll: DONE decompiled=" + done + " failed=" + failed);
    }
}
