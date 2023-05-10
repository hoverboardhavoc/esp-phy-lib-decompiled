/*
 * Last changed at upstream commit a83c216dd2de6418cb26ee42d80433b0badd4aea
 * https://github.com/espressif/esp-phy-lib/commit/a83c216dd2de6418cb26ee42d80433b0badd4aea
 * Upstream date: 2023-05-10 18:09:34 +0800
 * Upstream subject: esp32c3: update libphy for ble 1M/2M switch
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
  ESP_TEST_GPIO = (code)0x0;
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
      bt_correct_power_bk = gpio_output_set;
      gpio_output_set = (code)0x0;
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
      DAT_000163b5 = txdc_cal_init;
      DAT_000163b6 = DAT_000181bd;
      tester_cali_flag = '\x01';
    }
    pcVar2 = "Tester calibrate start!\n";
  }
  else {
    phy_tx_pwr_track_en = txpwr_track_en_bk;
    phy_tx_pwr_correct_en = txpwr_correct_en_bk;
    DAT_000180e9 = btpwr_track_en_bk;
    DAT_00018247 = wifi_correct_power_bk;
    gpio_output_set = bt_correct_power_bk;
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
    txdc_cal_init = DAT_000163b5;
    DAT_000181bd = DAT_000163b6;
    tester_cali_flag = '\0';
  }
  phy_printf(pcVar2);
  return;
}

