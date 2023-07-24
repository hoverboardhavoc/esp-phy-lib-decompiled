/*
 * Last changed at upstream commit 92801f9b6fe3658b31590dbb77b97261ecde93d0
 * https://github.com/espressif/esp-phy-lib/commit/92801f9b6fe3658b31590dbb77b97261ecde93d0
 * Upstream date: 2023-07-24 22:19:06 +0800
 * Upstream subject: Protection of tracking
 * Source: librftest -> bb_common.o -> get_rx_buffer1
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_rx_buffer1(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iStack_60;
  
  uVar4 = _DAT_60033084;
  uVar3 = _DAT_60033080;
  iStack_60 = _DAT_60035000;
  _DAT_60033084 = _DAT_60033084 & 0x1fffffff;
  _DAT_60033080 = _DAT_60033080 & 0xefffffff;
  rx_11b_opt(0);
  uVar15 = 0;
  iVar14 = 0;
  iVar12 = 0;
  uVar13 = 0;
  iVar11 = 0;
  do {
    _DAT_60033084 = _DAT_60033084 | 0x60000000;
    if (10 < uVar15) {
      adctrig(0x2000,0,0,1,0,0,0,0);
      phy_printf("dump_start");
      uVar16 = 0;
      do {
        if ((uVar16 & 7) == 0) {
          phy_printf(&_LC11);
        }
        iVar9 = uVar16 * 4;
        uVar16 = uVar16 + 1;
        phy_printf("0x%x,",*(undefined4 *)(iVar9 + 0x3fcb0000));
      } while (uVar16 != 0x1000);
      phy_printf("dump_end\n");
    }
    while ((int)(_DAT_60033084 << 2) < 0) {
      iVar9 = GetStopCmd();
      if (iVar9 == 0) {
        bVar1 = true;
        goto _L332;
      }
      if ((-1 < (int)(_DAT_60033084 << 1)) && (1000000 < (uint)(_DAT_60035000 - iStack_60))) {
        phy_printf("rx_num=%d",iVar11);
        iVar9 = param_1;
        if (((uVar13 < 0xb) && (iVar9 = iVar14, uVar13 == 0)) ||
           ((iVar14 = iVar9, iVar12 != 0 || (param_1 != 1)))) {
          phy_printf(&_LC11);
        }
        else {
          phy_printf(",fail\n");
          uVar15 = uVar15 + 1;
          iVar14 = 0;
        }
        iStack_60 = _DAT_60035000;
        uVar13 = uVar13 + 1;
        iVar12 = 0;
      }
    }
    bVar1 = false;
_L332:
    uVar16 = _DAT_600330a8 & 0xff;
    phy_printf("0x%08x,0x%x,0x%x,0x%x,%d\n",_DAT_600330ac,_DAT_60033c3c,uVar16,_DAT_6001c06c & 0xff,
               _DAT_60035000);
    if ((!bVar1) && (uVar16 == 0)) {
      iVar11 = iVar11 + 1;
    }
    puVar6 = (uint *)get_rxctrl_addr();
    uVar2 = *puVar6;
    uVar5 = *puVar6;
    if ((uVar5 & 0xc000) == 0) {
      uVar17 = uVar5 >> 8 & 0x1f;
    }
    else {
      uVar17 = (uVar5 >> 10 & 0x30) + (puVar6[1] & 0x7f);
    }
    if ((uVar5 & 0xc000) == 0) {
      uVar5 = (uVar5 << 4) >> 0x14;
    }
    else {
      uVar5 = puVar6[1] >> 8 & 0xffff;
    }
    uVar7 = (**(code **)(_g_phyFuns + 0xdc))(uVar17,puVar6[4],*(code **)(_g_phyFuns + 0xdc));
    uVar8 = puVar6[0xf];
    if (uVar16 == 0) {
      uVar16 = (uint)(((uVar8 >> 0x10 & 0xff) << 8 |
                      uVar8 << 0x18 | uVar8 >> 0x18 | (uVar8 >> 8 & 0xff) << 0x10) == param_2);
      iVar12 = iVar12 + uVar16;
      if (iVar14 == 1) {
_L345:
        if (uVar16 == 0) goto _L343;
      }
      else if (iVar14 == 2) {
        uVar16 = (uint)(((puVar6[0xe] >> 0x10) << 0x18 | (puVar6[0xe] >> 0x18) << 0x10 |
                        (uVar8 & 0xff) << 8) == param_2);
        goto _L345;
      }
      uVar10 = puVar6[0x11];
      phy_printf("SA:%02x:%02x:%02x:%02x:%02x:%02x, ",puVar6[0xe] >> 0x10 & 0xff,puVar6[0xe] >> 0x18
                 ,uVar8 & 0xff,uVar8 >> 8 & 0xff,uVar8 >> 0x10 & 0xff);
      uVar16 = puVar6[0xd];
      phy_printf("DA:%02x:%02x:%02x:%02x:%02x:%02x, ",uVar16 & 0xff,uVar16 >> 8 & 0xff,
                 uVar16 >> 0x10 & 0xff,uVar16 >> 0x18,puVar6[0xe] & 0xff,puVar6[0xe] >> 8 & 0xff);
      uVar16 = puVar6[0xc];
      phy_printf("FC:%02x:%02x:%02x:%02x,",uVar16 >> 0x18,uVar16 >> 0x10 & 0xff,uVar16 >> 8 & 0xff,
                 uVar16 & 0xff);
      phy_printf("rssi:%02d, rate:%02d, len:%03d, freq:%02d,%d\n",(int)(char)uVar2,uVar17,uVar5,
                 uVar7,uVar10 >> 0x14);
    }
_L343:
    if ((bVar1) || (iVar9 = GetStopCmd(), iVar9 == 0)) {
      phy_printf("rx_num=%d\n",iVar11);
      _DAT_60033084 = uVar4;
      _DAT_60033080 = uVar3;
      return;
    }
  } while( true );
}

