/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_wifi_track_pll_cap
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rom_wifi_track_pll_cap(void)

{
  uint uVar1;
  
  if (*(char *)(phy_param_rom + 0x9c) != '\0') {
    uVar1 = 0x54;
    if (*(char *)(phy_param_rom + 0x1f2) < 0xe) {
      uVar1 = (*(char *)(phy_param_rom + 0x1f2) + -1) * 5 + 0xcU & 0xffff;
    }
                    /* WARNING: Could not recover jumptable at 0x00010b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_g_phyFuns + 0x22c))
              (uVar1 & 0xff,phy_param_rom + 0xa0,1,*(undefined1 *)(phy_param_rom + 0x9b));
    return;
  }
  return;
}

