/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_hw_freq.o -> freq_i2c_mem_write_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void freq_i2c_mem_write_new(int param_1,uint param_2,int param_3)

{
  _DAT_600a00d0 = param_3 << 0x18 | param_2;
  _DAT_600a00c0 = param_1 << 4 | _DAT_600a00c0 & 0xffff400f | 0x8000;
  return;
}

