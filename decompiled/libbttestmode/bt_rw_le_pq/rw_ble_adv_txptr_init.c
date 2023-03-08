/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_pq.o -> rw_ble_adv_txptr_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_ble_adv_txptr_init(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  rw_le_v9_init_tx_descriptor_old(0,&DAT_3fcd0300,&DAT_3fcd0320,0,0,0,0,0);
  rw_le_v9_init_tx_descriptor_old(0,&DAT_3fcd0320,&DAT_3fcd0300,0,0,0,0,0);
  rw_ble_write_buf(0x3fcd0340,param_1,param_2);
  for (iVar1 = 0; iVar1 != param_4 << 2; iVar1 = iVar1 + 4) {
    *(undefined4 *)(iVar1 + 0x3fcd0440) = *(undefined4 *)(param_3 + iVar1);
  }
  return;
}

