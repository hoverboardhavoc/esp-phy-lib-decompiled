/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_feature.o -> phy_get_most_tpw
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint phy_get_most_tpw(void)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte local_50 [44];
  
  sVar1 = 1;
  uVar2 = 0xffffff9c;
  do {
    get_chan_target_power
              (sVar1,(int)DAT_00011006,local_50,&phy_param,DAT_00011064,&phy_param,&phy_param);
    iVar4 = 0;
    do {
      uVar3 = (uint)local_50[iVar4];
      if ((int)(char)local_50[iVar4] < (int)uVar2) {
        uVar3 = uVar2;
      }
      iVar4 = iVar4 + 1;
      uVar2 = (uint)(char)uVar3;
    } while (iVar4 != 0x20);
    sVar1 = sVar1 + 1;
  } while (sVar1 != 0xf);
  return uVar2;
}

