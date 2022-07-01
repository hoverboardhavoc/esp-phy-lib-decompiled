/*
 * Last changed at upstream commit 240e008e89a447f2f1edf990efefa45b870e6e8a
 * https://github.com/espressif/esp-phy-lib/commit/240e008e89a447f2f1edf990efefa45b870e6e8a
 * Upstream date: 2022-07-01 15:45:54 +0800
 * Upstream subject: Support 26M and 40M Crystal
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
  } while (iVar4 != param_2 + 0x29c);
  uVar1 = ~uVar1;
  uVar3 = phy_byte_to_word(iVar4);
  if (param_1 == 0) {
    *(char *)(param_2 + 0x29c) = (char)uVar1;
    *(char *)(param_2 + 0x29d) = (char)(uVar1 >> 8);
    *(char *)(param_2 + 0x29e) = (char)(uVar1 >> 0x10);
    *(char *)(param_2 + 0x29f) = (char)(uVar1 >> 0x18);
  }
  return param_1 != 0 && uVar1 != uVar3;
}

