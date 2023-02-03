/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_reg.o -> set_noise_floor
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint set_noise_floor(int param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 < -0x188) {
    param_1 = -0x188;
  }
  sVar1 = (short)param_1;
  if (-0x160 < sVar1) {
    sVar1 = -0x160;
  }
  uVar2 = CONCAT13(DAT_60012360,CONCAT12(DAT_6001235f,CONCAT11(DAT_6001235e,DAT_6001235d))) &
          0xffff801f;
  uVar3 = ((int)sVar1 & 0x3ffU) << 5 | uVar2;
  DAT_6001235d = (byte)uVar3 | 0x10;
  DAT_6001235e = (char)(uVar3 >> 8);
  DAT_6001235f = (char)(uVar2 >> 0x10);
  DAT_60012360 = (char)(uVar2 >> 0x18);
  return uVar3 & 0xff;
}

