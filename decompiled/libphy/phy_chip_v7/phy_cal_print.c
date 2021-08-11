/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7.o -> phy_cal_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_cal_print(void)

{
  uint uVar1;
  undefined2 *puVar2;
  char cStack_24;
  char cStack_23;
  
  phy_version_print();
  uVar1 = DAT_00012f28;
  tsens_temp_read();
  ets_printf("param_flag: 0x%x\n",DAT_00012ea0);
  ets_printf("vdd33=%d, temp_code=%d, offset=%d, temp_code_init=%d\n",uVar1 >> 0x10,
             (int)DAT_00012de6,(int)(char)(uVar1 >> 8),(int)DAT_00012de8);
  ets_printf("rc_dout, %d;  bt: %d, %d, %d, %d\n",DAT_00012ebe,DAT_00012ebf,DAT_00012ec0,
             DAT_00012ec1,DAT_00012ec2);
  ets_printf("RX_NOISEFLOOR, ");
  ets_printf(&_LC30,(int)noise_array);
  ets_printf(&_LC30,(int)DAT_00012da6);
  ets_printf(&_LC30,(int)DAT_00012da8);
  ets_printf(&_LC36);
  ets_printf("PPA_CTUNE, ");
  ets_printf(&_LC38,DAT_00012eb0);
  ets_printf(&_LC38,DAT_00012eb3);
  ets_printf(&_LC38,DAT_00012eb6);
  ets_printf(&_LC36);
  ets_printf("bt_cal_power, %d\n",(int)DAT_00012ec9);
  ets_printf("bt_cal_atten, ");
  ets_printf(&_LC38,(int)DAT_00012ec3);
  ets_printf(&_LC38,(int)DAT_00012ec4);
  ets_printf(&_LC38,(int)DAT_00012ec5);
  ets_printf(&_LC36);
  ets_printf("bt_pwctrl_atten, ");
  ets_printf(&_LC38,(int)DAT_00012ec6);
  ets_printf(&_LC38,(int)DAT_00012ec7);
  puVar2 = &phy_param;
  ets_printf(&_LC38,(int)DAT_00012ec8);
  ets_printf(&_LC36);
  ets_printf("TXIQ, ");
  get_iq_value(&cStack_24,DAT_00012eca,0);
  ets_printf("%d, %d; ",(int)cStack_24,(int)cStack_23);
  ets_printf(&_LC36);
  ets_printf("LB_TXIQ, ");
  get_iq_value(&cStack_24,DAT_00012eba,0);
  ets_printf("%d, %d; ",(int)cStack_24,(int)cStack_23);
  ets_printf(&_LC36);
  ets_printf("RXIQ, ");
  do {
    get_iq_value(&cStack_24,puVar2[0x7e],0);
    puVar2 = puVar2 + 1;
    ets_printf("%d, %d; ",(int)cStack_24,(int)cStack_23);
  } while (puVar2 != (undefined2 *)0x12db4);
  ets_printf(&_LC36);
  wifi_set_tx_gain(DAT_00012f1c,0);
  ets_printf("sar_sig_code=%d, sar_ref_code=%d\n",DAT_00012e2e,DAT_00012e30);
  ets_printf("bias_ref_code=%d, rfpll_ref_vol=%d\n",DAT_00012e32,DAT_00012df4);
  phy_tx_gain_print();
  return;
}

