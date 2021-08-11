/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> rfcal_txiq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint rfcal_txiq(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  char cVar12;
  char cVar13;
  uint uVar14;
  char acStack_a0 [32];
  ushort auStack_80 [38];
  
  txiq_set_reg(0,1);
  txiq_set_reg(0,0);
  pkdet_code_range();
  iVar11 = 8;
  if (param_1 == 0) {
    iVar11 = 0x10;
  }
  uVar9 = 0;
  uVar14 = 0;
  uVar2 = 0;
  cVar13 = '\x01';
  uVar7 = 0;
  while( true ) {
    iVar1 = 0;
    bVar10 = false;
    cVar12 = -1;
    uVar8 = 0xffff;
    while( true ) {
      pll_cap_cal();
      iVar4 = iVar1 + 0x10;
      cVar5 = '\0';
      do {
        txiq_set_reg((int)cVar5,uVar9 ^ 1);
        ets_delay_us(1);
        uVar3 = pkdet_code_range();
        if (uVar3 < uVar8) {
          uVar8 = uVar3;
          uVar14 = (int)cVar5;
        }
        auStack_80[iVar1] = (ushort)uVar3;
        acStack_a0[iVar1] = cVar5;
        iVar1 = (iVar1 + 1) * 0x1000000 >> 0x18;
      } while (((int)(uVar3 - uVar8) <= iVar11) &&
              (cVar5 = cVar5 + cVar13 * cVar12, iVar1 != iVar4 * 0x1000000 >> 0x18));
      cVar12 = '\x01';
      if (bVar10) break;
      bVar10 = true;
    }
    iVar4 = 0;
    iVar6 = 0;
    for (uVar3 = 1; (int)uVar3 < iVar1; uVar3 = uVar3 + 1 & 0xff) {
      if ((int)(auStack_80[uVar3] - uVar8) < 6) {
        iVar6 = (iVar6 + acStack_a0[uVar3]) * 0x10000 >> 0x10;
        iVar4 = (iVar4 + 1) * 0x10000 >> 0x10;
      }
    }
    if (1 < iVar4) {
      uVar14 = (uint)(char)(iVar6 / iVar4);
    }
    uVar8 = uVar14;
    if (uVar9 == 0) {
      uVar2 = uVar14;
      uVar8 = uVar7;
    }
    txiq_set_reg(uVar14,uVar9 ^ 1);
    cVar13 = '\x02';
    if (uVar9 == 1) break;
    uVar9 = 1;
    uVar7 = uVar8;
  }
  return uVar8 & 0x3f | (uVar2 & 0x1f) << 6;
}

