/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_rfpll.o -> chip_v7_set_chan_offset
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void chip_v7_set_chan_offset(short param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)*_g_phyFuns)((code *)*_g_phyFuns);
  _set_channel_rfpll_freq = param_1 + 2U & 0xfffc;
  if (DAT_0001109f != '\0') {
    _set_channel_rfpll_freq = _set_channel_rfpll_freq + (short)((int)DAT_000110a0 << 3);
  }
  phy_freq_correct(1,(int)(short)_set_channel_rfpll_freq);
  disable_agc();
  set_channel_rfpll_freq(_DAT_0001111c,DAT_0001104f,(int)(short)_set_channel_rfpll_freq);
  enable_agc();
                    /* WARNING: Could not recover jumptable at 0x000101aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)_g_phyFuns[1])(uVar1);
  return;
}

