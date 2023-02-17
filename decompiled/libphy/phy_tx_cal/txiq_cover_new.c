/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
 * Source: libphy -> phy_tx_cal.o -> txiq_cover_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void txiq_cover_new(int param_1,undefined4 param_2,byte *param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  short sStack_58;
  short sStack_56;
  byte local_54 [32];
  
  uVar7 = (param_1 + -0xc) * 0x1000000 >> 0x18;
  uVar1 = 0;
  if (-1 < (int)uVar7) {
    uVar1 = uVar7;
  }
  pbVar10 = local_54;
  iVar12 = 0;
  iVar11 = 0;
  iVar2 = 0;
  iVar8 = 0;
  bVar9 = 0;
  do {
    iVar8 = txiq_set_reg(iVar8,1);
    iVar2 = txiq_set_reg(iVar2,0);
    txiq_get_mis_pwr(1,uVar1 & 0xff,param_2,&sStack_58,&sStack_56);
    cVar13 = bVar9 * '\x02';
    sVar6 = sStack_56;
    if ((int)sStack_58 < (int)sStack_56) {
      sVar6 = sStack_58;
    }
    iVar5 = (int)sVar6;
    if (iVar5 == 0) {
      iVar5 = 1;
    }
    iVar5 = (((int)sStack_56 - (int)sStack_58) * 0x800) / iVar5 + 0x10 >> 5;
    *param_3 = (byte)iVar5;
    if (param_5 != 0) {
      uVar3 = get_tone_sar_dout(1);
      phy_printf("sar_code=%d, pwr1=%d, pwr2=%d, diff_pwr=%d, mis_data[0]=%d\n",uVar3,(int)sStack_58
                 ,(int)sStack_56,iVar5,(int)(char)*param_3);
    }
    txiq_get_mis_pwr(0,param_1,param_2,&sStack_58,&sStack_56);
    iVar5 = ((int)sStack_58 + (int)sStack_56) * 0x10000 >> 0x10;
    if (iVar5 == 0) {
      iVar5 = 1;
    }
    iVar5 = (((int)sStack_58 - (int)sStack_56) * 0x1000) / iVar5 + 0x10 >> 5;
    param_3[1] = (byte)iVar5;
    if (param_5 != 0) {
      uVar3 = get_tone_sar_dout(1);
      phy_printf("sar_code=%d, pwr1=%d, pwr2=%d, diff_pwr=%d, mis_data[1]=%d\n",uVar3,(int)sStack_58
                 ,(int)sStack_56,iVar5,(int)(char)param_3[1]);
    }
    uVar7 = (uint)*param_3;
    iVar5 = (param_3[1] & 0x7f) * 2;
    if (bVar9 < 3) {
_L95:
      iVar8 = (int)((iVar8 - uVar7) * 0x1000000) >> 0x18;
      iVar2 = (iVar2 - iVar5) * 0x1000000 >> 0x18;
    }
    else {
      iVar4 = abs_temp();
      iVar11 = (int)((iVar11 + uVar7) * 0x1000000) >> 0x18;
      iVar12 = (iVar12 + iVar5) * 0x1000000 >> 0x18;
      if ((iVar4 < 2) && (iVar5 = abs_temp((int)(char)param_3[1]), iVar5 < 2)) break;
      if (bVar9 == 6) {
        uVar7 = iVar11 + 2 >> 2;
        iVar5 = iVar12 + 2 >> 2;
        goto _L95;
      }
    }
    cVar13 = cVar13 + '\x02';
    bVar9 = bVar9 + 1;
    *pbVar10 = *param_3;
    pbVar10[1] = param_3[1];
    pbVar10 = pbVar10 + 2;
  } while (bVar9 != 7);
  iVar11 = (int)cVar13;
  txiq_set_reg(iVar8,1);
  txiq_set_reg(iVar2,0);
  local_54[iVar11] = (byte)iVar8;
  local_54[iVar11 + 1] = (byte)iVar2;
  *param_3 = (byte)iVar8;
  param_3[1] = (byte)iVar2;
  if (param_4 != 0) {
    for (uVar1 = 0; uVar1 < (iVar11 + 2U & 0xff); uVar1 = uVar1 + 2 & 0xff) {
      phy_printf("%d,%d; ",(int)(char)local_54[uVar1],(int)(char)local_54[uVar1 + 1]);
    }
    phy_printf(&_LC4);
  }
  return;
}

