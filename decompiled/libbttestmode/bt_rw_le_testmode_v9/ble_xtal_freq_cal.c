/*
 * Last changed at upstream commit 218d3e79a323a437b5f994c32fe7b2144f54ca8c
 * https://github.com/espressif/esp-phy-lib/commit/218d3e79a323a437b5f994c32fe7b2144f54ca8c
 * Upstream date: 2025-10-28 15:27:17 +0800
 * Upstream subject: update C3 S3 C2 S2 libphy for rxdc opt
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> ble_xtal_freq_cal
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ble_xtal_freq_cal(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  
  iVar2 = ble_chan_trans_to_normal(param_2);
  uVar6 = (uint)(iVar2 << 0x11) >> 0x10;
  uVar4 = uVar6 + 0x962 & 0xffff;
  if (uVar4 == 0x988) {
    bVar1 = true;
    iVar2 = 1;
  }
  else if (uVar4 == 0x9b0) {
    bVar1 = true;
    iVar2 = 2;
  }
  else {
    bVar1 = false;
    iVar2 = 0;
  }
  if (rx_cal_flag == '\0') {
    dreg_1p1_data = (**(code **)(_g_phyFuns + 0x1b8))(0x6a,0,0,7,4,*(code **)(_g_phyFuns + 0x1b8));
    xtal_dphase_data =
         (**(code **)(_g_phyFuns + 0x1b8))(0x61,0,8,3,3,*(code **)(_g_phyFuns + 0x1b8));
    rx_cal_flag = '\x01';
  }
  if ((freq_rx_cal_en != '\0') && (bVar1)) {
    if (param_1 == 0) {
      (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,0,7,4,dreg_1p1_data,*(code **)(_g_phyFuns + 0x1bc));
      (**(code **)(_g_phyFuns + 0x1bc))
                (0x61,0,8,3,3,xtal_dphase_data,*(code **)(_g_phyFuns + 0x1bc));
      ets_delay_us(100);
      rom_phy_bbpll_cal(0);
      return;
    }
    rom_phy_bbpll_cal(1);
    if (((DAT_000142b5 != '\0') || (uVar4 != 0x988)) && ((DAT_000142b6 != '\0' || (uVar4 != 0x9b0)))
       ) {
      (**(code **)(_g_phyFuns + 0x1bc))
                (0x6a,0,0,7,4,(&dreg_1p1_data)[iVar2],*(code **)(_g_phyFuns + 0x1bc));
      (**(code **)(_g_phyFuns + 0x1bc))
                (0x61,0,8,3,3,(&xtal_dphase_data)[iVar2],*(code **)(_g_phyFuns + 0x1bc));
      ets_delay_us(10);
      return;
    }
    phy_set_freq(uVar6 + 0x967 & 0xffff,0);
    force_rx_gain(1,0x41,0);
    cVar5 = '\0';
    uVar6 = 0xffffffff;
    cVar7 = '\0';
    uVar4 = 0xf;
    while( true ) {
      (**(code **)(_g_phyFuns + 0x1bc))(0x61,0,8,3,3,cVar5,*(code **)(_g_phyFuns + 0x1bc));
      uVar8 = 8;
      do {
        (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,0,7,4,uVar8 & 0xff);
        ets_delay_us(0x14);
        _DAT_60006110 = _DAT_60006110 & 0xfffffcff | 0x200;
        ets_delay_us(0x14);
        _DAT_60006110 = _DAT_60006110 & 0xfffffcff;
        ets_delay_us(0x14);
        uVar3 = phy_corr_pwr_sum(0x80);
        if (uVar3 < uVar6) {
          uVar4 = uVar8 & 0xffff;
          uVar6 = uVar3;
          cVar7 = cVar5;
        }
        if (param_3 != 0) {
          phy_printf("%d,%d,%d,%d,%d,%d\n",cVar5,3,uVar8,uVar3,uVar6,uVar4);
        }
        uVar8 = uVar8 + 2;
      } while (uVar8 != 0x10);
      if (cVar5 == '\x01') break;
      cVar5 = '\x01';
    }
    (**(code **)(_g_phyFuns + 0x1bc))(0x6a,0,0,7,4,uVar4 & 0xff,*(code **)(_g_phyFuns + 0x1bc));
    (**(code **)(_g_phyFuns + 0x1bc))(0x61,0,8,3,3,cVar7,*(code **)(_g_phyFuns + 0x1bc));
    force_rx_gain(0,0x41,0);
    (&dreg_1p1_data)[iVar2] = (char)uVar4;
    (&rx_cal_flag)[iVar2] = 1;
    (&xtal_dphase_data)[iVar2] = cVar7;
  }
  return;
}

