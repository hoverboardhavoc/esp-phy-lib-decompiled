/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
 * Source: libphy -> phy_chip_v7_newrom.o -> wifi_track_pll_cap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void wifi_track_pll_cap(void)

{
  uint uVar1;
  
  if (noise_floor_auto_set != (code)0x0) {
    uVar1 = 0x54;
    if (DAT_000121a0 < 0xe) {
      uVar1 = (DAT_000121a0 + -1) * 5 + 0xcU & 0xffff;
    }
    pll_vol_cal(uVar1 & 0xff,&phy_param,1,DAT_00012073);
    return;
  }
  return;
}

