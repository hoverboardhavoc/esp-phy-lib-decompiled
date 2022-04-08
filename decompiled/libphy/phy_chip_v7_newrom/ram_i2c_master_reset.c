/*
 * Last changed at upstream commit dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * https://github.com/espressif/esp-phy-lib/commit/dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * Upstream date: 2022-04-07 23:37:47 -0400
 * Upstream subject: C3/S3 fix "i2c critical" and iram functions
 * Source: libphy -> phy_chip_v7_newrom.o -> ram_i2c_master_reset
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_i2c_master_reset(void)

{
  phy_i2c_enter_critical();
  if (_DAT_6000e000 << 6 < 0) {
    _DAT_6000e000 = 0x4000000;
  }
  if (_DAT_6000e004 << 6 < 0) {
    _DAT_6000e004 = 0x4000000;
  }
  phy_i2c_exit_critical();
  return;
}

