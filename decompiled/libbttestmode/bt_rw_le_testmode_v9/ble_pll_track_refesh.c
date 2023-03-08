/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> bt_rw_le_testmode_v9.o -> ble_pll_track_refesh
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ble_pll_track_refesh(void)

{
  bool bVar1;
  
  bVar1 = -1 < _DAT_60011088 << 0x10;
  if (bVar1) {
    _DAT_60011090 = _DAT_60011090 | 0x8000;
  }
  if (_DAT_60011088 << 0xf < 0) {
    if (!bVar1) {
      return 0;
    }
  }
  else {
    _DAT_60011090 = _DAT_60011090 | 0x10000;
  }
  bt_track_pll_cap();
  return 0;
}

