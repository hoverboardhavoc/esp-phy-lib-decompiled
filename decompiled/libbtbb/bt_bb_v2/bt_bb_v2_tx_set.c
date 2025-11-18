/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_tx_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_v2_tx_set(uint param_1)

{
  _DAT_600c2018 = _DAT_600c2018 & 0xffff0000 | 0x2801;
  _DAT_600c2170 = (param_1 & 0x3f) << 0x14 | _DAT_600c2170 & 0xfc0fffff;
  _DAT_600c200c = _DAT_600c200c & 0xfffff03f | 0x40;
  set_gauss_coeff_1m();
  _DAT_600c20f0 = _DAT_600c20f0 & 0xff | 0x149100;
  _DAT_600c20f4 = 0x9fac0760;
  return;
}

