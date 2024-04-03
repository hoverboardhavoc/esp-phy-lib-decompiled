/*
 * Last changed at upstream commit c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * https://github.com/espressif/esp-phy-lib/commit/c28825eb1be6bbe30e0ee8cfcd54614bf86273e7
 * Upstream date: 2024-04-03 16:53:14 +0800
 * Upstream subject: fix coex test wifi affect ble s8 tx problm, and c3 s3 light sleep current opt, and c3 s3 ble rx problem
 * Source: librftest -> phy_test.o -> force_txdc
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void force_txdc(int param_1,short *param_2)

{
  if (force_txdc_table == 0) {
    force_txdc_table = _DAT_0001218a;
    DAT_0001195e = _DAT_0001218c;
    DAT_00011960 = _DAT_0001218e;
    DAT_00011962 = _DAT_00012190;
  }
  if (param_1 == 0) {
    _DAT_0001218a = force_txdc_table;
    _DAT_0001218c = DAT_0001195e;
    _DAT_0001218e = DAT_00011960;
    _DAT_00012190 = DAT_00011962;
  }
  else {
    _DAT_0001218a = *param_2;
    _DAT_00012190 = param_2[2];
    _DAT_0001218c = _DAT_00012190;
    _DAT_0001218e = _DAT_0001218a;
  }
  return;
}

