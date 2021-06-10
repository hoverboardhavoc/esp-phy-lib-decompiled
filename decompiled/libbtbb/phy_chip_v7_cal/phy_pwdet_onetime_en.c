/*
 * Last changed at upstream commit 5fd56f1692128209056fea699f9d118e88e176f6
 * https://github.com/espressif/esp-phy-lib/commit/5fd56f1692128209056fea699f9d118e88e176f6
 * Upstream date: 2021-06-10 20:36:13 +0800
 * Upstream subject: esp32h2: add phy libs
 * Source: libbtbb -> phy_chip_v7_cal.o -> phy_pwdet_onetime_en
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void phy_pwdet_onetime_en(void)

{
  uint uVar1;
  
  pwdet_sar2_init();
  uVar1 = i2c_to_apb_rd(0x6000e060);
  i2c_to_apb_wr(0x6000e060,uVar1 & 0xfffffffe);
  uVar1 = i2c_to_apb_rd(0x6000e060);
  i2c_to_apb_wr(0x6000e060,uVar1 | 1);
  phy_pwdet_onetime_flag = 1;
  return;
}

