/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
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
  
  phy_version_print();
  pcVar1 = (code *)&phy_param;
  tsens_temp_read();
  phy_printf("param_flag: 0x%x\n",_DAT_0001102c);
  phy_printf("temp_code=%d, temp_code_init=%d\n",(int)_phy_param,(int)_DAT_00011006);
  phy_printf("rc_dout, %d;  bt: %d, %d, %d, %d\n",DAT_00011051,DAT_00011047,DAT_00011048,
             DAT_00011049,DAT_0001104a);
  phy_printf("bt_cal_power, %d\n",(int)DAT_00011052);
  phy_printf("bt_cal_atten, ");
  phy_printf("0x%x, ",(int)DAT_0001104b);
  phy_printf("0x%x, ",(int)DAT_0001104c);
  phy_printf("0x%x, ",(int)DAT_0001104d);
  phy_printf(&_LC24);
  phy_printf("bt_pwctrl_atten, ");
  phy_printf("0x%x, ",(int)DAT_0001104e);
  phy_printf("0x%x, ",(int)DAT_0001104f);
  phy_printf("0x%x, ",(int)DAT_00011050);
  phy_printf(&_LC24);
  phy_printf("RXIQ, ");
  do {
    get_iq_value(&cStack_24,*(undefined2 *)(pcVar1 + 0x30),0);
    pcVar1 = pcVar1 + 2;
    phy_printf("%d, %d; ",(int)cStack_24,(int)cStack_23);
  } while (pcVar1 != phy_printf);
  phy_printf(&_LC24);
  phy_printf("sar_dc_code=%d, sar_ref_code=%d\n",_phy_printf,_DAT_0001100e);
  return;
}

