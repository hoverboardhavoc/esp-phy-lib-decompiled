/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_pq.o -> rw_ble_dtm_txptr_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_ble_dtm_txptr_init(void)

{
  rw_le_v9_init_tx_descriptor_old(0,&DAT_3fcd0300,&DAT_3fcd0320,0,0,0,0,0);
  rw_le_v9_init_tx_descriptor_old(0,&DAT_3fcd0320,&DAT_3fcd0300,0,0,0,0,0);
  return;
}

