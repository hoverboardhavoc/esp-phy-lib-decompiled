/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> phy_test.o -> txdc_stable_test
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void txdc_stable_test(int param_1)

{
  undefined4 local_24;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [20];
  
  local_24 = 0;
  txdc_stable_sub(0,auStack_20);
  txdc_delta_max(auStack_20,&local_24);
  txdc_stable_sub(1,auStack_1c);
  txdc_delta_max(auStack_1c,&local_24);
  if (param_1 != 0) {
    phy_printf("txdc_stable,%d,%d\n",(int)(short)local_24,(int)local_24._2_2_);
  }
  return;
}

