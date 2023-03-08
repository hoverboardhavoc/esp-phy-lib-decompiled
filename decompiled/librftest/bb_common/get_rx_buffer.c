/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> bb_common.o -> get_rx_buffer
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_rx_buffer(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  
  uVar4 = _DAT_60033084;
  uVar3 = _DAT_60033080;
  _DAT_60033084 = _DAT_60033084 & 0x1fffffff;
  _DAT_60033080 = _DAT_60033080 & 0xefffffff;
  iVar6 = 0;
  iVar13 = _DAT_60035000;
  do {
    _DAT_60033084 = _DAT_60033084 | 0x40000000;
    while ((int)(_DAT_60033084 << 1) < 0) {
      iVar9 = GetStopCmd();
      if (iVar9 == 0) {
        bVar1 = true;
        goto _L294;
      }
      if (1000000 < (uint)(_DAT_60035000 - iVar13)) {
        phy_printf("rx_num=%d\n",iVar6);
        iVar13 = _DAT_60035000;
      }
    }
    iVar6 = iVar6 + 1;
    bVar1 = false;
_L294:
    puVar7 = (uint *)get_rxctrl_addr();
    uVar2 = *puVar7;
    uVar5 = *puVar7;
    if ((uVar5 & 0xc000) == 0) {
      uVar14 = uVar5 >> 8 & 0x1f;
    }
    else {
      uVar14 = (uVar5 >> 10 & 0x30) + (puVar7[1] & 0x7f);
    }
    if ((uVar5 & 0xc000) == 0) {
      uVar5 = uVar5 >> 0x10 & 0xfff;
    }
    else {
      uVar5 = puVar7[1] >> 8 & 0xffff;
    }
    uVar8 = (**(code **)(_g_phyFuns + 0xdc))(uVar14,puVar7[4],*(code **)(_g_phyFuns + 0xdc));
    uVar10 = puVar7[0xf];
    if (param_1 == 1) {
      uVar12 = uVar10 << 0x18 | uVar10 >> 0x18 | (uVar10 & 0xff00) << 8;
      uVar11 = (uVar10 >> 0x10 & 0xff) << 8;
_L320:
      if ((uVar12 | uVar11) == param_2) goto _L304;
    }
    else {
      if (param_1 == 2) {
        uVar11 = (puVar7[0xe] >> 0x18) << 0x10 | (puVar7[0xe] >> 0x10) << 0x18;
        uVar12 = (uVar10 & 0xff) << 8;
        goto _L320;
      }
_L304:
      phy_printf("SA:%02x:%02x:%02x:%02x:%02x:%02x, ",puVar7[0xe] >> 0x10 & 0xff,puVar7[0xe] >> 0x18
                 ,uVar10 & 0xff,uVar10 >> 8 & 0xff,uVar10 >> 0x10 & 0xff,uVar10 >> 0x18);
      uVar10 = puVar7[0xd];
      phy_printf("DA:%02x:%02x:%02x:%02x:%02x:%02x, ",uVar10 & 0xff,uVar10 >> 8 & 0xff,
                 uVar10 >> 0x10 & 0xff,uVar10 >> 0x18,puVar7[0xe] & 0xff,puVar7[0xe] >> 8 & 0xff);
      uVar10 = puVar7[0x10];
      phy_printf("ssid:%02x:%02x:%02x:%02x:%02x:%02x, ",uVar10 & 0xff,uVar10 >> 8 & 0xff,
                 uVar10 >> 0x10 & 0xff,uVar10 >> 0x18,puVar7[0x11] & 0xff,puVar7[0x11] >> 8 & 0xff);
      uVar10 = puVar7[0xc];
      phy_printf("FC:%02x:%02x:%02x:%02x, ",uVar10 >> 0x18,uVar10 >> 0x10 & 0xff,uVar10 >> 8 & 0xff,
                 uVar10 & 0xff);
      phy_printf("rssi:%02d, rate:%02d, len:%03d, freq:%02d\n",(int)(char)uVar2,uVar14,uVar5,uVar8);
    }
    if ((bVar1) || (iVar9 = GetStopCmd(), iVar9 == 0)) {
      phy_printf("rx_num=%d\n",iVar6);
      _DAT_60033084 = uVar4;
      _DAT_60033080 = uVar3;
      return;
    }
  } while( true );
}

