/*
 * Last changed at upstream commit 59c1234e929212aec0fdda75769b759951235536
 * https://github.com/espressif/esp-phy-lib/commit/59c1234e929212aec0fdda75769b759951235536
 * Upstream date: 2026-04-22 17:40:08 +0800
 * Upstream subject: support freq hop done api
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
    DAT_0001105e = ble_freq_err;
    DAT_0001105c = (undefined1)*param_2;
    DAT_00011061 = (undefined1)param_1;
    DAT_0001105d = (undefined1)param_2[1];
    _DAT_600a1830 = &ble_radio_tx_buffer;
    DAT_00011060 = param_3;
  }
  return;
}

