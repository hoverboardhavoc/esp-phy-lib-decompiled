/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_hw_freq.o -> pll_dac_mem_update
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void pll_dac_mem_update(undefined4 param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  
  uVar3 = get_freq_mem_param(2);
  uVar1 = (uVar3 >> 0x10 & 0xff) + 1;
  cVar2 = 'U';
  do {
    cVar2 = cVar2 + -1;
    freq_i2c_mem_write_new(uVar1 & 0xff,param_1,1);
    uVar1 = uVar1 + (uVar3 >> 8 & 0xff) & 0xffff;
  } while (cVar2 != '\0');
  return;
}

