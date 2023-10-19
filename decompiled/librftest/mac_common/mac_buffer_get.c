/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> mac_common.o -> mac_buffer_get
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void mac_buffer_get(void)

{
  TXBUF_START = txbuffer;
  PSDU0_OFFSET = 0x16ad4;
  PSDU1_OFFSET = 0x172d4;
  PSDU3_OFFSET = 0x179d4;
  RX_ampdu_entry0_start = RX_ampdu_entry0_buf;
  RX_ampdu_entrysd0_start = RX_ampdu_entrysd0_buf;
  RX_ampdu_buff0_start = RX_ampdu_buff0_buf;
  RX_aplenbk_start = RX_aplenbk;
  RX_aplkbk_start = RX_aplkbk;
  PSDU2_OFFSET = 0x178d4;
  RX_bufflk_start = RX_bufflk;
  return;
}

