/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7_ana.o -> set_channel_rfpll_freq
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

