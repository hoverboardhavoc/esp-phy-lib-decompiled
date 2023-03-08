/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_testmode_v9.o -> rw_bch_gen
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_bch_gen(uint param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = 0x13000000;
  if (-1 < (int)(param_1 << 8)) {
    uVar2 = 0x2c000000;
  }
  uVar4 = (param_1 & 0xffffff | uVar2) << 2 ^ 0x83848d94;
  uVar5 = 0x80000000;
  uVar1 = 0x20000000;
  uVar2 = 0xb0ae27b5;
  uVar3 = 0;
  do {
    if ((uVar5 & uVar4) == 0) {
      uVar1 = uVar2 << 0x1f | uVar1 >> 1;
      uVar2 = uVar2 >> 1;
      uVar5 = uVar5 >> 1;
    }
    else {
      uVar4 = uVar4 ^ uVar2;
      uVar3 = uVar3 ^ uVar1;
    }
  } while ((uVar1 & 1) == 0);
  if ((uVar5 & uVar4) != 0) {
    uVar4 = uVar4 ^ uVar2;
    uVar3 = uVar3 ^ uVar1;
  }
  *param_2 = uVar3 ^ 0xbbcc54fc;
  *param_3 = uVar4 & 3 ^ 2;
  return;
}

