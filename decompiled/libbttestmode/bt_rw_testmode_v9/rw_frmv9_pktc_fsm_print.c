/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_testmode_v9.o -> rw_frmv9_pktc_fsm_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_frmv9_pktc_fsm_print(void)

{
  uint uVar1;
  
  _DAT_60031450 = _DAT_60031450 & 0xffffffc0 | 0x82;
  uVar1 = _DAT_60031454 & 0x1f;
  if (pktc_fsm_print_start_v9 == 0) {
    pktc_fsm_print_start_v9 = 1;
  }
  else if (pktc_fsm_data_last_v9 == uVar1) {
    pktc_fsm_data_last_v9 = uVar1;
    return;
  }
  phy_printf("pktc%x\n",uVar1);
  pktc_fsm_data_last_v9 = uVar1;
  return;
}

