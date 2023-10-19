/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> bb_common.o -> beacon_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

byte beacon_print(uint param_1)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  
  set_mac_filter(0x7060504,0x908);
  uVar3 = DAT_60012b48;
  DAT_60012b45 = 0;
  DAT_60012b46 = 0;
  DAT_60012b47 = 0;
  DAT_60012b48 = 0;
  iVar4 = phy_time_now(uVar3);
  uVar3 = 0;
  iVar12 = 0;
  DAT_60012f91 = DAT_60012f91 | 0xc;
  uVar2 = CONCAT13(DAT_60012360,CONCAT12(DAT_6001235f,CONCAT11(DAT_6001235e,DAT_6001235d)));
  iVar5 = get_rxctrl_addr(DAT_60012f93,DAT_60012f94);
  do {
    bVar8 = DAT_60012f8d & 4;
    if ((DAT_60012f8d & 4) == 0) {
      bVar1 = DAT_60012f94;
      if ((DAT_60012f8d & 8) != 0) {
        uVar9 = CONCAT13(DAT_60012f94,CONCAT12(DAT_60012f93,CONCAT11(DAT_60012f92,DAT_60012f91))) |
                8;
        uVar3 = DAT_600123b1;
        goto _L107;
      }
    }
    else {
      if (DAT_600123ed == '\0') {
        uVar9 = *(uint *)(iVar5 + 100);
        uVar10 = *(undefined4 *)(iVar5 + 0x68);
        if ((((DAT_600123f3 >> 6 == 0 && (DAT_600123f3 & 0x1f) == 0) &&
             (*(int *)(iVar5 + 0x5c) == 0x80)) && (*(int *)(iVar5 + 0x60) == -1)) &&
           ((uVar9 & 0xffff) == 0xffff)) {
          uVar11 = (uint)DAT_600123f4;
          if (0x7f < uVar11) {
            uVar11 = uVar11 - 0x100;
          }
          uVar6 = phy_time_now();
          phy_printf("i= %d, time=%d, mac=0x%x-%x, rssi=%d, gain=%d, rate=%d\n",iVar12,uVar6,
                     uVar9 >> 0x10,uVar10,uVar11 + (int)((uVar2 >> 5 | 0xfffffc00) * 10) / 0x28,
                     uVar3,0);
          iVar12 = iVar12 + 1;
        }
      }
      uVar9 = CONCAT13(DAT_60012f94,CONCAT12(DAT_60012f93,CONCAT11(DAT_60012f92,DAT_60012f91))) |
              0xc;
_L107:
      DAT_60012f91 = (byte)uVar9;
      DAT_60012f92 = (undefined1)(uVar9 >> 8);
      DAT_60012f93 = (undefined1)(uVar9 >> 0x10);
      bVar1 = (byte)(uVar9 >> 0x18);
      bVar8 = DAT_60012f94;
    }
    DAT_60012f94 = bVar1;
    iVar7 = phy_time_now(bVar8);
    if (param_1 < (uint)(iVar7 - iVar4)) {
      bVar8 = DAT_60012f91;
      DAT_60012f91 = DAT_60012f91 | 0xc;
      return bVar8;
    }
  } while( true );
}

