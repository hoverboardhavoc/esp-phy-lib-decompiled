/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> get_sar_sig_ref
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_sar_sig_ref(short param_1,short *param_2,short *param_3)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  
  uVar2 = _DAT_0001309c;
  uVar1 = _DAT_0001309a;
  sVar3 = 0;
  if (_DAT_0001309a <= (ushort)(param_1 + 0x28U)) {
    sVar3 = (param_1 + 0x28U) - _DAT_0001309a;
  }
  *param_2 = sVar3;
  sVar3 = 0;
  if (uVar1 <= uVar2) {
    sVar3 = uVar2 - uVar1;
  }
  *param_3 = sVar3;
  return;
}

