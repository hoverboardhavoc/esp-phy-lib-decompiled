/*
 * Last changed at upstream commit 329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * https://github.com/espressif/esp-phy-lib/commit/329de7fd3c1dfbfe482ebf2aa63235a910d6da20
 * Upstream date: 2022-06-02 17:02:45 +0800
 * Upstream subject: cut init time and fix cal time 2ms!
 * Source: libphy -> phy_chip_v7_ana.o -> chip_v7_set_chan
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void chip_v7_set_chan(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (**(code **)(_g_phyFuns + 0x184))(*(code **)(_g_phyFuns + 0x184));
  DAT_000121f7 = param_2 != 0;
  DAT_000121f6 = (undefined1)param_1;
  DAT_000121f8 = (undefined1)param_2;
  iVar2 = (int)_DAT_000120e4;
  (**(code **)(_g_phyFuns + 8))(*(code **)(_g_phyFuns + 8));
  set_channel_rfpll_freq(param_1,DAT_000120f7,iVar2);
  (**(code **)(_g_phyFuns + 0x78))(param_2,*(code **)(_g_phyFuns + 0x78));
  (**(code **)(_g_phyFuns + 0x60))
            (param_1,param_2,0,DAT_000120f7,_DAT_00012120,_DAT_0001211c,DAT_0001211e,
             *(code **)(_g_phyFuns + 0x60));
  chip_v7_set_chan_misc(param_1);
  get_txcap_data();
  if (DAT_000120ea != '\0') {
    chan14_mic_cfg(param_1 == 0xe);
  }
  if (DAT_000120f3 != '\0') {
    phy_11p_set(DAT_000120f4);
  }
  (**(code **)(_g_phyFuns + 0xc))(*(code **)(_g_phyFuns + 0xc));
                    /* WARNING: Could not recover jumptable at 0x00011c02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x188))(uVar1);
  return;
}

