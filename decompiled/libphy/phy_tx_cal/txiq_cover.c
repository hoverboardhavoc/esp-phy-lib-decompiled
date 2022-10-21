/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tx_cal.o -> txiq_cover
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txiq_cover(int param_1,undefined4 param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  short local_44;
  short asStack_42 [7];
  
  uVar5 = (param_1 + -0xc) * 0x1000000 >> 0x18;
  uVar8 = 0;
  if (-1 < (int)uVar5) {
    uVar8 = uVar5 & 0xff;
  }
  iVar10 = 0;
  iVar9 = 0;
  iVar1 = 0;
  iVar2 = 0;
  bVar7 = 0;
  do {
    iVar2 = txiq_set_reg(iVar2,1);
    iVar1 = txiq_set_reg(iVar1,0);
    txiq_get_mis_pwr(1,uVar8,param_2,&local_44,asStack_42);
    sVar3 = asStack_42[0];
    if ((int)local_44 < (int)asStack_42[0]) {
      sVar3 = local_44;
    }
    iVar4 = (int)sVar3;
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    *param_3 = (byte)((((int)asStack_42[0] - (int)local_44) * 0x800) / iVar4 + 0x10 >> 5);
    txiq_get_mis_pwr(0,param_1,param_2,&local_44,asStack_42);
    iVar4 = ((int)local_44 + (int)asStack_42[0]) * 0x10000 >> 0x10;
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    uVar5 = (uint)*param_3;
    uVar6 = (((int)local_44 - (int)asStack_42[0]) * 0x1000) / iVar4 + 0x10 >> 5;
    param_3[1] = (byte)uVar6;
    uVar6 = uVar6 & 0xff;
    if (bVar7 < 3) {
_L56:
      iVar2 = (int)((iVar2 - uVar5) * 0x1000000) >> 0x18;
      iVar1 = (int)((iVar1 - uVar6) * 0x1000000) >> 0x18;
    }
    else {
      iVar9 = (int)((iVar9 + uVar5) * 0x1000000) >> 0x18;
      iVar4 = (**(code **)(_g_phyFuns + 0x100))(*(code **)(_g_phyFuns + 0x100));
      iVar10 = (int)((iVar10 + uVar6) * 0x1000000) >> 0x18;
      if ((iVar4 < 2) &&
         (iVar4 = (**(code **)(_g_phyFuns + 0x100))
                            ((int)(char)param_3[1],*(code **)(_g_phyFuns + 0x100)), iVar4 < 2))
      break;
      if (bVar7 == 6) {
        uVar5 = iVar9 + 2 >> 2;
        uVar6 = iVar10 + 2 >> 2;
        goto _L56;
      }
    }
    bVar7 = bVar7 + 1;
  } while (bVar7 != 7);
  txiq_set_reg(iVar2,1);
  txiq_set_reg(iVar1,0);
  param_3[1] = (byte)iVar1;
  *param_3 = (byte)iVar2;
  return;
}

