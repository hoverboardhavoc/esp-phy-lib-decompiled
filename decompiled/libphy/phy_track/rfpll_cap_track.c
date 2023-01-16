/*
 * Last changed at upstream commit 3c715e60c63d59b1d8240de147d46d78d84a97bf
 * https://github.com/espressif/esp-phy-lib/commit/3c715e60c63d59b1d8240de147d46d78d84a97bf
 * Upstream date: 2023-01-16 19:19:06 +0800
 * Upstream subject: esp32c6: phy update
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
  if (4 < iVar1) {
    phy_dis_hw_set_freq();
    uVar2 = rfpll_cap_correct_new(DAT_00011009);
    if (param_1 != 0) {
      phy_printf("temp=%d,%d,delta=%d\n",(int)_phy_param,(int)_DAT_00011130,uVar2);
    }
    _DAT_00011130 = _phy_param;
    phy_en_hw_set_freq();
    return;
  }
  return;
}

