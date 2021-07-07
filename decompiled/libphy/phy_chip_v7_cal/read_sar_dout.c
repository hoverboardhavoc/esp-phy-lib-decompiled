/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> read_sar_dout
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void read_sar_dout(ushort *param_1)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = 0x6000e080;
  do {
    uVar2 = i2c_to_apb_rd(iVar1);
    *param_1 = ~uVar2 & 0xfff;
    iVar1 = iVar1 + 4;
    param_1 = param_1 + 1;
  } while (iVar1 != 0x6000e0a0);
  return;
}

