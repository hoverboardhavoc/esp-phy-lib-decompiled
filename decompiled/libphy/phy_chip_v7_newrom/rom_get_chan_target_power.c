/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_get_chan_target_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rom_get_chan_target_power
               (int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
               undefined4 param_6)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uStack_14;
  
  uStack_14 = 0x1000100;
  if (param_4 == 1) {
    rom_get_rate_fcc_index(&uStack_14,param_5,param_6);
  }
  uVar3 = 0;
  do {
    uVar2 = uStack_14 & 0xff;
    if (((1 < uVar3) && (uVar2 = uStack_14 >> 8 & 0xff, 5 < (uVar3 & 0xff))) &&
       (uVar2 = uStack_14 >> 0x10 & 0xff, 9 < (uVar3 & 0xff))) {
      uVar2 = uStack_14 >> 0x18;
    }
    pcVar1 = (char *)(param_2 + uVar3);
    if ((int)uVar2 < (int)*(char *)(param_3 + uVar3)) {
      *pcVar1 = (char)uVar2;
    }
    else {
      *pcVar1 = *(char *)(param_3 + uVar3);
    }
    if (param_1 < *pcVar1) {
      *pcVar1 = (char)param_1;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0xe);
  return;
}

