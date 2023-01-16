/*
 * Last changed at upstream commit 3c715e60c63d59b1d8240de147d46d78d84a97bf
 * https://github.com/espressif/esp-phy-lib/commit/3c715e60c63d59b1d8240de147d46d78d84a97bf
 * Upstream date: 2023-01-16 19:19:06 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_track.o -> phy_cal_param_track
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_cal_param_track(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = abs_temp((int)_DAT_00011048 - (int)_phy_param);
  uVar1 = _DAT_0001111c;
  if (param_1 <= iVar2) {
    iVar2 = (int)DAT_0001111f;
    if (param_2 != 0) {
      phy_printf("cal:%d,%d\n",(int)_DAT_00011048,(int)_phy_param);
    }
    _DAT_600a981c = _DAT_600a981c & 0xfffffffd;
    _DAT_000110a4 = _DAT_000110a4 & 0xfffffdff;
    chip_v7_set_chan(0xe,0);
    txdc_cal_pwdet_init(&phy_param);
    mac_enable_bb();
    _DAT_00011048 = _phy_param;
    chip_v7_set_chan(uVar1 & 0xff,iVar2);
    return;
  }
  return;
}

