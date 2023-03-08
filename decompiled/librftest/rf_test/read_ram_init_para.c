/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> rf_test.o -> read_ram_init_para
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void read_ram_init_para(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  
  iVar1 = 0x21;
  if ((undefined4 *)(param_1 + 0x88U) < (undefined4 *)(param_1 + 8)) {
    iVar1 = 1;
  }
  puVar2 = (undefined4 *)(param_1 + 8);
  puVar3 = param_2;
  while (puVar3 + 4 != param_2 + iVar1 * 4) {
    *puVar3 = (char)*puVar2;
    puVar3[1] = (char)((uint)*puVar2 >> 8);
    puVar3[2] = (char)((uint)*puVar2 >> 0x10);
    puVar3[3] = (char)((uint)*puVar2 >> 0x18);
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 4;
  }
  return;
}

