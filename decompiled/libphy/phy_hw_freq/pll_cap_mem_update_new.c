/*
 * Last changed at upstream commit 3c715e60c63d59b1d8240de147d46d78d84a97bf
 * https://github.com/espressif/esp-phy-lib/commit/3c715e60c63d59b1d8240de147d46d78d84a97bf
 * Upstream date: 2023-01-16 19:19:06 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_hw_freq.o -> pll_cap_mem_update_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void pll_cap_mem_update_new(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  
  uVar1 = get_freq_mem_param(2);
  uVar5 = 0;
  do {
    uVar2 = get_freq_mem_addr(uVar1 >> 0x10 & 0xff,uVar1 >> 8 & 0xff,uVar5 & 0xff,0);
    uVar3 = read_rf_freq_mem_new(2);
    uVar4 = (uVar3 >> 4 & 0x100 | uVar3 & 0xff) + param_1;
    uVar5 = uVar5 + 1;
    freq_i2c_mem_write_new(uVar2,uVar4 & 0xff | uVar3 & 0xef00 | ((int)(short)uVar4 >> 8) << 0xc,3);
  } while (uVar5 != 0x55);
  return;
}

