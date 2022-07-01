/*
 * Last changed at upstream commit 240e008e89a447f2f1edf990efefa45b870e6e8a
 * https://github.com/espressif/esp-phy-lib/commit/240e008e89a447f2f1edf990efefa45b870e6e8a
 * Upstream date: 2022-07-01 15:45:54 +0800
 * Upstream subject: Support 26M and 40M Crystal
 * Source: libphy -> phy_rx_gain.o -> wr_rx_gain_mem_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wr_rx_gain_mem_new(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  code *pcVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  int iStack_94;
  undefined1 uStack_61;
  uint uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  iStack_94 = 0x50;
  if (param_1 == 0) {
    iStack_94 = 0;
  }
  uStack_5c = 0x1000100;
  uStack_60 = 0x1000100;
  uVar1 = _DAT_000110a2 >> 3;
  chip_v7_set_chan_ana(0xe);
  bVar11 = 0;
  uVar2 = 0xf;
  uVar17 = 0x100;
  uVar16 = 0x100;
  (**(code **)(_g_phyFuns + 0x78))(*(code **)(_g_phyFuns + 0x78));
  uVar15 = 0x100;
  (**(code **)(_g_phyFuns + 0x88))(0,*(code **)(_g_phyFuns + 0x88));
  set_rxclk_en(1);
  set_txclk_en(1);
  uStack_60 = 0x1000100;
  iStack_a4 = 0;
  uStack_a0 = 0x100;
  uStack_9c = 0;
  do {
    if (param_2 == iStack_a4) {
      set_rxclk_en(0);
      set_txclk_en(0);
      (**(code **)(_g_phyFuns + 0x88))(0,*(code **)(_g_phyFuns + 0x88));
      (**(code **)(_g_phyFuns + 0x7c))(*(code **)(_g_phyFuns + 0x7c));
      return;
    }
    uVar12 = *(uint *)(iStack_a4 * 4 + param_3);
    iVar8 = 4;
    do {
      iVar8 = iVar8 + 1;
    } while (iVar8 != 10);
    uVar13 = uVar12 >> 0xc;
    if (uVar13 == uStack_9c) {
      bVar11 = bVar11 + 1;
      if (bVar11 == 0) goto _L6;
      if (param_1 != 0) {
        bVar14 = (uVar12 & 7) == 0;
        goto _L9;
      }
      bVar14 = (bool)(~bVar11 & 1);
    }
    else {
      uStack_9c = uVar13;
      if (uVar2 == 0xf) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + 1 & 0xff;
      }
_L6:
      bVar11 = 0;
      bVar14 = true;
      if (param_1 != 0) {
_L9:
        pcVar10 = *(code **)(_g_phyFuns + 0x70);
        uVar3 = (**(code **)(_g_phyFuns + 0x74))(1,1,*(code **)(_g_phyFuns + 0x74));
        (*pcVar10)(1,1,uVar3 | 2,pcVar10);
      }
    }
    (**(code **)(_g_phyFuns + 0x70))(4,2,0,*(code **)(_g_phyFuns + 0x70));
    (**(code **)(_g_phyFuns + 0x80))(uVar12,*(code **)(_g_phyFuns + 0x80));
    if (bVar14 != false) {
      uStack_5c = 0x1000100;
      pbus_rx_dco_cal_new(0x800,&uStack_60,10,param_1,uVar1 & 1);
      uStack_a0 = uStack_5c >> 0x10;
      uVar15 = uStack_60 & 0xffff;
      uVar17 = uStack_60 >> 0x10;
      uVar16 = uStack_5c & 0xffff;
    }
    if (bVar11 == 0) {
      uVar9 = uVar15 << 0x10 | uVar17;
      if (param_1 == 0) {
        *(uint *)(set_txclk_en + (uVar2 + 0x8c) * 4) = uVar9;
      }
      else {
        *(uint *)(pbus_rx_dco_cal_new + (uVar2 + 0x94) * 4) = uVar9;
      }
    }
    (**(code **)(_g_phyFuns + 0xf8))
              (uStack_a0 << 0xb | uVar16 << 0x1d | uVar17 << 0x14 | _DAT_00011178 & 0x7ff,
               (uint)(DAT_00011094 >> 6) << 0x1e | (DAT_00011094 & 7) << 0x1b | (uVar12 & 7) << 0xf
               | (uVar12 >> 4 & 0x7f) << 0x12 | uVar15 << 6 | uVar16 >> 3,
               uVar13 & 7 | uVar12 >> 0xc & 0x38,iStack_94 + iStack_a4 & 0xff,
               *(code **)(_g_phyFuns + 0xf8));
    if ((uVar1 & 1) != 0) {
      (**(code **)(_g_phyFuns + 0x70))(2,1,uVar15,*(code **)(_g_phyFuns + 0x70));
      (**(code **)(_g_phyFuns + 0x70))(3,1,uVar17,*(code **)(_g_phyFuns + 0x70));
      (**(code **)(_g_phyFuns + 0x70))(2,2,uVar16,*(code **)(_g_phyFuns + 0x70));
      (**(code **)(_g_phyFuns + 0x70))(3,2,uStack_a0,*(code **)(_g_phyFuns + 0x70));
      iVar8 = (int)DAT_0001121a;
      uVar4 = (**(code **)(_g_phyFuns + 0x74))(0,1,*(code **)(_g_phyFuns + 0x74));
      uVar5 = (**(code **)(_g_phyFuns + 0x74))(0,2,*(code **)(_g_phyFuns + 0x74));
      uVar6 = (**(code **)(_g_phyFuns + 0x74))(1,2,*(code **)(_g_phyFuns + 0x74));
      uVar7 = (**(code **)(_g_phyFuns + 0x74))(1,1,*(code **)(_g_phyFuns + 0x74));
      phy_printf("chan=%d; index=%d; gain=0x%x; rfrx=0x%x,0x%x, bb2=0x%x,0x%x,iq=%x,index:%d,%d,iq_i=%d dco: %d %d %d %d; res dc: "
                 ,iVar8,iStack_94 + iStack_a4,uVar12,uVar4,uVar5,uVar6,uVar7);
      (**(code **)(_g_phyFuns + 0x178))(4000,0,&uStack_58,&uStack_61,*(code **)(_g_phyFuns + 0x178))
      ;
      (**(code **)(_g_phyFuns + 0x178))(4000,0,&uStack_4c,&uStack_61,*(code **)(_g_phyFuns + 0x178))
      ;
      phy_printf("%d,%d;%d,%d\n",uStack_58,uStack_54,uStack_4c,uStack_48);
    }
    iStack_a4 = iStack_a4 + 1;
  } while( true );
}

