/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_testmode_v9.o -> rw_frmv9_mgmt_fsm_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_frmv9_mgmt_fsm_print(void)

{
  uint uVar1;
  
  _DAT_60031450 = _DAT_60031450 & 0xffffffc0 | 0x80;
  uVar1 = _DAT_60031454 >> 4 & 7;
  if (frmmgmt_fsm_print_start_v9 == 0) {
    frmmgmt_fsm_print_start_v9 = 1;
  }
  else if (frmmgmt_fsm_data_last_v9 == uVar1) {
    frmmgmt_fsm_data_last_v9 = uVar1;
    return;
  }
  phy_printf("frmmgmt%x\n",uVar1);
  frmmgmt_fsm_data_last_v9 = uVar1;
  return;
}

