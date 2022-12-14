/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_11ax.o -> phy_get_max_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 phy_get_max_pwr(undefined1 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = get_target_pwr();
  uVar1 = (undefined1)(iVar2 >> 2);
  *param_1 = uVar1;
  param_1[1] = uVar1;
  return 0;
}

