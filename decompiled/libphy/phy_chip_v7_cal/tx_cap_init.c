/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
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
  int iVar2;
  
  if ((-1 < (int)(_DAT_0001310c << 0xd)) && (DAT_00013198 != '\x01')) {
    txcal_debuge_mode();
    puVar1 = &phy_param;
    iVar2 = 0;
    do {
      set_channel_rfpll_freq((int)(char)(&CSWTCH_197)[iVar2],DAT_000130b3,0);
      rfcal_txcap(0xe0,0x18,0,puVar1);
      if (chip_lp_en != '\0') break;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 3;
    } while (iVar2 != 3);
    txcal_work_mode();
    _DAT_0001310c = _DAT_0001310c | 0x40000;
  }
  return;
}

