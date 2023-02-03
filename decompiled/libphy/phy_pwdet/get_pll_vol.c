/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
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
  uVar1 = get_sar2_vol(0);
  if (param_1 != 0) {
    i2c_writeReg_Mask(0x62,1,8,3,0,0);
  }
  return uVar1;
}

