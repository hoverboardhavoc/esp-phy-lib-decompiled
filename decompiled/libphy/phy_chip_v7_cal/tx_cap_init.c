/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_cal.o -> tx_cap_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_cap_init(void)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  
  if (-1 < (int)(_DAT_00013128 << 0xd)) {
    txcal_debuge_mode();
    (**(code **)(_g_phyFuns + 0x1bc))(0x6b,0,1,3,0,0xb,*(code **)(_g_phyFuns + 0x1bc));
    puVar3 = &phy_param;
    iVar2 = 0;
    uVar4 = 0x50;
    do {
      set_channel_rfpll_freq((int)(char)(&_LANCHOR2)[iVar2],DAT_000130fb,0);
      if (iVar2 == 0) {
        (**(code **)(_g_phyFuns + 0x1bc))(0x6b,0,1,3,0,9,*(code **)(_g_phyFuns + 0x1bc));
        (**(code **)(_g_phyFuns + 0x1bc))(0x6b,0,2,3,0,0xd,*(code **)(_g_phyFuns + 0x1bc));
        (**(code **)(_g_phyFuns + 0x1bc))(0x6b,0,2,7,4,4,*(code **)(_g_phyFuns + 0x1bc));
        cVar1 = get_power_atten(0x80,uVar4,0x28,0xfc,0);
        uVar4 = (uint)cVar1;
      }
      rfcal_txcap(0x80,uVar4 & 0xff,0,puVar3);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 3;
    } while (iVar2 != 3);
    txcal_work_mode();
    _DAT_00013128 = _DAT_00013128 | 0x40000;
  }
  return;
}

