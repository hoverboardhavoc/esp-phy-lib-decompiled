/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_hw_freq.o -> pll_cap_mem_update
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void pll_cap_mem_update(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  
  uVar2 = get_freq_mem_param(2);
  uVar1 = uVar2 >> 0x10 & 0xff;
  sVar5 = 0x55;
  do {
    uVar3 = read_rf_freq_mem_new(uVar1,2);
    uVar4 = (uVar3 >> 4 & 0x100 | uVar3 & 0xff) + param_1;
    sVar5 = sVar5 + -1;
    freq_i2c_mem_write_new(uVar1,uVar4 & 0xff | uVar3 & 0xef00 | ((int)(short)uVar4 >> 8) << 0xc,3);
    uVar1 = uVar1 + (uVar2 >> 8 & 0xff) & 0xffff;
  } while (sVar5 != 0);
  return;
}

