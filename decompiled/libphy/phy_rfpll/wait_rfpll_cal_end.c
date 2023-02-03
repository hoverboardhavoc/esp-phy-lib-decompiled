/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_rfpll.o -> wait_rfpll_cal_end
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
    iVar2 = i2c_readReg_Mask(0x62,1,7,1,1);
    if (iVar2 != 0) {
      return;
    }
    if (cVar1 == 'c') {
      phy_printf("error: pll_cal exceeds 2ms!!!\n");
    }
    cVar1 = cVar1 + '\x01';
  } while (cVar1 != 'd');
  return;
}

