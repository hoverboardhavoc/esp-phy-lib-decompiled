/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> pbus_xpd_tx_on
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void pbus_xpd_tx_on(void)

{
  undefined4 auStack_14 [4];
  
  auStack_14[0] = 0x800080;
  pbus_set_dco(auStack_14);
  pbus_force_test(0,1,0xc);
  pbus_force_test(1,1,0x86);
  pbus_force_test(1,2,0);
  pbus_force_test(3,1,0x7f);
  pbus_force_test(3,2,0xf);
  return;
}

