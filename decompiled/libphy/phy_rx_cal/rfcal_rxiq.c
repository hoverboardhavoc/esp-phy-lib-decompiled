/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
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
  
  _DAT_6000607c = _DAT_6000607c & 0xefffffff | 0x8000000;
  start_tx_tone_step(1,0,0,0);
  rxiq_cover_mg_mp(param_1,&uStack_12,&uStack_11,param_3);
  stop_tx_tone(1);
  *param_2 = uStack_12;
  param_2[1] = uStack_11;
  return;
}

