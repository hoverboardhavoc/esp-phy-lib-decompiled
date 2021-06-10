/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> rfcal_txiq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rfcal_txiq(undefined4 param_1,undefined4 param_2,ushort *param_3,short param_4,uint param_5,
               int param_6)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  char cVar8;
  byte bStack_34;
  byte bStack_33;
  
  uVar4 = fpga_mem_rd(0x600050dc);
  fpga_mem_wr(0x600050dc,uVar4 | 0x800);
  uVar4 = fpga_mem_rd(0x600050dc);
  fpga_mem_wr(0x600050dc,uVar4 & 0xffffefff);
  txcal_debuge_mode();
  pbus_force_test(1,2,param_1);
  if (param_6 == 1) {
    uVar2 = pbus_rd(1,1);
    pbus_force_test(1,1,uVar2 | 2);
  }
  else if (param_6 == 2) {
    loopback_mode_en(1);
    txdc_cal_v70(param_2);
    goto _L103;
  }
  pbus_set_dco(param_2);
_L103:
  uVar5 = fpga_mem_rd(0x600060b8);
  cVar8 = '\x04';
  do {
    start_tx_tone_step(1,(int)param_4,param_5 & 0xff,0,0,0);
    ets_delay_us(2);
    iVar6 = txtone_linear_pwr(0);
    sVar3 = (short)(iVar6 >> 2);
    if (sVar3 < 0x3e9) {
      if (599 < sVar3) break;
      cVar1 = (char)param_5 + -4;
    }
    else {
      cVar1 = (char)param_5 + '\x04';
    }
    cVar8 = cVar8 + -1;
    param_5 = (uint)cVar1;
  } while (cVar8 != '\0');
  uVar4 = param_5 & 0xff;
  if (0x78 < (int)param_5) {
    uVar4 = 0x78;
  }
  if ((char)uVar4 < '\0') {
    uVar4 = 0;
  }
  txiq_cover(uVar4,(int)param_4,&bStack_34,0);
  txcal_work_mode();
  bVar7 = 0xf;
  if (('\x0f' < (char)bStack_34) || (bVar7 = 0xf1, (char)bStack_34 < -0xf)) {
    bStack_34 = bVar7;
  }
  bVar7 = 0x1f;
  if (('\x1f' < (char)bStack_33) || (bVar7 = 0xe1, (char)bStack_33 < -0x1f)) {
    bStack_33 = bVar7;
  }
  *param_3 = (ushort)((bStack_34 & 0x1f) << 6) | bStack_33 & 0x3f;
  fpga_mem_wr(0x600060b8,uVar5);
  if (param_6 == 2) {
    loopback_mode_en(0);
  }
  uVar4 = fpga_mem_rd(0x600050dc);
  fpga_mem_wr(0x600050dc,uVar4 | 0x1000);
  return;
}

