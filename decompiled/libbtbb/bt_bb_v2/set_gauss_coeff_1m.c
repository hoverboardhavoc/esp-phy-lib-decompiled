/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libbtbb -> bt_bb_v2.o -> set_gauss_coeff_1m
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_gauss_coeff_1m(void)

{
  _DAT_600a20e0 = _DAT_600a20e0 & 3 | 0x1128588;
  _DAT_600a20e4 = _DAT_600a20e4 & 3 | 0x77bcccfc;
  _DAT_600a20e8 = _DAT_600a20e8 & 0x3ff | 0x98185c00;
  _DAT_600a20ec = _DAT_600a20ec & 0x3ff | 0xe0ddf000;
  return;
}

