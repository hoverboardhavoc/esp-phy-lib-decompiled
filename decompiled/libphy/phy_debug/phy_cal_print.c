/*
 * Last changed at upstream commit 05e53904ac98632e09d78693437b7fa0b35f36da
 * https://github.com/espressif/esp-phy-lib/commit/05e53904ac98632e09d78693437b7fa0b35f36da
 * Upstream date: 2023-05-22 12:26:13 +0800
 * Upstream subject: update h2 libphy phy_version: 200,0, 1cef4f4, May 22 2023, 11:57:13
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
  phy_printf("param_flag: 0x%x\n",_ets_delay_us);
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
  phy_printf("RXIQ, %d,%d\n",(int)(char)get_freq_mem_addr,(int)DAT_00012041);
  phy_printf("sar_dc_code=%d, sar_ref_code=%d\n",_phy_printf,_DAT_0001200e);
  return;
}

