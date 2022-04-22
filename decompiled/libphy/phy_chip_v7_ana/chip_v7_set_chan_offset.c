/*
 * Last changed at upstream commit c0491ee7cc60288244268b04b523637a6e297739
 * https://github.com/espressif/esp-phy-lib/commit/c0491ee7cc60288244268b04b523637a6e297739
 * Upstream date: 2022-04-22 15:59:29 +0800
 * Upstream subject: support libphy&libbtbb for esp32h2beta2
 * Source: libphy -> phy_chip_v7_ana.o -> chip_v7_set_chan_offset
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void chip_v7_set_chan_offset(short param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(_g_phyFuns + 0x184))(*(code **)(_g_phyFuns + 0x184));
  _DAT_000120e4 = param_1 + 2U & 0xfffc;
  if (DAT_00012122 != '\0') {
    _DAT_000120e4 = _DAT_000120e4 + (short)((int)DAT_00012123 << 3);
  }
  phy_freq_correct_part_0((int)(short)_DAT_000120e4);
  (**(code **)(_g_phyFuns + 8))(*(code **)(_g_phyFuns + 8));
  set_channel_rfpll_freq((int)DAT_000121f6,DAT_000120f7,(int)(short)_DAT_000120e4);
  (**(code **)(_g_phyFuns + 0xc))(*(code **)(_g_phyFuns + 0xc));
                    /* WARNING: Could not recover jumptable at 0x00011c46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x188))(uVar1);
  return;
}

