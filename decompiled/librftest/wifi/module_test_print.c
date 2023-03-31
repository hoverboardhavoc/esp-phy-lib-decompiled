/*
 * Last changed at upstream commit 9af79fa4c0c1211cd1570ca7cc785a6ca069c929
 * https://github.com/espressif/esp-phy-lib/commit/9af79fa4c0c1211cd1570ca7cc785a6ca069c929
 * Upstream date: 2023-03-31 17:07:27 +0800
 * Upstream subject: update_for_rftest_20230331
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
  undefined4 uVar5;
  code *pcVar6;
  code *pcVar7;
  char cStack_3c;
  char cStack_3b;
  undefined2 uStack_38;
  undefined2 uStack_36;
  
  phy_version_print();
  phy_printf("vdd33=%d;\n",_DAT_0001824e);
  phy_printf("TXIQ, ");
  get_iq_value(&cStack_3c,_test_txtone_pwr,0);
  phy_printf("%d, %d; ",(int)cStack_3c,(int)cStack_3b);
  get_iq_value(&cStack_3c,_DAT_0001819a,0);
  phy_printf("%d, %d; ",(int)cStack_3c,(int)cStack_3b);
  phy_printf(&_LC12);
  pcVar6 = (code *)&phy_param;
  pcVar7 = (code *)&phy_param;
  phy_printf("TXDC, ");
  do {
    pcVar1 = pcVar7 + 0x12a;
    pcVar2 = pcVar7 + 0x128;
    pcVar3 = pcVar7 + 0x126;
    pcVar4 = pcVar7 + 0x124;
    pcVar7 = pcVar7 + 8;
    phy_printf("%d, %d, %d, %d; ",*(undefined2 *)pcVar4,*(undefined2 *)pcVar3,*(undefined2 *)pcVar2,
               *(undefined2 *)pcVar1);
  } while (pcVar7 != phy_get_rf_cal_version);
  phy_printf(&_LC12);
  phy_printf("BT_TXIQ, ");
  get_iq_value(&cStack_3c,_txiq_cal_init,0);
  phy_printf("%d, %d; ",(int)cStack_3c,(int)cStack_3b);
  phy_printf(&_LC12);
  phy_printf("BT_TXDC, ");
  do {
    pcVar7 = pcVar6 + 0x188;
    pcVar1 = pcVar6 + 0x186;
    pcVar2 = pcVar6 + 0x184;
    pcVar3 = pcVar6 + 0x182;
    pcVar6 = pcVar6 + 8;
    phy_printf("%d, %d, %d, %d; ",*(undefined2 *)pcVar3,*(undefined2 *)pcVar2,*(undefined2 *)pcVar1,
               *(undefined2 *)pcVar7);
  } while (pcVar6 != esp_rom_spiflash_write);
  phy_printf(&_LC12);
  phy_printf("RXIQ, ");
  get_iq_value(&cStack_3c,_phy_tx_pwr_print_en,1);
  phy_printf("%d, %d; ",(int)cStack_3c,(int)cStack_3b);
  get_iq_value(&cStack_3c,_DAT_0001819e,1);
  pcVar7 = (code *)&phy_rxrf_dc;
  phy_printf("%d, %d; ",(int)cStack_3c,(int)cStack_3b);
  phy_printf(&_LC12);
  phy_printf("RXDC_RFRX_BT, ");
  pcVar6 = (code *)&phy_rxrf_dc;
  do {
    uVar5 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    get_dc_value(&uStack_38,uVar5);
    phy_printf("%d, %d; ",uStack_38,uStack_36);
  } while (pcVar6 != phy_rfcal_data_check);
  phy_printf(&_LC12);
  phy_printf("RXDC_RFRX_WIFI, ");
  do {
    pcVar6 = pcVar7 + 0x24;
    pcVar7 = pcVar7 + 4;
    get_dc_value(&uStack_38,*(undefined4 *)pcVar6);
    phy_printf("%d, %d; ",uStack_38,uStack_36);
  } while (pcVar7 != phy_rfcal_data_check);
  phy_printf(&_LC12);
  pcVar6 = (code *)&phy_rxbb_dc;
  phy_printf("RXDC_RXBB_WIFI, ");
  do {
    uVar5 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    get_dc_value(&uStack_38,uVar5);
    phy_printf("%d, %d; ",uStack_38,uStack_36);
  } while (pcVar6 != register_chipv7_phy);
  phy_printf(&_LC12);
  pcVar6 = (code *)&phy_chan_dc;
  phy_printf("RXDC_CHAN_WIFI, ");
  do {
    uVar5 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    get_dc_value(&uStack_38,uVar5);
    phy_printf("%d, %d; ",uStack_38,uStack_36);
  } while (pcVar6 != tx_pwctrl_background);
  phy_printf(&_LC12);
  return;
}

