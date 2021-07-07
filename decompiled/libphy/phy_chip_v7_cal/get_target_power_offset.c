/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> get_target_power_offset
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

char get_target_power_offset(uint param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if (param_1 < 8) {
    cVar1 = phy_chan_target_power[6];
    if (phy_chan_target_power[6] != '\0') {
      return phy_chan_target_power[7];
    }
  }
  else {
    if (param_1 < 0x10) {
      iVar2 = wifi_11g_rate_chg();
      return *(char *)(iVar2 + param_2);
    }
    cVar1 = '\0';
    if (param_1 < 0x18) {
      return *(char *)(param_2 + param_1 + -0x10);
    }
  }
  return cVar1;
}

