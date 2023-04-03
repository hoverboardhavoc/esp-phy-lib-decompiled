/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
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
  undefined4 uVar3;
  code *pcVar4;
  
  phy_version_print();
  uVar3 = phy_get_vdd33();
  tsens_temp_read();
  phy_printf("param_flag: 0x%x\n",_get_freq_mem_param);
  phy_printf("vdd33=%d, temp_code=%d, offset=%d, temp_code_init=%d\n",uVar3,(int)_phy_param,0,
             (int)_DAT_00011006);
  phy_printf("rc_dout, %d;  bt: %d, %d, %d, %d\n",DAT_00011057,DAT_0001104d,DAT_0001104e,
             DAT_0001104f,DAT_00011050);
  phy_printf("bt_cal_power, %d\n",(int)DAT_00011058);
  phy_printf("bt_cal_atten, ");
  phy_printf("0x%x, ",(int)DAT_00011051);
  phy_printf("0x%x, ",(int)DAT_00011052);
  phy_printf("0x%x, ",(int)DAT_00011053);
  phy_printf(&_LC26);
  phy_printf("bt_pwctrl_atten, ");
  phy_printf("0x%x, ",(int)DAT_00011054);
  phy_printf("0x%x, ",(int)DAT_00011055);
  pcVar4 = (code *)&phy_param;
  phy_printf("0x%x, ",(int)DAT_00011056);
  phy_printf(&_LC26);
  phy_printf("RXDC_RFRX, ");
  do {
    pcVar1 = pcVar4 + 0x5c;
    pcVar2 = pcVar4 + 0x5a;
    pcVar4 = pcVar4 + 4;
    phy_printf("%d, %d; ",(int)*(short *)pcVar2,(int)*(short *)pcVar1);
  } while (pcVar4 != i2c_writeReg_Mask);
  phy_printf(&_LC26);
  phy_printf("RXIQ, %d,%d\n",(int)(char)read_rf_freq_mem_new,(int)DAT_00011041);
  phy_printf("sar_dc_code=%d, sar_ref_code=%d\n",_phy_printf,_DAT_0001100e);
  return;
}

