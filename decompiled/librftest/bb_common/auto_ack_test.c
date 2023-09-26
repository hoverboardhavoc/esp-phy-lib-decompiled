/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> bb_common.o -> auto_ack_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void auto_ack_test(undefined4 param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  
  phy_printf("auto ack start\n");
  ack_rate_tab(param_1);
  set_macrxfilter();
  setmacaddr(0x60504030,0x2010);
  _DAT_600a4c9c = _DAT_600a4c9c | 1;
  _DAT_600a4080 = _DAT_600a4080 & 0x1fffffff;
  _DAT_600a407c = _DAT_600a407c & 0xefffffff;
  iVar8 = 0;
  do {
    _DAT_600a4080 = _DAT_600a4080 | 0x40000000;
    do {
      if (-1 < (int)(_DAT_600a4080 << 1)) {
        bVar1 = false;
        goto _L369;
      }
      iVar4 = GetStopCmd();
    } while (iVar4 != 0);
    bVar1 = true;
_L369:
    puVar7 = (uint *)((_DAT_600a407c & 0xff) + *(int *)(_DAT_600a4090 + 4));
    uVar6 = puVar7[0x1a];
    uVar3 = (uVar6 >> 8 & 0xff) << 0x10 | uVar6 << 0x18 | uVar6 >> 0x18 |
            (uVar6 >> 0x10 & 0xff) << 8;
    if (uVar3 == 0x50601020) {
      iVar8 = iVar8 + 1;
    }
    uVar5 = *puVar7;
    if ((uVar5 & 0xc000) == 0x4000) {
      uVar9 = (puVar7[1] & 0xf) + 0x10;
_L373:
      uVar5 = puVar7[1] >> 8 & 0xffff;
    }
    else {
      uVar9 = uVar5 >> 8 & 0x1f;
      if ((uVar5 & 0xc000) != 0) goto _L373;
      uVar5 = uVar5 >> 0x10 & 0xfff;
    }
    if (param_2 != 0) {
      uVar2 = *puVar7;
      phy_printf("SA:%02x:%02x:%02x:%02x:%02x:%02x, ",puVar7[0x19] >> 0x10 & 0xff,
                 puVar7[0x19] >> 0x18,uVar6 & 0xff,uVar6 >> 8 & 0xff,uVar6 >> 0x10 & 0xff);
      uVar6 = puVar7[0x18];
      phy_printf("DA:%02x:%02x:%02x:%02x:%02x:%02x, ",uVar6 & 0xff,uVar6 >> 8 & 0xff,
                 uVar6 >> 0x10 & 0xff,uVar6 >> 0x18,puVar7[0x19] & 0xff,puVar7[0x19] >> 8 & 0xff);
      phy_printf("rssi:%02d, rate:%02d, len:%03d, source_id=0x%x,g=0x%x\n",(int)(char)uVar2,uVar9,
                 uVar5,0x50601020,uVar3);
    }
    uVar3 = puVar7[0x1f];
    if ((bVar1) || (iVar4 = GetStopCmd(), iVar4 == 0)) {
      phy_printf("rx_num=%d, tx_num=%d\n",iVar8 + -1,uVar3 >> 0x10);
      return;
    }
  } while( true );
}

