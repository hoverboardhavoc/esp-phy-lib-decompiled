/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_tsens.o -> get_temp_init_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_temp_init_new(int param_1,int param_2)

{
  tsens_temp_read_new();
  if (param_2 != 0) {
    _DAT_00011132 = _phy_param;
  }
  _tsens_code_read = _DAT_00011132;
  if (param_1 != 0) {
    _DAT_00011134 = _phy_param;
  }
  return;
}

