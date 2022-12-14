/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_track.o -> tx_i2c_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_i2c_track(void)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  
  uVar3 = _DAT_0001112e;
  cVar2 = DAT_00011122;
  if (_phy_param < -0x1d) {
    (**(code **)(_g_phyFuns + 0x60))(0x6b,1,6,6,6,0);
    (**(code **)(_g_phyFuns + 0x60))(0x6b,1,3,3,0,8,*(code **)(_g_phyFuns + 0x60));
    cVar1 = '\x04';
  }
  else {
    (**(code **)(_g_phyFuns + 0x60))(0x6b,1,6,6,6,1);
    (**(code **)(_g_phyFuns + 0x60))(0x6b,1,3,3,0,10,*(code **)(_g_phyFuns + 0x60));
    if (-0x1f < (char)uVar3) {
      DAT_00011122 = cVar2;
      return;
    }
    cVar1 = -4;
  }
  DAT_00011122 = cVar2 + cVar1;
  return;
}

