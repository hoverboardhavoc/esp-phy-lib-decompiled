/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_set_rx_comp
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_set_rx_comp(uint param_1,uint param_2,uint param_3)

{
  _DAT_20102844 = (param_1 & 0x7f) << 7 | _DAT_20102844 & 0xffffc000 | param_1 & 0x7f;
  _DAT_20102848 = (param_2 & 0x1f) << 10 | _DAT_20102848 & 0xffff83e0 | param_3 & 0x1f;
  return;
}

