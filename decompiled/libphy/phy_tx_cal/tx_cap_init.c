/*
 * Last changed at upstream commit 6b2f06a44d311d84700c55df60354a634239cb32
 * https://github.com/espressif/esp-phy-lib/commit/6b2f06a44d311d84700c55df60354a634239cb32
 * Upstream date: 2023-04-03 17:51:54 +0800
 * Upstream subject: esp32h2: update phylib for fix rx long term
 * Source: libphy -> phy_tx_cal.o -> tx_cap_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_cap_init(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if (-1 < (int)(_pkdet_vol_start << 0xd)) {
    txcal_debuge_mode();
    puVar1 = &phy_param;
    iVar3 = 0;
    do {
      puVar2 = &CSWTCH_82 + iVar3;
      iVar3 = iVar3 + 1;
      set_channel_rfpll_freq(*puVar2,DAT_00011031,0);
      rfcal_txcap(0xe0,0x50,0,puVar1);
      puVar1 = puVar1 + 2;
    } while (iVar3 != 3);
    txcal_work_mode();
    _pkdet_vol_start = _pkdet_vol_start | 0x40000;
  }
  return;
}

