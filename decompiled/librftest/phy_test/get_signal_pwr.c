/*
 * Last changed at upstream commit a8e8b9532e2874ac167d4ade7808fda70fe05820
 * https://github.com/espressif/esp-phy-lib/commit/a8e8b9532e2874ac167d4ade7808fda70fe05820
 * Upstream date: 2023-11-01 14:13:34 +0800
 * Upstream subject: h2 libphy fix ble track
 * Source: librftest -> phy_test.o -> get_signal_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint get_signal_pwr(void)

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
    iVar6 = (_DAT_600a0478 >> 8) + (_DAT_600a0484 >> 8);
    iVar4 = (_DAT_600a0480 >> 8) - (_DAT_600a047c >> 8);
    uVar3 = iVar4 * iVar4 + iVar6 * iVar6;
    uVar5 = uVar2 + uVar3;
    iVar1 = iVar1 + (int)((ulonglong)((longlong)iVar6 * (longlong)iVar6) >> 0x20) +
                    (int)((ulonglong)((longlong)iVar4 * (longlong)iVar4) >> 0x20) +
                    (uint)(uVar3 < (uint)(iVar6 * iVar6)) + (uint)(uVar5 < uVar2);
    uVar2 = uVar5;
  } while (cVar7 != '\0');
  return uVar5 >> 10 | iVar1 * 0x400000;
}

