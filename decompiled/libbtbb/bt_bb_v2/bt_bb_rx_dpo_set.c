/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_rx_dpo_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_rx_dpo_set(void)

{
  _DAT_600a2038 = _DAT_600a2038 & 0xfffff87f | 0x300;
  _DAT_600a2034 = _DAT_600a2034 & 0xffff | 0x77770000;
  _DAT_600a2020 = _DAT_600a2020 & 0xfffc03c0 | 0x19806;
  _DAT_600a2024 = _DAT_600a2024 & 0x83ffffff | 0x30000000;
  _DAT_600a2028 = _DAT_600a2028 & 0xffffffc3;
  _DAT_600a202c = _DAT_600a202c & 0xfffff009 | 0xdc4;
  _DAT_600a2030 = _DAT_600a2030 & 0xffffffc0 | 3;
  _DAT_600a28f4 = _DAT_600a28f4 & 0x100fff | 0x500a000;
  return;
}

