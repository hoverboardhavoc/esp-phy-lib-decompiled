/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_reg.o -> enable_agc
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint enable_agc(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = CONCAT13(DAT_60012378,CONCAT12(DAT_60012377,CONCAT11(DAT_60012376,DAT_60012375))) &
          0xfffffeff;
  DAT_60012376 = (char)(uVar1 >> 8);
  DAT_60012377 = (char)(uVar1 >> 0x10);
  DAT_60012378 = (char)(uVar1 >> 0x18);
  uVar1 = (uint)CONCAT12(DAT_60012373,CONCAT11(DAT_60012372,DAT_60012371));
  uVar2 = uVar1 & 0x7fffff;
  DAT_60012371 = (char)uVar2;
  DAT_60012372 = (char)(uVar2 >> 8);
  DAT_60012373 = (char)(uVar2 >> 0x10);
  DAT_60012374 = 0x3e;
  return uVar1 & 0xff;
}

