/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_newrom.o -> txpwr_correct
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txpwr_correct(int param_1,char *param_2,short *param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *param_2;
  if ((param_3[1] < param_4) || (param_4 < *param_3)) {
    cVar2 = temp_to_power(param_5);
    *param_2 = cVar2;
  }
  else {
    *param_2 = phy_param;
  }
  if ((*param_2 != cVar1) && (param_1 != 0)) {
    bt_get_tx_gain(&phy_param,(int)DAT_0001214d,(int)DAT_000121aa,&phy_param,&phy_param,&phy_param,
                   &phy_param,&phy_param);
    set_tx_gain_mem(0,0x10,&phy_param,&phy_param,&phy_param,_DAT_0001214e);
    _DAT_60006004 = _phy_param;
    _DAT_60006008 = _ets_printf;
    _DAT_6000600c = _i2c_writeReg;
    _DAT_60006010 = _bb_bss_cbw40;
    return;
  }
  return;
}

