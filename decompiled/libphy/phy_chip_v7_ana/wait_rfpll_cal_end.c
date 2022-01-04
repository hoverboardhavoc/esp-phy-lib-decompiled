/*
 * Last changed at upstream commit 4779ddaaf29e1d6aa2d26980103a1c1bbaa29462
 * https://github.com/espressif/esp-phy-lib/commit/4779ddaaf29e1d6aa2d26980103a1c1bbaa29462
 * Upstream date: 2022-01-04 15:41:20 +0800
 * Upstream subject: fix the bug that phy libs still have ets_printf
 * Source: libphy -> phy_chip_v7_ana.o -> wait_rfpll_cal_end
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void wait_rfpll_cal_end(void)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = '\0';
  do {
    ets_delay_us(0x14);
    uVar2 = chip_i2c_readReg(0x62,1,7);
    if ((uVar2 & 2) != 0) {
      return;
    }
    if (cVar1 == 'c') {
      phy_printf("error: pll_cal exceeds 2ms!!!\n");
    }
    cVar1 = cVar1 + '\x01';
  } while (cVar1 != 'd');
  return;
}

