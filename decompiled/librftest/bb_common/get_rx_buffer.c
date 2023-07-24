/*
 * Last changed at upstream commit 92801f9b6fe3658b31590dbb77b97261ecde93d0
 * https://github.com/espressif/esp-phy-lib/commit/92801f9b6fe3658b31590dbb77b97261ecde93d0
 * Upstream date: 2023-07-24 22:19:06 +0800
 * Upstream subject: Protection of tracking
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
  char *pcVar7;
  uint *puVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  
  uVar4 = _DAT_60033084;
  uVar3 = _DAT_60033080;
  _DAT_60033084 = _DAT_60033084 & 0x1fffffff;
  _DAT_60033080 = _DAT_60033080 & 0xefffffff;
  iVar15 = 0;
  iVar14 = 0;
  uVar13 = 0;
  iVar6 = 0;
  iVar16 = _DAT_60035000;
  do {
    _DAT_60033084 = _DAT_60033084 | 0x40000000;
    while ((int)(_DAT_60033084 << 1) < 0) {
      iVar10 = GetStopCmd();
      if (iVar10 == 0) {
        bVar1 = true;
        goto _L296;
      }
      if (1000000 < (uint)(_DAT_60035000 - iVar16)) {
        phy_printf("rx_num=%d",iVar6);
        iVar10 = param_1;
        if ((((uVar13 < 0xb) && (iVar10 = iVar15, uVar13 == 0)) || (iVar14 != 0)) || (param_1 != 1))
        {
          pcVar7 = "\n";
        }
        else {
          pcVar7 = ",fail\n";
        }
        phy_printf(pcVar7);
        uVar13 = uVar13 + 1;
        iVar14 = 0;
        iVar16 = _DAT_60035000;
        iVar15 = iVar10;
      }
    }
    iVar6 = iVar6 + 1;
    bVar1 = false;
_L296:
    puVar8 = (uint *)get_rxctrl_addr();
    uVar2 = *puVar8;
    uVar5 = *puVar8;
    if ((uVar5 & 0xc000) == 0) {
      uVar17 = uVar5 >> 8 & 0x1f;
    }
    else {
      uVar17 = (uVar5 >> 10 & 0x30) + (puVar8[1] & 0x7f);
    }
    if ((uVar5 & 0xc000) == 0) {
      uVar5 = (uVar5 << 4) >> 0x14;
    }
    else {
      uVar5 = puVar8[1] >> 8 & 0xffff;
    }
    uVar9 = (**(code **)(_g_phyFuns + 0xdc))(uVar17,puVar8[4],*(code **)(_g_phyFuns + 0xdc));
    uVar12 = puVar8[0xf];
    uVar11 = (uint)(((uVar12 >> 8 & 0xff) << 0x10 | uVar12 << 0x18 | uVar12 >> 0x18 |
                    (uVar12 >> 0x10 & 0xff) << 8) == param_2);
    iVar14 = iVar14 + uVar11;
    if (iVar15 == 1) {
_L308:
      if (uVar11 != 0) goto _L309;
    }
    else {
      if (iVar15 == 2) {
        uVar11 = (uint)(((puVar8[0xe] >> 0x10) << 0x18 | (puVar8[0xe] >> 0x18) << 0x10 |
                        (uVar12 & 0xff) << 8) == param_2);
        goto _L308;
      }
_L309:
      uVar18 = puVar8[0x11];
      phy_printf("SA:%02x:%02x:%02x:%02x:%02x:%02x, ",puVar8[0xe] >> 0x10 & 0xff,puVar8[0xe] >> 0x18
                 ,uVar12 & 0xff,uVar12 >> 8 & 0xff,uVar12 >> 0x10 & 0xff);
      uVar11 = puVar8[0xd];
      phy_printf("DA:%02x:%02x:%02x:%02x:%02x:%02x, ",uVar11 & 0xff,uVar11 >> 8 & 0xff,
                 uVar11 >> 0x10 & 0xff,uVar11 >> 0x18,puVar8[0xe] & 0xff,puVar8[0xe] >> 8 & 0xff);
      uVar11 = puVar8[0xc];
      phy_printf("FC:%02x:%02x:%02x:%02x, ",uVar11 >> 0x18,uVar11 >> 0x10 & 0xff,uVar11 >> 8 & 0xff,
                 uVar11 & 0xff);
      phy_printf("rssi:%02d, rate:%02d, len:%03d, freq:%02d,%d\n",(int)(char)uVar2,uVar17,uVar5,
                 uVar9,uVar18 >> 0x14);
    }
    if ((bVar1) || (iVar10 = GetStopCmd(), iVar10 == 0)) {
      phy_printf("rx_num=%d\n",iVar6);
      _DAT_60033084 = uVar4;
      _DAT_60033080 = uVar3;
      return;
    }
  } while( true );
}

