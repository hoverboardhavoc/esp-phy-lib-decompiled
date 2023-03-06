/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_pwdet.o -> get_power_db
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
  
  sStack_14 = 0;
  asStack_12[0] = 0;
  get_fm_sar_dout(&sStack_14,asStack_12);
  iVar1 = linear_to_db((int)sStack_14,3);
  iVar2 = linear_to_db((int)asStack_12[0],3);
  return ((param_1 + iVar1) - iVar2) * 0x10000 >> 0x10;
}

