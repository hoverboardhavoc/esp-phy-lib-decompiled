/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libbtbb -> bt_bb_v2.o -> bt_agc_target_set_1
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_agc_target_set_1(void)

{
  _DAT_60046898 = _DAT_60046898 & 0xffff8000 | 0x19d4;
  _DAT_6004689c = _DAT_6004689c & 0xff000000 | 0x33b7d4;
  _DAT_60046840 = _DAT_60046840 & 0xffc003ff | 0x3b6800;
  _DAT_60046894 = _DAT_60046894 & 0x3fff | 0xedf6c000;
  _DAT_600468b4 = _DAT_600468b4 & 0x3fff | 0xea750000;
  return;
}

