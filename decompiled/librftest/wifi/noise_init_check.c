/*
 * Last changed at upstream commit 92801f9b6fe3658b31590dbb77b97261ecde93d0
 * https://github.com/espressif/esp-phy-lib/commit/92801f9b6fe3658b31590dbb77b97261ecde93d0
 * Upstream date: 2023-07-24 22:19:06 +0800
 * Upstream subject: Protection of tracking
 * Source: librftest -> wifi.o -> noise_init_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void noise_init_check(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  cVar1 = '\x01';
  do {
    if (param_1 != 0) {
      chip_v7_set_chan((int)cVar1,0);
    }
    uVar2 = check_noise_floor1();
    uVar3 = check_noise_floor1();
    uVar4 = check_noise_floor1();
    cVar1 = cVar1 + '\x05';
    phy_printf("%d,%d,%d;;;",uVar2,uVar3,uVar4);
  } while (cVar1 != '\x10');
  phy_printf(&_LC12);
  return;
}

