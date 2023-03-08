/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> bb_common.o -> test_noise_floor
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void test_noise_floor(char param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  chip_v7_set_chan((int)param_1,0);
  do {
    for (iVar1 = 0; iVar1 != param_2; iVar1 = iVar1 + 1) {
      ets_delay_us(1000);
    }
    uVar2 = read_hw_noisefloor();
    phy_printf("noise: %d\n",uVar2);
    iVar1 = GetStopCmd();
  } while (iVar1 != 0);
  return;
}

