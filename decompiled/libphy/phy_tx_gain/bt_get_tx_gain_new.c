/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
 * Source: libphy -> phy_tx_gain.o -> bt_get_tx_gain_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bt_get_tx_gain_new(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                       undefined4 param_6,int param_7,int param_8)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  int in_stack_00000000;
  char in_stack_00000004;
  char in_stack_00000008;
  char in_stack_0000000c;
  short sStack_46;
  undefined2 uStack_44;
  undefined2 auStack_42 [7];
  
  uVar2 = (uint)in_stack_00000004;
  iVar4 = 0;
  uVar3 = 0;
  do {
    iVar5 = get_data_sat((int)(short)uVar2,0x50,0xffffffc4);
    cVar1 = *(char *)(param_1 + 1);
    iVar10 = ((param_3 - param_2) + iVar5) * 0x10000 >> 0x10;
    uVar3 = get_tx_gain_value(uVar3,iVar10,&uStack_44,auStack_42,&sStack_46,param_4,param_5,param_6)
    ;
    puVar7 = (undefined2 *)(in_stack_00000000 + iVar4 * 2);
    puVar6 = (undefined2 *)(iVar4 * 2 + param_8);
    *puVar7 = uStack_44;
    iVar8 = (int)sStack_46 - ((int)cVar1 & 0xffffU);
    sVar9 = (short)iVar8;
    *puVar6 = auStack_42[0];
    if (0x18 < iVar8 * 0x10000 >> 0x10) {
      sVar9 = 0x18;
    }
    if (sVar9 < -0x3c) {
      sVar9 = -0x3c;
    }
    *(char *)(param_7 + iVar4) = (char)sVar9;
    if (in_stack_0000000c != '\0') {
      phy_printf("%d,0x%x,0x%x,%d, %d, power=%d, %d\n",iVar4,*puVar7,*puVar6,(int)(short)iVar5,
                 iVar10);
    }
    iVar4 = iVar4 + 1;
    uVar2 = ((uint)((int)in_stack_00000008 << 0x12) >> 0x10) + (uVar2 & 0xffff);
  } while (iVar4 != 0x10);
  return;
}

