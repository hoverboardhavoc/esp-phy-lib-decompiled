/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_init.o -> phy_xpd_rf
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void phy_xpd_rf(void)

{
  undefined4 uVar1;
  
  uVar1 = enter_critical_phy();
  pbus_debugmode();
  pbus_xpd_tx_off();
  pbus_workmode();
  _DAT_600b0154 = _DAT_600b0154 & 0xfffffff;
  exit_critical_phy(uVar1);
  return;
}

