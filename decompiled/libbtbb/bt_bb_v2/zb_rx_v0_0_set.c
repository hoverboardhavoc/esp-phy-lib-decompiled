/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbtbb -> bt_bb_v2.o -> zb_rx_v0_0_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zb_rx_v0_0_set(void)

{
  _DAT_20102c0c = _DAT_20102c0c & 0xffe003ff | 0x1e7000;
  _DAT_20102c18 = _DAT_20102c18 & 0xfffff800 | 0x7a6;
  _DAT_20102c10 = _DAT_20102c10 & 0x1fff | 0xf254c000;
  _DAT_20102c30 = _DAT_20102c30 & 0xff | 0xf85edf00;
  _DAT_20102c14 = _DAT_20102c14 & 0xfffffffd;
  _DAT_20102c28 = _DAT_20102c28 | 0x40000000;
  _DAT_20102c2c = 0x7a120f1;
  _DAT_20102c34 = _DAT_20102c34 & 0x800001ff | 0x7e1fda01;
  return;
}

