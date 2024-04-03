/*
 * Last changed at upstream commit c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * https://github.com/espressif/esp-phy-lib/commit/c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * Upstream date: 2024-04-03 16:53:14 +0800
 * Upstream subject: fix coex test wifi affect ble s8 tx problm, and c3 s3 light sleep current opt, and c3 s3 ble rx problem
 * Source: librftest -> phy_test.o -> phy_11ax_tx_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_11ax_tx_set(undefined4 *param_1,int param_2)

{
  phy_11ax_array = *param_1;
  DAT_00011968 = 0x10;
  if (1 < param_2) {
    DAT_00011968 = param_1[1];
  }
  DAT_0001196c = 1;
  if (2 < param_2) {
    DAT_0001196c = param_1[2];
  }
  return;
}

