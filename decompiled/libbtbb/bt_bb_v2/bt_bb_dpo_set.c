/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libbtbb -> bt_bb_v2.o -> bt_bb_dpo_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_bb_dpo_set(void)

{
  _DAT_60011038 = _DAT_60011038 & 0xfffff87f | 0x300;
  _DAT_60011020 = _DAT_60011020 & 0xfffc03c0 | 0x19806;
  _DAT_60011024 = _DAT_60011024 & 0x87fffffd | 0x30000000;
  _DAT_60011028 = _DAT_60011028 & 0xffffffcf | 0x20;
  return;
}

