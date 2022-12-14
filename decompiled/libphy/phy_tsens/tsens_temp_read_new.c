/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
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
  undefined4 uVar2;
  
  uVar1 = (**(code **)(_g_phyFuns + 0x50))(0x69,0,6,*(code **)(_g_phyFuns + 0x50));
  DAT_0001101a = tsens_dac_to_index(uVar1 & 0xf);
  tsens_code_read();
  uVar2 = code_to_temp((int)(char)phy_tsens_attribute[(uint)DAT_0001101a * 6]);
  phy_set_tsens_range();
  _phy_param = (short)uVar2;
  return uVar2;
}

