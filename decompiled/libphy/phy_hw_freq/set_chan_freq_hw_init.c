/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_hw_freq.o -> set_chan_freq_hw_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_chan_freq_hw_init(uint param_1,uint param_2)

{
  _phy_param = get_bias_ref_code();
  get_rf_freq_init();
  freq_i2c_data_write();
  _DAT_6003509c = _DAT_6003509c & 0xffff | 0xc800000;
  _DAT_6000e0c4 =
       (param_2 & 0xf) << 0x14 | (param_1 & 0xf) << 0x10 | _DAT_6000e0c4 & 0xdf00ffff | 0x41000000;
  return;
}

