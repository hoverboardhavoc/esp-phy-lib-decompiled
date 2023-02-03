/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_api.o -> phy_rx11blr_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_rx11blr_cfg(uint param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = CONCAT13(DAT_600123a8,CONCAT12(DAT_600123a7,CONCAT11(DAT_600123a6,DAT_600123a5))) &
          0xfffffbff;
  uVar2 = CONCAT13((char)(uVar2 >> 0x18),
                   CONCAT12((char)(uVar2 >> 0x10),
                            CONCAT11((byte)(((param_1 & 1) << 10) >> 8) | (byte)(uVar2 >> 8),
                                     (char)uVar2))) & 0xfffff7ff;
  bVar1 = (byte)(((param_1 & 1) << 0xb) >> 8);
  DAT_600123a5 = (char)uVar2;
  DAT_600123a6 = (byte)(uVar2 >> 8) | bVar1;
  DAT_600123a7 = (char)(uVar2 >> 0x10);
  DAT_600123a8 = (char)(uVar2 >> 0x18);
  uVar2 = CONCAT13(DAT_600123c4,CONCAT12(DAT_600123c3,CONCAT11(DAT_600123c2,DAT_600123c1))) &
          0xfffff7ff;
  DAT_600123c1 = (char)uVar2;
  DAT_600123c2 = (byte)(uVar2 >> 8) | bVar1;
  DAT_600123c3 = (char)(uVar2 >> 0x10);
  DAT_600123c4 = (char)(uVar2 >> 0x18);
  return;
}

