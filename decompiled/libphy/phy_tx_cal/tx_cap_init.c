/*
 * Last changed at upstream commit d1f5593aae9be976878fa89ef4ad263c481567c4
 * https://github.com/espressif/esp-phy-lib/commit/d1f5593aae9be976878fa89ef4ad263c481567c4
 * Upstream date: 2023-02-03 08:24:50 +0000
 * Upstream subject: [ESP32H2] Update libphy
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
  
  if (-1 < (int)(_set_txcap_reg << 0xd)) {
    txcal_debuge_mode();
    puVar1 = &phy_param;
    iVar3 = 0;
    do {
      puVar2 = &CSWTCH_93 + iVar3;
      iVar3 = iVar3 + 1;
      set_channel_rfpll_freq(*puVar2,DAT_0001104f,0);
      rfcal_txcap(0xe0,0x18,0,puVar1);
      puVar1 = puVar1 + 3;
    } while (iVar3 != 3);
    txcal_work_mode();
    _set_txcap_reg = _set_txcap_reg | 0x40000;
  }
  return;
}

