/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_newrom.o -> wifi_track_pll_cap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void wifi_track_pll_cap(void)

{
  uint uVar1;
  
  if (phy_dis_hw_set_freq != (code)0x0) {
    uVar1 = 0x54;
    if (DAT_000121a0 < 0xe) {
      uVar1 = (DAT_000121a0 + -1) * 5 + 0xcU & 0xffff;
    }
    pll_vol_cal(uVar1 & 0xff,&phy_param,1,DAT_00012073);
    return;
  }
  return;
}

