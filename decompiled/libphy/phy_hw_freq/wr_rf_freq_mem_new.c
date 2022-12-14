/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_hw_freq.o -> wr_rf_freq_mem_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wr_rf_freq_mem_new(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = get_freq_mem_param(2);
  uVar1 = uVar2 >> 8 & 0xff;
  uVar2 = uVar2 >> 0x10 & 0xff;
  get_freq_mem_addr(uVar2,uVar1,param_1,0);
  freq_i2c_mem_write_new(*param_2,7);
  iVar3 = get_freq_mem_addr(uVar2,uVar1,param_1,3);
  _DAT_600a00d0 = param_2[1] | 0x7000000;
  _DAT_600a00c0 = iVar3 << 4 | _DAT_600a00c0 & 0xffff400f | 0x8000;
  return;
}

