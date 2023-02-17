/*
 * Last changed at upstream commit 1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * https://github.com/espressif/esp-phy-lib/commit/1ab8c85ff11a8e0f85d430726b2ff2d3c40dbf1b
 * Upstream date: 2023-02-17 16:30:31 +0800
 * Upstream subject: esp32c6: update libphy to fix bb_cfg_2, protect bb_cfg_2 from reset, correct random channel register, allow to execute txpwrctrl after a while from phy_wake_up_init (phy_version 102,e0e553c,Feb 16 2023,16:20:06)
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
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 auStack_7c [12];
  ushort auStack_70 [8];
  ushort local_60 [8];
  ushort local_50 [14];
  
  uStack_84 = 0x1000100;
  uStack_80 = 0x1000100;
  memcpy(local_60,&_LANCHOR0,0x10);
  memcpy(local_50,&DAT_000111b0,0x10);
  memcpy(auStack_70,&DAT_000111c0,0xe);
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
  puVar6 = local_60;
  uVar7 = 0;
  do {
    uVar1 = *puVar6;
    iVar8 = 0;
    if (0x37f < (uVar1 & 0xff0)) {
      iVar8 = 7;
    }
    if (param_2 == 1) {
      puVar3 = (undefined2 *)(iVar8 * 4 + param_4);
      (**(code **)(_g_phyFuns + 0x74))(2,1,*puVar3);
      (**(code **)(_g_phyFuns + 0x74))(3,1,puVar3[1],*(code **)(_g_phyFuns + 0x74));
_L164:
      uVar2 = (uint)local_50[iVar8] << 0xc | (uint)uVar1;
    }
    else {
      (**(code **)(_g_phyFuns + 0x74))(2,1,0x100);
      (**(code **)(_g_phyFuns + 0x74))(3,1,0x100,*(code **)(_g_phyFuns + 0x74));
      if (param_2 != 0) goto _L164;
      puVar4 = auStack_70;
      if (param_1 == 0) {
        puVar4 = local_50;
      }
      uVar2 = (uint)puVar4[uVar7] << 0xc;
    }
    uVar7 = uVar7 + 1;
    puVar6 = puVar6 + 1;
    (**(code **)(_g_phyFuns + 0x7c))(uVar2,*(code **)(_g_phyFuns + 0x7c));
    pbus_rx_dco_cal_1step_new(param_1,param_2 == 0,0x800,&uStack_84,auStack_7c);
    *param_3 = (undefined2)uStack_84;
    param_3[1] = uStack_84._2_2_;
    param_3 = param_3 + 2;
    if ((param_1 == 0) + 7 <= (uVar7 & 0xff)) {
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

