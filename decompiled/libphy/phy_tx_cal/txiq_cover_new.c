/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
 * Source: libphy -> phy_tx_cal.o -> txiq_cover_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void txiq_cover_new(int param_1,undefined4 param_2,byte *param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte bVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  short sStack_58;
  short sStack_56;
  byte local_54 [32];
  
  uVar7 = (param_1 + -0xc) * 0x1000000 >> 0x18;
  uVar6 = 0;
  if (-1 < (int)uVar7) {
    uVar6 = uVar7;
  }
  pbVar9 = local_54;
  iVar13 = 0;
  iVar12 = 0;
  iVar2 = 0;
  iVar14 = 0;
  bVar10 = 0;
  pbVar11 = pbVar9;
  do {
    iVar14 = txiq_set_reg(iVar14,1);
    iVar2 = txiq_set_reg(iVar2,0);
    txiq_get_mis_pwr(1,uVar6 & 0xff,param_2,&sStack_58,&sStack_56);
    sVar5 = sStack_56;
    if ((int)sStack_58 < (int)sStack_56) {
      sVar5 = sStack_58;
    }
    iVar4 = (int)sVar5;
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    iVar4 = (((int)sStack_56 - (int)sStack_58) * 0x800) / iVar4 + 0x10 >> 5;
    *param_3 = (byte)iVar4;
    if (param_5 != 0) {
      uVar3 = get_tone_sar_dout(1);
      phy_printf("sar_code=%d, pwr1=%d, pwr2=%d, diff_pwr=%d, mis_data[0]=%d\n",uVar3,(int)sStack_58
                 ,(int)sStack_56,iVar4,(int)(char)*param_3);
    }
    txiq_get_mis_pwr(0,param_1,param_2,&sStack_58,&sStack_56);
    iVar4 = ((int)sStack_58 + (int)sStack_56) * 0x10000 >> 0x10;
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    iVar4 = (((int)sStack_58 - (int)sStack_56) * 0x1000) / iVar4 + 8 >> 4;
    param_3[1] = (byte)iVar4;
    if (param_5 != 0) {
      uVar3 = get_tone_sar_dout(1);
      phy_printf("sar_code=%d, pwr1=%d, pwr2=%d, diff_pwr=%d, mis_data[1]=%d\n",uVar3,(int)sStack_58
                 ,(int)sStack_56,iVar4,(int)(char)param_3[1]);
    }
    bVar1 = param_3[1];
    uVar7 = (uint)*param_3;
    uVar8 = (uint)bVar1;
    if (bVar10 < 3) {
_L121:
      iVar14 = (int)((iVar14 - uVar7) * 0x1000000) >> 0x18;
      iVar2 = (int)((iVar2 - uVar8) * 0x1000000) >> 0x18;
    }
    else {
      iVar12 = (int)((iVar12 + uVar7) * 0x1000000) >> 0x18;
      iVar13 = (int)((iVar13 + uVar8) * 0x1000000) >> 0x18;
      if (bVar10 == 6) {
        uVar7 = iVar12 + 2 >> 2;
        uVar8 = iVar13 + 2 >> 2;
        goto _L121;
      }
    }
    bVar10 = bVar10 + 1;
    *pbVar11 = *param_3;
    pbVar11[1] = bVar1;
    pbVar11 = pbVar11 + 2;
    if (bVar10 == 7) {
      txiq_set_reg(iVar14,1);
      txiq_set_reg(iVar2,0);
      *param_3 = (byte)iVar14;
      param_3[1] = (byte)iVar2;
      local_54[0xe] = (byte)iVar14;
      local_54[0xf] = (byte)iVar2;
      if (param_4 != 0) {
        for (; pbVar9 != local_54 + 0x10; pbVar9 = pbVar9 + 2) {
          phy_printf("%d,%d; ",(int)(char)*pbVar9,(int)(char)pbVar9[1]);
        }
        phy_printf(&_LC5);
      }
      return;
    }
  } while( true );
}

