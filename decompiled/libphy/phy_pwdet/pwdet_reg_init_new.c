/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
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
  _DAT_600a081c = 0xff0f64;
  _DAT_600a0820 = 0xaaaa;
  _DAT_600a0810 = _DAT_600a0810 & 0xff8ff00f | 0x200500;
  _DAT_600a0814 = _DAT_600a0814 & 0xffffff00 | 8;
  _DAT_6000e000 = _DAT_6000e000 | 0x20000000;
  _DAT_600b1054 = _DAT_600b1054 & 0x1fffffff | 0x80000000;
  return;
}

