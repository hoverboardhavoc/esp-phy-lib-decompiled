/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> get_fm_sar_dout
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int get_fm_sar_dout(undefined2 *param_1,undefined2 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined1 auStack_20 [4];
  ushort uStack_1c;
  ushort uStack_1a;
  ushort uStack_18;
  ushort uStack_16;
  ushort uStack_14;
  ushort uStack_12;
  
  uVar1 = i2c_to_apb_rd(0x6000e050);
  i2c_to_apb_wr(0x6000e050,uVar1 & 0xfffffffd);
  uVar1 = i2c_to_apb_rd(0x6000e050);
  i2c_to_apb_wr(0x6000e050,uVar1 | 2);
  ets_delay_us(10);
  do {
    uVar1 = i2c_to_apb_rd(0x6000e050);
  } while ((uVar1 >> 0x18 & 7) != 0);
  read_sar_dout(auStack_20);
  uVar3 = (uint)uStack_12 + (uint)uStack_14 & 0xffff;
  uVar2 = (uint)uStack_1c + (uint)uStack_1a & 0xffff;
  uVar1 = (uint)uStack_18 + (uint)uStack_16 & 0xffff;
  uVar4 = 0;
  if (uVar3 <= uVar2) {
    uVar4 = (undefined2)((uVar2 - uVar3) * 0x10000 >> 0x10);
  }
  *param_1 = uVar4;
  uVar4 = 0;
  if (uVar3 <= uVar1) {
    uVar4 = (undefined2)((uVar1 - uVar3) * 0x10000 >> 0x10);
  }
  *param_2 = uVar4;
  return (int)(short)((int)((uint)uStack_18 + (uint)uStack_1a + (uint)uStack_16 + (uint)uStack_14)
                     >> 2);
}

