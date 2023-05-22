/*
 * Last changed at upstream commit 05e53904ac98632e09d78693437b7fa0b35f36da
 * https://github.com/espressif/esp-phy-lib/commit/05e53904ac98632e09d78693437b7fa0b35f36da
 * Upstream date: 2023-05-22 12:26:13 +0800
 * Upstream subject: update h2 libphy phy_version: 200,0, 1cef4f4, May 22 2023, 11:57:13
 * Source: libbtbb -> bt_bb_v2.o -> zb_rx_v0_0_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zb_rx_v0_0_set(void)

{
  _DAT_600a2c18 = _DAT_600a2c18 & 0xfffff800 | 0x7af;
  _DAT_600a2c10 = _DAT_600a2c10 & 0x1fff | 0xf4b42000;
  _DAT_600a2c34 = _DAT_600a2c34 & 0xff | 0x7e1fd400;
  _DAT_600a2c2c = _DAT_600a2c2c & 0xff | 128000000;
  _DAT_600a2c30 = _DAT_600a2c30 & 0xff | 0xf85edf00;
  _DAT_600a2c14 = _DAT_600a2c14 & 0xfffffffd;
  _DAT_600a2c0c = _DAT_600a2c0c & 0xffe003ff | 0x1ee600;
  return;
}

