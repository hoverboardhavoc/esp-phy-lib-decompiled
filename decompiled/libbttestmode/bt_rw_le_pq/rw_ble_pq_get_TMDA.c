/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_pq.o -> rw_ble_pq_get_TMDA
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_ble_pq_get_TMDA(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = rw_le_v9_get_rxdone();
  if (iVar2 != 0) {
    uVar1 = *(ushort *)(param_1 + 1);
    *param_2 = *param_1;
    param_2[1] = (uint)uVar1;
  }
  return;
}

