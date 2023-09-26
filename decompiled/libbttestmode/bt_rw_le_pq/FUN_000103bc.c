/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> bt_rw_le_pq.o -> FUN_000103bc
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_000103bc(void)

{
  undefined4 in_t1;
  
  FUN_000103b8(&stack0x0000004c);
  FUN_000103bc();
  FUN_000103c0();
  FUN_000103c4();
  custom3.rd.rs1.rs2(gp,in_t1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

