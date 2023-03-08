/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_testmode_v9.o -> rw_frmv9_cntl_fsm_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_frmv9_cntl_fsm_print(void)

{
  uint uVar1;
  char *pcVar2;
  
  _DAT_60031450 = _DAT_60031450 & 0xffffffc0 | 0x81;
  uVar1 = _DAT_60031454 >> 4 & 0xf;
  if (frmcntl_fsm_print_start_v9 == 0) {
    frmcntl_fsm_print_start_v9 = 1;
  }
  else if (frmcntl_fsm_data_last_v9 == uVar1) {
    frmcntl_fsm_data_last_v9 = uVar1;
    return;
  }
  switch(uVar1) {
  case 0:
    pcVar2 = "FC_IDLE\n";
    break;
  case 1:
    pcVar2 = "FC_READ_CS\n";
    break;
  case 2:
    pcVar2 = "FC_MASTER\n";
    break;
  case 3:
    pcVar2 = "FC_SLAVE\n";
    break;
  case 4:
    pcVar2 = "FC_PAGE\n";
    break;
  case 5:
    pcVar2 = "FC_PS\n";
    break;
  case 6:
    pcVar2 = "FC_INQ\n";
    break;
  case 7:
    pcVar2 = "FC_INQR\n";
    break;
  case 8:
    pcVar2 = "FC_BC\n";
    break;
  case 9:
    pcVar2 = "FC_BCSC\n";
    break;
  case 10:
    pcVar2 = "FC_RFBUSY\n";
    break;
  case 0xb:
    pcVar2 = "FC_ERROR\n";
    break;
  default:
    goto _L126;
  }
  phy_printf(pcVar2);
_L126:
  frmcntl_fsm_data_last_v9 = uVar1;
  return;
}

