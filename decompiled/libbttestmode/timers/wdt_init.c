/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libbttestmode -> timers.o -> wdt_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wdt_init(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  _DAT_6001f04c = param_1;
  _DAT_6001f050 = param_2;
  _DAT_6001f054 = param_3;
  _DAT_6001f048 = _DAT_6001f048 | 0x80000000;
  return;
}

