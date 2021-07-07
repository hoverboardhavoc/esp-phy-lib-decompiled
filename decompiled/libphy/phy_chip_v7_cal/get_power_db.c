/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> get_power_db
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

