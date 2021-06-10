/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_fpga_v7_cal.o -> slv_rx_del_get_cal_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void slv_rx_del_get_cal_data(uint *param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort local_58;
  ushort uStack_56;
  ushort uStack_54;
  ushort uStack_52;
  ushort uStack_50;
  ushort uStack_4e;
  ushort uStack_4c;
  ushort uStack_4a;
  ushort uStack_48;
  ushort uStack_46;
  ushort uStack_44;
  ushort uStack_42;
  ushort uStack_40;
  ushort uStack_3e;
  ushort uStack_3c;
  ushort uStack_3a;
  ushort uStack_38;
  ushort uStack_36;
  ushort uStack_34;
  ushort uStack_32;
  ushort uStack_30;
  ushort uStack_2e;
  ushort uStack_2c;
  ushort uStack_2a;
  ushort uStack_28;
  ushort uStack_26;
  ushort uStack_24;
  
  _DAT_6000d010 = _DAT_6000d010 | 0x800;
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,0x10,0x10);
  do {
    uVar3 = slv_i2c_rd(0x6000d000,0x6000d008,0x7d,0x31,1);
  } while ((uVar3 & 1) == 0);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,0,0x10);
  _DAT_6000d010 = _DAT_6000d010 & 0xfffff7ff;
  puVar5 = &local_58;
  iVar1 = 0;
  do {
    slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,iVar1,0x60);
    iVar4 = 0x25;
    puVar6 = puVar5;
    do {
      uVar2 = slv_i2c_rd(0x6000d000,0x6000d008,0x7d,iVar4,0xff);
      *puVar6 = uVar2;
      iVar4 = iVar4 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar4 != 0x2e);
    iVar1 = iVar1 + 0x20;
    puVar5 = puVar5 + 9;
  } while (iVar1 != 0x60);
  param_1[7] = (uint)uStack_24 << 0x13 | (uint)uStack_26 << 0xb | (uint)uStack_28 << 3 |
               (uint)(uStack_2a >> 5);
  param_1[6] = (uint)uStack_2c << 0xe | (uint)uStack_2e << 6 | (uint)(uStack_30 >> 2) |
               (uStack_2a & 0x1f) << 0x16;
  param_1[5] = (uint)uStack_32 << 0x11 | (uint)uStack_34 << 9 | (uint)uStack_36 << 1 |
               (uint)(uStack_38 >> 7) | (uStack_30 & 3) << 0x19;
  param_1[4] = (uint)uStack_3a << 0xc | (uint)uStack_3c << 4 | (uint)(uStack_3e >> 4) |
               (uStack_38 & 0x7f) << 0x14;
  param_1[3] = (uint)uStack_40 << 0xf | (uint)uStack_42 << 7 | (uint)(uStack_44 >> 1) |
               (uStack_3e & 0xf) << 0x17;
  param_1[2] = (uint)uStack_46 << 0x12 | (uint)uStack_48 << 10 | (uint)uStack_4a << 2 |
               (uint)(uStack_4c >> 6) | (uStack_44 & 1) << 0x1a;
  param_1[1] = (uint)uStack_4e << 0xd | (uint)uStack_50 << 5 | (uint)(uStack_52 >> 3) |
               (uStack_4c & 0x3f) << 0x15;
  *param_1 = (uint)uStack_54 << 0x10 | (uint)uStack_56 << 8 | (uint)local_58 |
             (uStack_52 & 7) << 0x18;
  return;
}

