/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> read_sar_dout
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

