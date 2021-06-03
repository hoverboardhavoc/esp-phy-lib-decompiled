/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> phy_cal_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_cal_print(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  char cStack_34;
  char cStack_33;
  
  phy_version_print();
  uVar6 = DAT_00014130;
  rom_tsens_temp_read();
  phy_printf("param_flag: 0x%x\n",DAT_00014050);
  phy_printf("vdd33=%d, temp_code=%d, offset=%d, temp_code_init=%d\n",uVar6 >> 0x10,
             (int)DAT_00013fc2,(int)(char)(uVar6 >> 8),(int)DAT_00013fc4);
  phy_printf("rc_dout, %d; wifi: %d, %d, %d, %d, bt: %d, %d, %d, %d\n",DAT_00014096,DAT_00014097,
             DAT_00014098,DAT_00014099,DAT_0001409a,DAT_0001409b,DAT_0001409c);
  phy_printf("RX_NOISEFLOOR, ");
  phy_printf(&_LC40,(int)noise_array);
  phy_printf(&_LC40,(int)DAT_00013f2a);
  phy_printf(&_LC40,(int)DAT_00013f2c);
  phy_printf(&_LC53);
  phy_printf("CCT_LOAD, ");
  phy_printf(&_LC55,DAT_00014088);
  puVar7 = &phy_param;
  phy_printf(&_LC55,DAT_0001408b);
  puVar9 = &phy_param;
  phy_printf(&_LC55,DAT_0001408e);
  phy_printf(&_LC53);
  phy_printf("CCT_STG1, ");
  phy_printf(&_LC55,DAT_00014089);
  phy_printf(&_LC55,DAT_0001408c);
  phy_printf(&_LC55,DAT_0001408f);
  phy_printf(&_LC53);
  phy_printf("CCT_STG2, ");
  phy_printf(&_LC55,DAT_0001408a);
  phy_printf(&_LC55,DAT_0001408d);
  phy_printf(&_LC55,DAT_00014090);
  phy_printf(&_LC53);
  phy_printf("wifi_cal_power, %d\n",(int)DAT_000140a5);
  phy_printf("wifi_cal_atten, ");
  phy_printf(&_LC55,(int)DAT_000140a2);
  phy_printf(&_LC55,(int)DAT_000140a3);
  phy_printf(&_LC55,(int)DAT_000140a4);
  phy_printf(&_LC53);
  phy_printf("wifi_pwctrl_atten, ");
  phy_printf(&_LC55,(int)DAT_0001409f);
  phy_printf(&_LC55,(int)DAT_000140a0);
  phy_printf(&_LC55,(int)DAT_000140a1);
  phy_printf(&_LC53);
  phy_printf("TXIQ, ");
  get_iq_value(&cStack_34,DAT_0001407c,0);
  phy_printf("%d, %d; ",(int)cStack_34,(int)cStack_33);
  get_iq_value(&cStack_34,DAT_0001407e,0);
  phy_printf("%d, %d; ",(int)cStack_34,(int)cStack_33);
  phy_printf(&_LC53);
  phy_printf("LB_TXIQ, ");
  get_iq_value(&cStack_34,DAT_00014092,0);
  phy_printf("%d, %d; ",(int)cStack_34,(int)cStack_33);
  phy_printf(&_LC53);
  phy_printf("TXDC, ");
  do {
    puVar1 = (undefined2 *)(puVar9 + 0x12a);
    puVar2 = (undefined2 *)(puVar9 + 0x128);
    puVar3 = (undefined2 *)(puVar9 + 0x126);
    puVar4 = (undefined2 *)(puVar9 + 0x124);
    puVar9 = puVar9 + 8;
    phy_printf("%d, %d, %d, %d; ",*puVar4,*puVar3,*puVar2,*puVar1);
  } while (puVar9 != (undefined1 *)0x13f58);
  phy_printf(&_LC53);
  phy_printf("bt_cal_power, %d\n",(int)DAT_000140ac);
  phy_printf("bt_cal_atten, ");
  phy_printf(&_LC55,(int)DAT_000140a6);
  phy_printf(&_LC55,(int)DAT_000140a7);
  phy_printf(&_LC55,(int)DAT_000140a8);
  phy_printf(&_LC53);
  phy_printf("bt_pwctrl_atten, ");
  phy_printf(&_LC55,(int)DAT_000140a9);
  phy_printf(&_LC55,(int)DAT_000140aa);
  phy_printf(&_LC55,(int)DAT_000140ab);
  phy_printf(&_LC53);
  phy_printf("BT_TXIQ, ");
  get_iq_value(&cStack_34,DAT_000140b0,0);
  phy_printf("%d, %d; ",(int)cStack_34,(int)cStack_33);
  phy_printf(&_LC53);
  phy_printf("BT_TXDC, ");
  do {
    puVar1 = (undefined2 *)(puVar7 + 0x188);
    puVar2 = (undefined2 *)(puVar7 + 0x186);
    puVar3 = (undefined2 *)(puVar7 + 0x184);
    puVar4 = (undefined2 *)(puVar7 + 0x182);
    puVar7 = puVar7 + 8;
    phy_printf("%d, %d, %d, %d; ",*puVar4,*puVar3,*puVar2,*puVar1);
  } while (puVar7 != (undefined1 *)0x13f48);
  phy_printf(&_LC53);
  phy_printf("RXIQ, ");
  get_iq_value(&cStack_34,DAT_00014080,1);
  phy_printf("%d, %d; ",(int)cStack_34,(int)cStack_33);
  get_iq_value(&cStack_34,DAT_00014082,1);
  puVar8 = &phy_rxrf_dc;
  phy_printf("%d, %d; ",(int)cStack_34,(int)cStack_33);
  phy_printf(&_LC53);
  phy_printf("RXDC_RFRX_BT, ");
  puVar5 = &phy_rxrf_dc;
  do {
    uVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    phy_printf("%d, %d; ",uVar6 >> 0x10,uVar6 & 0xffff);
  } while (puVar5 != &DAT_00013ed8);
  phy_printf(&_LC53);
  phy_printf("RXDC_RFRX_WIFI, ");
  do {
    puVar5 = puVar8 + 9;
    puVar8 = puVar8 + 1;
    phy_printf("%d, %d; ",*puVar5 >> 0x10,*puVar5 & 0xffff);
  } while (puVar8 != &DAT_00013ed8);
  phy_printf(&_LC53);
  puVar5 = &phy_rxbb_dc;
  phy_printf("RXDC_RXBB_WIFI, ");
  do {
    uVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    phy_printf("%d, %d; ",uVar6 >> 0x10,uVar6 & 0xffff);
  } while (puVar5 != &phy_rxrf_dc);
  phy_printf(&_LC53);
  puVar5 = &phy_chan_dc;
  phy_printf("RXDC_CHAN_WIFI, ");
  do {
    uVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    phy_printf("%d, %d; ",uVar6 >> 0x10,uVar6 & 0xffff);
  } while (puVar5 != &phy_rxbb_dc);
  phy_printf(&_LC53);
  ram_wifi_set_tx_gain(DAT_00014122,0);
  phy_printf("sar_dc_code=%d, sar_ref_code=%d\n",DAT_0001400a,DAT_0001400c);
  phy_printf("bias_ref_code=%d, rfpll_ref_vol=%d\n",DAT_0001400e,DAT_00013fd0);
  phy_tx_gain_print();
  return;
}

