/*
 * Last changed at upstream commit e5944fc80c813150131566dd0761709ae9fdea89
 * https://github.com/espressif/esp-phy-lib/commit/e5944fc80c813150131566dd0761709ae9fdea89
 * Upstream date: 2025-02-18 15:55:42 +0800
 * Upstream subject: update libphy for RXDC cal opt, no antenna current opt, add cca api
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> ble_xtal_freq_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_xtal_freq_cal(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  iVar2 = ble_chan_trans_to_normal(param_2);
  uVar3 = (uint)(iVar2 << 0x11) >> 0x10;
  uVar6 = uVar3 + 0x962 & 0xffff;
  if ((freq_rx_cal_en != '\0') && (uVar6 == 0x988 || uVar6 == 0x9b0)) {
    if (param_1 == 0) {
      (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,0,7,4,dreg_1p1_data,*(code **)(_g_phyFuns + 0x1bc));
    }
    else {
      phy_set_freq(uVar3 + 0x967 & 0xffff,0);
      dreg_1p1_data = (**(code **)(_g_phyFuns + 0x1b8))(0x6a,0,0,7,4,*(code **)(_g_phyFuns + 0x1b8))
      ;
      uVar6 = 0xffffffff;
      uVar1 = 3;
      uVar3 = 0xf;
      do {
        (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,0,7,4,uVar1 & 0xff,*(code **)(_g_phyFuns + 0x1bc));
        (**(code **)(_g_phyFuns + 0x1d4))(*(code **)(_g_phyFuns + 0x1d4));
        (**(code **)(_g_phyFuns + 0x1cc))(1,1,0,*(code **)(_g_phyFuns + 0x1cc));
        ets_delay_us(100);
        (**(code **)(_g_phyFuns + 0x1cc))(1,1,0x189,*(code **)(_g_phyFuns + 0x1cc));
        (**(code **)(_g_phyFuns + 0x1d8))(*(code **)(_g_phyFuns + 0x1d8));
        force_rx_gain(1,0x46,0);
        ets_delay_us(100);
        uVar4 = phy_corr_pwr_sum(0x80);
        if (uVar4 < uVar6) {
          uVar3 = uVar1 & 0xffff;
          uVar6 = uVar4;
        }
        if (param_3 != 0) {
          phy_printf("%d,%d,%d,%d\n",uVar1,uVar4,uVar6,uVar3);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 != 0x10);
      (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,0,7,4,uVar3 & 0xff,*(code **)(_g_phyFuns + 0x1bc));
      _DAT_6001c02c = _DAT_6001c02c & 0xff7fffff;
    }
    if (param_3 != 0) {
      uVar5 = (**(code **)(_g_phyFuns + 0x1b8))(0x6a,0,0,7,4,*(code **)(_g_phyFuns + 0x1b8));
      phy_printf("dreg_1p1=%d\n",uVar5);
      return;
    }
  }
  return;
}

