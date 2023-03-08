/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_pq.o -> rw_ble_rx_status_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_ble_rx_status_print(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [16];
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  iVar2 = rw_le_v9_get_rxdone();
  if (iVar2 != 0) {
    if (-1 < (int)(uVar3 << 0xf)) {
      rw_le_v9_rx_phyinfo(param_1,param_2,auStack_30,auStack_2c,auStack_28,auStack_24);
      phy_printf("%3x %d\n",uVar3 >> 0x10 & 0x3ff,(int)(char)(uVar1 >> 0x10));
    }
  }
  return;
}

