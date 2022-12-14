/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_hw_freq.o -> freq_i2c_data_write_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void freq_i2c_data_write_new(void)

{
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [60];
  
  freq_get_i2c_data(auStack_64,auStack_58,auStack_4c,auStack_40,0xc);
  freq_i2c_write_set_new(auStack_64,auStack_58,auStack_4c,auStack_40,0xc);
  return;
}

