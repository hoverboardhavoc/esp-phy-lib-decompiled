/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_tsens.o -> tsens_dac_cal_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 tsens_dac_cal_new(int param_1,int param_2)

{
  undefined1 uVar1;
  
  param_2 = param_2 * 6;
  if ((param_1 < *(short *)(phy_tsens_attribute + param_2 + 2)) ||
     (*(short *)(phy_tsens_attribute + param_2 + 4) < param_1)) {
    uVar1 = 5;
    if ((param_1 < 100) &&
       (((uVar1 = 7, param_1 < 0x50 && (uVar1 = 0xf, param_1 < -9)) && (uVar1 = 10, -0x1e < param_1)
        ))) {
      uVar1 = 0xb;
    }
    i2c_writeReg_Mask(0x69,0,6,3,0,uVar1);
  }
  else {
    uVar1 = phy_tsens_attribute[param_2 + 1];
  }
  return uVar1;
}

