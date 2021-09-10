/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
 * Source: libphy -> phy_chip_v7_newrom.o -> txpwr_correct
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void txpwr_correct(int param_1,char *param_2,short *param_3,int param_4,int param_5)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar1 = *param_2;
  if (param_3[1] < param_4) {
    *param_2 = (char)(((param_3[1] - param_5) * 0x10000 >> 0x10) / 8);
  }
  else {
    if (param_4 < *param_3) {
      cVar2 = (char)(((*param_3 - param_5) * 0x10000 >> 0x10) / 8);
    }
    else {
      cVar2 = phy_param;
    }
    *param_2 = cVar2;
  }
  if ((*param_2 != cVar1) && (param_1 != 0)) {
    if (chip_lp_en == '\0') {
      uVar3 = 0x10;
    }
    else {
      uVar3 = 0xd;
    }
    bt_get_tx_gain(&phy_param,(int)DAT_0001214d,(int)DAT_000121aa,&phy_param,&phy_param,&phy_param,
                   &phy_param,&phy_param);
    set_tx_gain_mem(0,uVar3,&phy_param,&phy_param,&phy_param,_DAT_0001214e);
    _DAT_60006004 = _phy_param;
    _DAT_60006008 = _chip_lp_en;
    _DAT_6000600c = _ets_printf;
    _DAT_60006010 = _i2c_writeReg;
    return;
  }
  return;
}

