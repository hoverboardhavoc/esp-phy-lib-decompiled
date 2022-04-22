/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7.o -> rf_cal_data_recovery
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rf_cal_data_recovery(int param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = 0x2b4;
  puVar1 = &phy_param;
  do {
    iVar4 = param_1 + iVar3;
    iVar3 = iVar3 + 4;
    uVar5 = (**(code **)(g_phyFuns + 0xa4))(iVar4,*(code **)(g_phyFuns + 0xa4));
    *(undefined4 *)(puVar1 + 0x120) = uVar5;
    puVar1 = puVar1 + 4;
  } while (iVar3 != 0x3a8);
  iVar3 = 0x538;
  puVar2 = &phy_rxrf_dc;
  do {
    iVar4 = param_1 + iVar3;
    iVar3 = iVar3 + 4;
    uVar5 = (**(code **)(g_phyFuns + 0xa4))(iVar4,*(code **)(g_phyFuns + 0xa4));
    *puVar2 = uVar5;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0x580);
  iVar3 = 0x580;
  puVar2 = &phy_rxbb_dc;
  do {
    iVar4 = param_1 + iVar3;
    iVar3 = iVar3 + 4;
    uVar5 = (**(code **)(g_phyFuns + 0xa4))(iVar4,*(code **)(g_phyFuns + 0xa4));
    *puVar2 = uVar5;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0x5bc);
  iVar3 = 0x5bc;
  puVar2 = &phy_chan_dc;
  do {
    iVar4 = param_1 + iVar3;
    iVar3 = iVar3 + 4;
    uVar5 = (**(code **)(g_phyFuns + 0xa4))(iVar4,*(code **)(g_phyFuns + 0xa4));
    *puVar2 = uVar5;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0x5f4);
  return;
}

