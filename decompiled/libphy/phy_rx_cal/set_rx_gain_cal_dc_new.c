/*
 * Last changed at upstream commit 3c715e60c63d59b1d8240de147d46d78d84a97bf
 * https://github.com/espressif/esp-phy-lib/commit/3c715e60c63d59b1d8240de147d46d78d84a97bf
 * Upstream date: 2023-01-16 19:19:06 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_rx_cal.o -> set_rx_gain_cal_dc_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_rx_gain_cal_dc_new(int param_1,undefined2 *param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ushort auStack_60 [8];
  undefined1 auStack_50 [16];
  undefined1 local_40 [16];
  
  uStack_68 = 0x1000100;
  uStack_64 = 0x1000100;
  memcpy(auStack_60,&_LANCHOR0,0xe);
  memcpy(local_40,&DAT_00010b1c,0x10);
  memcpy(auStack_50,&DAT_00010b2c,0xe);
  if (param_1 == 0) {
    iVar5 = 8;
    uVar7 = 0xd;
  }
  else {
    iVar5 = 7;
    uVar7 = 0xc;
  }
  pbus_debugmode();
  (**(code **)(_g_phyFuns + 0x84))(0,*(code **)(_g_phyFuns + 0x84));
  set_rxclk_en(1);
  set_txclk_en(1);
  chip_v7_set_chan_ana(0xe);
  if (param_1 != 0) {
    pcVar6 = *(code **)(_g_phyFuns + 0x74);
    uVar1 = (**(code **)(_g_phyFuns + 0x78))(1,1,*(code **)(_g_phyFuns + 0x78));
    (*pcVar6)(1,1,uVar1 | 2);
    (**(code **)(_g_phyFuns + 0x60))(0x67,1,3,2,2,0,*(code **)(_g_phyFuns + 0x60));
  }
  uStack_68 = 0x1000100;
  uVar8 = 0;
  uVar9 = 0;
  do {
    iVar4 = 7;
    if (iVar5 == 7) {
      iVar4 = 6;
    }
    if ((int)uVar8 < iVar4) {
      puVar3 = auStack_50;
      if (param_1 == 0) {
        puVar3 = local_40;
      }
      uVar2 = (uint)*(ushort *)(puVar3 + uVar8 * 2) << 0xc | 0x200;
    }
    else {
      uVar9 = (1 - iVar5) + uVar8 & 0xff;
      uVar2 = (uint)auStack_60[uVar9] << 4 | 0x7f000;
    }
    (**(code **)(_g_phyFuns + 0x7c))(uVar2,*(code **)(_g_phyFuns + 0x7c));
    if (auStack_60[uVar9] < 0x39) {
      pbus_rx_dco_cal_new(0x800,&uStack_68,10,param_1,0,0);
    }
    uVar8 = uVar8 + 1;
    *param_2 = (undefined2)uStack_68;
    param_2[1] = uStack_68._2_2_;
    param_2 = param_2 + 2;
  } while ((uVar8 & 0xff) < uVar7);
  if (param_1 != 0) {
    (**(code **)(_g_phyFuns + 0x60))(0x67,1,3,2,2,1,*(code **)(_g_phyFuns + 0x60));
  }
  set_rxclk_en(0);
  set_txclk_en(0);
  (**(code **)(_g_phyFuns + 0x80))(*(code **)(_g_phyFuns + 0x80));
  pbus_workmode();
  return;
}

