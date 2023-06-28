/*
 * Last changed at upstream commit 97a141a563a4b752f5943d0049aa691038d08613
 * https://github.com/espressif/esp-phy-lib/commit/97a141a563a4b752f5943d0049aa691038d08613
 * Upstream date: 2023-06-28 11:18:04 +0800
 * Upstream subject: h2: optimize track pll when temperature changes. fix ramp up and ramp down timing.
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
             (int)_DAT_00012006);
  phy_printf("rc_dout, %d;  bt: %d, %d, %d, %d\n",DAT_00012057,DAT_0001204d,DAT_0001204e,
             DAT_0001204f,DAT_00012050);
  phy_printf("bt_cal_power, %d\n",(int)DAT_00012058);
  phy_printf("bt_cal_atten, ");
  phy_printf("0x%x, ",(int)DAT_00012051);
  phy_printf("0x%x, ",(int)DAT_00012052);
  phy_printf("0x%x, ",(int)DAT_00012053);
  phy_printf(&_LC30);
  phy_printf("bt_pwctrl_atten, ");
  phy_printf("0x%x, ",(int)DAT_00012054);
  phy_printf("0x%x, ",(int)DAT_00012055);
  pcVar4 = (code *)&phy_param;
  phy_printf("0x%x, ",(int)DAT_00012056);
  phy_printf(&_LC30);
  phy_printf("RXDC_RFRX, ");
  do {
    pcVar1 = pcVar4 + 0x5c;
    pcVar2 = pcVar4 + 0x5a;
    pcVar4 = pcVar4 + 4;
    phy_printf("%d, %d; ",(int)*(short *)pcVar2,(int)*(short *)pcVar1);
  } while (pcVar4 != i2c_writeReg_Mask);
  phy_printf(&_LC30);
  phy_printf("RXIQ, %d,%d\n",(int)(char)read_rf_freq_mem_new,(int)DAT_00012041);
  phy_printf("sar_dc_code=%d, sar_ref_code=%d\n",_phy_printf,_DAT_0001200e);
  phy_tx_gain_print();
  return;
}

