/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_reg.o -> tx_paon_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 tx_paon_set(void)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = CONCAT13(DAT_60012348,CONCAT12(DAT_60012347,CONCAT11(DAT_60012346,DAT_60012345))) &
          0xffe007ff;
  DAT_60012345 = (char)uVar2;
  DAT_60012346 = (byte)(uVar2 >> 8) | 0xa0;
  DAT_60012347 = (char)(uVar2 >> 0x10);
  DAT_60012348 = (char)(uVar2 >> 0x18);
  _DAT_600a08f8 = _DAT_600a08f8 & 0xffff00ff | 0x5000;
  DAT_600123b1 = 0x1e;
  DAT_600123b2 = 200;
  DAT_600123b3 = 0x40;
  DAT_600123b4 = 1;
  uVar1 = DAT_60012375;
  uVar2 = CONCAT12(DAT_60012378,CONCAT11(DAT_60012377,DAT_60012376)) & 0xfffffc;
  DAT_60012375 = 0x1e;
  DAT_60012376 = (char)uVar2;
  DAT_60012377 = (char)(uVar2 >> 8);
  DAT_60012378 = (char)(uVar2 >> 0x10);
  return uVar1;
}

