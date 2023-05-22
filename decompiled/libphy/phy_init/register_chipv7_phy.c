/*
 * Last changed at upstream commit 05e53904ac98632e09d78693437b7fa0b35f36da
 * https://github.com/espressif/esp-phy-lib/commit/05e53904ac98632e09d78693437b7fa0b35f36da
 * Upstream date: 2023-05-22 12:26:13 +0800
 * Upstream subject: update h2 libphy phy_version: 200,0, 1cef4f4, May 22 2023, 11:57:13
 * Source: libphy -> phy_init.o -> register_chipv7_phy
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 register_chipv7_phy(int param_1)

{
  undefined1 uVar1;
  
  DAT_00010609 = 3;
  phy_dis_hw_set_freq();
  if (DAT_000105ee == '\0') {
    if (param_1 == 0) {
      DAT_0001060c = 0x200000;
    }
    else if ((param_1 != 1) || (DAT_0001060c != 0)) {
      DAT_0001060c = 0;
    }
  }
  rf_init(1);
  bb_init();
  if (((DAT_000105ee == '\0') && (get_temp_init(), DAT_000105ee == '\0')) && (DAT_0001060a != '\0'))
  {
    chip_v7_set_chan_offset(0);
  }
  uVar1 = DAT_60012454;
  DAT_60012451 = 0x17;
  DAT_60012452 = 1;
  DAT_60012453 = 0;
  DAT_60012454 = 0;
  i2c_readReg(99,1,0,uVar1);
  DAT_000105ee = 1;
  phy_en_hw_set_freq();
  return 0;
}

