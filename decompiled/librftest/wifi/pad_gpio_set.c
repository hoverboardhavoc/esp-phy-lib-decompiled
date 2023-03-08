/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
 * Source: librftest -> wifi.o -> pad_gpio_set
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void pad_gpio_set(uint *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    *param_1 = *param_1 & 0xf7ffffff;
    uVar1 = *param_1 | 0x10000000;
  }
  else {
    *param_1 = *param_1 & 0xffffdfff;
    *param_1 = *param_1 | 0x80000;
    *param_1 = *param_1 | 0x8000000;
    uVar1 = *param_1 & 0xefffffff;
  }
  *param_1 = uVar1;
  return;
}

