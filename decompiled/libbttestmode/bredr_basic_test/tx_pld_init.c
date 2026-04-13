/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bredr_basic_test.o -> tx_pld_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void tx_pld_init(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    for (iVar1 = 0; iVar1 != param_2; iVar1 = iVar1 + 1) {
      (&tx_buf_0_pld)[iVar1] = 0x55;
      (&tx_buf_1_pld)[iVar1] = 0x55;
      _DAT_20101380 = _DAT_20101380 & 0xfffffc00 | 0x55;
    }
    return;
  }
  if (param_1 == 1) {
    for (iVar1 = 0; iVar1 != param_2; iVar1 = iVar1 + 1) {
      (&tx_buf_0_pld)[iVar1] = 0xf;
      (&tx_buf_1_pld)[iVar1] = 0xf;
      _DAT_20101380 = _DAT_20101380 & 0xfffffc00 | 0xf;
    }
    return;
  }
  prbs9_gen(&tx_buf_0_pld);
  prbs9_gen(&tx_buf_1_pld);
  _DAT_20101380 = _DAT_20101380 & 0xfffffcff | 0x100;
  return;
}

