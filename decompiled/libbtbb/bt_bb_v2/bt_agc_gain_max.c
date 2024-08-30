/*
 * Last changed at upstream commit 772432d2e9e7422159ee3ef01a07fc985ce9466a
 * https://github.com/espressif/esp-phy-lib/commit/772432d2e9e7422159ee3ef01a07fc985ce9466a
 * Upstream date: 2024-08-30 17:42:59 +0800
 * Upstream subject: feat(phy): add phy support for esp32c61
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_gain_max
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_gain_max(uint param_1)

{
  _DAT_600a2850 = (param_1 & 0x7f) << 0xe | _DAT_600a2850 & 0xffe03fff;
  _DAT_600a2840 = param_1 - 5 & 0x7f | _DAT_600a2840 & 0xffffff80;
  return;
}

