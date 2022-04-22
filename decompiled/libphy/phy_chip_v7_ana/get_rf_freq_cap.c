/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7_ana.o -> get_rf_freq_cap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_rf_freq_cap(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  
  set_rfpll_freq(phy_param,param_1,param_2,param_3);
  uVar1 = (**(code **)(_g_phyFuns + 0x1b8))(0x62,1,5,7,0,*(code **)(_g_phyFuns + 0x1b8));
  *param_4 = uVar1;
  iVar3 = (**(code **)(_g_phyFuns + 0x1b8))(0x62,1,7,2,2,*(code **)(_g_phyFuns + 0x1b8));
  bVar2 = (**(code **)(_g_phyFuns + 0x1b8))(0x62,1,6,3,0,*(code **)(_g_phyFuns + 0x1b8));
  param_4[1] = (byte)(iVar3 << 4) | bVar2 | 0x80;
  return;
}

