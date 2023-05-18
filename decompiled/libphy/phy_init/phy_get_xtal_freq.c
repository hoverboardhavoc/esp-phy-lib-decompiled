/*
 * Last changed at upstream commit d39766d34edf7bf22dddc91d5f45f2b91576a407
 * https://github.com/espressif/esp-phy-lib/commit/d39766d34edf7bf22dddc91d5f45f2b91576a407
 * Upstream date: 2023-05-18 20:57:26 +0800
 * Upstream subject: esp32c6: enable wifi_apb_clk before phy_init and restore after phy_init, C6_libphy_20230517_b4b3263
 * Source: libphy -> phy_init.o -> phy_get_xtal_freq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_get_xtal_freq(void)

{
  int iVar1;
  
  iVar1 = rtc_clk_xtal_freq_get();
  phy_param = 2;
  if (iVar1 != 0x20) {
    phy_param = iVar1 == 0x1a;
  }
  _DAT_60096130 = iVar1 - 1U & 0xff | _DAT_60096130 & 0xffffff00;
  return;
}

