/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_debug.o -> phy_get_vdd33
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint phy_get_vdd33(void)

{
  int iVar1;
  
  pbus_debugmode();
  pbus_force_test(3,1,7);
  i2c_writeReg_Mask(0x6b,1,5,2,2,1);
  iVar1 = get_sar2_vol(3);
  i2c_writeReg_Mask(0x6b,1,5,2,2,0);
  pbus_force_test(3,1,0);
  pbus_workmode();
  return (uint)(iVar1 << 0x12) >> 0x10;
}

