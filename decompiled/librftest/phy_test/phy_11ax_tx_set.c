/*
 * Last changed at upstream commit ab9b9d0880221ad8423d78ba36e73ff2cb450358
 * https://github.com/espressif/esp-phy-lib/commit/ab9b9d0880221ad8423d78ba36e73ff2cb450358
 * Upstream date: 2024-01-24 19:07:43 +0800
 * Upstream subject: fix wifi boot bug at low temp
 * Source: librftest -> phy_test.o -> phy_11ax_tx_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_11ax_tx_set(undefined4 *param_1,int param_2)

{
  phy_11ax_array = *param_1;
  _DAT_000116f0 = 0x10;
  if (1 < param_2) {
    _DAT_000116f0 = param_1[1];
  }
  DAT_000116f4 = 1;
  if (2 < param_2) {
    DAT_000116f4 = param_1[2];
  }
  return;
}

