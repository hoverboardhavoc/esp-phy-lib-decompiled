/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libbtbb -> bt_bb_v2.o -> zb_rx_core_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zb_rx_core_set(void)

{
  _DAT_600a2c08 = 0x17700bb8;
  _DAT_600a2c04 = _DAT_600a2c04 & 0xfc03 | 0xbb80284;
  _DAT_600a2c20 = _DAT_600a2c20 & 0xff | 128000000;
  _DAT_600a2c24 = _DAT_600a2c24 & 0xff | 0xf85edf00;
  return;
}

