/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> rf_test.o -> wifitxout_func
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wifitxout_func(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = _short_gi_enable;
  uVar4 = 0;
  uVar5 = *param_1;
  uVar2 = param_1[1];
  iVar6 = 0;
  if (2 < param_2) {
    iVar6 = (int)(char)param_1[2];
  }
  fcc_mode_flag = 1;
  phy_tx_pwr_track_en = 1;
  phy_tx_pwr_correct_en = 1;
  phy_printf("Wifi tx out: channel=%d, rate=0x%x, BK=%d, length=%d, delay=%d\n",uVar5,uVar2,iVar6,
             0xfff,0);
  rftest_set_chan(uVar5 & 0xffff,(uint)(tx_cbw40m_en != '\0') << 1);
  if (uVar5 == 0xe) {
    uVar4 = DAT_60012346 >> 5 & 3;
    uVar3 = CONCAT13(DAT_60012348,CONCAT12(DAT_60012347,CONCAT11(DAT_60012346,DAT_60012345))) &
            0xffff9fff;
    DAT_60012346 = (byte)(uVar3 >> 8) | 0x20;
    DAT_60012345 = (undefined1)uVar3;
    DAT_60012347 = (undefined1)(uVar3 >> 0x10);
    DAT_60012348 = (undefined1)(uVar3 >> 0x18);
  }
  remove_11b_4p8G_spur(1,2,0x14);
  target_power_backoff(iVar6);
  FillTxPacket(0xa0fff,0xfff,0,uVar2,0,iVar1 << 0x1c,1,2);
  WifiTxStart(uVar2 + 0xa0000,0,0,tx_cbw40m_en,0,1);
  if (uVar5 == 0xe) {
    uVar5 = CONCAT13(DAT_60012348,CONCAT12(DAT_60012347,CONCAT11(DAT_60012346,DAT_60012345))) &
            0xffff9fff;
    DAT_60012346 = (byte)(uVar5 >> 8) | (byte)((uVar4 << 0xd) >> 8);
    DAT_60012345 = (undefined1)uVar5;
    DAT_60012347 = (undefined1)(uVar5 >> 0x10);
    DAT_60012348 = (undefined1)(uVar5 >> 0x18);
  }
  remove_11b_4p8G_spur(0,0,0);
  phy_printf("Tx Over\n",DAT_60012fb9,uVar2,0xfff,iVar1,DAT_60012fbc);
  return;
}

