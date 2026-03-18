/*
 * Last changed at upstream commit b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * https://github.com/espressif/esp-phy-lib/commit/b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * Upstream date: 2026-03-18 11:37:56 +0800
 * Upstream subject: support h4eco1, phy=89ae914
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_gain_max
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_gain_max(uint param_1)

{
  _DAT_600c2850 = (param_1 & 0x7f) << 0xe | _DAT_600c2850 & 0xffe03fff;
  _DAT_600c2840 = _DAT_600c2840 & 0xffffff80 | param_1 & 0x7f;
  return;
}

