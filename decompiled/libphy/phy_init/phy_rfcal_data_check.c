/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_init.o -> phy_rfcal_data_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

bool phy_rfcal_data_check(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  phy_set_mac_data(param_2,param_3);
  uVar1 = 0;
  iVar4 = param_2;
  do {
    iVar2 = phy_byte_to_word(iVar4);
    iVar4 = iVar4 + 4;
    uVar1 = uVar1 + iVar2;
  } while (iVar4 != param_2 + 0x1cc);
  uVar1 = ~uVar1;
  uVar3 = phy_byte_to_word(iVar4);
  if (param_1 == 0) {
    *(char *)(param_2 + 0x1cc) = (char)uVar1;
    *(char *)(param_2 + 0x1cd) = (char)(uVar1 >> 8);
    *(char *)(param_2 + 0x1ce) = (char)(uVar1 >> 0x10);
    *(char *)(param_2 + 0x1cf) = (char)(uVar1 >> 0x18);
  }
  return param_1 != 0 && uVar1 != uVar3;
}

