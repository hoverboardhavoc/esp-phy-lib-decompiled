/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_api.o -> bb_wdt_rst_enable
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void bb_wdt_rst_enable(int param_1)

{
  uint uVar1;
  
  uVar1 = CONCAT13(DAT_60012388,CONCAT12(DAT_60012387,CONCAT11(DAT_60012386,DAT_60012385))) &
          0x7fffffff;
  DAT_60012385 = (char)uVar1;
  DAT_60012386 = (char)(uVar1 >> 8);
  DAT_60012387 = (char)(uVar1 >> 0x10);
  DAT_60012388 = (byte)((uint)(param_1 << 0x1f) >> 0x18) | (byte)(uVar1 >> 0x18);
  return;
}

