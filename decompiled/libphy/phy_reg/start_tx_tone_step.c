/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_reg.o -> start_tx_tone_step
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void start_tx_tone_step(int param_1,uint param_2,int param_3,int param_4,uint param_5,int param_6)

{
  uint uVar1;
  
  if (param_1 == 0 && param_4 == 0) {
    _DAT_60006000 = _DAT_60006000 | 0x4000000;
    _DAT_600061e4 = _DAT_600061e4 & 0xfffffbff;
  }
  else {
    _DAT_60006000 = _DAT_60006000 & 0xfbffffff;
    _DAT_600061e4 = _DAT_600061e4 | 0x400;
  }
  uVar1 = (-param_3 & 0xffU) << 10;
  if ((_DAT_60006040 >> 0x1d & 1) == 0) {
    _DAT_60006040 = (param_2 | param_1 << 0x12) & 0xfffffff | uVar1 | _DAT_60006040 & 0xf0000000;
  }
  else {
    _DAT_60006050 = (param_5 & 3) << 2 | _DAT_60006050 & 0xfffffff0 | param_2 & 3;
    _DAT_60006040 =
         ((int)param_2 >> 2 | param_1 << 0x12) & 0xfffffffU | uVar1 | _DAT_60006040 & 0xf0000000;
    param_5 = (int)param_5 >> 2;
  }
  _DAT_60006044 =
       (param_5 | param_4 << 0x12) & 0xfffffff | (-param_6 & 0xffU) << 10 |
       _DAT_60006044 & 0xf0000000;
  return;
}

