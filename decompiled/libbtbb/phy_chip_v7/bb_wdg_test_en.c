/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> bb_wdg_test_en
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

