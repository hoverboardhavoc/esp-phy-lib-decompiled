/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
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

