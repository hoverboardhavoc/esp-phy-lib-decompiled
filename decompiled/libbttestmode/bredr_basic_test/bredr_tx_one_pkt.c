/*
 * Last changed at upstream commit 20f1db053a0e6cb9f1c09d255c43bf42483041d0
 * https://github.com/espressif/esp-phy-lib/commit/20f1db053a0e6cb9f1c09d255c43bf42483041d0
 * Upstream date: 2026-09-24 11:57:44 +0800
 * Upstream subject: fix S31 bod rst
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
  *(int *)(tlTable + 0xc) = iVar1 + 0x28;
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

