/*
 * Last changed at upstream commit 6e051981701aacebcbfe9147b2a1fec07d472829
 * https://github.com/espressif/esp-phy-lib/commit/6e051981701aacebcbfe9147b2a1fec07d472829
 * Upstream date: 2024-01-24 19:07:43 +0800
 * Upstream subject: fix ble tx 2m problem causing by phy_wifi_enable_set
 * Source: librftest -> wifi.o -> crystal_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void crystal_test(int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_1040 [1968];
  undefined4 local_890;
  undefined4 uStack_88c;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined1 *puStack_878;
  int iStack_874;
  undefined4 uStack_870;
  undefined1 *puStack_86c;
  undefined1 *puStack_868;
  byte *pbStack_864;
  byte bStack_853;
  undefined1 uStack_852;
  undefined1 uStack_851;
  undefined1 auStack_850 [16];
  undefined1 auStack_840 [2060];
  
  puStack_878 = auStack_1040;
  bStack_853 = 0;
  iStack_874 = param_2;
  uStack_870 = param_3;
  puVar1 = (uint *)Plcp1AddrGet(10);
  puVar2 = (uint *)Plcp0AddrGet(10);
  *(undefined4 *)(puStack_878 + 0x7f0) = 0;
  *(undefined4 *)(puStack_878 + 0x7f4) = 0;
  *(undefined4 *)(puStack_878 + 0x7f8) = 0;
  *(undefined2 *)(puStack_878 + 0x7fc) = 0;
  puStack_878 = (undefined1 *)((param_1 + 8) * 0x1000000 >> 0x18);
  puStack_86c = auStack_850;
  puStack_868 = &uStack_851;
  pbStack_864 = &bStack_853;
  do {
    phy_printf("\nnew loop begin:\n\n");
    rtc_wdt_feed();
    iVar3 = _DAT_60035000;
    register_chipv7_phy(init_param_default,auStack_840,2);
    chip_v7_set_chan(0xe,0);
    phy_printf("WifiInit_TIME=%dus\n\n",_DAT_60035000 - iVar3);
    target_power_backoff(param_1);
    iVar3 = _DAT_60035000;
    uStack_884 = 6;
    uStack_888 = 5;
    uStack_88c = 4;
    local_890 = 3;
    FillTxPacket(iStack_874 + 0xa0000,1000,0,0x12,0,0,1,2);
    WifiTxStart(0xa0012,200,uStack_870,0,0,1);
    phy_printf("TX_TIME=%dus\n\n",_DAT_60035000 - iVar3);
    uStack_851 = 0;
    target_power_backoff(puStack_878);
    fill_txbeacon(&uStack_852,pbStack_864,puStack_868,&phy_param,puStack_86c);
    iVar3 = _DAT_60035000;
    chip_v7_set_chan(1,0);
    _DAT_60033ca8 = 0;
    *puVar1 = *puVar1 & 0xfffe0fff | 0x1000;
    *puVar1 = *puVar1 & 0xf9ffffff;
    iVar6 = 0;
    do {
      _DAT_60033c04 = 0x40000002;
      _DAT_60033c34 = _DAT_60033c34 | 0x84;
      _DAT_60033c40 = _DAT_60033c40 | 0x81;
      *puVar2 = *puVar2 | 0xc0000000;
      do {
        if ((_DAT_60033c3c & 0x80) != 0) goto _L214;
      } while ((uint)(_DAT_60035000 - iVar3) < 400000);
      iVar6 = 1;
      bStack_853 = bStack_853 + 1;
_L214:
      if (_DAT_60033c68 >> 0x1c != 0) {
        phy_printf("0x%x\n",_DAT_60033c68);
      }
      ets_delay_us(5000);
    } while ((((uint)(_DAT_60035000 - iVar3) < 200000) || (iVar6 == 0)) &&
            (iVar6 = iVar6 + 1, iVar6 != 3));
    if ((uint)(_DAT_60035000 - iVar3) < 200000) {
      uVar4 = (iVar3 + 200000) - _DAT_60035000;
      for (uVar5 = 0; uVar4 / 1000 != uVar5; uVar5 = uVar5 + 1) {
        ets_delay_us(1000);
      }
    }
    phy_printf("BEA_TIME=%dus\n\n",_DAT_60035000 - iVar3);
    if (_DAT_60008050 < 0xfb) {
      uStack_852 = (undefined1)_DAT_60008050;
    }
    else {
      uStack_852 = 0xfa;
    }
    if (0xfa < bStack_853) {
      bStack_853 = 0xfa;
    }
    phy_printf("WatchDog_rst_num=%d\n\n");
    phy_printf("UNTX BEACON NUM=%d\n\n",bStack_853);
    phy_printf("%d, %d, %d\n\n",uStack_852,bStack_853,uStack_851);
    iVar3 = GetStopCmd();
    if (iVar3 == 0) {
      return;
    }
  } while( true );
}

