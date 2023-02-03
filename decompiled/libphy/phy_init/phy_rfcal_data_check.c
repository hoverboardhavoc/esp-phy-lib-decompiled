/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
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
  } while (puVar6 != param_2 + 0x440);
  iVar3 = param_3 + 0x80;
  do {
    iVar4 = phy_byte_to_word(param_3);
    param_3 = param_3 + 4;
    uVar1 = uVar1 + iVar4;
  } while (iVar3 != param_3);
  uVar1 = ~uVar1;
  uVar5 = phy_byte_to_word(param_2 + 0x440);
  if (param_1 == 0) {
    param_2[0x440] = (char)uVar1;
    param_2[0x441] = (char)(uVar1 >> 8);
    param_2[0x442] = (char)(uVar1 >> 0x10);
    param_2[0x443] = (char)(uVar1 >> 0x18);
  }
  return param_1 != 0 && uVar1 != uVar5;
}

