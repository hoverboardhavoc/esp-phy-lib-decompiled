/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> bt_tx_pwctrl_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_tx_pwctrl_init(void)

{
  int iVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  char acStack_42 [14];
  
  puVar9 = &chip7_sleep_params;
  iVar1 = 0;
  iVar8 = 0;
_L587:
  cVar7 = (&CSWTCH_291)[iVar8];
  acStack_42[1] = 0x30;
  set_channel_rfpll_freq((int)cVar7,DAT_00014055,0);
  set_txcap_reg(&chip7_sleep_params,cVar7);
  if (cVar7 == '\a') {
    iVar10 = 2;
    iVar1 = 1;
    do {
      uVar3 = bt_index_to_bb(iVar1);
      txcal_debuge_mode();
      pbus_force_test(5,1,_tx_rf_ana_gain);
      pbus_force_test(1,2,uVar3);
      uVar2 = pbus_rd(1,1);
      pbus_force_test(1,1,uVar2 | 2);
      pbus_set_dco(wifi_track_pll_cap + iVar1 * 8);
      uVar4 = (uint)DAT_0001409b;
      iVar5 = get_bbgain_db(_DAT_0001402e);
      iVar6 = get_bbgain_db(uVar3);
      iVar5 = (uVar4 + 0x2a & 0xff) + (iVar5 - iVar6) * -4;
      cVar7 = (char)iVar5;
      if (0x78 < iVar5 * 0x1000000 >> 0x18) {
        cVar7 = 'x';
      }
      if (cVar7 < '\0') {
        cVar7 = '\0';
      }
      rfcal_pwrctrl(0x20,acStack_42 + 1,1,6,acStack_42,_pwrdet_offset,(int)cVar7,0);
      if (acStack_42[0] < '1') {
        if ('\x13' < acStack_42[0]) goto _L582;
        iVar1 = 2;
      }
      else {
        iVar1 = 0;
      }
      if (iVar10 == 1) goto _L582;
      iVar10 = 1;
    } while( true );
  }
  uVar3 = bt_index_to_bb(iVar1);
  txcal_debuge_mode();
  pbus_force_test(5,1,_tx_rf_ana_gain);
  pbus_force_test(1,2,uVar3);
  uVar2 = pbus_rd(1,1);
  pbus_force_test(1,1,uVar2 | 2);
  pbus_set_dco(wifi_track_pll_cap + iVar1 * 8);
  uVar4 = (uint)DAT_0001409b;
  iVar10 = get_bbgain_db(_DAT_0001402e);
  iVar5 = get_bbgain_db(uVar3);
  iVar10 = (uVar4 + 0x2a & 0xff) + (iVar10 - iVar5) * -4;
  cVar7 = (char)iVar10;
  if (0x78 < iVar10 * 0x1000000 >> 0x18) {
    cVar7 = 'x';
  }
  if (cVar7 < '\0') {
    cVar7 = '\0';
  }
  rfcal_pwrctrl(0x20,acStack_42 + 1,1,6,acStack_42,_pwrdet_offset,(int)cVar7,0);
  puVar9[0x8b] = acStack_42[0] - DAT_000140ba;
  goto _L592;
_L582:
  _phy_enter_critical = (undefined2)uVar3;
  DAT_000140ba = acStack_42[0];
_L592:
  txcal_work_mode();
  iVar8 = iVar8 + 1;
  puVar9 = puVar9 + 1;
  if (iVar8 == 4) {
    DAT_000140bf = DAT_000140be;
    return;
  }
  goto _L587;
}

