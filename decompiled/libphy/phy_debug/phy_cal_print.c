/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_debug.o -> phy_cal_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_cal_print(void)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  short *psVar5;
  short sVar6;
  undefined4 uVar7;
  code *pcVar8;
  code *pcVar9;
  char cStack_3c;
  char cStack_3b;
  short local_38 [3];
  short asStack_32 [5];
  
  psVar5 = local_38;
  do {
    ets_delay_us(1000);
    sVar6 = read_hw_noisefloor();
    *psVar5 = sVar6;
    psVar5 = psVar5 + 1;
  } while (psVar5 != asStack_32);
  phy_version_print();
  uVar7 = phy_get_vdd33();
  tsens_temp_read_new();
  phy_printf("param_flag: 0x%x\n",_DAT_000120b4);
  phy_printf("vdd33=%d, temp_code=%d, offset=%d, temp_code_init=%d\n",uVar7,(int)_phy_param,0,
             (int)_DAT_0001213e);
  pcVar9 = (code *)&phy_param;
  phy_printf("rc_dout, %d; wifi: %d, %d, %d, %d, bt: %d, %d, %d, %d\n",DAT_000120f8,DAT_000120f9,
             DAT_000120fa,DAT_000120fb,DAT_000120fc,DAT_000120fd,DAT_000120fe);
  phy_printf("RX_NOISEFLOOR, ");
  pcVar8 = (code *)&phy_param;
  phy_printf(&_LC28,(int)local_38[0]);
  phy_printf(&_LC28,(int)local_38[1]);
  phy_printf(&_LC28,(int)local_38[2]);
  phy_printf(&_LC39);
  phy_printf("DCAP_STG1, ");
  phy_printf(&_LC46,DAT_000120ec);
  phy_printf(&_LC46,DAT_000120ee);
  phy_printf(&_LC46,DAT_000120f0);
  phy_printf(&_LC39);
  phy_printf("DCAP_STG2, ");
  phy_printf(&_LC46,DAT_000120ed);
  phy_printf(&_LC46,DAT_000120ef);
  phy_printf(&_LC46,DAT_000120f1);
  phy_printf(&_LC39);
  phy_printf("wifi_cal_power, %d\n",(int)DAT_00012107);
  phy_printf("wifi_cal_atten, ");
  phy_printf(&_LC46,(int)DAT_00012104);
  phy_printf(&_LC46,(int)DAT_00012105);
  phy_printf(&_LC46,(int)DAT_00012106);
  phy_printf(&_LC39);
  phy_printf("wifi_pwctrl_atten, ");
  phy_printf(&_LC46,(int)DAT_00012101);
  phy_printf(&_LC46,(int)DAT_00012102);
  phy_printf(&_LC46,(int)DAT_00012103);
  phy_printf(&_LC39);
  phy_printf("TXIQ, ");
  get_iq_value(&cStack_3c,_DAT_000120e0);
  phy_printf("%d, %d; ",(int)cStack_3c,(int)cStack_3b);
  get_iq_value(&cStack_3c,_DAT_000120e2);
  phy_printf("%d, %d; ",(int)cStack_3c,(int)cStack_3b);
  phy_printf(&_LC39);
  phy_printf("LB_TXIQ, ");
  get_iq_value(&cStack_3c,_DAT_000120f6);
  phy_printf("%d, %d; ",(int)cStack_3c,(int)cStack_3b);
  phy_printf(&_LC39);
  phy_printf("TXDC, ");
  do {
    pcVar1 = pcVar8 + 0xae;
    pcVar2 = pcVar8 + 0xac;
    pcVar3 = pcVar8 + 0xaa;
    pcVar4 = pcVar8 + 0xa8;
    pcVar8 = pcVar8 + 8;
    phy_printf("%d, %d, %d, %d; ",*(undefined2 *)pcVar4,*(undefined2 *)pcVar3,*(undefined2 *)pcVar2,
               *(undefined2 *)pcVar1);
  } while (pcVar8 != tsens_temp_read_new);
  phy_printf(&_LC39);
  phy_printf("bt_cal_power, %d\n",(int)DAT_0001210e);
  phy_printf("bt_cal_atten, ");
  phy_printf(&_LC46,(int)DAT_00012108);
  phy_printf(&_LC46,(int)DAT_00012109);
  phy_printf(&_LC46,(int)DAT_0001210a);
  phy_printf(&_LC39);
  phy_printf("bt_pwctrl_atten, ");
  phy_printf(&_LC46,(int)DAT_0001210b);
  phy_printf(&_LC46,(int)DAT_0001210c);
  phy_printf(&_LC46,(int)DAT_0001210d);
  phy_printf(&_LC39);
  phy_printf("BT_TXIQ, ");
  get_iq_value(&cStack_3c,_DAT_00012112);
  phy_printf("%d, %d; ",(int)cStack_3c,(int)cStack_3b);
  phy_printf(&_LC39);
  phy_printf("BT_TXDC, ");
  pcVar8 = pcVar9;
  do {
    pcVar1 = pcVar8 + 0x10a;
    pcVar2 = pcVar8 + 0x108;
    pcVar3 = pcVar8 + 0x106;
    pcVar4 = pcVar8 + 0x104;
    pcVar8 = pcVar8 + 8;
    phy_printf("%d, %d, %d, %d; ",*(undefined2 *)pcVar4,*(undefined2 *)pcVar3,*(undefined2 *)pcVar2,
               *(undefined2 *)pcVar1);
  } while (pcVar8 != chip_v7_set_chan);
  phy_printf(&_LC39);
  phy_printf("RXIQ, ");
  get_iq_value(&cStack_3c,_DAT_000120e4);
  phy_printf("%d, %d; ",(int)cStack_3c,(int)cStack_3b);
  get_iq_value(&cStack_3c,_DAT_000120e6);
  phy_printf("%d, %d; ",(int)cStack_3c,(int)cStack_3b);
  phy_printf(&_LC39);
  phy_printf("RXDC_RFRX_BT, ");
  pcVar8 = pcVar9;
  do {
    pcVar1 = pcVar8 + 0x134;
    pcVar2 = pcVar8 + 0x132;
    pcVar8 = pcVar8 + 4;
    phy_printf("%d, %d; ",(int)*(short *)pcVar2,(int)*(short *)pcVar1);
  } while (pcVar8 != wifi_set_tx_gain);
  phy_printf(&_LC39);
  phy_printf("RXDC_RFRX_WIFI, ");
  do {
    pcVar8 = pcVar9 + 0x164;
    pcVar1 = pcVar9 + 0x162;
    pcVar9 = pcVar9 + 4;
    phy_printf("%d, %d; ",(int)*(short *)pcVar1,(int)*(short *)pcVar8);
  } while (pcVar9 != (code *)0x12044);
  phy_printf(&_LC39);
  wifi_set_tx_gain(_DAT_0001212c,0);
  phy_printf("sar_dc_code=%d, sar_ref_code=%d\n",_DAT_0001202a,_read_pll_cap);
  phy_tx_gain_print();
  return;
}

