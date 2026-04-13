/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> rw_le_v9_adv_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_le_v9_adv_init(uint param_1)

{
  _DAT_60031120 = _DAT_60031120 & 0xffffc000 | param_1 & 0x3fff;
  _DAT_60031000 = _DAT_60031000 & 0xffffbfff;
  rw_le_v9_prep_cs(&DAT_3ffd0200,5,1,1,0,1,0);
  _DAT_3ffd0300 = 0x14400320;
  _DAT_3ffd0304 = 0x340;
  _DAT_3ffd0320 = 0x18440300;
  _DAT_3ffd0324 = 0x440;
  rw_fill_adv_buf(&DAT_3ffd0340);
  rw_fill_scanrsp_buf(0x3ffd0440);
  return;
}

