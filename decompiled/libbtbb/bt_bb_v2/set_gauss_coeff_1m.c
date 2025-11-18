/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbtbb -> bt_bb_v2.o -> set_gauss_coeff_1m
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_gauss_coeff_1m(void)

{
  _DAT_600c20e0 = _DAT_600c20e0 & 3 | 0x1128588;
  _DAT_600c20e4 = _DAT_600c20e4 & 3 | 0x77bcccfc;
  _DAT_600c20e8 = _DAT_600c20e8 & 0x3ff | 0x98185c00;
  _DAT_600c20ec = _DAT_600c20ec & 0x3ff | 0xe0ddf000;
  return;
}

