/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_cal.o -> txdc_cal_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txdc_cal_init(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  
  (**(code **)(_g_phyFuns + 0x1d4))(*(code **)(_g_phyFuns + 0x1d4));
  (**(code **)(_g_phyFuns + 0x1ec))(param_2,param_3,*(code **)(_g_phyFuns + 0x1ec));
  if (param_4 != 0) {
    pcVar1 = *(code **)(_g_phyFuns + 0x1cc);
    uVar3 = (**(code **)(_g_phyFuns + 0x1d0))(1,1,*(code **)(_g_phyFuns + 0x1d0));
    (*pcVar1)(1,1,uVar3 | 2);
  }
  uVar2 = 0;
  do {
    uVar4 = (**(code **)(_g_phyFuns + 0xf0))(uVar2 & 0xff,*(code **)(_g_phyFuns + 0xf0));
    (**(code **)(_g_phyFuns + 0x1cc))(1,2,uVar4,*(code **)(_g_phyFuns + 0x1cc));
    iVar5 = uVar2 * 8;
    uVar2 = uVar2 + 1;
    txdc_cal_v70(iVar5 + param_1);
  } while (uVar2 != 5);
  (**(code **)(_g_phyFuns + 0x1e4))(0,*(code **)(_g_phyFuns + 0x1e4));
                    /* WARNING: Could not recover jumptable at 0x0001029a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x1d8))();
  return;
}

