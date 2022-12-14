/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_hw_freq.o -> pll_cap_mem_update
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void pll_cap_mem_update(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  
  uVar2 = get_freq_mem_param(2);
  cVar5 = '\0';
  do {
    uVar1 = get_freq_mem_addr(uVar2 >> 0x10 & 0xff,uVar2 >> 8 & 0xff,cVar5,0);
    uVar3 = read_rf_freq_mem(uVar1,2);
    uVar4 = (uVar3 >> 4 & 0x100 | uVar3 & 0xff) + param_1;
    cVar5 = cVar5 + '\x01';
    freq_i2c_mem_write_new(uVar1,uVar4 & 0xff | uVar3 & 0xef00 | ((int)(short)uVar4 >> 8) << 0xc,3);
  } while (cVar5 != 'U');
  return;
}

