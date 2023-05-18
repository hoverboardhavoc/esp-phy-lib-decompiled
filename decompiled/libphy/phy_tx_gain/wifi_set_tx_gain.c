/*
 * Last changed at upstream commit d39766d34edf7bf22dddc91d5f45f2b91576a407
 * https://github.com/espressif/esp-phy-lib/commit/d39766d34edf7bf22dddc91d5f45f2b91576a407
 * Upstream date: 2023-05-18 20:57:26 +0800
 * Upstream subject: esp32c6: enable wifi_apb_clk before phy_init and restore after phy_init, C6_libphy_20230517_b4b3263
 * Source: libphy -> phy_tx_gain.o -> wifi_set_tx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wifi_set_tx_gain(undefined4 param_1)

{
  undefined2 local_c0;
  undefined2 uStack_be;
  undefined4 uStack_bc;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [64];
  undefined1 auStack_50 [72];
  
  local_c0 = _DAT_000111ae;
  uStack_b8 = _DAT_000111b2;
  uStack_be = _DAT_000111b0;
  uStack_b6 = _DAT_000111b4;
  uStack_bc = 0x1000100;
  uStack_b4 = 0x1000100;
  wifi_get_tx_tab(auStack_b0,auStack_90,auStack_50,param_1);
  if (DAT_0001102f == '\0') {
    set_tx_gain_mem(0,0x20,auStack_50,auStack_90,auStack_b0,&local_c0,&phy_param);
  }
  return;
}

