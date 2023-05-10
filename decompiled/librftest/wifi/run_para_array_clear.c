/*
 * Last changed at upstream commit a83c216dd2de6418cb26ee42d80433b0badd4aea
 * https://github.com/espressif/esp-phy-lib/commit/a83c216dd2de6418cb26ee42d80433b0badd4aea
 * Upstream date: 2023-05-10 18:09:34 +0800
 * Upstream subject: esp32c3: update libphy for ble 1M/2M switch
 * Source: librftest -> wifi.o -> run_para_array_clear
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void run_para_array_clear(int param_1,uint param_2)

{
  undefined4 *puVar1;
  
  param_2 = param_2 & 0xffff;
  puVar1 = (undefined4 *)(param_1 + param_2 * 4);
  for (; param_2 < 0x14; param_2 = param_2 + 1 & 0xffff) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  return;
}

