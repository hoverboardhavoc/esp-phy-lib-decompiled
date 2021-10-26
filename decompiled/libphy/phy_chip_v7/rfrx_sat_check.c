/*
 * Last changed at upstream commit 7586abbf591ab63d609d7afeb377559deabec808
 * https://github.com/espressif/esp-phy-lib/commit/7586abbf591ab63d609d7afeb377559deabec808
 * Upstream date: 2021-10-26 15:21:29 +0800
 * Upstream subject: update phy lib to fix usb & rssi issue(cc45c1a)
 * Source: libphy -> phy_chip_v7.o -> rfrx_sat_check
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rfrx_sat_check(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint local_58;
  undefined1 auStack_54 [8];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  
  local_58 = 0xc8c8c8c8;
  chip_v7_set_chan(0xe,0);
  uVar6 = (**(code **)(g_phyFuns + 0x1b8))(0x6b,0,7,3,0,*(code **)(g_phyFuns + 0x1b8));
  uVar7 = (**(code **)(g_phyFuns + 0x1b8))(0x6b,0,7,7,4,*(code **)(g_phyFuns + 0x1b8));
  uVar8 = (**(code **)(g_phyFuns + 0x1b8))(0x6b,0,8,3,0,*(code **)(g_phyFuns + 0x1b8));
  uVar9 = (**(code **)(g_phyFuns + 0x1b8))(0x6b,0,3,3,0,*(code **)(g_phyFuns + 0x1b8));
  uVar10 = (**(code **)(g_phyFuns + 0x1b8))(0x6b,0,5,3,0,*(code **)(g_phyFuns + 0x1b8));
  (**(code **)(g_phyFuns + 0x1bc))(0x6b,0,7,3,0,0,*(code **)(g_phyFuns + 0x1bc));
  (**(code **)(g_phyFuns + 0x1bc))(0x6b,0,7,7,4,0,*(code **)(g_phyFuns + 0x1bc));
  (**(code **)(g_phyFuns + 0x1bc))(0x6b,0,8,3,0,0,*(code **)(g_phyFuns + 0x1bc));
  (**(code **)(g_phyFuns + 0x1bc))(0x6b,0,3,3,0,0,*(code **)(g_phyFuns + 0x1bc));
  (**(code **)(g_phyFuns + 0x1bc))(0x6b,0,5,3,0,0,*(code **)(g_phyFuns + 0x1bc));
  iVar15 = 0;
  (**(code **)(g_phyFuns + 0x1d4))(*(code **)(g_phyFuns + 0x1d4));
  (**(code **)(g_phyFuns + 0x1e4))(0,*(code **)(g_phyFuns + 0x1e4));
  (**(code **)(g_phyFuns + 0x24))(1,*(code **)(g_phyFuns + 0x24));
  rfrx_sat_rst(0);
  (**(code **)(g_phyFuns + 0x1c))(0,0x1d0,0,*(code **)(g_phyFuns + 0x1c));
  (**(code **)(g_phyFuns + 0x1cc))(1,1,0,*(code **)(g_phyFuns + 0x1cc));
  (**(code **)(g_phyFuns + 0x1cc))(1,1,0x1f9,*(code **)(g_phyFuns + 0x1cc));
  pbus_rx_dco_cal(4000,auStack_54,10,0,0);
  (**(code **)(g_phyFuns + 0x1bc))(100,1,8,2,0,0,*(code **)(g_phyFuns + 0x1bc));
  uVar3 = 0x50;
  do {
    start_tx_tone_step(1,0x40,uVar3 & 0xff,0,0,0);
    (**(code **)(g_phyFuns + 0x10c))(1,0x400,&uStack_4c,*(code **)(g_phyFuns + 0x10c));
    if (param_1 != 0) {
      phy_printf("%d, atten=%d, %d, %d %d\n",iVar15,uVar3,uStack_4c,uStack_48,iStack_44);
    }
    if (iStack_44 - 0x21U < 3) break;
    iVar12 = (int)(((uVar3 & 0xffff) + (0x22 - iStack_44) * -4) * 0x10000) >> 0x10;
    if (iVar12 < 0x78) {
      iVar12 = 0x78;
    }
    iVar15 = iVar15 + 1;
    uVar3 = (uint)(short)iVar12;
  } while (iVar15 != 0x14);
  uVar16 = 0x14;
  do {
    uVar17 = uVar16 & 0xff;
    (**(code **)(g_phyFuns + 0x1bc))(100,1,8,7,3,uVar17,*(code **)(g_phyFuns + 0x1bc));
    ets_delay_us(10);
    uVar13 = (uVar3 & 0xffff) + 8 & 0xffff;
    puVar14 = &local_58;
    do {
      uVar4 = uVar13;
      if (0x7f < (short)uVar13) {
        uVar4 = 0x7f;
      }
      sVar2 = (short)uVar4;
      if ((int)(uVar4 << 0x10) < 0) {
        sVar2 = 0;
      }
      uVar4 = (int)sVar2 & 0xff;
      start_tx_tone_step(1,0x40,uVar4,0,0,0);
      ets_delay_us(1);
      get_rfrx_sat();
      uVar5 = get_rfrx_sat();
      *(undefined1 *)puVar14 = uVar5;
      uVar18 = local_58 & 0xff;
      if (uVar18 != 0) break;
      puVar14 = (uint *)((int)puVar14 + 1);
      uVar13 = uVar13 - 8 & 0xffff;
    } while (((uVar3 & 0xffff) - 0x18 & 0xffff) != uVar13);
    start_tx_tone_step(0,0x40,uVar4,0,0,0);
    iVar15 = 0;
    bVar1 = 0;
    do {
      pcVar11 = (char *)((int)&local_58 + iVar15);
      iVar15 = iVar15 + 1;
      bVar1 = bVar1 + (*pcVar11 != '\0');
    } while (iVar15 != 4);
    if (param_1 != 0) {
      phy_printf("dac=%d, atten=%d, sat=%d, %d, %d %d, num=%d\n",uVar16,(int)sVar2,uVar18,
                 local_58 >> 8 & 0xff,local_58 >> 0x10 & 0xff,local_58 >> 0x18,bVar1);
    }
    if (bVar1 < 3) goto _L570;
    uVar16 = uVar16 - 1;
  } while (uVar16 != 0);
  uVar17 = 0;
_L570:
  (**(code **)(g_phyFuns + 0x1bc))(100,1,8,7,3,uVar17,*(code **)(g_phyFuns + 0x1bc));
  _DAT_6001c05c = _DAT_6001c05c | 0x1080000;
  (**(code **)(g_phyFuns + 0x24))(0,*(code **)(g_phyFuns + 0x24));
  (**(code **)(g_phyFuns + 0x1e4))(0,*(code **)(g_phyFuns + 0x1e4));
  (**(code **)(g_phyFuns + 0x1d8))(*(code **)(g_phyFuns + 0x1d8));
  (**(code **)(g_phyFuns + 0x1bc))(0x6b,0,7,3,0,uVar6,*(code **)(g_phyFuns + 0x1bc));
  (**(code **)(g_phyFuns + 0x1bc))(0x6b,0,7,7,4,uVar7,*(code **)(g_phyFuns + 0x1bc));
  (**(code **)(g_phyFuns + 0x1bc))(0x6b,0,8,3,0,uVar8,*(code **)(g_phyFuns + 0x1bc));
  (**(code **)(g_phyFuns + 0x1bc))(0x6b,0,3,3,0,uVar9,*(code **)(g_phyFuns + 0x1bc));
  (**(code **)(g_phyFuns + 0x1bc))(0x6b,0,5,3,0,uVar10,*(code **)(g_phyFuns + 0x1bc));
  return;
}

