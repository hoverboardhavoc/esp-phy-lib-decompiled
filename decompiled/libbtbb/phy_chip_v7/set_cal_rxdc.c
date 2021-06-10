/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> set_cal_rxdc
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_cal_rxdc(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uStack_18;
  ushort uStack_16;
  ushort uStack_14;
  ushort uStack_12;
  
  puVar1 = (uint *)(param_3 + (param_1 * 6 + param_2 & 0xffU) * 8);
  uVar2 = *puVar1;
  uStack_14 = (ushort)uVar2 & 0x1ff;
  uVar3 = puVar1[1];
  uStack_18 = (ushort)(uVar2 >> 9) & 0x1ff;
  uStack_16 = (ushort)(uVar3 >> 9) & 0x1ff;
  uStack_12 = (ushort)uVar3 & 0x1ff;
  pbus_set_dco(&uStack_18);
  return;
}

