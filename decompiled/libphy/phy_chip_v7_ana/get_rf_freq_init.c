/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_ana.o -> get_rf_freq_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_rf_freq_init(void)

{
  uint uVar1;
  uint uVar2;
  ushort auStack_34 [2];
  byte bStack_30;
  byte bStack_2f;
  byte bStack_2e;
  uint uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  
  if ((_DAT_000130fc & 0x20) == 0) {
    uVar1 = 0;
    do {
      get_rf_freq_cap(uVar1 + 0x960 & 0xffff,0,&bStack_30,auStack_34);
      uStack_2c = (uint)auStack_34[0];
      uVar2 = uVar1 & 0xff;
      uVar1 = uVar1 + 1;
      uStack_24 = 0;
      uStack_28 = (uint)bStack_30 << 0x10 | (uint)bStack_2f << 8 | (uint)bStack_2e;
      wr_rf_freq_mem(uVar2,&uStack_2c);
    } while (uVar1 != 0x55);
    _DAT_000130fc = _DAT_000130fc | 0x20;
  }
  return;
}

