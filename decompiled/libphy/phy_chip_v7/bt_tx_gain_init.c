/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
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
  uint uVar4;
  
  bt_txdc_cal();
  bt_txiq_cal();
  bt_tx_pwctrl_init();
  rom_bt_set_tx_gain(0);
  uVar4 = 0;
  do {
    uVar1 = (uint)bRam00013f31;
    iVar2 = (**(code **)(g_phyFuns + 0x110))
                      (&phy_param,(uVar4 & 0xff) / 6,*(code **)(g_phyFuns + 0x110));
    uVar3 = uVar4 * 3;
    uVar4 = uVar4 + 1;
    _DAT_6000e148 =
         ((int)((uVar1 - iVar2) * 0x1000000) >> 0x18) << 0x10 | _DAT_6000e0c0 & 0xff00ffff;
    _DAT_6000e0c4 = (_DAT_6000e0c4 & 0xffffff00 | uVar3) & 0xfffffdff;
  } while (uVar4 != 0x55);
  return;
}

