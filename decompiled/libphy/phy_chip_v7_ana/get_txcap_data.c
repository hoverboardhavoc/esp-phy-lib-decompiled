/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> get_txcap_data
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_txcap_data(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)(DAT_00013178 >> 2);
  if (2 < uVar1) {
    uVar1 = 2;
  }
  iVar2 = uVar1 * 3;
  DAT_0001306d = DAT_0001306d & 0xf0 | *(byte *)(iVar2 + 0x1310c);
  DAT_0001306e = *(char *)(iVar2 + 0x1310e) << 4 | *(byte *)(iVar2 + 0x1310d);
  return;
}

