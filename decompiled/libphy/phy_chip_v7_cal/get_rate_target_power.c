/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> get_rate_target_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 get_rate_target_power(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1 >> 2;
  if (uVar3 < 8) {
    uVar2 = 0x10;
  }
  else {
    if (uVar3 < 0x10) {
      iVar1 = wifi_11g_rate_chg(uVar3);
      return phy_chan_target_power[iVar1];
    }
    uVar2 = 0;
    if (uVar3 < 0x18) {
      if ((param_1 & 3) == 3) {
        uVar3 = uVar3 - 8;
      }
      else {
        uVar3 = uVar3 - 0x10;
      }
      uVar2 = uVar3 & 0xff;
    }
  }
  return phy_chan_target_power[uVar2];
}

