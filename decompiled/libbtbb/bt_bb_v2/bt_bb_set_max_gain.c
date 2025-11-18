/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
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
  _DAT_600c2850 = (param_2 + 10) * 0x4000 & 0x1fc000 | _DAT_600c2850 & 0xffe03fff;
  _DAT_600c2840 = _DAT_600c2840 & 0xffffff80 | param_2 + 10 & 0x7f;
  return;
}

