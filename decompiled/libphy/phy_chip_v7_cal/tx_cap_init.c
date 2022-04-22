/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7_cal.o -> tx_cap_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_cap_init(void)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  
  if ((-1 < (int)(_DAT_00013128 << 0xd)) && (DAT_0001320c != '\x01')) {
    txcal_debuge_mode();
    puVar2 = &phy_param;
    iVar1 = 0;
    uVar3 = 0x50;
    do {
      set_channel_rfpll_freq((int)(char)(&CSWTCH_334)[iVar1],DAT_000130fb,0);
      (**(code **)(_g_phyFuns + 0x1bc))(0x6b,0,1,3,0,10,*(code **)(_g_phyFuns + 0x1bc));
      (**(code **)(_g_phyFuns + 0x1bc))(0x6b,0,2,3,0,0xd,*(code **)(_g_phyFuns + 0x1bc));
      (**(code **)(_g_phyFuns + 0x1bc))(0x6b,0,2,7,4,4,*(code **)(_g_phyFuns + 0x1bc));
      if (iVar1 == 0) {
        DAT_000130e0 = get_power_atten(0x80,uVar3,0x28,0xfc,0);
        uVar3 = (uint)DAT_000130e0;
      }
      rfcal_txcap(0x80,uVar3 & 0xff,0,puVar2);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 3;
    } while (iVar1 != 3);
    txcal_work_mode();
    _DAT_00013128 = _DAT_00013128 | 0x40000;
  }
  return;
}

