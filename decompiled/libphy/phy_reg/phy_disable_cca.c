/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_reg.o -> phy_disable_cca
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 phy_disable_cca(void)

{
  uint uVar1;
  
  uVar1 = CONCAT13(DAT_600123bc,CONCAT12(DAT_600123bb,CONCAT11(DAT_600123ba,DAT_600123b9))) &
          0xffafffff;
  DAT_600123ba = (char)(uVar1 >> 8);
  DAT_600123bb = (byte)(uVar1 >> 0x10) | 0x28;
  DAT_600123bc = (char)(uVar1 >> 0x18);
  return DAT_600123b9;
}

