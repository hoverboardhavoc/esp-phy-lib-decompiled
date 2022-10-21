/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tx_gain.o -> ram_bt_get_tx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ram_bt_get_tx_gain(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                       undefined4 param_6,int param_7,int param_8)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  char in_stack_00000000;
  char in_stack_00000004;
  char in_stack_00000008;
  undefined1 uStack_45;
  short sStack_44;
  undefined1 auStack_42 [14];
  
  uVar2 = (uint)in_stack_00000000;
  iVar3 = 0;
  do {
    cVar1 = *(char *)(param_1 + 1);
    iVar6 = (int)(((uVar2 & 0xffff) + (param_3 - param_2)) * 0x10000) >> 0x10;
    ram_get_tx_gain_value(iVar6,&uStack_45,auStack_42,&sStack_44,param_4,param_5,param_6,0xe);
    *(undefined1 *)(param_8 + iVar3) = uStack_45;
    iVar5 = (int)sStack_44 - ((int)cVar1 & 0xffffU);
    sVar4 = (short)iVar5;
    if (0x18 < iVar5 * 0x10000 >> 0x10) {
      sVar4 = 0x18;
    }
    if (sVar4 < -0x40) {
      sVar4 = -0x40;
    }
    *(char *)(param_7 + iVar3) = (char)sVar4;
    if (in_stack_00000008 != '\0') {
      phy_printf("%d,0x%x,%d, %d, power=%d, %d\n",iVar3,*(undefined1 *)(param_8 + iVar3),
                 (int)(short)uVar2,iVar6);
    }
    uVar2 = ((uint)((int)in_stack_00000004 << 0x12) >> 0x10) + (uVar2 & 0xffff);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x10);
  return;
}

