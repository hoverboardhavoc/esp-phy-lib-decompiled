/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_testmode_v9.o -> rw_bt_v9_em_clean
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void rw_bt_v9_em_clean(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 != param_2; iVar1 = iVar1 + 1) {
    *(undefined4 *)(iVar1 * 4 + param_1) = 0;
  }
  return;
}

