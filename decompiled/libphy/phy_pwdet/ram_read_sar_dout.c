/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_pwdet.o -> ram_read_sar_dout
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void ram_read_sar_dout(ushort *param_1)

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

