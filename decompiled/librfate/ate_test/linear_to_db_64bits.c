/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librfate -> ate_test.o -> linear_to_db_64bits
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int linear_to_db_64bits(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint extraout_a1;
  uint uVar4;
  uint extraout_a1_00;
  int extraout_a1_01;
  uint extraout_a1_02;
  uint uVar5;
  byte abStack_30 [24];
  
  memcpy(abStack_30,&_LANCHOR0,0x10);
  if (param_3 < 3) {
    uVar1 = __ashldi3(param_1,param_2,3 - param_3);
    uVar4 = extraout_a1;
  }
  else {
    uVar1 = __lshrdi3(param_1,param_2,param_3 - 3);
    uVar4 = extraout_a1_02;
  }
  uVar5 = 0x3f;
  do {
    uVar2 = __ashldi3(1,0,uVar5);
    iVar3 = __lshrdi3(uVar2 & uVar1,extraout_a1_00 & uVar4,uVar5);
    uVar2 = uVar5 & 0xff;
    if (extraout_a1_01 != 0 || iVar3 != 0) break;
    uVar5 = uVar5 - 1;
    uVar2 = uVar2 - 1 & 0xff;
  } while (uVar5 != 2);
  uVar5 = (int)((uVar2 - 3) * 0x1000000) >> 0x18;
  if (1 < (int)uVar5) {
    uVar1 = __lshrdi3(uVar1,uVar4,uVar5 - 1);
  }
  return (int)(((uint)abStack_30[uVar1 & 0xf] + (uVar5 & 0xffff) * 0x30) * 0x10000) >> 0x10;
}

