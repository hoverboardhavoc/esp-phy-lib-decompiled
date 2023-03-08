/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
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
  (**(code **)(_g_phyFuns + 0x104))(1,0x200,*(code **)(_g_phyFuns + 0x104));
  ram_get_corr_power(&uStack_1c,9);
  uVar1 = (**(code **)(_g_phyFuns + 0x118))(uStack_1c,0,*(code **)(_g_phyFuns + 0x118));
  uVar2 = (**(code **)(_g_phyFuns + 0x118))(uStack_18,0,*(code **)(_g_phyFuns + 0x118));
  (**(code **)(_g_phyFuns + 0x108))(*(code **)(_g_phyFuns + 0x108));
  stop_tx_tone(1);
  phy_printf("%d,%d\n",uVar1,uVar2);
  return;
}

