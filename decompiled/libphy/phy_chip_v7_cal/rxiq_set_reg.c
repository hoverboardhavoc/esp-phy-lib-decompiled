/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> rxiq_set_reg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rxiq_set_reg(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    iVar1 = 0x1f;
    if ((int)param_1 < 0x20) {
_L76:
      if ((int)param_1 < -iVar1) {
        param_1 = iVar1 * -0x1000000 >> 0x18;
      }
      if (param_2 != 0) goto _L75;
    }
    else {
      param_1 = 0x1f;
    }
    uVar2 = (param_1 & 0x3f) << 0x15;
    iVar1 = -0x7e00000;
  }
  else {
    iVar1 = 0xf;
    if ((int)param_1 < 0x10) goto _L76;
    param_1 = 0xf;
_L75:
    uVar2 = (param_1 & 0x1f) << 0x10;
    iVar1 = -0x1f0000;
  }
  _DAT_6000607c = uVar2 | _DAT_6000607c & iVar1 - 1U;
  return;
}

