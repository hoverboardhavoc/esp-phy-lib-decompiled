/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> esp_tester_cali_en
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void esp_tester_cali_en(int param_1)

{
  undefined1 uVar1;
  char *pcVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  
  uVar1 = phy_tx_pwr_track_en;
  rx_table_track = (code)0x0;
  if (param_1 == 1) {
    if (tester_cali_flag == '\0') {
      phy_tx_pwr_track_en = 0;
      txpwr_track_en_bk = uVar1;
      txpwr_correct_en_bk = phy_tx_pwr_correct_en;
      phy_tx_pwr_correct_en = 0;
      btpwr_track_en_bk = DAT_000170f1;
      DAT_000170f1 = 0;
      wifi_correct_power_bk = DAT_00017277;
      DAT_00017277 = 0;
      bt_correct_power_bk = txdc_stable_test;
      txdc_stable_test = (code)0x0;
      puVar4 = &phy_param;
      iVar3 = 0;
      do {
        puVar5 = &target_power_init_bkup + iVar3;
        iVar3 = iVar3 + 1;
        *puVar5 = puVar4[0xfa];
        puVar4 = puVar4 + 1;
      } while (iVar3 != 0xe);
      wifi_cal_power_bkup = DAT_000171f1;
      wifi_pwctrl_atten_bkup = DAT_000171eb;
      DAT_000158ad = tx_ack_start;
      DAT_000158ae = DAT_000171ed;
      tester_cali_flag = '\x01';
    }
    pcVar2 = "Tester calibrate start!\n";
  }
  else {
    phy_tx_pwr_track_en = txpwr_track_en_bk;
    phy_tx_pwr_correct_en = txpwr_correct_en_bk;
    DAT_000170f1 = btpwr_track_en_bk;
    DAT_00017277 = wifi_correct_power_bk;
    txdc_stable_test = bt_correct_power_bk;
    iVar3 = 0;
    puVar4 = &phy_param;
    do {
      puVar5 = &target_power_init_bkup + iVar3;
      iVar3 = iVar3 + 1;
      puVar4[0xfa] = *puVar5;
      puVar4 = puVar4 + 1;
    } while (iVar3 != 0xe);
    DAT_000171f1 = wifi_cal_power_bkup;
    pcVar2 = "Tester calibrate exit!\n";
    DAT_000171eb = wifi_pwctrl_atten_bkup;
    tx_ack_start = DAT_000158ad;
    DAT_000171ed = DAT_000158ae;
    tester_cali_flag = '\0';
  }
  phy_printf(pcVar2);
  return;
}

