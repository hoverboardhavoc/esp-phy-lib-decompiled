/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_hw_freq.o -> pll_dac_mem_update
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void pll_dac_mem_update(undefined4 param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  
  uVar3 = get_freq_mem_param(2);
  cVar1 = '\0';
  do {
    uVar2 = get_freq_mem_addr(uVar3 >> 0x10 & 0xff,uVar3 >> 8 & 0xff,cVar1,1);
    cVar1 = cVar1 + '\x01';
    freq_i2c_mem_write_new(uVar2,param_1,1);
  } while (cVar1 != 'U');
  return;
}

