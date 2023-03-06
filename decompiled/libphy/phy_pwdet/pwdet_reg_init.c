/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_pwdet.o -> pwdet_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pwdet_reg_init(void)

{
  _DAT_600a0818 = 0xf0f0fff;
  _DAT_600a081c = 0xff0f40;
  _DAT_600a0820 = 0xaaaa;
  _DAT_600a0810 = _DAT_600a0810 & 0xff8ff00f | 0x200380;
  _DAT_60096150 = _DAT_60096150 & 0xffffff00 | 0x107;
  _DAT_6000e000 = _DAT_6000e000 | 0x20000000;
  _DAT_600b1054 = _DAT_600b1054 & 0x1fffffff;
  return;
}

