/*
 * Last changed at upstream commit ecd88d5ce3578e45402b80b78c26969ef8732839
 * https://github.com/espressif/esp-phy-lib/commit/ecd88d5ce3578e45402b80b78c26969ef8732839
 * Upstream date: 2023-10-19 05:57:11 +0000
 * Upstream subject: update h2 btbb for ble slave connect
 * Source: librftest -> phy_test.o -> pbus_mem_update
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

void pbus_mem_update(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    set_pbus_mem_update_ppa(param_3);
    puVar1 = &_LC7;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    set_pbus_mem_update_lo(param_2);
    puVar1 = &_LC8;
  }
  phy_printf(puVar1);
  return;
}

