/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_tx_cal.o -> txiq_cover
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void txiq_cover(int param_1,undefined4 param_2,byte *param_3)

{
  int iVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short local_44;
  short asStack_42 [7];
  
  iVar5 = (param_1 + -0xc) * 0x10000 >> 0x10;
  iVar8 = 0;
  if (-1 < iVar5) {
    iVar8 = iVar5;
  }
  iVar10 = 0;
  iVar9 = 0;
  iVar5 = 0;
  iVar1 = 0;
  bVar7 = 0;
  do {
    iVar1 = txiq_set_reg(iVar1,1);
    iVar5 = txiq_set_reg(iVar5,0);
    txiq_get_mis_pwr(1,0x100U - iVar8 & 0xff,param_2,&local_44,asStack_42);
    sVar2 = asStack_42[0];
    if ((int)local_44 < (int)asStack_42[0]) {
      sVar2 = local_44;
    }
    iVar3 = (int)sVar2;
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    *param_3 = (byte)(((((int)asStack_42[0] - (int)local_44) * 0x800) / iVar3 + 0x10) * 0x80000 >>
                     0x19);
    txiq_get_mis_pwr(0,0x100U - param_1 & 0xff,param_2,&local_44,asStack_42);
    iVar3 = ((int)local_44 + (int)asStack_42[0]) * 0x10000 >> 0x10;
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    uVar4 = (uint)*param_3;
    uVar6 = (((int)local_44 - (int)asStack_42[0]) * 0x1000) / iVar3 + 0x10 >> 5;
    param_3[1] = (byte)uVar6;
    uVar6 = uVar6 & 0xff;
    if (bVar7 < 3) {
_L37:
      iVar1 = (int)((iVar1 - uVar4) * 0x1000000) >> 0x18;
      iVar5 = (int)((iVar5 - uVar6) * 0x1000000) >> 0x18;
    }
    else {
      iVar3 = abs_temp();
      iVar9 = (int)((iVar9 + uVar4) * 0x1000000) >> 0x18;
      iVar10 = (int)((iVar10 + uVar6) * 0x1000000) >> 0x18;
      if ((iVar3 < 2) && (iVar3 = abs_temp((int)(char)param_3[1]), iVar3 < 2)) break;
      if (bVar7 == 6) {
        uVar4 = iVar9 + 2 >> 2;
        uVar6 = iVar10 + 2 >> 2;
        goto _L37;
      }
    }
    bVar7 = bVar7 + 1;
  } while (bVar7 != 7);
  txiq_set_reg(iVar1,1);
  txiq_set_reg(iVar5,0);
  param_3[1] = (byte)iVar5;
  *param_3 = (byte)iVar1;
  return;
}

