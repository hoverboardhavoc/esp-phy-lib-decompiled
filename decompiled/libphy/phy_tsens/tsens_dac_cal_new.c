/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_tsens.o -> tsens_dac_cal_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
    (**(code **)(_g_phyFuns + 0x60))(0x69,0,6,3,0,uVar1,*(code **)(_g_phyFuns + 0x60));
  }
  else {
    uVar1 = phy_tsens_attribute[param_2 + 1];
  }
  return uVar1;
}

