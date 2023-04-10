/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
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
  char acStack_20 [24];
  
  wifi_get_target_power(_phy_param,acStack_20);
  iVar2 = rate_to_index(param_1);
  cVar1 = 'T';
  if (acStack_20[iVar2] < 'U') {
    cVar1 = acStack_20[iVar2];
  }
  return (int)cVar1;
}

