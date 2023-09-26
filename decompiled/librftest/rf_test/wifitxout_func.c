/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
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
  int iVar5;
  
  iVar1 = _short_gi_enable;
  uVar2 = 0;
  uVar4 = *param_1;
  uVar3 = param_1[1];
  iVar5 = 0;
  if (2 < param_2) {
    iVar5 = (int)(char)param_1[2];
  }
  phy_printf("Wifi tx out: channel=%d, rate=0x%x, BK=%d, length=%d, delay=%d\n",uVar4,uVar3,iVar5,
             0xfff,0);
  rftest_set_chan(uVar4 & 0xffff,(uint)(tx_cbw40m_en != '\0') << 1);
  if (uVar4 == 0xe) {
    tx_cont_cfg(2);
    uVar2 = _DAT_600a7400 >> 0xd;
    _DAT_600a7400 = _DAT_600a7400 & 0xffff9fff | 0x2000;
    uVar2 = uVar2 & 3;
  }
  else {
    tx_cont_cfg(1);
  }
  remove_11b_4p8G_spur(1,2,0x14);
  target_power_backoff(iVar5);
  FillTxPacket(0xa0fff,0xfff,0,uVar3,0,iVar1 << 0x1c,1,2);
  WifiTxStart_org(uVar3 + 0xa0000,0,0,tx_cbw40m_en,0,1);
  if (uVar4 == 0xe) {
    _DAT_600a7400 = uVar2 << 0xd | _DAT_600a7400 & 0xffff9fff;
  }
  remove_11b_4p8G_spur(0,0,0);
  tx_cont_cfg(0);
  phy_printf("Tx Over\n",_DAT_600a4c74 & 0xff,uVar3,0xfff,iVar1);
  return;
}

