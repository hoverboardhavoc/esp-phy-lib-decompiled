/*
 * Last changed at upstream commit 478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * https://github.com/espressif/esp-phy-lib/commit/478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * Upstream date: 2022-05-07 21:35:33 +0800
 * Upstream subject: add phy for esp32c2
 * Source: libphy -> phy_init.o -> phy_rfcal_data_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

bool phy_rfcal_data_check(int param_1,undefined1 *param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  *param_2 = (char)param_4;
  param_2[1] = (char)((uint)param_4 >> 8);
  param_2[2] = (char)((uint)param_4 >> 0x10);
  param_2[3] = (char)((uint)param_4 >> 0x18);
  uVar1 = 0;
  puVar5 = param_2;
  do {
    iVar2 = phy_byte_to_word(puVar5);
    puVar5 = puVar5 + 4;
    uVar1 = uVar1 + iVar2;
  } while (puVar5 != param_2 + 0x5d0);
  iVar2 = param_3 + 0x80;
  do {
    iVar3 = phy_byte_to_word(param_3);
    param_3 = param_3 + 4;
    uVar1 = uVar1 + iVar3;
  } while (iVar2 != param_3);
  uVar1 = ~uVar1;
  uVar4 = phy_byte_to_word(param_2 + 0x5d0);
  if (param_1 == 0) {
    param_2[0x5d0] = (char)uVar1;
    param_2[0x5d1] = (char)(uVar1 >> 8);
    param_2[0x5d2] = (char)(uVar1 >> 0x10);
    param_2[0x5d3] = (char)(uVar1 >> 0x18);
  }
  return param_1 != 0 && uVar1 != uVar4;
}

