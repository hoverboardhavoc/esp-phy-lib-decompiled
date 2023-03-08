/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> rf_test.o -> bt_tx_tone
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bt_tx_tone(int param_1,int param_2,char param_3)

{
  char *pcVar1;
  
  if (param_1 == 0) {
    _DAT_60006110 = _DAT_60006110 & 0xfffcf0ff;
    start_tx_tone_step(0,param_3 + 'P',0,0,0);
    pcVar1 = "BT TX TONE STOP!\n";
  }
  else {
    set_chan_freq_sw_start((param_2 + 1) * 2 & 0xfe,0,phy_param);
    _DAT_60006110 = _DAT_60006110 & 0xfffff0ff | 0x30e00;
    start_tx_tone_step(1,0,param_3 + 'P',0,0,0);
    pcVar1 = "BT TX TONE START!\n";
  }
  phy_printf(pcVar1);
  return;
}

