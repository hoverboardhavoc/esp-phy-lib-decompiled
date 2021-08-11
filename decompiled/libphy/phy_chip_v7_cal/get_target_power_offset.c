/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> get_target_power_offset
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 get_target_power_offset(uint param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 auStack_28 [16];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = 0x2010101;
  uStack_14 = 0x5040302;
  if (param_1 < 8) {
    uVar1 = 0;
  }
  else if (param_1 < 0x10) {
    iVar2 = wifi_11g_rate_chg();
    uVar1 = *(undefined1 *)((int)&uStack_18 + iVar2);
  }
  else {
    uVar1 = 0;
    if (param_1 < 0x18) {
      uVar1 = auStack_28[param_1];
    }
  }
  return uVar1;
}

