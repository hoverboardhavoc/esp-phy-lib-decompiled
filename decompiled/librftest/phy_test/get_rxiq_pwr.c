/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> phy_test.o -> get_rxiq_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint get_rxiq_pwr(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  
  cVar7 = ' ';
  iVar1 = 0;
  uVar2 = 0;
  do {
    iq_est_disable();
    iq_est_enable(1,0x400);
    cVar7 = cVar7 + -1;
    iVar6 = (_DAT_600a0478 >> 8) - (_DAT_600a0484 >> 8);
    iVar4 = (_DAT_600a0480 >> 8) + (_DAT_600a047c >> 8);
    uVar3 = iVar4 * iVar4 + iVar6 * iVar6;
    uVar5 = uVar2 + uVar3;
    iVar1 = iVar1 + (int)((ulonglong)((longlong)iVar6 * (longlong)iVar6) >> 0x20) +
                    (int)((ulonglong)((longlong)iVar4 * (longlong)iVar4) >> 0x20) +
                    (uint)(uVar3 < (uint)(iVar6 * iVar6)) + (uint)(uVar5 < uVar2);
    uVar2 = uVar5;
  } while (cVar7 != '\0');
  return uVar5 >> 5 | iVar1 * 0x8000000;
}

