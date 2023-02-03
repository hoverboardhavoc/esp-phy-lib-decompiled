/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_pwdet.o -> read_sar_dout
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void read_sar_dout(ushort *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)&DAT_600a0824;
  do {
    uVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    *param_1 = (ushort)(uVar2 >> 1) & 0x1fff;
    param_1[1] = (ushort)(uVar2 >> 0x11) & 0x1fff;
    param_1 = param_1 + 2;
  } while (puVar1 != (uint *)0x600a0834);
  return;
}

