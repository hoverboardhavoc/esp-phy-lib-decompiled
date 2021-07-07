/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_fpga_v7_cal.o -> slv_rx_del_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void slv_rx_del_cal(void)

{
  ushort *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [28];
  int iStack_5c;
  ushort local_58 [24];
  ushort uStack_28;
  ushort uStack_26;
  ushort uStack_24;
  
  _DAT_6000d010 = _DAT_6000d010 & 0xfffff800 | 0x208;
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,5,7);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,0x2e,0,3);
  slv_rx_del_get_cal_data(auStack_78);
  slv_del_result_cal(0,0x1b,auStack_78,local_58);
  puVar1 = local_58;
  iVar3 = 0;
  do {
    if (iVar3 == 6) {
      uVar5 = (uint)uStack_24 << 4 | (uint)uStack_26 << 2 | (uint)uStack_28;
      uVar6 = 0x3f;
      iVar4 = 0x24;
    }
    else {
      uVar6 = 0xff;
      uVar5 = (uint)puVar1[1] << 2 | (uint)puVar1[3] << 6 | (uint)puVar1[2] << 4 | (uint)*puVar1;
      iVar4 = iVar3 + 0x1e;
    }
    iVar3 = iVar3 + 1;
    slv_i2c_wr(0x6000d000,0x6000d008,0x7d,iVar4,uVar5,uVar6);
    puVar1 = puVar1 + 4;
  } while (iVar3 != 7);
  slv_rx_del_get_cal_data(auStack_78);
  puVar2 = auStack_78;
  do {
    if ((*(int *)(puVar2 + 0x1c) != 0) && (*(int *)(puVar2 + 0x1c) != 0x7ffffff)) {
      ets_printf("rx cal fail!\n");
    }
    puVar2 = puVar2 + -4;
  } while (auStack_98 != puVar2);
  _DAT_6000d010 = _DAT_6000d010 & 0xfffff8ff;
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,0,7);
  return;
}

