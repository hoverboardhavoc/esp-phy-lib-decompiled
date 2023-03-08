/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> rf_test.o -> esp_en_reboot
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void esp_en_reboot(void)

{
  _DAT_60008094 = 0;
  _DAT_60008098 = 0;
  _DAT_6000809c = 0;
  _DAT_600080a0 = 0;
  _DAT_60008090 = _DAT_60008090 & 0x8fffffff | 0xc0000000;
  return;
}

