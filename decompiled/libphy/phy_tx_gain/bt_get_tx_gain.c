/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
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
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined2 *in_stack_00000000;
  char in_stack_00000004;
  char in_stack_00000008;
  char in_stack_0000000c;
  short sStack_46;
  undefined2 uStack_44;
  undefined2 auStack_42 [7];
  
  uVar7 = (uint)in_stack_00000004;
  iVar3 = 0;
  uVar2 = 0;
  do {
    iVar4 = get_data_sat((int)(short)uVar7,0x50,0xffffffa0);
    cVar1 = *(char *)(param_1 + 1);
    iVar8 = ((param_3 - param_2) + iVar4) * 0x10000 >> 0x10;
    uVar2 = get_tx_gain_value(uVar2,iVar8,&uStack_44,auStack_42,&sStack_46,param_4,param_5,param_6);
    uVar6 = (int)sStack_46 / 4 + (int)cVar1 & 0xffff;
    if (0xe < uVar6) {
      uVar6 = uVar6 + 1 & 0xffff;
    }
    puVar5 = (undefined2 *)(param_8 + iVar3 * 2);
    *in_stack_00000000 = uStack_44;
    *puVar5 = auStack_42[0];
    if (0x17 < uVar6) {
      uVar6 = 0x17;
    }
    if (uVar6 < 9) {
      uVar6 = 9;
    }
    *(short *)(iVar3 * 2 + param_7) = (short)uVar6;
    if (in_stack_0000000c != '\0') {
      phy_printf("%d,0x%x,0x%x,0x%x, %d, power=%d, %d\n",iVar3,*in_stack_00000000,*puVar5,uVar6,
                 (int)(short)iVar4,iVar8);
    }
    iVar3 = iVar3 + 1;
    in_stack_00000000 = in_stack_00000000 + 1;
    uVar7 = ((uint)((int)in_stack_00000008 << 0x12) >> 0x10) + (uVar7 & 0xffff);
  } while (iVar3 != 0x10);
  return;
}

