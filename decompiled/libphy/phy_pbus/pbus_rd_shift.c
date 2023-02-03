/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_pbus.o -> pbus_rd_shift
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 pbus_rd_shift(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    uVar1 = 0;
    if (param_2 == 1) {
      uVar1 = 9;
    }
  }
  else if ((param_1 == 0) || (param_1 == 2)) {
    uVar1 = 9;
    if (param_2 == 1) {
      uVar1 = 0x12;
    }
  }
  else if ((param_1 != 3) || (uVar1 = 0x12, param_2 == 1)) {
    uVar1 = 0;
  }
  return uVar1;
}

