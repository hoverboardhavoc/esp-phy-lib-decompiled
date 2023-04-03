/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_init.o -> register_chipv7_phy
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 register_chipv7_phy(int param_1)

{
  undefined1 uVar1;
  
  DAT_00010581 = 3;
  phy_dis_hw_set_freq();
  if (DAT_00010566 == '\0') {
    if (param_1 == 0) {
      DAT_00010584 = 0x200000;
    }
    else if ((param_1 != 1) || (DAT_00010584 != 0)) {
      DAT_00010584 = 0;
    }
  }
  rf_init(1);
  bb_init();
  if (((DAT_00010566 == '\0') && (get_temp_init(), DAT_00010566 == '\0')) && (DAT_00010582 != '\0'))
  {
    chip_v7_set_chan_offset(0);
  }
  uVar1 = DAT_60012454;
  DAT_60012451 = 0x17;
  DAT_60012452 = 1;
  DAT_60012453 = 0;
  DAT_60012454 = 0;
  i2c_readReg(99,1,0,uVar1);
  DAT_00010566 = 1;
  phy_en_hw_set_freq();
  return 0;
}

