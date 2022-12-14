/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
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
  return;
}

