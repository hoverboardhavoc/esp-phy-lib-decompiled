/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_testmode_v9.o -> rw_bt_v9_error_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_bt_v9_error_print(void)

{
  uint uVar1;
  
  uVar1 = _DAT_60031460 & 0x3fffff;
  if (bt_error_print_start_v9 == 0) {
    bt_error_print_start_v9 = 1;
  }
  else if (bt_error_data_last_v9 == uVar1) goto _L117;
  phy_printf("error %x\n",uVar1);
_L117:
  bt_error_data_last_v9 = uVar1;
  if (uVar1 != 0) {
    _DAT_60031400 = _DAT_60031400 | 0x80000000;
    bt_error_reset = 1;
  }
  return;
}

