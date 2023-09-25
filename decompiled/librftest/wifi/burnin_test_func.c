/*
 * Last changed at upstream commit a7a0481e34fd4368aa15a143dfbd855015380fd4
 * https://github.com/espressif/esp-phy-lib/commit/a7a0481e34fd4368aa15a143dfbd855015380fd4
 * Upstream date: 2023-09-25 15:20:47 +0800
 * Upstream subject: phy_param_track_tot and phy_wifi_enable_set for all chips
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
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  byte bStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined2 uStack_34;
  
  bStack_43 = 0;
  puVar3 = (uint *)Plcp1AddrGet(10);
  puVar4 = (uint *)Plcp0AddrGet(10);
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  rtc_wdt_feed();
  iVar1 = _DAT_60035000;
  phy_init();
  chip_v7_set_chan(0xe,0);
  phy_printf("WifiInit_TIME=%dus\n\n",_DAT_60035000 - iVar1);
  target_power_backoff(8);
  iVar1 = _DAT_60035000;
  FillTxPacket(0xa03e8,1000,0,0x12,0,0,1,2);
  WifiTxStart(0xa0012,0x3c,3000,0,0,1);
  phy_printf("TX_TIME=%dus\n\n",_DAT_60035000 - iVar1);
  uStack_41 = 0;
  fill_txbeacon(&uStack_42,&bStack_43,&uStack_41,&phy_param,&uStack_40);
  iVar1 = _DAT_60035000;
  chip_v7_set_chan(1,0);
  _DAT_60033ca8 = 0;
  *puVar3 = *puVar3 & 0xfffe0fff | 0x1000;
  *puVar3 = *puVar3 & 0xf9ffffff;
  iVar5 = 0;
  do {
    _DAT_60033c04 = 0x40000002;
    _DAT_60033c34 = _DAT_60033c34 | 0x84;
    _DAT_60033c40 = _DAT_60033c40 | 0x81;
    *puVar4 = *puVar4 | 0xc0000000;
    do {
      if ((_DAT_60033c3c & 0x80) != 0) goto _L187;
    } while ((uint)(_DAT_60035000 - iVar1) < 400000);
    iVar5 = 1;
    bStack_43 = bStack_43 + 1;
_L187:
    if (_DAT_60033c68 >> 0x1c != 0) {
      phy_printf("0x%x\n",_DAT_60033c68);
    }
    ets_delay_us(5000);
    if (((199999 < (uint)(_DAT_60035000 - iVar1)) && (iVar5 != 0)) ||
       (iVar5 = iVar5 + 1, iVar5 == 4)) {
      if ((uint)(_DAT_60035000 - iVar1) < 200000) {
        uVar2 = (iVar1 + 200000) - _DAT_60035000;
        for (uVar6 = 0; uVar2 / 1000 != uVar6; uVar6 = uVar6 + 1) {
          ets_delay_us(1000);
        }
      }
      phy_printf("BEA_TIME=%dus\n\n",_DAT_60035000 - iVar1);
      if (_DAT_60008050 < 0xfb) {
        uStack_42 = (undefined1)_DAT_60008050;
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

