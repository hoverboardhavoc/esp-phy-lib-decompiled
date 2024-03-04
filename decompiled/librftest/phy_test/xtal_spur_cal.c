/*
 * Last changed at upstream commit 603b69583635ffcedf2a5e1d0f70da77edf82d10
 * https://github.com/espressif/esp-phy-lib/commit/603b69583635ffcedf2a5e1d0f70da77edf82d10
 * Upstream date: 2024-03-04 14:31:40 +0800
 * Upstream subject: feat: add esp32c5 beta3 support wifi
 * Source: librftest -> phy_test.o -> xtal_spur_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void xtal_spur_cal(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  spur_data_1p1 = rx_spur_cal(0x960,param_1,param_2);
  DAT_00011589 = rx_spur_cal(0x988,param_1,param_2);
  uVar1 = rx_spur_cal(0x9b0,param_1,param_2);
  DAT_0001158a = (undefined1)uVar1;
  if (param_2 != 0) {
    phy_printf("%d,%d,%d\n",spur_data_1p1,DAT_00011589,uVar1);
    return;
  }
  return;
}

