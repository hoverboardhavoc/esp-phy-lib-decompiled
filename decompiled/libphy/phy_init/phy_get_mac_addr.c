/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_init.o -> phy_get_mac_addr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_get_mac_addr(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = _DAT_600b0848;
  uVar1 = _DAT_600b0844;
  param_1[5] = (char)_DAT_600b0844;
  *param_1 = (char)((uint)uVar2 >> 8);
  param_1[2] = (char)((uint)uVar1 >> 0x18);
  param_1[1] = (char)uVar2;
  param_1[3] = (char)((uint)uVar1 >> 0x10);
  param_1[4] = (char)((uint)uVar1 >> 8);
  param_1[6] = (char)((uint)uVar2 >> 0x18);
  param_1[7] = (char)((uint)uVar2 >> 0x10);
  return;
}

