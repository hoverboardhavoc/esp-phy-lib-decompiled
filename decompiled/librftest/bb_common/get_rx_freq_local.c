/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> bb_common.o -> get_rx_freq_local
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void get_rx_freq_local(void)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)get_rxctrl_addr();
  if ((*puVar1 & 0xc000) == 0x4000) {
    uVar2 = (puVar1[1] & 0xf) + 0x10;
  }
  else {
    uVar2 = *puVar1 >> 8 & 0x1f;
  }
  phy_get_rx_freq(uVar2,puVar1[4]);
  return;
}

