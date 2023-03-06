/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_tx_gain.o -> bt_get_tx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_get_tx_gain(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                   undefined4 param_6,int param_7,int param_8)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int in_stack_00000000;
  char in_stack_00000004;
  char in_stack_00000008;
  char in_stack_0000000c;
  short sStack_46;
  undefined2 uStack_44;
  undefined2 auStack_42 [7];
  
  uVar6 = (uint)in_stack_00000004;
  uVar3 = 0;
  uVar2 = 0;
  do {
    uVar7 = uVar6 & 0xffff;
    if (0xd < uVar3) {
      uVar7 = uVar3 * 4 + 8 & 0xffff;
    }
    cVar1 = *(char *)(param_1 + 1);
    iVar8 = (int)((uVar7 + (param_3 - param_2)) * 0x10000) >> 0x10;
    uVar2 = get_tx_gain_value(uVar2,iVar8,&uStack_44,auStack_42,&sStack_46,param_4,param_5,param_6);
    uVar5 = (int)sStack_46 / 4 + (int)cVar1 & 0xffff;
    if (0xe < uVar5) {
      uVar5 = uVar5 + 1 & 0xffff;
    }
    iVar4 = uVar3 * 2;
    *(undefined2 *)(in_stack_00000000 + iVar4) = uStack_44;
    *(undefined2 *)(param_8 + iVar4) = auStack_42[0];
    if (0x13 < uVar5) {
      uVar5 = 0x13;
    }
    if (uVar5 < 9) {
      uVar5 = 9;
    }
    *(short *)(iVar4 + param_7) = (short)uVar5;
    if (in_stack_0000000c != '\0') {
      phy_printf("%d,0x%x,0x%x,0x%x, %d, power=%d, %d\n",uVar3,
                 *(undefined2 *)(in_stack_00000000 + iVar4),*(undefined2 *)(param_8 + iVar4),uVar5,
                 (int)(short)uVar7,iVar8);
    }
    uVar3 = uVar3 + 1;
    uVar6 = ((uint)((int)in_stack_00000008 << 0x12) >> 0x10) + (uVar6 & 0xffff);
  } while (uVar3 != 0x14);
  return;
}

