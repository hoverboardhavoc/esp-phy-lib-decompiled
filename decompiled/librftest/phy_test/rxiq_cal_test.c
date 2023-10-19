/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> phy_test.o -> rxiq_cal_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint rxiq_cal_test(undefined1 *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  char cVar15;
  int iVar16;
  char local_a4 [20];
  uint local_90 [23];
  
  set_txclk_en(1);
  set_rxclk_en(1);
  iVar11 = 0;
  uVar2 = 0;
  iVar10 = 0;
  iVar3 = 0;
_L53:
  puVar12 = local_90;
  iVar8 = 0;
  puVar7 = puVar12;
  do {
    *puVar7 = 0;
    local_a4[iVar8] = '\0';
    iVar8 = iVar8 + 1;
    puVar7 = puVar7 + 1;
  } while (iVar8 != 0x14);
  uVar13 = 0;
  bVar1 = false;
  iVar8 = iVar3;
  do {
    cVar15 = '\0';
    iVar14 = iVar3;
    do {
      cVar9 = cVar15;
      if (bVar1) {
        cVar9 = -cVar15;
      }
      iVar16 = (int)cVar9;
      iVar3 = iVar16;
      if (iVar11 != 0) {
        iVar3 = iVar14;
        iVar10 = iVar16;
      }
      force_iq_set(1,0,iVar3,iVar10);
      ets_delay_us(1);
      uVar4 = get_rxiq_pwr(0x20);
      if (param_2 != 0) {
        phy_printf("%d,%d,%d,%d,%d\n",iVar11,iVar16,iVar8,uVar4,uVar2);
      }
      if (bVar1) {
        if (uVar4 < uVar2) {
          uVar2 = uVar4;
          iVar8 = iVar16;
        }
        if (cVar15 != '\0') goto _L73;
      }
      else if (cVar15 == '\0') {
        iVar8 = 0;
        uVar2 = uVar4;
      }
      else {
        if (uVar4 < uVar2) {
          uVar2 = uVar4;
          iVar8 = iVar16;
        }
_L73:
        iVar14 = abs_temp(uVar4 - uVar2);
        if (10000 < iVar14) break;
      }
      local_a4[uVar13] = cVar9;
      local_90[uVar13] = uVar4;
      uVar13 = uVar13 + 1 & 0xff;
      if (0x13 < uVar13) {
        uVar13 = 0;
      }
      cVar15 = cVar15 + '\x02';
      iVar14 = iVar3;
    } while (cVar15 != ' ');
    if (bVar1) break;
    bVar1 = true;
  } while( true );
  iVar16 = 0;
  iVar8 = 0;
  iVar14 = 0;
  do {
    if (*puVar12 != 0) {
      iVar6 = *puVar12 - uVar2;
      iVar5 = abs_temp(iVar6);
      if (iVar5 < 0x7d1) {
        iVar14 = (local_a4[iVar16] + iVar14) * 0x10000 >> 0x10;
        if (param_2 != 0) {
          phy_printf("%d,%d,%d\n",iVar8,iVar6);
        }
        iVar8 = (iVar8 + 1) * 0x10000 >> 0x10;
      }
    }
    iVar16 = iVar16 + 1;
    puVar12 = puVar12 + 1;
  } while (iVar16 != 0x14);
  cVar15 = (char)(iVar14 / iVar8);
  iVar8 = (int)cVar15;
  if (iVar11 != 0) {
    force_iq_set(1,0,iVar3,iVar8);
    *param_1 = (char)iVar3;
    param_1[1] = cVar15;
    if (param_2 != 0) {
      phy_printf("%d,%d\n",iVar3,iVar8);
    }
    return uVar2;
  }
  iVar11 = 1;
  iVar3 = iVar8;
  goto _L53;
}

