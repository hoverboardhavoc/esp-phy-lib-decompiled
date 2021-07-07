/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> tx_pwctrl_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_pwctrl_cal(short *param_1,int param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte abStack_41 [13];
  
  uVar4 = i2c_to_apb_rd(0x6000e060);
  iVar5 = get_sar_dout(_pwrdet_offset);
  phy_tx_power_out = (short)iVar5;
  cVar3 = get_rate_target_power(uVar4 >> 0x18 & 0x7f);
  iVar11 = (int)cVar3;
  iVar5 = (iVar5 + iVar11 * -4) * 0x10000;
  iVar8 = iVar5 >> 0x10;
  phy_tx_pwr_error = (short)((uint)iVar5 >> 0x10);
  iVar5 = -0x20;
  if (-0x21 < iVar8) {
    iVar5 = iVar8;
  }
  sVar6 = (short)iVar5;
  if (0x20 < sVar6) {
    sVar6 = 0x20;
  }
  iVar5 = (int)sVar6;
  if (tx_pwctrl_track_num < 4) {
    if (iVar8 < 1) {
      if (iVar8 < -0x10) {
        uVar4 = (iVar5 - (iVar5 >> 2) >> 2) * -0x1000000 >> 0x18;
        goto _L639;
      }
_L638:
      uVar4 = 0;
    }
    else {
      uVar4 = ((iVar5 >> 2) + iVar5 >> 2) * -0x1000000 >> 0x18;
    }
  }
  else {
    uVar4 = get_pwctrl_correct(param_1,4,2);
    if (0 < (int)uVar4) {
_L639:
      if ('\x13' < chip7_sleep_params) goto _L638;
    }
  }
  if (param_3 != 0) {
    iVar5 = (int)phy_tx_power_out;
    iVar9 = (int)DAT_000140e7;
    iVar10 = (int)(char)DAT_000140e6;
    iVar8 = (int)phy_tx_pwr_error;
    sVar6 = *param_1;
    fpga_mem_rd(0x60006008);
    ets_printf("1,target_power,%d, %d, p_error,%d, correct_v,%d, error_accum, %d, tot_p,%d, coatt,%d, rf_g,%x,%x, txq_rate,%d, %d, chan,%d, rate_att,%d\n"
               ,iVar11,iVar5,iVar8,uVar4,(int)sVar6,iVar9,iVar10);
  }
  if (param_2 == 0) {
    return;
  }
  if (uVar4 == 0) {
    return;
  }
  uVar13 = (int)(char)DAT_000140e6 - (int)(char)phy_chan_gain_table & 0xffff;
  uVar12 = uVar13 - uVar4;
  uVar7 = uVar4;
  if ((short)uVar12 < 0x1d) {
    if ((0xb < (short)uVar12) || (0xaf < _tx_rf_ana_gain)) goto _L646;
  }
  else if (_tx_rf_ana_gain < 0x20) goto _L646;
  bVar1 = 0x14 - (char)uVar12;
  abStack_41[0] = bVar1;
  correct_rf_ana_gain(abStack_41,&tx_rf_ana_gain,&tx_rf_ana_gain);
  uVar7 = (uint)abStack_41[0];
  cVar3 = bVar1 - abStack_41[0];
  DAT_000140e7 = DAT_000140e7 + cVar3;
  DAT_000140e8 = cVar3 + DAT_000140e8;
  set_tx_gain_table(_tx_rf_ana_gain,_DAT_0001402e);
  _DAT_000140ec = _tx_rf_ana_gain;
  _DAT_000140ee = _DAT_0001402e;
  uVar7 = (int)(((uVar12 & 0xff) + (uVar7 - 0x14) + uVar4) * 0x1000000) >> 0x18;
_L646:
  iVar5 = (int)((uVar13 - uVar7) * 0x10000) >> 0x10;
  if ((int)uVar7 < 0) {
    if (0x46 < iVar5) {
      return;
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    if (iVar5 < 0xc) {
      return;
    }
  }
  DAT_000140e7 = DAT_000140e7 + (char)uVar7;
  DAT_000140e8 = (char)uVar7 + DAT_000140e8;
  DAT_000140e6 = (byte)(((uint)DAT_000140e6 - (uVar7 & 0xff)) * 0x1000000 >> 0x18);
  write_wifi_dig_gain();
  uVar2 = _tx_rf_ana_gain;
  if (param_3 != 0) {
    iVar5 = (int)phy_tx_pwr_error;
    sVar6 = *param_1;
    iVar8 = (int)DAT_000140e7;
    iVar9 = (int)(char)DAT_000140e6;
    fpga_mem_rd(0x60006008);
    ets_printf("2,target_power,%d, p_error,%d, correct_v,%d, error_accum, %d, tot_p,%d, coatt,%d, rf_g,%x,%x, txq_rate,%d, %d, chan,%d, rate_att,%d\n"
               ,iVar11,iVar5,uVar4,(int)sVar6,iVar8,iVar9,uVar2);
  }
  return;
}

