/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
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
  dig_gpio_in = (code)0x0;
  wifi_cali_offset = 0;
  DAT_0001807d = 0;
  if (param_1 == 1) {
    if (tester_cali_flag == '\0') {
      phy_tx_pwr_track_en = 0;
      txpwr_track_en_bk = uVar1;
      txpwr_correct_en_bk = phy_tx_pwr_correct_en;
      phy_tx_pwr_correct_en = 0;
      btpwr_track_en_bk = DAT_000180e9;
      DAT_000180e9 = 0;
      wifi_correct_power_bk = DAT_00018247;
      DAT_00018247 = 0;
      bt_correct_power_bk = dig_gpio_out;
      dig_gpio_out = (code)0x0;
      puVar4 = &phy_param;
      iVar3 = 0;
      do {
        puVar5 = &target_power_init_bkup + iVar3;
        iVar3 = iVar3 + 1;
        *puVar5 = puVar4[0xf4];
        puVar4 = puVar4 + 1;
      } while (iVar3 != 0xe);
      wifi_cal_power_bkup = DAT_000181c1;
      wifi_pwctrl_atten_bkup = DAT_000181bb;
      DAT_00016369 = txdc_cal_init;
      DAT_0001636a = DAT_000181bd;
      tester_cali_flag = '\x01';
    }
    pcVar2 = "Tester calibrate start!\n";
  }
  else {
    phy_tx_pwr_track_en = txpwr_track_en_bk;
    phy_tx_pwr_correct_en = txpwr_correct_en_bk;
    DAT_000180e9 = btpwr_track_en_bk;
    DAT_00018247 = wifi_correct_power_bk;
    dig_gpio_out = bt_correct_power_bk;
    iVar3 = 0;
    puVar4 = &phy_param;
    do {
      puVar5 = &target_power_init_bkup + iVar3;
      iVar3 = iVar3 + 1;
      puVar4[0xf4] = *puVar5;
      puVar4 = puVar4 + 1;
    } while (iVar3 != 0xe);
    DAT_000181c1 = wifi_cal_power_bkup;
    pcVar2 = "Tester calibrate exit!\n";
    DAT_000181bb = wifi_pwctrl_atten_bkup;
    txdc_cal_init = DAT_00016369;
    DAT_000181bd = DAT_0001636a;
    tester_cali_flag = '\0';
  }
  phy_printf(pcVar2);
  return;
}

