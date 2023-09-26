/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> bb_common.o -> test_noise_floor
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void test_noise_floor(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  chip_v7_set_chan(0);
  do {
    for (iVar1 = 0; iVar1 != param_1; iVar1 = iVar1 + 1) {
      ets_delay_us(1000);
    }
    noise_check_loop(1,1);
    uVar2 = read_hw_noisefloor();
    phy_printf("noise: %d\n",uVar2);
    iVar1 = GetStopCmd();
  } while (iVar1 != 0);
  return;
}

