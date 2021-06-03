/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_newfunc.o -> ram_wifi_get_tx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_wifi_get_tx_gain
               (undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  short sVar3;
  undefined2 *puVar4;
  int iVar5;
  int in_stack_00000000;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  char in_stack_00000010;
  undefined1 uStack_45;
  short sStack_44;
  undefined2 auStack_42 [7];
  
  iVar1 = 0;
  do {
    iVar2 = (**(code **)(_g_phyFuns + 0x110))(param_2,param_1,*(code **)(_g_phyFuns + 0x110));
    iVar5 = ((*(char *)(param_3 + iVar1) - param_4) + param_5) * 0x10000 >> 0x10;
    ram_get_tx_gain_value(iVar5,&uStack_45,auStack_42,&sStack_44,param_6,param_7,param_8,0x12);
    iVar2 = ((sStack_44 - iVar2) + (int)*(char *)(in_stack_0000000c + iVar1)) * 0x10000 >> 0x10;
    puVar4 = (undefined2 *)(iVar1 * 2 + in_stack_00000004);
    *puVar4 = auStack_42[0];
    *(undefined1 *)(in_stack_00000008 + iVar1) = uStack_45;
    if (0x18 < iVar2) {
      iVar2 = 0x18;
    }
    sVar3 = (short)iVar2;
    if (sVar3 < -0x50) {
      sVar3 = -0x50;
    }
    *(char *)(in_stack_00000000 + iVar1) = (char)sVar3;
    if (in_stack_00000010 != '\0') {
      phy_printf("%d,0x%x,0x%x,%d, %d, power=%d, %d\n",iVar1,
                 *(undefined1 *)(in_stack_00000008 + iVar1),*puVar4,(int)*(char *)(param_3 + iVar1),
                 iVar5);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xe);
  return;
}

