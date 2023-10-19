/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> phy_test.o -> phy_corr_pwr_sum
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint phy_corr_pwr_sum(undefined4 param_1)

{
  char cVar1;
  uint unaff_s1;
  uint uVar2;
  
  cVar1 = '\0';
  start_tx_tone_step(1,param_1,0,0,0,0);
  do {
    iq_est_enable(1,0xfff);
    uVar2 = phy_corr_get_pwr();
    if ((cVar1 == '\0') || (uVar2 < unaff_s1)) {
      unaff_s1 = uVar2;
    }
    cVar1 = cVar1 + '\x01';
    iq_est_disable();
  } while (cVar1 != '\b');
  start_tx_tone_step(0,param_1,0,0,0,0);
  return unaff_s1 >> 2;
}

