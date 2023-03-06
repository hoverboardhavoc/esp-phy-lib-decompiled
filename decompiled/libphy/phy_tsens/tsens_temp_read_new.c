/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_tsens.o -> tsens_temp_read_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 tsens_temp_read_new(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = i2c_readReg(0x69,0,6);
  iVar2 = tsens_dac_to_index(uVar1 & 0xf);
  phy_param = (undefined1)iVar2;
  uVar3 = code_to_temp(_DAT_6000e058 & 0xff,(int)(char)phy_tsens_attribute[iVar2 * 6]);
  tsens_dac_cal_new(iVar2);
  return uVar3;
}

