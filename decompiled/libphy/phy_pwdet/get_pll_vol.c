/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_pwdet.o -> get_pll_vol
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 get_pll_vol(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    i2c_writeReg_Mask(0x62,1,8,3,0,9);
  }
  uVar1 = get_sar2_vol(3);
  if (param_1 != 0) {
    i2c_writeReg_Mask(0x62,1,8,3,0,0);
  }
  return uVar1;
}

