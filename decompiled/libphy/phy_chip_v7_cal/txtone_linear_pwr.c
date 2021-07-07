/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_cal.o -> txtone_linear_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int txtone_linear_pwr(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  short sStack_24;
  short asStack_22 [7];
  
  cVar2 = '\x04';
  iVar1 = 0;
  do {
    iVar3 = get_fm_sar_dout(&sStack_24,asStack_22);
    if (asStack_22[0] == 0) {
      asStack_22[0] = 1;
    }
    if (param_1 == 0) {
      iVar3 = ((int)sStack_24 << 10) / (int)asStack_22[0];
    }
    cVar2 = cVar2 + -1;
    iVar1 = (iVar1 + iVar3) * 0x10000 >> 0x10;
  } while (cVar2 != '\0');
  return iVar1;
}

