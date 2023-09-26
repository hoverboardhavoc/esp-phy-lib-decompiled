/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> WifiTxStart
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void WifiTxStart(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                int param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_stack_00000000;
  
  _tx_temp_time = _DAT_600ad000;
  set_rate_power_index(param_1 & 0xff);
  uVar1 = param_1 & 0xff;
  phy_11ax_tx_mode(uVar1,param_8,in_stack_00000000);
  phy_set_rate(param_1 & 0xff);
  tx_pocket_num = 0;
  tx_contin_fcc_en = 0;
  _DAT_600a7418 = _DAT_600a7418 & 0xffefffff;
  _DAT_600a7400 = _DAT_600a7400 & 0xffdfffff;
  uVar2 = param_1 >> 0xf & 1;
  if ((param_6 != 0) && (adaptive_test_en == '\0')) {
    phy_disable_cca_new();
  }
  _DAT_600a4cb0 = 0;
  if (param_2 == 0) {
    do {
      test_tx_frame(0,uVar1,1,param_3,param_4,param_5,uVar2,param_7);
      iVar3 = esp_phy_getstopcmd();
    } while (iVar3 != 0);
  }
  else {
    test_tx_frame(0,uVar1,param_2,param_3,param_4,param_5,uVar2,param_7);
  }
  _DAT_600a0410 = _DAT_600a0410 & 0xff7fffff;
  if ((param_6 != 0) && (adaptive_test_en == '\0')) {
    phy_enable_cca_new();
    return;
  }
  return;
}

