/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_track.o -> rfpll_cap_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rfpll_cap_track(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = abs_temp((int)_phy_param - (int)_DAT_00011006);
  if (2 < iVar1) {
    phy_dis_hw_set_freq();
    uVar2 = rfpll_cap_correct(4,DAT_0001101b);
    if (param_1 != 0) {
      phy_printf("temp=%d,%d,delta=%d\n",(int)_phy_param,(int)_DAT_00011006,uVar2);
    }
    _DAT_00011006 = _phy_param;
    phy_en_hw_set_freq();
    return;
  }
  return;
}

