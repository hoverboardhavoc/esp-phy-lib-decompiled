/*
 * Last changed at upstream commit 3daf842446056002dcdb12866001c3d567f1abd9
 * https://github.com/espressif/esp-phy-lib/commit/3daf842446056002dcdb12866001c3d567f1abd9
 * Upstream date: 2022-10-21 09:45:04 +0800
 * Upstream subject: C3 S3 C2 fix temperature_sensor issue that have conflict with with idf
 * Source: libphy -> phy_rfpll.o -> chip_v7_set_chan
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
  DAT_00011203 = param_2 != 0;
  DAT_00011202 = (undefined1)param_1;
  DAT_00011204 = (undefined1)param_2;
  iVar2 = (int)_DAT_000110f0;
  (**(code **)(_g_phyFuns + 8))(*(code **)(_g_phyFuns + 8));
  set_channel_rfpll_freq(param_1,DAT_00011103,iVar2);
  (**(code **)(_g_phyFuns + 0x78))(param_2,*(code **)(_g_phyFuns + 0x78));
  (**(code **)(_g_phyFuns + 0x60))
            (param_1,param_2,0,DAT_00011103,_DAT_0001112c,_DAT_00011128,DAT_0001112a,
             *(code **)(_g_phyFuns + 0x60));
  chip_v7_set_chan_misc(param_1);
  get_txcap_data();
  if (DAT_000110f6 != '\0') {
    chan14_mic_cfg(param_1 == 0xe);
  }
  if (DAT_000110ff != '\0') {
    phy_11p_set(DAT_00011100);
  }
  (**(code **)(_g_phyFuns + 0xc))(*(code **)(_g_phyFuns + 0xc));
                    /* WARNING: Could not recover jumptable at 0x000106b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x188))(uVar1);
  return;
}

