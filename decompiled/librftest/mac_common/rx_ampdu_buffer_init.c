/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> mac_common.o -> rx_ampdu_buffer_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 rx_ampdu_buffer_init(void)

{
  undefined1 uVar1;
  
  rx_ampdu_buffer_fresh();
  uVar1 = DAT_600123c9;
  DAT_600123c9 = (char)RX_bufflk_start;
  DAT_600123ca = (char)((uint)RX_bufflk_start >> 8);
  DAT_600123cb = (char)((uint)RX_bufflk_start >> 0x10);
  DAT_600123cc = (char)((uint)RX_bufflk_start >> 0x18);
  return uVar1;
}

