/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_newrom.o -> bt_get_tx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_get_tx_gain(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                   int param_6,int param_7)

{
  char cVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int in_stack_00000000;
  char in_stack_00000004;
  char in_stack_00000008;
  char in_stack_0000000c;
  short local_46;
  undefined2 uStack_44;
  undefined2 auStack_42 [7];
  
  uVar2 = (uint)in_stack_00000004;
  iVar7 = 0;
  uVar9 = 0;
  do {
    cVar1 = *(char *)(param_1 + 1);
    iVar8 = (int)(((uVar2 & 0xffff) + (param_3 - param_2)) * 0x10000) >> 0x10;
    uVar9 = get_tx_gain_value(uVar9,cVar1 * -0x10000 >> 0x10,iVar8,&uStack_44,auStack_42,&local_46,
                              param_4,param_5);
    puVar4 = (undefined2 *)(param_7 + iVar7 * 2);
    *puVar4 = uStack_44;
    puVar3 = (undefined2 *)(iVar7 * 2 + in_stack_00000000);
    iVar5 = (int)local_46 - ((int)cVar1 & 0xffffU);
    sVar6 = (short)iVar5;
    *puVar3 = auStack_42[0];
    if (-0xc < iVar5 * 0x10000 >> 0x10) {
      sVar6 = -0xc;
    }
    if (sVar6 < -0x40) {
      sVar6 = -0x40;
    }
    *(char *)(param_6 + iVar7) = (char)sVar6;
    if (in_stack_0000000c != '\0') {
      ets_printf("%d,0x%x,0x%x,%d, %d, power=%d, %d\n",iVar7,*puVar4,*puVar3,(int)(short)uVar2,iVar8
                );
    }
    uVar2 = ((uint)((int)in_stack_00000008 << 0x12) >> 0x10) + (uVar2 & 0xffff);
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x10);
  return;
}

