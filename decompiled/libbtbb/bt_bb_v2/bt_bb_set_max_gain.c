/*
 * Last changed at upstream commit aa6bac1e0a83ea70fa3f03a72041efddaeb7b898
 * https://github.com/espressif/esp-phy-lib/commit/aa6bac1e0a83ea70fa3f03a72041efddaeb7b898
 * Upstream date: 2025-02-24 10:34:30 +0800
 * Upstream subject: update C5 beta5 and eco1 libphy, fix ble 2m rx and sleep rst bb fsm
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
  _DAT_600a2850 = (param_2 + 10) * 0x4000 & 0x1fc000 | _DAT_600a2850 & 0xffe03fff;
  _DAT_600a2840 = _DAT_600a2840 & 0xffffff80 | param_2 + 10 & 0x7f;
  return;
}

