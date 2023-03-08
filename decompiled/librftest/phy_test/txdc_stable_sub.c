/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> phy_test.o -> txdc_stable_sub
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txdc_stable_sub(int param_1,undefined2 *param_2)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short local_40;
  short sStack_3e;
  undefined4 uStack_3c;
  short sStack_38;
  short sStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  
  uStack_3c = 0;
  (**(code **)(_g_phyFuns + 0x1d4))(*(code **)(_g_phyFuns + 0x1d4));
  sVar5 = 0;
  (**(code **)(_g_phyFuns + 0x1ec))(0xf,0,*(code **)(_g_phyFuns + 0x1ec));
  if (param_1 != 0) {
    pcVar2 = *(code **)(_g_phyFuns + 0x1cc);
    uVar4 = (**(code **)(_g_phyFuns + 0x1d0))(1,1,*(code **)(_g_phyFuns + 0x1d0));
    (*pcVar2)(1,1,uVar4 | 2);
  }
  iVar3 = 0;
  sVar6 = 0;
  do {
    txdc_cal_v70(&sStack_38);
    phy_printf("%d,%d,%d,%d,%d,%d\n",param_1,iVar3,sStack_38,sStack_36,uStack_34,uStack_32);
    ets_delay_us(100);
    sVar1 = sStack_38;
    sVar7 = sStack_36;
    if (iVar3 != 0) {
      local_40 = sStack_38 - sVar5;
      sStack_3e = sStack_36 - sVar6;
      txdc_delta_max(&local_40,&uStack_3c);
      sVar1 = sVar5;
      sVar7 = sVar6;
    }
    sVar5 = sVar1;
    iVar3 = iVar3 + 1;
    sVar6 = sVar7;
  } while (iVar3 != 0x14);
  (**(code **)(_g_phyFuns + 0x1e4))(0,*(code **)(_g_phyFuns + 0x1e4));
  (**(code **)(_g_phyFuns + 0x1d8))(*(code **)(_g_phyFuns + 0x1d8));
  *param_2 = (undefined2)uStack_3c;
  param_2[1] = uStack_3c._2_2_;
  return;
}

