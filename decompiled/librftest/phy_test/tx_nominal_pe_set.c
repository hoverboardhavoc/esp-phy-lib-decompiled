/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> tx_nominal_pe_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_nominal_pe_set(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0x10) {
    param_2 = param_2 & 0x1f;
    _DAT_600a4c90 = _DAT_600a4c90 & 0xffffffe0;
  }
  else {
    if (0x12 < param_1) {
      if (param_1 < 0x15) {
        uVar1 = (param_2 & 0x1f) << 10;
        uVar2 = 0xffff83ff;
      }
      else {
        if (param_1 < 0x18) {
          uVar1 = (param_2 & 0x1f) << 0xf;
          iVar3 = -0xf8000;
        }
        else {
          if (0x19 < param_1) {
            return;
          }
          uVar1 = (param_2 & 0x1f) << 0x14;
          iVar3 = -0x1f00000;
        }
        uVar2 = iVar3 - 1;
      }
      _DAT_600a4c90 = uVar1 | _DAT_600a4c90 & uVar2;
      return;
    }
    param_2 = (param_2 & 0x1f) << 5;
    _DAT_600a4c90 = _DAT_600a4c90 & 0xfffffc1f;
  }
  _DAT_600a4c90 = param_2 | _DAT_600a4c90;
  return;
}

