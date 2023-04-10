/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
 * Source: libphy -> phy_tx_cal.o -> txdc_cal_init_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txdc_cal_init_new(undefined2 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  char cVar4;
  code *pcVar5;
  
  uVar1 = _phy_param;
  pbus_debugmode();
  uVar1 = uVar1 >> 4;
  (**(code **)(_g_phyFuns + 0x8c))(param_2,param_3,*(code **)(_g_phyFuns + 0x8c));
  if (param_4 != 0) {
    pcVar5 = *(code **)(_g_phyFuns + 0x74);
    uVar2 = (**(code **)(_g_phyFuns + 0x78))(1,1,*(code **)(_g_phyFuns + 0x78));
    (*pcVar5)(1,1,uVar2 | 2);
  }
  if ((uVar1 & 1) != 0) {
    phy_printf("%d txdc: ",param_4);
  }
  cVar4 = '\0';
  do {
    uVar3 = index_to_txbbgain(cVar4);
    (**(code **)(_g_phyFuns + 0x74))(1,2,uVar3,*(code **)(_g_phyFuns + 0x74));
    txdc_cal_new(param_1);
    if ((uVar1 & 1) != 0) {
      phy_printf("bb=0x%x,%d,%d,%d,%d,",uVar3,*param_1,param_1[1],param_1[2],param_1[3]);
    }
    cVar4 = cVar4 + '\x01';
    param_1 = param_1 + 4;
  } while (cVar4 != '\x05');
  (**(code **)(_g_phyFuns + 0x84))(0,*(code **)(_g_phyFuns + 0x84));
  pbus_workmode();
  if ((uVar1 & 1) != 0) {
    phy_printf(&_LC5);
    return;
  }
  return;
}

