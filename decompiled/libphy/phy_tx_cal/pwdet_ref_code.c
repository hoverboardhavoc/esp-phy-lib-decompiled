/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_tx_cal.o -> pwdet_ref_code
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pwdet_ref_code(undefined1 param_1)

{
  start_tx_tone_step(1,0x80,param_1,0,0,0);
  _DAT_6000e05c = _DAT_6000e05c & 0xffff0000;
  _DAT_000120e2 = get_tone_sar_dout(4);
  _DAT_6000e05c = _DAT_6000e05c & 0xffff0000 | 0x5555;
  _DAT_000120e4 = get_tone_sar_dout(4);
  _DAT_6000e05c = _DAT_6000e05c & 0xffff0000 | 0xaaaa;
  return;
}

