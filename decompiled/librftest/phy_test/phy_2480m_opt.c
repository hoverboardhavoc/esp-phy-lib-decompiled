/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> phy_test.o -> phy_2480m_opt
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_2480m_opt(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  uint auStack_28 [4];
  
  auStack_28[0] = 0;
  auStack_28[1] = 0;
  phy_set_freq(0x9b5,0);
  _DAT_6001c02c = _DAT_6001c02c & 0xffffff | 0x37800000;
  iVar2 = 0;
  puVar5 = auStack_28;
  while( true ) {
    (**(code **)(_g_phyFuns + 0x1bc))(0x66,0,4,3,2,iVar2 + 2,*(code **)(_g_phyFuns + 0x1bc));
    (**(code **)(_g_phyFuns + 0x1d4))(*(code **)(_g_phyFuns + 0x1d4));
    (**(code **)(_g_phyFuns + 0x1cc))(1,1,0,*(code **)(_g_phyFuns + 0x1cc));
    ets_delay_us(100);
    (**(code **)(_g_phyFuns + 0x1cc))(1,1,0x189,*(code **)(_g_phyFuns + 0x1cc));
    (**(code **)(_g_phyFuns + 0x1d8))(*(code **)(_g_phyFuns + 0x1d8));
    force_rx_gain(1,0x37,0);
    ets_delay_us(100);
    uVar4 = phy_corr_pwr_sum(0x80);
    *puVar5 = uVar4;
    uVar1 = auStack_28[1];
    uVar4 = auStack_28[0];
    if (iVar2 != 0) break;
    iVar2 = 1;
    puVar5 = puVar5 + 1;
  }
  uVar3 = 2;
  if (auStack_28[1] <= auStack_28[0]) {
    uVar3 = 3;
  }
  (**(code **)(_g_phyFuns + 0x1bc))(0x66,0,4,3,2,uVar3,*(code **)(_g_phyFuns + 0x1bc));
  phy_bbpll_i2c = (**(code **)(_g_phyFuns + 0x1ac))(0x66,0,4,*(code **)(_g_phyFuns + 0x1ac));
  if (param_1 != 0) {
    phy_printf("%d,%d,%d\n",uVar3,uVar4,uVar1);
  }
  _DAT_6001c02c = _DAT_6001c02c & 0xff7fffff;
  chip_v7_set_chan((int)DAT_0001120e,(int)DAT_00011210);
  return;
}

