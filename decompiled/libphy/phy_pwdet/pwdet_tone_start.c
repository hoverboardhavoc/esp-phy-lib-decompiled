/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_pwdet.o -> pwdet_tone_start
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pwdet_tone_start(void)

{
  _DAT_60006040 = _DAT_60006040 | 0x40000;
  ets_delay_us(1);
  _DAT_6000e050 = _DAT_6000e050 & 0xfffffffd | 2;
  ets_delay_us(2);
  do {
  } while ((_DAT_6000e050 >> 0x18 & 7) != 7);
  _DAT_60006040 = _DAT_60006040 & 0xfffbffff;
  return;
}

