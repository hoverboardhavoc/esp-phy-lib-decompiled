/*
 * Last changed at upstream commit 3c715e60c63d59b1d8240de147d46d78d84a97bf
 * https://github.com/espressif/esp-phy-lib/commit/3c715e60c63d59b1d8240de147d46d78d84a97bf
 * Upstream date: 2023-01-16 19:19:06 +0800
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
  
  memcpy(auStack_64,&DAT_000104c0,0x1c);
  memset(auStack_48,0,0x1c);
  memcpy(auStack_2c,&DAT_000104dc,0x1c);
  bt_get_tx_gain(&phy_param,(int)DAT_0001111e,
                 (int)(((uint)DAT_00011144 - (uint)(byte)set_channel_rfpll_freq) * 0x1000000) >>
                 0x18,auStack_64,auStack_48,auStack_2c,param_2,param_1);
  return;
}

