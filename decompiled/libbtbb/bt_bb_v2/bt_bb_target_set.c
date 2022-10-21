/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_target_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_target_set(void)

{
  _DAT_6001c0d0 = _DAT_6001c0d0 & 0xfffffe00 | 0x1d4;
  _DAT_60011840 = _DAT_60011840 & 0xffc01fff | 0x3a8000;
  _DAT_600118b0 = _DAT_600118b0 & 0x3fff | 0xed768000;
  _DAT_6001c080 = _DAT_6001c080 & 0xff8000ff | 0x19d400;
  _DAT_60011898 = _DAT_60011898 & 0xffff8000 | 0x19d4;
  _DAT_6001c144 = _DAT_6001c144 & 0xff000000 | 0x33a9d4;
  _DAT_6001189c = _DAT_6001189c & 0xff000000 | 0x33a9d4;
  _DAT_6001c1a4 = _DAT_6001c1a4 & 0xfffc0000 | 0x3a9d4;
  _DAT_60011894 = _DAT_60011894 & 0x3fff | 0xea750000;
  return;
}

