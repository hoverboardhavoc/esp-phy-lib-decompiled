/*
 * Last changed at upstream commit b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * https://github.com/espressif/esp-phy-lib/commit/b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * Upstream date: 2026-03-18 11:37:56 +0800
 * Upstream subject: support h4eco1, phy=89ae914
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_set_max_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_set_max_gain(int param_1,uint param_2)

{
  if (param_1 == 0) {
    param_2 = (uint)phy_param;
  }
  _DAT_600c2850 = (param_2 & 0x7f) << 0xe | _DAT_600c2850 & 0xffe03fff;
  _DAT_600c2840 = _DAT_600c2840 & 0xffffff80 | param_2 & 0x7f;
  return;
}

