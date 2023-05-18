/*
 * Last changed at upstream commit d39766d34edf7bf22dddc91d5f45f2b91576a407
 * https://github.com/espressif/esp-phy-lib/commit/d39766d34edf7bf22dddc91d5f45f2b91576a407
 * Upstream date: 2023-05-18 20:57:26 +0800
 * Upstream subject: esp32c6: enable wifi_apb_clk before phy_init and restore after phy_init, C6_libphy_20230517_b4b3263
 * Source: libphy -> phy_rx_cal.o -> set_rx_gain_cal_iq_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_rx_gain_cal_iq_new(int param_1,undefined4 param_2,undefined2 *param_3,int param_4)

{
  short sVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uStack_48 = 0x1000100;
  uStack_44 = 0x1000100;
  uVar7 = _chip_v7_set_chan_ana >> 3 & 1;
  uVar10 = 0;
  if (param_1 != 0) {
    uVar10 = (**(code **)(_g_phyFuns + 0x5c))(0x67,1,3,2,2,*(code **)(_g_phyFuns + 0x5c));
    (**(code **)(_g_phyFuns + 0x60))(0x67,1,3,2,2,0,*(code **)(_g_phyFuns + 0x60));
  }
  uStack_48 = 0x1000100;
  iVar11 = 2;
  (**(code **)(_g_phyFuns + 0x90))(0,0x43,0x20,*(code **)(_g_phyFuns + 0x90));
  iVar9 = 0x20;
  uVar2 = 0x30;
  set_lb_txiq_new(_DAT_000120f4);
  pbus_rx_dco_cal(4000,&uStack_48,10,0,uVar7);
  do {
    (**(code **)(_g_phyFuns + 0x74))(1,1,0,*(code **)(_g_phyFuns + 0x74));
    (**(code **)(_g_phyFuns + 0x74))(1,1,0x1f9,*(code **)(_g_phyFuns + 0x74));
    (**(code **)(_g_phyFuns + 0x98))(1,param_2,uVar2 & 0xff,0,0,0,*(code **)(_g_phyFuns + 0x98));
    (**(code **)(_g_phyFuns + 0xa0))(1,0x3ff,*(code **)(_g_phyFuns + 0xa0));
    iVar8 = _DAT_600a0490 >> 7;
    if (param_4 != 0) {
      uVar4 = (**(code **)(_g_phyFuns + 0x78))(5,1,*(code **)(_g_phyFuns + 0x78));
      uVar5 = (**(code **)(_g_phyFuns + 0x78))(1,2,*(code **)(_g_phyFuns + 0x78));
      uVar6 = (**(code **)(_g_phyFuns + 0x78))(0,2,*(code **)(_g_phyFuns + 0x78));
      phy_printf("total_pwr=%ld, min=%ld, max=%ld, rftx=0x%x, bb=0x%x, rfrx2=%x,att=%d, dc_i=%d, dc_q=%d\n"
                 ,iVar8,0x1000,0x20000,uVar4,uVar5,uVar6,uVar2);
    }
    (**(code **)(_g_phyFuns + 0xa4))(*(code **)(_g_phyFuns + 0xa4));
    (**(code **)(_g_phyFuns + 0x9c))(1,*(code **)(_g_phyFuns + 0x9c));
    if (iVar8 < 0x20001) {
      if (0xfff < iVar8) {
_L139:
        if (param_4 != 0) {
          phy_printf("rxiq: rftx=0x%x, rfrx=x%x, att=%d, bb=0x%x\n",0,0x104,uVar2,iVar9);
        }
        uVar3 = get_rfcal_rxiq_data_new(param_2,uVar2 & 0xff,param_4);
        *param_3 = uVar3;
        if (param_1 != 0) {
          (**(code **)(_g_phyFuns + 0x60))(0x67,1,3,2,2,uVar10,*(code **)(_g_phyFuns + 0x60));
        }
        return;
      }
      sVar1 = (short)uVar2 + -0x18;
_L161:
      uVar2 = (uint)sVar1;
    }
    else {
      if (iVar9 == 0) {
        sVar1 = (short)uVar2 + 0x18;
        goto _L161;
      }
      iVar9 = 0;
    }
    (**(code **)(_g_phyFuns + 0x90))(0,0x43,iVar9,*(code **)(_g_phyFuns + 0x90));
    pbus_rx_dco_cal(4000,&uStack_48,10,0,uVar7);
    if (0x78 < (int)uVar2) {
      uVar2 = 0x78;
    }
    sVar1 = (short)uVar2;
    if ((int)(uVar2 << 0x10) < 0) {
      sVar1 = 0;
    }
    uVar2 = (uint)sVar1;
    if (iVar11 == 1) goto _L139;
    iVar11 = 1;
  } while( true );
}

