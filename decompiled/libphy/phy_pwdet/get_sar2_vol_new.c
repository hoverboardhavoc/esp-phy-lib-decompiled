/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_pwdet.o -> get_sar2_vol_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_sar2_vol_new(uint param_1)

{
  uint uVar1;
  
  uVar1 = _DAT_600a0814;
  _DAT_6000e000 = _DAT_6000e000 | 0x20000000;
  _DAT_600a0814 = (param_1 & 3) << 0xc | _DAT_600a0814 & 0xffffcfff;
  read_sar2_code();
  _DAT_600a0814 = uVar1 & 0x3000 | _DAT_600a0814 & 0xffffcfff;
  _DAT_6000e000 = _DAT_6000e000 & 0xdfffffff;
  return;
}

