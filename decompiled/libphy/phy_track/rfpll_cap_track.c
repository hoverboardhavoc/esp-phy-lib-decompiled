/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
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
  
  iVar1 = abs_temp((int)_phy_param - (int)_DAT_00011130);
  if (0x13 < iVar1) {
    phy_dis_hw_set_freq();
    uVar2 = rfpll_cap_correct(DAT_00011009);
    if (param_1 != 0) {
      phy_printf("temp=%d,%d,delta=%d\n",(int)_phy_param,(int)_DAT_00011130,uVar2);
    }
    _DAT_00011130 = _phy_param;
    phy_en_hw_set_freq();
    return;
  }
  return;
}

