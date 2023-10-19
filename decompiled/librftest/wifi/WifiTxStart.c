/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> WifiTxStart
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void WifiTxStart(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                int param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = DAT_60012348;
  uVar1 = DAT_60012347;
  tx_pocket_num = 0;
  tx_contin_fcc_en = 0;
  uVar4 = CONCAT13(DAT_60012360,CONCAT12(DAT_6001235f,CONCAT11(DAT_6001235e,DAT_6001235d))) &
          0xffefffff;
  DAT_6001235e = (undefined1)(uVar4 >> 8);
  DAT_6001235f = (undefined1)(uVar4 >> 0x10);
  DAT_60012360 = (undefined1)(uVar4 >> 0x18);
  uVar4 = CONCAT13(DAT_60012348,CONCAT12(DAT_60012347,CONCAT11(DAT_60012346,DAT_60012345))) &
          0xffdfffff;
  DAT_60012346 = (undefined1)(uVar4 >> 8);
  DAT_60012347 = (undefined1)(uVar4 >> 0x10);
  DAT_60012348 = (undefined1)(uVar4 >> 0x18);
  if ((param_6 != 0) && (adaptive_test_en == '\0')) {
    phy_disable_cca(DAT_60012345,uVar1,uVar2);
  }
  DAT_60012ff5 = 0;
  DAT_60012ff6 = 0;
  DAT_60012ff7 = 0;
  DAT_60012ff8 = 0;
  if (param_2 == 0) {
    do {
      test_tx_frame(param_1 >> 0x10,param_1 & 0xffff,1,param_3,param_4,param_5);
      iVar3 = GetStopCmd();
    } while (iVar3 != 0);
  }
  else {
    test_tx_frame(param_1 >> 0x10,param_1 & 0xffff,param_2,param_3,param_4,param_5);
  }
  if (fcc_mode_flag != '\0') {
    pbus_workmode();
    tx_cont_cfg(0);
    phy_tx_pwr_track_en = 0;
    phy_tx_pwr_correct_en = 0;
    fcc_mode_flag = '\0';
  }
  if ((param_6 != 0) && (adaptive_test_en == '\0')) {
    phy_enable_cca();
    return;
  }
  return;
}

