/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_testmode.o -> rw_fill_adv_buf
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_fill_adv_buf(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    puVar1 = (undefined4 *)(&ADV_payload + iVar3);
    puVar2 = (undefined4 *)(param_1 + iVar3);
    iVar3 = iVar3 + 4;
    *puVar2 = *puVar1;
  } while (iVar3 != 0x18);
  return;
}

