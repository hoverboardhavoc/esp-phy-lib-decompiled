/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_pq.o -> rw_ble_CS_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_ble_CS_init(uint param_1,undefined4 param_2)

{
  _DAT_60031120 = _DAT_60031120 & 0xffffc000 | param_1 & 0x3fff;
  _DAT_60031000 = _DAT_60031000 & 0xffffbfff;
  rw_le_v9_prep_cs(&DAT_3fcd0200,param_2,1,1,1,0,1,0);
  _DAT_3fcd0214 = _DAT_3fcd0214 & 0xffff00ff;
  return;
}

