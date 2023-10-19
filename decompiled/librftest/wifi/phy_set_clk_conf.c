/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> phy_set_clk_conf
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_set_clk_conf(int param_1)

{
  int iVar1;
  
  if (param_1 == 1) {
    iVar1 = 0x571000;
  }
  else {
    if (param_1 != 2) {
      _DAT_600b0414 = 0x7fffff;
      _DAT_600b0420 = 0xf9c1e06f;
      _DAT_600b0424 = 0x8405;
      return;
    }
    iVar1 = 0x504000;
  }
  _DAT_600b0424 = 0;
  _DAT_600b0420 = 0x1000004;
  _DAT_600b0414 = iVar1 + -0x3f2;
  return;
}

