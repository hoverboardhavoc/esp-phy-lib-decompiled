/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_api.o -> phy_disable_low_rate
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 phy_disable_low_rate(void)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = CONCAT13(DAT_600123a8,CONCAT12(DAT_600123a7,CONCAT11(DAT_600123a6,DAT_600123a5))) &
          0xfffffbff;
  uVar1 = (undefined1)(uVar2 >> 0x10);
  uVar2 = CONCAT13((char)(uVar2 >> 0x18),CONCAT12(uVar1,CONCAT11((char)(uVar2 >> 8),DAT_600123a5)))
          & 0xfffff7ff;
  DAT_600123a6 = (char)(uVar2 >> 8);
  DAT_600123a7 = (char)(uVar2 >> 0x10);
  DAT_600123a8 = (char)(uVar2 >> 0x18);
  uVar2 = CONCAT13(DAT_600123c4,CONCAT12(DAT_600123c3,CONCAT11(DAT_600123c2,DAT_600123c1))) &
          0xfffff7ff;
  DAT_600123c2 = (char)(uVar2 >> 8);
  DAT_600123c3 = (char)(uVar2 >> 0x10);
  DAT_600123c4 = (char)(uVar2 >> 0x18);
  return uVar1;
}

