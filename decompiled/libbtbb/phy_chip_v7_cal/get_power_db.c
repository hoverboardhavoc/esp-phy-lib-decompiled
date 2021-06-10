/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> get_power_db
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int get_power_db(int param_1)

{
  int iVar1;
  int iVar2;
  short sStack_14;
  short asStack_12 [3];
  
  get_fm_sar_dout(&sStack_14,asStack_12);
  iVar1 = linear_to_db((int)sStack_14,3);
  iVar2 = linear_to_db((int)asStack_12[0],3);
  return ((param_1 + iVar1) - iVar2) * 0x10000 >> 0x10;
}

