/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7.o -> set_rx_gain_param
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_rx_gain_param(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  code *pcVar2;
  ushort uVar3;
  undefined4 uVar4;
  
  _DAT_60006110 = _DAT_60006110 | 0xc000;
  (**(code **)(g_phyFuns + 0x1d4))(*(code **)(g_phyFuns + 0x1d4));
  (**(code **)(g_phyFuns + 0x1e4))(0,*(code **)(g_phyFuns + 0x1e4));
  if (param_1 == 0) {
    if ((DAT_0001459c & 0x400) == 0) {
      set_rx_gain_cal_iq(0,0x80,&DAT_000145cc,0);
      DAT_0001459c = DAT_0001459c | 0x400;
    }
  }
  else {
    pcVar2 = *(code **)(g_phyFuns + 0x1cc);
    uVar3 = (**(code **)(g_phyFuns + 0x1d0))(1,1,*(code **)(g_phyFuns + 0x1d0));
    (*pcVar2)(1,1,uVar3 | 2);
  }
  _DAT_6000607c = _DAT_6000607c & 0xf7ffffff;
  (**(code **)(g_phyFuns + 0x1e4))(0,*(code **)(g_phyFuns + 0x1e4));
  bVar1 = param_1 == 0;
  if (bVar1) {
    uVar4 = 3;
  }
  else {
    pcVar2 = *(code **)(g_phyFuns + 0x1cc);
    uVar3 = (**(code **)(g_phyFuns + 0x1d0))(1,1,*(code **)(g_phyFuns + 0x1d0));
    (*pcVar2)(1,1,uVar3 | 2);
    (**(code **)(g_phyFuns + 0x1cc))(4,2,0,*(code **)(g_phyFuns + 0x1cc));
    uVar4 = 2;
  }
  set_rx_gain_cal_dc(!bVar1,!bVar1,uVar4,param_2,&phy_rxrf_dc,&phy_rxbb_dc,&phy_chan_dc,param_3);
  _DAT_60006110 = _DAT_60006110 & 0xffff7fff;
  if (param_1 != 0) {
    (**(code **)(g_phyFuns + 0x1cc))(4,2,0,*(code **)(g_phyFuns + 0x1cc));
  }
  (**(code **)(g_phyFuns + 0x1e4))(0,*(code **)(g_phyFuns + 0x1e4));
                    /* WARNING: Could not recover jumptable at 0x00011486. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(g_phyFuns + 0x1d8))();
  return;
}

