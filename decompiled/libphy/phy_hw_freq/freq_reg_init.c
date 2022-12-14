/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_hw_freq.o -> freq_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void freq_reg_init(uint param_1,int param_2)

{
  _DAT_600a00c0 = ((param_2 << 4 | param_1) & 0xff) << 0x11 | _DAT_600a00c0 & 0x5a01bfff | 0x2000000
  ;
  _DAT_600a00d4 = _DAT_600a00d4 & 0xfffff87f | 0x300;
  _DAT_600a00c8 = 0x33000492;
  _DAT_600a00cc = 0x49836e60;
  return;
}

