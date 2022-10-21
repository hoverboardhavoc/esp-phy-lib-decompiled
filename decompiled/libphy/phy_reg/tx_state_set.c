/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_reg.o -> tx_state_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_state_set(uint param_1)

{
  _DAT_600060b0 = _DAT_600060b0 & 0x3f3f3f3f | 0x404000;
  _DAT_600060b4 = _DAT_600060b4 & 0x3f3f3f3f | param_1 << 0x1e;
  _DAT_600060b8 = (param_1 & 3) << 6 | _DAT_600060b8 & 0x3f3f3f3f;
  _DAT_600060bc = _DAT_600060bc & 0xffffff3f;
  return;
}

