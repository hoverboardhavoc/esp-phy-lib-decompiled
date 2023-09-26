/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
 * Source: libbttestmode -> zb_macinit_txrx.o -> zb_tx_a_frame
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 zb_tx_a_frame(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  _DAT_600a3000 = 0x41;
  do {
    uVar2 = _DAT_600a3064 & 1;
    if (param_3 != 0) {
      uVar2 = _DAT_600a3064 & 8;
    }
    if (uVar2 != 0) {
      *param_1 = *param_1 + 1;
      _DAT_600a3064 = _DAT_600a3064 | 1;
      return 0;
    }
    if ((_DAT_600a3064 & 0x20) != 0) {
      *param_2 = *param_2 + 1;
      _DAT_600a3084 = _DAT_600a3084 | 0x20;
      return 0;
    }
    iVar1 = GetStopCmd();
  } while (iVar1 != 0);
  return 1;
}

