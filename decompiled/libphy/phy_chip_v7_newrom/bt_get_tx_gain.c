/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
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
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  undefined4 uVar10;
  int in_stack_00000000;
  char in_stack_00000004;
  char in_stack_00000008;
  char in_stack_0000000c;
  short local_46;
  undefined2 uStack_44;
  undefined2 auStack_42 [7];
  
  uVar4 = 0x10;
  if (chip_lp_en == '\x01') {
    uVar4 = 0xd;
  }
  uVar2 = (uint)in_stack_00000004;
  uVar3 = 0;
  uVar10 = 0;
  do {
    cVar1 = *(char *)(param_1 + 1);
    iVar9 = (int)(((uVar2 & 0xffff) + (param_3 - param_2)) * 0x10000) >> 0x10;
    uVar10 = get_tx_gain_value(uVar10,cVar1 * -0x10000 >> 0x10,iVar9,&uStack_44,auStack_42,&local_46
                               ,param_4,param_5);
    puVar6 = (undefined2 *)(param_7 + uVar3 * 2);
    *puVar6 = uStack_44;
    puVar5 = (undefined2 *)(uVar3 * 2 + in_stack_00000000);
    iVar7 = (int)local_46 - ((int)cVar1 & 0xffffU);
    sVar8 = (short)iVar7;
    *puVar5 = auStack_42[0];
    if (-0xc < iVar7 * 0x10000 >> 0x10) {
      sVar8 = -0xc;
    }
    if (sVar8 < -0x40) {
      sVar8 = -0x40;
    }
    *(char *)(param_6 + uVar3) = (char)sVar8;
    if (in_stack_0000000c != '\0') {
      ets_printf("%d,0x%x,0x%x,%d, %d, power=%d, %d,%d\n",uVar3,*puVar6,*puVar5,(int)(short)uVar2,
                 iVar9);
    }
    uVar3 = uVar3 + 1;
    uVar2 = ((uint)((int)in_stack_00000008 << 0x12) >> 0x10) + (uVar2 & 0xffff);
  } while ((uVar3 & 0xff) < uVar4);
  return;
}

