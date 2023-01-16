/*
 * Last changed at upstream commit 3c715e60c63d59b1d8240de147d46d78d84a97bf
 * https://github.com/espressif/esp-phy-lib/commit/3c715e60c63d59b1d8240de147d46d78d84a97bf
 * Upstream date: 2023-01-16 19:19:06 +0800
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
  _DAT_600a3110 = _DAT_600a3110 & 0xfffff800 | 0x32;
  _DAT_600a3114 = _DAT_600a3114 & 0xfffffc00 | 0x70;
  return;
}

