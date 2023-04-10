/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
 * Source: libphy -> phy_tx_cal.o -> txdc_cal_pwdet
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void txdc_cal_pwdet(ushort *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  short sVar8;
  ushort *puVar9;
  int iVar10;
  ushort *puVar11;
  ushort *puVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uStack_134;
  byte local_114 [4];
  ushort local_110 [110];
  
  local_110[0] = *param_1;
  local_110[1] = param_1[1];
  local_110[2] = 0x100;
  local_110[3] = 0x100;
  uStack_134 = 0xffff;
  puVar11 = param_1;
  puVar12 = local_110;
  iVar13 = 0;
_L2:
  iVar14 = 2;
  uVar3 = 10;
  uVar2 = 10;
  do {
    *puVar12 = *puVar11 + (short)uVar3;
    pbus_set_dco(local_110);
    ets_delay_us(10);
    uVar4 = get_tone_sar_dout(2);
    *puVar12 = *puVar11 - (short)uVar2;
    pbus_set_dco(local_110);
    ets_delay_us(10);
    uVar5 = get_tone_sar_dout(2);
    if (uVar5 + 0x14 < uVar4) {
      uVar3 = uVar3 - 5 & 0xff;
    }
    else {
      if (uVar5 <= uVar4 + 0x14) break;
      uVar2 = uVar2 - 5 & 0xff;
    }
    if (iVar14 == 1) break;
    iVar14 = 1;
  } while( true );
  pbVar15 = local_114;
  iVar14 = 0;
  uVar4 = 0;
  while( true ) {
    uVar18 = 0;
    uVar5 = uStack_134;
    do {
      sVar8 = (short)uVar3 + (short)uVar18;
      if (iVar14 != 0) {
        sVar8 = -((short)uVar2 + (short)uVar18);
      }
      local_110[iVar13] = sVar8 + *puVar11;
      pbus_set_dco(local_110);
      ets_delay_us(10);
      uVar6 = get_tone_sar_dout(2);
      local_110[uVar4 + 4] = (ushort)uVar6;
      uVar4 = uVar4 + 1 & 0xff;
      if (uVar6 < uVar5) {
        uVar5 = uVar6;
      }
      *pbVar15 = (byte)uVar18;
      if (param_2 != 0) {
        phy_printf("%d,%d,%d, dco %d,%d, code %d,%d\n",iVar13,iVar14,uVar18,local_110[0],
                   local_110[1],uVar6,uVar5);
      }
    } while (((uVar18 < 6) || (uVar6 <= uVar5 + 0x1e)) && (uVar18 = uVar18 + 1, uVar18 != 0x32));
    pbVar15 = pbVar15 + 1;
    if (iVar14 != 0) break;
    iVar14 = 1;
  }
  uVar18 = (uint)local_114[0];
  puVar9 = local_110 + 4;
  for (uVar5 = 0; (uVar5 & 0xff) < uVar4; uVar5 = uVar5 + 1) {
    if (((uVar5 & 0xff) == 0) || (uVar18 + 1 == uVar5)) {
      uVar7 = puVar9[1];
      if (uVar7 < *puVar9) goto _L46;
    }
    else {
      uVar7 = puVar9[-1];
      if (*puVar9 < uVar7) {
_L46:
        *puVar9 = uVar7;
      }
    }
    puVar9 = puVar9 + 1;
  }
  uVar16 = (uint)local_110[uVar18 + 5];
  uVar5 = (uint)local_110[4];
  uVar6 = abs_temp(uVar5 - uVar16);
  if ((uVar6 & 0xffff) < 0x14) {
    uVar6 = 0x14;
  }
  if (uVar16 < uVar5) {
    uVar5 = uVar16;
  }
  iVar17 = (int)((*puVar11 + uVar3) * 0x10000) >> 0x10;
  iVar19 = (int)((*puVar11 - uVar2) * 0x10000) >> 0x10;
  for (uVar16 = 0; (uVar16 & 0xff) < uVar4; uVar16 = uVar16 + 1) {
    iVar10 = iVar19;
    if ((uint)local_110[uVar16 + 4] <= (uVar6 & 0xff) + uVar5) {
      iVar10 = (int)(((((uint)*puVar11 + uVar18 + 1) - uVar2) - (uVar16 & 0xffff)) * 0x10000) >>
               0x10;
      if ((uVar16 & 0xff) <= uVar18) {
        iVar17 = (int)((*puVar11 + uVar3 + (uVar16 & 0xffff)) * 0x10000) >> 0x10;
        iVar10 = iVar19;
      }
      if (param_2 != 0) {
        phy_printf("%d,%d,%d, %d,%d, %d, %d,%d, %d,%d\n",uVar16,uVar4,uVar18,iVar17);
      }
    }
    iVar19 = iVar10;
  }
  local_110[iVar13] = (ushort)((uint)(((iVar17 + iVar19 + 1) / 2 + 1) * 0x10000) >> 0x10);
  if (param_2 != 0) {
    phy_printf("%d,%d,%d\n",local_110[0],local_110[1]);
  }
  puVar11 = puVar11 + 1;
  puVar12 = puVar12 + 1;
  bVar1 = iVar13 == 1;
  iVar13 = iVar14;
  if (bVar1) {
    *param_1 = local_110[0];
    param_1[1] = local_110[1];
    pbus_set_dco(local_110);
    return;
  }
  goto _L2;
}

