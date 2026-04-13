/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bredr_basic_test.o -> rate_dh_vs_pktype
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined4 rate_dh_vs_pktype(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 1) {
    if (param_2 == 1) {
      return 4;
    }
  }
  else {
    if (param_1 == 2) {
      if (param_2 == 1) {
        return 4;
      }
      if (param_2 == 3) {
        return 10;
      }
      if (param_2 != 5) {
        return 0xf;
      }
      return 0xe;
    }
    if (param_1 != 3) {
      return 0xf;
    }
    if (param_2 == 1) {
      return 8;
    }
  }
  uVar1 = 0xf;
  if (param_2 == 3) {
    uVar1 = 0xb;
  }
  return uVar1;
}

