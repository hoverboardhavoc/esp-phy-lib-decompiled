/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> i2c_paral_read
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void i2c_paral_read(uint param_1,int param_2,undefined1 *param_3,uint param_4,int param_5,
                   undefined1 *param_6,int param_7)

{
  param_1 = param_2 << 8 | param_1;
  param_4 = param_5 << 8 | param_4;
  _DAT_6000e000 = param_1 | param_7 << 0x1a;
  _DAT_6000e004 = param_4 | param_7 << 0x1a;
  do {
  } while ((int)(param_1 << 6) < 0);
  do {
  } while ((int)(param_4 << 6) < 0);
  *param_3 = (char)(param_1 >> 0x10);
  *param_6 = (char)(_DAT_6000e004 >> 0x10);
  return;
}

