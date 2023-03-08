/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_pq.o -> rw_le_pq_get_payload
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_le_pq_get_payload(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar1 = rw_le_v9_get_rxdone();
  if ((iVar1 != 0) && (-1 < iVar3 << 0xf)) {
    uVar2 = (uint)param_1[1] >> 10 & 0x3f;
    if (((uint)param_1[1] >> 8 & 3) != 0) {
      uVar2 = uVar2 + 1;
    }
    for (iVar1 = 0; uVar2 * 4 != iVar1; iVar1 = iVar1 + 4) {
      *(undefined4 *)(&stack0xffffffe0 + (iVar1 - (uVar2 * 4 + 0xf & 0xfffffff0))) =
           *(undefined4 *)(param_2 + iVar1);
      phy_printf(&_LC2);
    }
    phy_printf(&_LC3);
  }
  return;
}

