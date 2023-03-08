/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> rtc_sar_read
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint rtc_sar_read(void)

{
  uint uVar1;
  
  uVar1 = _DAT_60008830;
  do {
  } while (-1 < (int)(_DAT_60008830 << 0xf));
  _DAT_60008830 = _DAT_60008830 & 0xfffdffff;
  return uVar1 & 0xffff;
}

