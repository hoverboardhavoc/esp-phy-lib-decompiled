/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_pq.o -> rw_ble_write_buf
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_ble_write_buf(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 != param_3 << 2; iVar1 = iVar1 + 4) {
    *(undefined4 *)(param_1 + iVar1) = *(undefined4 *)(param_2 + iVar1);
  }
  return;
}

