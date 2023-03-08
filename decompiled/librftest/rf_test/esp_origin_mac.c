/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> rf_test.o -> esp_origin_mac
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void esp_origin_mac(void)

{
  phy_printf("mac_addr:%02x:%02x:%02x:%02x:%02x:%02x\n",_DAT_60008848 >> 8 & 0xff,
             _DAT_60008848 & 0xff,_DAT_60008844 >> 0x18,_DAT_60008844 >> 0x10 & 0xff,
             _DAT_60008844 >> 8 & 0xff,_DAT_60008844 & 0xff);
  return;
}

