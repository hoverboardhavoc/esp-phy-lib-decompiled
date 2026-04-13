/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbtbb -> bt_bb_v2.o -> set_gauss_coeff_1m
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_gauss_coeff_1m(void)

{
  _DAT_201020e0 = _DAT_201020e0 & 3 | 0xc4c;
  _DAT_201020e4 = _DAT_201020e4 & 3 | 0x2fa80bc8;
  _DAT_201020e8 = _DAT_201020e8 & 0x3ff | 0xa1bafc00;
  _DAT_201020ec = _DAT_201020ec & 0x3ff | 0xf41fa400;
  return;
}

