/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_reg.o -> rx_gain_force
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint rx_gain_force(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 1) << 0x17;
  if ((int)param_1 >> 0x10 != 0) {
    _DAT_600a2840 = _DAT_600a2840 & 0x7fffff | param_2 << 0x18 | uVar2;
    return param_2;
  }
  uVar1 = CONCAT13((char)param_2,CONCAT12(DAT_60012373,CONCAT11(DAT_60012372,DAT_60012371))) &
          0xff7fffff;
  DAT_60012372 = (char)(uVar1 >> 8);
  DAT_60012373 = (byte)(uVar1 >> 0x10) | (byte)(uVar2 >> 0x10);
  DAT_60012374 = (char)(uVar1 >> 0x18);
  return (uint)DAT_60012371;
}

