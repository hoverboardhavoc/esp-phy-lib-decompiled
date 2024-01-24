/*
 * Last changed at upstream commit ab9b9d0880221ad8423d78ba36e73ff2cb450358
 * https://github.com/espressif/esp-phy-lib/commit/ab9b9d0880221ad8423d78ba36e73ff2cb450358
 * Upstream date: 2024-01-24 19:07:43 +0800
 * Upstream subject: fix wifi boot bug at low temp
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
    DAT_000116e6 = _DAT_0001218c;
    DAT_000116e8 = _DAT_0001218e;
    DAT_000116ea = _DAT_00012190;
  }
  if (param_1 == 0) {
    _DAT_0001218a = force_txdc_table;
    _DAT_0001218c = DAT_000116e6;
    _DAT_0001218e = DAT_000116e8;
    _DAT_00012190 = DAT_000116ea;
  }
  else {
    _DAT_0001218a = *param_2;
    _DAT_00012190 = param_2[2];
    _DAT_0001218c = _DAT_00012190;
    _DAT_0001218e = _DAT_0001218a;
  }
  return;
}

