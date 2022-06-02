/*
 * Last changed at upstream commit 329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * https://github.com/espressif/esp-phy-lib/commit/329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * Upstream date: 2022-06-02 17:02:45 +0800
 * Upstream subject: cut init time and fix cal time 2ms!
 * Source: libphy -> phy_chip_v7.o -> phy_rfcal_data_check
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
  iVar2 = param_2;
  do {
    iVar4 = iVar2 + 4;
    iVar2 = (**(code **)(g_phyFuns + 0xa4))(iVar2,*(code **)(g_phyFuns + 0xa4));
    uVar1 = uVar1 + iVar2;
    iVar2 = iVar4;
  } while (iVar4 != param_2 + 0x220);
  uVar1 = ~uVar1;
  uVar3 = (**(code **)(g_phyFuns + 0xa4))(iVar4,*(code **)(g_phyFuns + 0xa4));
  if (param_1 == 0) {
    *(char *)(param_2 + 0x220) = (char)uVar1;
    *(char *)(param_2 + 0x221) = (char)(uVar1 >> 8);
    *(char *)(param_2 + 0x222) = (char)(uVar1 >> 0x10);
    *(char *)(param_2 + 0x223) = (char)(uVar1 >> 0x18);
  }
  return param_1 != 0 && uVar1 != uVar3;
}

