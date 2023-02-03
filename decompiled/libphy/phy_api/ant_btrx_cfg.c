/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_api.o -> ant_btrx_cfg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ant_btrx_cfg(int param_1,uint param_2)

{
  _DAT_600a08b8 =
       ((_DAT_600a08b8 & 0xffff00ff | param_1 << 8) & 0xff00ffff | param_1 << 0x10) & 0xffffff |
       param_2 << 0x18;
  _DAT_600a08bc = _DAT_600a08bc & 0xffffff00 | param_2;
  return;
}

