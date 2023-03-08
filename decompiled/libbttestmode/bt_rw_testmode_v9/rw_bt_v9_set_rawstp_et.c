/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_testmode_v9.o -> rw_bt_v9_set_rawstp_et
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_bt_v9_set_rawstp_et(uint *param_1,int param_2)

{
  *param_1 = *param_1 & 0xffff | param_2 << 0x10;
  param_1[1] = (uint)(param_2 << 4) >> 0x14 | param_1[1] & 0xfffff000;
  return;
}

