/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
 * Source: libphy -> phy_init.o -> register_chipv7_phy
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 register_chipv7_phy(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  
  DAT_000104d3 = 3;
  phy_dis_hw_set_freq();
  if (DAT_000104c6 == '\0') {
    uVar2 = 0x200000;
    if (param_1 != 0) {
      if (param_1 == 1) {
        uVar2 = DAT_000104d8;
        if (DAT_000104d8 != 0) {
          uVar2 = 0x11ed900;
        }
      }
      else {
        DAT_000104d8 = 0;
        uVar2 = DAT_000104d8;
      }
    }
    DAT_000104d8 = uVar2;
    DAT_000104d8 = DAT_000104d8 | 0x10;
  }
  phy_printf("%s, %d\n","register_chipv7_phy",0xab);
  rf_init();
  bb_init();
  if (((DAT_000104c6 == '\0') && (get_temp_init(), DAT_000104c6 == '\0')) && (DAT_000104d4 != '\0'))
  {
    chip_v7_set_chan_offset(0);
  }
  phy_bbpll_cal(0);
  uVar1 = DAT_60012454;
  DAT_60012451 = 0x17;
  DAT_60012452 = 1;
  DAT_60012453 = 0;
  DAT_60012454 = 0;
  i2c_readReg(99,1,0,uVar1);
  DAT_000104c6 = 1;
  phy_en_hw_set_freq();
  return 0;
}

