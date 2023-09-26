/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> bb_common.o -> get_rx_buffer
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_rx_buffer(uint param_1,uint param_2)

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
  
  uVar4 = _DAT_600a4080;
  uVar3 = _DAT_600a407c;
  _DAT_600a40d8 = 0;
  _DAT_600a40dc = 0;
  _DAT_600a40e0 = 0;
  _DAT_600a40e4 = 0;
  _DAT_600a4060 = 0;
  _DAT_600a4080 = _DAT_600a4080 & 0x1fffffff;
  _DAT_600a407c = _DAT_600a407c & 0xefffffff;
  iVar6 = 0;
  iVar13 = _DAT_600ad000;
  do {
    _DAT_600a4080 = _DAT_600a4080 | 0x40000000;
    while ((int)(_DAT_600a4080 << 1) < 0) {
      iVar9 = GetStopCmd();
      if (iVar9 == 0) {
        bVar1 = true;
        goto _L331;
      }
      if (1000000 < (uint)(_DAT_600ad000 - iVar13)) {
        phy_printf("rx_num=%d\n",iVar6);
        iVar13 = _DAT_600ad000;
      }
    }
    iVar6 = iVar6 + 1;
    bVar1 = false;
_L331:
    puVar7 = (uint *)get_rxctrl_addr();
    uVar5 = *puVar7;
    uVar2 = *puVar7;
    if ((uVar5 & 0xc000) == 0x4000) {
      uVar14 = (puVar7[1] & 0xf) + 0x10;
    }
    else {
      uVar14 = uVar5 >> 8 & 0x1f;
    }
    if ((uVar5 & 0xc000) == 0) {
      uVar5 = uVar5 >> 0x10 & 0xfff;
    }
    else {
      uVar5 = puVar7[1] >> 8 & 0xffff;
    }
    uVar8 = phy_get_rx_freq(uVar14,puVar7[4]);
    uVar10 = puVar7[0x1a];
    if ((param_1 & 0xfd) == 1) {
      uVar12 = uVar10 << 0x18 | uVar10 >> 0x18 | (uVar10 & 0xff00) << 8;
      uVar11 = (uVar10 >> 0x10 & 0xff) << 8;
_L358:
      if ((uVar12 | uVar11) == param_2) goto _L341;
    }
    else {
      if (param_1 == 2) {
        uVar11 = (puVar7[0x19] >> 0x18) << 0x10 | (puVar7[0x19] >> 0x10) << 0x18;
        uVar12 = (uVar10 & 0xff) << 8;
        goto _L358;
      }
_L341:
      phy_printf("SA:%02x:%02x:%02x:%02x:%02x:%02x, ",puVar7[0x19] >> 0x10 & 0xff,
                 puVar7[0x19] >> 0x18,uVar10 & 0xff,uVar10 >> 8 & 0xff,uVar10 >> 0x10 & 0xff,
                 uVar10 >> 0x18);
      uVar10 = puVar7[0x18];
      phy_printf("DA:%02x:%02x:%02x:%02x:%02x:%02x, ",uVar10 & 0xff,uVar10 >> 8 & 0xff,
                 uVar10 >> 0x10 & 0xff,uVar10 >> 0x18,puVar7[0x19] & 0xff,puVar7[0x19] >> 8 & 0xff);
      uVar10 = puVar7[0x1b];
      phy_printf("ssid:%02x:%02x:%02x:%02x:%02x:%02x, ",uVar10 & 0xff,uVar10 >> 8 & 0xff,
                 uVar10 >> 0x10 & 0xff,uVar10 >> 0x18,puVar7[0x1c] & 0xff,puVar7[0x1c] >> 8 & 0xff);
      uVar10 = puVar7[0x17];
      phy_printf("FC:%02x:%02x:%02x:%02x, ",uVar10 >> 0x18,uVar10 >> 0x10 & 0xff,uVar10 >> 8 & 0xff,
                 uVar10 & 0xff);
      phy_printf("rssi:%02d, rate:%02d, len:%03d, freq:%02d\n",(int)(char)uVar2,uVar14,uVar5,uVar8);
      if ((param_1 == 3) && ((char)puVar7[0x17] == -0x80)) {
        _DAT_600a407c = uVar3;
        _DAT_600a4080 = uVar4;
        return;
      }
    }
    iVar9 = GetStopCmd();
    if ((iVar9 == 0) || (bVar1)) {
      phy_printf("rx_num=%d\n",iVar6);
      _DAT_600a4080 = uVar4;
      _DAT_600a407c = uVar3;
      return;
    }
  } while( true );
}

