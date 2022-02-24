/*
 * Last changed at upstream commit 449b432d94b968a75ffabffae91fe15796de7644
 * https://github.com/espressif/esp-phy-lib/commit/449b432d94b968a75ffabffae91fe15796de7644
 * Upstream date: 2022-02-24 11:32:38 +0800
 * Upstream subject: Update phy lib: S3_20220128_fbd66bc :  for high/low temperature performance C3_20220119_908_049c04c : for high/low temperature performance
 * Source: libphy -> phy_chip_v7_ana.o -> pll_cap_mem_update
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
  
  uVar1 = 0;
  do {
    _DAT_6000e0c4 = _DAT_6000e0c4 & 0xffffff00 | uVar1;
    uVar1 = uVar1 + 3;
    uVar2 = (_DAT_6000e0c0 >> 4 & 0x100 | _DAT_6000e0c0 & 0xff) + param_1;
    _DAT_6000e148 = ((int)(short)uVar2 >> 8) << 0xc | _DAT_6000e0c0 & 0xef00 | uVar2 & 0xff;
    _DAT_6000e0c4 = _DAT_6000e0c4 & 0xfffffdff;
  } while (uVar1 != 0xff);
  return;
}

