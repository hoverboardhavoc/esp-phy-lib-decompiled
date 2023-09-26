/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> run_rftest_case3
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 run_rftest_case3(char *param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *local_28;
  uint uStack_24;
  
  run_para_array_clear(param_2,param_3);
  iVar1 = strcmp(param_1,"WifiTxStart");
  if (iVar1 == 0) {
    if ((int)param_2[1] < 1) {
      phy_printf("wifi tx out: 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x\n",*param_2,param_2[2],param_2[3],
                 param_2[4],param_2[5]);
    }
    WifiTxStart(*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5]);
    pcVar2 = "tx_state:0x%x!\n";
    param_1 = (char *)(_DAT_60047c68 & 0xff);
  }
  else {
    iVar1 = strcmp(param_1,"tx_cbw40m_en");
    if (iVar1 == 0) {
      tx_cbw40m_en = (undefined1)*param_2;
      uStack_24 = *param_2 & 0xff;
      pcVar2 = "%s: %d\n";
_L563:
      phy_printf(pcVar2,param_1,uStack_24);
      return 1;
    }
    iVar1 = strcmp(param_1,"cbw40m_en");
    if (iVar1 == 0) {
      cbw40m_en((byte)*param_2);
      return 1;
    }
    iVar1 = strcmp(param_1,"tx_contin_en");
    if (iVar1 == 0) {
      tx_contin_en((byte)*param_2);
      ble_tx_contin_en = (char)*param_2;
      return 1;
    }
    iVar1 = strcmp(param_1,"wifitxout");
    if (iVar1 == 0) {
      wifitxout(param_2,param_3);
      return 1;
    }
    iVar1 = strcmp(param_1,"wifiscwout");
    if (iVar1 == 0) {
      wifiscwout(param_2);
      return 1;
    }
    iVar1 = strcmp(param_1,"esp_tx");
    if (iVar1 == 0) {
      esp_tx_func(param_2,param_3);
      return 1;
    }
    iVar1 = strcmp(param_1,"esp_rx");
    if (iVar1 == 0) {
      esp_rx_func(param_2);
      return 1;
    }
    iVar1 = strcmp(param_1,"WifiRxStart");
    if (iVar1 == 0) {
      phy_printf(&_LC79,param_1);
      do_rx_poll(*param_2);
      return 1;
    }
    iVar1 = strcmp(param_1,"FillTxPacket");
    if (iVar1 == 0) {
      FillTxPacket(*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],param_2[6],
                   param_2[7]);
    }
    else {
      iVar1 = strcmp(param_1,"RF_init_sel");
      if (iVar1 == 0) {
        RF_init_sel((byte)*param_2,param_2[1]);
        return 1;
      }
      iVar1 = strcmp(param_1,"RF_init_ram_sel");
      if (iVar1 == 0) {
        RF_init_ram_sel((byte)*param_2,param_2[1]);
        return 1;
      }
      iVar1 = strcmp(param_1,"txtone");
      if (iVar1 != 0) {
        iVar3 = strcmp(param_1,"RFChannelSel");
        iVar1 = _DAT_6004d000;
        if (iVar3 == 0) {
          rftest_set_chan((byte)*param_2,(byte)param_2[1]);
          uVar5 = param_2[1];
          uVar4 = *param_2;
          uVar6 = _DAT_6004d000 - iVar1;
          pcVar2 = "%s %d %d, %dus\n";
        }
        else {
          iVar1 = strcmp(param_1,"txpwr_track_en");
          if (iVar1 != 0) {
            iVar1 = strcmp(param_1,"bt_tx_tone");
            if (iVar1 == 0) {
              bt_tx_tone(*param_2,param_2[1],param_2[2]);
              return 1;
            }
            iVar1 = strcmp(param_1,"init_print");
            if (iVar1 == 0) {
              module_test_cal_print();
              phy_printf("print end\n");
              return 1;
            }
            iVar1 = strcmp(param_1,"target_power_backoff");
            if (iVar1 == 0) {
              target_power_backoff((int)(char)(byte)*param_2);
              uStack_24 = *param_2;
              pcVar2 = "%s %d dB set ok!\n";
            }
            else {
              iVar1 = strcmp(param_1,"ESP_TEST_GPIO");
              if (iVar1 != 0) {
                iVar1 = strcmp(param_1,"cmdstop_gpio");
                if (iVar1 == 0) {
                  CMDSTOP_GPIO();
                  return 1;
                }
                return 0;
              }
              ESP_TEST_GPIO(param_2,&local_28,3);
              pcVar2 = "Input result:0x%x,0x%x\n";
              param_1 = local_28;
            }
            goto _L563;
          }
          phy_tx_pwr_track_en = (byte)*param_2;
          phy_tx_pwr_correct_en = (byte)param_2[1];
          phy_tx_pwr_print_en = (byte)param_2[2];
          phy_param = phy_tx_pwr_track_en;
          (**(code **)(_g_phyFuns + 0xe0))(1,*(code **)(_g_phyFuns + 0xe0));
          uVar6 = (uint)phy_tx_pwr_print_en;
          uVar5 = (uint)phy_tx_pwr_correct_en;
          uVar4 = (uint)phy_tx_pwr_track_en;
          pcVar2 = "%s: track_en=%d, correct_en=%d, print_en=%d\n";
        }
        phy_printf(pcVar2,param_1,uVar4,uVar5,uVar6);
        return 1;
      }
      txtone_enable = *param_2 != 0 || param_2[3] != 0;
      start_tx_tone(param_2[1],param_2[2],param_2[4],param_2[5]);
    }
    pcVar2 = "%s\n";
  }
  phy_printf(pcVar2,param_1);
  return 1;
}

