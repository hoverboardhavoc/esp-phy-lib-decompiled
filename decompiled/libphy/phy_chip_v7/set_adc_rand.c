/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7.o -> set_adc_rand
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_adc_rand(int param_1)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_20 = 0x1000100;
  uStack_1c = 0x1000100;
  if (param_1 == 0) {
    (**(code **)(g_phyFuns + 0x1e0))(*(code **)(g_phyFuns + 0x1e0));
    (**(code **)(g_phyFuns + 0x1d8))(*(code **)(g_phyFuns + 0x1d8));
    (**(code **)(g_phyFuns + 0x54))(0,*(code **)(g_phyFuns + 0x54));
    (**(code **)(g_phyFuns + 0x50))(0,*(code **)(g_phyFuns + 0x50));
  }
  else {
    (**(code **)(g_phyFuns + 0x54))(1,*(code **)(g_phyFuns + 0x54));
    (**(code **)(g_phyFuns + 0x50))(1,*(code **)(g_phyFuns + 0x50));
    _DAT_60008034 = _DAT_60008034 | 0xf8000000;
    _DAT_60006110 = _DAT_60006110 | 0x1000000;
    (**(code **)(g_phyFuns + 0x1d4))(*(code **)(g_phyFuns + 0x1d4));
    uStack_18 = 0x1000100;
    uStack_14 = 0x1000100;
    (**(code **)(g_phyFuns + 0x1f0))(&uStack_18,*(code **)(g_phyFuns + 0x1f0));
    (**(code **)(g_phyFuns + 0x1e4))(0,*(code **)(g_phyFuns + 0x1e4));
    (**(code **)(g_phyFuns + 0x1cc))(0,1,0,*(code **)(g_phyFuns + 0x1cc));
    pbus_rx_dco_cal(4000,&local_20,10,0,0);
  }
  return;
}

