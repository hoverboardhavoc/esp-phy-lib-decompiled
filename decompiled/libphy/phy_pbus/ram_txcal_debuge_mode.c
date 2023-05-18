/*
 * Last changed at upstream commit d39766d34edf7bf22dddc91d5f45f2b91576a407
 * https://github.com/espressif/esp-phy-lib/commit/d39766d34edf7bf22dddc91d5f45f2b91576a407
 * Upstream date: 2023-05-18 20:57:26 +0800
 * Upstream subject: esp32c6: enable wifi_apb_clk before phy_init and restore after phy_init, C6_libphy_20230517_b4b3263
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
  
  uVar1 = DAT_00011022;
  pbus_debugmode();
  (**(code **)(_g_phyFuns + 0x8c))(uVar1,0,*(code **)(_g_phyFuns + 0x8c));
  iVar2 = txbbgain_to_index(0);
  pbus_set_dco(iVar2 * 8 + 0x110b8);
  set_txclk_en(1);
                    /* WARNING: Could not recover jumptable at 0x0001044e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x1c))();
  return;
}

