/*
 * Last changed at upstream commit d39766d34edf7bf22dddc91d5f45f2b91576a407
 * https://github.com/espressif/esp-phy-lib/commit/d39766d34edf7bf22dddc91d5f45f2b91576a407
 * Upstream date: 2023-05-18 20:57:26 +0800
 * Upstream subject: esp32c6: enable wifi_apb_clk before phy_init and restore after phy_init, C6_libphy_20230517_b4b3263
 * Source: libphy -> phy_reg.o -> open_i2c_xpd_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void open_i2c_xpd_new(int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    _DAT_600b0154 = _DAT_600b0154 & 0xfffffff;
    _DAT_600b00cc = _DAT_600b00cc & 0xefffffff;
    ets_delay_us(100);
  }
  _DAT_600b00cc = _DAT_600b00cc | 0x10000000;
  uVar1 = _DAT_600b0154 | 0xf0000000;
  if (-1 < (int)(_DAT_600b0154 << 4)) {
    uVar1 = _DAT_600b0154 & 0xfbffffff | 0xfc000000;
  }
  _DAT_600b0154 = uVar1;
  if (-1 < (int)(_DAT_600b0154 << 5)) {
    _DAT_600b0154 = _DAT_600b0154 | 0x4000000;
  }
  return;
}

