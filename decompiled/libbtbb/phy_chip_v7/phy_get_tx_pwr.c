/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7.o -> phy_get_tx_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int phy_get_tx_pwr(void)

{
  uint uVar1;
  undefined1 auStack_20 [4];
  ushort uStack_1c;
  ushort uStack_1a;
  ushort uStack_18;
  ushort uStack_16;
  ushort uStack_14;
  ushort uStack_12;
  
  read_sar_dout(auStack_20);
  uVar1 = (uint)uStack_14 + (uint)uStack_12 & 0xffff;
  ets_printf("%d, %d, ");
  return (int)(short)((((int)((((uint)uStack_1c + (uint)uStack_1a) - uVar1) * 0x10000) >> 0x10) <<
                      10) / ((int)((((uint)uStack_18 + (uint)uStack_16) - uVar1) * 0x10000) >> 0x10)
                     );
}

