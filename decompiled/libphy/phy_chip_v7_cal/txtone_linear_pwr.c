/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> txtone_linear_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int txtone_linear_pwr(void)

{
  int iVar1;
  int iVar2;
  short sStack_24;
  short asStack_22 [7];
  
  iVar2 = 2;
  iVar1 = 0;
  while( true ) {
    get_tone_sar_dout(2);
    get_sar_sig_ref(&sStack_24,asStack_22);
    if (asStack_22[0] == 0) {
      asStack_22[0] = 1;
    }
    iVar1 = (iVar1 + ((int)sStack_24 << 10) / (int)asStack_22[0]) * 0x10000 >> 0x10;
    if (iVar2 == 1) break;
    iVar2 = 1;
  }
  return iVar1;
}

