/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_rfpll.o -> set_channel_rfpll_freq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int set_channel_rfpll_freq(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(_g_phyFuns + 0x1f8))(*(code **)(_g_phyFuns + 0x1f8));
  if ((_phy_param & 0x20) == 0) {
    set_rf_freq_offset(param_1,iVar1,param_2);
  }
  else {
    set_chan_freq_sw_start(iVar1 - 0x60U & 0xff,param_1);
  }
  return iVar1;
}

