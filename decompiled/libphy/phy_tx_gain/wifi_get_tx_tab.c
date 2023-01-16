/*
 * Last changed at upstream commit 3c715e60c63d59b1d8240de147d46d78d84a97bf
 * https://github.com/espressif/esp-phy-lib/commit/3c715e60c63d59b1d8240de147d46d78d84a97bf
 * Upstream date: 2023-01-16 19:19:06 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_tx_gain.o -> wifi_get_tx_tab
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void wifi_get_tx_tab(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_8c [36];
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined1 auStack_62 [30];
  undefined1 auStack_44 [48];
  
  memcpy(auStack_8c,&_LANCHOR1,0x24);
  memset(auStack_62,0,0x1e);
  uStack_68 = 0x1000020;
  uStack_64 = 0x80;
  memcpy(auStack_44,&DAT_0001049c,0x24);
  wifi_get_tx_gain_new
            (param_1,&phy_param,(int)DAT_00011117,
             (int)(((uint)DAT_00011143 - (uint)(byte)set_channel_rfpll_freq) * 0x1000000) >> 0x18,
             auStack_8c,&uStack_68,auStack_44,param_2);
  return;
}

