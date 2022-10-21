/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_debug.o -> phy_cal_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_cal_print(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  char cVar9;
  uint *puVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined *puVar13;
  code *pcVar14;
  char cStack_34;
  char cStack_33;
  
  phy_version_print();
  uVar12 = _DAT_00012210;
  ram_tsens_temp_read();
  phy_printf("param_flag: 0x%x\n",_DAT_00012130);
  phy_printf("vdd33=%d, temp_code=%d, offset=%d, temp_code_init=%d\n",uVar12 >> 0x10,
             (int)_DAT_000120a2,(int)(char)(uVar12 >> 8),(int)_DAT_00012220);
  phy_printf("rc_dout, %d; wifi: %d, %d, %d, %d, bt: %d, %d, %d, %d\n",DAT_00012176,DAT_00012177,
             DAT_00012178,DAT_00012179,DAT_0001217a,DAT_0001217b,DAT_0001217c);
  phy_printf("RX_NOISEFLOOR,");
  cVar9 = '\x03';
  do {
    uVar11 = read_hw_noisefloor();
    cVar9 = cVar9 + -1;
    phy_printf(&_LC22,uVar11);
  } while (cVar9 != '\0');
  phy_printf(&_LC35);
  phy_printf("CCT_LOAD, ");
  phy_printf(&_LC37,DAT_00012168);
  phy_printf(&_LC37,DAT_0001216b);
  phy_printf(&_LC37,DAT_0001216e);
  phy_printf(&_LC35);
  phy_printf("CCT_STG1, ");
  pcVar14 = (code *)&phy_param;
  phy_printf(&_LC37,DAT_00012169);
  phy_printf(&_LC37,DAT_0001216c);
  puVar13 = &phy_param;
  phy_printf(&_LC37,DAT_0001216f);
  phy_printf(&_LC35);
  phy_printf("CCT_STG2, ");
  phy_printf(&_LC37,DAT_0001216a);
  phy_printf(&_LC37,DAT_0001216d);
  phy_printf(&_LC37,DAT_00012170);
  phy_printf(&_LC35);
  phy_printf("wifi_cal_power, %d\n",(int)DAT_00012185);
  phy_printf("wifi_cal_atten, ");
  phy_printf(&_LC37,(int)DAT_00012182);
  phy_printf(&_LC37,(int)DAT_00012183);
  phy_printf(&_LC37,(int)DAT_00012184);
  phy_printf(&_LC35);
  phy_printf("wifi_pwctrl_atten, ");
  phy_printf(&_LC37,(int)DAT_0001217f);
  phy_printf(&_LC37,(int)DAT_00012180);
  phy_printf(&_LC37,(int)DAT_00012181);
  phy_printf(&_LC35);
  phy_printf("TXIQ, ");
  get_iq_value(&cStack_34,_DAT_0001215c,0);
  phy_printf("%d, %d; ",(int)cStack_34,(int)cStack_33);
  get_iq_value(&cStack_34,_DAT_0001215e,0);
  phy_printf("%d, %d; ",(int)cStack_34,(int)cStack_33);
  phy_printf(&_LC35);
  phy_printf("LB_TXIQ, ");
  get_iq_value(&cStack_34,_DAT_00012172,0);
  phy_printf("%d, %d; ",(int)cStack_34,(int)cStack_33);
  phy_printf(&_LC35);
  phy_printf("TXDC, ");
  do {
    puVar1 = (undefined2 *)(puVar13 + 0x12a);
    puVar2 = (undefined2 *)(puVar13 + 0x128);
    puVar3 = (undefined2 *)(puVar13 + 0x126);
    puVar4 = (undefined2 *)(puVar13 + 0x124);
    puVar13 = puVar13 + 8;
    phy_printf("%d, %d, %d, %d; ",*puVar4,*puVar3,*puVar2,*puVar1);
  } while (puVar13 != (undefined *)0x12038);
  phy_printf(&_LC35);
  phy_printf("bt_cal_power, %d\n",(int)DAT_0001218c);
  phy_printf("bt_cal_atten, ");
  phy_printf(&_LC37,(int)DAT_00012186);
  phy_printf(&_LC37,(int)DAT_00012187);
  phy_printf(&_LC37,(int)DAT_00012188);
  phy_printf(&_LC35);
  phy_printf("bt_pwctrl_atten, ");
  phy_printf(&_LC37,(int)DAT_00012189);
  phy_printf(&_LC37,(int)DAT_0001218a);
  phy_printf(&_LC37,(int)DAT_0001218b);
  phy_printf(&_LC35);
  phy_printf("BT_TXIQ, ");
  get_iq_value(&cStack_34,_DAT_00012190,0);
  phy_printf("%d, %d; ",(int)cStack_34,(int)cStack_33);
  phy_printf(&_LC35);
  phy_printf("BT_TXDC, ");
  do {
    pcVar5 = pcVar14 + 0x188;
    pcVar6 = pcVar14 + 0x186;
    pcVar7 = pcVar14 + 0x184;
    pcVar8 = pcVar14 + 0x182;
    pcVar14 = pcVar14 + 8;
    phy_printf("%d, %d, %d, %d; ",*(undefined2 *)pcVar8,*(undefined2 *)pcVar7,*(undefined2 *)pcVar6,
               *(undefined2 *)pcVar5);
  } while (pcVar14 != ram_wifi_set_tx_gain);
  phy_printf(&_LC35);
  phy_printf("RXIQ, ");
  get_iq_value(&cStack_34,_DAT_00012160,1);
  phy_printf("%d, %d; ",(int)cStack_34,(int)cStack_33);
  get_iq_value(&cStack_34,_DAT_00012162,1);
  puVar13 = &phy_rxrf_dc;
  phy_printf("%d, %d; ",(int)cStack_34,(int)cStack_33);
  phy_printf(&_LC35);
  phy_printf("RXDC_RFRX_BT, ");
  puVar10 = (uint *)&phy_rxrf_dc;
  do {
    uVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    phy_printf("%d, %d; ",uVar12 >> 0x10,uVar12 & 0xffff);
  } while (puVar10 != (uint *)&DAT_00012040);
  phy_printf(&_LC35);
  phy_printf("RXDC_RFRX_WIFI, ");
  do {
    puVar10 = (uint *)(puVar13 + 0x24);
    puVar13 = puVar13 + 4;
    phy_printf("%d, %d; ",*puVar10 >> 0x10,*puVar10 & 0xffff);
  } while (puVar13 != &DAT_00012040);
  phy_printf(&_LC35);
  puVar10 = (uint *)&phy_rxbb_dc;
  phy_printf("RXDC_RXBB_WIFI, ");
  do {
    uVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    phy_printf("%d, %d; ",uVar12 >> 0x10,uVar12 & 0xffff);
  } while (puVar10 != (uint *)0x1205c);
  phy_printf(&_LC35);
  puVar10 = (uint *)&phy_chan_dc;
  phy_printf("RXDC_CHAN_WIFI, ");
  do {
    uVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    phy_printf("%d, %d; ",uVar12 >> 0x10,uVar12 & 0xffff);
  } while (puVar10 != (uint *)0x1205c);
  phy_printf(&_LC35);
  ram_wifi_set_tx_gain(DAT_00012202,0);
  phy_printf("sar_dc_code=%d, sar_ref_code=%d\n",_DAT_000120ea,_DAT_000120ec);
  phy_printf("ulp_code_init=%d, %d\n",DAT_000120af,DAT_000120b0);
  phy_tx_gain_print();
  return;
}

