/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: libphy -> phy_track.o -> wait_hw_freq_busy
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wait_hw_freq_busy(void)

{
  bool bVar1;
  
  bVar1 = false;
  while (_DAT_6000e168 < 0) {
    bVar1 = true;
  }
  if (bVar1) {
    ets_delay_us(0x32);
    return;
  }
  return;
}

