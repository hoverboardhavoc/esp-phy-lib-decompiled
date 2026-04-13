/*
 * Last changed at upstream commit cef4eca1d256d7325017049c6152cb78182fcd67
 * https://github.com/espressif/esp-phy-lib/commit/cef4eca1d256d7325017049c6152cb78182fcd67
 * Upstream date: 2026-04-13 10:23:07 +0800
 * Upstream subject: support s31 libphy
 * Source: libbttestmode -> bt_rw_le_testmode.o -> rw_evtcntladv_fsm_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_evtcntladv_fsm_print(void)

{
  uint uVar1;
  char *pcVar2;
  
  _DAT_60031250 = _DAT_60031250 & 0xffffffc0 | 0x81;
  uVar1 = _DAT_60031254 & 0x1f;
  if (evtcntladv_fsm_print_start == 0) {
    evtcntladv_fsm_print_start = 1;
  }
  else if (evtcntladv_fsm_data_last == uVar1) {
    evtcntladv_fsm_data_last = uVar1;
    return;
  }
  switch(uVar1) {
  case 0:
    pcVar2 = "ECA_IDLE\n";
    break;
  case 1:
    pcVar2 = "ECA_TXFETCH\n";
    break;
  case 2:
    pcVar2 = "ECA_W4S\n";
    break;
  case 3:
    pcVar2 = "ECA_TXADV\n";
    break;
  case 4:
    pcVar2 = "ECA_RXFETCH\n";
    break;
  case 5:
    pcVar2 = "ECA_IFS1\n";
    break;
  case 6:
    pcVar2 = "ECA_RXREQ\n";
    break;
  case 7:
    pcVar2 = "ECA_RXCHECK\n";
    break;
  case 8:
    pcVar2 = "ECA_RXUP\n";
    break;
  case 9:
    pcVar2 = "ECA_TXUP1\n";
    break;
  case 10:
    pcVar2 = "ECA_IFS2\n";
    break;
  case 0xb:
    pcVar2 = "ECA_TXRESP\n";
    break;
  case 0xc:
    pcVar2 = "ECA_TXUP2\n";
    break;
  case 0xd:
    pcVar2 = "ECA_WAITSTATE\n";
    break;
  case 0xe:
    pcVar2 = "ECA_ERROR\n";
    break;
  default:
    goto _L124;
  }
  phy_printf(pcVar2);
_L124:
  evtcntladv_fsm_data_last = uVar1;
  return;
}

