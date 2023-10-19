/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> rf_test.o -> rfpll_cal_time
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rfpll_cal_time(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 local_94 [104];
  
  if (param_2 != 0) {
    set_chan_freq_sw_start(0,0);
    iVar4 = phy_time_now();
    iVar1 = 0;
    do {
      uVar3 = i2c_readReg_Mask(0x62,1,5,7,0);
      local_94[iVar1] = uVar3;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x32);
    iVar5 = phy_time_now();
    phy_printf("chan_freq=%d: ",param_1);
    iVar1 = 0;
    do {
      puVar8 = local_94 + iVar1;
      iVar1 = iVar1 + 1;
      phy_printf(&_LC20,*puVar8);
    } while (iVar1 != 0x32);
    phy_printf(&_LC21,iVar5 - iVar4);
    return;
  }
  iVar1 = i2c_readReg_Mask(0x62,1,1,7,0);
  uVar2 = iVar1 - 5U & 0xff;
  do {
    i2c_writeReg_Mask(0x62,1,1,7,0,uVar2);
    iVar5 = phy_time_now();
    iVar4 = 0;
    do {
      uVar3 = i2c_readReg_Mask(0x62,1,5,7,0);
      local_94[iVar4] = uVar3;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x32);
    iVar6 = phy_time_now();
    uVar7 = i2c_readReg_Mask(0x62,1,1,7,0);
    phy_printf("ir_cap_ext=%d: ",uVar7);
    iVar4 = 0;
    do {
      puVar8 = local_94 + iVar4;
      iVar4 = iVar4 + 1;
      phy_printf(&_LC20,*puVar8);
    } while (iVar4 != 0x32);
    uVar2 = uVar2 + 1 & 0xff;
    phy_printf(&_LC21,iVar6 - iVar5);
  } while (uVar2 != (iVar1 + 5U & 0xff));
  i2c_writeReg_Mask(0x62,1,1,7,0,iVar1);
  return;
}

