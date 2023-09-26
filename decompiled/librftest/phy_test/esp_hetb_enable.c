/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> esp_hetb_enable
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void esp_hetb_enable(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    _DAT_600a4c54 = 0x2ea9d800;
    _DAT_600a4c58 = 0xbd2356d;
    _DAT_600a4038 = 0x3fe800;
    _DAT_600a4004 = 0x80000000;
    _DAT_600a4000 = 0;
    iVar1 = -0x17fef000;
  }
  else {
    _DAT_600a4c54 = 0x1409d800;
    _DAT_600a4c58 = 0xbd234a0;
    _DAT_600a4038 = 0x3fe801;
    _DAT_600a4004 = 0x80016666;
    _DAT_600a4000 = 0x66666666;
    iVar1 = 0x28011000;
  }
  _DAT_600a4c80 = iVar1 + -0x380;
  return;
}

