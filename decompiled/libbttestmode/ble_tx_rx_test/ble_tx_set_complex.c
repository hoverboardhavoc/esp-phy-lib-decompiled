/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> ble_tx_rx_test.o -> ble_tx_set_complex
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ble_tx_set_complex(void)

{
  int iVar1;
  
  do {
    if (_DAT_60046088 << 0x12 < 0) {
      _DAT_60046090 = _DAT_60046090 | 0x2000;
      return 0;
    }
    iVar1 = GetStopCmd();
  } while (iVar1 != 0);
  return 1;
}

