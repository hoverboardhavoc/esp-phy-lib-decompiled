/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> get_rx_tone_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_rx_tone_pwr(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uVar1 = __fixsfsi();
  start_tx_tone(1,uVar1,0,0,0,0);
  ets_delay_us(5);
  iq_est_enable(1,0x200);
  ram_get_corr_power(&uStack_1c,9);
  uVar1 = linear_to_db(uStack_1c,0);
  uVar2 = linear_to_db(uStack_18,0);
  iq_est_disable();
  stop_tx_tone(1);
  phy_printf("%d,%d\n",uVar1,uVar2);
  return;
}

