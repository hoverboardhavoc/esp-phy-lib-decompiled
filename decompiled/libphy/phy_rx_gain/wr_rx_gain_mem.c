/*
 * Last changed at upstream commit 979b0530b1210dd53d4a776053cb953d27d951b9
 * https://github.com/espressif/esp-phy-lib/commit/979b0530b1210dd53d4a776053cb953d27d951b9
 * Upstream date: 2022-12-14 13:04:45 +0800
 * Upstream subject: phy_init: phy_version 101,0868884,Dec  7 2022,14:01:12
 * Source: libphy -> phy_rx_gain.o -> wr_rx_gain_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wr_rx_gain_mem(int param_1,uint param_2,int param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uStack_48;
  uint uStack_44;
  
  if (param_1 == 0) {
    iVar10 = 0;
    iVar9 = 8;
  }
  else {
    iVar10 = 0x50;
    iVar9 = 7;
  }
  uStack_48 = 0x1000100;
  uStack_44 = 0x1000100;
  pbus_debugmode();
  (**(code **)(_g_phyFuns + 0x84))(0,*(code **)(_g_phyFuns + 0x84));
  set_rxclk_en(1);
  set_txclk_en(1);
  uVar12 = 0x100;
  uVar11 = 0x100;
  for (uVar8 = 0; param_2 != uVar8; uVar8 = uVar8 + 1) {
    uVar13 = *(uint *)(uVar8 * 4 + param_3);
    iVar4 = (**(code **)(_g_phyFuns + 0xa8))(uVar13 >> 4 & 0x3f,*(code **)(_g_phyFuns + 0xa8));
    uVar5 = rfrx_gain_index_new(param_1,uVar13 >> 0xc & 0xffff);
    iVar6 = 7;
    if (iVar9 == 7) {
      iVar6 = 6;
    }
    if (iVar6 <= (int)uVar5) {
      uVar5 = iVar4 + uVar5;
    }
    puVar7 = (ushort *)((uVar5 & 0x7f) * 4 + param_4);
    uVar1 = *puVar7;
    uVar2 = puVar7[1];
    uVar3 = *(undefined4 *)puVar7;
    if (param_1 == 0) {
      if ((uVar8 & 1) == 0) {
        (**(code **)(_g_phyFuns + 0x7c))(uVar13,*(code **)(_g_phyFuns + 0x7c));
        uStack_48 = uVar3;
        pbus_rx_dco_cal_new(0x800,&uStack_48,10,0,0,1);
        uVar11 = uStack_44 & 0xffff;
        uVar12 = uStack_44 >> 0x10;
      }
    }
    else {
      uVar12 = 0x100;
      uVar11 = 0x100;
    }
    write_gain_mem_new(_DAT_000110e4 & 0x1fff | (uint)uVar2 << 0x16 | uVar11 << 0x1f | uVar12 << 0xd
                       ,uVar11 >> 1 |
                        (uint)DAT_00011012 << 0x1d | (uVar13 & 7) << 0x11 |
                        (uVar13 >> 4 & 0x7f) << 0x14 | (uint)uVar1 << 8,
                       (uint)(DAT_00011012 >> 6) | (uVar13 >> 0xc & 7) << 2 | uVar13 >> 10 & 0xe0,
                       iVar10 + (uVar8 & 0xff) & 0xff);
  }
  set_rxclk_en(0);
  set_txclk_en(0);
  (**(code **)(_g_phyFuns + 0x84))(0,*(code **)(_g_phyFuns + 0x84));
  pbus_workmode();
  return;
}

