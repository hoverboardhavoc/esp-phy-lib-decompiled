/*
 * Last changed at upstream commit b7095b90157d98f116ba43c35b12d51192dc91c8
 * https://github.com/espressif/esp-phy-lib/commit/b7095b90157d98f116ba43c35b12d51192dc91c8
 * Upstream date: 2021-10-12 21:50:40 +0800
 * Upstream subject: Update libphy and libbb
 * Source: libphy -> phy_chip_v7.o -> register_chipv7_phy
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 register_chipv7_phy(int param_1)

{
  DAT_00012efb = 3;
  phy_get_romfunc_addr();
  _DAT_6000e130 = _DAT_6000e130 & 0xfffdffff | 0x20000;
  phy_dis_hw_set_freq();
  i2c_master_reset();
  if (DAT_00012eed == '\0') {
    if (param_1 == 0) {
      DAT_00012f54 = 0x200000;
      DAT_00012f70 = 0xfe80;
    }
    else if (param_1 == 1) {
      if (DAT_00012f54 != 0) {
        DAT_00012f54 = 0x11ed900;
      }
    }
    else {
      DAT_00012f54 = 0;
    }
    DAT_00012f54 = DAT_00012f54 | 0x10;
  }
  rf_init();
  bb_init();
  if (((DAT_00012eed == '\0') && (get_temp_init(), DAT_00012eed == '\0')) && (DAT_00012f52 != '\0'))
  {
    chip_v7_set_chan_offset(0);
  }
  phy_bbpll_cal(0);
  _DAT_6001cd0c = 0x117;
  i2c_readReg(99,1,0);
  DAT_00012eed = 1;
  phy_en_hw_set_freq();
  return 0;
}

