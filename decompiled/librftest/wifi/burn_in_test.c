/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> burn_in_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void burn_in_test(void)

{
  int iVar1;
  
  burnin_rtc_init();
  do {
    phy_printf("\nnew loop begin:\n\n");
    burnin_test_func();
    iVar1 = esp_phy_getstopcmd();
  } while (iVar1 != 0);
  return;
}

