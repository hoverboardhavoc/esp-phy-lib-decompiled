/*
 * Last changed at upstream commit 5466bfa8fde26f45cb1f7fb5dc864cbb7e50e139
 * https://github.com/espressif/esp-phy-lib/commit/5466bfa8fde26f45cb1f7fb5dc864cbb7e50e139
 * Upstream date: 2025-04-27 17:15:29 +0800
 * Upstream subject: support c5 eco2 test
 * Source: libbttestmode -> ble_tx_rx_test.o -> rx_sens_opt_2404
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rx_sens_opt_2404(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if (param_2 < 0x989) {
      phy_chip_set_chan(3,0);
    }
    else {
      phy_chip_set_chan(0xe,0);
    }
    phy_dac_rate_set(param_2 >= 0x989);
    return;
  }
  return;
}

