/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_newfunc.o -> ram_get_tx_gain_value
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ram_get_tx_gain_value
               (int param_1,undefined1 *param_2,undefined2 *param_3,short *param_4,int param_5,
               int param_6,int param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = uVar2 & 0xff;
    if (param_8 <= uVar1) {
      uVar1 = param_8 - 1 & 0xff;
      break;
    }
    uVar2 = uVar2 + 1;
  } while (param_1 < *(short *)(uVar2 * 2 + param_7 + -2));
  *param_2 = *(undefined1 *)(param_5 + uVar1);
  *param_3 = *(undefined2 *)(param_6 + uVar1 * 2);
  *param_4 = (short)param_1 - *(short *)(uVar1 * 2 + param_7);
  return;
}

