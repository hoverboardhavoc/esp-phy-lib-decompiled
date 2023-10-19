/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> rf_test.o -> esp_tx_func
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void esp_tx_func(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar1 = _short_gi_enable;
  if (fcc_mode_sel == '\x01') {
    uVar6 = 0;
    uVar8 = *param_1;
    uVar2 = param_1[1];
    iVar9 = 0;
    if (2 < param_2) {
      iVar9 = (int)(char)param_1[2];
    }
    fcc_mode_flag = 1;
    phy_tx_pwr_track_en = 1;
    phy_tx_pwr_correct_en = 1;
    phy_printf("Wifi tx out: channel=%d, rate=0x%x, BK=%d, length=%d, delay=%d\n",uVar8,uVar2,iVar9,
               0xfff,0);
    rftest_set_chan(uVar8 & 0xffff,(uint)(tx_cbw40m_en != '\0') << 1);
    if (uVar8 == 0xe) {
      uVar6 = DAT_60012346 >> 5 & 3;
      uVar4 = CONCAT13(DAT_60012348,CONCAT12(DAT_60012347,CONCAT11(DAT_60012346,DAT_60012345))) &
              0xffff9fff;
      DAT_60012346 = (byte)(uVar4 >> 8) | 0x20;
      DAT_60012345 = (undefined1)uVar4;
      DAT_60012347 = (undefined1)(uVar4 >> 0x10);
      DAT_60012348 = (undefined1)(uVar4 >> 0x18);
    }
    remove_11b_4p8G_spur(1,2,0x14);
    target_power_backoff(iVar9);
    FillTxPacket(0xa0fff,0xfff,0,uVar2,0,iVar1 << 0x1c,1,2);
    WifiTxStart(uVar2 + 0xa0000,0,0,tx_cbw40m_en,0,1);
    if (uVar8 == 0xe) {
      uVar8 = CONCAT13(DAT_60012348,CONCAT12(DAT_60012347,CONCAT11(DAT_60012346,DAT_60012345))) &
              0xffff9fff;
      DAT_60012346 = (byte)(uVar8 >> 8) | (byte)((uVar6 << 0xd) >> 8);
      DAT_60012345 = (undefined1)uVar8;
      DAT_60012347 = (undefined1)(uVar8 >> 0x10);
      DAT_60012348 = (undefined1)(uVar8 >> 0x18);
    }
    remove_11b_4p8G_spur(0,0,0);
    phy_printf("Tx Over\n",DAT_60012fb9,uVar2,0xfff,iVar1,DAT_60012fbc);
    return;
  }
  uVar6 = *param_1;
  uVar2 = param_1[1];
  iVar9 = 0;
  if (2 < param_2) {
    iVar9 = (int)(char)param_1[2];
  }
  uVar8 = change_data_rate(uVar2);
  iVar5 = 200;
  if ((3 < uVar2) && (iVar5 = 100, 7 < uVar2)) {
    iVar5 = 0x28;
  }
  iVar3 = 600;
  if (0x13 < uVar8) {
    iVar3 = 200;
  }
  if (param_2 < 4) {
    uVar4 = (iVar3 - iVar5) * uVar8 >> 3;
  }
  else {
    uVar4 = param_1[3];
    if (param_2 != 4) {
      uVar7 = param_1[4];
      goto _L20;
    }
  }
  uVar7 = 0x4b0;
  if (0x13 < uVar8) {
    uVar7 = 400;
  }
_L20:
  rftest_set_chan(uVar6 & 0xffff,(uint)(tx_cbw40m_en != '\0') << 1);
  target_power_backoff(iVar9);
  phy_printf("Wifi tx out: channel=%d, rate=0x%x, BK=%d, length=%d, delay=%d\n",uVar6,uVar2,iVar9,
             uVar4,uVar7);
  FillTxPacket(uVar4 + 0xa0000,uVar4,0,uVar2,0,iVar1 << 0x1c,1,2);
  WifiTxStart(uVar2 + 0xa0000,0,uVar7,tx_cbw40m_en,0,1);
  phy_printf("Tx Over 0x%x\n",DAT_60012fb9,DAT_60012fbb,DAT_60012fbc);
  return;
}

