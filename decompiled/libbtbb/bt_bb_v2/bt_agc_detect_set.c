/*
 * Last changed at upstream commit 98617ae683c7456706c7de6e27b7f0355c77dc9b
 * https://github.com/espressif/esp-phy-lib/commit/98617ae683c7456706c7de6e27b7f0355c77dc9b
 * Upstream date: 2023-12-29 17:32:23 +0800
 * Upstream subject: fix h2 crash at pos rssi bug
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_detect_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_detect_set(void)

{
  _DAT_600a28a8 = _DAT_600a28a8 & 0xff83ffff | 0x100000;
  _DAT_600a28a0 = _DAT_600a28a0 & 0xc0ffffff | 0x24000000;
  _DAT_600a28ac = _DAT_600a28ac & 0xff87ffff | 0x380000;
  _DAT_600a28b8 = _DAT_600a28b8 & 0xfffff0ff | 0x700;
  _DAT_600a28c0 = _DAT_600a28c0 & 0x1f | 0x9c752940;
  _DAT_600a28c4 = _DAT_600a28c4 & 0x3ff | 0x9ca7bc00;
  return;
}

