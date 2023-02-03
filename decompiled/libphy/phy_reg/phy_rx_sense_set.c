/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_reg.o -> phy_rx_sense_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 phy_rx_sense_set(uint param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = CONCAT12(DAT_60012357,CONCAT11(DAT_60012356,DAT_60012355)) & 0x7fffff;
  bVar1 = (byte)((param_1 << 0x17) >> 0x10);
  DAT_60012355 = (char)uVar2;
  DAT_60012356 = (char)(uVar2 >> 8);
  DAT_60012357 = (byte)(uVar2 >> 0x10) | bVar1;
  DAT_60012358 = (undefined1)((param_1 << 0x17) >> 0x18);
  uVar2 = CONCAT12(DAT_6001235b,CONCAT11(DAT_6001235a,DAT_60012359)) & 0x7fffff;
  DAT_60012359 = (char)uVar2;
  DAT_6001235a = (char)(uVar2 >> 8);
  DAT_6001235b = (byte)(uVar2 >> 0x10) | bVar1;
  DAT_6001235c = DAT_60012358;
  uVar2 = (uint)CONCAT12(DAT_6001238c,CONCAT11(DAT_6001238b,DAT_6001238a)) << 8 | param_1;
  DAT_60012389 = (char)param_1;
  DAT_6001238a = (char)(uVar2 >> 8);
  DAT_6001238b = (char)(uVar2 >> 0x10);
  DAT_6001238c = (char)(uVar2 >> 0x18);
  if (param_1 == 0) {
    DAT_6001244e = DAT_6001244e | 2;
    return DAT_6001244d;
  }
  uVar2 = CONCAT13(DAT_60012450,CONCAT12(DAT_6001244f,CONCAT11(DAT_6001244e,DAT_6001244d))) &
          0xfffffdff;
  DAT_6001244e = (char)(uVar2 >> 8);
  DAT_6001244f = (char)(uVar2 >> 0x10);
  DAT_60012450 = (char)(uVar2 >> 0x18);
  return DAT_6001244d;
}

