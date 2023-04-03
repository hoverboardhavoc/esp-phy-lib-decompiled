/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_hw_freq.o -> freq_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void freq_reg_init(uint param_1,int param_2)

{
  _DAT_600a00c0 = ((param_2 << 4 | param_1) & 0xff) << 0x11 | _DAT_600a00c0 & 0xda01bfff | 0x2000000
  ;
  _DAT_600a00c8 = 0x33000492;
  _DAT_600a00cc = 0x49836c48;
  return;
}

