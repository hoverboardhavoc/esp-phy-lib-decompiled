/*
 * Last changed at upstream commit 8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * https://github.com/espressif/esp-phy-lib/commit/8a9ecaae72c68ad0b54f06cec82c014d40fbfd2f
 * Upstream date: 2021-09-10 13:00:58 +0800
 * Upstream subject: esp32h2: fix tx/rx channel setting
 * Source: libphy -> phy_chip_v7_newrom.o -> bt_track_pll_cap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_track_pll_cap(void)

{
  undefined4 uVar1;
  undefined1 uStack_11;
  
  uVar1 = enter_critical_phy();
  DAT_00012076 = '\x01';
  tsens_temp_read();
  if ((DAT_00012076 != '\0') && (_fe_txrx_reset == 0)) {
    while ((int)_DAT_6000e168 < 0) {
      ets_delay_us(2);
    }
    pll_correct_dcap(_DAT_6000e168 >> 0x18 & 0x7f,&uStack_11);
  }
  if (DAT_00012075 != '\0') {
    bt_track_tx_power(1,DAT_00012073);
  }
  exit_critical_phy(uVar1);
  return;
}

