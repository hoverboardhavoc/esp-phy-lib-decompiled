/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
 * Source: libphy -> phy_chip_v7_newrom.o -> phy_reg_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_reg_init(void)

{
  iq_corr_enable();
  agc_reg_init(DAT_000121a4,DAT_000121a3);
  _DAT_6001c064 = _DAT_000120ac;
  _DAT_6001c114 = _DAT_000120ac;
  bb_reg_init();
  bb_wdg_cfg();
  tx_paon_set();
  phy_set_bbfreq_init(1);
  tx_pwctrl_bg_init();
  noise_floor_auto_set();
  phy_ant_init();
  _DAT_60006100 = _DAT_60006100 & 0xfe7fffff | 0x2c00000;
  return;
}

