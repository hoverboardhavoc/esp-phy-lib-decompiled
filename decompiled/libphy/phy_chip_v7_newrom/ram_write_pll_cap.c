/*
 * Last changed at upstream commit 7586abbf591ab63d609d7afeb377559deabec808
 * https://github.com/espressif/esp-phy-lib/commit/7586abbf591ab63d609d7afeb377559deabec808
 * Upstream date: 2021-10-26 15:21:29 +0800
 * Upstream subject: update phy lib to fix usb & rssi issue(cc45c1a)
 * Source: libphy -> phy_chip_v7_newrom.o -> ram_write_pll_cap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_write_pll_cap(uint param_1)

{
  (**(code **)(_g_phyFuns + 0x1b4))(0x62,1,1,param_1 & 0xff,*(code **)(_g_phyFuns + 0x1b4));
                    /* WARNING: Could not recover jumptable at 0x00010560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x1bc))(0x62,1,2,4,4,param_1 >> 8);
  return;
}

