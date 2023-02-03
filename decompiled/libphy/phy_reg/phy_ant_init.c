/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_reg.o -> phy_ant_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 phy_ant_init(void)

{
  uint uVar1;
  
  uVar1 = CONCAT12(DAT_60012464,CONCAT11(DAT_60012463,DAT_60012462)) & 0xffffe8;
  DAT_60012461 = 0;
  DAT_60012462 = (char)uVar1;
  DAT_60012463 = (char)(uVar1 >> 8);
  DAT_60012464 = (char)(uVar1 >> 0x10);
  uVar1 = CONCAT13(DAT_60012378,CONCAT12(DAT_60012377,CONCAT11(DAT_60012376,DAT_60012375))) &
          0xfffc07ff;
  DAT_60012375 = (char)uVar1;
  DAT_60012376 = (char)((uVar1 | 0x1a000) >> 8);
  DAT_60012377 = (char)((uVar1 | 0x1a000) >> 0x10);
  DAT_60012378 = (char)(uVar1 >> 0x18);
  DAT_60012466 = 0x1e;
  DAT_60012468 = 0x1e;
  return DAT_60012465;
}

