/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> mac_common.o -> mac_buffer_get
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void mac_buffer_get(void)

{
  TXBUF_START = txbuffer;
  PSDU0_OFFSET = 0x166d4;
  PSDU1_OFFSET = 0x176d4;
  PSDU3_OFFSET = 0x178d4;
  RX_ampdu_entry0_start = RX_ampdu_entry0_buf;
  RX_ampdu_entrysd0_start = RX_ampdu_entrysd0_buf;
  RX_ampdu_buff0_start = RX_ampdu_buff0_buf;
  RX_aplenbk_start = RX_aplenbk;
  RX_aplkbk_start = RX_aplkbk;
  PSDU2_OFFSET = 0x177d4;
  RX_bufflk_start = RX_bufflk;
  return;
}

