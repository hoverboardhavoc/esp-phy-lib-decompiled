/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
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
  
  uVar1 = (**(code **)(_g_phyFuns + 0x184))(*(code **)(_g_phyFuns + 0x184));
  _DAT_000110f0 = param_1 + 2U & 0xfffc;
  if (DAT_0001112e != '\0') {
    _DAT_000110f0 = _DAT_000110f0 + (short)((int)DAT_0001112f << 3);
  }
  phy_freq_correct(1,(int)(short)_DAT_000110f0);
  (**(code **)(_g_phyFuns + 8))(*(code **)(_g_phyFuns + 8));
  set_channel_rfpll_freq((int)DAT_00011202,DAT_00011103,(int)(short)_DAT_000110f0);
  (**(code **)(_g_phyFuns + 0xc))(*(code **)(_g_phyFuns + 0xc));
                    /* WARNING: Could not recover jumptable at 0x00010744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x188))(uVar1);
  return;
}

