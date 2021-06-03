/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_newrom.o -> rom_tsens_temp_read
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 rom_tsens_temp_read(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (_DAT_60040058 << 9 < 0) {
    uVar1 = (**(code **)(_g_phyFuns + 0x208))(*(code **)(_g_phyFuns + 0x208));
  }
  else {
    uVar1 = (uint)*(byte *)(phy_param_rom + 0x92);
  }
  uVar2 = (**(code **)(_g_phyFuns + 0x210))
                    (*(undefined1 *)(phy_param_rom + 0xaa),*(code **)(_g_phyFuns + 0x210));
  uVar2 = (**(code **)(_g_phyFuns + 0x218))(uVar1,uVar2,*(code **)(_g_phyFuns + 0x218));
  (**(code **)(_g_phyFuns + 0x214))(phy_param_rom + 0xaa,*(code **)(_g_phyFuns + 0x214));
  *(short *)(phy_param_rom + 0x92) = (short)uVar2;
  return uVar2;
}

