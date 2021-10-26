/*
 * Last changed at upstream commit 7586abbf591ab63d609d7afeb377559deabec808
 * https://github.com/espressif/esp-phy-lib/commit/7586abbf591ab63d609d7afeb377559deabec808
 * Upstream date: 2021-10-26 15:21:29 +0800
 * Upstream subject: update phy lib to fix usb & rssi issue(cc45c1a)
 * Source: libphy -> phy_chip_v7.o -> phy_corr_pwr_sum
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

uint phy_corr_pwr_sum(undefined4 param_1)

{
  char cVar1;
  uint unaff_s1;
  uint uVar2;
  
  cVar1 = '\0';
  start_tx_tone_step(1,param_1,0,0,0,0);
  do {
    (**(code **)(g_phyFuns + 0x104))(1,0xfff,*(code **)(g_phyFuns + 0x104));
    uVar2 = phy_corr_get_pwr();
    if ((cVar1 == '\0') || (uVar2 < unaff_s1)) {
      unaff_s1 = uVar2;
    }
    cVar1 = cVar1 + '\x01';
    (**(code **)(g_phyFuns + 0x108))(*(code **)(g_phyFuns + 0x108));
  } while (cVar1 != '\b');
  start_tx_tone_step(0,param_1,0,0,0,0);
  return unaff_s1 >> 2;
}

