/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
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
  cVar1 = 'X';
  if (acStack_24[iVar2] < 'Y') {
    cVar1 = acStack_24[iVar2];
  }
  return (int)cVar1;
}

