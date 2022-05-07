/*
 * Last changed at upstream commit 478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * https://github.com/espressif/esp-phy-lib/commit/478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * Upstream date: 2022-05-07 21:35:33 +0800
 * Upstream subject: add phy for esp32c2
 * Source: libphy -> phy_api.o -> phy_change_channel
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 phy_change_channel(undefined4 param_1)

{
  set_chanfreq(param_1);
  return 0;
}

