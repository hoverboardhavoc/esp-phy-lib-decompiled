/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> cal_rf_ana_gain.part.2
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cal_rf_ana_gain_part_2(void)

{
  int iVar1;
  char cStack_11;
  
  pbus_force_test(5,1,_tx_rf_ana_gain);
  pbus_force_test(1,2,_DAT_0001402e);
  iVar1 = txbbgain_to_index(_DAT_0001402e);
  pbus_set_dco(stop_tx_tone + iVar1 * 8);
  rfcal_pwrctrl(0x80,&chip7_sleep_params,1,0x2a,&cStack_11,_pwrdet_offset,(int)rfcal_bb_atten_init,0
               );
  if ((byte)(cStack_11 - 0xcU) < 0x11) {
    rfcal_bb_atten_init = cStack_11 + '0';
  }
  else {
    cStack_11 = '\x14' - cStack_11;
    correct_rf_ana_gain(&cStack_11,&tx_rf_ana_gain,&tx_rf_ana_gain);
    pbus_force_test(5,1,_tx_rf_ana_gain);
    pbus_force_test(1,2,_DAT_0001402e);
    rfcal_bb_atten_init = 'D' - cStack_11;
  }
  return;
}

