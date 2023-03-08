/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> WifiTxStart
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void WifiTxStart(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                int param_6)

{
  int iVar1;
  
  if (tx_reg_opt != '\0') {
    phy_set_rate(param_1 & 0xff);
  }
  tx_pocket_num = 0;
  tx_contin_fcc_en = 0;
  _DAT_6001c458 = _DAT_6001c458 & 0xffefffff;
  _DAT_6001c400 = _DAT_6001c400 & 0xffdfffff;
  if ((param_6 != 0) && (adaptive_test_en == '\0')) {
    (**(code **)(_g_phyFuns + 0x10))(*(code **)(_g_phyFuns + 0x10));
  }
  _DAT_60033ca8 = 0;
  if (param_2 == 0) {
    do {
      test_tx_frame(param_1 >> 0x10,param_1 & 0xffff,1,param_3,param_4,param_5);
      iVar1 = esp_phy_getstopcmd();
    } while (iVar1 != 0);
  }
  else {
    test_tx_frame(param_1 >> 0x10,param_1 & 0xffff,param_2,param_3,param_4,param_5);
  }
  if (fcc_mode_flag != '\0') {
    (**(code **)(_g_phyFuns + 0x1d8))(*(code **)(_g_phyFuns + 0x1d8));
    phy_tx_pwr_track_en = 0;
    phy_tx_pwr_correct_en = 0;
    fcc_mode_flag = '\0';
  }
  if ((param_6 != 0) && (adaptive_test_en == '\0')) {
    (**(code **)(_g_phyFuns + 0x14))(*(code **)(_g_phyFuns + 0x14));
  }
                    /* WARNING: Could not recover jumptable at 0x000103bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,0,3,0,0xc);
  return;
}

