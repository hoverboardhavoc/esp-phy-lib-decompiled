/*
 * Last changed at upstream commit b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * https://github.com/espressif/esp-phy-lib/commit/b3bc6fbd9714a6638da8b1958e3f7af08532ecc7
 * Upstream date: 2026-03-18 11:37:56 +0800
 * Upstream subject: support h4eco1, phy=89ae914
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_v2_tx_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_v2_tx_set(uint param_1)

{
  _DAT_600c2170 = _DAT_600c2170 & 0xffffffc0 | param_1 & 0x3f;
  _DAT_600c201c = _DAT_600c201c & 0xffff3fff;
  set_gauss_coeff_1m();
  _DAT_600c20f0 = _DAT_600c20f0 & 0xff | 0x149100;
  _DAT_600c20f4 = 0x9fac0760;
  return;
}

