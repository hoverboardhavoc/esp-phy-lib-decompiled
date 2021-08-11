/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> get_tone_sar_dout
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint get_tone_sar_dout(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_20 [16];
  
  uVar2 = 0;
  for (uVar1 = 0; uVar1 != param_1; uVar1 = uVar1 + 1 & 0xff) {
    pwdet_tone_start();
    iVar3 = read_sar_dout(auStack_20);
    uVar2 = uVar2 + iVar3;
  }
  return uVar2 / uVar1 & 0xffff;
}

