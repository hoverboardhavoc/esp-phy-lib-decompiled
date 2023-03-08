/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> bb_common.o -> set_mac_filter
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_mac_filter(undefined4 param_1,undefined4 param_2)

{
  _DAT_60033040 = param_1;
  _DAT_60033044 = param_2;
  _DAT_600330dc = 0xf;
  _DAT_600330e0 = 0xf;
  _DAT_600330e4 = 0xf;
  _DAT_60033060 = 0xffffffff;
  _DAT_60033064 = 0x1ffff;
  return;
}

