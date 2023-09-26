/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> noise_init_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void noise_init_check(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  sVar1 = 1;
  do {
    if (param_1 != 0) {
      chip_v7_set_chan(sVar1,0);
    }
    uVar2 = check_noise_floor();
    uVar3 = check_noise_floor();
    uVar4 = check_noise_floor();
    sVar1 = sVar1 + 5;
    phy_printf("%d,%d,%d;;;",uVar2,uVar3,uVar4);
  } while (sVar1 != 0x10);
  phy_printf(&_LC11);
  return;
}

