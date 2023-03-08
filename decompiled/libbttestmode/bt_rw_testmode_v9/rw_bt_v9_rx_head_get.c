/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_testmode_v9.o -> rw_bt_v9_rx_head_get
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_bt_v9_rx_head_get(int param_1,uint *param_2,uint *param_3,uint *param_4,undefined1 *param_5)

{
  *param_5 = (char)*(undefined4 *)(param_1 + 8);
  *param_4 = *(uint *)(param_1 + 4) >> 0x10 & 3;
  *param_3 = *(uint *)(param_1 + 4) >> 0x13 & 0x3ff;
  *param_2 = *(uint *)(param_1 + 4) >> 3 & 0xf;
  return;
}

