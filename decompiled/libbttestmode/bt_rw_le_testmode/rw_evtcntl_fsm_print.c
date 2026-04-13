/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_le_testmode.o -> rw_evtcntl_fsm_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_evtcntl_fsm_print(void)

{
  uint uVar1;
  char *pcVar2;
  
  _DAT_60031250 = _DAT_60031250 & 0xffffffc0 | 0x81;
  uVar1 = _DAT_60031254 >> 5 & 7;
  if (evtcntl_fsm_print_start == 0) {
    evtcntl_fsm_print_start = 1;
  }
  else if (evtcntl_fsm_data_last == uVar1) {
    evtcntl_fsm_data_last = uVar1;
    return;
  }
  switch(uVar1) {
  case 1:
    pcVar2 = "EC_FETCH_CS\n";
    break;
  case 2:
    pcVar2 = "EC_MASTER\n";
    break;
  case 3:
    pcVar2 = "EC_SLAVE\n";
    break;
  case 4:
    pcVar2 = "EC_ISO0MASTER\n";
    break;
  case 5:
    pcVar2 = "EC_ISO0SLAVE\n";
    break;
  case 6:
    pcVar2 = "EC_ADVERT\n";
    break;
  case 7:
    pcVar2 = "EC_SCANINIT\n";
    break;
  default:
    pcVar2 = "EC_IDLE\n";
  }
  phy_printf(pcVar2);
  evtcntl_fsm_data_last = uVar1;
  return;
}

