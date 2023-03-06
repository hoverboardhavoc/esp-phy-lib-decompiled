/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
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
  
  puVar1 = (uint *)&phy_param;
  iVar2 = 0xc;
  do {
    if (param_2 == 0) {
      uVar4 = phy_byte_to_word();
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
  } while (iVar2 != 0x70);
  return;
}

