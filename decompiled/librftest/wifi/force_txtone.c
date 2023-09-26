/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: librftest -> wifi.o -> force_txtone
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void force_txtone(undefined4 param_1,undefined2 param_2)

{
  force_txon(1);
  ets_delay_us(3);
  start_tx_tone(1,0,param_1,0,0,0);
  ets_delay_us(param_2);
  (**(code **)(_g_phyFuns + 0x9c))(1,*(code **)(_g_phyFuns + 0x9c));
  force_txon(0);
  return;
}

