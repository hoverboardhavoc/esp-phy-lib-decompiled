/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> burnin_rtc_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void burnin_rtc_init(void)

{
  _DAT_60008018 = _DAT_60008018 & 0xdfffffff;
  if ((_DAT_60008038 & 0x3f) - 7 < 3) {
    _DAT_60008050 = _DAT_60008050 + 1;
  }
  timers_wdt_init(0,3,0x40000);
  _DAT_60033d04 = 0;
  return;
}

