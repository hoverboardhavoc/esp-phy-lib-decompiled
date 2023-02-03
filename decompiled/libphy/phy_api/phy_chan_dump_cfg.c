/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_api.o -> phy_chan_dump_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 phy_chan_dump_cfg(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = CONCAT11(1,(byte)((param_1 & 1) << 3) | 0x17) & 0xffffff0f;
  uVar1 = CONCAT11((char)(uVar1 >> 8),(byte)((param_2 & 0xf) << 4) | (byte)uVar1) & 0xfffffffb;
  DAT_60012451 = (byte)((param_3 & 1) << 2) | (byte)uVar1;
  DAT_60012452 = (char)(uVar1 >> 8);
  DAT_60012453 = 0;
  DAT_60012454 = 0;
  return 0;
}

