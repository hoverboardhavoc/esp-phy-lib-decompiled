/*
 * Last changed at upstream commit d39766d34edf7bf22dddc91d5f45f2b91576a407
 * https://github.com/espressif/esp-phy-lib/commit/d39766d34edf7bf22dddc91d5f45f2b91576a407
 * Upstream date: 2023-05-18 20:57:26 +0800
 * Upstream subject: esp32c6: enable wifi_apb_clk before phy_init and restore after phy_init, C6_libphy_20230517_b4b3263
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
  memcpy(auStack_40,&DAT_00010624,0x20);
  wifi_get_tx_gain_new
            (param_1,&phy_param,(int)DAT_0001111f,
             (int)(((uint)DAT_0001114b - (uint)(byte)bt_txdc_cal_new) * 0x1000000) >> 0x18,
             auStack_80,&uStack_60,auStack_40,param_2);
  return;
}

