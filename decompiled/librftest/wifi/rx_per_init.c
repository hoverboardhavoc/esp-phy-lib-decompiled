/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> rx_per_init
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rx_per_init(void)

{
  set_mac_filter(0x3040506,0x102);
  _DAT_600330d8 = _DAT_600330d8 & 0xfffffe00 | 0xd;
  _DAT_600330dc = _DAT_600330dc & 0xfffffe00 | 0xf;
  _DAT_600330e0 = _DAT_600330e0 & 0xfffffe00 | 0xf;
  _DAT_600330e4 = _DAT_600330e4 & 0xfffffe00 | 0xf;
  return;
}

