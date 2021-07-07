/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7.o -> phy_get_max_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 phy_get_max_pwr(uint param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar2 = 0x12;
  if (7 < param_1) {
    if (param_1 < 0x10) {
      uVar1 = wifi_11g_rate_chg();
      uVar2 = 5;
      if (uVar1 < 8) {
        uVar2 = *(undefined1 *)((int)&CSWTCH_232 + uVar1);
      }
    }
    else {
      if (0x17 < param_1) goto _L129;
      uVar2 = *(undefined1 *)((int)&CSWTCH_232 + (param_1 - 0x10 & 0xff));
    }
  }
  *param_2 = uVar2;
_L129:
  param_2[1] = *param_2;
  return 0;
}

