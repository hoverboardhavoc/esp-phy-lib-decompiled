/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_debug.o -> rfpll_cap_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rfpll_cap_check(int param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  undefined2 *puVar7;
  undefined1 local_5c [16];
  undefined2 local_4c [14];
  undefined2 auStack_30 [6];
  
  puVar1 = local_4c;
  uVar2 = 1;
  puVar6 = local_5c;
  puVar7 = puVar1;
  do {
    chip_v7_set_chan(uVar2 & 0xffff,0);
    uVar5 = read_pll_cap();
    *puVar7 = uVar5;
    uVar4 = (**(code **)(_g_phyFuns + 0x50))(0x62,1,6,*(code **)(_g_phyFuns + 0x50));
    *puVar6 = uVar4;
    uVar2 = uVar2 + 1;
    puVar7 = puVar7 + 1;
    puVar6 = puVar6 + 1;
  } while (uVar2 != 0xf);
  if (param_1 != 0) {
    phy_printf("ir_cap_ext:");
    do {
      uVar5 = *puVar1;
      puVar1 = puVar1 + 1;
      phy_printf(&_LC28,uVar5);
    } while (puVar1 != auStack_30);
    phy_printf(&_LC39);
    phy_printf("ir_dac_ext:");
    iVar3 = 0;
    do {
      puVar6 = local_5c + iVar3;
      iVar3 = iVar3 + 1;
      phy_printf(&_LC28,*puVar6);
    } while (iVar3 != 0xe);
    phy_printf(&_LC39);
    return;
  }
  return;
}

