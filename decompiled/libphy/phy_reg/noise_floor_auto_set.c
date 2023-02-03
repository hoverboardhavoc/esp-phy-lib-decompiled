/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_reg.o -> noise_floor_auto_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

byte noise_floor_auto_set(void)

{
  byte bVar1;
  
  DAT_6001235f = DAT_6001235f | 0x80;
  DAT_60012360 = DAT_60012360 | 0x10;
  DAT_60012389 = DAT_60012389 | 1;
  bVar1 = DAT_60012395;
  DAT_60012395 = DAT_60012395 | 1;
  return bVar1;
}

