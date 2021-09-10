/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
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
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  bool bVar6;
  
  *param_2 = 0x65;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar1 = 0;
  puVar5 = param_2;
  do {
    iVar2 = phy_byte_to_word(puVar5);
    puVar5 = puVar5 + 4;
    uVar1 = uVar1 + iVar2;
  } while (param_2 + 0x4b4 != puVar5);
  iVar2 = param_3 + 0x80;
  do {
    iVar3 = phy_byte_to_word(param_3);
    param_3 = param_3 + 4;
    uVar1 = uVar1 + iVar3;
  } while (iVar2 != param_3);
  uVar1 = ~uVar1;
  if (param_1 == 0) {
    param_2[0x4b4] = (char)uVar1;
    param_2[0x4b5] = (char)(uVar1 >> 8);
    param_2[0x4b6] = (char)(uVar1 >> 0x10);
    param_2[0x4b7] = (char)(uVar1 >> 0x18);
    bVar6 = false;
  }
  else {
    uVar4 = phy_byte_to_word(param_2 + 0x4b4);
    bVar6 = uVar1 != uVar4;
  }
  return bVar6;
}

