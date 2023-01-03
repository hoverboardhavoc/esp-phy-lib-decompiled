/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
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
  undefined1 auStack_68 [36];
  undefined1 auStack_44 [48];
  
  memcpy(auStack_8c,&_LANCHOR0,0x24);
  memcpy(auStack_68,&DAT_0001046c,0x24);
  memcpy(auStack_44,&DAT_00010490,0x24);
  wifi_get_tx_gain_new
            (param_1,&phy_param,(int)DAT_00011113,
             (int)(((uint)DAT_0001113f - (uint)(byte)bt_get_tx_gain) * 0x1000000) >> 0x18,auStack_8c
             ,auStack_68,auStack_44,param_2);
  return;
}

