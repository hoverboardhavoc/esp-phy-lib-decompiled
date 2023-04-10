/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
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
  
  local_c0 = _DAT_000111aa;
  uStack_b8 = _DAT_000111ae;
  uStack_be = _DAT_000111ac;
  uStack_b6 = _DAT_000111b0;
  uStack_bc = 0x1000100;
  uStack_b4 = 0x1000100;
  wifi_get_tx_tab(auStack_b0,auStack_90,auStack_50,param_1);
  if (DAT_0001102b == '\0') {
    set_tx_gain_mem(0,0x20,auStack_50,auStack_90,auStack_b0,&local_c0,&phy_param);
  }
  return;
}

