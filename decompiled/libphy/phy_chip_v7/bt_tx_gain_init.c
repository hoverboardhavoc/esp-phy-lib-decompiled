/*
 * Last changed at upstream commit dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * https://github.com/espressif/esp-phy-lib/commit/dcbe6085e0215e2ea6a2e43b1106bdb15807f398
 * Upstream date: 2022-04-07 23:37:47 -0400
 * Upstream subject: C3/S3 fix "i2c critical" and iram functions
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
         ((int)(((uint)DAT_0001446d - iVar2) * 0x1000000) >> 0x18 & 0xffU) << 0x10 |
         _DAT_6000e0c0 & 0xff00ffff;
    _DAT_6000e0c4 = (_DAT_6000e0c4 & 0xffffff00 | uVar3) & 0xfffffdff;
  } while (uVar1 != 0x55);
  return;
}

