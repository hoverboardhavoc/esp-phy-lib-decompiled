/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> rf_test.o -> CMDSTOP_GPIO
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void CMDSTOP_GPIO(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = &ini_gpio_val;
  puVar2 = (undefined4 *)&DAT_60090004;
  do {
    uVar1 = *puVar4;
    puVar3 = puVar2 + 1;
    puVar4 = puVar4 + 1;
    *puVar2 = uVar1;
    puVar2 = puVar3;
  } while (puVar3 != (undefined4 *)0x60090074);
  return;
}

