/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_pwdet.o -> pwdet_reg_init_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pwdet_reg_init_new(void)

{
  _DAT_600a0818 = 0xf0f0fff;
  _DAT_600a081c = 0xff0f40;
  _DAT_600a0820 = 0xaaaa;
  _DAT_600a0810 = _DAT_600a0810 & 0xff8ff00f | 0x200380;
  _DAT_600a0814 = _DAT_600a0814 & 0xffffff00 | 8;
  _DAT_6000e000 = _DAT_6000e000 | 0x20000000;
  return;
}

