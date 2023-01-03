/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_rfpll.o -> chip_v7_set_chan
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void chip_v7_set_chan(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (*(code *)*_g_phyFuns)((code *)*_g_phyFuns);
  iVar2 = (int)_chan_to_freq;
  DAT_0001111f = (undefined1)param_2;
  DAT_0001111e = param_2 != 0;
  _DAT_0001111c = (undefined2)param_1;
  disable_agc();
  phy_bbpll_cal(1);
  fe_adc_on(0);
  chan_to_freq(param_1);
  set_channel_rfpll_freq(DAT_0001104f,iVar2);
  chip_v7_set_chan_misc(param_1);
  phy_i2c_master_mem_txcap();
  if (DAT_00011026 != '\0') {
    chan14_mic_cfg(param_1 == 0xe);
  }
  fe_adc_on(1);
  if (phy_i2c_master_mem_txcap != (code)0x0) {
    phy_11p_set(DAT_00011029);
  }
  set_rx_comp_new();
  enable_agc();
  phy_bbpll_cal(0);
                    /* WARNING: Could not recover jumptable at 0x00010130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)_g_phyFuns[1])(uVar1);
  return;
}

