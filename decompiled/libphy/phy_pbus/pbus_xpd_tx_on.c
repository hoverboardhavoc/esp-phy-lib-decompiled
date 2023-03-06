/*
 * Last changed at upstream commit 1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * https://github.com/espressif/esp-phy-lib/commit/1b8e12d3e0e8b7bcd87c115f09ec0f385700579a
 * Upstream date: 2023-03-06 18:57:45 +0800
 * Upstream subject: esp32h2: update libphy for h2 eco1
 * Source: libphy -> phy_pbus.o -> pbus_xpd_tx_on
 *
 * (C) Espressif, Apache License 2.0.
 * Derivative work (this file): mechanical decompile via Ghidra (NSA, Apache 2.0).
 * Decompiler output may be incomplete or differ from original semantics.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void pbus_xpd_tx_on(void)

{
  pbus_force_test(0,1,0xc);
  pbus_force_test(1,1,0);
  pbus_force_test(1,2,0);
  pbus_force_test(3,1,0x6f);
  do {
  } while (_DAT_600a0910 < 0);
  _DAT_600a0904 = _DAT_600a0904 & 0xfffe0001 | 0x1128c;
  return;
}

