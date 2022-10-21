/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_basic.o -> chan14_mic_enable
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Removing unreachable block (ram,0x0001011c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void chan14_mic_enable(int param_1,int param_2)

{
  DAT_000110f2 = (undefined1)param_1;
  if (param_1 == 0) {
    _DAT_6001c400 = _DAT_6001c400 | 0x6000;
    phy_set_most_tpw((int)DAT_000110a4);
    return;
  }
  DAT_000110f0 = (undefined1)param_2;
  if (0x30 < param_2) {
    DAT_000110f0 = 0x30;
  }
  return;
}

