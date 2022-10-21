/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_reg.o -> ram_enable_wifi_agc
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_enable_wifi_agc(void)

{
  _DAT_6001c080 = _DAT_6001c080 & 0xfffffffe;
  _DAT_6001c01c = _DAT_6001c01c & 0xff00ffff | 0x200000;
  _DAT_6001c034 = _DAT_6001c034 | 0x80;
  return;
}

