/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
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
  _DAT_600a0814 = (param_1 & 3) << 0xc | _DAT_600a0814 & 0xffffcfff;
  read_sar2_code();
  _DAT_600a0814 = uVar1 & 0x3000 | _DAT_600a0814 & 0xffffcfff;
  return;
}

