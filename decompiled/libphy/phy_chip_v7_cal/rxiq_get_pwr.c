/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> rxiq_get_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rxiq_get_pwr(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  
  set_txclk_en(1);
  set_rxclk_en(1);
  cVar8 = ' ';
  iVar7 = 0;
  uVar2 = param_1 - 2;
  uVar1 = 0;
  do {
    iq_est_enable(1,1 << (param_1 & 0x1f) & 0xffff);
    cVar8 = cVar8 + -1;
    iVar6 = (_DAT_60006148 >> (uVar2 & 0x1f)) - (_DAT_60006154 >> (uVar2 & 0x1f));
    iVar4 = (_DAT_60006150 >> (uVar2 & 0x1f)) + (_DAT_6000614c >> (uVar2 & 0x1f));
    uVar3 = iVar4 * iVar4 + iVar6 * iVar6;
    uVar5 = uVar1 + uVar3;
    iVar7 = (uint)(uVar5 < uVar1) +
            (int)((ulonglong)((longlong)iVar6 * (longlong)iVar6) >> 0x20) +
            (int)((ulonglong)((longlong)iVar4 * (longlong)iVar4) >> 0x20) +
            (uint)(uVar3 < (uint)(iVar6 * iVar6)) + iVar7;
    iq_est_disable();
    uVar1 = uVar5;
  } while (cVar8 != '\0');
  *param_2 = 0;
  param_2[2] = uVar5 >> 5 | iVar7 * 0x8000000;
  param_2[1] = 0;
  param_2[3] = iVar7 >> 5;
  return;
}

