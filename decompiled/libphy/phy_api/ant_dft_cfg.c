/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_api.o -> ant_dft_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ant_dft_cfg(uint param_1)

{
  uint uVar1;
  
  uVar1 = CONCAT13(DAT_60012464,CONCAT12(DAT_60012463,CONCAT11(DAT_60012462,DAT_60012461))) &
          0xfffff7ff;
  DAT_60012461 = (char)uVar1;
  DAT_60012462 = (byte)(((param_1 & 1) << 0xb) >> 8) | (byte)(uVar1 >> 8);
  DAT_60012463 = (char)(uVar1 >> 0x10);
  DAT_60012464 = (char)(uVar1 >> 0x18);
  return;
}

