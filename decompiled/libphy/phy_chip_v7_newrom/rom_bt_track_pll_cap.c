/*
 * Last changed at upstream commit 7586abbf591ab63d609d7afeb377559deabec808
 * https://github.com/espressif/esp-phy-lib/commit/7586abbf591ab63d609d7afeb377559deabec808
 * Upstream date: 2021-10-26 15:21:29 +0800
 * Upstream subject: update phy lib to fix usb & rssi issue(cc45c1a)
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_bt_track_pll_cap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_bt_track_pll_cap(void)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(_g_phyFuns + 0x184))(*(code **)(_g_phyFuns + 0x184));
  DAT_000120aa = 0;
  rom_tsens_temp_read();
  if (DAT_000120a9 != '\0') {
    rom_bt_track_tx_power(1,DAT_000120a7);
  }
                    /* WARNING: Could not recover jumptable at 0x00011ae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x188))(uVar1);
  return;
}

