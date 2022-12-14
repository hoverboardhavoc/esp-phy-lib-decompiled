/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_reg.o -> agc_reg_init_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void agc_reg_init_new(uint param_1,int param_2)

{
  _DAT_600a713c = (param_1 - 1) * 0x40000 & 0x1fc0000 | _DAT_600a713c & 0xfe03ffff;
  _DAT_600a7094 = (param_1 - 1) * 4 & 0x1fc | _DAT_600a7094 & 0xfffffe03;
  _DAT_600a0958 =
       (param_2 + 0x50) * 0x1000 & 0xff000U |
       (_DAT_600a0958 & 0xfffff00f | param_1 << 4) & 0xfff00fff;
  _DAT_600a702c = (param_1 & 0x7f) << 8 | _DAT_600a702c & 0x7f80ff | 0x32000000;
  _DAT_600a7128 = _DAT_600a7128 & 0xffffff | 0xd2000000;
  return;
}

