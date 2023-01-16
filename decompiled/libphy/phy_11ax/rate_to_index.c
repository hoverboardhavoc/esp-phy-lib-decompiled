/*
 * Last changed at upstream commit 3c715e60c63d59b1d8240de147d46d78d84a97bf
 * https://github.com/espressif/esp-phy-lib/commit/3c715e60c63d59b1d8240de147d46d78d84a97bf
 * Upstream date: 2023-01-16 19:19:06 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_11ax.o -> rate_to_index
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint rate_to_index(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = wifi_11g_rate_chg_new();
  if (param_1 < 8) {
    uVar1 = param_1 >> 1 & 1;
  }
  else if (param_1 < 0x10) {
    uVar1 = (uVar1 >> 1) + 2 & 0xff;
  }
  else {
    uVar2 = (int)param_1 >> 1 & 7;
    uVar1 = uVar2 + 7;
    if (param_1 < 0x19) {
      uVar1 = uVar2 + 6;
    }
  }
  return uVar1;
}

