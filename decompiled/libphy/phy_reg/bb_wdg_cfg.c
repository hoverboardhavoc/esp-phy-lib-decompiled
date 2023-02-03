/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_reg.o -> bb_wdg_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 bb_wdg_cfg(void)

{
  uint uVar1;
  
  uVar1 = CONCAT11(DAT_60012384,DAT_60012383) & 0xbfff;
  DAT_60012381 = 0xaa;
  DAT_60012382 = 0;
  DAT_60012383 = (char)uVar1;
  DAT_60012384 = (byte)(uVar1 >> 8) | 0x40;
  DAT_60012388 = DAT_60012388 | 0x80;
  return DAT_60012385;
}

