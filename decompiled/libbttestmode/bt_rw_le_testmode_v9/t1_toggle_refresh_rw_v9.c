/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> t1_toggle_refresh_rw_v9
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void t1_toggle_refresh_rw_v9(void)

{
  _DAT_60020000 = _DAT_60020000 | 0x400;
  _DAT_6002007c = _DAT_6002007c | 1;
  rw_le_v9_error_print();
  rw_le_v9_evt_refresh(0x3fcd0100,1);
  _DAT_60020000 = _DAT_60020000 | 0x400;
  return;
}

