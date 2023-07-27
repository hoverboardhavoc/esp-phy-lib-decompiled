/*
 * Last changed at upstream commit 7bdaf7da843d762451b59947318cd2c6cf733855
 * https://github.com/espressif/esp-phy-lib/commit/7bdaf7da843d762451b59947318cd2c6cf733855
 * Upstream date: 2023-07-27 11:33:55 +0800
 * Upstream subject: fix c3 ble tx bug
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
  gpio_output_set = (code)0x0;
  wifi_cali_offset = 0;
  DAT_00018081 = 0;
  if (param_1 == 1) {
    if (tester_cali_flag == '\0') {
      phy_tx_pwr_track_en = 0;
      txpwr_track_en_bk = uVar1;
      txpwr_correct_en_bk = phy_tx_pwr_correct_en;
      phy_tx_pwr_correct_en = 0;
      btpwr_track_en_bk = DAT_000180ed;
      DAT_000180ed = 0;
      wifi_correct_power_bk = DAT_0001824b;
      DAT_0001824b = 0;
      bt_correct_power_bk = phy_i2c_check;
      phy_i2c_check = (code)0x0;
      puVar4 = &phy_param;
      iVar3 = 0;
      do {
        puVar5 = &target_power_init_bkup + iVar3;
        iVar3 = iVar3 + 1;
        *puVar5 = puVar4[0xf4];
        puVar4 = puVar4 + 1;
      } while (iVar3 != 0xe);
      wifi_cal_power_bkup = DAT_000181c5;
      wifi_pwctrl_atten_bkup = DAT_000181bf;
      DAT_0001650d = force_iq_set;
      DAT_0001650e = DAT_000181c1;
      tester_cali_flag = '\x01';
    }
    pcVar2 = "Tester calibrate start!\n";
  }
  else {
    phy_tx_pwr_track_en = txpwr_track_en_bk;
    phy_tx_pwr_correct_en = txpwr_correct_en_bk;
    DAT_000180ed = btpwr_track_en_bk;
    DAT_0001824b = wifi_correct_power_bk;
    phy_i2c_check = bt_correct_power_bk;
    iVar3 = 0;
    puVar4 = &phy_param;
    do {
      puVar5 = &target_power_init_bkup + iVar3;
      iVar3 = iVar3 + 1;
      puVar4[0xf4] = *puVar5;
      puVar4 = puVar4 + 1;
    } while (iVar3 != 0xe);
    DAT_000181c5 = wifi_cal_power_bkup;
    pcVar2 = "Tester calibrate exit!\n";
    DAT_000181bf = wifi_pwctrl_atten_bkup;
    force_iq_set = DAT_0001650d;
    DAT_000181c1 = DAT_0001650e;
    tester_cali_flag = '\0';
  }
  phy_printf(pcVar2);
  return;
}

