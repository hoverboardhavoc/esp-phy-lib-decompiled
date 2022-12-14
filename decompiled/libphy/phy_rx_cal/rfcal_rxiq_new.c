/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_rx_cal.o -> rfcal_rxiq_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rfcal_rxiq_new(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  undefined1 uStack_22;
  undefined1 auStack_21 [13];
  
  _DAT_600a0450 = _DAT_600a0450 & 0xbfffffff | 0x20000000;
  (**(code **)(_g_phyFuns + 0x98))(1,0,0,0,*(code **)(_g_phyFuns + 0x98));
  rxiq_cover_mg_mp_new(param_1,&uStack_22,auStack_21,param_3);
  (**(code **)(_g_phyFuns + 0x9c))(1,*(code **)(_g_phyFuns + 0x9c));
  *param_2 = uStack_22;
  param_2[1] = auStack_21[0];
  return;
}

