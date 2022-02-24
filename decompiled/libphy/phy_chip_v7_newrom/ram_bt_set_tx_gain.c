/*
 * Last changed at upstream commit 449b432d94b968a75ffabffae91fe15796de7644
 * https://github.com/espressif/esp-phy-lib/commit/449b432d94b968a75ffabffae91fe15796de7644
 * Upstream date: 2022-02-24 11:32:38 +0800
 * Upstream subject: Update phy lib: S3_20220128_fbd66bc :  for high/low temperature performance C3_20220119_908_049c04c : for high/low temperature performance
 * Source: libphy -> phy_chip_v7_newrom.o -> ram_bt_set_tx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_bt_set_tx_gain(void)

{
  ram_bt_get_tx_gain(&phy_param,(int)DAT_00012180,(int)DAT_00012200,&phy_param,&phy_param,&phy_param
                     ,&phy_param,&phy_param);
  rom_set_tx_gain_mem(1,0x10,&phy_param,&phy_param,&phy_param,&phy_param);
  _DAT_60006014 = _phy_param;
  _DAT_60006018 = _phy_printf;
  _DAT_6000601c = _chip7_phy_init_ctrl;
  _DAT_60006020 = _rfpll_cap_correct;
  return;
}

