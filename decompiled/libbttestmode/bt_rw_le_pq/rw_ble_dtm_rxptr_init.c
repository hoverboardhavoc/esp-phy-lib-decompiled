/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> bt_rw_le_pq.o -> rw_ble_dtm_rxptr_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001043a) */

void rw_ble_dtm_rxptr_init(int param_1,undefined1 *param_2,int param_3)

{
  while (register0x00002008 = *(BADSPACEBASE **)((int)register0x00002008 + 0x4c), param_3 != 0) {
    FUN_000104a0(param_2);
    FUN_000104a4();
    FUN_000104a8();
    FUN_000104ac();
    FUN_000104b0();
    param_1 = FUN_000104b4();
    param_2 = (undefined1 *)((int)register0x00002008 + 0x208);
  }
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

