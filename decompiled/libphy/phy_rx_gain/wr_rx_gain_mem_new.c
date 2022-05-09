/*
 * Last changed at upstream commit d8ee8f776acd1aafdfc3046f526db024b175b094
 * https://github.com/espressif/esp-phy-lib/commit/d8ee8f776acd1aafdfc3046f526db024b175b094
 * Upstream date: 2022-05-09 07:50:30 -0400
 * Upstream subject: esp32c2: optimize rf performace
 * Source: libphy -> phy_rx_gain.o -> wr_rx_gain_mem_new
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wr_rx_gain_mem_new(int param_1,uint param_2,int param_3,int param_4)

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
  uint uVar10;
  uint uVar11;
  code *pcVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 uStack_61;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  iVar16 = 0;
  if (param_1 != 0) {
    iVar16 = 0x50;
  }
  uStack_5c = 0x1000100;
  uStack_60 = 0x1000100;
  uVar1 = _DAT_000110a2 >> 3;
  chip_v7_set_chan_ana(0xe);
  uVar10 = 0;
  (**(code **)(_g_phyFuns + 0x78))(*(code **)(_g_phyFuns + 0x78));
  (**(code **)(_g_phyFuns + 0x88))(0,*(code **)(_g_phyFuns + 0x88));
  set_rxclk_en(1);
  set_txclk_en(1);
  for (uVar9 = 0; param_2 != uVar9; uVar9 = uVar9 + 1) {
    uVar2 = *(uint *)(uVar9 * 4 + param_3);
    iVar8 = 4;
    do {
      iVar8 = iVar8 + 1;
    } while (iVar8 != 10);
    if (((uVar9 & 0xff) != 0) && ((uVar2 & 0xfff) == 0)) {
      uVar10 = uVar10 + 1 & 0xff;
    }
    uVar11 = *(uint *)(uVar10 * 4 + param_4);
    uVar15 = uVar11 >> 0x10;
    pcVar12 = *(code **)(_g_phyFuns + 0x70);
    if (param_1 == 0) {
      (*pcVar12)(4,2,0);
    }
    else {
      uVar3 = (**(code **)(_g_phyFuns + 0x74))(1,1,*(code **)(_g_phyFuns + 0x74));
      (*pcVar12)(1,1,uVar3 | 2);
      (**(code **)(_g_phyFuns + 0x70))(4,2,0,*(code **)(_g_phyFuns + 0x70));
    }
    (**(code **)(_g_phyFuns + 0x70))(2,1,uVar15,*(code **)(_g_phyFuns + 0x70));
    (**(code **)(_g_phyFuns + 0x70))(3,1,uVar11 & 0xffff,*(code **)(_g_phyFuns + 0x70));
    (**(code **)(_g_phyFuns + 0x70))(2,2,0x100,*(code **)(_g_phyFuns + 0x70));
    (**(code **)(_g_phyFuns + 0x70))(3,2,0x100,*(code **)(_g_phyFuns + 0x70));
    (**(code **)(_g_phyFuns + 0x80))(uVar2,*(code **)(_g_phyFuns + 0x80));
    if (param_1 == 0) {
      (**(code **)(_g_phyFuns + 0x174))
                (4000,&uStack_60,10,1,uVar1 & 1,*(code **)(_g_phyFuns + 0x174));
      uVar14 = uStack_5c & 0xffff;
      uVar13 = uStack_5c >> 0x10;
    }
    else {
      uVar13 = 0x100;
      uVar14 = 0x100;
    }
    (**(code **)(_g_phyFuns + 0xf8))
              (uVar13 << 0xb | _DAT_00011178 & 0x7ff | uVar11 << 0x14 | uVar14 << 0x1d,
               uVar14 >> 3 |
               (uint)(DAT_00011094 >> 6) << 0x1e | (DAT_00011094 & 7) << 0x1b | (uVar2 & 7) << 0xf |
               (uVar2 >> 4 & 0x7f) << 0x12 | uVar15 << 6,uVar2 >> 0xc & 0x38 | uVar2 >> 0xc & 7,
               iVar16 + (uVar9 & 0xff) & 0xff);
    if ((uVar1 & 1) != 0) {
      (**(code **)(_g_phyFuns + 0x70))(2,1,uVar15,*(code **)(_g_phyFuns + 0x70));
      (**(code **)(_g_phyFuns + 0x70))(3,1,uVar11 & 0xffff,*(code **)(_g_phyFuns + 0x70));
      (**(code **)(_g_phyFuns + 0x70))(2,2,uVar14,*(code **)(_g_phyFuns + 0x70));
      (**(code **)(_g_phyFuns + 0x70))(3,2,uVar13,*(code **)(_g_phyFuns + 0x70));
      iVar8 = (int)DAT_0001121a;
      uVar4 = (**(code **)(_g_phyFuns + 0x74))(0,1,*(code **)(_g_phyFuns + 0x74));
      uVar5 = (**(code **)(_g_phyFuns + 0x74))(0,2,*(code **)(_g_phyFuns + 0x74));
      uVar6 = (**(code **)(_g_phyFuns + 0x74))(1,2,*(code **)(_g_phyFuns + 0x74));
      uVar7 = (**(code **)(_g_phyFuns + 0x74))(1,1,*(code **)(_g_phyFuns + 0x74));
      phy_printf("chan=%d; index=%d; gain=0x%x; rfrx=0x%x,0x%x, bb2=0x%x,0x%x,index:%d,%d,%d,iq_i=%d dco: %d %d %d %d; res dc: "
                 ,iVar8,iVar16 + uVar9,uVar2,uVar4,uVar5,uVar6,uVar7);
      (**(code **)(_g_phyFuns + 0x178))(4000,0,&uStack_58,&uStack_61,*(code **)(_g_phyFuns + 0x178))
      ;
      (**(code **)(_g_phyFuns + 0x178))(4000,0,&uStack_4c,&uStack_61,*(code **)(_g_phyFuns + 0x178))
      ;
      phy_printf("%d,%d;%d,%d\n",uStack_58,uStack_54,uStack_4c,uStack_48);
    }
  }
  set_rxclk_en(0);
  set_txclk_en(0);
  (**(code **)(_g_phyFuns + 0x88))(0,*(code **)(_g_phyFuns + 0x88));
  (**(code **)(_g_phyFuns + 0x7c))(*(code **)(_g_phyFuns + 0x7c));
  return;
}

