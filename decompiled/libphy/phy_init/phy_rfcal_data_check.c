/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_init.o -> phy_rfcal_data_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

bool phy_rfcal_data_check(int param_1,undefined1 *param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  
  uVar2 = phy_get_rf_cal_version();
  *param_2 = (char)uVar2;
  param_2[1] = (char)((uint)uVar2 >> 8);
  param_2[2] = (char)((uint)uVar2 >> 0x10);
  param_2[3] = (char)((uint)uVar2 >> 0x18);
  uVar1 = 0;
  puVar6 = param_2;
  do {
    iVar3 = phy_byte_to_word(puVar6);
    puVar6 = puVar6 + 4;
    uVar1 = uVar1 + iVar3;
  } while (puVar6 != param_2 + 0x454);
  iVar3 = param_3 + 0x80;
  do {
    iVar4 = phy_byte_to_word(param_3);
    param_3 = param_3 + 4;
    uVar1 = uVar1 + iVar4;
  } while (iVar3 != param_3);
  uVar1 = ~uVar1;
  uVar5 = phy_byte_to_word(param_2 + 0x454);
  if (param_1 == 0) {
    param_2[0x454] = (char)uVar1;
    param_2[0x455] = (char)(uVar1 >> 8);
    param_2[0x456] = (char)(uVar1 >> 0x10);
    param_2[0x457] = (char)(uVar1 >> 0x18);
  }
  return param_1 != 0 && uVar1 != uVar5;
}

