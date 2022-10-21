/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_init.o -> phy_rfcal_data_sub
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
  
  puVar1 = &phy_param;
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
  } while (iVar2 != 0x224);
  return;
}

