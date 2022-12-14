/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_tx_gain.o -> wifi_get_tx_gain_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wifi_get_tx_gain_new
               (undefined4 param_1,undefined4 param_2,short param_3,short param_4,undefined4 param_5
               ,undefined4 param_6,undefined4 param_7,int param_8)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 *puVar3;
  int iVar4;
  int in_stack_00000000;
  int in_stack_00000004;
  char in_stack_00000008;
  undefined1 auStack_46 [2];
  undefined2 uStack_44;
  undefined2 auStack_42 [7];
  
  cVar2 = (**(code **)(_g_phyFuns + 8))(param_2,param_1,*(code **)(_g_phyFuns + 8));
  param_3 = (param_4 + 0x54) - param_3;
  iVar4 = 0;
  uVar1 = 0;
  do {
    uVar1 = get_tx_gain_value(uVar1,(int)param_3,&uStack_44,auStack_42,auStack_46,param_5,param_6,
                              param_7);
    *(char *)(param_8 + iVar4) = auStack_46[0] - cVar2;
    puVar3 = (undefined2 *)(in_stack_00000000 + iVar4 * 2);
    *puVar3 = auStack_42[0];
    *(undefined2 *)(iVar4 * 2 + in_stack_00000004) = uStack_44;
    if (in_stack_00000008 != '\0') {
      phy_printf("%d,0x%x,0x%x,%d, %d, power=%d, %d\n",iVar4,*puVar3,(int)*(char *)(param_8 + iVar4)
                 ,iVar4 * -4 + 0x54,(int)param_3);
    }
    param_3 = param_3 + -4;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x20);
  return;
}

