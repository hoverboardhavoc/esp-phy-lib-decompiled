/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
 * Source: libphy -> phy_chip_v7_ana.o -> pbus_xpd_tx_on
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void pbus_xpd_tx_on(void)

{
  undefined4 uVar1;
  undefined4 auStack_14 [3];
  
  uVar1 = 0x1f;
  if (chip_lp_en == '\0') {
    uVar1 = 0xf;
  }
  auStack_14[0] = 0x800080;
  pbus_set_dco(auStack_14);
  pbus_force_test(0,1,0xc);
  pbus_force_test(1,1,0x86);
  pbus_force_test(1,2,0);
  pbus_force_test(3,1,0x7f);
  pbus_force_test(3,2,uVar1);
  return;
}

