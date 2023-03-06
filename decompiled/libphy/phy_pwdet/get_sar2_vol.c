/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_pwdet.o -> get_sar2_vol
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_sar2_vol(uint param_1)

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

