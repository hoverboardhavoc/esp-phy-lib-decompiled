/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
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
  uVar1 = DAT_00012fa0;
  tsens_temp_read();
  ets_printf("param_flag: 0x%x\n",DAT_00012f18);
  ets_printf("vdd33=%d, temp_code=%d, offset=%d, temp_code_init=%d\n",uVar1 >> 0x10,
             (int)DAT_00012e5e,(int)(char)(uVar1 >> 8),(int)DAT_00012e60);
  ets_printf("rc_dout, %d;  bt: %d, %d, %d, %d\n",DAT_00012f36,DAT_00012f37,DAT_00012f38,
             DAT_00012f39,DAT_00012f3a);
  ets_printf("RX_NOISEFLOOR, ");
  ets_printf(&_LC30,(int)noise_array);
  ets_printf(&_LC30,(int)DAT_00012e1e);
  ets_printf(&_LC30,(int)DAT_00012e20);
  ets_printf(&_LC36);
  ets_printf("PPA_CTUNE, ");
  ets_printf(&_LC38,DAT_00012f28);
  ets_printf(&_LC38,DAT_00012f2b);
  ets_printf(&_LC38,DAT_00012f2e);
  ets_printf(&_LC36);
  ets_printf("bt_cal_power, %d\n",(int)DAT_00012f41);
  ets_printf("bt_cal_atten, ");
  ets_printf(&_LC38,(int)DAT_00012f3b);
  ets_printf(&_LC38,(int)DAT_00012f3c);
  ets_printf(&_LC38,(int)DAT_00012f3d);
  ets_printf(&_LC36);
  ets_printf("bt_pwctrl_atten, ");
  ets_printf(&_LC38,(int)DAT_00012f3e);
  ets_printf(&_LC38,(int)DAT_00012f3f);
  puVar2 = &phy_param;
  ets_printf(&_LC38,(int)DAT_00012f40);
  ets_printf(&_LC36);
  ets_printf("TXIQ, ");
  get_iq_value(&cStack_24,DAT_00012f42,0);
  ets_printf("%d, %d; ",(int)cStack_24,(int)cStack_23);
  ets_printf(&_LC36);
  ets_printf("LB_TXIQ, ");
  get_iq_value(&cStack_24,DAT_00012f32,0);
  ets_printf("%d, %d; ",(int)cStack_24,(int)cStack_23);
  ets_printf(&_LC36);
  ets_printf("RXIQ, ");
  do {
    get_iq_value(&cStack_24,puVar2[0x7e],0);
    puVar2 = puVar2 + 1;
    ets_printf("%d, %d; ",(int)cStack_24,(int)cStack_23);
  } while (puVar2 != (undefined2 *)0x12e2c);
  ets_printf(&_LC36);
  wifi_set_tx_gain(DAT_00012f94,0);
  ets_printf("sar_sig_code=%d, sar_ref_code=%d\n",DAT_00012ea6,DAT_00012ea8);
  ets_printf("bias_ref_code=%d, rfpll_ref_vol=%d\n",DAT_00012eaa,DAT_00012e6c);
  phy_tx_gain_print();
  return;
}

