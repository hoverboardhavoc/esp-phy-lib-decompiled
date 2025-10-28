/*
 * Last changed at upstream commit 218d3e79a323a437b5f994c32fe7b2144f54ca8c
 * https://github.com/espressif/esp-phy-lib/commit/218d3e79a323a437b5f994c32fe7b2144f54ca8c
 * Upstream date: 2025-10-28 15:27:17 +0800
 * Upstream subject: update C3 S3 C2 S2 libphy for rxdc opt
 * Source: libbtbb -> bt_bb_v2.o -> bt_rx_gain_comp
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_rx_gain_comp(uint param_1,uint param_2)

{
  _DAT_60011844 =
       (param_2 & 0x1f) << 0x13 |
       (param_1 & 0x7f) << 7 | _DAT_60011844 & 0xff07c000 | param_1 & 0x7f;
  return;
}

