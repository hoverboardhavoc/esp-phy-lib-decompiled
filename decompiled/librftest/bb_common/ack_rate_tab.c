/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> bb_common.o -> ack_rate_tab
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ack_rate_tab(uint param_1)

{
  if (0xf < param_1) {
    param_1 = (param_1 & 0xf) + 0x40;
  }
  _DAT_600a4440 = param_1 << 8 | param_1 << 0x18 | param_1 << 0x10 | param_1;
  _DAT_600a4444 = _DAT_600a4440;
  _DAT_600a4448 = _DAT_600a4440;
  return;
}

