/*
 * Last changed at upstream commit b7095b90157d98f116ba43c35b12d51192dc91c8
 * https://github.com/espressif/esp-phy-lib/commit/b7095b90157d98f116ba43c35b12d51192dc91c8
 * Upstream date: 2021-10-12 21:50:40 +0800
 * Upstream subject: Update libphy and libbb
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
  uVar1 = DAT_00012fdc;
  tsens_temp_read();
  ets_printf("param_flag: 0x%x\n",DAT_00012f54);
  ets_printf("vdd33=%d, temp_code=%d, offset=%d, temp_code_init=%d\n",uVar1 >> 0x10,
             (int)DAT_00012e9a,(int)(char)(uVar1 >> 8),(int)DAT_00012e9c);
  ets_printf("rc_dout, %d;  bt: %d, %d, %d, %d\n",DAT_00012f72,DAT_00012f73,DAT_00012f74,
             DAT_00012f75,DAT_00012f76);
  ets_printf("RX_NOISEFLOOR, ");
  ets_printf(&_LC30,(int)noise_array);
  ets_printf(&_LC30,(int)DAT_00012e5a);
  ets_printf(&_LC30,(int)DAT_00012e5c);
  ets_printf(&_LC36);
  ets_printf("PPA_CTUNE, ");
  ets_printf(&_LC38,DAT_00012f64);
  ets_printf(&_LC38,DAT_00012f67);
  ets_printf(&_LC38,DAT_00012f6a);
  ets_printf(&_LC36);
  ets_printf("bt_cal_power, %d\n",(int)DAT_00012f7d);
  ets_printf("bt_cal_atten, ");
  ets_printf(&_LC38,(int)DAT_00012f77);
  ets_printf(&_LC38,(int)DAT_00012f78);
  ets_printf(&_LC38,(int)DAT_00012f79);
  ets_printf(&_LC36);
  ets_printf("bt_pwctrl_atten, ");
  ets_printf(&_LC38,(int)DAT_00012f7a);
  ets_printf(&_LC38,(int)DAT_00012f7b);
  puVar2 = &phy_param;
  ets_printf(&_LC38,(int)DAT_00012f7c);
  ets_printf(&_LC36);
  ets_printf("TXIQ, ");
  get_iq_value(&cStack_24,DAT_00012f7e,0);
  ets_printf("%d, %d; ",(int)cStack_24,(int)cStack_23);
  ets_printf(&_LC36);
  ets_printf("LB_TXIQ, ");
  get_iq_value(&cStack_24,DAT_00012f6e,0);
  ets_printf("%d, %d; ",(int)cStack_24,(int)cStack_23);
  ets_printf(&_LC36);
  ets_printf("RXIQ, ");
  do {
    get_iq_value(&cStack_24,puVar2[0x7e],0);
    puVar2 = puVar2 + 1;
    ets_printf("%d, %d; ",(int)cStack_24,(int)cStack_23);
  } while (puVar2 != (undefined2 *)0x12e68);
  ets_printf(&_LC36);
  wifi_set_tx_gain(DAT_00012fd0,0);
  ets_printf("sar_sig_code=%d, sar_ref_code=%d\n",DAT_00012ee2,DAT_00012ee4);
  ets_printf("bias_ref_code=%d, rfpll_ref_vol=%d\n",DAT_00012ee6,DAT_00012ea8);
  phy_tx_gain_print();
  return;
}

