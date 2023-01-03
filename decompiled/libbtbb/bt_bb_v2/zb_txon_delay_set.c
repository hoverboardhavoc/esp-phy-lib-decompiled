/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libbtbb -> bt_bb_v2.o -> zb_txon_delay_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void zb_txon_delay_set(void)

{
  _DAT_600a3104 = _DAT_600a3104 & 0xfffffc00 | 0x32;
  _DAT_600a3114 = _DAT_600a3114 & 0xfffffc00 | 0x70;
  return;
}

