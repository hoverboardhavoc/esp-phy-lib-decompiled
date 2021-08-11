/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_newrom.o -> phy_xpd_rf
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_xpd_rf(void)

{
  undefined4 uVar1;
  
  uVar1 = enter_critical_phy();
  disable_agc();
  _DAT_6002600c = _DAT_6002600c & 0xfffffffd;
  pbus_debugmode();
  pbus_force_test(1,1,0);
  pbus_workmode();
  _DAT_60008034 = _DAT_60008034 & 0x27ffffff;
  _DAT_600061c0 = _DAT_600061c0 & 0xffff0000 | 0x5555;
  exit_critical_phy(uVar1);
  return;
}

