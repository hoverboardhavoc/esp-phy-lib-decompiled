/*
 * Last changed at upstream commit c5d2548ae63b895c5f7c8727f25c3e129c59d71d
 * https://github.com/espressif/esp-phy-lib/commit/c5d2548ae63b895c5f7c8727f25c3e129c59d71d
 * Upstream date: 2024-06-05 14:35:04 +0800
 * Upstream subject: update C6 H2 libphy for coex test ble 154 chan bug
 * Source: libbttestmode -> zb_macinit_txrx.o -> zb_tx_a_frame
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 zb_tx_a_frame(int *param_1,int *param_2,int param_3,undefined1 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  _DAT_600a3000 = 0x41;
  do {
    uVar3 = _DAT_600a3064 & 1;
    if (param_3 != 0) {
      uVar3 = _DAT_600a3064 & 8;
    }
    if (uVar3 != 0) {
      *param_1 = *param_1 + 1;
      _DAT_600a3064 = _DAT_600a3064 | 1;
_L83:
      uVar1 = 0;
      goto _L73;
    }
    if ((_DAT_600a3064 & 0x20) != 0) {
      *param_2 = *param_2 + 1;
      _DAT_600a3084 = _DAT_600a3084 | 0x20;
      goto _L83;
    }
    iVar2 = GetStopCmd();
  } while (iVar2 != 0);
  uVar1 = 1;
_L73:
  bt_track_pll_cap();
  bt_track_pbus_update(param_4);
  return uVar1;
}

