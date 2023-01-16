/*
 * Last changed at upstream commit 3c715e60c63d59b1d8240de147d46d78d84a97bf
 * https://github.com/espressif/esp-phy-lib/commit/3c715e60c63d59b1d8240de147d46d78d84a97bf
 * Upstream date: 2023-01-16 19:19:06 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_tx_gain.o -> wifi_11g_rate_chg_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 wifi_11g_rate_chg_new(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 8U & 0xff;
  if (uVar1 < 8) {
    return (&_LANCHOR0)[uVar1];
  }
  return 0;
}

