/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
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
  char cStack_24;
  char cStack_23;
  
  chip_version_print();
  phy_version_print();
  tsens_temp_read();
  phy_printf("param_flag: 0x%x\n",_DAT_0001102c);
  phy_printf("temp_code=%d, temp_code_init=%d\n",(int)_phy_param,(int)_DAT_00011006);
  phy_printf("rc_dout, %d;  bt: %d, %d, %d, %d\n",DAT_0001104e,DAT_00011044,DAT_00011045,
             DAT_00011046,DAT_00011047);
  phy_printf("PPA_CTUNE, ");
  phy_printf(&_LC33,DAT_0001103e);
  phy_printf(&_LC33,DAT_00011041);
  phy_printf(&_LC24);
  phy_printf("TXDC, %d, %d\n",_DAT_00011030,_DAT_00011032);
  phy_printf("bt_cal_power, %d\n",(int)DAT_0001104f);
  phy_printf("bt_cal_atten, ");
  phy_printf(&_LC33,(int)DAT_00011048);
  phy_printf(&_LC33,(int)DAT_00011049);
  phy_printf(&_LC33,(int)DAT_0001104a);
  phy_printf(&_LC24);
  phy_printf("bt_pwctrl_atten, ");
  phy_printf(&_LC33,(int)DAT_0001104b);
  phy_printf(&_LC33,(int)DAT_0001104c);
  pcVar1 = (code *)&phy_param;
  phy_printf(&_LC33,(int)DAT_0001104d);
  phy_printf(&_LC24);
  phy_printf("TXIQ, ");
  get_iq_value(&cStack_24,_DAT_0001103c,0);
  phy_printf("%d, %d; ",(int)cStack_24,(int)cStack_23);
  phy_printf(&_LC24);
  phy_printf("RXIQ, ");
  do {
    get_iq_value(&cStack_24,*(undefined2 *)(pcVar1 + 0x30),0);
    pcVar1 = pcVar1 + 2;
    phy_printf("%d, %d; ",(int)cStack_24,(int)cStack_23);
  } while (pcVar1 != phy_printf);
  phy_printf(&_LC24);
  phy_printf("sar_dc_code=%d, sar_ref_code=%d, sar_sig_code=%d\n",_phy_printf,_DAT_0001100e,
             _i2c_readReg);
  phy_printf("bt_correct_power:%d\n",(int)DAT_00011053);
  return;
}

