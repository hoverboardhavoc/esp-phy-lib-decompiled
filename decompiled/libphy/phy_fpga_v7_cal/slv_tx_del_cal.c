/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_fpga_v7_cal.o -> slv_tx_del_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void slv_tx_del_cal(void)

{
  ushort *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_8c [32];
  undefined1 auStack_6c [28];
  int iStack_50;
  ushort local_4c [20];
  ushort uStack_24;
  ushort uStack_22;
  
  _DAT_6000d010 = _DAT_6000d010 & 0xf8018ff | 0x10002500;
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,2,7);
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,10,8,0xff);
  slv_tx_del_get_cal_data(auStack_6c);
  slv_del_result_cal(0,0x16,auStack_6c,local_4c);
  puVar1 = local_4c;
  iVar3 = 0;
  do {
    if (iVar3 == 5) {
      uVar6 = 0xf;
      uVar5 = (uint)uStack_22 << 2 | (uint)uStack_24;
      iVar4 = 0x16;
    }
    else {
      uVar6 = 0xff;
      uVar5 = (uint)puVar1[1] << 2 | (uint)puVar1[3] << 6 | (uint)puVar1[2] << 4 | (uint)*puVar1;
      iVar4 = iVar3 + 0x11;
    }
    iVar3 = iVar3 + 1;
    slv_i2c_wr(0x6000d000,0x6000d008,0x7d,iVar4,uVar5,uVar6);
    puVar1 = puVar1 + 4;
  } while (iVar3 != 6);
  slv_tx_del_get_cal_data(auStack_6c);
  puVar2 = auStack_6c;
  do {
    if ((*(int *)(puVar2 + 0x1c) != 0) && (*(int *)(puVar2 + 0x1c) != 0x3fffff)) {
      ets_printf("tx cal fail!\n");
    }
    puVar2 = puVar2 + -4;
  } while (auStack_8c != puVar2);
  _DAT_6000d010 = _DAT_6000d010 & 0xff9ff8ff;
  slv_i2c_wr(0x6000d000,0x6000d008,0x7d,9,0,7);
  return;
}

