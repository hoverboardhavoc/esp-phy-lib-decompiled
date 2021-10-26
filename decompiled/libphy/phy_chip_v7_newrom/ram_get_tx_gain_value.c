/*
 * Last changed at upstream commit 7586abbf591ab63d609d7afeb377559deabec808
 * https://github.com/espressif/esp-phy-lib/commit/7586abbf591ab63d609d7afeb377559deabec808
 * Upstream date: 2021-10-26 15:21:29 +0800
 * Upstream subject: update phy lib to fix usb & rssi issue(cc45c1a)
 * Source: libphy -> phy_chip_v7_newrom.o -> ram_get_tx_gain_value
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

