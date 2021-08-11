/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> get_phy_target_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_phy_target_power
               (char *param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  short sVar1;
  char *pcVar2;
  char *pcVar3;
  
  sVar1 = set_chan_cal_interp(param_4,param_3);
  target_power_add_backoff(param_1,param_5,(int)sVar1);
  pcVar2 = param_1;
  do {
    pcVar3 = pcVar2 + 1;
    *pcVar2 = *pcVar2 - param_2;
    pcVar2 = pcVar3;
  } while (pcVar3 != param_1 + 6);
  return;
}

