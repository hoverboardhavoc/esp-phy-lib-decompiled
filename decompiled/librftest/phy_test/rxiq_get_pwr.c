/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> phy_test.o -> rxiq_get_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rxiq_get_pwr(uint param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  
  set_txclk_en(1);
  set_rxclk_en(1);
  cVar13 = ' ';
  iVar12 = 0;
  iVar11 = 0;
  uVar10 = param_1 - 2;
  uVar1 = 0;
  uVar9 = 0;
  do {
    iq_est_enable(1,1 << (param_1 & 0x1f) & 0xffff);
    iVar8 = _DAT_600a0478 >> (uVar10 & 0x1f);
    iVar2 = _DAT_600a0484 >> (uVar10 & 0x1f);
    iVar4 = _DAT_600a0480 >> (uVar10 & 0x1f);
    iVar6 = iVar8 - iVar2;
    iVar8 = iVar8 + iVar2;
    iVar7 = _DAT_600a047c >> (uVar10 & 0x1f);
    iVar2 = iVar4 + iVar7;
    iVar7 = iVar7 - iVar4;
    cVar13 = cVar13 + -1;
    uVar3 = iVar7 * iVar7 + iVar8 * iVar8;
    uVar5 = uVar9 + uVar3;
    iVar12 = iVar12 + (int)((ulonglong)((longlong)iVar8 * (longlong)iVar8) >> 0x20) +
                      (int)((ulonglong)((longlong)iVar7 * (longlong)iVar7) >> 0x20) +
                      (uint)(uVar3 < (uint)(iVar8 * iVar8)) + (uint)(uVar5 < uVar9);
    uVar9 = iVar2 * iVar2 + iVar6 * iVar6;
    uVar3 = uVar9 + uVar1;
    iVar11 = (uint)(uVar3 < uVar1) +
             (uint)(uVar9 < (uint)(iVar6 * iVar6)) +
             (int)((ulonglong)((longlong)iVar6 * (longlong)iVar6) >> 0x20) +
             (int)((ulonglong)((longlong)iVar2 * (longlong)iVar2) >> 0x20) + iVar11;
    iq_est_disable();
    uVar1 = uVar3;
    uVar9 = uVar5;
  } while (cVar13 != '\0');
  param_2[2] = uVar3 >> 5 | iVar11 * 0x8000000;
  *param_2 = uVar5 >> 5 | iVar12 * 0x8000000;
  param_2[1] = iVar12 >> 5;
  param_2[3] = iVar11 >> 5;
  return;
}

