/*
 * Last changed at upstream commit 329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * https://github.com/espressif/esp-phy-lib/commit/329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * Upstream date: 2022-06-02 17:02:45 +0800
 * Upstream subject: cut init time and fix cal time 2ms!
 * Source: libphy -> phy_chip_v7.o -> phy_rfcal_data_sub
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_rfcal_data_sub(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  puVar1 = (uint *)&phy_param;
  iVar2 = 0xc;
  do {
    if (param_2 == 0) {
      uVar4 = (**(code **)(g_phyFuns + 0xa4))(*(code **)(g_phyFuns + 0xa4));
      *puVar1 = uVar4;
    }
    else {
      uVar4 = 0;
      puVar3 = (undefined1 *)(param_1 + iVar2);
      do {
        *puVar3 = (char)(*puVar1 >> (uVar4 & 0x1f));
        uVar4 = uVar4 + 8;
        puVar3 = puVar3 + 1;
      } while (uVar4 != 0x20);
    }
    iVar2 = iVar2 + 4;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0x220);
  return;
}

