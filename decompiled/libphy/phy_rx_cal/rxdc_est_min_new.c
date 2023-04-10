/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
 * Source: libphy -> phy_rx_cal.o -> rxdc_est_min_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rxdc_est_min_new(undefined4 param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar2 = 100;
  bVar1 = 0;
  do {
    dc_iq_est(1,param_1,&uStack_2c);
    if ((iStack_24 < iVar2) || (bVar1 == 0)) {
      param_2[2] = iStack_24;
      *param_2 = uStack_2c;
      param_2[1] = uStack_28;
      iVar2 = iStack_24;
    }
  } while (((0x2f < iVar2) || ((bVar1 < 2 && (0x23 < iVar2)))) && (bVar1 = bVar1 + 1, bVar1 != 4));
  return;
}

