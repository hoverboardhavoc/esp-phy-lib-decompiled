/*
 * Last changed at upstream commit 8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * https://github.com/espressif/esp-phy-lib/commit/8b1137c35cc3d2b1085e7f857c2530efb115d3a3
 * Upstream date: 2021-07-07 18:06:39 +0800
 * Upstream subject: esp32h2: update phy libs
 * Source: libphy -> phy_chip_v7_ana.o -> chip_v7_set_chan_nomac
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void chip_v7_set_chan_nomac(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = (int)phy_freq_offset;
  DAT_00013071 = (undefined1)param_1;
  DAT_00013073 = (undefined1)param_2;
  iVar1 = 1;
  if (param_2 != 0) {
    iVar1 = param_2;
  }
  phy_dis_pwdet_one = 1;
  uVar2 = phy_enter_critical();
  uVar3 = set_channel_rfpll_freq(param_1,chip7_phy_init_ctrl,iVar4);
  phy_exit_critical(uVar2);
  bb_bss_cbw40(iVar1);
  spur_coef_cfg(param_1,uVar3,iVar1);
  chip_v7_set_chan_misc(param_1);
  if (chan14_mic_en != '\0') {
    chan14_mic_cfg(param_1 == 0xe);
    return;
  }
  return;
}

