/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bredr_basic_test.o -> bredr_tx_one_pkt
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 bredr_tx_one_pkt(int param_1)

{
  int iVar1;
  
  iVar1 = capture_btlc_timer();
  *(int *)(tlTable + 0xc) = iVar1 + 40000;
  *devTable = *devTable | 0x800000;
  *(byte *)(txLink0 + 0xf) = *(byte *)(txLink0 + 0xf) & 0x3f;
  _DAT_20101000 = _DAT_20101000 | 1;
  if (param_1 == 0) {
    wait_txend_int();
    wait_link_end_int();
    if ((_DAT_2010a03c & 0x10) == 0) {
      _DAT_2010a044 = _DAT_2010a044 | 0x10;
      return 0;
    }
    _DAT_2010a044 = _DAT_2010a044 | 0x10;
  }
  return 1;
}

