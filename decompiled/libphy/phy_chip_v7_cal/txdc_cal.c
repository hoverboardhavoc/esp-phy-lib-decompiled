/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> txdc_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txdc_cal(undefined2 *param_1)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  
  pbus_force_test(2,1,0x80);
  pbus_force_test(2,2,0x80);
  iVar2 = 0;
  iVar4 = 0;
  iVar6 = 0x3c;
  bVar7 = 0;
  uVar1 = 0x80;
  uVar5 = 0x80;
  do {
    uVar5 = uVar5 & 0xffff;
    pbus_force_test(2,1,uVar5);
    uVar1 = uVar1 & 0xffff;
    pbus_force_test(2,2,uVar1);
    ets_delay_us(2);
    _DAT_6000e04c = _DAT_6000e04c & 0xfffffffc | 3;
    ets_delay_us(2);
    do {
    } while (-1 < (int)(_DAT_6000e04c << 7));
    if ((int)(_DAT_6000e04c << 1) < 0) {
      sVar3 = (short)(uVar5 - iVar6);
      if ((int)((uVar5 - iVar6) * 0x10000) < 0) {
        sVar3 = 0;
      }
    }
    else {
      sVar3 = (short)(uVar5 + iVar6);
      if (0xff < (int)((uVar5 + iVar6) * 0x10000) >> 0x10) {
        sVar3 = 0xff;
      }
    }
    uVar5 = (uint)sVar3;
    if ((int)_DAT_6000e04c < 0) {
      sVar3 = (short)(uVar1 - iVar6);
      if ((int)((uVar1 - iVar6) * 0x10000) < 0) {
        sVar3 = 0;
      }
      uVar1 = (uint)sVar3;
    }
    else {
      uVar1 = (int)((uVar1 + iVar6) * 0x10000) >> 0x10;
      if (0x1ff < (int)uVar1) {
        uVar1 = 0xff;
      }
    }
    if (iVar6 == 2) {
      iVar6 = 1;
    }
    else {
      iVar6 = (iVar6 >> 1) + 1;
    }
    if (7 < bVar7) {
      iVar4 = (int)((iVar4 + uVar5) * 0x10000) >> 0x10;
      iVar2 = (int)((iVar2 + uVar1) * 0x10000) >> 0x10;
    }
    bVar7 = bVar7 + 1;
  } while (bVar7 != 0xc);
  uVar5 = iVar4 + 2 >> 2;
  uVar1 = iVar2 + 2 >> 2;
  pbus_force_test(2,1,uVar5 & 0xffff);
  pbus_force_test(2,2,uVar1 & 0xffff);
  *param_1 = (short)uVar5;
  param_1[1] = (short)uVar1;
  _DAT_6000e04c = _DAT_6000e04c & 0xfffffffc;
  return;
}

