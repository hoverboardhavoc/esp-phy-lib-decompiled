/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_set_rx_comp
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_set_rx_comp(uint param_1,uint param_2,uint param_3)

{
  _DAT_600a2844 =
       (param_2 & 0x1f) << 0xe |
       (param_3 & 0x1f) << 0x13 |
       (param_1 & 0x7f) << 7 | _DAT_600a2844 & 0xff000000 | param_1 & 0x7f;
  return;
}

