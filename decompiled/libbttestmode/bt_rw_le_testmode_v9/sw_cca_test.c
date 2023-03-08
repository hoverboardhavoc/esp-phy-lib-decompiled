/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> sw_cca_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sw_cca_test(uint param_1,uint param_2)

{
  uint uVar1;
  
  do {
  } while (-1 < _DAT_60031014 << 0xc);
  _DAT_60031018 = _DAT_60031018 | 0x80000;
  uVar1 = _DAT_60031360 >> 0xc;
  _DAT_60031360 = (param_1 & 0x7f) << 4 | _DAT_60031360 & 0xfffff000 | param_2 & 0xf;
  phy_printf(&_LC22,(int)(char)uVar1);
  return;
}

