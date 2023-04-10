/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
 * Source: libphy -> phy_rx_cal.o -> set_rx_gain_cal_iq_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_rx_gain_cal_iq_new(int param_1,undefined4 param_2,undefined2 *param_3,int param_4)

{
  uint uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uStack_50;
  undefined1 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uStack_48 = 0x1000100;
  uStack_44 = 0x1000100;
  uStack_50 = 0x10307;
  uVar6 = _chip_v7_set_chan_ana >> 3 & 1;
  uStack_4c = 0;
  uVar11 = 0;
  if (param_1 != 0) {
    uVar11 = (**(code **)(_g_phyFuns + 0x5c))(0x67,1,3,2,2,*(code **)(_g_phyFuns + 0x5c));
    (**(code **)(_g_phyFuns + 0x60))(0x67,1,3,2,2,0,*(code **)(_g_phyFuns + 0x60));
  }
  _DAT_600a0450 = _DAT_600a0450 & 0xbfffbfff | 0x20002000;
  uStack_48 = 0x1000100;
  uVar10 = uStack_50 >> 8 & 0xff;
  iVar12 = 2;
  uVar8 = 1;
  (**(code **)(_g_phyFuns + 0x90))(uVar10,0x41,0xa0,*(code **)(_g_phyFuns + 0x90));
  uVar1 = 0x30;
  set_lb_txiq_new(_DAT_000120f4);
  pbus_rx_dco_cal(4000,&uStack_48,10,0,uVar6);
  do {
    (**(code **)(_g_phyFuns + 0x74))(1,1,0,*(code **)(_g_phyFuns + 0x74));
    (**(code **)(_g_phyFuns + 0x74))(1,1,0x1f9,*(code **)(_g_phyFuns + 0x74));
    (**(code **)(_g_phyFuns + 0x98))(1,param_2,uVar1 & 0xff,0,0,0,*(code **)(_g_phyFuns + 0x98));
    (**(code **)(_g_phyFuns + 0xa0))(1,0x3ff,*(code **)(_g_phyFuns + 0xa0));
    iVar9 = _DAT_600a0490 >> 7;
    if (param_4 != 0) {
      uVar3 = (**(code **)(_g_phyFuns + 0x78))(5,1,*(code **)(_g_phyFuns + 0x78));
      uVar4 = (**(code **)(_g_phyFuns + 0x78))(1,2,*(code **)(_g_phyFuns + 0x78));
      uVar5 = (**(code **)(_g_phyFuns + 0x78))(0,2,*(code **)(_g_phyFuns + 0x78));
      phy_printf("total_pwr=%ld, min=%ld, max=%ld, rftx=0x%x, bb=0x%x, rfrx2=%x,att=%d, dc_i=%d, dc_q=%d\n"
                 ,iVar9,0x1000,0x20000,uVar3,uVar4,uVar5,uVar1);
    }
    (**(code **)(_g_phyFuns + 0xa4))(*(code **)(_g_phyFuns + 0xa4));
    (**(code **)(_g_phyFuns + 0x9c))(1,*(code **)(_g_phyFuns + 0x9c));
    if (iVar9 < 0x20001) {
      if (0xfff < iVar9) {
_L139:
        if (param_4 != 0) {
          phy_printf("rxiq: rftx=0x%x, rfrx=x%x, att=%d, bb=0x%x, %d, %d\n",uVar10,0x104,uVar1,0xa0,
                     0,2);
        }
        uVar2 = get_rfcal_rxiq_data_new(param_2,uVar1 & 0xff,param_4);
        *param_3 = uVar2;
        if (param_1 != 0) {
          (**(code **)(_g_phyFuns + 0x60))(0x67,1,3,2,2,uVar11,*(code **)(_g_phyFuns + 0x60));
        }
        _DAT_600a0450 = _DAT_600a0450 | 0x40004000;
        return;
      }
      uVar1 = (int)((uVar1 - 0x18) * 0x10000) >> 0x10;
    }
    else {
      uVar8 = uVar8 + 1 & 0xffff;
    }
    uVar10 = (uint)*(byte *)((int)&uStack_50 + uVar8);
    (**(code **)(_g_phyFuns + 0x90))(uVar10,0x41,0xa0,*(code **)(_g_phyFuns + 0x90));
    pbus_rx_dco_cal(4000,&uStack_48,10,0,uVar6);
    if (0x78 < (int)uVar1) {
      uVar1 = 0x78;
    }
    sVar7 = (short)uVar1;
    if ((int)(uVar1 << 0x10) < 0) {
      sVar7 = 0;
    }
    uVar1 = (uint)sVar7;
    if (iVar12 == 1) goto _L139;
    iVar12 = 1;
  } while( true );
}

