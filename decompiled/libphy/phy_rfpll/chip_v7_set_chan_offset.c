/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
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
  _chan_to_freq = param_1 + 2U & 0xfffc;
  if (DAT_0001109f != '\0') {
    _chan_to_freq = _chan_to_freq + (short)((int)DAT_000110a0 << 3);
  }
  phy_freq_correct(1,(int)(short)_chan_to_freq);
  disable_agc();
  set_channel_rfpll_freq(_DAT_0001111c,DAT_0001104f,(int)(short)_chan_to_freq);
  enable_agc();
                    /* WARNING: Could not recover jumptable at 0x000101be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)_g_phyFuns[1])(uVar1);
  return;
}

