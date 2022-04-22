/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7.o -> phy_rfcal_data_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

bool phy_rfcal_data_check(int param_1,undefined1 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  *param_2 = 0x8d;
  param_2[1] = 3;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar1 = 0;
  puVar5 = param_2;
  do {
    puVar6 = puVar5 + 4;
    iVar2 = (**(code **)(g_phyFuns + 0xa4))(puVar5,*(code **)(g_phyFuns + 0xa4));
    uVar1 = uVar1 + iVar2;
    puVar5 = puVar6;
  } while (puVar6 != param_2 + 0x5f4);
  iVar2 = param_3;
  do {
    iVar4 = iVar2 + 4;
    iVar2 = (**(code **)(g_phyFuns + 0xa4))(iVar2,*(code **)(g_phyFuns + 0xa4));
    uVar1 = uVar1 + iVar2;
    iVar2 = iVar4;
  } while (iVar4 != param_3 + 0x80);
  uVar1 = ~uVar1;
  uVar3 = (**(code **)(g_phyFuns + 0xa4))(param_2 + 0x5f4,*(code **)(g_phyFuns + 0xa4));
  if (param_1 == 0) {
    param_2[0x5f4] = (char)uVar1;
    param_2[0x5f5] = (char)(uVar1 >> 8);
    param_2[0x5f6] = (char)(uVar1 >> 0x10);
    param_2[0x5f7] = (char)(uVar1 >> 0x18);
  }
  return param_1 != 0 && uVar1 != uVar3;
}

