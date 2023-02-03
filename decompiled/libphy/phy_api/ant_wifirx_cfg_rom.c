/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_api.o -> ant_wifirx_cfg_rom
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ant_wifirx_cfg_rom(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = CONCAT13(DAT_60012464,CONCAT12(DAT_60012463,CONCAT11(DAT_60012462,DAT_60012461))) &
          0xfffffffd;
  DAT_60012461 = (byte)((param_1 & 1) << 1) | (byte)uVar1;
  DAT_60012462 = (char)(uVar1 >> 8);
  DAT_60012463 = (char)(uVar1 >> 0x10);
  DAT_60012464 = (char)(uVar1 >> 0x18);
  _DAT_600a08b0 = _DAT_600a08b0 & 0xffffff | param_2 << 0x18;
  _DAT_600a08b4 =
       ((_DAT_600a08b4 & 0xffffff00 | param_2) & 0xffff00ff | param_3 << 8) & 0xff00ffff |
       param_3 << 0x10;
  return;
}

