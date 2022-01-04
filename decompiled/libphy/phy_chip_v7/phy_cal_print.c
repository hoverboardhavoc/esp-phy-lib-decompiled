/*
 * Last changed at upstream commit 4779ddaaf29e1d6aa2d26980103a1c1bbaa29462
 * https://github.com/espressif/esp-phy-lib/commit/4779ddaaf29e1d6aa2d26980103a1c1bbaa29462
 * Upstream date: 2022-01-04 15:41:20 +0800
 * Upstream subject: fix the bug that phy libs still have ets_printf
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
  phy_printf("param_flag: 0x%x\n",DAT_00012f54);
  phy_printf("vdd33=%d, temp_code=%d, offset=%d, temp_code_init=%d\n",uVar1 >> 0x10,
             (int)DAT_00012e9a,(int)(char)(uVar1 >> 8),(int)DAT_00012e9c);
  phy_printf("rc_dout, %d;  bt: %d, %d, %d, %d\n",DAT_00012f72,DAT_00012f73,DAT_00012f74,
             DAT_00012f75,DAT_00012f76);
  phy_printf("RX_NOISEFLOOR, ");
  phy_printf(&_LC30,(int)noise_array);
  phy_printf(&_LC30,(int)DAT_00012e5a);
  phy_printf(&_LC30,(int)DAT_00012e5c);
  phy_printf(&_LC36);
  phy_printf("PPA_CTUNE, ");
  phy_printf(&_LC38,DAT_00012f64);
  phy_printf(&_LC38,DAT_00012f67);
  phy_printf(&_LC38,DAT_00012f6a);
  phy_printf(&_LC36);
  phy_printf("bt_cal_power, %d\n",(int)DAT_00012f7d);
  phy_printf("bt_cal_atten, ");
  phy_printf(&_LC38,(int)DAT_00012f77);
  phy_printf(&_LC38,(int)DAT_00012f78);
  phy_printf(&_LC38,(int)DAT_00012f79);
  phy_printf(&_LC36);
  phy_printf("bt_pwctrl_atten, ");
  phy_printf(&_LC38,(int)DAT_00012f7a);
  phy_printf(&_LC38,(int)DAT_00012f7b);
  puVar2 = &phy_param;
  phy_printf(&_LC38,(int)DAT_00012f7c);
  phy_printf(&_LC36);
  phy_printf("TXIQ, ");
  get_iq_value(&cStack_24,DAT_00012f7e,0);
  phy_printf("%d, %d; ",(int)cStack_24,(int)cStack_23);
  phy_printf(&_LC36);
  phy_printf("LB_TXIQ, ");
  get_iq_value(&cStack_24,DAT_00012f6e,0);
  phy_printf("%d, %d; ",(int)cStack_24,(int)cStack_23);
  phy_printf(&_LC36);
  phy_printf("RXIQ, ");
  do {
    get_iq_value(&cStack_24,puVar2[0x7e],0);
    puVar2 = puVar2 + 1;
    phy_printf("%d, %d; ",(int)cStack_24,(int)cStack_23);
  } while (puVar2 != (undefined2 *)0x12e68);
  phy_printf(&_LC36);
  wifi_set_tx_gain(DAT_00012fd0,0);
  phy_printf("sar_sig_code=%d, sar_ref_code=%d\n",DAT_00012ee2,DAT_00012ee4);
  phy_printf("bias_ref_code=%d, rfpll_ref_vol=%d\n",DAT_00012ee6,DAT_00012ea8);
  phy_tx_gain_print();
  return;
}

