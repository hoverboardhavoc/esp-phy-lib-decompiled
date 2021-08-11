/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> set_rf_freq_reg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_rf_freq_reg(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  
  i2c_writeReg_Mask(0x62,1,0xb,6,6,0);
  i2c_writeReg_Mask(0x62,1,2,7,7,0);
  rfpll_set_freq(param_2,param_1,param_3,param_4);
  write_rfpll_sdm(param_4);
  restart_cal();
  cVar1 = '\0';
  do {
    ets_delay_us(0x14);
    uVar2 = chip_i2c_readReg(0x62,1,7);
    if ((uVar2 & 2) != 0) {
      return;
    }
    if (cVar1 == 'c') {
      ets_printf("error: pll_cal exceeds 2ms!!!\n");
    }
    cVar1 = cVar1 + '\x01';
  } while (cVar1 != 'd');
  return;
}

