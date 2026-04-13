/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_set_corr_thresh_le
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_set_corr_thresh_le(uint param_1,uint param_2,int param_3)

{
  _DAT_20102064 = (param_2 & 0x3f) << 0xe | (param_1 & 0x3f) << 0x14 | _DAT_20102064 & 0xfc003fff;
  _DAT_201020f8 = (param_2 & 0x3f) << 5 | (param_2 & 0x3f) << 0x13 | _DAT_201020f8 & 0xfe07f81f;
  _DAT_20102060 = _DAT_20102060 & 0x3ffffff | param_3 << 0x1a;
  return;
}

