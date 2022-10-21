/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_basic.o -> chan14_mic_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void chan14_mic_cfg(int param_1)

{
  char cVar1;
  
  if (param_1 == 1) {
    _DAT_6001c400 = _DAT_6001c400 & 0xffff9fff | 0x2000;
    cVar1 = DAT_000110f0;
  }
  else {
    _DAT_6001c400 = _DAT_6001c400 | 0x6000;
    cVar1 = DAT_000110a4;
  }
  phy_set_most_tpw((int)cVar1);
  return;
}

