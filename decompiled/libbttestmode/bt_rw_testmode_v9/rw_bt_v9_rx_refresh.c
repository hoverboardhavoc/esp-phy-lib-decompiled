/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_testmode_v9.o -> rw_bt_v9_rx_refresh
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_bt_v9_rx_refresh(void)

{
  rw_bt_v9_rx_status_print(&DAT_3fcd02c0);
  rw_bt_v9_rx_status_print(&DAT_3fcd02e0);
  rw_bt_v9_set_rxundone(&DAT_3fcd02c0);
  if ((int)(_DAT_3fcd02e0 << 0x10) < 0) {
    _DAT_3fcd02e0 = _DAT_3fcd02e0 & 0xffff7fff;
  }
  return;
}

