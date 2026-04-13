/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
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
  phy_i2c_writeReg_Mask(1,param_2,param_3,param_4,param_5);
  do {
    phy_i2c_writeReg_Mask(param_1,1,param_6,param_7,param_8,uVar3 & 0xff);
    ets_delay_us(10);
    cVar4 = '\b';
    uVar1 = 0;
    do {
      iVar2 = phy_get_sar2_vol(3);
      cVar4 = cVar4 + -1;
      uVar1 = uVar1 + iVar2 & 0xffff;
    } while (cVar4 != '\0');
    *(short *)(uVar3 * 2 + in_stack_00000000) = (short)(uVar1 >> 3);
    uVar3 = uVar3 + 1;
  } while (uVar3 != 4);
  phy_i2c_writeReg_Mask(param_1,1,param_2,param_3,param_4,0);
  phy_i2c_writeReg_Mask(param_1,1,param_6,param_7,param_8,0);
  return;
}

