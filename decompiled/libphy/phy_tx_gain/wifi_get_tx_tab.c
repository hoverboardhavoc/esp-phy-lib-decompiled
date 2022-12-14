/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
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
  
  memcpy(auStack_8c,&_LANCHOR0,0x24);
  memset(auStack_62,0,0x1e);
  uStack_68 = 0x1000020;
  uStack_64 = 0x80;
  memcpy(auStack_44,&DAT_0001046c,0x24);
  wifi_get_tx_gain_new
            (param_1,&phy_param,(int)DAT_00011117,
             (int)(((uint)DAT_00011143 - (uint)(byte)set_channel_rfpll_freq) * 0x1000000) >> 0x18,
             auStack_8c,&uStack_68,auStack_44,param_2);
  return;
}

