/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_testmode.o -> rw_le_et_on_mask
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rw_le_et_on_mask(uint param_1)

{
  undefined4 *puVar1;
  
  _DAT_6003122c = _DAT_6003122c & 0xffff;
  puVar1 = (undefined4 *)&DAT_3ffb0000;
  do {
    if ((param_1 & 1) == 0) {
      *puVar1 = 0;
    }
    else {
      *puVar1 = 0x2000302;
    }
    puVar1 = puVar1 + 1;
    param_1 = param_1 >> 1;
  } while (puVar1 != (undefined4 *)0x3ffb0040);
  return;
}

