/*
 * Last changed at upstream commit 4779ddaaf29e1d6aa2d26980103a1c1bbaa29462
 * https://github.com/espressif/esp-phy-lib/commit/4779ddaaf29e1d6aa2d26980103a1c1bbaa29462
 * Upstream date: 2022-01-04 15:41:20 +0800
 * Upstream subject: fix the bug that phy libs still have ets_printf
 * Source: libphy -> phy_chip_v7_newrom.o -> bt_set_tx_gain
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_set_tx_gain(void)

{
  undefined4 uVar1;
  
  if (chip_lp_en == '\0') {
    uVar1 = 0x10;
  }
  else {
    uVar1 = 0xd;
  }
  bt_get_tx_gain(&phy_param,(int)DAT_0001214d,(int)DAT_000121aa,&phy_param,&phy_param,&phy_param,
                 &phy_param,&phy_param);
  set_tx_gain_mem(0,uVar1,&phy_param,&phy_param,&phy_param,_DAT_0001214e);
  _DAT_60006004 = _phy_param;
  _DAT_60006008 = _chip_lp_en;
  _DAT_6000600c = _phy_printf;
  _DAT_60006010 = _i2c_writeReg;
  return;
}

