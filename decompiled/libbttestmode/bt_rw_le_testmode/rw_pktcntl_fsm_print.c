/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_testmode.o -> rw_pktcntl_fsm_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_pktcntl_fsm_print(void)

{
  uint uVar1;
  char *pcVar2;
  
  _DAT_60031250 = _DAT_60031250 & 0xffffffc0 | 0x82;
  uVar1 = _DAT_60031254 & 0xf;
  if (pktcntl_fsm_print_start == 0) {
    pktcntl_fsm_print_start = 1;
  }
  else if (pktcntl_fsm_data_last == uVar1) {
    pktcntl_fsm_data_last = uVar1;
    return;
  }
  switch(uVar1) {
  case 1:
    pcVar2 = "PC_BEFORETX\n";
    break;
  case 2:
    pcVar2 = "PC_TXPREAMBLE\n";
    break;
  case 3:
    pcVar2 = "PC_TXSYNC\n";
    break;
  case 4:
    pcVar2 = "PC_TXHEADER\n";
    break;
  case 5:
    pcVar2 = "PC_TXPAYLOAD\n";
    break;
  case 6:
    pcVar2 = "PC_TXCRC\n";
    break;
  case 7:
    pcVar2 = "PC_TXSTATUS\n";
    break;
  case 8:
    pcVar2 = "PC_BEFORESYNC\n";
    break;
  case 9:
    pcVar2 = "PC_RXSYNC\n";
    break;
  case 10:
    pcVar2 = "PC_RXHEADER\n";
    break;
  case 0xb:
    pcVar2 = "PC_RXPAYLOAD\n";
    break;
  case 0xc:
    pcVar2 = "PC_RXCRC\n";
    break;
  case 0xd:
    pcVar2 = "PC_RXRSSI\n";
    break;
  case 0xe:
    pcVar2 = "PC_RXSTATUS\n";
    break;
  case 0xf:
    pcVar2 = "PC_DEAD\n";
    break;
  default:
    pcVar2 = "PC_IDLE\n";
  }
  phy_printf(pcVar2);
  pktcntl_fsm_data_last = uVar1;
  return;
}

