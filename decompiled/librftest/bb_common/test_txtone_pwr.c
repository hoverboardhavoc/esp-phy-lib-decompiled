/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> bb_common.o -> test_txtone_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

int test_txtone_pwr(undefined1 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  txcal_debuge_mode();
  if (param_3 == 0) {
    start_tx_tone_step(1,param_4,param_1,0,0,0);
    iVar1 = 0;
    for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
      iVar3 = get_power_db(0xf4);
      iVar1 = iVar1 + iVar3;
    }
  }
  else {
    iVar2 = 0;
    iVar1 = 0;
    if (param_3 == 1) {
      ets_delay_us(200);
      for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
        start_tx_tone_step(1,param_4,param_1,0,0,0);
        iVar3 = get_power_db(0xf4);
        iVar2 = iVar2 + iVar3;
        stop_tx_tone(1);
      }
      txcal_work_mode();
      iVar1 = iVar2;
    }
  }
  phy_printf(&_LC26,iVar1);
  return iVar1;
}

