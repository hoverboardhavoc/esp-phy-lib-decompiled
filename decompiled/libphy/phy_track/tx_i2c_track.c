/*
 * Last changed at upstream commit 3c715e60c63d59b1d8240de147d46d78d84a97bf
 * https://github.com/espressif/esp-phy-lib/commit/3c715e60c63d59b1d8240de147d46d78d84a97bf
 * Upstream date: 2023-01-16 19:19:06 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_track.o -> tx_i2c_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_i2c_track(void)

{
  if (_phy_param < -9) {
    if (DAT_0001104d != '\0') {
      return;
    }
    (**(code **)(_g_phyFuns + 0x60))(0x6b,1,6,6,6,0,*(code **)(_g_phyFuns + 0x60));
    (**(code **)(_g_phyFuns + 0x60))(0x6b,1,3,3,0,8,*(code **)(_g_phyFuns + 0x60));
    (**(code **)(_g_phyFuns + 0x60))(0x6b,1,6,5,3,7,*(code **)(_g_phyFuns + 0x60));
    DAT_0001104d = '\x01';
    if (_phy_param < -9) {
      DAT_0001104d = 1;
      return;
    }
  }
  else if (DAT_0001104d != '\x01') {
    return;
  }
  (**(code **)(_g_phyFuns + 0x60))(0x6b,1,6,6,6,1,*(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0x60))(0x6b,1,3,3,0,10,*(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0x60))(0x6b,1,6,5,3,1,*(code **)(_g_phyFuns + 0x60));
  DAT_0001104d = 0;
  return;
}

