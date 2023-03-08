/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> rw_le_v9_adv_service_stop
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_le_v9_adv_service_stop(void)

{
  rf_rw_v9_le_disable();
  _DAT_60031000 = _DAT_60031000 | 0x80000000;
  _DAT_60020000 = _DAT_60020000 & 0x7fffffff;
  _DAT_6002007c = _DAT_6002007c | 1;
  phy_printf("LE ADV STOP!\n");
  return;
}

