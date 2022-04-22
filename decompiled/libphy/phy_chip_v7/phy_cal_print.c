/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
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
  char cVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  char cStack_34;
  char cStack_33;
  
  phy_version_print();
  uVar8 = DAT_0001467c;
  rom_tsens_temp_read();
  phy_printf("param_flag: 0x%x\n",DAT_0001459c);
  phy_printf("vdd33=%d, temp_code=%d, offset=%d, temp_code_init=%d\n",uVar8 >> 0x10,
             (int)DAT_0001450e,(int)(char)(uVar8 >> 8),(int)DAT_0001468e);
  phy_printf("rc_dout, %d; wifi: %d, %d, %d, %d, bt: %d, %d, %d, %d\n",DAT_000145e2,DAT_000145e3,
             DAT_000145e4,DAT_000145e5,DAT_000145e6,DAT_000145e7,DAT_000145e8);
  phy_printf("RX_NOISEFLOOR,");
  cVar5 = '\x03';
  do {
    uVar7 = read_hw_noisefloor();
    cVar5 = cVar5 + -1;
    phy_printf(&_LC45,uVar7);
  } while (cVar5 != '\0');
  phy_printf(&_LC58);
  phy_printf("CCT_LOAD, ");
  phy_printf(&_LC60,DAT_000145d4);
  phy_printf(&_LC60,DAT_000145d7);
  phy_printf(&_LC60,DAT_000145da);
  phy_printf(&_LC58);
  phy_printf("CCT_STG1, ");
  puVar11 = &phy_param;
  phy_printf(&_LC60,DAT_000145d5);
  phy_printf(&_LC60,DAT_000145d8);
  puVar9 = &phy_param;
  phy_printf(&_LC60,DAT_000145db);
  phy_printf(&_LC58);
  phy_printf("CCT_STG2, ");
  phy_printf(&_LC60,DAT_000145d6);
  phy_printf(&_LC60,DAT_000145d9);
  phy_printf(&_LC60,DAT_000145dc);
  phy_printf(&_LC58);
  phy_printf("wifi_cal_power, %d\n",(int)DAT_000145f1);
  phy_printf("wifi_cal_atten, ");
  phy_printf(&_LC60,(int)DAT_000145ee);
  phy_printf(&_LC60,(int)DAT_000145ef);
  phy_printf(&_LC60,(int)DAT_000145f0);
  phy_printf(&_LC58);
  phy_printf("wifi_pwctrl_atten, ");
  phy_printf(&_LC60,(int)DAT_000145eb);
  phy_printf(&_LC60,(int)DAT_000145ec);
  phy_printf(&_LC60,(int)DAT_000145ed);
  phy_printf(&_LC58);
  phy_printf("TXIQ, ");
  get_iq_value(&cStack_34,DAT_000145c8,0);
  phy_printf("%d, %d; ",(int)cStack_34,(int)cStack_33);
  get_iq_value(&cStack_34,DAT_000145ca,0);
  phy_printf("%d, %d; ",(int)cStack_34,(int)cStack_33);
  phy_printf(&_LC58);
  phy_printf("LB_TXIQ, ");
  get_iq_value(&cStack_34,DAT_000145de,0);
  phy_printf("%d, %d; ",(int)cStack_34,(int)cStack_33);
  phy_printf(&_LC58);
  phy_printf("TXDC, ");
  do {
    puVar1 = (undefined2 *)(puVar9 + 0x12a);
    puVar2 = (undefined2 *)(puVar9 + 0x128);
    puVar3 = (undefined2 *)(puVar9 + 0x126);
    puVar4 = (undefined2 *)(puVar9 + 0x124);
    puVar9 = puVar9 + 8;
    phy_printf("%d, %d, %d, %d; ",*puVar4,*puVar3,*puVar2,*puVar1);
  } while (puVar9 != (undefined1 *)0x144a4);
  phy_printf(&_LC58);
  phy_printf("bt_cal_power, %d\n",(int)DAT_000145f8);
  phy_printf("bt_cal_atten, ");
  phy_printf(&_LC60,(int)DAT_000145f2);
  phy_printf(&_LC60,(int)DAT_000145f3);
  phy_printf(&_LC60,(int)DAT_000145f4);
  phy_printf(&_LC58);
  phy_printf("bt_pwctrl_atten, ");
  phy_printf(&_LC60,(int)DAT_000145f5);
  phy_printf(&_LC60,(int)(char)DAT_000145f6);
  phy_printf(&_LC60,(int)DAT_000145f6._1_1_);
  phy_printf(&_LC58);
  phy_printf("BT_TXIQ, ");
  get_iq_value(&cStack_34,DAT_000145fc,0);
  phy_printf("%d, %d; ",(int)cStack_34,(int)cStack_33);
  phy_printf(&_LC58);
  phy_printf("BT_TXDC, ");
  do {
    puVar1 = (undefined2 *)(puVar11 + 0x188);
    puVar2 = (undefined2 *)(puVar11 + 0x186);
    puVar3 = (undefined2 *)(puVar11 + 0x184);
    puVar4 = (undefined2 *)(puVar11 + 0x182);
    puVar11 = puVar11 + 8;
    phy_printf("%d, %d, %d, %d; ",*puVar4,*puVar3,*puVar2,*puVar1);
  } while (puVar11 != (undefined1 *)0x14494);
  phy_printf(&_LC58);
  phy_printf("RXIQ, ");
  get_iq_value(&cStack_34,DAT_000145cc,1);
  phy_printf("%d, %d; ",(int)cStack_34,(int)cStack_33);
  get_iq_value(&cStack_34,DAT_000145ce,1);
  puVar10 = &phy_rxrf_dc;
  phy_printf("%d, %d; ",(int)cStack_34,(int)cStack_33);
  phy_printf(&_LC58);
  phy_printf("RXDC_RFRX_BT, ");
  puVar6 = &phy_rxrf_dc;
  do {
    uVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    phy_printf("%d, %d; ",uVar8 >> 0x10,uVar8 & 0xffff);
  } while (puVar6 != &DAT_0001442c);
  phy_printf(&_LC58);
  phy_printf("RXDC_RFRX_WIFI, ");
  do {
    puVar6 = puVar10 + 9;
    puVar10 = puVar10 + 1;
    phy_printf("%d, %d; ",*puVar6 >> 0x10,*puVar6 & 0xffff);
  } while (puVar10 != &DAT_0001442c);
  phy_printf(&_LC58);
  puVar6 = &phy_rxbb_dc;
  phy_printf("RXDC_RXBB_WIFI, ");
  do {
    uVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    phy_printf("%d, %d; ",uVar8 >> 0x10,uVar8 & 0xffff);
  } while (puVar6 != &phy_rxrf_dc);
  phy_printf(&_LC58);
  puVar6 = &phy_chan_dc;
  phy_printf("RXDC_CHAN_WIFI, ");
  do {
    uVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    phy_printf("%d, %d; ",uVar8 >> 0x10,uVar8 & 0xffff);
  } while (puVar6 != &phy_rxbb_dc);
  phy_printf(&_LC58);
  ram_wifi_set_tx_gain(DAT_0001466e,0);
  phy_printf("sar_dc_code=%d, sar_ref_code=%d\n",DAT_00014556,DAT_00014558);
  phy_printf("ulp_code_init=%d, %d\n",DAT_0001451b,DAT_0001451c);
  phy_tx_gain_print();
  return;
}

