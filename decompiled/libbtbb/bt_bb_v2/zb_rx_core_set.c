/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: libbtbb -> bt_bb_v2.o -> zb_rx_core_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zb_rx_core_set(void)

{
  _DAT_600c2c08 = 0x17700bb8;
  _DAT_600c2c04 = _DAT_600c2c04 & 0xfc03 | 0xbb80284;
  _DAT_600c2c20 = _DAT_600c2c20 & 0xff | 128000000;
  _DAT_600c2c24 = _DAT_600c2c24 & 0xff | 0xf85edf00;
  return;
}

