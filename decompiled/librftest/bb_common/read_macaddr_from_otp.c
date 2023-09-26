/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> bb_common.o -> read_macaddr_from_otp
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void read_macaddr_from_otp(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = _DAT_600b0848;
  uVar1 = _DAT_600b0844;
  param_1[5] = (char)_DAT_600b0844;
  param_1[1] = (char)uVar2;
  param_1[2] = (char)((uint)uVar1 >> 0x18);
  param_1[3] = (char)((uint)uVar1 >> 0x10);
  *param_1 = (char)((uint)uVar2 >> 8);
  param_1[4] = (char)((uint)uVar1 >> 8);
  return;
}

