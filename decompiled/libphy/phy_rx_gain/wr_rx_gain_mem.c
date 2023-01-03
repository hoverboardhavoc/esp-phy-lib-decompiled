/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
 * Source: libphy -> phy_rx_gain.o -> wr_rx_gain_mem
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wr_rx_gain_mem(int param_1,char param_2,uint *param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uStack_48;
  uint uStack_44;
  
  if (param_1 == 0) {
    cVar5 = '\0';
    iVar13 = 8;
  }
  else {
    cVar5 = 'P';
    iVar13 = 7;
  }
  uStack_48 = 0x1000100;
  uStack_44 = 0x1000100;
  pbus_debugmode();
  (**(code **)(_g_phyFuns + 0x84))(0,*(code **)(_g_phyFuns + 0x84));
  set_rxclk_en(1);
  set_txclk_en(1);
  uVar12 = 0x100;
  param_2 = param_2 + cVar5;
  uVar14 = 0x100;
  uVar9 = 10;
  for (; param_2 != cVar5; cVar5 = cVar5 + '\x01') {
    uVar11 = *param_3;
    iVar6 = (**(code **)(_g_phyFuns + 0xa8))(uVar11 >> 4 & 0x3f,*(code **)(_g_phyFuns + 0xa8));
    uVar7 = rfrx_gain_index_new(param_1,uVar11 >> 0xc & 0xffff);
    iVar8 = 7;
    if (iVar13 == 7) {
      iVar8 = 6;
    }
    uVar3 = uVar7;
    if (iVar8 <= (int)uVar7) {
      uVar3 = iVar6 + uVar7;
    }
    puVar10 = (ushort *)((uVar3 & 0x7f) * 4 + param_4);
    uVar1 = *puVar10;
    uVar2 = puVar10[1];
    uVar4 = *(undefined4 *)puVar10;
    if ((param_1 == 0) && ((uVar9 != uVar7 || ((uVar11 & 0x2ff) == 0x200)))) {
      (**(code **)(_g_phyFuns + 0x7c))(uVar11,*(code **)(_g_phyFuns + 0x7c));
      uStack_48 = uVar4;
      pbus_rx_dco_cal_new(0x800,&uStack_48,10,0,0,1);
      uVar14 = uStack_44 & 0xffff;
      uVar12 = uStack_44 >> 0x10;
    }
    write_gain_mem_new(_DAT_000110e4 & 0x1fff | (uint)uVar2 << 0x16 | uVar14 << 0x1f | uVar12 << 0xd
                       ,(uint)DAT_00011012 << 0x1d | (uVar11 & 7) << 0x11 |
                        (uVar11 >> 4 & 0x7f) << 0x14 | (uint)uVar1 << 8 | uVar14 >> 1,
                       uVar11 >> 10 & 0xe0 | (uVar11 >> 0xc & 7) << 2 | (uint)(DAT_00011012 >> 6),
                       cVar5);
    param_3 = param_3 + 1;
    uVar9 = uVar7;
  }
  set_rxclk_en(0);
  set_txclk_en(0);
  (**(code **)(_g_phyFuns + 0x84))(0,*(code **)(_g_phyFuns + 0x84));
  pbus_workmode();
  return;
}

