/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_pq.o -> ble_get_payload
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ble_get_payload(int *param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint auStack_30 [7];
  
  iVar4 = *param_1;
  auStack_30[3] = param_2;
  iVar1 = rw_le_v9_get_rxdone();
  uVar2 = auStack_30[3];
  if ((iVar1 != 0) && (-1 < iVar4 << 0xf)) {
    uVar3 = (uint)param_1[1] >> 10 & 0x3f;
    if (((uint)param_1[1] >> 8 & 3) != 0) {
      uVar3 = uVar3 + 1;
    }
    iVar1 = -(uVar3 * 4 + 0xf & 0xfffffff0);
    for (iVar4 = 0; uVar3 * 4 != iVar4; iVar4 = iVar4 + 4) {
      *(undefined4 *)((int)auStack_30 + iVar4 + iVar1) = *(undefined4 *)(uVar2 + iVar4);
    }
    phy_printf(&_LC3);
    uVar2 = *(uint *)((int)auStack_30 + iVar1 + 8);
    *param_3 = *(uint *)((int)auStack_30 + iVar1 + 4) & 0xffff0000;
    param_3[1] = uVar2;
    phy_printf("%x %x\n");
  }
  return;
}

