/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_feature.o -> phy_get_rx_freq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int phy_get_rx_freq(uint param_1,uint param_2)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  
  if (param_1 < 8) {
    iVar1 = (int)(short)((ushort)param_2 & 0x7fff);
    if ((int)(short)(ushort)param_2 << 0x11 < 0) {
      iVar1 = (iVar1 + -0x8000) * 0x10000 >> 0x10;
    }
    iVar3 = -0x30;
  }
  else {
    uVar2 = (ushort)(param_2 >> 0xf);
    iVar1 = (int)(short)(uVar2 & 0x7fff);
    if ((int)(short)uVar2 << 0x11 < 0) {
      iVar1 = (iVar1 + -0x8000) * 0x10000 >> 0x10;
    }
    iVar1 = iVar1 * -5;
    iVar3 = 0x80;
  }
  return (int)(short)(iVar1 / iVar3);
}

