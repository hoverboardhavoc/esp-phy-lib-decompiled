/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_basic.o -> ram_i2c_master_reset
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_i2c_master_reset(void)

{
  phy_i2c_enter_critical();
  if (_DAT_6000e000 << 6 < 0) {
    _DAT_6000e000 = 0x4000000;
  }
  if (_DAT_6000e004 << 6 < 0) {
    _DAT_6000e004 = 0x4000000;
  }
  phy_i2c_exit_critical();
  return;
}

