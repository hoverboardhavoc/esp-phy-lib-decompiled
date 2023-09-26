/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> burnin_test_func
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void burnin_test_func(void)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  byte bStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined2 uStack_34;
  
  bStack_43 = 0;
  puVar4 = (uint *)Plcp0AddrGet(0);
  puVar5 = (uint *)ConfAddrGet(0);
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  lp_wdt_feed();
  iVar1 = _DAT_600ad000;
  phy_init();
  chip_v7_set_chan(0xe,0);
  phy_printf("WifiInit_TIME=%dus\n\n",_DAT_600ad000 - iVar1);
  target_power_backoff(8);
  iVar1 = _DAT_600ad000;
  FillTxPacket(0xa03e8,1000,0,0x12,0,0,1,2);
  WifiTxStart_org(0xa0012,0x3c,3000,0,0,1);
  phy_printf("TX_TIME=%dus\n\n",_DAT_600ad000 - iVar1);
  iVar1 = _DAT_600ad000;
  uStack_41 = 0;
  chip_v7_set_chan(1,0);
  _DAT_600a4cb0 = 0;
  tx_ack_init(0,0,1,0xd4,0,0);
  burnin_fill_beacon(&uStack_42,&bStack_43,&uStack_41,&phy_param,&uStack_40);
  cVar3 = phy_get_pwr_index(1);
  phy_force_pwr_index(1,cVar3 + '\x02');
  set_tx_rate(0,1,0,0,0,0);
  iVar6 = 0;
  do {
    *puVar5 = *puVar5 & 0xffc00fff | 0xa000;
    _DAT_600a4c40 = _DAT_600a4c40 | 0x84;
    _DAT_600a4c4c = _DAT_600a4c4c | 0x81;
    *puVar4 = *puVar4 | 0xc0000000;
    do {
      if ((_DAT_600a4c48 & 0x80) != 0) goto _L110;
    } while ((uint)(_DAT_600ad000 - iVar1) < 400000);
    iVar6 = 1;
    bStack_43 = bStack_43 + 1;
_L110:
    if (_DAT_600a4c74 >> 0x1c != 0) {
      phy_printf("0x%x\n",_DAT_600a4c74);
    }
    ets_delay_us(5000);
    if (((199999 < (uint)(_DAT_600ad000 - iVar1)) && (iVar6 != 0)) ||
       (iVar6 = iVar6 + 1, iVar6 == 4)) {
      if ((uint)(_DAT_600ad000 - iVar1) < 200000) {
        uVar2 = (iVar1 + 200000) - _DAT_600ad000;
        for (uVar7 = 0; uVar2 / 1000 != uVar7; uVar7 = uVar7 + 1) {
          ets_delay_us(1000);
        }
      }
      phy_printf("BEA_TIME=%dus\n\n",_DAT_600ad000 - iVar1);
      if (_DAT_600b1000 < 0xfb) {
        uStack_42 = (undefined1)_DAT_600b1000;
      }
      else {
        uStack_42 = 0xfa;
      }
      if (0xfa < bStack_43) {
        bStack_43 = 0xfa;
      }
      phy_printf("WatchDog_rst_num=%d\n\n");
      phy_printf("UNTX BEACON NUM=%d\n\n",bStack_43);
      phy_printf("%d, %d, %d\n\n",uStack_42,bStack_43,uStack_41);
      return;
    }
  } while( true );
}

