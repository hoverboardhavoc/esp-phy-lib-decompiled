/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_basic.o -> set_adc_rand
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
    (**(code **)(_g_phyFuns + 0x1e0))(*(code **)(_g_phyFuns + 0x1e0));
    (**(code **)(_g_phyFuns + 0x1d8))(*(code **)(_g_phyFuns + 0x1d8));
    (**(code **)(_g_phyFuns + 0x54))(0,*(code **)(_g_phyFuns + 0x54));
    (**(code **)(_g_phyFuns + 0x50))(0,*(code **)(_g_phyFuns + 0x50));
  }
  else {
    (**(code **)(_g_phyFuns + 0x54))(1,*(code **)(_g_phyFuns + 0x54));
    (**(code **)(_g_phyFuns + 0x50))(1,*(code **)(_g_phyFuns + 0x50));
    _DAT_60008034 = _DAT_60008034 | 0xf8000000;
    _DAT_60006110 = _DAT_60006110 | 0x1000000;
    (**(code **)(_g_phyFuns + 0x1d4))(*(code **)(_g_phyFuns + 0x1d4));
    uStack_18 = 0x1000100;
    uStack_14 = 0x1000100;
    (**(code **)(_g_phyFuns + 0x1f0))(&uStack_18,*(code **)(_g_phyFuns + 0x1f0));
    (**(code **)(_g_phyFuns + 0x1e4))(0,*(code **)(_g_phyFuns + 0x1e4));
    (**(code **)(_g_phyFuns + 0x1cc))(0,1,0,*(code **)(_g_phyFuns + 0x1cc));
    pbus_rx_dco_cal(4000,&local_20,10,0,0);
  }
  return;
}

