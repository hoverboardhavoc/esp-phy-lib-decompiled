/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7.o -> start_tx_tone
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void start_tx_tone(uint param_1,int param_2,uint param_3,uint param_4,int param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if ((int)(_DAT_60006040 << 2) < 0) {
    uVar2 = (param_2 << 7) / 5 & 0xfff;
    uVar5 = (param_5 << 7) / 5 & 0xfff;
  }
  else {
    uVar2 = (param_2 << 5) / 5 & 0x3ff;
    uVar5 = (param_5 << 5) / 5 & 0x3ff;
  }
  uVar6 = (int)(uVar5 << 0x10) >> 0x10;
  uVar3 = (int)(uVar2 << 0x10) >> 0x10;
  if ((param_1 & 0xff) == 0 && (param_4 & 0xff) == 0) {
    _DAT_60006000 = _DAT_60006000 | 0x4000000;
    _DAT_600061e4 = _DAT_600061e4 & 0xfffffbff;
  }
  else {
    _DAT_60006000 = _DAT_60006000 & 0xfbffffff;
    _DAT_600061e4 = _DAT_600061e4 | 0x400;
  }
  uVar1 = (param_1 & 0xff) << 0x12;
  uVar4 = (-(param_3 & 0xff) & 0xff) << 10;
  if ((_DAT_60006040 >> 0x1d & 1) == 0) {
    _DAT_60006040 = uVar3 | uVar1 | uVar4 | _DAT_60006040 & 0xf0000000;
  }
  else {
    _DAT_60006050 = (uVar6 & 3) << 2 | _DAT_60006050 & 0xfffffff0 | uVar3 & 3;
    _DAT_60006040 = (int)(uVar2 << 0x10) >> 0x12 | uVar1 | uVar4 | _DAT_60006040 & 0xf0000000;
    uVar6 = (int)(uVar5 << 0x10) >> 0x12;
  }
  _DAT_60006044 =
       uVar6 | (param_4 & 0xff) << 0x12 | (-(param_6 & 0xff) & 0xff) << 10 |
       _DAT_60006044 & 0xf0000000;
  return;
}

