/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
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
  
  (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,0,3,0,0xc,*(code **)(_g_phyFuns + 0x1bc));
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
  (**(code **)(_g_phyFuns + 0x1d8))(*(code **)(_g_phyFuns + 0x1d8));
                    /* WARNING: Could not recover jumptable at 0x000102f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,0,3,0,2);
  return;
}

