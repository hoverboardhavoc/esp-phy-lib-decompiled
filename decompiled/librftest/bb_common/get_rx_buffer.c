/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> bb_common.o -> get_rx_buffer
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_rx_buffer(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar7 = CONCAT13(DAT_600123c8,CONCAT12(DAT_600123c7,CONCAT11(DAT_600123c6,DAT_600123c5))) &
          0x1fffffff;
  DAT_600123c6 = (undefined1)(uVar7 >> 8);
  DAT_600123c7 = (undefined1)(uVar7 >> 0x10);
  DAT_600123c8 = (byte)(uVar7 >> 0x18);
  uVar7 = CONCAT13(DAT_600123c4,CONCAT12(DAT_600123c3,CONCAT11(DAT_600123c2,DAT_600123c1))) &
          0xefffffff;
  DAT_600123c2 = (undefined1)(uVar7 >> 8);
  DAT_600123c3 = (undefined1)(uVar7 >> 0x10);
  DAT_600123c4 = (undefined1)(uVar7 >> 0x18);
  do {
    DAT_600123c8 = DAT_600123c8 | 0x40;
    do {
    } while ((int)((uint)DAT_600123c8 << 0x19) < 0);
    puVar3 = (uint *)get_rxctrl_addr(DAT_600123c5,DAT_600123c7);
    uVar2 = *puVar3;
    uVar7 = *puVar3;
    if ((uVar2 & 0xc000) == 0x4000) {
      uVar9 = (puVar3[1] & 0xf) + 0x10;
    }
    else {
      uVar9 = uVar2 >> 8 & 0x1f;
    }
    if ((uVar2 & 0xc000) == 0) {
      uVar2 = uVar2 >> 0x10 & 0xfff;
    }
    else {
      uVar2 = puVar3[1] >> 8 & 0xffff;
    }
    uVar4 = phy_get_rx_freq(uVar9,puVar3[4]);
    uVar6 = puVar3[0x1a];
    if (param_1 == 1) {
      uVar8 = uVar6 << 0x18 | uVar6 >> 0x18 | (uVar6 & 0xff00) << 8;
      uVar1 = uVar6 >> 0x10;
_L215:
      if ((uVar8 | (uVar1 & 0xff) << 8) == param_2) goto _L206;
    }
    else {
      if (param_1 == 2) {
        uVar8 = (puVar3[0x19] >> 0x10) << 0x18 | (puVar3[0x19] >> 0x18) << 0x10;
        uVar1 = uVar6;
        goto _L215;
      }
_L206:
      phy_printf("SA:%02x:%02x:%02x:%02x:%02x:%02x, ",puVar3[0x19] >> 0x10 & 0xff,
                 puVar3[0x19] >> 0x18,uVar6 & 0xff,uVar6 >> 8 & 0xff,uVar6 >> 0x10 & 0xff,
                 uVar6 >> 0x18);
      uVar6 = puVar3[0x18];
      phy_printf("DA:%02x:%02x:%02x:%02x:%02x:%02x, ",uVar6 & 0xff,uVar6 >> 8 & 0xff,
                 uVar6 >> 0x10 & 0xff,uVar6 >> 0x18,puVar3[0x19] & 0xff,puVar3[0x19] >> 8 & 0xff);
      uVar6 = puVar3[0x1b];
      phy_printf("ssid:%02x:%02x:%02x:%02x:%02x:%02x, ",uVar6 & 0xff,uVar6 >> 8 & 0xff,
                 uVar6 >> 0x10 & 0xff,uVar6 >> 0x18,puVar3[0x1c] & 0xff,puVar3[0x1c] >> 8 & 0xff);
      uVar6 = puVar3[0x17];
      phy_printf("FC:%02x:%02x:%02x:%02x, ",uVar6 >> 0x18,uVar6 >> 0x10 & 0xff,uVar6 >> 8 & 0xff,
                 uVar6 & 0xff);
      phy_printf("rssi:%02d, rate:%02d, len:%03d, freq:%02d\n",(char)uVar7,uVar9,uVar2,uVar4);
    }
    iVar5 = GetStopCmd();
    if (iVar5 == 0) {
      return;
    }
  } while( true );
}

