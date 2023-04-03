/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_hw_freq.o -> pll_dac_mem_update
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pll_dac_mem_update(undefined4 param_1)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = get_freq_mem_param(2);
  uVar1 = (uVar3 >> 0x10 & 0xff) + 1;
  sVar2 = 0x55;
  do {
    sVar2 = sVar2 + -1;
    freq_i2c_mem_write_new(uVar1,param_1,1);
    uVar1 = uVar1 + (uVar3 >> 8 & 0xff) & 0xffff;
  } while (sVar2 != 0);
  iVar4 = chan_to_freq((short)phy_param);
  _DAT_600a00c0 = (iVar4 - 0x960U & 0x7f) << 7 | _DAT_600a00c0 & 0xffffc00f;
  return;
}

