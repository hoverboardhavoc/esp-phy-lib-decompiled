/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_11ax.o -> get_target_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int get_target_pwr(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  char acStack_24 [28];
  
  wifi_get_target_power(_phy_param,acStack_24);
  iVar2 = rate_to_index(param_1);
  cVar1 = 'T';
  if (acStack_24[iVar2] < 'U') {
    cVar1 = acStack_24[iVar2];
  }
  return (int)cVar1;
}

