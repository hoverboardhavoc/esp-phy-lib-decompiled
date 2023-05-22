/*
 * Last changed at upstream commit 05e53904ac98632e09d78693437b7fa0b35f36da
 * https://github.com/espressif/esp-phy-lib/commit/05e53904ac98632e09d78693437b7fa0b35f36da
 * Upstream date: 2023-05-22 12:26:13 +0800
 * Upstream subject: update h2 libphy phy_version: 200,0, 1cef4f4, May 22 2023, 11:57:13
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
  _DAT_600b1054 = _DAT_600b1054 & 0x1fffffff | 0x80000000;
  return;
}

