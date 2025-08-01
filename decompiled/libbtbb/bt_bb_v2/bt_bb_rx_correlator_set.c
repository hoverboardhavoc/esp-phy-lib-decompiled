/*
 * Last changed at upstream commit 1d4cd3aafa244a0adf5891f058b3519bc970d644
 * https://github.com/espressif/esp-phy-lib/commit/1d4cd3aafa244a0adf5891f058b3519bc970d644
 * Upstream date: 2025-08-01 19:50:02 +0800
 * Upstream subject: 1. fix C5ECO2 signaling test power 2. fix C5ECO2/C6ECO3/H2ECO5 coex problem
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_rx_correlator_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_rx_correlator_set(void)

{
  uint uVar1;
  
  _DAT_600a20fc = _DAT_600a20fc & 0x81ffffff | 0x12000000;
  uVar1 = _DAT_600a2068 & 0x81f;
  _DAT_600a2068 = uVar1 | 0x10d9b060;
  if (phy_param < 5) {
    _DAT_600a2068 = uVar1 | 0x10d9b860;
  }
  _DAT_600a2060 = _DAT_600a2060 & 0x3ffffff | 0x8000000;
  _DAT_600a2100 = _DAT_600a2100 & 0xf33fffff | 0x400000;
  _DAT_600a2064 = _DAT_600a2064 & 0xfc000003 | 0x310908;
  _DAT_600a20f8 = _DAT_600a20f8 & 0x8000001f | 0x214e060;
  return;
}

