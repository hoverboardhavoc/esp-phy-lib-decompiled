/*
 * Last changed at upstream commit fbc304747bc55b40ef7225130fcf87f43b981482
 * https://github.com/espressif/esp-phy-lib/commit/fbc304747bc55b40ef7225130fcf87f43b981482
 * Upstream date: 2025-11-17 14:20:47 +0800
 * Upstream subject: libphy support C5ECO3 and ECO2 coex, fix C6 track reset
 * Source: libbttestmode -> ble_tx_rx_test.o -> write_source_freq_info
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_source_freq_info(int param_1,undefined4 *param_2,undefined1 param_3)

{
  if ((ble_freq_est != '\0') && (param_1 != 0)) {
    _DAT_0001103a = ble_freq_err;
    DAT_00011038 = (undefined1)*param_2;
    DAT_0001103d = (undefined1)param_1;
    DAT_00011039 = (undefined1)param_2[1];
    _DAT_600a1830 = &ble_radio_tx_buffer;
    DAT_0001103c = param_3;
  }
  return;
}

