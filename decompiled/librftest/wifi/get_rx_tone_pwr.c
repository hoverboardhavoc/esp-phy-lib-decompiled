/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> get_rx_tone_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_rx_tone_pwr(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uVar1 = __fixsfsi();
  start_tx_tone(1,uVar1,0,0,0,0);
  ets_delay_us(5);
  (**(code **)(_g_phyFuns + 0xa0))(1,0x200,*(code **)(_g_phyFuns + 0xa0));
  ram_get_corr_power(&uStack_1c,9);
  uVar1 = linear_to_db(uStack_1c,0);
  uVar2 = linear_to_db(uStack_18,0);
  (**(code **)(_g_phyFuns + 0xa4))(*(code **)(_g_phyFuns + 0xa4));
  (**(code **)(_g_phyFuns + 0x9c))(1,*(code **)(_g_phyFuns + 0x9c));
  phy_printf("%d,%d\n",uVar1,uVar2);
  return;
}

