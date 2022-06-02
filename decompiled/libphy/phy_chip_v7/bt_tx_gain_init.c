/*
 * Last changed at upstream commit 329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * https://github.com/espressif/esp-phy-lib/commit/329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * Upstream date: 2022-06-02 17:02:45 +0800
 * Upstream subject: cut init time and fix cal time 2ms!
 * Source: libphy -> phy_chip_v7.o -> bt_tx_gain_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_tx_gain_init(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  bt_txdc_cal();
  bt_txiq_cal();
  bt_tx_pwctrl_init();
  ram_bt_set_tx_gain(0);
  uVar1 = 0;
  do {
    iVar2 = bt_chan_pwr_interp(&phy_param,uVar1 & 0xff);
    uVar3 = uVar1 * 3;
    uVar1 = uVar1 + 1;
    _DAT_6000e148 =
         ((int)(((uint)DAT_00014425 - iVar2) * 0x1000000) >> 0x18 & 0xffU) << 0x10 |
         _DAT_6000e0c0 & 0xff00ffff;
    _DAT_6000e0c4 = (_DAT_6000e0c4 & 0xffffff00 | uVar3) & 0xfffffdff;
  } while (uVar1 != 0x55);
  return;
}

