/*
 * Last changed at upstream commit 218d3e79a323a437b5f994c32fe7b2144f54ca8c
 * https://github.com/espressif/esp-phy-lib/commit/218d3e79a323a437b5f994c32fe7b2144f54ca8c
 * Upstream date: 2025-10-28 15:27:17 +0800
 * Upstream subject: update C3 S3 C2 S2 libphy for rxdc opt
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_rx_inter_opt
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_rx_inter_opt(void)

{
  _DAT_60011858 = _phy_param;
  _DAT_6001185c = _phy_param;
  _DAT_60011864 = 0x404;
  _DAT_60011868 = _DAT_60011868 & 0xffffcfdf;
  return;
}

