/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
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
  
  _DAT_20103000 = 0x41;
  do {
    uVar2 = _DAT_20103064 & 1;
    if (param_3 != 0) {
      uVar2 = _DAT_20103064 & 8;
    }
    if (uVar2 != 0) {
      *param_1 = *param_1 + 1;
      _DAT_20103064 = _DAT_20103064 | 1;
      return 0;
    }
    if ((_DAT_20103064 & 0x20) != 0) {
      *param_2 = *param_2 + 1;
      _DAT_20103084 = _DAT_20103084 | 0x20;
      return 0;
    }
    iVar1 = GetStopCmd();
  } while (iVar1 != 0);
  return 1;
}

