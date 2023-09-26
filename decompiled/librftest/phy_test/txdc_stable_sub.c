/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> txdc_stable_sub
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txdc_stable_sub(undefined4 param_1,undefined2 *param_2)

{
  short sVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short local_40;
  short sStack_3e;
  undefined4 uStack_3c;
  short sStack_38;
  short sStack_36;
  
  uStack_3c = 0;
  pbus_debugmode();
  sVar3 = 0;
  (**(code **)(_g_phyFuns + 0x8c))(0xf,0,*(code **)(_g_phyFuns + 0x8c));
  iVar2 = 0;
  sVar4 = 0;
  do {
    txdc_cal_new(&sStack_38);
    phy_printf("%d,%d,%d,%d\n",param_1,iVar2,sStack_38,sStack_36);
    ets_delay_us(100);
    sVar1 = sStack_38;
    sVar5 = sStack_36;
    if (iVar2 != 0) {
      local_40 = sStack_38 - sVar3;
      sStack_3e = sStack_36 - sVar4;
      txdc_delta_max(&local_40,&uStack_3c);
      sVar1 = sVar3;
      sVar5 = sVar4;
    }
    sVar3 = sVar1;
    iVar2 = iVar2 + 1;
    sVar4 = sVar5;
  } while (iVar2 != 0x14);
  (**(code **)(_g_phyFuns + 0x84))(0,*(code **)(_g_phyFuns + 0x84));
  pbus_workmode();
  *param_2 = (undefined2)uStack_3c;
  param_2[1] = uStack_3c._2_2_;
  return;
}

