/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_newrom.o -> get_tx_gain_value
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_tx_gain_value(uint param_1,int param_2,uint param_3,undefined2 *param_4,undefined2 *param_5
                      ,short *param_6,int param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  short *psVar3;
  int in_stack_00000000;
  byte in_stack_00000004;
  char in_stack_00000008;
  
  uVar2 = 0;
  while( true ) {
    psVar3 = (short *)(param_1 * 2 + in_stack_00000000);
    if (uVar2 == in_stack_00000004) break;
    if ((int)param_3 < (int)*psVar3) {
      if ((param_1 == in_stack_00000004 - 1) ||
         (param_1 = param_1 + 1 & 0xff, (int)psVar3[1] <= (int)param_3)) break;
    }
    else {
      if ((param_1 == 0) || ((int)param_3 < (int)psVar3[-1])) break;
      param_1 = param_1 - 1 & 0xff;
    }
    uVar2 = uVar2 + 1 & 0xff;
  }
  iVar1 = ((param_3 & 0xffff) - (uint)*(ushort *)(param_1 * 2 + in_stack_00000000)) * 0x10000;
  *param_6 = (short)((uint)iVar1 >> 0x10);
  if (((int)in_stack_00000008 < (iVar1 >> 0x10) + param_2) && (param_1 != 0)) {
    param_1 = param_1 - 1 & 0xff;
  }
  iVar1 = param_1 * 2;
  *param_6 = (short)param_3 - *(short *)(in_stack_00000000 + iVar1);
  *param_4 = *(undefined2 *)(param_7 + iVar1);
  *param_5 = *(undefined2 *)(param_8 + iVar1);
  return;
}

