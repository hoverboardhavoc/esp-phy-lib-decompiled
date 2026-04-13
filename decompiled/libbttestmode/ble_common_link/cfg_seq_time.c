/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> ble_common_link.o -> cfg_seq_time
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * cfg_seq_time(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_a1;
  
  iVar1 = capture_btlc_timer();
  if (param_2 == 0) {
    param_2 = iVar1 + 1000;
  }
  iVar1 = compute_seq_time(_DAT_201010b0 & 0xfffffff,_DAT_201010b4 & 0x3ff,param_2,param_3,param_4);
  param_1[1] = iVar1;
  *param_1 = param_2;
  param_1[2] = extraout_a1;
  return param_1;
}

