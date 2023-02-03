/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_api.o -> set_cca
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 set_cca(int param_1,int param_2)

{
  undefined1 uVar1;
  
  DAT_60012360 = DAT_60012360 | 0x40;
  if ((param_1 != 0) && (param_2 != 0)) {
    DAT_60012361 = (char)param_2;
    return DAT_60012364;
  }
  uVar1 = DAT_60012361;
  DAT_60012361 = 0xbf;
  return uVar1;
}

