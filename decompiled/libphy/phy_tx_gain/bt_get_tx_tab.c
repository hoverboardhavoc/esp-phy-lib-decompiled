/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
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
  
  memcpy(auStack_64,&DAT_000104b4,0x1c);
  memset(auStack_48,0,0x1c);
  memcpy(auStack_2c,&DAT_000104d0,0x1c);
  bt_get_tx_gain(&phy_param,(int)DAT_0001111a,
                 (int)(((uint)DAT_00011140 - (uint)(byte)bt_get_tx_gain) * 0x1000000) >> 0x18,
                 auStack_64,auStack_48,auStack_2c,param_2,param_1);
  return;
}

