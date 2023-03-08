/*
 * Last changed at upstream commit c38381964b48fe53dac584b74eefec62fc86511b
 * https://github.com/espressif/esp-phy-lib/commit/c38381964b48fe53dac584b74eefec62fc86511b
 * Upstream date: 2023-03-08 11:00:03 +0800
 * Upstream subject: Update esp32c3/s3 phy lib and add test lib
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
  puVar2 = (undefined4 *)&DAT_60009004;
  do {
    uVar1 = *puVar4;
    puVar3 = puVar2 + 1;
    puVar4 = puVar4 + 1;
    *puVar2 = uVar1;
    puVar2 = puVar3;
  } while (puVar3 != (undefined4 *)0x6000905c);
  phy_printf("\n\nGPIO END!\n\n");
  return;
}

