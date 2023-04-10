/*
 * Last changed at upstream commit 03c270c901c1106931ea6299523928c64d457b91
 * https://github.com/espressif/esp-phy-lib/commit/03c270c901c1106931ea6299523928c64d457b91
 * Upstream date: 2023-04-10 17:47:15 +0800
 * Upstream subject: update c6 libphy for mcs8/9 and eco1 * phy_version: 200, d1caf30, Apr 10 2023, 17:19:2
 * Source: libphy -> phy_pbus.o -> ram_txcal_debuge_mode
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ram_txcal_debuge_mode(void)

{
  undefined1 uVar1;
  int iVar2;
  
  uVar1 = DAT_00011016;
  pbus_debugmode();
  (**(code **)(_g_phyFuns + 0x8c))(uVar1,0,*(code **)(_g_phyFuns + 0x8c));
  iVar2 = txbbgain_to_index(0);
  pbus_set_dco(iVar2 * 8 + 0x110ac);
  set_txclk_en(1);
                    /* WARNING: Could not recover jumptable at 0x000102e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x1c))();
  return;
}

