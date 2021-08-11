/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> phy_freq_correct.part.1
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_freq_correct_part_1(int param_1)

{
  int iVar1;
  uint uVar2;
  
  param_1 = param_1 << 1;
  uVar2 = param_1 / 5;
  _DAT_6001d030 = _DAT_6001d030 & 0xfffffc00 | 0xfa;
  _DAT_60006090 = _DAT_60006090 & 0xfffffe00 | 0xfa;
  _DAT_60006070 = _DAT_60006070 & 0xbfffffff;
  _DAT_60006064 = _DAT_60006064 & 0xfff00000 | 1000000;
  _DAT_60006068 = uVar2 + 1000000 | _DAT_60006068 & 0xfff00000;
  iVar1 = 2;
  if ((param_1 < 0x1f9) && (iVar1 = 0x3d, -0x1f9 < param_1)) {
    iVar1 = 0x1f;
  }
  _DAT_6001c850 = _DAT_6001c850 & 0xffff8000 | iVar1 << 9 | uVar2 & 0x1ff;
  _DAT_6001cc98 = uVar2 & 0x3ff | _DAT_6001cc98 & 0xfffffc00;
  return;
}

