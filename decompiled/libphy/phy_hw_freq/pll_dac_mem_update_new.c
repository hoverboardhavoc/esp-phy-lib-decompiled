/*
 * Last changed at upstream commit 3c715e60c63d59b1d8240de147d46d78d84a97bf
 * https://github.com/espressif/esp-phy-lib/commit/3c715e60c63d59b1d8240de147d46d78d84a97bf
 * Upstream date: 2023-01-16 19:19:06 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_hw_freq.o -> pll_dac_mem_update_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void pll_dac_mem_update_new(undefined4 param_1)

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

