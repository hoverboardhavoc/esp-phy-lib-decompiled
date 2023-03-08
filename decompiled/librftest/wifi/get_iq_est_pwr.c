/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> get_iq_est_pwr
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int get_iq_est_pwr(void)

{
  (**(code **)(_g_phyFuns + 0x108))(*(code **)(_g_phyFuns + 0x108));
  (**(code **)(_g_phyFuns + 0x104))(1,0x1fff,*(code **)(_g_phyFuns + 0x104));
  return _DAT_60006164 >> 10;
}

