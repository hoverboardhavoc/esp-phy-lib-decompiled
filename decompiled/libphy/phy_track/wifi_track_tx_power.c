/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_track.o -> wifi_track_tx_power
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x000101b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wifi_track_tx_power(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = 0x4bffc4;
  uStack_24 = 0x69ffc4;
  iVar2 = (int)_DAT_0001112e;
  iVar1 = abs_temp(_phy_param - iVar2);
  iVar3 = 4;
  if (iVar1 < 8) {
    iVar3 = 2;
  }
  iVar1 = abs_temp((int)_phy_param - (int)_abs_temp);
  if (((iVar3 <= iVar1) && (iVar1 = ram_temp_to_power((int)_phy_param,iVar2), param_1 != 0)) &&
     (DAT_00011122 != iVar1)) {
    phy_bbpll_cal(1);
    DAT_00011122 = (char)iVar1;
    _abs_temp = _phy_param;
    txpwr_correct(0,&phy_param,&uStack_28,iVar2);
    if (param_2 != 0) {
      phy_printf("correct_power=%d,temp=%d %d\n",(int)DAT_00011122,(int)_phy_param,iVar2);
    }
    phy_bbpll_cal(0);
  }
  return;
}

