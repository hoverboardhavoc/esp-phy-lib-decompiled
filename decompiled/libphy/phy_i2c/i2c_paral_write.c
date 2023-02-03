/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_i2c.o -> i2c_paral_write
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void i2c_paral_write(uint param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
                    int param_7)

{
  _DAT_600ad804 = param_7 << 0x1a | 0x1000000;
  _DAT_600ad800 = param_2 << 8 | param_1 | param_3 << 0x10 | _DAT_600ad804;
  _DAT_600ad804 = param_5 << 8 | param_4 | param_6 << 0x10 | _DAT_600ad804;
  do {
  } while ((int)(_DAT_600ad800 << 6) < 0);
  do {
  } while ((int)(_DAT_600ad804 << 6) < 0);
  return;
}

