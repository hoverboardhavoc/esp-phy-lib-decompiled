/*
 * Last changed at upstream commit 9af79fa4c0c1211cd1570ca7cc785a6ca069c929
 * https://github.com/espressif/esp-phy-lib/commit/9af79fa4c0c1211cd1570ca7cc785a6ca069c929
 * Upstream date: 2023-03-31 17:07:27 +0800
 * Upstream subject: update_for_rftest_20230331
 * Source: librftest -> bb_common.o -> auto_ack_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void auto_ack_test(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  
  phy_printf("auto ack start\n");
  ack_rate_tab(param_1);
  set_macrxfilter(1);
  _DAT_60033040 = 0x134fe18;
  _DAT_60033044 = 0x5040302;
  _DAT_60033c78 = _DAT_60033c78 | 1;
  _DAT_60033084 = _DAT_60033084 & 0x1fffffff;
  _DAT_60033080 = _DAT_60033080 & 0xefffffff;
  iVar8 = 0;
  do {
    _DAT_60033084 = _DAT_60033084 | 0x40000000;
    do {
      if (-1 < (int)(_DAT_60033084 << 1)) {
        bVar7 = false;
        goto _L333;
      }
      iVar4 = GetStopCmd();
    } while (iVar4 != 0);
    bVar7 = true;
_L333:
    puVar3 = (uint *)((_DAT_60033080 & 0xff) + *(int *)(_DAT_60033094 + 4));
    uVar6 = puVar3[0xf];
    uVar9 = (uVar6 >> 8 & 0xff) << 0x10 | uVar6 << 0x18 | uVar6 >> 0x18 |
            (uVar6 >> 0x10 & 0xff) << 8;
    if (uVar9 == 0x34010203) {
      iVar8 = iVar8 + 1;
    }
    uVar5 = *puVar3;
    if ((uVar5 & 0xc000) == 0) {
      uVar2 = uVar5 >> 8 & 0x1f;
      uVar5 = uVar5 >> 0x10 & 0xfff;
    }
    else {
      uVar2 = (int)(((uVar5 >> 10 & 0x30) + (puVar3[1] & 0x7f)) * 0x1000000) >> 0x18;
      uVar5 = puVar3[1] >> 8 & 0xffff;
    }
    if (param_2 != 0) {
      uVar1 = *puVar3;
      phy_printf("SA:%02x:%02x:%02x:%02x:%02x:%02x, ",puVar3[0xe] >> 0x10 & 0xff,puVar3[0xe] >> 0x18
                 ,uVar6 & 0xff,uVar6 >> 8 & 0xff,uVar6 >> 0x10 & 0xff);
      uVar6 = puVar3[0xd];
      phy_printf("DA:%02x:%02x:%02x:%02x:%02x:%02x, ",uVar6 & 0xff,uVar6 >> 8 & 0xff,
                 uVar6 >> 0x10 & 0xff,uVar6 >> 0x18,puVar3[0xe] & 0xff,puVar3[0xe] >> 8 & 0xff);
      phy_printf("rssi:%02d, rate:%02d, len:%03d, source_id=0x%x,g=0x%x\n",(int)(char)uVar1,uVar2,
                 uVar5,0x34010203,uVar9);
    }
    uVar6 = puVar3[0x14];
    if ((bVar7) || (iVar4 = GetStopCmd(), iVar4 == 0)) {
      phy_printf("rx_num=%d, tx_num=%d\n",iVar8 + -1,uVar6 >> 0x10);
      return;
    }
  } while( true );
}

