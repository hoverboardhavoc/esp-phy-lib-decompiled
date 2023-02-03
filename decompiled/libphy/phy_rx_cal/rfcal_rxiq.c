/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_rx_cal.o -> rfcal_rxiq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rfcal_rxiq(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  _DAT_600a0450 = _DAT_600a0450 & 0xbfffffff | 0x20000000;
  start_tx_tone_step(1,0,0,0);
  rxiq_cover_mg_mp(param_1,&uStack_12,&uStack_11,param_3);
  stop_tx_tone(1);
  *param_2 = uStack_12;
  param_2[1] = uStack_11;
  return;
}

