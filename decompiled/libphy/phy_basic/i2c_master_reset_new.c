/*
 * Last changed at upstream commit 240e008e89a447f2f1edf990efefa45b870e6e8a
 * https://github.com/espressif/esp-phy-lib/commit/240e008e89a447f2f1edf990efefa45b870e6e8a
 * Upstream date: 2022-07-01 15:45:54 +0800
 * Upstream subject: Support 26M and 40M Crystal
 * Source: libphy -> phy_basic.o -> i2c_master_reset_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void i2c_master_reset_new(void)

{
  phy_i2c_enter_critical();
  if (_DAT_6004e800 << 6 < 0) {
    _DAT_6004e800 = 0x4000000;
  }
  if (_DAT_6004e804 << 6 < 0) {
    _DAT_6004e804 = 0x4000000;
  }
  phy_i2c_exit_critical();
  return;
}

