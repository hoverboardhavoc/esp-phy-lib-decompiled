/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librfate -> ate_test.o -> get_inernal_vol
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_inernal_vol(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int in_stack_00000000;
  
  uVar4 = 0;
  (**(code **)(_g_phyFuns + 0x1bc))
            (1,param_2,param_3,param_4,param_5,*(code **)(_g_phyFuns + 0x1bc));
  do {
    (**(code **)(_g_phyFuns + 0x1bc))
              (param_1,1,param_6,param_7,param_8,uVar4 & 0xff,*(code **)(_g_phyFuns + 0x1bc));
    ets_delay_us(10);
    cVar3 = '\b';
    uVar1 = 0;
    do {
      iVar2 = (**(code **)(_g_phyFuns + 0x150))(3,*(code **)(_g_phyFuns + 0x150));
      cVar3 = cVar3 + -1;
      uVar1 = uVar1 + iVar2 & 0xffff;
    } while (cVar3 != '\0');
    *(short *)(uVar4 * 2 + in_stack_00000000) = (short)(uVar1 >> 3);
    uVar4 = uVar4 + 1;
  } while (uVar4 != 4);
  (**(code **)(_g_phyFuns + 0x1bc))
            (param_1,1,param_2,param_3,param_4,0,*(code **)(_g_phyFuns + 0x1bc));
                    /* WARNING: Could not recover jumptable at 0x00010f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x1bc))(param_1,1,param_6,param_7,param_8,0);
  return;
}

