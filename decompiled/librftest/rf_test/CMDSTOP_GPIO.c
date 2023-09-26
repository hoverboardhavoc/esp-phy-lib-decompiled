/*
 * Last changed at upstream commit f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * https://github.com/espressif/esp-phy-lib/commit/f1d9b9b5cb63dac81b9027f50f7a46b1d840ce5c
 * Upstream date: 2023-09-26 12:19:54 +0800
 * Upstream subject: add librftest.a
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
  } while (puVar3 != (undefined4 *)0x60090064);
  return;
}

