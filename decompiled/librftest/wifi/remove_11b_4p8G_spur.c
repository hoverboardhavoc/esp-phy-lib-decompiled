/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> remove_11b_4p8G_spur
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void remove_11b_4p8G_spur(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_3 & 0x7f) << 8;
  uVar1 = (param_2 & 0xf) << 0xf;
  _DAT_600a7418 = _DAT_600a7418 & 0xfff800ff | uVar2 | uVar1 | 0x80000;
  _DAT_600a7414 = _DAT_600a7414 & 0xfff800fe | uVar2 | uVar1 | 0x80000 | param_1 & 1;
  return;
}

