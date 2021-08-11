/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> i2c_paral_write
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void i2c_paral_write(uint param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
                    int param_7)

{
  _DAT_6000e004 = param_7 << 0x1a | 0x1000000;
  _DAT_6000e000 = param_2 << 8 | param_1 | param_3 << 0x10 | _DAT_6000e004;
  _DAT_6000e004 = param_5 << 8 | param_4 | param_6 << 0x10 | _DAT_6000e004;
  do {
  } while ((int)(_DAT_6000e000 << 6) < 0);
  do {
  } while ((int)(_DAT_6000e004 << 6) < 0);
  return;
}

