/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_ana.o -> wait_rfpll_cal_end
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void wait_rfpll_cal_end(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = '\0';
  do {
    ets_delay_us(0x14);
    iVar2 = chip_i2c_readReg(0x62,1,7);
    if (iVar2 >> 7 != 0) {
      return;
    }
    if (cVar1 == 'c') {
      ets_printf("error: pll_cal exceeds 2ms!!!\n");
    }
    cVar1 = cVar1 + '\x01';
  } while (cVar1 != 'd');
  return;
}

