/*
 * Last changed at upstream commit d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * https://github.com/espressif/esp-phy-lib/commit/d8e2d8760cf6396978a59b6e807c493fe4d2d160
 * Upstream date: 2025-11-18 19:35:51 +0800
 * Upstream subject: support H4 BETA5 libphy
 * Source: librfate -> ate_test.o -> get_inernal_vol
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_inernal_vol(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  int in_stack_00000000;
  
  uVar3 = 0;
  i2c_writeReg_Mask(1,param_2,param_3,param_4,param_5);
  do {
    i2c_writeReg_Mask(param_1,1,param_6,param_7,param_8,uVar3 & 0xff);
    ets_delay_us(10);
    cVar4 = '\b';
    uVar1 = 0;
    do {
      iVar2 = get_sar2_vol(0);
      cVar4 = cVar4 + -1;
      uVar1 = uVar1 + iVar2 & 0xffff;
    } while (cVar4 != '\0');
    *(short *)(uVar3 * 2 + in_stack_00000000) = (short)(uVar1 >> 3);
    uVar3 = uVar3 + 1;
  } while (uVar3 != 4);
  i2c_writeReg_Mask(param_1,1,param_2,param_3,param_4,0);
  i2c_writeReg_Mask(param_1,1,param_6,param_7,param_8,0);
  return;
}

