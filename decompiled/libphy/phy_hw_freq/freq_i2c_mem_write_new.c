/*
 * Last changed at upstream commit 3c715e60c63d59b1d8240de147d46d78d84a97bf
 * https://github.com/espressif/esp-phy-lib/commit/3c715e60c63d59b1d8240de147d46d78d84a97bf
 * Upstream date: 2023-01-16 19:19:06 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_hw_freq.o -> freq_i2c_mem_write_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void freq_i2c_mem_write_new(uint param_1,uint param_2,int param_3)

{
  _DAT_600a00d0 = param_3 << 0x18 | param_2;
  _DAT_600a00c0 = (param_1 & 0x3ff) << 4 | _DAT_600a00c0 & 0xffff400f;
  return;
}

