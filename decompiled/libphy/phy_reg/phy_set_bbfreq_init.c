/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_reg.o -> phy_set_bbfreq_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

byte phy_set_bbfreq_init(void)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = CONCAT13(DAT_60012400,CONCAT12(DAT_600123ff,CONCAT11(DAT_600123fe,DAT_600123fd))) &
          0x1fffffff;
  DAT_600123fd = (char)uVar2;
  DAT_600123fe = (char)(uVar2 >> 8);
  DAT_600123ff = (char)(uVar2 >> 0x10);
  DAT_60012400 = (byte)(uVar2 >> 0x18) | 0x20;
  bVar1 = DAT_600123a1;
  uVar2 = CONCAT13(DAT_600123a4,CONCAT12(DAT_600123a3,CONCAT11(DAT_600123a2,DAT_600123a1))) &
          0xfffffff0;
  DAT_600123a1 = DAT_600123a1 & 0xf0;
  DAT_600123a2 = (char)(uVar2 >> 8);
  DAT_600123a3 = (char)(uVar2 >> 0x10);
  DAT_600123a4 = (char)(uVar2 >> 0x18);
  return bVar1;
}

