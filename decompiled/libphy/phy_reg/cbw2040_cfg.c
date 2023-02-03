/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_reg.o -> cbw2040_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

byte cbw2040_cfg(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    bVar1 = DAT_60012345;
    DAT_60012345 = DAT_60012345 | 0x40;
    return bVar1;
  }
  uVar2 = CONCAT13(DAT_60012348,CONCAT12(DAT_60012347,CONCAT11(DAT_60012346,DAT_60012345))) &
          0xffffffbf;
  bVar1 = DAT_60012345;
  DAT_60012345 = DAT_60012345 & 0xbf;
  DAT_60012346 = (char)(uVar2 >> 8);
  DAT_60012347 = (char)(uVar2 >> 0x10);
  DAT_60012348 = (char)(uVar2 >> 0x18);
  return bVar1;
}

