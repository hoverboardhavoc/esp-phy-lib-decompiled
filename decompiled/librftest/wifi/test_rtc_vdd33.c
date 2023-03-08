/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> test_rtc_vdd33
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 test_rtc_vdd33(undefined4 param_1)

{
  undefined4 uVar1;
  
  (**(code **)(_g_phyFuns + 0x1d4))(*(code **)(_g_phyFuns + 0x1d4));
  (**(code **)(_g_phyFuns + 0x1cc))(4,1,2,*(code **)(_g_phyFuns + 0x1cc));
  (**(code **)(_g_phyFuns + 0x1bc))(0x6b,0,9,7,7,1,*(code **)(_g_phyFuns + 0x1bc));
  uVar1 = rtc_sar_read(param_1);
  (**(code **)(_g_phyFuns + 0x1bc))(0x6b,0,9,7,7,0,*(code **)(_g_phyFuns + 0x1bc));
  (**(code **)(_g_phyFuns + 0x1d8))(*(code **)(_g_phyFuns + 0x1d8));
  return uVar1;
}

