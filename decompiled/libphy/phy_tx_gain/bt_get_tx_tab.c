/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_tx_gain.o -> bt_get_tx_tab
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_get_tx_tab(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_64 [28];
  undefined1 auStack_48 [28];
  undefined1 auStack_2c [32];
  
  memcpy(auStack_64,&_LANCHOR0,0x1a);
  memcpy(auStack_48,&DAT_00010324,0x1a);
  memcpy(auStack_2c,&DAT_00010340,0x1a);
  bt_get_tx_gain(&phy_param,(int)DAT_0001105a,(int)DAT_0001105e,auStack_64,auStack_48,auStack_2c,
                 param_2,param_1);
  return;
}

