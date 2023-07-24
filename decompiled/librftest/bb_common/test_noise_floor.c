/*
 * Last changed at upstream commit 92801f9b6fe3658b31590dbb77b97261ecde93d0
 * https://github.com/espressif/esp-phy-lib/commit/92801f9b6fe3658b31590dbb77b97261ecde93d0
 * Upstream date: 2023-07-24 22:19:06 +0800
 * Upstream subject: Protection of tracking
 * Source: librftest -> bb_common.o -> test_noise_floor
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_noise_floor(char param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  chip_v7_set_chan((int)param_1,0);
  do {
    for (iVar1 = 0; iVar1 != param_2; iVar1 = iVar1 + 1) {
      ets_delay_us(1000);
    }
    uVar2 = (**(code **)(_g_phyFuns + 0x88))(*(code **)(_g_phyFuns + 0x88));
    phy_printf("noise: %d\n",uVar2);
    iVar1 = GetStopCmd();
  } while (iVar1 != 0);
  return;
}

