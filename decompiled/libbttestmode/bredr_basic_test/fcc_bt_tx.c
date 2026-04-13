/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bredr_basic_test.o -> fcc_bt_tx
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void fcc_bt_tx(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  
  uVar1 = rate_dh_vs_pktype(param_3,param_4);
  if (param_5 != 0) {
    rate_dh_vs_pklength(param_3,param_4);
  }
  bredr_tx(0,param_2,param_3 != 1,0x9e8b33,0,param_1,1,uVar1);
  return;
}

