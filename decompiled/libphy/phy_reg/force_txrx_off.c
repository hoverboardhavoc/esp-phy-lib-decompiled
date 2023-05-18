/*
 * Last changed at upstream commit d39766d34edf7bf22dddc91d5f45f2b91576a407
 * https://github.com/espressif/esp-phy-lib/commit/d39766d34edf7bf22dddc91d5f45f2b91576a407
 * Upstream date: 2023-05-18 20:57:26 +0800
 * Upstream subject: esp32c6: enable wifi_apb_clk before phy_init and restore after phy_init, C6_libphy_20230517_b4b3263
 * Source: libphy -> phy_reg.o -> force_txrx_off
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void force_txrx_off(int param_1)

{
  if (param_1 == 0) {
    _DAT_600a0910 = _DAT_600a0910 & 0xfffff0ff | 0x200;
    ets_delay_us(1);
    _DAT_600a0910 = _DAT_600a0910 & 0xfffff0ff;
  }
  else {
    _DAT_600a0910 = _DAT_600a0910 & 0xfffff0ff | 0x800;
    ets_delay_us(1);
    _DAT_600a0910 = _DAT_600a0910 & 0xfffff0ff | 0xa00;
  }
  ets_delay_us(1);
  return;
}

