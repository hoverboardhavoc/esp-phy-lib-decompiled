/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
 * Source: libphy -> phy_reg.o -> bb_reg_init_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bb_reg_init_new(void)

{
  _DAT_600a7400 = _DAT_600a7400 | 0x6000;
  _DAT_600a7848 = _DAT_600a7848 & 0xe0000000 | 0x170433af;
  _DAT_600a7808 = _DAT_600a7808 & 0xffffc07f | 0x3000;
  _DAT_600a78dc = _DAT_600a78dc & 0xffffc07f | 0x100;
  _DAT_600a78e4 = _DAT_600a78e4 & 0xffbfffff;
  _DAT_600a7c30 = _DAT_600a7c30 & 0xfff00fff;
  _DAT_600a790c = _DAT_600a790c & 0xfffff7ff;
  _DAT_600a7ca8 = _DAT_600a7ca8 | 0x100000;
  _DAT_600a7980 = _DAT_600a7980 & 0xfdffffff;
  _DAT_600a7890 = _DAT_600a7890 & 0xfdffffff | 0x1000000;
  _DAT_600a7a28 = _DAT_600a7a28 & 0xffbfffff;
  _DAT_600a7424 = _DAT_600a7424 & 0xe01fffff | 0x1000000;
  _DAT_600a7cd0 = _DAT_600a7cd0 | 0xf000f;
  _DAT_600a7c00 = _DAT_600a7c00 | 0x200;
  _DAT_600a981c = _DAT_600a981c | 0x800;
  _DAT_600a7438 = _DAT_600a7438 & 0xfffffe3f;
  return;
}

