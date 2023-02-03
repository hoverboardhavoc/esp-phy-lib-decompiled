/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_tsens.o -> phy_set_tsens_range
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 phy_set_tsens_range(short param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = (uint)phy_param * 6;
  if ((param_1 < *(short *)(phy_tsens_attribute + iVar2 + 2)) ||
     (*(short *)(phy_tsens_attribute + iVar2 + 4) < param_1)) {
    uVar1 = 5;
    if ((param_1 < 100) &&
       (((uVar1 = 7, param_1 < 0x50 && (uVar1 = 0xf, param_1 < -9)) && (uVar1 = 10, -0x1e < param_1)
        ))) {
      uVar1 = 0xb;
    }
    i2c_writeReg_Mask(0x69,0,6,3,0,uVar1);
  }
  else {
    uVar1 = phy_tsens_attribute[iVar2 + 1];
  }
  return uVar1;
}

