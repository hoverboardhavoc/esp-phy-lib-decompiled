/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> rf_test.o -> tx_contin_en
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_contin_en(int param_1)

{
  char *pcVar1;
  
  fcc_mode_sel = (undefined1)param_1;
  if (param_1 == 1) {
    pcVar1 = " Tx continuous test!\n";
    _DAT_600310d0 = _DAT_600310d0 & 0xfff87fff | 0x8000;
  }
  else {
    pcVar1 = " Tx packet test!\n";
    _DAT_600310d0 = _DAT_600310d0 & 0xfff87fff;
  }
  phy_printf(pcVar1);
  return;
}

