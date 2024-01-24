/*
 * Last changed at upstream commit 6e051981701aacebcbfe9147b2a1fec07d472829
 * https://github.com/espressif/esp-phy-lib/commit/6e051981701aacebcbfe9147b2a1fec07d472829
 * Upstream date: 2024-01-24 19:07:43 +0800
 * Upstream subject: fix ble tx 2m problem causing by phy_wifi_enable_set
 * Source: librftest -> wifi.o -> module_test_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void module_test_print(void)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  char cStack_3c;
  char cStack_3b;
  undefined2 uStack_38;
  undefined2 uStack_36;
  
  pcVar5 = (code *)&phy_param;
  phy_version_print();
  phy_printf("vdd33=%d;\n",_DAT_00018252);
  phy_printf("TXIQ, ");
  get_iq_value(&cStack_3c,_phy_get_adc_rand,0);
  phy_printf("%d, %d; ",(int)cStack_3c,(int)cStack_3b);
  get_iq_value(&cStack_3c,_DAT_0001819e,0);
  phy_printf("%d, %d; ",(int)cStack_3c,(int)cStack_3b);
  phy_printf(&_LC12);
  pcVar6 = (code *)&phy_param;
  phy_printf("TXDC, ");
  do {
    pcVar1 = pcVar6 + 0x12a;
    pcVar2 = pcVar6 + 0x128;
    pcVar3 = pcVar6 + 0x126;
    pcVar4 = pcVar6 + 0x124;
    pcVar6 = pcVar6 + 8;
    phy_printf("%d, %d, %d, %d; ",*(undefined2 *)pcVar4,*(undefined2 *)pcVar3,*(undefined2 *)pcVar2,
               *(undefined2 *)pcVar1);
  } while (pcVar6 != bt_txpwr_freq);
  phy_printf(&_LC12);
  phy_printf("BT_TXIQ, ");
  get_iq_value(&cStack_3c,_bt_tx_pwctrl_init,0);
  phy_printf("%d, %d; ",(int)cStack_3c,(int)cStack_3b);
  phy_printf(&_LC12);
  phy_printf("BT_TXDC, ");
  pcVar6 = pcVar5;
  do {
    pcVar1 = pcVar6 + 0x188;
    pcVar2 = pcVar6 + 0x186;
    pcVar3 = pcVar6 + 0x184;
    pcVar4 = pcVar6 + 0x182;
    pcVar6 = pcVar6 + 8;
    phy_printf("%d, %d, %d, %d; ",*(undefined2 *)pcVar4,*(undefined2 *)pcVar3,*(undefined2 *)pcVar2,
               *(undefined2 *)pcVar1);
  } while (pcVar6 != rf_cal_data_backup);
  phy_printf(&_LC12);
  phy_printf("RXIQ, ");
  get_iq_value(&cStack_3c,_rssi_min_max_print,1);
  phy_printf("%d, %d; ",(int)cStack_3c,(int)cStack_3b);
  get_iq_value(&cStack_3c,_DAT_000181a2,1);
  phy_printf("%d, %d; ",(int)cStack_3c,(int)cStack_3b);
  phy_printf(&_LC12);
  phy_printf("RXDC_RFRX_BT, ");
  pcVar6 = pcVar5;
  do {
    pcVar1 = pcVar6 + 0x2c4;
    pcVar6 = pcVar6 + 4;
    get_dc_value(&uStack_38,*(undefined4 *)pcVar1);
    phy_printf("%d, %d; ",uStack_38,uStack_36);
  } while (pcVar6 != rom1_bt_set_tx_gain);
  phy_printf(&_LC12);
  phy_printf("RXDC_RFRX_WIFI, ");
  pcVar6 = pcVar5;
  do {
    pcVar1 = pcVar6 + 0x2e8;
    pcVar6 = pcVar6 + 4;
    get_dc_value(&uStack_38,*(undefined4 *)pcVar1);
    phy_printf("%d, %d; ",uStack_38,uStack_36);
  } while (pcVar6 != rom1_bt_set_tx_gain);
  phy_printf(&_LC12);
  phy_printf("RXDC_RXBB_WIFI, ");
  pcVar6 = pcVar5;
  do {
    pcVar1 = pcVar6 + 0x30c;
    pcVar6 = pcVar6 + 4;
    get_dc_value(&uStack_38,*(undefined4 *)pcVar1);
    phy_printf("%d, %d; ",uStack_38,uStack_36);
  } while (pcVar6 != register_chipv7_phy);
  phy_printf(&_LC12);
  phy_printf("RXDC_CHAN_WIFI, ");
  do {
    pcVar6 = pcVar5 + 0x21c;
    pcVar5 = pcVar5 + 4;
    get_dc_value(&uStack_38,*(undefined4 *)pcVar6);
    phy_printf("%d, %d; ",uStack_38,uStack_36);
  } while (pcVar5 != phy_set_freq);
  phy_printf(&_LC12);
  return;
}

