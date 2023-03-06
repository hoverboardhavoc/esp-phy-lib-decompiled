/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_init.o -> register_chipv7_phy
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 register_chipv7_phy(int param_1)

{
  undefined1 uVar1;
  
  DAT_00010537 = 3;
  phy_dis_hw_set_freq();
  if (DAT_0001052a == '\0') {
    if (param_1 == 0) {
      DAT_0001053c = 0x200000;
    }
    else if ((param_1 != 1) || (DAT_0001053c != 0)) {
      DAT_0001053c = 0;
    }
  }
  rf_init(1);
  bb_init();
  if (((DAT_0001052a == '\0') && (get_temp_init(), DAT_0001052a == '\0')) && (DAT_00010538 != '\0'))
  {
    chip_v7_set_chan_offset(0);
  }
  uVar1 = DAT_60012454;
  DAT_60012451 = 0x17;
  DAT_60012452 = 1;
  DAT_60012453 = 0;
  DAT_60012454 = 0;
  i2c_readReg(99,1,0,uVar1);
  DAT_0001052a = 1;
  phy_en_hw_set_freq();
  return 0;
}

