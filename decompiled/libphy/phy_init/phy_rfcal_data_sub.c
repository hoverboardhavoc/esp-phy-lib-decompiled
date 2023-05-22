/*
 * Last changed at upstream commit 05e53904ac98632e09d78693437b7fa0b35f36da
 * https://github.com/espressif/esp-phy-lib/commit/05e53904ac98632e09d78693437b7fa0b35f36da
 * Upstream date: 2023-05-22 12:26:13 +0800
 * Upstream subject: update h2 libphy phy_version: 200,0, 1cef4f4, May 22 2023, 11:57:13
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
  } while (iVar2 != 0x80);
  return;
}

