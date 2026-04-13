/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bredr_basic_test.o -> rate_dh_vs_pklength
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

undefined1 rate_dh_vs_pklength(int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  if (param_1 == 1) {
    if (param_2 == 1) {
      uVar2 = 0x1b;
      goto _L70;
    }
    if (param_2 == 3) {
      uVar2 = 0xb7;
      goto _L70;
    }
    if (param_2 == 5) {
      uVar2 = 0x153;
      goto _L70;
    }
  }
  else if (param_1 == 2) {
    if (param_2 == 1) {
      uVar2 = 0x36;
      goto _L70;
    }
    if (param_2 == 3) {
      uVar2 = 0x16f;
      goto _L70;
    }
    if (param_2 == 5) {
      uVar2 = 0x2a7;
      goto _L70;
    }
  }
  else if (param_1 == 3) {
    if (param_2 == 1) {
      uVar2 = 0x53;
      goto _L70;
    }
    if (param_2 == 3) {
      uVar2 = 0x228;
      goto _L70;
    }
  }
  uVar2 = 0x3fd;
_L70:
  uVar1 = phy_get_data_sat(param_3,uVar2,1);
  return uVar1;
}

