/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
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
  _DAT_6000600c = _ets_printf;
  _DAT_60006010 = _i2c_writeReg;
  return;
}

