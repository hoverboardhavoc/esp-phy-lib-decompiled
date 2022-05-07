/*
 * Last changed at upstream commit 478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * https://github.com/espressif/esp-phy-lib/commit/478752a4b3e9286053ce9e81f386ee2bb8f9c030
 * Upstream date: 2022-05-07 21:35:33 +0800
 * Upstream subject: add phy for esp32c2
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
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  undefined2 *puVar7;
  undefined1 local_5c [16];
  undefined2 local_4c [14];
  undefined2 auStack_30 [6];
  
  puVar1 = local_4c;
  cVar2 = '\0';
  puVar6 = local_5c;
  puVar7 = puVar1;
  do {
    cVar2 = cVar2 + '\x01';
    chip_v7_set_chan((int)cVar2,0);
    uVar5 = (**(code **)(_g_phyFuns + 0x164))(*(code **)(_g_phyFuns + 0x164));
    *puVar7 = uVar5;
    uVar4 = (**(code **)(_g_phyFuns + 0x48))(0x62,1,6,*(code **)(_g_phyFuns + 0x48));
    *puVar6 = uVar4;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  } while (cVar2 != '\x0e');
  if (param_1 != 0) {
    ets_printf("ir_cap_ext:");
    do {
      uVar5 = *puVar1;
      puVar1 = puVar1 + 1;
      ets_printf(&_LC17,uVar5);
    } while (puVar1 != auStack_30);
    ets_printf(&_LC27);
    ets_printf("ir_dac_ext:");
    iVar3 = 0;
    do {
      puVar6 = local_5c + iVar3;
      iVar3 = iVar3 + 1;
      ets_printf(&_LC17,*puVar6);
    } while (iVar3 != 0xe);
    ets_printf(&_LC27);
    return;
  }
  return;
}

