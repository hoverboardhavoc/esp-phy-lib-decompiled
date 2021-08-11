/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> pocket_sar_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int pocket_sar_power(uint param_1)

{
  int iVar1;
  int iVar2;
  ushort uStack_24;
  short sStack_22;
  undefined1 auStack_20 [2];
  undefined2 uStack_1e;
  
  read_sar_dout(auStack_20);
  get_sar_sig_ref(uStack_1e,&uStack_24,&sStack_22);
  iVar1 = linear_to_db((int)((uStack_24 - 0x28) * 0x10000) >> 0x10,3);
  iVar2 = linear_to_db((int)sStack_22,3);
  return (int)(((iVar1 + (uint)(7 < param_1) * 8 + 0xf4) - iVar2) * 0x10000) >> 0x10;
}

