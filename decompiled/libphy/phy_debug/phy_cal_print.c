/*
 * Last changed at upstream commit d8ee8f776acd1aafdfc3046f526db024b175b094
 * https://github.com/espressif/esp-phy-lib/commit/d8ee8f776acd1aafdfc3046f526db024b175b094
 * Upstream date: 2022-05-09 07:50:30 -0400
 * Upstream subject: esp32c2: optimize rf performace
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
  uint *puVar5;
  char cVar6;
  short *psVar7;
  short sVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  char cStack_3c;
  char cStack_3b;
  short local_38 [6];
  
  psVar7 = local_38;
  cVar6 = '\x01';
  do {
    chip_v7_set_chan((int)cVar6,0);
    ets_delay_us(1000);
    sVar8 = read_hw_noisefloor();
    cVar6 = cVar6 + '\x05';
    *psVar7 = sVar8;
    psVar7 = psVar7 + 1;
  } while (cVar6 != '\x10');
  phy_version_print();
  uVar9 = phy_get_vdd33();
  (**(code **)(_g_phyFuns + 0x1a4))(*(code **)(_g_phyFuns + 0x1a4));
  phy_printf("param_flag: 0x%x\n",_DAT_00012158);
  phy_printf("vdd33=%d, temp_code=%d, offset=%d, temp_code_init=%d\n",uVar9,(int)_DAT_000120a2,0,
             (int)_DAT_0001224c);
  puVar10 = &phy_param;
  puVar11 = &phy_param;
  phy_printf("rc_dout, %d; wifi: %d, %d, %d, %d, bt: %d, %d, %d, %d\n",DAT_0001219e,DAT_0001219f,
             DAT_000121a0,DAT_000121a1,DAT_000121a2,DAT_000121a3,DAT_000121a4);
  phy_printf("RX_NOISEFLOOR, ");
  phy_printf(&_LC17,(int)local_38[0]);
  phy_printf(&_LC17,(int)local_38[1]);
  phy_printf(&_LC17,(int)local_38[2]);
  phy_printf(&_LC27);
  phy_printf("DCAP_STG1, ");
  phy_printf(&_LC34,DAT_00012190);
  phy_printf(&_LC34,DAT_00012192);
  phy_printf(&_LC34,DAT_00012194);
  phy_printf(&_LC27);
  phy_printf("DCAP_STG2, ");
  phy_printf(&_LC34,DAT_00012191);
  phy_printf(&_LC34,DAT_00012193);
  phy_printf(&_LC34,DAT_00012195);
  phy_printf(&_LC27);
  phy_printf("wifi_cal_power, %d\n",(int)DAT_000121ad);
  phy_printf("wifi_cal_atten, ");
  phy_printf(&_LC34,(int)DAT_000121aa);
  phy_printf(&_LC34,(int)DAT_000121ab);
  phy_printf(&_LC34,(int)DAT_000121ac);
  phy_printf(&_LC27);
  phy_printf("wifi_pwctrl_atten, ");
  phy_printf(&_LC34,(int)DAT_000121a7);
  phy_printf(&_LC34,(int)DAT_000121a8);
  phy_printf(&_LC34,(int)DAT_000121a9);
  phy_printf(&_LC27);
  phy_printf("TXIQ, ");
  get_iq_value(&cStack_3c,_DAT_00012184,0);
  phy_printf("%d, %d; ",(int)cStack_3c,(int)cStack_3b);
  get_iq_value(&cStack_3c,_DAT_00012186,0);
  phy_printf("%d, %d; ",(int)cStack_3c,(int)cStack_3b);
  phy_printf(&_LC27);
  phy_printf("LB_TXIQ, ");
  get_iq_value(&cStack_3c,_DAT_0001219a,0);
  phy_printf("%d, %d; ",(int)cStack_3c,(int)cStack_3b);
  phy_printf(&_LC27);
  phy_printf("TXDC, ");
  do {
    puVar1 = (undefined2 *)(puVar11 + 0x152);
    puVar2 = (undefined2 *)(puVar11 + 0x150);
    puVar3 = (undefined2 *)(puVar11 + 0x14e);
    puVar4 = (undefined2 *)(puVar11 + 0x14c);
    puVar11 = puVar11 + 8;
    phy_printf("%d, %d, %d, %d; ",*puVar4,*puVar3,*puVar2,*puVar1);
  } while (puVar11 != (undefined *)0x12038);
  phy_printf(&_LC27);
  phy_printf("bt_cal_power, %d\n",(int)DAT_000121b4);
  phy_printf("bt_cal_atten, ");
  phy_printf(&_LC34,(int)DAT_000121ae);
  phy_printf(&_LC34,(int)DAT_000121af);
  phy_printf(&_LC34,(int)DAT_000121b0);
  phy_printf(&_LC27);
  phy_printf("bt_pwctrl_atten, ");
  phy_printf(&_LC34,(int)DAT_000121b1);
  phy_printf(&_LC34,(int)DAT_000121b2);
  phy_printf(&_LC34,(int)DAT_000121b3);
  phy_printf(&_LC27);
  phy_printf("BT_TXIQ, ");
  get_iq_value(&cStack_3c,_DAT_000121b8,0);
  phy_printf("%d, %d; ",(int)cStack_3c,(int)cStack_3b);
  phy_printf(&_LC27);
  phy_printf("BT_TXDC, ");
  puVar11 = puVar10;
  do {
    puVar1 = (undefined2 *)(puVar11 + 0x1b0);
    puVar2 = (undefined2 *)(puVar11 + 0x1ae);
    puVar3 = (undefined2 *)(puVar11 + 0x1ac);
    puVar4 = (undefined2 *)(puVar11 + 0x1aa);
    puVar11 = puVar11 + 8;
    phy_printf("%d, %d, %d, %d; ",*puVar4,*puVar3,*puVar2,*puVar1);
  } while (puVar11 != (undefined *)0x12028);
  phy_printf(&_LC27);
  phy_printf("RXIQ, ");
  get_iq_value(&cStack_3c,_DAT_00012188,1);
  phy_printf("%d, %d; ",(int)cStack_3c,(int)cStack_3b);
  phy_printf(&_LC27);
  phy_printf("RXDC_RFRX_BT, ");
  puVar11 = puVar10;
  do {
    puVar5 = (uint *)(puVar11 + 0x264);
    puVar11 = puVar11 + 4;
    phy_printf("%d, %d; ",*puVar5 >> 0x10,*puVar5 & 0xffff);
  } while (puVar11 != (undefined *)0x12034);
  phy_printf(&_LC27);
  phy_printf("RXDC_RFRX_WIFI, ");
  do {
    puVar5 = (uint *)(puVar10 + 0x240);
    puVar10 = puVar10 + 4;
    phy_printf("%d, %d; ",*puVar5 >> 0x10,*puVar5 & 0xffff);
  } while (puVar10 != (undefined *)0x12034);
  phy_printf(&_LC27);
  phy_printf("RXDC_RXBB_WIFI, ");
  phy_printf(&_LC27);
  phy_printf("RXDC_CHAN_WIFI, ");
  phy_printf(&_LC27);
  (**(code **)(_g_phyFuns + 0x1e8))(DAT_0001222a,0,*(code **)(_g_phyFuns + 0x1e8));
  phy_printf("sar_dc_code=%d, sar_ref_code=%d\n",_DAT_000120ee,_DAT_000120f0);
  phy_tx_gain_print();
  rfpll_cap_check(1);
  return;
}

