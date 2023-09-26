/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> phy_test.o -> xtal_freq_rx_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void xtal_freq_rx_cal(int param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (phy_param == '\0') {
    bVar1 = true;
    if (param_2 == 0x28) goto _L238;
    iVar5 = param_2 + -0x50;
  }
  else {
    bVar1 = true;
    if ((param_2 == 0x12) || (param_2 == 0x2c)) goto _L238;
    iVar5 = param_2 + -0x46;
  }
  bVar1 = iVar5 == 0;
_L238:
  if ((freq_rx_cal_en == '\0') || (!bVar1)) {
    return;
  }
  if (param_1 == 0) {
    (**(code **)(_g_phyFuns + 0x58))(0x6a,0,0,7,4,dreg_1p1_data,*(code **)(_g_phyFuns + 0x58));
  }
  else {
    phy_set_freq(param_2 + 0x965U & 0xffff,0);
    dreg_1p1_data = (**(code **)(_g_phyFuns + 0x54))(0x6a,0,0,7,4,*(code **)(_g_phyFuns + 0x54));
    uVar7 = 0xffffffff;
    uVar2 = 0;
    uVar6 = 0xf;
    do {
      (**(code **)(_g_phyFuns + 0x58))(0x6a,0,0,7,4,uVar2 & 0xff,*(code **)(_g_phyFuns + 0x58));
      (**(code **)(_g_phyFuns + 0x78))(*(code **)(_g_phyFuns + 0x78));
      (**(code **)(_g_phyFuns + 0x70))(1,1,0,*(code **)(_g_phyFuns + 0x70));
      ets_delay_us(100);
      (**(code **)(_g_phyFuns + 0x70))(1,1,0x189,*(code **)(_g_phyFuns + 0x70));
      (**(code **)(_g_phyFuns + 0x7c))(*(code **)(_g_phyFuns + 0x7c));
      force_rx_gain(1,0x37,0);
      ets_delay_us(100);
      uVar3 = phy_corr_pwr_sum(0x80);
      if (uVar3 < uVar7) {
        uVar6 = uVar2 & 0xffff;
        uVar7 = uVar3;
      }
      if (param_3 != 0) {
        phy_printf("%d,%d,%d,%d\n",uVar2,uVar3,uVar7,uVar6);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != 0x10);
    (**(code **)(_g_phyFuns + 0x58))(0x6a,0,0,7,4,uVar6 & 0xff,*(code **)(_g_phyFuns + 0x58));
    _DAT_6004a02c = _DAT_6004a02c & 0xff7fffff;
  }
  if (param_3 != 0) {
    uVar4 = (**(code **)(_g_phyFuns + 0x54))(0x6a,0,0,7,4,*(code **)(_g_phyFuns + 0x54));
    phy_printf("dreg_1p1=%d\n",uVar4);
    return;
  }
  return;
}

