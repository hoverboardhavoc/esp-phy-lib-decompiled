/*
 * Last changed at upstream commit 7586abbf591ab63d609d7afeb377559deabec808
 * https://github.com/espressif/esp-phy-lib/commit/7586abbf591ab63d609d7afeb377559deabec808
 * Upstream date: 2021-10-26 15:21:29 +0800
 * Upstream subject: update phy lib to fix usb & rssi issue(cc45c1a)
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_set_chan_reg
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_set_chan_reg(int param_1)

{
  char cVar1;
  
  cVar1 = DAT_000121fe;
  (**(code **)(_g_phyFuns + 0x78))((int)DAT_00012200,*(code **)(_g_phyFuns + 0x78));
  (**(code **)(_g_phyFuns + 0x60))
            ((int)DAT_000121fe,(int)DAT_00012200,0,DAT_000120ff,_DAT_00012128,_DAT_00012124,
             DAT_00012126,*(code **)(_g_phyFuns + 0x60));
  (**(code **)(_g_phyFuns + 0xd0))
            (cVar1,&phy_param,&phy_param,DAT_000120c8,*(code **)(_g_phyFuns + 0xd0));
  (**(code **)(_g_phyFuns + 0x8c))((int)_DAT_00012170,*(code **)(_g_phyFuns + 0x8c));
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000110e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_g_phyFuns + 0x114))(&phy_param,DAT_000121fe);
    return;
  }
  return;
}

