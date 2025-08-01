/*
 * Last changed at upstream commit 1d4cd3aafa244a0adf5891f058b3519bc970d644
 * https://github.com/espressif/esp-phy-lib/commit/1d4cd3aafa244a0adf5891f058b3519bc970d644
 * Upstream date: 2025-08-01 19:50:02 +0800
 * Upstream subject: 1. fix C5ECO2 signaling test power 2. fix C5ECO2/C6ECO3/H2ECO5 coex problem
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_recorrect_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_recorrect_set(void)

{
  _DAT_600a28b4 = _DAT_600a28b4 & 0xffffc1ff | 0x1500;
  _DAT_600a28bc = _DAT_600a28bc & 0xfffffebf | 0xa0;
  _DAT_600a28b0 = _DAT_600a28b0 & 0xffffc00f | 0x1f20;
  _DAT_600a2868 = _DAT_600a2868 & 0xfffff820 | 0x3bef;
  _DAT_600a286c = _DAT_600a286c & 0xffffff | 0xf000000;
  return;
}

