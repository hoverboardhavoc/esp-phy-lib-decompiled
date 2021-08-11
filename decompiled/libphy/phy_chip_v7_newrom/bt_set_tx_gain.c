/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_newrom.o -> bt_set_tx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_set_tx_gain(void)

{
  bt_get_tx_gain(&phy_param,(int)DAT_0001214d,(int)DAT_000121aa,&phy_param,&phy_param,&phy_param,
                 &phy_param,&phy_param);
  set_tx_gain_mem(0,0x10,&phy_param,&phy_param,&phy_param,_DAT_0001214e);
  _DAT_60006004 = _phy_param;
  _DAT_60006008 = _ets_printf;
  _DAT_6000600c = _i2c_writeReg;
  _DAT_60006010 = _bb_bss_cbw40;
  return;
}

