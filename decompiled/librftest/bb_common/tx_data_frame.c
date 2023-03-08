/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> bb_common.o -> tx_data_frame
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 tx_data_frame(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)Plcp0AddrGet(10);
  _DAT_60033c04 = 0x40000002;
  _DAT_60033c34 = _DAT_60033c34 | 0x80;
  _DAT_60033c40 = _DAT_60033c40 | 0x80;
  *puVar1 = *puVar1 | 0xc0000000;
  do {
    if ((_DAT_60033c3c & 0x80) != 0) {
      _DAT_60033c40 = _DAT_60033c40 | 0x80;
      return _DAT_60033c68;
    }
  } while (param_1 != 0);
  return 0xffffffff;
}

