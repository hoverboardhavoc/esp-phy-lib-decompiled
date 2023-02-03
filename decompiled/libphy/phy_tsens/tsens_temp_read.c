/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_tsens.o -> tsens_temp_read
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 tsens_temp_read(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = i2c_readReg(0x69,0,6);
  iVar2 = tsens_dac_to_index(uVar1 & 0xf);
  DAT_00011018 = (undefined1)iVar2;
  uVar3 = code_to_temp(_DAT_6000e058 & 0xff,(int)(char)phy_tsens_attribute[iVar2 * 6]);
  phy_set_tsens_range();
  _phy_param = (short)uVar3;
  return uVar3;
}

