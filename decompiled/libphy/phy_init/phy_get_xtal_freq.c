/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
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
  phy_param._0_1_ = 2;
  if (iVar1 != 0x20) {
    phy_param._0_1_ = iVar1 == 0x1a;
  }
  _DAT_60096130 = iVar1 - 1U & 0xff | _DAT_60096130 & 0xffffff00;
  return;
}

