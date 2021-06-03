/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_txbbgain_to_index
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 rom_txbbgain_to_index(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0x80) {
    uVar2 = 1;
  }
  else {
    if (param_1 < 0x81) {
      uVar1 = 0x20;
      uVar2 = 3;
    }
    else {
      if (param_1 == 0xa0) {
        return 4;
      }
      uVar1 = 0x100;
      uVar2 = 2;
    }
    if (param_1 != uVar1) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

