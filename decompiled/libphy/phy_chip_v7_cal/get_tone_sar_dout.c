/*
 * Last changed at upstream commit f2c056340505399429dbc8792e7109b7c69f5d77
 * https://github.com/espressif/esp-phy-lib/commit/f2c056340505399429dbc8792e7109b7c69f5d77
 * Upstream date: 2021-06-03 19:05:33 +0800
 * Upstream subject: esp_phy: add phy libraries
 * Source: libphy -> phy_chip_v7_cal.o -> get_tone_sar_dout
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint get_tone_sar_dout(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_30 [2];
  ushort uStack_2e;
  
  uVar2 = 0;
  for (uVar1 = 0; uVar1 != param_1; uVar1 = uVar1 + 1 & 0xff) {
    pwdet_tone_start();
    (**(code **)(_g_phyFuns + 0x148))(auStack_30,*(code **)(_g_phyFuns + 0x148));
    uVar2 = uVar2 + uStack_2e;
  }
  return uVar2 / uVar1 & 0xffff;
}

