/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
 * Source: libphy -> phy_tx_gain.o -> wifi_get_tx_tab
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void wifi_get_tx_tab(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_80 [32];
  undefined2 uStack_60;
  undefined1 auStack_5e [26];
  undefined2 uStack_44;
  undefined1 auStack_40 [44];
  
  memcpy(auStack_80,&_LANCHOR1,0x20);
  memset(auStack_5e,0,0x1e);
  uStack_60 = 0x80;
  uStack_44 = 0x80;
  memcpy(auStack_40,&DAT_00010614,0x20);
  wifi_get_tx_gain_new
            (param_1,&phy_param,(int)DAT_0001111b,
             (int)(((uint)DAT_00011147 - (uint)(byte)bt_txdc_cal_new) * 0x1000000) >> 0x18,
             auStack_80,&uStack_60,auStack_40,param_2);
  return;
}

