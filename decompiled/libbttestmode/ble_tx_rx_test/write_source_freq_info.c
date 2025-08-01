/*
 * Last changed at upstream commit 1d4cd3aafa244a0adf5891f058b3519bc970d644
 * https://github.com/espressif/esp-phy-lib/commit/1d4cd3aafa244a0adf5891f058b3519bc970d644
 * Upstream date: 2025-08-01 19:50:02 +0800
 * Upstream subject: 1. fix C5ECO2 signaling test power 2. fix C5ECO2/C6ECO3/H2ECO5 coex problem
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
    _DAT_0001102e = ble_freq_err;
    DAT_0001102c = (undefined1)*param_2;
    DAT_00011031 = (undefined1)param_1;
    DAT_0001102d = (undefined1)param_2[1];
    _DAT_600a1830 = &ble_radio_tx_buffer;
    DAT_00011030 = param_3;
  }
  return;
}

