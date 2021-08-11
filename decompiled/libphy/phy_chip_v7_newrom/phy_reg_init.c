/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
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
  _DAT_6001104c = _DAT_6001104c | 0x70;
  _DAT_60006100 = _DAT_60006100 & 0xfe7fffff | 0x2c00000;
  return;
}

