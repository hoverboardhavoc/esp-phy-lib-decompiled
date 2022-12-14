/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_tsens.o -> tsens_read_init_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tsens_read_init_new(int param_1,int param_2)

{
  if (param_1 != 0) {
    (**(code **)(_g_phyFuns + 0x60))
              (0x69,0,6,3,0,phy_tsens_attribute[param_2 * 6 + 1],*(code **)(_g_phyFuns + 0x60));
  }
  _DAT_60096088 = _DAT_60096088 & 0xff7fffff | 0x400000;
  _DAT_6000e05c = _DAT_6000e05c | 0x8000;
  _DAT_6000e058 = _DAT_6000e058 | 0x400000;
  return;
}

