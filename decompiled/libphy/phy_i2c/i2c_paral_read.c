/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_i2c.o -> i2c_paral_read
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
  _DAT_600ad800 = param_1 | param_7 << 0x1a;
  _DAT_600ad804 = param_4 | param_7 << 0x1a;
  do {
  } while ((int)(param_1 << 6) < 0);
  do {
  } while ((int)(param_4 << 6) < 0);
  *param_3 = (char)(param_1 >> 0x10);
  *param_6 = (char)(_DAT_600ad804 >> 0x10);
  return;
}

