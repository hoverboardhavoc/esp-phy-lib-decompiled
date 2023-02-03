/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_rfpll.o -> set_rfpll_freq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void set_rfpll_freq(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  
  i2c_writeReg_Mask(0x62,1,0xb,6,6,0);
  rfpll_set_freq(param_2,param_1,param_3,param_4);
  write_rfpll_sdm(param_4);
  restart_cal();
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

