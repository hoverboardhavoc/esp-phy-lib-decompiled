/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_reg.o -> ram_tx_paon_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_tx_paon_set(void)

{
  _DAT_6001d000 = _DAT_6001d000 & 0xffe007ff | 0xa000;
  _DAT_600060f8 = _DAT_600060f8 & 0xffff00ff | 0x9600;
  _DAT_6001d06c = 0x782a094;
  _DAT_6001c400 = _DAT_6001c400 & 0xfff8ffff;
  return;
}

