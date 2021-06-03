/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
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
  DAT_000121ff = param_2 != 0;
  DAT_000121fe = (undefined1)param_1;
  DAT_00012200 = (undefined1)param_2;
  iVar2 = (int)_DAT_000120ec;
  (**(code **)(_g_phyFuns + 8))(*(code **)(_g_phyFuns + 8));
  set_channel_rfpll_freq(param_1,DAT_000120ff,iVar2);
  (**(code **)(_g_phyFuns + 0x78))(param_2,*(code **)(_g_phyFuns + 0x78));
  (**(code **)(_g_phyFuns + 0x60))
            (param_1,param_2,0,DAT_000120ff,_DAT_00012128,_DAT_00012124,DAT_00012126,
             *(code **)(_g_phyFuns + 0x60));
  chip_v7_set_chan_misc(param_1);
  get_txcap_data();
  if (DAT_000120f2 != '\0') {
    chan14_mic_cfg(param_1 == 0xe);
  }
  if (DAT_000120fb != '\0') {
    phy_11p_set(DAT_000120fc);
  }
  (**(code **)(_g_phyFuns + 0xc))(*(code **)(_g_phyFuns + 0xc));
                    /* WARNING: Could not recover jumptable at 0x000116ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x188))(uVar1);
  return;
}

