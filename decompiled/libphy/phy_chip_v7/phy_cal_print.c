/*
 * Last changed at upstream commit 329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * https://github.com/espressif/esp-phy-lib/commit/329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * Upstream date: 2022-06-02 17:02:45 +0800
 * Upstream subject: cut init time and fix cal time 2ms!
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
  uVar8 = DAT_00014624;
  rom_tsens_temp_read();
  phy_printf("param_flag: 0x%x\n",DAT_00014544);
  phy_printf("vdd33=%d, temp_code=%d, offset=%d, temp_code_init=%d\n",uVar8 >> 0x10,
             (int)DAT_000144b6,(int)(char)(uVar8 >> 8),(int)DAT_00014636);
  phy_printf("rc_dout, %d; wifi: %d, %d, %d, %d, bt: %d, %d, %d, %d\n",DAT_0001458a,DAT_0001458b,
             DAT_0001458c,DAT_0001458d,DAT_0001458e,DAT_0001458f,DAT_00014590);
  phy_printf("RX_NOISEFLOOR,");
  cVar5 = '\x03';
  do {
    uVar7 = read_hw_noisefloor();
    cVar5 = cVar5 + -1;
    phy_printf(&_LC46,uVar7);
  } while (cVar5 != '\0');
  phy_printf(&_LC59);
  phy_printf("CCT_LOAD, ");
  phy_printf(&_LC61,DAT_0001457c);
  phy_printf(&_LC61,DAT_0001457f);
  phy_printf(&_LC61,DAT_00014582);
  phy_printf(&_LC59);
  phy_printf("CCT_STG1, ");
  puVar11 = &phy_param;
  phy_printf(&_LC61,DAT_0001457d);
  phy_printf(&_LC61,DAT_00014580);
  puVar9 = &phy_param;
  phy_printf(&_LC61,DAT_00014583);
  phy_printf(&_LC59);
  phy_printf("CCT_STG2, ");
  phy_printf(&_LC61,DAT_0001457e);
  phy_printf(&_LC61,DAT_00014581);
  phy_printf(&_LC61,DAT_00014584);
  phy_printf(&_LC59);
  phy_printf("wifi_cal_power, %d\n",(int)DAT_00014599);
  phy_printf("wifi_cal_atten, ");
  phy_printf(&_LC61,(int)DAT_00014596);
  phy_printf(&_LC61,(int)DAT_00014597);
  phy_printf(&_LC61,(int)DAT_00014598);
  phy_printf(&_LC59);
  phy_printf("wifi_pwctrl_atten, ");
  phy_printf(&_LC61,(int)DAT_00014593);
  phy_printf(&_LC61,(int)DAT_00014594);
  phy_printf(&_LC61,(int)DAT_00014595);
  phy_printf(&_LC59);
  phy_printf("TXIQ, ");
  get_iq_value(&cStack_34,DAT_00014570,0);
  phy_printf("%d, %d; ",(int)cStack_34,(int)cStack_33);
  get_iq_value(&cStack_34,DAT_00014572,0);
  phy_printf("%d, %d; ",(int)cStack_34,(int)cStack_33);
  phy_printf(&_LC59);
  phy_printf("LB_TXIQ, ");
  get_iq_value(&cStack_34,DAT_00014586,0);
  phy_printf("%d, %d; ",(int)cStack_34,(int)cStack_33);
  phy_printf(&_LC59);
  phy_printf("TXDC, ");
  do {
    puVar1 = (undefined2 *)(puVar9 + 0x12a);
    puVar2 = (undefined2 *)(puVar9 + 0x128);
    puVar3 = (undefined2 *)(puVar9 + 0x126);
    puVar4 = (undefined2 *)(puVar9 + 0x124);
    puVar9 = puVar9 + 8;
    phy_printf("%d, %d, %d, %d; ",*puVar4,*puVar3,*puVar2,*puVar1);
  } while (puVar9 != (undefined1 *)0x1444c);
  phy_printf(&_LC59);
  phy_printf("bt_cal_power, %d\n",(int)DAT_000145a0);
  phy_printf("bt_cal_atten, ");
  phy_printf(&_LC61,(int)DAT_0001459a);
  phy_printf(&_LC61,(int)DAT_0001459b);
  phy_printf(&_LC61,(int)DAT_0001459c);
  phy_printf(&_LC59);
  phy_printf("bt_pwctrl_atten, ");
  phy_printf(&_LC61,(int)DAT_0001459d);
  phy_printf(&_LC61,(int)DAT_0001459e);
  phy_printf(&_LC61,(int)DAT_0001459f);
  phy_printf(&_LC59);
  phy_printf("BT_TXIQ, ");
  get_iq_value(&cStack_34,DAT_000145a4,0);
  phy_printf("%d, %d; ",(int)cStack_34,(int)cStack_33);
  phy_printf(&_LC59);
  phy_printf("BT_TXDC, ");
  do {
    puVar1 = (undefined2 *)(puVar11 + 0x188);
    puVar2 = (undefined2 *)(puVar11 + 0x186);
    puVar3 = (undefined2 *)(puVar11 + 0x184);
    puVar4 = (undefined2 *)(puVar11 + 0x182);
    puVar11 = puVar11 + 8;
    phy_printf("%d, %d, %d, %d; ",*puVar4,*puVar3,*puVar2,*puVar1);
  } while (puVar11 != (undefined1 *)0x1443c);
  phy_printf(&_LC59);
  phy_printf("RXIQ, ");
  get_iq_value(&cStack_34,DAT_00014574,1);
  phy_printf("%d, %d; ",(int)cStack_34,(int)cStack_33);
  get_iq_value(&cStack_34,DAT_00014576,1);
  puVar10 = &phy_rxrf_dc;
  phy_printf("%d, %d; ",(int)cStack_34,(int)cStack_33);
  phy_printf(&_LC59);
  phy_printf("RXDC_RFRX_BT, ");
  puVar6 = &phy_rxrf_dc;
  do {
    uVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    phy_printf("%d, %d; ",uVar8 >> 0x10,uVar8 & 0xffff);
  } while (puVar6 != &DAT_000143d4);
  phy_printf(&_LC59);
  phy_printf("RXDC_RFRX_WIFI, ");
  do {
    puVar6 = puVar10 + 9;
    puVar10 = puVar10 + 1;
    phy_printf("%d, %d; ",*puVar6 >> 0x10,*puVar6 & 0xffff);
  } while (puVar10 != &DAT_000143d4);
  phy_printf(&_LC59);
  puVar6 = &phy_rxbb_dc;
  phy_printf("RXDC_RXBB_WIFI, ");
  do {
    uVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    phy_printf("%d, %d; ",uVar8 >> 0x10,uVar8 & 0xffff);
  } while (puVar6 != &phy_rxrf_dc);
  phy_printf(&_LC59);
  puVar6 = &phy_chan_dc;
  phy_printf("RXDC_CHAN_WIFI, ");
  do {
    uVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    phy_printf("%d, %d; ",uVar8 >> 0x10,uVar8 & 0xffff);
  } while (puVar6 != &phy_rxbb_dc);
  phy_printf(&_LC59);
  ram_wifi_set_tx_gain(DAT_00014616,0);
  phy_printf("sar_dc_code=%d, sar_ref_code=%d\n",DAT_000144fe,DAT_00014500);
  phy_printf("ulp_code_init=%d, %d\n",DAT_000144c3,DAT_000144c4);
  phy_tx_gain_print();
  return;
}

