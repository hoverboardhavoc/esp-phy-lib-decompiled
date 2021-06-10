/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> target_power_add_backoff
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void target_power_add_backoff(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  if (0x18 < param_3) {
    param_3 = 0x18;
  }
  iVar2 = 0;
  do {
    pcVar1 = (char *)(param_2 + iVar2);
    pcVar3 = (char *)(param_1 + iVar2);
    iVar2 = iVar2 + 1;
    *pcVar3 = *pcVar1 - (char)param_3;
  } while (iVar2 != 6);
  return;
}

