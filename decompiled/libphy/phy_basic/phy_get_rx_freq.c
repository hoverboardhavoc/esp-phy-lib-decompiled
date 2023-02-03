/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_basic.o -> phy_get_rx_freq
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int phy_get_rx_freq(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 < 8) {
    return (int)(short)param_2 / 0x30;
  }
  uVar2 = (uint)(short)(param_2 >> 10);
  uVar1 = uVar2 & 0x3ff;
  if ((uVar2 & 0x200) != 0) {
    uVar1 = uVar1 - 0x400;
  }
  return (int)(short)((int)(uVar1 << 4) / 0xd);
}

