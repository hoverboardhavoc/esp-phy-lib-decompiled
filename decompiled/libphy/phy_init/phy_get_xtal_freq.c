/*
 * Last changed at upstream commit 240e008e89a447f2f1edf990efefa45b870e6e8a
 * https://github.com/espressif/esp-phy-lib/commit/240e008e89a447f2f1edf990efefa45b870e6e8a
 * Upstream date: 2022-07-01 15:45:54 +0800
 * Upstream subject: Support 26M and 40M Crystal
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
  _DAT_60026004 = iVar1 - 1U & 0xff | _DAT_60026004 & 0xffffff00;
  return;
}

