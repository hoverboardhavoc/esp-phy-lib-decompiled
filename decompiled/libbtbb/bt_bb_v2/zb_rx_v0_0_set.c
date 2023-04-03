/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
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
  _DAT_600a2c10 = _DAT_600a2c10 & 0x1fff | 0xf434c000;
  _DAT_600a2c34 = _DAT_600a2c34 & 0x800001ff | 0xfb9fd400;
  _DAT_600a2c2c = _DAT_600a2c2c & 0xff | 128000000;
  _DAT_600a2c30 = _DAT_600a2c30 & 0xff | 0xf85edf00;
  _DAT_600a2c14 = _DAT_600a2c14 & 0xfffffffd;
  _DAT_600a2c0c = _DAT_600a2c0c & 0xffe003ff | 0x1ebe00;
  return;
}

