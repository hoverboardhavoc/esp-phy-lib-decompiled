/*
 * Last changed at upstream commit 9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * https://github.com/espressif/esp-phy-lib/commit/9ff6110a98b8b3c5a26c8ef5bdbd2d1b30831541
 * Upstream date: 2021-08-11 11:36:04 +0800
 * Upstream subject: update libphy.a and libbtbb.a
 * Source: libphy -> phy_chip_v7_cal.o -> tx_cap_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_cap_init(void)

{
  undefined *puVar1;
  char *pcVar2;
  int iVar3;
  
  if ((-1 < (int)(_DAT_0001310c << 0xd)) && (DAT_00013198 != '\x01')) {
    txcal_debuge_mode();
    puVar1 = &phy_param;
    iVar3 = 0;
    do {
      pcVar2 = &CSWTCH_195 + iVar3;
      iVar3 = iVar3 + 1;
      set_channel_rfpll_freq((int)*pcVar2,DAT_000130b3,0);
      rfcal_txcap(0xe0,0x18,0,puVar1);
      puVar1 = puVar1 + 3;
    } while (iVar3 != 3);
    txcal_work_mode();
    _DAT_0001310c = _DAT_0001310c | 0x40000;
  }
  return;
}

