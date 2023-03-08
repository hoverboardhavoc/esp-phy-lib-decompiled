/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> mac_common.o -> mac_buffer_get
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void mac_buffer_get(void)

{
  TXBUF_START = txbuffer;
  PSDU0_OFFSET = 0x16484;
  PSDU1_OFFSET = 0x16c84;
  PSDU3_OFFSET = 0x17384;
  RX_ampdu_entry0_start = RX_ampdu_entry0_buf;
  RX_ampdu_entrysd0_start = RX_ampdu_entrysd0_buf;
  RX_ampdu_buff0_start = RX_ampdu_buff0_buf;
  RX_aplenbk_start = RX_aplenbk;
  RX_aplkbk_start = RX_aplkbk;
  PSDU2_OFFSET = 0x17284;
  RX_bufflk_start = RX_bufflk;
  return;
}

