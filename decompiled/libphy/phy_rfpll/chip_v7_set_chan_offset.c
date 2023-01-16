/*
 * Last changed at upstream commit 3c715e60c63d59b1d8240de147d46d78d84a97bf
 * https://github.com/espressif/esp-phy-lib/commit/3c715e60c63d59b1d8240de147d46d78d84a97bf
 * Upstream date: 2023-01-16 19:19:06 +0800
 * Upstream subject: esp32c6: phy update
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
  if (DAT_000110b3 != '\0') {
    _set_channel_rfpll_freq = _set_channel_rfpll_freq + (short)((int)DAT_000110b4 << 3);
  }
  phy_freq_correct(1,(int)(short)_set_channel_rfpll_freq);
  disable_agc();
  set_channel_rfpll_freq(_DAT_00011130,DAT_00011063,(int)(short)_set_channel_rfpll_freq);
  enable_agc();
                    /* WARNING: Could not recover jumptable at 0x0001024a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)_g_phyFuns[1])(uVar1);
  return;
}

