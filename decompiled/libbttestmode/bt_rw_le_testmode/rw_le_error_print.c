/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_testmode.o -> rw_le_error_print
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_le_error_print(void)

{
  uint uVar1;
  
  uVar1 = _DAT_60031260 & 0x3fffff;
  if (le_error_print_start == 0) {
    le_error_print_start = 1;
  }
  else if (le_error_data_last == uVar1) {
    le_error_data_last = uVar1;
    return;
  }
  phy_printf("error%x\n",uVar1);
  le_error_data_last = uVar1;
  return;
}

