/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> txbbgain_to_index
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 txbbgain_to_index(uint param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0x30) {
    uVar1 = 4;
  }
  else if (param_1 < 0x31) {
    uVar1 = param_1 == 0x20;
  }
  else {
    uVar1 = 2;
    if ((param_1 != 0xa0) && (uVar1 = 3, param_1 != 0x120)) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

