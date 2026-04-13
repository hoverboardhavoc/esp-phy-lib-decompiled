/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_le_testmode.o -> rw_evtschdl_fsm_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_evtschdl_fsm_print(void)

{
  uint uVar1;
  char *pcVar2;
  
  _DAT_60031250 = _DAT_60031250 & 0xffffffc0 | 0x80;
  uVar1 = _DAT_60031254 & 7;
  if (evtschdl_fsm_print_start == 0) {
    evtschdl_fsm_print_start = 1;
  }
  else if (evtschdl_fsm_data_last == uVar1) {
    evtschdl_fsm_data_last = uVar1;
    return;
  }
  switch(uVar1) {
  case 1:
    pcVar2 = "ES_FETCH_MOD_ENTRY\n";
    break;
  case 2:
    pcVar2 = "ES_FETCH_PTR_ENTRY\n";
    break;
  case 3:
    pcVar2 = "ES_CHECK_ENTRY\n";
    break;
  case 4:
    pcVar2 = "ES_UPDATE_ET\n";
    break;
  case 5:
    pcVar2 = "ES_FETCH_CS_FORMAT\n";
    break;
  case 6:
    pcVar2 = "ES_FETCH_CS_FCNTOFFSET\n";
    break;
  case 7:
    pcVar2 = "ES_DEAD\n";
    break;
  default:
    pcVar2 = "ES_IDLE\n";
  }
  phy_printf(pcVar2);
  evtschdl_fsm_data_last = uVar1;
  return;
}

