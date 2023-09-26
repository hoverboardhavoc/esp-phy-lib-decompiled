/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> burnin_rtc_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void burnin_rtc_init(void)

{
  int iVar1;
  
  _DAT_600a4d68 = 0;
  lp_wdt_reset_sys(0x5ffff);
  iVar1 = rtc_reset_cause();
  if (iVar1 == 9) {
    _DAT_600b1000 = _DAT_600b1000 + 1;
  }
  return;
}

