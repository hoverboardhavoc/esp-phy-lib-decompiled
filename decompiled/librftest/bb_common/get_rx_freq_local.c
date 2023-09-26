/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
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
  uVar2 = *puVar1;
  if ((uVar2 & 0xc000) == 0) {
    uVar2 = uVar2 >> 8 & 0x1f;
  }
  else {
    uVar2 = (uVar2 >> 10 & 0x30) + (puVar1[1] & 0x7f);
  }
  phy_get_rx_freq(uVar2,puVar1[4]);
  return;
}

