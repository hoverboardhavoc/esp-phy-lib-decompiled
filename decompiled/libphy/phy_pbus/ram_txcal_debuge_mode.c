/*
 * Last changed at upstream commit 83dad4e0020def3591c18b880bf9676c4b291ee1
 * https://github.com/espressif/esp-phy-lib/commit/83dad4e0020def3591c18b880bf9676c4b291ee1
 * Upstream date: 2023-01-03 13:49:44 +0800
 * Upstream subject: esp32c6: phy update
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
  
  uVar1 = DAT_0001101a;
  pbus_debugmode();
  (**(code **)(_g_phyFuns + 0x8c))(uVar1,0x80,*(code **)(_g_phyFuns + 0x8c));
  iVar2 = txbbgain_to_index(0x80);
  pbus_set_dco(iVar2 * 8 + 0x110b0);
  set_txclk_en(1);
                    /* WARNING: Could not recover jumptable at 0x000101d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_g_phyFuns + 0x1c))();
  return;
}

