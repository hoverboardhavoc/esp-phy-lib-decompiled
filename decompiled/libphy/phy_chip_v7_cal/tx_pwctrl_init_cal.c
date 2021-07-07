/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> tx_pwctrl_init_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint tx_pwctrl_init_cal(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  char cStack_29;
  undefined1 auStack_28 [16];
  
  set_channel_rfpll_freq((int)(char)param_1,chip7_phy_init_ctrl,0);
  set_txcap_reg(&chip7_sleep_params,param_1);
  if (param_1 == 6) {
    cal_rf_ana_gain_part_2();
  }
  if (param_2 == 1) {
    cVar5 = '\x04';
    iVar1 = 0;
    do {
      iVar3 = tx_pwr_backoff(&chip7_sleep_params,&cStack_29);
      iVar1 = (iVar1 + iVar3) * 0x10000 >> 0x10;
      if ((iVar3 == 0) && (cStack_29 == '\x01')) goto _L562;
      cVar5 = cVar5 + -1;
    } while (cVar5 != '\0');
    uVar2 = (uint)(short)((iVar1 + 2) / 4);
  }
  else {
_L562:
    uVar2 = 0;
  }
  target_power_add_backoff(auStack_28,&chip7_sleep_params,uVar2);
  uVar4 = param_1 - 1U & 0xff;
  uVar6 = 3;
  if (uVar4 < 0xb) {
    uVar6 = (uint)(byte)CSWTCH_289[uVar4];
  }
  *(short *)(pbus_set_dco + uVar6 * 2) = (short)uVar2;
  uVar4 = fpga_mem_rd(0x600060f8);
  fpga_mem_wr(0x600060f8,
              (uVar2 & 0xff) << (uVar6 << 3 & 0x1f) | uVar4 & ~(0xff << (uVar6 << 3 & 0x1f)));
  rfcal_bb_atten_init = (byte)((rfcal_bb_atten_init + uVar2) * 0x1000000 >> 0x18);
  rfcal_pwrctrl(0x80,auStack_28,6,0x2a,uVar6 * 6 + 0x14090,_pwrdet_offset,0);
  rfcal_bb_atten_init = phy_chan_target_power[uVar6 * 6 + 0xd] + '*';
  return uVar2;
}

