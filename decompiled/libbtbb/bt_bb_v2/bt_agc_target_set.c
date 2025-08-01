/*
 * Last changed at upstream commit 1d4cd3aafa244a0adf5891f058b3519bc970d644
 * https://github.com/espressif/esp-phy-lib/commit/1d4cd3aafa244a0adf5891f058b3519bc970d644
 * Upstream date: 2025-08-01 19:50:02 +0800
 * Upstream subject: 1. fix C5ECO2 signaling test power 2. fix C5ECO2/C6ECO3/H2ECO5 coex problem
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_target_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_target_set(void)

{
  uint uVar1;
  
  _DAT_600a28b0 = _DAT_600a28b0 & 0x7fffff | 0xef000000;
  _DAT_600a2898 = _DAT_600a2898 & 0xffff8000 | 0x19d4;
  uVar1 = _DAT_600a2840 & 0xffc01fff | 0x3a8000;
  if (phy_param < 5) {
    uVar1 = _DAT_600a2840 & 0xffc003ff | 0x3a8800;
  }
  _DAT_600a2840 = uVar1;
  _DAT_600a2894 = _DAT_600a2894 & 0xff803fff | 0x710000;
  _DAT_600a28b4 = _DAT_600a28b4 & 0x7fffff | 0xea000000;
  return;
}

