/*
 * Last changed at upstream commit a7a0481e34fd4368aa15a143dfbd855015380fd4
 * https://github.com/espressif/esp-phy-lib/commit/a7a0481e34fd4368aa15a143dfbd855015380fd4
 * Upstream date: 2023-09-25 15:20:47 +0800
 * Upstream subject: phy_param_track_tot and phy_wifi_enable_set for all chips
 * Source: librftest -> wifi.o -> phy_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_init(void)

{
  undefined4 uVar1;
  undefined1 auStack_778 [1904];
  
  _phy_get_most_tpw = 0;
  DAT_00018135 = 0;
  uVar1 = 0;
  if (_DAT_60004038 == 0xc) {
    uVar1 = init_param_read();
  }
  register_chipv7_phy(init_param_default,auStack_778,2);
  flash_init_param_print(uVar1);
  return;
}

