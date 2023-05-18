/*
 * Last changed at upstream commit d39766d34edf7bf22dddc91d5f45f2b91576a407
 * https://github.com/espressif/esp-phy-lib/commit/d39766d34edf7bf22dddc91d5f45f2b91576a407
 * Upstream date: 2023-05-18 20:57:26 +0800
 * Upstream subject: esp32c6: enable wifi_apb_clk before phy_init and restore after phy_init, C6_libphy_20230517_b4b3263
 * Source: libphy -> phy_rx_cal.o -> set_rx_gain_cal_dc_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_rx_gain_cal_dc_new(int param_1,int param_2,undefined2 *param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined2 *puVar3;
  ushort *puVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  undefined1 uStack_75;
  undefined4 uStack_74;
  undefined4 uStack_70;
  ushort local_6c [14];
  ushort local_50 [14];
  
  uStack_74 = 0x1000100;
  uStack_70 = 0x1000100;
  local_6c[0] = 0;
  local_6c[1] = 4;
  local_6c[2] = 0x200;
  local_6c[3] = 0x204;
  local_6c[4] = 0x300;
  local_6c[5] = 0x304;
  memcpy(local_50,&DAT_00011118,0x10);
  memcpy(local_6c + 6,&DAT_00011128,0xe);
  uVar7 = 7;
  if ((param_1 == 0) && (uVar7 = 6, param_2 == 0)) {
    uVar7 = 8;
  }
  chip_v7_set_chan_ana(0xe);
  pbus_debugmode();
  (**(code **)(_g_phyFuns + 0x84))(0,*(code **)(_g_phyFuns + 0x84));
  set_rxclk_en(1);
  set_txclk_en(1);
  if (param_1 != 0) {
    pcVar5 = *(code **)(_g_phyFuns + 0x74);
    uVar1 = (**(code **)(_g_phyFuns + 0x78))(1,1,*(code **)(_g_phyFuns + 0x78));
    (*pcVar5)(1,1,uVar1 | 2);
    (**(code **)(_g_phyFuns + 0x60))(0x67,1,3,2,2,0,*(code **)(_g_phyFuns + 0x60));
  }
  puVar8 = local_6c;
  uVar6 = 0;
  do {
    uVar1 = *puVar8;
    iVar9 = 0;
    if (0x2ff < (uVar1 & 0xff0)) {
      iVar9 = 7;
    }
    if (param_2 == 1) {
      puVar3 = (undefined2 *)(iVar9 * 4 + param_4);
      (**(code **)(_g_phyFuns + 0x74))(2,1,*puVar3);
      (**(code **)(_g_phyFuns + 0x74))(3,1,puVar3[1],*(code **)(_g_phyFuns + 0x74));
_L167:
      uVar2 = (uint)local_50[iVar9] << 0xc | (uint)uVar1;
    }
    else {
      (**(code **)(_g_phyFuns + 0x74))(2,1,0x100);
      (**(code **)(_g_phyFuns + 0x74))(3,1,0x100,*(code **)(_g_phyFuns + 0x74));
      if (param_2 != 0) goto _L167;
      puVar4 = local_6c + 6;
      if (param_1 == 0) {
        puVar4 = local_50;
      }
      uVar2 = (uint)puVar4[uVar6] << 0xc;
    }
    uVar6 = uVar6 + 1;
    puVar8 = puVar8 + 1;
    (**(code **)(_g_phyFuns + 0x7c))(uVar2,*(code **)(_g_phyFuns + 0x7c));
    pbus_rx_dco_cal_1step_new(param_1,param_2 == 0,0x800,&uStack_74,&uStack_75);
    *param_3 = (undefined2)uStack_74;
    param_3[1] = uStack_74._2_2_;
    param_3 = param_3 + 2;
    if (uVar7 <= (uVar6 & 0xff)) {
      if (param_1 != 0) {
        (**(code **)(_g_phyFuns + 0x60))(0x67,1,3,2,2,1,*(code **)(_g_phyFuns + 0x60));
      }
      set_rxclk_en(0);
      set_txclk_en(0);
      (**(code **)(_g_phyFuns + 0x80))(*(code **)(_g_phyFuns + 0x80));
      pbus_workmode();
      return;
    }
  } while( true );
}

