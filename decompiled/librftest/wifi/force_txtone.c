/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> wifi.o -> force_txtone
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void force_txtone(undefined4 param_1,undefined2 param_2)

{
  force_txon(1);
  ets_delay_us(3);
  start_tx_tone(1,0,param_1,0,0,0);
  ets_delay_us(param_2);
  stop_tx_tone(1);
  force_txon(0);
  return;
}

