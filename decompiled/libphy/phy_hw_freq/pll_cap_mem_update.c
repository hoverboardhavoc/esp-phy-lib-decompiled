/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_hw_freq.o -> pll_cap_mem_update
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pll_cap_mem_update(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  
  uVar2 = get_freq_mem_param(2);
  uVar1 = uVar2 >> 0x10 & 0xff;
  sVar6 = 0x55;
  do {
    uVar3 = read_rf_freq_mem_new(uVar1,2);
    uVar5 = (uVar3 >> 4 & 0x100 | uVar3 & 0xff) + param_1;
    sVar6 = sVar6 + -1;
    freq_i2c_mem_write_new(uVar1,uVar5 & 0xff | uVar3 & 0xef00 | ((int)(short)uVar5 >> 8) << 0xc,3);
    uVar1 = uVar1 + (uVar2 >> 8 & 0xff) & 0xffff;
  } while (sVar6 != 0);
  iVar4 = chan_to_freq((short)phy_param);
  _DAT_600a00c0 = ((iVar4 + -0x960) * 0x10000 >> 0x10 & 0x7fU) << 7 | _DAT_600a00c0 & 0xffffc00f;
  return;
}

