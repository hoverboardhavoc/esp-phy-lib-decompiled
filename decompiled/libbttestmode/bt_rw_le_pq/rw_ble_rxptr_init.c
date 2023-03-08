/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_pq.o -> rw_ble_rxptr_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_ble_rxptr_init(void)

{
  rw_ble_init_rx_descryptor(&DAT_3fcd02c0,&DAT_3fcd02e0,0x3fcd0b00,0x3fcd0700,1,1);
  uRam3fcd02e8 = 0;
  _DAT_3fcd02e0 = 0x2c0;
  uRam3fcd02f0 = uRam3fcd02f0 & 0xffff | 0xf000000;
  uRam3fcd02ec = uRam3fcd02ec & 0xffff | 0x13000000;
  _DAT_3fcd02e4 = 0xc0;
  return;
}

