/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_analog_cal.o -> get_rc_dout
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 get_rc_dout(int param_1)

{
  undefined4 uVar1;
  
  (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,2,6,5,2,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,6,4,0,2,*(code **)(_g_phyFuns + 0x1bc));
  if (param_1 == 1) {
    uVar1 = 7;
  }
  else {
    uVar1 = 6;
    if (param_1 != 2) {
      uVar1 = 0xb;
    }
  }
  (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,4,7,4,uVar1,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x61,0,8,2,2,1,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,4,0,0,1,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,4,3,3,0,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,4,3,3,1,*(code **)(_g_phyFuns + 0x1bc));
  ets_delay_us(100);
  uVar1 = (**(code **)(_g_phyFuns + 0x1b8))(0x6a,0,5,5,0,*(code **)(_g_phyFuns + 0x1b8));
  (**(code **)(_g_phyFuns + 0x1bc))(0x61,0,8,2,2,0,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,4,0,0,0,*(code **)(_g_phyFuns + 0x1bc));
  return uVar1;
}

