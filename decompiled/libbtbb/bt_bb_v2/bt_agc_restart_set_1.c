/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_restart_set_1
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_restart_set_1(void)

{
  _DAT_60046888 = _DAT_60046888 & 0xefffffff;
  _DAT_600468a4 = _DAT_600468a4 & 0xf8007fff | 0x3c90000;
  _DAT_600468ac = _DAT_600468ac & 0xfffc0000 | 0x31647;
  _DAT_600468b8 = _DAT_600468b8 & 0xfffff | 0x3f100000;
  _DAT_600468bc = _DAT_600468bc & 0xf80001ff | 0xf9261200;
  _DAT_60046884 = _DAT_60046884 & 0xffffff | 0xf4800000;
  return;
}

