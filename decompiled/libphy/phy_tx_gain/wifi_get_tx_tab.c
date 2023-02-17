/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
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
  memcpy(auStack_44,&DAT_000105f0,0x24);
  wifi_get_tx_gain_new
            (param_1,&phy_param,(int)DAT_0001111b,
             (int)(((uint)DAT_00011147 - (uint)(byte)bt_txdc_cal_new) * 0x1000000) >> 0x18,
             auStack_8c,&uStack_68,auStack_44,param_2);
  return;
}

