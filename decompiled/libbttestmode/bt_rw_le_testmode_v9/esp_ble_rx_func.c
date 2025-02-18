/*
 * Last changed at upstream commit e5944fc80c813150131566dd0761709ae9fdea89
 * https://github.com/espressif/esp-phy-lib/commit/e5944fc80c813150131566dd0761709ae9fdea89
 * Upstream date: 2025-02-18 15:55:42 +0800
 * Upstream subject: update libphy for RXDC cal opt, no antenna current opt, add cca api
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> esp_ble_rx_func
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Control flow encountered bad instruction data */

void esp_ble_rx_func(undefined8 param_1)

{
  undefined8 uStack00000080;
  
  uStack00000080 = param_1;
  FUN_0001278c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

