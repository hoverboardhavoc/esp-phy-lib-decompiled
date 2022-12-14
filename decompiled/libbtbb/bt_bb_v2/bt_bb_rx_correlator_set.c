/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_rx_correlator_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_rx_correlator_set(void)

{
  _DAT_600a20fc = _DAT_600a20fc & 0x81ffffff | 0x12000000;
  _DAT_600a2060 = _DAT_600a2060 & 0x3ffffff | 0x10000000;
  _DAT_600a2100 = _DAT_600a2100 & 0xf33fffff | 0x400000;
  _DAT_600a2064 = _DAT_600a2064 & 0xfc000003 | 0x310908;
  _DAT_600a20f8 = _DAT_600a20f8 & 0x8000001f | 0x214f060;
  _DAT_600a2068 = _DAT_600a2068 & 0x81f | 0x10d9b870;
  return;
}

