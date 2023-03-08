/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_pq.o -> rw_ble_pq_get_ScanA
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_ble_pq_get_ScanA(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  iVar3 = rw_le_v9_get_rxdone();
  if ((iVar3 != 0) && (-1 < iVar2 << 0xf)) {
    uVar1 = *(ushort *)(param_2 + 1);
    *param_3 = *param_2;
    param_3[1] = (uint)uVar1;
  }
  return;
}

