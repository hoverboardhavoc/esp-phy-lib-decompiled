/*
 * Last changed at upstream commit a8e8b9532e2874ac167d4ade7808fda70fe05820
 * https://github.com/espressif/esp-phy-lib/commit/a8e8b9532e2874ac167d4ade7808fda70fe05820
 * Upstream date: 2023-11-01 14:13:34 +0800
 * Upstream subject: h2 libphy fix ble track
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
    puVar1 = &_LC6;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    set_pbus_mem_update_lo(param_2);
    puVar1 = &_LC7;
  }
  phy_printf(puVar1);
  return;
}

