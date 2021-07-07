/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> bb_wdg_test_en
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bb_wdg_test_en(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6)

{
  _DAT_6001d03c = param_4 << 0x10 | param_3 | param_1 << 0x1e | param_2 << 0x1f;
  _DAT_6001d040 = param_5 << 0x1f | param_6 << 0x1d | 0x40000000;
  return;
}

